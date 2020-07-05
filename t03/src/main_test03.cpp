/***************************************************************************************************
 *  Project  :
 *  Function :
 *--------------------------------------------------------------------------------------------------
 *  Author   : Yao-Chong SUN, sunyc7@foxmail.com 
 *  Company  : SUSTECH, CHINA.
 *--------------------------------------------------------------------------------------------------
 *  Copyright 2020-2022. You should have received a copy of the GNU
 *  General Public License v3.0 along with ndg2d.
 *  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************************************/
#include<iostream>
#include "struct_matrix.h"
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
int main()
{
  RMATRIX A(5,5);

  A.mat[0][0]=+0.5;
  A.mat[0][1]=+1.5;
  A.mat[0][2]=+2.5;
  A.mat[0][3]=+3.5;
  A.mat[0][4]=+4.5;

  A.mat[1][0]=+1.0;
  A.mat[1][1]=+2.0;
  A.mat[1][2]=+1.0;
  A.mat[1][3]=+1.0;
  A.mat[1][4]=+1.0;

  A.mat[2][0]=+1.0;
  A.mat[2][1]=+3.0;
  A.mat[2][2]=+4.0;
  A.mat[2][3]=+5.0;
  A.mat[2][4]=+5.0;

  A.mat[3][0]=+1.0;
  A.mat[3][1]=+3.0;
  A.mat[3][2]=+5.0;
  A.mat[3][3]=+4.0;
  A.mat[3][4]=+5.0;

  A.mat[4][0]=+1.0;
  A.mat[4][1]=+3.0;
  A.mat[4][2]=+5.0;
  A.mat[4][3]=+5.0;
  A.mat[4][4]=+4.0;

  std::cout<<"A="<<std::endl;
  A.disp();

//  std::cout<<std::endl;

  //A.interchanges(0,1);
//  A.disp();
//  std::cout<<std::endl;

//  A.scaling(1.0,0);
//  A.disp();
//  std::cout<<std::endl;

/*
  A.replacement(1.0,1,2);
  A.disp();
  std::cout<<std::endl;
*/

  std::cout<<"|A|="<<matDet(A)<<std::endl;

  RMATRIX* iA=matInv(A);
  std::cout<<"iA="<<std::endl;
  iA->disp();

  RMATRIX* I=matMultiply(*iA,A);
  std::cout<<"A*A^{-1}="<<std::endl;
  I->disp();

  return 0;
}
//--------------------------------------------------------------------------------------------------
// vim: ft=cpp:nu:nowrap
