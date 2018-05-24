
class Exception{
    public:
        Exception(std::string msg): msg(msg){}
        const std::string msg;
};

inline int randint(int min, int max){
  return min + (std::rand() % (int)(max - min + 1));
}


template<typename T, typename Functor>
void foreach(std::vector<T>& v, Functor& func, bool verbose=false){
  for(unsigned int i=0; i<v.size(); i++){
    if(verbose) std::cout << "\rforeach: " << i+1 << " of " << v.size();
    v[i] = func(v[i]);
  }
  std::cout << "\r" << std::endl;
}
