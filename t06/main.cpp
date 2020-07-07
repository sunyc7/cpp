#include<iostream>
struct TEST 
{
  int nlon;
  int nlat;
  float** v;
  TEST(int,int);
 ~TEST();
  void disp();
};

TEST::TEST(int nlon,int nlat)
{
  this->nlon=nlon;
  this->nlat=nlat;
  v=new float*[nlon];
  for(int i=0;i<nlon;i++) v[i]=new float[nlat];
  for(int i=0;i<nlon;i++) for(int j=0;j<nlat;j++) v[i][j]=0.0;
}

TEST::~TEST()
{
  for(int i=0;i<nlon;i++) delete[] v[i];
  delete[] v;
}

void TEST::disp()
{
  for(int i=0;i<nlon;i++)
  {
    for(int j=0;j<nlat;j++) std::cout<<v[i][j]<<" ";
    std::cout<<std::endl;
  }
}

int main()
{
  TEST a(10,5);
  float b[10][5];
  float *p;

  for(int n=0,i=0;i<a.nlon;i++) for(int j=0;j<a.nlat;j++){a.v[i][j]=n*1.0;n++;}
  std::cout<<std::endl;
  std::cout<<"a="<<std::endl;
  a.disp();

  p=&a.v[0][0];
  std::cout<<"p=&a.v[0][0]"<<std::endl;
  for(int n=0;n<a.nlon*a.nlat;n++) std::cout<<p[n]<<" ";
  std::cout<<std::endl;

  for(int n=0,i=0;i<10;i++) for(int j=0;j<5;j++){b[i][j]=n*1.0;n++;}
  std::cout<<"b="<<std::endl;
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<5;j++) std::cout<<b[i][j]<<" ";
    std::cout<<std::endl;
  }

  p=&b[0][0];
  std::cout<<"p=&b[0][0]"<<std::endl;
  for(int n=0;n<a.nlon*a.nlat;n++) std::cout<<p[n]<<" ";
  std::cout<<std::endl;
}
