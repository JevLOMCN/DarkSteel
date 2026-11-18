// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 11

// UIntegerAP32 @ 1495a7ec0

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this,UIntegerAP32 *param_1)

{
  vector<unsigned_int,std::allocator<unsigned_int>_> *pvVar1;
  vector<unsigned_int,std::allocator<unsigned_int>_> *pvVar2;
  
  pvVar1 = &this->mBits;
  pvVar2 = &param_1->mBits;
  (pvVar1->_Mypair)._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  this->mNumBits = param_1->mNumBits;
  if (pvVar1 != pvVar2) {
    (pvVar1->_Mypair)._Myval2._Myfirst = (pvVar2->_Mypair)._Myval2._Myfirst;
    (this->mBits)._Mypair._Myval2._Mylast = (param_1->mBits)._Mypair._Myval2._Mylast;
    (this->mBits)._Mypair._Myval2._Myend = (param_1->mBits)._Mypair._Myval2._Myend;
    (pvVar2->_Mypair)._Myval2._Myfirst = (uint *)0x0;
    (param_1->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
    (param_1->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  }
  param_1->mNumBits = 0;
  return this;
}

// UIntegerAP32 @ 1495a7f10

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this,UIntegerAP32 *param_1)

{
  (this->mBits)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  this->mNumBits = param_1->mNumBits;
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(&this->mBits,&param_1->mBits);
  return this;
}

// UIntegerAP32 @ 1495a7f50

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this,int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  
  this->mNumBits = param_1;
  uVar2 = (ulonglong)(((int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 0x1fU)) >> 5) + 1);
  (this->mBits)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    puVar1 = std::_Allocate<16,std::_Default_allocate_traits>(uVar2 * 4);
    (this->mBits)._Mypair._Myval2._Myfirst = puVar1;
    (this->mBits)._Mypair._Myval2._Myend = puVar1 + uVar2;
    puVar1 = (this->mBits)._Mypair._Myval2._Myfirst;
    memset(puVar1,0,uVar2 * 4);
    (this->mBits)._Mypair._Myval2._Mylast = puVar1 + uVar2;
  }
  return this;
}

// UIntegerAP32 @ 1495a7ff0

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  (this->mBits)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  if (param_1 != 0) {
    uVar2 = param_1 >> 1 | param_1;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    iVar1 = gsTrailingBitTable[(-param_1 & param_1) * 0x77cb531 >> 0x1b];
    this->mNumBits = (gsLeadingBitTable[(uVar2 >> 0x10 | uVar2) * 0x7c4acdd >> 0x1b] - iVar1) + 1;
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::resize(&this->mBits,1);
    *(this->mBits)._Mypair._Myval2._Myfirst = param_1 >> ((byte)iVar1 & 0x1f);
    return this;
  }
  this->mNumBits = 0;
  return this;
}

// UIntegerAP32 @ 1495a80d0

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this)

{
  this->mNumBits = 0;
  (this->mBits)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  return this;
}

// UIntegerAP32 @ 1495a80f0

