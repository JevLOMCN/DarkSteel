// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FPBDFlatWeightMap @ 143be2050

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::FPBDFlatWeightMap
          (FPBDFlatWeightMap *this,FPBDFlatWeightMap *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  float *pfVar3;
  TVector<float,2> TVar4;
  undefined4 uVar5;
  
  (this->MapValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MapValues).ArrayMax;
  iVar2 = (param_1->MapValues).ArrayNum;
  _Src = (param_1->MapValues).AllocatorInstance.Data;
  (this->MapValues).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->MapValues).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  uVar5 = *(undefined4 *)&(param_1->MapView).field_0x4;
  pfVar3 = (param_1->MapView).MapValues.DataPtr;
  (this->MapView).NumElements = (param_1->MapView).NumElements;
  *(undefined4 *)&(this->MapView).field_0x4 = uVar5;
  (this->MapView).MapValues.DataPtr = pfVar3;
  uVar5 = *(undefined4 *)&(param_1->MapView).MapValues.field_0xc;
  TVar4 = (param_1->MapView).OffsetRange;
  (this->MapView).MapValues.ArrayNum = (param_1->MapView).MapValues.ArrayNum;
  *(undefined4 *)&(this->MapView).MapValues.field_0xc = uVar5;
  (this->MapView).OffsetRange = TVar4;
  return this;
}

// FPBDFlatWeightMap @ 143be20f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::FPBDFlatWeightMap
          (FPBDFlatWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          int param_3,TVector<float,2> *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FPBDFlatWeightMap *pFVar8;
  FScriptContainerElement **ppFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 local_70;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  
  uVar10 = 0;
  (this->MapValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapValues).ArrayNum = 0;
  (this->MapValues).ArrayMax = 0;
  if ((param_2->ArrayNum == param_3) && (0 < param_3)) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->MapValues,param_3,Default)
    ;
    uVar12 = uVar10;
    do {
      fVar1 = *(float *)&param_4->field_0x4;
      uVar11 = (uint)uVar12;
      fVar2 = *(float *)param_4;
      uVar7 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPBDFlatWeightMap *)(*pcVar5)();
        return pFVar8;
      }
      fVar13 = *(float *)((longlong)param_2->DataPtr + uVar10);
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      uVar7 = 0;
      if ((int)uVar11 < (this->MapValues).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (fVar13 <= fVar2) {
        fVar13 = fVar2;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPBDFlatWeightMap *)(*pcVar5)();
        return pFVar8;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(float *)((this->MapValues).AllocatorInstance.Data + uVar10) = fVar13;
      uVar10 = uVar10 + 4;
    } while ((int)(uVar11 + 1) < param_3);
  }
  pFVar4 = (this->MapValues).AllocatorInstance.Data;
  iVar3 = (this->MapValues).ArrayNum;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FPBDFlatWeightMap *)(*pcVar5)();
    return pFVar8;
  }
  (this->MapView).NumElements = param_3;
  if (iVar3 == param_3) {
    ppFVar9 = &local_68;
    local_68 = pFVar4;
    uStack_60 = CONCAT44(uStack_7c,iVar3);
  }
  else {
    local_78 = (FScriptContainerElement *)0x0;
    ppFVar9 = &local_78;
    local_70 = 0;
  }
  pFVar4 = ppFVar9[1];
  (this->MapView).MapValues.DataPtr = (float *)*ppFVar9;
  *(FScriptContainerElement **)&(this->MapView).MapValues.ArrayNum = pFVar4;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  *(float *)&(this->MapView).OffsetRange = fVar1;
  *(float *)&(this->MapView).OffsetRange.field_0x4 = fVar2 - fVar1;
  return this;
}

// GetValue @ 143c69d90

float __thiscall Chaos::Softs::FPBDFlatWeightMap::GetValue(FPBDFlatWeightMap *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->MapView).MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->MapView).OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->MapView).OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[](&(this->MapView).MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->MapView).OffsetRange;
}

