std::vector<Partial> vec;
     
for (int i = 1; i <= 128; i += 2)
{
  vec.push_back(Partial(i, 1.0/i));
}

double* buffer = additive(vec.begin(),
                          vec.end(),
                          48000)
