// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int><TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_&,TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_> @ 145cfdb10

TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> * __thiscall
TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int>::
TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int><TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_&,TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> *this,
          TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> *pTVar4;
  
  this->DataPtr = (TDynamicBuffer<FIndexBuffer> **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 145d918c0

FShaderParameterBindings ** __thiscall
TArrayView<FShaderParameterBindings_const_*,int>::operator[]
          (TArrayView<FShaderParameterBindings_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FShaderParameterBindings **ppFVar4;
  
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
      ppFVar4 = (FShaderParameterBindings **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145df32a0

FShaderCodeEntry * __thiscall
TArrayView<FShaderCodeEntry_const_,int>::operator[]
          (TArrayView<FShaderCodeEntry_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FShaderCodeEntry *pFVar4;
  
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
      pFVar4 = (FShaderCodeEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145df3320

FShaderMapEntry * __thiscall
TArrayView<FShaderMapEntry_const_,int>::operator[]
          (TArrayView<FShaderMapEntry_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FShaderMapEntry *pFVar4;
  
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
      pFVar4 = (FShaderMapEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Slice @ 145e6fc70

TArrayView<char,int> * __thiscall
TArrayView<char,int>::Slice
          (TArrayView<char,int> *this,TArrayView<char,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<char,int> *pTVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = this->DataPtr + param_1;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<char,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// Slice @ 145e6fd90

TArrayView<wchar_t,int> * __thiscall
TArrayView<wchar_t,int>::Slice
          (TArrayView<wchar_t,int> *this,TArrayView<wchar_t,int> *__return_storage_ptr__,int param_1
          ,int param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<wchar_t,int> *pTVar4;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<wchar_t,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<wchar_t,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<wchar_t,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pwVar1 = this->DataPtr;
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = pwVar1 + param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<wchar_t,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Contains<TStringView<wchar_t>_> @ 145e76ca0

bool __thiscall
TArrayView<TStringView<wchar_t>_const_,int>::Contains<TStringView<wchar_t>_>
          (TArrayView<TStringView<wchar_t>_const_,int> *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> *pTVar3;
  int iVar4;
  TStringView<wchar_t> *pTVar5;
  
  pTVar5 = this->DataPtr;
  pTVar3 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar3) {
      return false;
    }
    iVar1 = pTVar5->Size;
    iVar4 = (int)*(undefined8 *)&param_1->Size;
    if (iVar1 == iVar4) {
      if ((iVar1 != 0) && (iVar4 != 0)) {
        iVar2 = iVar4;
        if (iVar1 < iVar4) {
          iVar2 = iVar1;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp(pTVar5->DataPtr,param_1->DataPtr,(longlong)iVar2);
        if (iVar2 != 0) goto LAB_145e76d08;
      }
      if (iVar1 == iVar4) {
        return true;
      }
    }
LAB_145e76d08:
    pTVar5 = pTVar5 + 1;
  } while( true );
}