// FPBDFlatWeightMap<3> @ 143e636a0

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::FPBDFlatWeightMap<3>
          (FPBDFlatWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,3>_const_,int> *param_3,int param_4,int param_5,
          void *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FPBDFlatWeightMap *pFVar8;
  FScriptContainerElement **ppFVar9;
  undefined4 uStack_2c;
  FScriptContainerElement *local_28;
  undefined4 local_20;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  CalculateMapValues<3>(&this->MapValues,param_2,param_3,param_4,param_5);
  iVar3 = param_3->ArrayNum;
  local_18 = (this->MapValues).AllocatorInstance.Data;
  iVar4 = (this->MapValues).ArrayNum;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPBDFlatWeightMap *)(*pcVar5)();
      return pFVar8;
    }
  }
  (this->MapView).NumElements = iVar3;
  if (iVar4 == iVar3) {
    ppFVar9 = &local_18;
    uStack_10 = CONCAT44(uStack_2c,iVar4);
  }
  else {
    local_28 = (FScriptContainerElement *)0x0;
    local_20 = 0;
    ppFVar9 = &local_28;
  }
  pFVar6 = ppFVar9[1];
  (this->MapView).MapValues.DataPtr = (float *)*ppFVar9;
  *(FScriptContainerElement **)&(this->MapView).MapValues.ArrayNum = pFVar6;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  *(float *)&(this->MapView).OffsetRange = fVar1;
  *(float *)&(this->MapView).OffsetRange.field_0x4 = fVar2 - fVar1;
  return this;
}

// CalculateMapValues<3> @ 143e86f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDFlatWeightMap::CalculateMapValues<3>
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1,
          TArrayView<Chaos::TVector<int,3>_const_,int> *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  TVector<int,3> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar10;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->ArrayNum != param_4) || (param_4 < 1)) {
    return __return_storage_ptr__;
  }
  iVar1 = param_2->ArrayNum;
  if ((0 < iVar1) &&
     (TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (__return_storage_ptr__,iVar1,Default), fVar4 = __real_3eaaaaab,
     fVar3 = __real_3f800000, uVar10 = uVar8, 0 < iVar1)) {
    do {
      uVar9 = (uint)uVar10;
      pTVar6 = TArrayView<Chaos::TVector<int,3>_const_,int>::operator[](param_2,uVar9);
      uVar11 = (pTVar6->field0_0x0)._s_0.X - param_3;
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      uVar12 = (pTVar6->field0_0x0)._s_0.Y - param_3;
      fVar15 = param_1->DataPtr[(int)uVar11];
      if (fVar3 <= param_1->DataPtr[(int)uVar11]) {
        fVar15 = fVar3;
      }
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      uVar11 = (pTVar6->field0_0x0)._s_0.Z - param_3;
      fVar13 = param_1->DataPtr[(int)uVar12];
      if (fVar3 <= param_1->DataPtr[(int)uVar12]) {
        fVar13 = fVar3;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      fVar14 = param_1->DataPtr[(int)uVar11];
      if (fVar3 <= param_1->DataPtr[(int)uVar11]) {
        fVar14 = fVar3;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      uVar12 = 0;
      if ((int)uVar9 < __return_storage_ptr__->ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + uVar8 * 4) =
           (fVar14 + fVar15 + fVar13) * fVar4;
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar8 < (longlong)iVar1);
  }
  return __return_storage_ptr__;
}

// operator= @ 143eb2870

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::operator=(FPBDFlatWeightMap *this,FPBDFlatWeightMap *param_1)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  TVector<float,2> TVar3;
  undefined4 uVar4;
  
  if (this != param_1) {
    pFVar1 = (this->MapValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->MapValues).AllocatorInstance.Data = (param_1->MapValues).AllocatorInstance.Data;
    (param_1->MapValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MapValues).ArrayNum = (param_1->MapValues).ArrayNum;
    (this->MapValues).ArrayMax = (param_1->MapValues).ArrayMax;
    (param_1->MapValues).ArrayNum = 0;
    (param_1->MapValues).ArrayMax = 0;
  }
  uVar4 = *(undefined4 *)&(param_1->MapView).field_0x4;
  pfVar2 = (param_1->MapView).MapValues.DataPtr;
  (this->MapView).NumElements = (param_1->MapView).NumElements;
  *(undefined4 *)&(this->MapView).field_0x4 = uVar4;
  (this->MapView).MapValues.DataPtr = pfVar2;
  uVar4 = *(undefined4 *)&(param_1->MapView).MapValues.field_0xc;
  TVar3 = (param_1->MapView).OffsetRange;
  (this->MapView).MapValues.ArrayNum = (param_1->MapView).MapValues.ArrayNum;
  *(undefined4 *)&(this->MapView).MapValues.field_0xc = uVar4;
  (this->MapView).OffsetRange = TVar3;
  return this;
}

