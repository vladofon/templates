#pragma once
#include<string>


template<class E>
class dynamic_array
{
public:

   dynamic_array()
   {
      this->max_size_ = 10;
      this->current_size_ = 0;
      this->array_temp_ = new E[max_size_];
   }

   explicit dynamic_array(const int size)
   {
      this->max_size_ = size;
      this->current_size_ = 0;
      this->array_temp_ = new E[max_size_];
   }

   dynamic_array(const dynamic_array& object)
   {
      this->max_size_ = object.get_max_size();
      this->current_size_ = object.get_current_size();
      this->array_temp_ = object.get_array_temp();
   }

   void add(E elem)
   {
      if (current_size_ < max_size_)
      {
         array_temp_[current_size_] = elem;
         current_size_++;
      }
   }

   dynamic_array& operator = (const dynamic_array& object)
   {
      this->current_size_ = object.get_current_size();
      this->max_size_ = object.get_max_size();
      this->array_temp_ = object.set_array_temp();
   }

   E& operator [](int index)
   {
      if (index >= current_size_) {
         exit(0);
      }
      return array_temp_[index];
   }

   E* get_array_temp() const
   {
      return array_temp_;
   }

   void set_array_temp(E* const array_temp)
   {
      array_temp_ = array_temp;
   }

   int get_max_size() const
   {
      return max_size_;
   }

   void set_max_size(const int max_size)
   {
      max_size_ = max_size;
   }

   int get_current_size() const
   {
      return current_size_;
   }

   void set_current_size(const int current_size)
   {
      current_size_ = current_size;
   }

   std::string to_string()
   {
      std::string dump = "Array [max_size=" + std::to_string(max_size_);
      dump += ", current_size=" + std::to_string(current_size_);
      dump += ", elements={";

      for (int i = 0; i < current_size_; i++)
      {
         dump += array_temp_[i]->to_string() + ", ";
      }

      dump += "\n}];";

      return dump;
   }

private:

   E* array_temp_;
   int max_size_{};
   int current_size_{};
};