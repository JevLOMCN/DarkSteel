// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// FPCGAttributeAccessorKeysPointsSubset @ 149e349d0

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,TArrayView<FPCGPoint_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FPCGAttributeAccessorKeysPointsSubset *pFVar9;
  uint *puVar10;
  FPCGPoint *local_38 [2];
  
  *(undefined1 *)&this->_padding_ = 1;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Points).ArrayMax;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  (this->Points).ArrayNum = 0;
  *piVar1 = 0;
  this->PointData = (UPCGBasePointData *)0x0;
  (this->PointIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointIndices).ArrayNum = 0;
  (this->PointIndices).ArrayMax = 0;
  uVar3 = param_2->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->Points).AllocatorInstance,0,piVar1);
  }
  puVar10 = (uint *)param_2->DataPtr;
  puVar2 = puVar10 + param_2->ArrayNum;
  while( true ) {
    if (puVar10 == puVar2) {
      return this;
    }
    uVar3 = *puVar10;
    uVar7 = 0;
    if ((int)uVar3 < param_1->ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) break;
    local_38[0] = param_1->DataPtr + (int)uVar3;
    pFVar4 = (this->Points).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPCGAttributeAccessorKeysPointsSubset *)(*pcVar5)();
      return pFVar9;
    }
    iVar8 = (this->Points).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Points).AllocatorInstance,piVar1);
    }
    puVar10 = puVar10 + 1;
    (this->Points).ArrayNum = iVar8 + 1;
    *(FPCGPoint **)((this->Points).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38[0];
  }
  pcVar5 = (code *)swi(3);
  pFVar9 = (FPCGAttributeAccessorKeysPointsSubset *)(*pcVar5)();
  return pFVar9;
}

// FPCGAttributeAccessorKeysPointsSubset @ 149e34ba0

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,TArrayView<FPCGPoint,int> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPCGAttributeAccessorKeysPointsSubset *pFVar8;
  int *piVar9;
  FPCGPoint *local_28 [2];
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  piVar1 = &(this->Points).ArrayMax;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  *piVar1 = 0;
  this->PointData = (UPCGBasePointData *)0x0;
  (this->PointIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointIndices).ArrayNum = 0;
  (this->PointIndices).ArrayMax = 0;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoints.Num() == InPointIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                         ,0xbb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FPCGAttributeAccessorKeysPointsSubset *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = param_2->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->Points).AllocatorInstance,(this->Points).ArrayNum,piVar1);
  }
  piVar9 = param_2->DataPtr;
  piVar2 = piVar9 + param_2->ArrayNum;
  while( true ) {
    if (piVar9 == piVar2) {
      return this;
    }
    local_28[0] = TArrayView<FPCGPoint,int>::operator[](param_1,*piVar9);
    pFVar4 = (this->Points).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = (this->Points).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Points).AllocatorInstance,piVar1);
    }
    piVar9 = piVar9 + 1;
    (this->Points).ArrayNum = iVar7 + 1;
    *(FPCGPoint **)((this->Points).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
  }
  pcVar5 = (code *)swi(3);
  pFVar8 = (FPCGAttributeAccessorKeysPointsSubset *)(*pcVar5)();
  return pFVar8;
}

