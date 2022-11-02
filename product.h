#include <memory>
#include <string>
class Product {
public:
  // TODO: Create a constructor that accepts a name, a price,
  // a Product pointer to the left and Product pointer to the right.


  const std::string &Name() const { return name_; }
  double Price() const { return price_; }

  // TODO: Create a recursive function called FindPrice that returns
  // the price of a product.


private:
  std::string name_;
  double price_;
  // TODO: Create pointer to the left Product
  
  // TODO: Create pointer to the right Product
  
};