// operator= @ 143eb28e0

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::operator=(FPBDFlatWeightMap *this,FPBDFlatWeightMap *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  float *pfVar4;
  TVector<float,2> TVar5;
  undefined4 uVar6;
  
  if (this != param_1) {
    iVar2 = (this->MapValues).ArrayMax;
    piVar1 = &(this->MapValues).ArrayMax;
    _Src = (param_1->MapValues).AllocatorInstance.Data;
    iVar3 = (param_1->MapValues).ArrayNum;
    (this->MapValues).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->MapValues).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  uVar6 = *(undefined4 *)&(param_1->MapView).field_0x4;
  pfVar4 = (param_1->MapView).MapValues.DataPtr;
  (this->MapView).NumElements = (param_1->MapView).NumElements;
  *(undefined4 *)&(this->MapView).field_0x4 = uVar6;
  (this->MapView).MapValues.DataPtr = pfVar4;
  uVar6 = *(undefined4 *)&(param_1->MapView).MapValues.field_0xc;
  TVar5 = (param_1->MapView).OffsetRange;
  (this->MapView).MapValues.ArrayNum = (param_1->MapView).MapValues.ArrayNum;
  *(undefined4 *)&(this->MapView).MapValues.field_0xc = uVar6;
  (this->MapView).OffsetRange = TVar5;
  return this;
}

