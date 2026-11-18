// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 1414e3580

TArrayView<FString_const_,int> * __thiscall
TArrayView<FString_const_,int>::
TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FString_const_,int> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FString_const_,int> *pTVar4;
  
  this->DataPtr = (FString *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FString_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<int_const_,int><std::initializer_list<int>_&,std::initializer_list<int>_> @ 1414e35f0

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::
TArrayView<int_const_,int><std::initializer_list<int>_&,std::initializer_list<int>_>
          (TArrayView<int_const_,int> *this,initializer_list<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int_const_,int> *pTVar3;
  int iVar4;
  
  this->DataPtr = param_1->_First;
  iVar4 = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 2);
  if (-1 < iVar4) {
    this->ArrayNum = iVar4;
    return this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArrayView<int_const_,int> *)(*pcVar1)();
    return pTVar3;
  }
  this->ArrayNum = iVar4;
  return this;
}

// TArrayView<FString_const_,int><std::initializer_list<FString>_&,std::initializer_list<FString>_> @ 1414e3660

TArrayView<FString_const_,int> * __thiscall
TArrayView<FString_const_,int>::
TArrayView<FString_const_,int><std::initializer_list<FString>_&,std::initializer_list<FString>_>
          (TArrayView<FString_const_,int> *this,initializer_list<FString> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FString_const_,int> *pTVar3;
  int iVar4;
  
  this->DataPtr = param_1->_First;
  iVar4 = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 4);
  if (-1 < iVar4) {
    this->ArrayNum = iVar4;
    return this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArrayView<FString_const_,int> *)(*pcVar1)();
    return pTVar3;
  }
  this->ArrayNum = iVar4;
  return this;
}

// operator[] @ 14158ce40

TArrayView<int_const_,int> * __thiscall
TArrayView<TArrayView<int_const_,int>_const_,int>::operator[]
          (TArrayView<TArrayView<int_const_,int>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int_const_,int> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<int_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141621dd0

FPtrInfo * __thiscall
TArrayView<FPtrInfo,int>::operator[](TArrayView<FPtrInfo,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPtrInfo *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPtrInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14167ca20

FPersistentStorageCategory * __thiscall
TArrayView<FPersistentStorageCategory,int>::operator[]
          (TArrayView<FPersistentStorageCategory,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPersistentStorageCategory *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPersistentStorageCategory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14173b630

uint * __thiscall
TArrayView<unsigned_int_const_,int>::operator[]
          (TArrayView<unsigned_int_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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

// operator[] @ 1417aa450

FIoOffsetAndLength * __thiscall
TArrayView<FIoOffsetAndLength_const_,int>::operator[]
          (TArrayView<FIoOffsetAndLength_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoOffsetAndLength *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoOffsetAndLength *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1417aa4d0

FIoStoreTocCompressedBlockEntry * __thiscall
TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
          (TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoStoreTocCompressedBlockEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoStoreTocCompressedBlockEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1417aa550

FIoChunkId * __thiscall
TArrayView<FIoChunkId_const_,int>::operator[](TArrayView<FIoChunkId_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoChunkId *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIoChunkId *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141a73310

TStringView<char> * __thiscall
TArrayView<TStringView<char>_const_,int>::operator[]
          (TArrayView<TStringView<char>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TStringView<char> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TStringView<char> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141a73390

TStringView<char8_t> * __thiscall
TArrayView<TStringView<char8_t>_const_,int>::operator[]
          (TArrayView<TStringView<char8_t>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TStringView<char8_t> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TStringView<char8_t> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141a73410

TStringView<wchar_t> * __thiscall
TArrayView<TStringView<wchar_t>_const_,int>::operator[]
          (TArrayView<TStringView<wchar_t>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TStringView<wchar_t> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TStringView<wchar_t> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141a73490

uchar * __thiscall
TArrayView<char8_t_const_,int>::operator[](TArrayView<char8_t_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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

// operator[] @ 141a73510

wchar_t * __thiscall
TArrayView<wchar_t_const_,int>::operator[](TArrayView<wchar_t_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar1)();
      return pwVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<wchar_t_const_*_const,int><TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_&,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_> @ 141adece0

TArrayView<wchar_t_const_*_const,int> * __thiscall
TArrayView<wchar_t_const_*_const,int>::
TArrayView<wchar_t_const_*_const,int><TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_&,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<wchar_t_const_*_const,int> *this,
          TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<wchar_t_const_*_const,int> *pTVar4;
  
  this->DataPtr = (wchar_t **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<wchar_t_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 141c8efd0

FSharedBuffer * __thiscall
TArrayView<FSharedBuffer_const_,int>::operator[]
          (TArrayView<FSharedBuffer_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSharedBuffer *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSharedBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

