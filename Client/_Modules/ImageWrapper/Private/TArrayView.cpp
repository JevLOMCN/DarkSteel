// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 11

// operator[] @ 14266ab20

uchar * __thiscall
TArrayView<unsigned_char_const_,__int64>::operator[]
          (TArrayView<unsigned_char_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266aba0

ushort * __thiscall
TArrayView<unsigned_short_const_,__int64>::operator[]
          (TArrayView<unsigned_short_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ushort *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266ac20

uint * __thiscall
TArrayView<unsigned_int_const_,__int64>::operator[]
          (TArrayView<unsigned_int_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266aca0

float * __thiscall
TArrayView<float_const_,__int64>::operator[](TArrayView<float_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266ad20

double * __thiscall
TArrayView<double_const_,__int64>::operator[]
          (TArrayView<double_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar1)();
      return pdVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266ada0

FFloat16 * __thiscall
TArrayView<FFloat16_const_,__int64>::operator[]
          (TArrayView<FFloat16_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFloat16 *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFloat16 *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266ae20

ulong64 * __thiscall
TArrayView<unsigned___int64_const_,__int64>::operator[]
          (TArrayView<unsigned___int64_const_,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ulong64 *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266aea0

uchar * __thiscall
TArrayView<unsigned_char,__int64>::operator[]
          (TArrayView<unsigned_char,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266af20

ushort * __thiscall
TArrayView<unsigned_short,__int64>::operator[]
          (TArrayView<unsigned_short,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ushort *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266afa0

float * __thiscall
TArrayView<float,__int64>::operator[](TArrayView<float,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14266b020

FFloat16 * __thiscall
TArrayView<FFloat16,__int64>::operator[](TArrayView<FFloat16,__int64> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFloat16 *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFloat16 *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

