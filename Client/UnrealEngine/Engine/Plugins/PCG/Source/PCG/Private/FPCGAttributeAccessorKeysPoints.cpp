// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// FPCGAttributeAccessorKeysPoints @ 149e348e0

FPCGAttributeAccessorKeysPoints * __thiscall
FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints
          (FPCGAttributeAccessorKeysPoints *this,FPCGPoint *param_1)

{
  undefined4 uStack_c;
  
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPoints__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Points).DataPtr = param_1;
  *(ulonglong *)&(this->Points).ArrayNum = CONCAT44(uStack_c,1);
  return this;
}

// FPCGAttributeAccessorKeysPoints @ 149e34920

FPCGAttributeAccessorKeysPoints * __thiscall
FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints
          (FPCGAttributeAccessorKeysPoints *this,FPCGPoint *param_1)

{
  (this->Points).DataPtr = param_1;
  (this->Points).ArrayNum = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPoints__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// FPCGAttributeAccessorKeysPoints @ 149e34950

FPCGAttributeAccessorKeysPoints * __thiscall
FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints
          (FPCGAttributeAccessorKeysPoints *this,TArrayView<FPCGPoint_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGAttributeAccessorKeysPoints *pFVar4;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPoints__6B_;
  iVar1 = param_1->ArrayNum;
  (this->Points).DataPtr = param_1->DataPtr;
  (this->Points).ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGAttributeAccessorKeysPoints *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FPCGAttributeAccessorKeysPoints @ 149e349b0

FPCGAttributeAccessorKeysPoints * __thiscall
FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints
          (FPCGAttributeAccessorKeysPoints *this,TArrayView<FPCGPoint,int> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPoints__6B_;
  iVar1 = param_1->ArrayNum;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->Points).DataPtr = param_1->DataPtr;
  (this->Points).ArrayNum = iVar1;
  *(undefined4 *)&(this->Points).field_0xc = uVar2;
  return this;
}

// GetGenericObjectKeys @ 149e59780

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,TArrayView<void_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Points).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59900

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,TArrayView<void_const_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  
  ppvVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppvVar10 = pFVar1 + param_1;
      iVar9 = (this->Points).ArrayNum;
      ppvVar10 = ppvVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetKeyIndices @ 149e5a660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetKeyIndices
          (FPCGAttributeAccessorKeysPoints *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    return false;
  }
  if (iVar1 < param_1 + param_2) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_3,param_2,Default);
    uVar7 = 0;
    if (0 < param_2) {
      lVar8 = 0;
      do {
        iVar1 = uVar7 + param_1;
        iVar2 = (this->Points).ArrayNum;
        uVar6 = 0;
        if ((int)uVar7 < param_3->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = uVar7 + 1;
        *(int *)((param_3->AllocatorInstance).Data + lVar8) = iVar1 % iVar2;
        lVar8 = lVar8 + 4;
      } while ((int)uVar7 < param_2);
    }
    return true;
  }
  *param_4 = true;
  return true;
}

// GetMetadataEntryKeys @ 149e5b7d0

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,TArrayView<__int64_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long64 **pplVar10;
  
  pplVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *pplVar10 = &pFVar1[param_1].MetadataEntry;
      uVar7 = uVar7 + 1;
      iVar9 = (this->Points).ArrayNum;
      pplVar10 = pplVar10 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetMetadataEntryKeys @ 149e5b940

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,
          TArrayView<__int64_const_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long64 **pplVar10;
  
  pplVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *pplVar10 = &pFVar1[param_1].MetadataEntry;
      uVar7 = uVar7 + 1;
      iVar9 = (this->Points).ArrayNum;
      pplVar10 = pplVar10 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetNum @ 149e5c3f0

int __thiscall FPCGAttributeAccessorKeysPoints::GetNum(FPCGAttributeAccessorKeysPoints *this)

{
  return (this->Points).ArrayNum;
}

// GetPointKeys @ 149e5cd10

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetPointKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,TArrayView<FPCGPoint_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FPCGPoint **ppFVar10;
  
  ppFVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppFVar10 = pFVar1 + param_1;
      iVar9 = (this->Points).ArrayNum;
      ppFVar10 = ppFVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetPointKeys @ 149e5ce90

bool __thiscall
FPCGAttributeAccessorKeysPoints::GetPointKeys
          (FPCGAttributeAccessorKeysPoints *this,int param_1,
          TArrayView<FPCGPoint_const_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FPCGPoint **ppFVar10;
  
  ppFVar10 = param_2->DataPtr;
  iVar9 = (this->Points).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  if (iVar9 <= param_1) {
    param_1 = param_1 % iVar9;
  }
  uVar7 = 0;
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (0 < iVar8) {
    do {
      uVar5 = 0;
      if (param_1 < iVar9) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = param_1 + 1;
      pFVar1 = (this->Points).DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *ppFVar10 = pFVar1 + param_1;
      iVar9 = (this->Points).ArrayNum;
      ppFVar10 = ppFVar10 + 1;
      uVar7 = uVar7 + 1;
      param_1 = 0;
      if ((int)uVar5 < iVar9) {
        param_1 = uVar5;
      }
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// IsClassSupported @ 149e77dc0

bool __thiscall
FPCGAttributeAccessorKeysPoints::IsClassSupported
          (FPCGAttributeAccessorKeysPoints *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = FPCGPoint::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