// FPCGAttributeAccessorKeysPointsSubset @ 149e34d60

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,UPCGBasePointData *param_1,
          TArrayView<int_const_,int> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int *_Src;
  
  *(undefined1 *)&this->_padding_ = 0;
  pTVar1 = &this->PointIndices;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PointIndices).ArrayMax;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  this->PointData = param_1;
  iVar3 = param_2->ArrayNum;
  _Src = param_2->DataPtr;
  (this->PointIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// FPCGAttributeAccessorKeysPointsSubset @ 149e34e00

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,UPCGBasePointData *param_1,
          TArrayView<int_const_,int> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int *_Src;
  
  *(undefined1 *)&this->_padding_ = 1;
  pTVar1 = &this->PointIndices;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PointIndices).ArrayMax;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  this->PointData = param_1;
  iVar3 = param_2->ArrayNum;
  _Src = param_2->DataPtr;
  (this->PointIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// FPCGAttributeAccessorKeysPointsSubset @ 149e34ea0

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,
          TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = param_1->ArrayNum;
  (this->Points).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->PointData = (UPCGBasePointData *)0x0;
  (this->PointIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointIndices).ArrayNum = 0;
  (this->PointIndices).ArrayMax = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FPCGAttributeAccessorKeysPointsSubset @ 149e34f00

FPCGAttributeAccessorKeysPointsSubset * __thiscall
FPCGAttributeAccessorKeysPointsSubset::FPCGAttributeAccessorKeysPointsSubset
          (FPCGAttributeAccessorKeysPointsSubset *this,
          TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FPCGAttributeAccessorKeysPointsSubset__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = param_1->ArrayNum;
  (this->Points).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->PointData = (UPCGBasePointData *)0x0;
  (this->PointIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointIndices).ArrayNum = 0;
  (this->PointIndices).ArrayMax = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// GetGenericObjectKeys @ 149e59a80

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,TArrayView<void_*,int> *param_2)

{
  void *pvVar1;
  UPCGPointData *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  longlong lVar11;
  <lambda_2> local_res8;
  TArrayView<void_*,int> local_38;
  
  if ((this->Points).ArrayNum < 1) {
    this_00 = (UPCGPointData *)this->PointData;
    if (this_00 != (UPCGPointData *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGPointData_NoRegister();
      iVar9 = (int)pUVar6->_padding_;
      if ((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar6->_padding_)) {
        local_res8.LocalPoints = UPCGPointData::GetMutablePoints(this_00);
        local_38.DataPtr = param_2->DataPtr;
        local_38.ArrayNum = param_2->ArrayNum;
        local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
        bVar3 = PCGAttributeAccessorKeys::
                GetKeys<void,TArray<int,TSizedDefaultAllocator<32>_>,_FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys_::__l9::<lambda_2>_>
                          (&this->PointIndices,param_1,&local_38,&local_res8);
        return bVar3;
      }
    }
  }
  else {
    ppvVar10 = param_2->DataPtr;
    iVar9 = (this->Points).ArrayNum;
    if (iVar9 != 0) {
      if (iVar9 <= param_1) {
        param_1 = param_1 % iVar9;
      }
      uVar7 = 0;
      iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
      if (0 < iVar8) {
        lVar11 = (longlong)param_1;
        do {
          uVar5 = 0;
          if (param_1 < iVar9) {
            uVar5 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          param_1 = param_1 + 1;
          pvVar1 = *(void **)((this->Points).AllocatorInstance.Data + lVar11 * 8);
          lVar11 = lVar11 + 1;
          uVar5 = 0;
          if ((int)uVar7 < iVar8) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          *ppvVar10 = pvVar1;
          iVar9 = (this->Points).ArrayNum;
          if (iVar9 <= param_1) {
            param_1 = 0;
            lVar11 = 0;
          }
          uVar7 = uVar7 + 1;
          ppvVar10 = ppvVar10 + 1;
        } while ((int)uVar7 < iVar8);
      }
      return true;
    }
  }
  return false;
}

// GetGenericObjectKeys @ 149e59c70

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  void *pvVar1;
  UPCGBasePointData *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void **ppvVar11;
  longlong lVar12;
  <lambda_2> local_res8;
  TArrayView<void_const_*,int> local_38;
  
  if ((this->Points).ArrayNum < 1) {
    pUVar2 = this->PointData;
    if (pUVar2 != (UPCGBasePointData *)0x0) {
      pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
      iVar10 = (int)pUVar7->_padding_;
      if ((iVar10 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar7->_padding_)) {
        local_38.DataPtr = param_2->DataPtr;
        local_38.ArrayNum = param_2->ArrayNum;
        local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
        local_res8.LocalPoints = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(pUVar2 + 1);
        bVar4 = PCGAttributeAccessorKeys::
                GetKeys<void_const_,TArray<int,TSizedDefaultAllocator<32>_>_const_,_FPCGAttributeAccessorKeysPointsSubset::GetGenericObjectKeys_::__l9::<lambda_2>_>
                          (&this->PointIndices,param_1,&local_38,&local_res8);
        return bVar4;
      }
    }
  }
  else {
    ppvVar11 = param_2->DataPtr;
    iVar10 = (this->Points).ArrayNum;
    if (iVar10 != 0) {
      if (iVar10 <= param_1) {
        param_1 = param_1 % iVar10;
      }
      uVar8 = 0;
      iVar9 = (int)*(undefined8 *)&param_2->ArrayNum;
      if (0 < iVar9) {
        lVar12 = (longlong)param_1;
        do {
          uVar6 = 0;
          if (param_1 < iVar10) {
            uVar6 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          param_1 = param_1 + 1;
          pvVar1 = *(void **)((this->Points).AllocatorInstance.Data + lVar12 * 8);
          lVar12 = lVar12 + 1;
          uVar6 = 0;
          if ((int)uVar8 < iVar9) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          *ppvVar11 = pvVar1;
          iVar10 = (this->Points).ArrayNum;
          if (iVar10 <= param_1) {
            param_1 = 0;
            lVar12 = 0;
          }
          uVar8 = uVar8 + 1;
          ppvVar11 = ppvVar11 + 1;
        } while ((int)uVar8 < iVar9);
      }
      return true;
    }
  }
  return false;
}

// GetKeyIndices @ 149e5a770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetKeyIndices
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  *param_4 = false;
  if ((this->PointIndices).ArrayNum == 0) {
    return false;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_3,param_2,Default);
  uVar8 = 0;
  if (0 < param_2) {
    lVar9 = 0;
    do {
      iVar1 = (this->PointIndices).ArrayNum;
      uVar7 = (int)(uVar8 + param_1) % iVar1;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar2 = *(undefined4 *)
               ((this->PointIndices).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
      uVar6 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + lVar9) = uVar2;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < param_2);
  }
  return true;
}

// GetMetadataEntryKeys @ 149e5bab0

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,
          TArrayView<__int64_*,int> *param_2)

{
  longlong lVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  long64 **pplVar8;
  uint uVar9;
  int iVar10;
  long64 *plVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  long64 local_30;
  
  iVar10 = (this->Points).ArrayNum;
  if (iVar10 < 1) {
    if (((this->PointIndices).ArrayNum == 0) ||
       (pUVar3 = this->PointData, pUVar3 == (UPCGBasePointData *)0x0)) {
      return false;
    }
    (**(code **)(pUVar3->_padding_ + 0x4f8))(pUVar3,&local_48,1);
    iVar10 = param_2->ArrayNum;
    iVar14 = 0;
    if (0 < iVar10) {
      do {
        iVar2 = (this->PointIndices).ArrayNum;
        uVar9 = (iVar14 + param_1) % iVar2;
        uVar12 = 0;
        if ((int)uVar9 < iVar2) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar12 = *(uint *)((this->PointIndices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        uVar9 = 0;
        if ((int)uVar12 < local_38) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (uVar12 == (int)uVar12 % local_3c) {
          plVar11 = (long64 *)((longlong)local_40 * (longlong)((int)uVar12 % local_3c) + local_48);
        }
        else {
          plVar11 = &local_30;
        }
        pplVar8 = TArrayView<__int64_*,int>::operator[](param_2,iVar14);
        iVar14 = iVar14 + 1;
        *pplVar8 = plVar11;
      } while (iVar14 < iVar10);
    }
  }
  else {
    pplVar8 = param_2->DataPtr;
    if (iVar10 <= param_1) {
      param_1 = param_1 % iVar10;
    }
    uVar12 = 0;
    iVar10 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (0 < iVar10) {
      lVar13 = (longlong)param_1;
      do {
        uVar9 = 0;
        if (param_1 < (this->Points).ArrayNum) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar1 = lVar13 + 1;
        uVar9 = param_1 + 1;
        lVar13 = *(longlong *)((this->Points).AllocatorInstance.Data + lVar13 * 8);
        uVar7 = 0;
        if ((int)uVar12 < iVar10) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        *pplVar8 = (long64 *)(lVar13 + 200);
        uVar12 = uVar12 + 1;
        pplVar8 = pplVar8 + 1;
        param_1 = 0;
        if ((int)uVar9 < (this->Points).ArrayNum) {
          param_1 = uVar9;
        }
        lVar13 = 0;
        if ((int)uVar9 < (this->Points).ArrayNum) {
          lVar13 = lVar1;
        }
      } while ((int)uVar12 < iVar10);
      return true;
    }
  }
  return true;
}

// GetMetadataEntryKeys @ 149e5bd60

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetMetadataEntryKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,
          TArrayView<__int64_const_*,int> *param_2)

{
  longlong lVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  long64 **pplVar8;
  uint uVar9;
  int iVar10;
  long64 *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  iVar10 = (this->Points).ArrayNum;
  if (iVar10 < 1) {
    if (((this->PointIndices).ArrayNum < 1) ||
       (pUVar3 = this->PointData, pUVar3 == (UPCGBasePointData *)0x0)) {
      return false;
    }
    (**(code **)(pUVar3->_padding_ + 0x538))(pUVar3,&local_48);
    iVar10 = 0;
    if (0 < param_2->ArrayNum) {
      do {
        iVar2 = (this->PointIndices).ArrayNum;
        uVar9 = (iVar10 + param_1) % iVar2;
        uVar13 = 0;
        if ((int)uVar9 < iVar2) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        uVar13 = *(uint *)((this->PointIndices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        uVar9 = 0;
        if ((int)uVar13 < local_38) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        plVar11 = (long64 *)((longlong)((int)uVar13 % local_3c) * (longlong)local_40 + local_48);
        pplVar8 = TArrayView<__int64_const_*,int>::operator[](param_2,iVar10);
        iVar10 = iVar10 + 1;
        *pplVar8 = plVar11;
      } while (iVar10 < param_2->ArrayNum);
    }
  }
  else {
    pplVar8 = param_2->DataPtr;
    if (iVar10 <= param_1) {
      param_1 = param_1 % iVar10;
    }
    uVar13 = 0;
    iVar10 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (0 < iVar10) {
      lVar12 = (longlong)param_1;
      do {
        uVar9 = 0;
        if (param_1 < (this->Points).ArrayNum) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        lVar1 = lVar12 + 1;
        uVar9 = param_1 + 1;
        lVar12 = *(longlong *)((this->Points).AllocatorInstance.Data + lVar12 * 8);
        uVar7 = 0;
        if ((int)uVar13 < iVar10) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        *pplVar8 = (long64 *)(lVar12 + 200);
        uVar13 = uVar13 + 1;
        pplVar8 = pplVar8 + 1;
        param_1 = 0;
        if ((int)uVar9 < (this->Points).ArrayNum) {
          param_1 = uVar9;
        }
        lVar12 = 0;
        if ((int)uVar9 < (this->Points).ArrayNum) {
          lVar12 = lVar1;
        }
      } while ((int)uVar13 < iVar10);
      return true;
    }
  }
  return true;
}

// GetNum @ 149e5c400

int __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetNum(FPCGAttributeAccessorKeysPointsSubset *this)

{
  int iVar1;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 < 1) {
    iVar1 = (this->PointIndices).ArrayNum;
  }
  return iVar1;
}

// GetPointKeys @ 149e5d010

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetPointKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,
          TArrayView<FPCGPoint_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  UPCGPointData *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FPCGPoint **ppFVar10;
  longlong lVar11;
  <lambda_2> local_res8;
  TArrayView<FPCGPoint_*,int> local_38;
  
  if ((this->Points).ArrayNum < 1) {
    this_00 = (UPCGPointData *)this->PointData;
    if (this_00 != (UPCGPointData *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGPointData_NoRegister();
      iVar9 = (int)pUVar6->_padding_;
      if ((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar6->_padding_)) {
        local_res8.LocalPoints = UPCGPointData::GetMutablePoints(this_00);
        local_38.DataPtr = param_2->DataPtr;
        local_38.ArrayNum = param_2->ArrayNum;
        local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
        bVar3 = PCGAttributeAccessorKeys::
                GetKeys<FPCGPoint,TArray<int,TSizedDefaultAllocator<32>_>,_FPCGAttributeAccessorKeysPointsSubset::GetPointKeys_::__l9::<lambda_2>_>
                          (&this->PointIndices,param_1,&local_38,&local_res8);
        return bVar3;
      }
    }
  }
  else {
    ppFVar10 = param_2->DataPtr;
    iVar9 = (this->Points).ArrayNum;
    if (iVar9 != 0) {
      if (iVar9 <= param_1) {
        param_1 = param_1 % iVar9;
      }
      uVar7 = 0;
      iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
      if (0 < iVar8) {
        lVar11 = (longlong)param_1;
        do {
          uVar5 = 0;
          if (param_1 < iVar9) {
            uVar5 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          param_1 = param_1 + 1;
          pFVar1 = *(FPCGPoint **)((this->Points).AllocatorInstance.Data + lVar11 * 8);
          lVar11 = lVar11 + 1;
          uVar5 = 0;
          if ((int)uVar7 < iVar8) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          *ppFVar10 = pFVar1;
          iVar9 = (this->Points).ArrayNum;
          if (iVar9 <= param_1) {
            param_1 = 0;
            lVar11 = 0;
          }
          uVar7 = uVar7 + 1;
          ppFVar10 = ppFVar10 + 1;
        } while ((int)uVar7 < iVar8);
      }
      return true;
    }
  }
  return false;
}

// GetPointKeys @ 149e5d200

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::GetPointKeys
          (FPCGAttributeAccessorKeysPointsSubset *this,int param_1,
          TArrayView<FPCGPoint_const_*,int> *param_2)

{
  FPCGPoint *pFVar1;
  UPCGBasePointData *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FPCGPoint **ppFVar11;
  longlong lVar12;
  <lambda_2> local_res8;
  TArrayView<FPCGPoint_const_*,int> local_38;
  
  if ((this->Points).ArrayNum < 1) {
    pUVar2 = this->PointData;
    if (pUVar2 != (UPCGBasePointData *)0x0) {
      pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
      iVar10 = (int)pUVar7->_padding_;
      if ((iVar10 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar7->_padding_)) {
        local_38.DataPtr = param_2->DataPtr;
        local_38.ArrayNum = param_2->ArrayNum;
        local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
        local_res8.LocalPoints = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(pUVar2 + 1);
        bVar4 = PCGAttributeAccessorKeys::
                GetKeys<FPCGPoint_const_,TArray<int,TSizedDefaultAllocator<32>_>_const_,_FPCGAttributeAccessorKeysPointsSubset::GetPointKeys_::__l9::<lambda_2>_>
                          (&this->PointIndices,param_1,&local_38,&local_res8);
        return bVar4;
      }
    }
  }
  else {
    ppFVar11 = param_2->DataPtr;
    iVar10 = (this->Points).ArrayNum;
    if (iVar10 != 0) {
      if (iVar10 <= param_1) {
        param_1 = param_1 % iVar10;
      }
      uVar8 = 0;
      iVar9 = (int)*(undefined8 *)&param_2->ArrayNum;
      if (0 < iVar9) {
        lVar12 = (longlong)param_1;
        do {
          uVar6 = 0;
          if (param_1 < iVar10) {
            uVar6 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          param_1 = param_1 + 1;
          pFVar1 = *(FPCGPoint **)((this->Points).AllocatorInstance.Data + lVar12 * 8);
          lVar12 = lVar12 + 1;
          uVar6 = 0;
          if ((int)uVar8 < iVar9) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          *ppFVar11 = pFVar1;
          iVar10 = (this->Points).ArrayNum;
          if (iVar10 <= param_1) {
            param_1 = 0;
            lVar12 = 0;
          }
          uVar8 = uVar8 + 1;
          ppFVar11 = ppFVar11 + 1;
        } while ((int)uVar8 < iVar9);
      }
      return true;
    }
  }
  return false;
}

// IsClassSupported @ 149e77e20

bool __thiscall
FPCGAttributeAccessorKeysPointsSubset::IsClassSupported
          (FPCGAttributeAccessorKeysPointsSubset *this,UStruct *param_1)

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