// ReorderIndicesAndShrink @ 143ecb0e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDFlatWeightMap::ReorderIndicesAndShrink
          (FPBDFlatWeightMap *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 local_68 [24];
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  TVector<float,2> aTStack_40 [3];
  
  iVar7 = (this->MapValues).ArrayNum;
  if (iVar7 == param_1->ArrayNum) {
    uVar9 = 0;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_4_ = 0;
    local_68._12_4_ = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_68,param_2,Default);
    iVar7 = param_1->ArrayNum;
    uVar10 = uVar9;
    if (0 < iVar7) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + uVar10);
        if (uVar5 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar8 < (this->MapValues).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar12 = *(undefined4 *)((this->MapValues).AllocatorInstance.Data + uVar10);
          uVar6 = 0;
          if ((int)uVar5 < (int)local_68._8_4_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_68._0_8_ + (longlong)(int)uVar5 * 4) = uVar12;
        }
        iVar7 = param_1->ArrayNum;
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 4;
      } while ((int)(uVar8 + 1) < iVar7);
    }
    if (this != (FPBDFlatWeightMap *)local_68) {
      pFVar1 = (this->MapValues).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->MapValues).AllocatorInstance.Data = (FScriptContainerElement *)local_68._0_8_;
      (this->MapValues).ArrayNum = local_68._8_4_;
      (this->MapValues).ArrayMax = local_68._12_4_;
      local_68._8_4_ = 0;
      local_68._12_4_ = 0;
      local_68._0_8_ = (FScriptContainerElement *)0x0;
    }
    iVar7 = (this->MapValues).ArrayNum;
    local_68._16_8_ = (this->MapValues).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar7 == (this->MapView).NumElements) {
      iVar11 = local_68._16_4_;
      uVar12 = local_68._20_4_;
      iVar13 = iVar7;
    }
    else {
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      uVar3 = local_48;
      aTStack_40[0]._0_4_ = 0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      iVar13 = 0;
      iVar11 = (int)local_48;
      uVar12 = local_48._4_4_;
      uStack_4c = aTStack_40[0]._4_4_;
      local_48 = uVar3;
    }
    *(int *)&(this->MapView).MapValues.DataPtr = iVar11;
    *(undefined4 *)((longlong)&(this->MapView).MapValues.DataPtr + 4) = uVar12;
    (this->MapView).MapValues.ArrayNum = iVar13;
    *(undefined4 *)&(this->MapView).MapValues.field_0xc = uStack_4c;
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      iStack_50 = iVar7;
      FMemory::Free((void *)local_68._0_8_);
      return;
    }
  }
  else if ((iVar7 != 0) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("MapValues.Num() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDFlatWeightMap.h"
                              ,0x114,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// FPBDFlatWeightMap<2> @ 143ee6960

FPBDFlatWeightMap * __thiscall
Chaos::Softs::FPBDFlatWeightMap::FPBDFlatWeightMap<2>
          (FPBDFlatWeightMap *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,2>_const_,int> *param_3,int param_4,int param_5,
          void *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FPBDFlatWeightMap *pFVar8;
  FScriptContainerElement **ppFVar9;
  undefined4 uStack_2c;
  FScriptContainerElement *local_28;
  undefined4 local_20;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  CalculateMapValues<2>(&this->MapValues,param_2,param_3,param_4,param_5);
  iVar3 = param_3->ArrayNum;
  local_18 = (this->MapValues).AllocatorInstance.Data;
  iVar4 = (this->MapValues).ArrayNum;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPBDFlatWeightMap *)(*pcVar5)();
      return pFVar8;
    }
  }
  (this->MapView).NumElements = iVar3;
  if (iVar4 == iVar3) {
    ppFVar9 = &local_18;
    uStack_10 = CONCAT44(uStack_2c,iVar4);
  }
  else {
    local_28 = (FScriptContainerElement *)0x0;
    local_20 = 0;
    ppFVar9 = &local_28;
  }
  pFVar6 = ppFVar9[1];
  (this->MapView).MapValues.DataPtr = (float *)*ppFVar9;
  *(FScriptContainerElement **)&(this->MapView).MapValues.ArrayNum = pFVar6;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  *(float *)&(this->MapView).OffsetRange = fVar1;
  *(float *)&(this->MapView).OffsetRange.field_0x4 = fVar2 - fVar1;
  return this;
}

// CalculateMapValues<2> @ 143f04f80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDFlatWeightMap::CalculateMapValues<2>
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1,
          TArrayView<Chaos::TVector<int,2>_const_,int> *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  TVector<int,2> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar13;
  float fVar14;
  ulonglong uVar12;
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->ArrayNum != param_4) || (param_4 < 1)) {
    return __return_storage_ptr__;
  }
  iVar1 = param_2->ArrayNum;
  if ((0 < iVar1) &&
     (TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (__return_storage_ptr__,iVar1,Default), fVar4 = __real_3f000000,
     fVar3 = __real_3f800000, uVar12 = uVar10, 0 < iVar1)) {
    do {
      uVar11 = (uint)uVar12;
      pTVar6 = TArrayView<Chaos::TVector<int,2>_const_,int>::operator[](param_2,uVar11);
      uVar8 = (pTVar6->field0_0x0)._s_0.X - param_3;
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      uVar9 = (pTVar6->field0_0x0)._s_0.Y - param_3;
      fVar14 = param_1->DataPtr[(int)uVar8];
      if (fVar3 <= param_1->DataPtr[(int)uVar8]) {
        fVar14 = fVar3;
      }
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      fVar13 = param_1->DataPtr[(int)uVar9];
      if (fVar3 <= param_1->DataPtr[(int)uVar9]) {
        fVar13 = fVar3;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar9 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + uVar10 * 4) =
           (fVar13 + fVar14) * fVar4;
      uVar10 = uVar10 + 1;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((longlong)uVar10 < (longlong)iVar1);
  }
  return __return_storage_ptr__;
}