UIntegerAP32 * __thiscall gte::UIntegerAP32::UIntegerAP32(UIntegerAP32 *this,ulong64 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  (this->mBits)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
  (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  if (param_1 == 0) {
    this->mNumBits = 0;
  }
  else {
    iVar2 = GetLeadingBit(param_1);
    uVar3 = (uint)param_1;
    if (uVar3 == 0) {
      uVar3 = (uint)(param_1 >> 0x20);
      if (uVar3 != 0) {
        iVar5 = gsTrailingBitTable[(-uVar3 & uVar3) * 0x77cb531 >> 0x1b] + 0x20;
      }
    }
    else {
      iVar5 = gsTrailingBitTable[(-uVar3 & uVar3) * 0x77cb531 >> 0x1b];
    }
    iVar2 = iVar2 - iVar5;
    uVar4 = param_1 >> ((byte)iVar5 & 0x3f);
    this->mNumBits = iVar2 + 1;
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::resize
              (&this->mBits,(longlong)(((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1));
    *(this->mBits)._Mypair._Myval2._Myfirst = (uint)uVar4;
    puVar1 = (this->mBits)._Mypair._Myval2._Myfirst;
    if (1 < (ulonglong)((longlong)(this->mBits)._Mypair._Myval2._Mylast - (longlong)puVar1 >> 2)) {
      puVar1[1] = (uint)(uVar4 >> 0x20);
    }
  }
  return this;
}

// operator= @ 1495abb10

UIntegerAP32 * __thiscall gte::UIntegerAP32::operator=(UIntegerAP32 *this,UIntegerAP32 *param_1)

{
  vector<unsigned_int,std::allocator<unsigned_int>_> *pvVar1;
  vector<unsigned_int,std::allocator<unsigned_int>_> *pvVar2;
  uint *puVar3;
  uint *puVar4;
  ulong64 uVar5;
  
  pvVar1 = &param_1->mBits;
  pvVar2 = &this->mBits;
  this->mNumBits = param_1->mNumBits;
  if (pvVar2 != pvVar1) {
    puVar3 = (pvVar2->_Mypair)._Myval2._Myfirst;
    if (puVar3 != (uint *)0x0) {
      uVar5 = (longlong)(this->mBits)._Mypair._Myval2._Myend - (longlong)puVar3 & 0xfffffffffffffffc
      ;
      puVar4 = puVar3;
      if (0xfff < uVar5) {
        puVar4 = *(uint **)(puVar3 + -2);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(puVar4,uVar5);
      (pvVar2->_Mypair)._Myval2._Myfirst = (uint *)0x0;
      (this->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
      (this->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
    }
    (pvVar2->_Mypair)._Myval2._Myfirst = (pvVar1->_Mypair)._Myval2._Myfirst;
    (this->mBits)._Mypair._Myval2._Mylast = (param_1->mBits)._Mypair._Myval2._Mylast;
    (this->mBits)._Mypair._Myval2._Myend = (param_1->mBits)._Mypair._Myval2._Myend;
    (pvVar1->_Mypair)._Myval2._Myfirst = (uint *)0x0;
    (param_1->mBits)._Mypair._Myval2._Mylast = (uint *)0x0;
    (param_1->mBits)._Mypair._Myval2._Myend = (uint *)0x0;
  }
  param_1->mNumBits = 0;
  return this;
}

// operator= @ 1495abbf0

UIntegerAP32 * __thiscall gte::UIntegerAP32::operator=(UIntegerAP32 *this,UIntegerAP32 *param_1)

{
  this->mNumBits = param_1->mNumBits;
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(&this->mBits,&param_1->mBits);
  return this;
}

// Read @ 1495c6260

bool __thiscall
gte::UIntegerAP32::Read(UIntegerAP32 *this,basic_ifstream<char,std::char_traits<char>_> *param_1)

{
  basic_istream<char,struct_std::char_traits<char>_> *pbVar1;
  ulong64 local_res8;
  
  pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read
                     ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)this,4);
  if (((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 4) == 0) {
    pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read
                       ((basic_istream<char,std::char_traits<char>_> *)param_1,(char *)&local_res8,8
                       );
    if (((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 4) == 0) {
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::resize(&this->mBits,local_res8);
      pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)param_1,
                          (char *)(this->mBits)._Mypair._Myval2._Myfirst,local_res8 * 4);
      return *(int *)(pbVar1 + (longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10) == 0;
    }
  }
  return false;
}

// SetNumBits @ 1495c9d70

void __thiscall gte::UIntegerAP32::SetNumBits(UIntegerAP32 *this,uint param_1)

{
  uint *puVar1;
  
  this->mNumBits = param_1;
  if (0 < (int)param_1) {
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::resize
              (&this->mBits,(ulonglong)((param_1 - 1 >> 5) + 1));
    return;
  }
  puVar1 = (this->mBits)._Mypair._Myval2._Myfirst;
  if (puVar1 != (this->mBits)._Mypair._Myval2._Mylast) {
    (this->mBits)._Mypair._Myval2._Mylast = puVar1;
  }
  return;
}

// Write @ 1495cbf70

bool __thiscall
gte::UIntegerAP32::Write(UIntegerAP32 *this,basic_ofstream<char,std::char_traits<char>_> *param_1)

{
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar1;
  longlong local_res8;
  
  pbVar1 = std::basic_ostream<char,std::char_traits<char>_>::write
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)this,4);
  if (((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 4) == 0) {
    local_res8 = (longlong)(this->mBits)._Mypair._Myval2._Mylast -
                 (longlong)(this->mBits)._Mypair._Myval2._Myfirst >> 2;
    pbVar1 = std::basic_ostream<char,std::char_traits<char>_>::write
                       ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)&local_res8,8
                       );
    if (((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 4) == 0) {
      pbVar1 = std::basic_ostream<char,std::char_traits<char>_>::write
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,
                          (char *)(this->mBits)._Mypair._Myval2._Myfirst,local_res8 * 4);
      return *(int *)(pbVar1 + (longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10) == 0;
    }
  }
  return false;
}

