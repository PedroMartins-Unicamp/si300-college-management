#ifndef ABSTRACT_DAO_H_
#define ABSTRACT_DAO_H_

#include <memory>
#include <vector>

template <typename T> class AbstractDAO {
protected:
  std::vector<std::shared_ptr<T>> items;

public:
  virtual void
  create(std::shared_ptr<T> item) = 0; // { items.push_back(item); }

  virtual std::shared_ptr<T> read(int index) const = 0;

  virtual void remove(int index) = 0;
};

#endif
