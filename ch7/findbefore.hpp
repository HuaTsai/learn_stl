template <typename ForwardIterator, typename Tp>
inline ForwardIterator find_before(ForwardIterator first, ForwardIterator last,
                                   const Tp &val) {
  if (first == last) {
    return first;
  }
  ForwardIterator next(first);
  ++next;
  while (next != last && !(*next == val)) {
    ++next;
    ++first;
  }
  return first;
}

template <typename ForwardIterator, typename Pred>
inline ForwardIterator find_before_if(ForwardIterator first,
                                      ForwardIterator last, Pred pred) {
  if (first == last) {
    return first;
  }
  ForwardIterator next(first);
  ++next;
  while (next != last && !pred(*next)) {
    ++next;
    ++first;
  }
  return first;
}