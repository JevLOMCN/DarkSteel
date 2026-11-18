// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 92

// Overlap<Chaos::Private::FSimOverlapVisitor> @ 143ce8530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap<Chaos::Private::FSimOverlapVisitor>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TAABB<double,3> *param_1,FSimOverlapVisitor *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = this->Buckets[0].Objects.ArrayNum;
  iVar4 = 0;
  pFVar2 = this->Buckets[0].Objects.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (this->Buckets[0].Objects.ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < iVar4 - 2U) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>
                (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   **)pFVar2,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_1,param_2,
                 (TVector<double,3> *)local_88._0_8_,(TVector<double,3> *)(local_88 + 8),local_58);
    }
    iVar4 = iVar4 + 1;
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Overlap<Chaos::Private::FSimOverlapVisitor> @ 143ce8670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap<Chaos::Private::FSimOverlapVisitor>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TAABB<double,3> *param_1,FSimOverlapVisitor *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = this->Buckets[0].Objects.ArrayNum;
  iVar4 = 0;
  pFVar2 = this->Buckets[0].Objects.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (this->Buckets[0].Objects.ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < iVar4 - 2U) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>
                (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   **)pFVar2,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_1,param_2,
                 (TVector<double,3> *)local_88._0_8_,(TVector<double,3> *)(local_88 + 8),local_58);
    }
    iVar4 = iVar4 + 1;
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Overlap<Chaos::Private::FSimOverlapVisitor> @ 143ce87b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap<Chaos::Private::FSimOverlapVisitor>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TAABB<double,3> *param_1,FSimOverlapVisitor *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = this->Buckets[0].Objects.ArrayNum;
  iVar4 = 0;
  pFVar2 = this->Buckets[0].Objects.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (this->Buckets[0].Objects.ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < iVar4 - 2U) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>
                (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   **)pFVar2,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_1,param_2,
                 (TVector<double,3> *)local_88._0_8_,(TVector<double,3> *)(local_88 + 8),local_58);
    }
    iVar4 = iVar4 + 1;
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// Overlap<Chaos::Private::FSimOverlapVisitor> @ 143ce88f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Overlap<Chaos::Private::FSimOverlapVisitor>
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,TAABB<double,3> *param_1,FSimOverlapVisitor *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = this->Buckets[0].Objects.ArrayNum;
  iVar4 = 0;
  pFVar2 = this->Buckets[0].Objects.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (this->Buckets[0].Objects.ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < iVar4 - 2U) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::Private::FSimOverlapVisitor>
                (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   **)pFVar2,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_1,param_2,
                 (TVector<double,3> *)local_88._0_8_,(TVector<double,3> *)(local_88 + 8),local_58);
    }
    iVar4 = iVar4 + 1;
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143d00470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *param_1)

{
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_00;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_01;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  this_01 = this->Buckets;
  *(undefined4 *)&this->_padding_ = 0;
  this_00 = &this->Types;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__U__TAABBTreeLeafArray_VFAccelerationStructureHandle_Chaos___00N_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos___Chaos__6B_
  ;
  (this_01->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this_00->First).Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
            *)this_00,(param_1->Types).First.Objects.ArrayNum,Default);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  local_res20 = 8;
  pTVar7 = this;
  do {
    piVar10 = &pTVar7->Buckets[0].Objects.ArrayNum;
    TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
    ::CopyFrom(this_01,(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                        *)(((longlong)param_1 - (longlong)this) + (longlong)this_01));
    iVar2 = *piVar10;
    pFVar9 = pTVar7->Buckets[0].Objects.AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (*piVar10 != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar8) break;
      lVar3 = *(longlong *)pFVar9;
      lVar6 = 0;
      if (*(char *)(lVar3 + 0xd) == '\x01') {
        lVar6 = lVar3;
      }
      if (lVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                           ,0x329,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      if (*(char *)(lVar3 + 0xd) != '\x01') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == TConcrete::StaticType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,399,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      uVar1 = *(ushort *)(pFVar9 + 8);
      if ((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      pFVar9 = pFVar9 + 0x10;
      *(longlong *)((this_00->First).Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) = lVar3;
    }
    this_01 = this_01 + 1;
    local_res20 = local_res20 + -1;
    pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)piVar10;
    if (local_res20 == 0) {
      return this;
    }
  } while( true );
}

// TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143d006f0

TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this)

{
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__U__TAABBTreeLeafArray_VFAccelerationStructureHandle_Chaos___00N_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos___Chaos__6B_
  ;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->Buckets[0].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this->Types).First.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  return this;
}

// TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143d007f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *param_1)

{
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_00;
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar6;
  bool bVar7;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_01;
  int *piVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *local_res18;
  longlong local_res20;
  
  this_01 = this->Buckets;
  *(undefined4 *)&this->_padding_ = 0;
  this_00 = &this->Types;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__U__TAABBTreeLeafArray_VFAccelerationStructureHandle_Chaos___00N_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2_V__TAABBTree_VFAccelerationStructureHandle_Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__2__Chaos__6B_
  ;
  (this_01->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this_00->First).Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  (this->Types).Remaining.First.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).Remaining.First.Objects.ArrayNum = 0;
  (this->Types).Remaining.First.Objects.ArrayMax = 0;
  (this->Types).Remaining.First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).Remaining.First.FreeIndices.ArrayNum = 0;
  (this->Types).Remaining.First.FreeIndices.ArrayMax = 0;
  (this->Types).Remaining.Remaining.First.Objects.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar6 = &(this->Types).Remaining;
  (pTVar6->Remaining).First.Objects.ArrayNum = 0;
  (pTVar6->Remaining).First.Objects.ArrayMax = 0;
  (this->Types).Remaining.Remaining.First.FreeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar6 = &(this->Types).Remaining;
  (pTVar6->Remaining).First.FreeIndices.ArrayNum = 0;
  (pTVar6->Remaining).First.FreeIndices.ArrayMax = 0;
  local_res18 = this_01;
  TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
            *)this_00,(param_1->Types).First.Objects.ArrayNum,Default);
  TArray<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*,TSizedDefaultAllocator<32>_>
            *)&(this->Types).Remaining,(param_1->Types).Remaining.First.Objects.ArrayNum,Default);
  TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
            *)&(this->Types).Remaining.Remaining,
           (param_1->Types).Remaining.Remaining.First.Objects.ArrayNum,Default);
  local_res10 = (longlong)param_1 - (longlong)this;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  local_res20 = 8;
  pTVar8 = this;
LAB_143d00980:
  piVar12 = &pTVar8->Buckets[0].Objects.ArrayNum;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::CopyFrom(this_01,(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                      *)((longlong)&(this_01->Objects).AllocatorInstance.Data + local_res10));
  iVar3 = *piVar12;
  pFVar11 = pTVar8->Buckets[0].Objects.AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0x10;
LAB_143d009a0:
  do {
    if (*piVar12 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    lVar4 = *(longlong *)pFVar11;
    cVar1 = *(char *)(lVar4 + 0xd);
    lVar9 = 0;
    if (cVar1 == '\x01') {
      lVar9 = lVar4;
    }
    if (lVar9 == 0) {
      lVar9 = 0;
      if (cVar1 == '\0') {
        lVar9 = lVar4;
      }
      if (lVar9 != 0) {
        if (cVar1 != '\0') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type == TConcrete::StaticType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,399,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        uVar2 = *(ushort *)(pFVar11 + 8);
        if ((this->Types).Remaining.First.Objects.ArrayNum <= (int)(uint)uVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        pFVar11 = pFVar11 + 0x10;
        *(longlong *)
         ((this->Types).Remaining.First.Objects.AllocatorInstance.Data + (ulonglong)uVar2 * 8) =
             lVar4;
        goto LAB_143d009a0;
      }
      lVar9 = 0;
      if (cVar1 == '\x02') {
        lVar9 = lVar4;
      }
      if (lVar9 != 0) {
        if (cVar1 != '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type == TConcrete::StaticType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,399,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        uVar2 = *(ushort *)(pFVar11 + 8);
        if ((this->Types).Remaining.Remaining.First.Objects.ArrayNum <= (int)(uint)uVar2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        pFVar11 = pFVar11 + 0x10;
        *(longlong *)
         ((this->Types).Remaining.Remaining.First.Objects.AllocatorInstance.Data +
         (ulonglong)uVar2 * 8) = lVar4;
        goto LAB_143d009a0;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                         ,0x329,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (*(char *)(lVar4 + 0xd) != '\x01') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == TConcrete::StaticType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,399,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
    }
    uVar2 = *(ushort *)(pFVar11 + 8);
    if ((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar2) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar11 = pFVar11 + 0x10;
    *(longlong *)((this_00->First).Objects.AllocatorInstance.Data + (ulonglong)uVar2 * 8) = lVar4;
  } while( true );
  this_01 = local_res18 + 1;
  local_res20 = local_res20 + -1;
  pTVar8 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *)piVar12;
  local_res18 = this_01;
  if (local_res20 == 0) {
    return this;
  }
  goto LAB_143d00980;
}

// TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143d00be0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *param_1)

{
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_00;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_01;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  this_01 = this->Buckets;
  *(undefined4 *)&this->_padding_ = 0;
  this_00 = &this->Types;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos___Chaos__6B_
  ;
  (this_01->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this_00->First).Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*,TSizedDefaultAllocator<32>_>
            *)this_00,(param_1->Types).First.Objects.ArrayNum,Default);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  local_res20 = 8;
  pTVar7 = this;
  do {
    piVar10 = &pTVar7->Buckets[0].Objects.ArrayNum;
    TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
    ::CopyFrom(this_01,(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                        *)(((longlong)param_1 - (longlong)this) + (longlong)this_01));
    iVar2 = *piVar10;
    pFVar9 = pTVar7->Buckets[0].Objects.AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (*piVar10 != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar8) break;
      lVar3 = *(longlong *)pFVar9;
      lVar6 = 0;
      if (*(char *)(lVar3 + 0xd) == '\x02') {
        lVar6 = lVar3;
      }
      if (lVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                           ,0x329,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      if (*(char *)(lVar3 + 0xd) != '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == TConcrete::StaticType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,399,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      uVar1 = *(ushort *)(pFVar9 + 8);
      if ((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      pFVar9 = pFVar9 + 0x10;
      *(longlong *)((this_00->First).Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) = lVar3;
    }
    this_01 = this_01 + 1;
    local_res20 = local_res20 + -1;
    pTVar7 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)piVar10;
    if (local_res20 == 0) {
      return this;
    }
  } while( true );
}

// TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143d00e60

TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this)

{
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TAABBTree_VFAccelerationStructureHandle_Chaos__V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_2__00NU__TDefaultAABBTreeStorageTraits_VFAccelerationStructureHandle_Chaos___2__Chaos___Chaos__6B_
  ;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->Buckets[0].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this->Types).First.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  return this;
}

// TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> @ 143d00f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                 *param_1)

{
  TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *this_00;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_01;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  this_01 = this->Buckets;
  *(undefined4 *)&this->_padding_ = 0;
  this_00 = &this->Types;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_Chaos___Chaos__6B_
  ;
  (this_01->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this_00->First).Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  TArray<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*,TSizedDefaultAllocator<32>_>
  ::SetNum((TArray<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*,TSizedDefaultAllocator<32>_>
            *)this_00,(param_1->Types).First.Objects.ArrayNum,Default);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  local_res20 = 8;
  pTVar7 = this;
  do {
    piVar10 = &pTVar7->Buckets[0].Objects.ArrayNum;
    TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
    ::CopyFrom(this_01,(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                        *)(((longlong)param_1 - (longlong)this) + (longlong)this_01));
    iVar2 = *piVar10;
    pFVar9 = pTVar7->Buckets[0].Objects.AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (*piVar10 != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar8) break;
      lVar3 = *(longlong *)pFVar9;
      lVar6 = 0;
      if (*(char *)(lVar3 + 0xd) == '\0') {
        lVar6 = lVar3;
      }
      if (lVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                           ,0x329,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      if (*(char *)(lVar3 + 0xd) != '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == TConcrete::StaticType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,399,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      uVar1 = *(ushort *)(pFVar9 + 8);
      if ((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      pFVar9 = pFVar9 + 0x10;
      *(longlong *)((this_00->First).Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) = lVar3;
    }
    this_01 = this_01 + 1;
    local_res20 = local_res20 + -1;
    pTVar7 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
              *)piVar10;
    if (local_res20 == 0) {
      return this;
    }
  } while( true );
}

// TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> @ 143d011e0

TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
* __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this)

{
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x301;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSpatialAccelerationCollection_V__TBoundingVolume_VFAccelerationStructureHandle_Chaos__N_02_Chaos___Chaos__6B_
  ;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->Buckets[0].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].Objects.ArrayNum = 0;
  this->Buckets[0].Objects.ArrayMax = 0;
  this->Buckets[0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[0].FreeIndices.ArrayNum = 0;
  this->Buckets[0].FreeIndices.ArrayMax = 0;
  this->Buckets[1].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].Objects.ArrayNum = 0;
  this->Buckets[1].Objects.ArrayMax = 0;
  this->Buckets[1].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[1].FreeIndices.ArrayNum = 0;
  this->Buckets[1].FreeIndices.ArrayMax = 0;
  this->Buckets[2].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].Objects.ArrayNum = 0;
  this->Buckets[2].Objects.ArrayMax = 0;
  this->Buckets[2].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[2].FreeIndices.ArrayNum = 0;
  this->Buckets[2].FreeIndices.ArrayMax = 0;
  this->Buckets[3].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].Objects.ArrayNum = 0;
  this->Buckets[3].Objects.ArrayMax = 0;
  this->Buckets[3].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[3].FreeIndices.ArrayNum = 0;
  this->Buckets[3].FreeIndices.ArrayMax = 0;
  this->Buckets[4].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].Objects.ArrayNum = 0;
  this->Buckets[4].Objects.ArrayMax = 0;
  this->Buckets[4].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[4].FreeIndices.ArrayNum = 0;
  this->Buckets[4].FreeIndices.ArrayMax = 0;
  this->Buckets[5].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].Objects.ArrayNum = 0;
  this->Buckets[5].Objects.ArrayMax = 0;
  this->Buckets[5].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[5].FreeIndices.ArrayNum = 0;
  this->Buckets[5].FreeIndices.ArrayMax = 0;
  this->Buckets[6].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].Objects.ArrayNum = 0;
  this->Buckets[6].Objects.ArrayMax = 0;
  this->Buckets[6].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[6].FreeIndices.ArrayNum = 0;
  this->Buckets[6].FreeIndices.ArrayMax = 0;
  this->Buckets[7].Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].Objects.ArrayNum = 0;
  this->Buckets[7].Objects.ArrayMax = 0;
  this->Buckets[7].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Buckets[7].FreeIndices.ArrayNum = 0;
  this->Buckets[7].FreeIndices.ArrayMax = 0;
  (this->Types).First.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.Objects.ArrayNum = 0;
  (this->Types).First.Objects.ArrayMax = 0;
  (this->Types).First.FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).First.FreeIndices.ArrayNum = 0;
  (this->Types).First.FreeIndices.ArrayMax = 0;
  return this;
}

// AddSubstructure @ 143d3bc00

FSpatialAccelerationIdx __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::AddSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        *param_1,ushort param_2,ushort param_3)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FSpatialAccelerationIdx FVar4;
  int iVar5;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  undefined6 in_register_00000082;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *pTVar7;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_res8;
  ushort in_stack_00000028;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> local_28;
  
  pTVar7 = (TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000082,param_2);
  if (7 < param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BucketIdx < MaxBuckets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,399,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  this_00 = (pTVar7->Acceleration).Ptr;
  *(ushort *)&param_1->Ptr = param_3 & 7;
  local_28.Acceleration.Ptr =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (&local_28 != pTVar7) {
    (pTVar7->Acceleration).Ptr =
         (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
    local_28.Acceleration.Ptr = this_00;
  }
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (this_00->Type == '\x01') {
    pIVar6 = this_00;
  }
  if (pIVar6 == (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  local_res8 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
  iVar5 = TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
          ::Add(&(this->Types).First,&local_res8);
  lVar2 = this->_padding_;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr & 7;
  *(byte *)&this->_padding_ = (byte)lVar2 | (byte)(1 << (param_3 & 0x1f));
  local_28.TypeInnerIdx = (ushort)iVar5;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr | in_stack_00000028 << 3;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::UpdateOrAddAt(this->Buckets + param_3,in_stack_00000028,&local_28);
  if (local_28.Acceleration.Ptr !=
      (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    (**(code **)(local_28.Acceleration.Ptr)->_padding_)(local_28.Acceleration.Ptr,1);
  }
  return SUB82(param_1,0);
}

// AddSubstructure @ 143d3bd30

FSpatialAccelerationIdx __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::AddSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        *param_1,ushort param_2,ushort param_3)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uchar uVar4;
  FSpatialAccelerationIdx FVar5;
  int iVar6;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  **ppTVar7;
  undefined6 in_register_00000082;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *pTVar8;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_res8;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *local_res10;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_res18;
  ushort in_stack_00000028;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_68;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_60;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_58;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_50;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_48;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> local_40;
  
  pTVar8 = (TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000082,param_2);
  if ((7 < param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BucketIdx < MaxBuckets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                         ,399,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FSpatialAccelerationIdx)(*pcVar1)();
    return FVar5;
  }
  this_00 = (pTVar8->Acceleration).Ptr;
  *(ushort *)&param_1->Ptr = param_3 & 7;
  local_40.Acceleration.Ptr =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (&local_40 != pTVar8) {
    (pTVar8->Acceleration).Ptr =
         (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
    local_40.Acceleration.Ptr = this_00;
  }
  uVar4 = GetTypeIdx(this_00);
  switch(uVar4) {
  case '\0':
    local_res8 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
                 AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                           (this_00);
    ppTVar7 = &local_res8;
    break;
  case '\x01':
    local_res10 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
                  AsChecked<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                            (this_00);
    iVar6 = TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>
            ::Add(&(this->Types).Remaining.First,&local_res10);
    local_40.TypeInnerIdx = (ushort)iVar6;
    goto switchD_143d3bdc5_default;
  case '\x02':
    local_res18 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
                  AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                            (this_00);
    iVar6 = TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
            ::Add(&(this->Types).Remaining.Remaining.First,&local_res18);
    local_40.TypeInnerIdx = (ushort)iVar6;
    goto switchD_143d3bdc5_default;
  case '\x03':
    local_68 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
    ppTVar7 = &local_68;
    break;
  case '\x04':
    local_60 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
    ppTVar7 = &local_60;
    break;
  case '\x05':
    local_58 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
    ppTVar7 = &local_58;
    break;
  case '\x06':
    local_50 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
    ppTVar7 = &local_50;
    break;
  case '\a':
    local_48 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
    ppTVar7 = &local_48;
    break;
  default:
    goto switchD_143d3bdc5_default;
  }
  iVar6 = TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
          ::Add(&(this->Types).First,ppTVar7);
  local_40.TypeInnerIdx = (ushort)iVar6;
switchD_143d3bdc5_default:
  lVar2 = this->_padding_;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr & 7;
  *(byte *)&this->_padding_ = (byte)lVar2 | (byte)(1 << (param_3 & 0x1f));
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr | in_stack_00000028 << 3;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::UpdateOrAddAt(this->Buckets + param_3,in_stack_00000028,&local_40);
  if (local_40.Acceleration.Ptr !=
      (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    (**(code **)(local_40.Acceleration.Ptr)->_padding_)(local_40.Acceleration.Ptr,1);
  }
  return SUB82(param_1,0);
}

// AddSubstructure @ 143d3bf10

FSpatialAccelerationIdx __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::AddSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        *param_1,ushort param_2,ushort param_3)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FSpatialAccelerationIdx FVar4;
  int iVar5;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  undefined6 in_register_00000082;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *pTVar7;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *local_res8;
  ushort in_stack_00000028;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> local_28;
  
  pTVar7 = (TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000082,param_2);
  if (7 < param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BucketIdx < MaxBuckets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,399,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  this_00 = (pTVar7->Acceleration).Ptr;
  *(ushort *)&param_1->Ptr = param_3 & 7;
  local_28.Acceleration.Ptr =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (&local_28 != pTVar7) {
    (pTVar7->Acceleration).Ptr =
         (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
    local_28.Acceleration.Ptr = this_00;
  }
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (this_00->Type == '\x02') {
    pIVar6 = this_00;
  }
  if (pIVar6 == (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  local_res8 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                         (this_00);
  iVar5 = TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
          ::Add(&(this->Types).First,&local_res8);
  lVar2 = this->_padding_;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr & 7;
  *(byte *)&this->_padding_ = (byte)lVar2 | (byte)(1 << (param_3 & 0x1f));
  local_28.TypeInnerIdx = (ushort)iVar5;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr | in_stack_00000028 << 3;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::UpdateOrAddAt(this->Buckets + param_3,in_stack_00000028,&local_28);
  if (local_28.Acceleration.Ptr !=
      (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    (**(code **)(local_28.Acceleration.Ptr)->_padding_)(local_28.Acceleration.Ptr,1);
  }
  return SUB82(param_1,0);
}

// AddSubstructure @ 143d3c040

FSpatialAccelerationIdx __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::AddSubstructure(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                  *this,TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                        *param_1,ushort param_2,ushort param_3)

{
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FSpatialAccelerationIdx FVar4;
  int iVar5;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  undefined6 in_register_00000082;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *pTVar7;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *local_res8;
  ushort in_stack_00000028;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> local_28;
  
  pTVar7 = (TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000082,param_2);
  if (7 < param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BucketIdx < MaxBuckets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,399,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  this_00 = (pTVar7->Acceleration).Ptr;
  *(ushort *)&param_1->Ptr = param_3 & 7;
  local_28.Acceleration.Ptr =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (&local_28 != pTVar7) {
    (pTVar7->Acceleration).Ptr =
         (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
    local_28.Acceleration.Ptr = this_00;
  }
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  if (this_00->Type == '\0') {
    pIVar6 = this_00;
  }
  if (pIVar6 == (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FSpatialAccelerationIdx)(*pcVar1)();
      return FVar4;
    }
  }
  local_res8 = ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
               AsChecked<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         (this_00);
  iVar5 = TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>
          ::Add(&(this->Types).First,&local_res8);
  lVar2 = this->_padding_;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr & 7;
  *(byte *)&this->_padding_ = (byte)lVar2 | (byte)(1 << (param_3 & 0x1f));
  local_28.TypeInnerIdx = (ushort)iVar5;
  *(ushort *)&param_1->Ptr = *(ushort *)&param_1->Ptr | in_stack_00000028 << 3;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::UpdateOrAddAt(this->Buckets + param_3,in_stack_00000028,&local_28);
  if (local_28.Acceleration.Ptr !=
      (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    (**(code **)(local_28.Acceleration.Ptr)->_padding_)(local_28.Acceleration.Ptr,1);
  }
  return SUB82(param_1,0);
}

// CacheOverlappingLeaves @ 143d45990

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::CacheOverlappingLeaves
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this)

{
  TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::CacheOverlappingLeaves(&this->Types);
  return;
}

// CacheOverlappingLeaves @ 143d459b0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::CacheOverlappingLeaves
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this)

{
  TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::CacheOverlappingLeaves(&this->Types);
  return;
}

// CacheOverlappingLeaves @ 143d459d0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::CacheOverlappingLeaves
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this)

{
  TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::CacheOverlappingLeaves(&this->Types);
  return;
}

// CacheOverlappingLeaves @ 143d459f0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::CacheOverlappingLeaves
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Copy @ 143d49220

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Copy(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *this)

{
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar1;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x140);
  if (pTVar1 != (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
    pTVar1 = TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// Copy @ 143d49280

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Copy(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *this)

{
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar1;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x180);
  if (pTVar1 != (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
    pTVar1 = TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// Copy @ 143d492e0

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Copy(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *this)

{
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar1;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x140);
  if (pTVar1 != (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
    pTVar1 = TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// Copy @ 143d49340

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Copy(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
       *this)

{
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar1;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x140);
  if (pTVar1 != (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                 *)0x0) {
    pTVar1 = TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// DebugDraw @ 143d4b3c0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DebugDraw(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar5;
  undefined1 local_res8 [8];
  
  for (pTVar5 = this->Buckets;
      (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar5 != &this->Types; pTVar5 = pTVar5 + 1) {
    iVar1 = (pTVar5->Objects).ArrayNum;
    pFVar3 = (pTVar5->Objects).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pTVar5->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      plVar2 = *(longlong **)pFVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
      }
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// DebugDraw @ 143d4b460

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DebugDraw(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar5;
  undefined1 local_res8 [8];
  
  for (pTVar5 = this->Buckets;
      (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar5 != &this->Types; pTVar5 = pTVar5 + 1) {
    iVar1 = (pTVar5->Objects).ArrayNum;
    pFVar3 = (pTVar5->Objects).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pTVar5->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      plVar2 = *(longlong **)pFVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
      }
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// DebugDraw @ 143d4b500

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DebugDraw(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar5;
  undefined1 local_res8 [8];
  
  for (pTVar5 = this->Buckets;
      (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar5 != &this->Types; pTVar5 = pTVar5 + 1) {
    iVar1 = (pTVar5->Objects).ArrayNum;
    pFVar3 = (pTVar5->Objects).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pTVar5->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      plVar2 = *(longlong **)pFVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
      }
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// DebugDraw @ 143d4b5a0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::DebugDraw(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar5;
  undefined1 local_res8 [8];
  
  for (pTVar5 = this->Buckets;
      (TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *)
      pTVar5 != &this->Types; pTVar5 = pTVar5 + 1) {
    iVar1 = (pTVar5->Objects).ArrayNum;
    pFVar3 = (pTVar5->Objects).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pTVar5->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      plVar2 = *(longlong **)pFVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
      }
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return;
}

// DeepAssign @ 143d4be10

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DeepAssign(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
             *this,ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                     ,0x2f7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DeepAssign @ 143d4be50

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DeepAssign(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
             *this,ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                     ,0x2f7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DeepAssign @ 143d4be90

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DeepAssign(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
             *this,ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                     ,0x2f7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DeepAssign @ 143d4bed0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::DeepAssign(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
             *this,ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                     ,0x2f7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DumpStats @ 143d4d410

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStats(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this)

{
  code *pcVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 200);
    pFVar2 = GetGlobalLogSingleton();
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// DumpStats @ 143d4d450

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStats(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this)

{
  code *pcVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 200);
    pFVar2 = GetGlobalLogSingleton();
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// DumpStats @ 143d4d490

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStats(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this)

{
  code *pcVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 200);
    pFVar2 = GetGlobalLogSingleton();
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// DumpStats @ 143d4d4d0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::DumpStats(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
            *this)

{
  code *pcVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 200);
    pFVar2 = GetGlobalLogSingleton();
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// DumpStatsTo @ 143d4d850

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStatsTo(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *this,FOutputDevice *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar6 = 0;
  do {
    piVar7 = &this->Buckets[0].Objects.ArrayNum;
    FOutputDevice::LogfImpl(param_1,L"Bucket %d (%d entries):");
    uVar5 = 0;
    if (0 < *piVar7) {
      lVar8 = 0;
      do {
        FOutputDevice::LogfImpl(param_1,L"\tEntry %d");
        uVar4 = 0;
        if ((int)uVar5 < *piVar7) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        plVar1 = *(longlong **)(this->Buckets[0].Objects.AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar1 + 200))(plVar1,param_1);
        FOutputDevice::Log(param_1,L"");
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar5 < *piVar7);
    }
    iVar6 = iVar6 + 1;
    this = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *)piVar7;
  } while (iVar6 < 8);
  return;
}

// DumpStatsTo @ 143d4d960

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStatsTo(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *this,FOutputDevice *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar6 = 0;
  do {
    piVar7 = &this->Buckets[0].Objects.ArrayNum;
    FOutputDevice::LogfImpl(param_1,L"Bucket %d (%d entries):");
    uVar5 = 0;
    if (0 < *piVar7) {
      lVar8 = 0;
      do {
        FOutputDevice::LogfImpl(param_1,L"\tEntry %d");
        uVar4 = 0;
        if ((int)uVar5 < *piVar7) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        plVar1 = *(longlong **)(this->Buckets[0].Objects.AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar1 + 200))(plVar1,param_1);
        FOutputDevice::Log(param_1,L"");
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar5 < *piVar7);
    }
    iVar6 = iVar6 + 1;
    this = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *)piVar7;
  } while (iVar6 < 8);
  return;
}

// DumpStatsTo @ 143d4da70

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::DumpStatsTo(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *this,FOutputDevice *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar6 = 0;
  do {
    piVar7 = &this->Buckets[0].Objects.ArrayNum;
    FOutputDevice::LogfImpl(param_1,L"Bucket %d (%d entries):");
    uVar5 = 0;
    if (0 < *piVar7) {
      lVar8 = 0;
      do {
        FOutputDevice::LogfImpl(param_1,L"\tEntry %d");
        uVar4 = 0;
        if ((int)uVar5 < *piVar7) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        plVar1 = *(longlong **)(this->Buckets[0].Objects.AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar1 + 200))(plVar1,param_1);
        FOutputDevice::Log(param_1,L"");
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar5 < *piVar7);
    }
    iVar6 = iVar6 + 1;
    this = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *)piVar7;
  } while (iVar6 < 8);
  return;
}

// DumpStatsTo @ 143d4db80

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::DumpStatsTo(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
              *this,FOutputDevice *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar6 = 0;
  do {
    piVar7 = &this->Buckets[0].Objects.ArrayNum;
    FOutputDevice::LogfImpl(param_1,L"Bucket %d (%d entries):");
    uVar5 = 0;
    if (0 < *piVar7) {
      lVar8 = 0;
      do {
        FOutputDevice::LogfImpl(param_1,L"\tEntry %d");
        uVar4 = 0;
        if ((int)uVar5 < *piVar7) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        plVar1 = *(longlong **)(this->Buckets[0].Objects.AllocatorInstance.Data + lVar8);
        (**(code **)(*plVar1 + 200))(plVar1,param_1);
        FOutputDevice::Log(param_1,L"");
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar5 < *piVar7);
    }
    iVar6 = iVar6 + 1;
    this = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
            *)piVar7;
  } while (iVar6 < 8);
  return;
}

// GetAllSpatialIndices @ 143d542e0

TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetAllSpatialIndices
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  short sVar8;
  FScriptContainerElement *pFVar9;
  ushort uVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar11;
  undefined1 local_res8 [8];
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_res10;
  ushort local_48 [8];
  
  pTVar11 = this->Buckets;
  local_res10 = &this->Types;
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar11 != local_res10) {
    do {
      iVar1 = (pTVar11->Objects).ArrayNum;
      sVar8 = 0;
      pFVar9 = (pTVar11->Objects).AllocatorInstance.Data;
      pFVar7 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pTVar11->Objects).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar7) break;
        if (*(longlong *)pFVar9 != 0) {
          local_48[0] = sVar8 << 3 | uVar10 & 7;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(ushort *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 2) =
               local_48[0];
        }
        sVar8 = sVar8 + 1;
        pFVar9 = pFVar9 + 0x10;
      }
      uVar10 = uVar10 + 1;
      pTVar11 = pTVar11 + 1;
    } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)pTVar11 != local_res10);
  }
  return __return_storage_ptr__;
}

// GetAllSpatialIndices @ 143d54480

TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetAllSpatialIndices
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  short sVar8;
  FScriptContainerElement *pFVar9;
  ushort uVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar11;
  undefined1 local_res8 [8];
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_res10;
  ushort local_48 [8];
  
  pTVar11 = this->Buckets;
  local_res10 = &this->Types;
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar11 != local_res10) {
    do {
      iVar1 = (pTVar11->Objects).ArrayNum;
      sVar8 = 0;
      pFVar9 = (pTVar11->Objects).AllocatorInstance.Data;
      pFVar7 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pTVar11->Objects).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar7) break;
        if (*(longlong *)pFVar9 != 0) {
          local_48[0] = sVar8 << 3 | uVar10 & 7;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(ushort *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 2) =
               local_48[0];
        }
        sVar8 = sVar8 + 1;
        pFVar9 = pFVar9 + 0x10;
      }
      uVar10 = uVar10 + 1;
      pTVar11 = pTVar11 + 1;
    } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)pTVar11 != local_res10);
  }
  return __return_storage_ptr__;
}

// GetAllSpatialIndices @ 143d54620

TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetAllSpatialIndices
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  short sVar8;
  FScriptContainerElement *pFVar9;
  ushort uVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar11;
  undefined1 local_res8 [8];
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_res10;
  ushort local_48 [8];
  
  pTVar11 = this->Buckets;
  local_res10 = &this->Types;
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
       *)pTVar11 != local_res10) {
    do {
      iVar1 = (pTVar11->Objects).ArrayNum;
      sVar8 = 0;
      pFVar9 = (pTVar11->Objects).AllocatorInstance.Data;
      pFVar7 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pTVar11->Objects).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar7) break;
        if (*(longlong *)pFVar9 != 0) {
          local_48[0] = sVar8 << 3 | uVar10 & 7;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(ushort *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 2) =
               local_48[0];
        }
        sVar8 = sVar8 + 1;
        pFVar9 = pFVar9 + 0x10;
      }
      uVar10 = uVar10 + 1;
      pTVar11 = pTVar11 + 1;
    } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)pTVar11 != local_res10);
  }
  return __return_storage_ptr__;
}

// GetAllSpatialIndices @ 143d547c0

TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::GetAllSpatialIndices
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  short sVar8;
  FScriptContainerElement *pFVar9;
  ushort uVar10;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar11;
  undefined1 local_res8 [8];
  TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *local_res10;
  ushort local_48 [8];
  
  pTVar11 = this->Buckets;
  local_res10 = &this->Types;
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *)
      pTVar11 != local_res10) {
    do {
      iVar1 = (pTVar11->Objects).ArrayNum;
      sVar8 = 0;
      pFVar9 = (pTVar11->Objects).AllocatorInstance.Data;
      pFVar7 = pFVar9 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pTVar11->Objects).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar7) break;
        if (*(longlong *)pFVar9 != 0) {
          local_48[0] = sVar8 << 3 | uVar10 & 7;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<Chaos::FSpatialAccelerationIdx,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar6;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(ushort *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 2) =
               local_48[0];
        }
        sVar8 = sVar8 + 1;
        pFVar9 = pFVar9 + 0x10;
      }
      uVar10 = uVar10 + 1;
      pTVar11 = pTVar11 + 1;
    } while ((TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
              *)pTVar11 != local_res10);
  }
  return __return_storage_ptr__;
}

// GetSubstructure @ 143d576b0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FSpatialAccelerationIdx param_1)

{
  code *pcVar1;
  bool bVar2;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Bucket;
  if (this->Buckets[uVar5].Objects.ArrayNum < 1) {
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
  uVar4 = param_1.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return pIVar3;
    }
  }
  return *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
          (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10);
}

// GetSubstructure @ 143d57740

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FSpatialAccelerationIdx param_1)

{
  code *pcVar1;
  bool bVar2;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Bucket;
  if (this->Buckets[uVar5].Objects.ArrayNum < 1) {
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
  uVar4 = param_1.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return pIVar3;
    }
  }
  return *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
          (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10);
}

// GetSubstructure @ 143d577d0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FSpatialAccelerationIdx param_1)

{
  code *pcVar1;
  bool bVar2;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Bucket;
  if (this->Buckets[uVar5].Objects.ArrayNum < 1) {
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
  uVar4 = param_1.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return pIVar3;
    }
  }
  return *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
          (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10);
}

// GetSubstructure @ 143d57860

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::GetSubstructure(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                  *this,FSpatialAccelerationIdx param_1)

{
  code *pcVar1;
  bool bVar2;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1.Bucket;
  if (this->Buckets[uVar5].Objects.ArrayNum < 1) {
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
  uVar4 = param_1.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return pIVar3;
    }
  }
  return *(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
          (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar4 * 0x10);
}

// GetTypeIdx @ 143d578f0

uchar __cdecl
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::GetTypeIdx(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar4;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar5;
  
  uVar3 = param_1->Type;
  pIVar5 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  pIVar4 = pIVar5;
  if (uVar3 == '\x01') {
    pIVar4 = param_1;
  }
  if (pIVar4 == (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    pIVar4 = pIVar5;
    if (uVar3 == '\0') {
      pIVar4 = param_1;
    }
    if (pIVar4 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      return '\x01';
    }
    if (uVar3 == '\x02') {
      pIVar5 = param_1;
    }
    if (pIVar5 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      return '\x02';
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return '\0';
}

// NeedUpdateElementIn @ 143d5a470

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::NeedUpdateElementIn
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar5)) == 0) {
    uVar5 = 0;
  }
  uVar6 = param_3.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar6 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x000143d5a51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2);
  return (bool)uVar4;
}

// NeedUpdateElementIn @ 143d5a530

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::NeedUpdateElementIn
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar5)) == 0) {
    uVar5 = 0;
  }
  uVar6 = param_3.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar6 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x000143d5a5dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2);
  return (bool)uVar4;
}

// NeedUpdateElementIn @ 143d5a5f0

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::NeedUpdateElementIn
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar5)) == 0) {
    uVar5 = 0;
  }
  uVar6 = param_3.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar6 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x000143d5a69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2);
  return (bool)uVar4;
}

// NeedUpdateElementIn @ 143d5a6b0

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::NeedUpdateElementIn
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar5)) == 0) {
    uVar5 = 0;
  }
  uVar6 = param_3.InnerIdx;
  if (this->Buckets[uVar5].Objects.ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar5].Objects.AllocatorInstance.Data + (ulonglong)uVar6 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x000143d5a75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2);
  return (bool)uVar4;
}

// Overlap @ 143d5aca0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TAABB<double,3> *param_1,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

{
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_res8 [4];
  TAABB<double,3> local_38;
  
  local_38.MMin._0_8_ = *(undefined8 *)&param_1->MMin;
  local_38.MMin._8_8_ = *(undefined8 *)&(param_1->MMin).field_0x8;
  local_38.MMin._16_8_ = *(undefined8 *)&(param_1->MMin).field_0x10;
  local_38.MMax._0_8_ = *(undefined8 *)&param_1->MMax;
  local_38.MMax._8_8_ = *(undefined8 *)&(param_1->MMax).field_0x8;
  local_38.MMax._16_8_ = *(undefined8 *)&(param_1->MMax).field_0x10;
  local_res8[0].Visitor = param_2;
  TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
            (&this->Types,&local_38,local_res8);
  return;
}

// Overlap @ 143d5acf0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TAABB<double,3> *param_1,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

{
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_res8 [4];
  TAABB<double,3> local_38;
  
  local_38.MMin._0_8_ = *(undefined8 *)&param_1->MMin;
  local_38.MMin._8_8_ = *(undefined8 *)&(param_1->MMin).field_0x8;
  local_38.MMin._16_8_ = *(undefined8 *)&(param_1->MMin).field_0x10;
  local_38.MMax._0_8_ = *(undefined8 *)&param_1->MMax;
  local_38.MMax._8_8_ = *(undefined8 *)&(param_1->MMax).field_0x8;
  local_38.MMax._16_8_ = *(undefined8 *)&(param_1->MMax).field_0x10;
  local_res8[0].Visitor = param_2;
  TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
            (&this->Types,&local_38,local_res8);
  return;
}

// Overlap @ 143d5ad40

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Overlap(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TAABB<double,3> *param_1,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

{
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_res8 [4];
  TAABB<double,3> local_38;
  
  local_38.MMin._0_8_ = *(undefined8 *)&param_1->MMin;
  local_38.MMin._8_8_ = *(undefined8 *)&(param_1->MMin).field_0x8;
  local_38.MMin._16_8_ = *(undefined8 *)&(param_1->MMin).field_0x10;
  local_38.MMax._0_8_ = *(undefined8 *)&param_1->MMax;
  local_38.MMax._8_8_ = *(undefined8 *)&(param_1->MMax).field_0x8;
  local_38.MMax._16_8_ = *(undefined8 *)&(param_1->MMax).field_0x10;
  local_res8[0].Visitor = param_2;
  TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
            (&this->Types,&local_38,local_res8);
  return;
}

// Overlap @ 143d5ad90

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Overlap(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          *this,TAABB<double,3> *param_1,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_res10;
  TAABB<double,3> local_48;
  
  local_48.MMin._0_8_ = *(undefined8 *)&param_1->MMin;
  local_48.MMin._8_8_ = *(undefined8 *)&(param_1->MMin).field_0x8;
  pFVar4 = (this->Types).First.Objects.AllocatorInstance.Data;
  local_48.MMin._16_8_ = *(undefined8 *)&(param_1->MMin).field_0x10;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  local_48.MMax._0_8_ = *(undefined8 *)&param_1->MMax;
  local_48.MMax._8_8_ = *(undefined8 *)&(param_1->MMax).field_0x8;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_48.MMax._16_8_ = *(undefined8 *)&(param_1->MMax).field_0x10;
  local_res10.Visitor = param_2;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4 !=
         (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) &&
       (bVar3 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
                OverlapImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                          (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4
                           ,&local_48,&local_res10), !bVar3)) {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// PBDComputeConstraintsLowLevel @ 143d5af30

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::PBDComputeConstraintsLowLevel
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,double param_1,FSpatialAccelerationBroadPhase *param_2,
          FCollisionConstraintAllocator *param_3,FCollisionDetectorSettings *param_4,
          IResimCacheBase *param_5)

{
  FPBDRigidsSOAs *pFVar1;
  
  if (param_2->bNeedsResim != false) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&param_5->DesyncedView,param_1,this,param_3,param_4);
    return;
  }
  pFVar1 = param_2->Particles;
  if (*(int *)&(pFVar1->NonDisabledDynamicView).field_0x10 <
      *(int *)&(pFVar1->ActiveDynamicMovingKinematicParticlesView).field_0x10) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<1,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&pFVar1->NonDisabledDynamicView,param_1,this,param_3,param_4);
    return;
  }
  FSpatialAccelerationBroadPhase::
  ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
            (param_2,&pFVar1->ActiveDynamicMovingKinematicParticlesView,param_1,this,param_3,param_4
            );
  return;
}

// PBDComputeConstraintsLowLevel @ 143d5afc0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::PBDComputeConstraintsLowLevel
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,double param_1,FSpatialAccelerationBroadPhase *param_2,
          FCollisionConstraintAllocator *param_3,FCollisionDetectorSettings *param_4,
          IResimCacheBase *param_5)

{
  FPBDRigidsSOAs *pFVar1;
  
  if (param_2->bNeedsResim != false) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&param_5->DesyncedView,param_1,this,param_3,param_4);
    return;
  }
  pFVar1 = param_2->Particles;
  if (*(int *)&(pFVar1->NonDisabledDynamicView).field_0x10 <
      *(int *)&(pFVar1->ActiveDynamicMovingKinematicParticlesView).field_0x10) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<1,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&pFVar1->NonDisabledDynamicView,param_1,this,param_3,param_4);
    return;
  }
  FSpatialAccelerationBroadPhase::
  ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
            (param_2,&pFVar1->ActiveDynamicMovingKinematicParticlesView,param_1,this,param_3,param_4
            );
  return;
}

// PBDComputeConstraintsLowLevel @ 143d5b050

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::PBDComputeConstraintsLowLevel
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,double param_1,FSpatialAccelerationBroadPhase *param_2,
          FCollisionConstraintAllocator *param_3,FCollisionDetectorSettings *param_4,
          IResimCacheBase *param_5)

{
  FPBDRigidsSOAs *pFVar1;
  
  if (param_2->bNeedsResim != false) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&param_5->DesyncedView,param_1,this,param_3,param_4);
    return;
  }
  pFVar1 = param_2->Particles;
  if (*(int *)&(pFVar1->NonDisabledDynamicView).field_0x10 <
      *(int *)&(pFVar1->ActiveDynamicMovingKinematicParticlesView).field_0x10) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<1,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
              (param_2,&pFVar1->NonDisabledDynamicView,param_1,this,param_3,param_4);
    return;
  }
  FSpatialAccelerationBroadPhase::
  ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>_>
            (param_2,&pFVar1->ActiveDynamicMovingKinematicParticlesView,param_1,this,param_3,param_4
            );
  return;
}

// PBDComputeConstraintsLowLevel @ 143d5b0e0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::PBDComputeConstraintsLowLevel
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,double param_1,FSpatialAccelerationBroadPhase *param_2,
          FCollisionConstraintAllocator *param_3,FCollisionDetectorSettings *param_4,
          IResimCacheBase *param_5)

{
  FPBDRigidsSOAs *pFVar1;
  
  if (param_2->bNeedsResim != false) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>_>
              (param_2,&param_5->DesyncedView,param_1,this,param_3,param_4);
    return;
  }
  pFVar1 = param_2->Particles;
  if (*(int *)&(pFVar1->NonDisabledDynamicView).field_0x10 <
      *(int *)&(pFVar1->ActiveDynamicMovingKinematicParticlesView).field_0x10) {
    FSpatialAccelerationBroadPhase::
    ComputeParticlesOverlaps<1,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>_>
              (param_2,&pFVar1->NonDisabledDynamicView,param_1,this,param_3,param_4);
    return;
  }
  FSpatialAccelerationBroadPhase::
  ComputeParticlesOverlaps<0,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_,Chaos::TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>_>
            (param_2,&pFVar1->ActiveDynamicMovingKinematicParticlesView,param_1,this,param_3,param_4
            );
  return;
}

// Raycast @ 143d5f790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Raycast(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_130;
  TVector<double,3> local_128;
  TVector<double,3> local_108;
  TAABB<double,3> local_f0;
  FQueryFastData local_c0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_130.Visitor = param_4;
  FQueryFastData::FQueryFastData(&local_c0,param_2,param_3);
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_128._0_8_ = local_c0.InvDir._0_8_;
      local_128._8_8_ = local_c0.InvDir._8_8_;
      local_108._16_8_ = 0;
      local_128._16_8_ = local_c0.InvDir._16_8_;
      local_f0.MMin._0_8_ = uVar5;
      local_f0.MMin._8_8_ = uVar6;
      local_f0.MMin._16_8_ = uVar7;
      local_f0.MMax._0_8_ = uVar8;
      local_f0.MMax._8_8_ = uVar3;
      local_f0.MMax._16_8_ = uVar4;
      local_108._0_8_ = 0;
      local_108._8_8_ = 0;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,param_1,&local_c0,&local_108,&local_f0,&local_130,local_c0.Dir
                         ,&local_128,local_c0.bParallel);
      if (!bVar9) {
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// Raycast @ 143d5f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Raycast(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4)

{
  undefined1 auStackY_b8 [32];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_78 [2];
  TVector<double,3> local_68;
  FQueryFastData local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78[0].Visitor = param_4;
  FQueryFastData::FQueryFastData(&local_48,param_2,param_3);
  local_68._0_8_ = local_48.InvDir._0_8_;
  local_68._8_8_ = local_48.InvDir._8_8_;
  local_68._16_8_ = local_48.InvDir._16_8_;
  TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::RaycastFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
            (&this->Types,param_1,&local_48,local_78,local_48.Dir,&local_68,local_48.bParallel);
  return;
}

// Raycast @ 143d5fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Raycast(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_130;
  TVector<double,3> local_128;
  TVector<double,3> local_108;
  TAABB<double,3> local_f0;
  FQueryFastData local_c0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_130.Visitor = param_4;
  FQueryFastData::FQueryFastData(&local_c0,param_2,param_3);
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_128._0_8_ = local_c0.InvDir._0_8_;
      local_128._8_8_ = local_c0.InvDir._8_8_;
      local_108._16_8_ = 0;
      local_128._16_8_ = local_c0.InvDir._16_8_;
      local_f0.MMin._0_8_ = uVar5;
      local_f0.MMin._8_8_ = uVar6;
      local_f0.MMin._16_8_ = uVar7;
      local_f0.MMax._0_8_ = uVar8;
      local_f0.MMax._8_8_ = uVar3;
      local_f0.MMax._16_8_ = uVar4;
      local_108._0_8_ = 0;
      local_108._8_8_ = 0;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,param_1,&local_c0,&local_108,&local_f0,&local_130,local_c0.Dir
                         ,&local_128,local_c0.bParallel);
      if (!bVar9) {
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// Raycast @ 143d5fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Raycast(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_b0;
  TVector<double,3> local_a8;
  FQueryFastData local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0.Visitor = param_4;
  FQueryFastData::FQueryFastData(&local_88,param_2,param_3);
  pFVar4 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4 !=
        (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      local_a8._0_8_ = local_88.InvDir._0_8_;
      local_a8._8_8_ = local_88.InvDir._8_8_;
      local_a8._16_8_ = local_88.InvDir._16_8_;
      bVar3 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
              RaycastImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                        (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4,
                         param_1,&local_88,&local_b0,local_88.Dir,&local_a8,local_88.bParallel);
      if (!bVar3) {
        return;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// RemoveElementFrom @ 143d652d0

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveElementFrom(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *this,FAccelerationStructureHandle *param_1,FSpatialAccelerationIdx param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar14;
  undefined1 local_res20 [8];
  
  uVar13 = param_2.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar13)) == 0) {
    uVar13 = 0;
  }
  uVar9 = param_2.InnerIdx;
  if ((this->Buckets[uVar13].Objects.ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar13].Objects.AllocatorInstance.Data + (ulonglong)uVar9 * 0x10);
  bVar5 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  if (bVar5 == 0) {
    uVar13 = 0;
    for (pTVar14 = this->Buckets;
        (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar14 != &this->Types; pTVar14 = pTVar14 + 1) {
      uVar9 = (pTVar14->Objects).ArrayNum;
      uVar8 = (ulonglong)(int)uVar9;
      uVar11 = 0;
      pFVar12 = (pTVar14->Objects).AllocatorInstance.Data;
      pFVar10 = pFVar12 + uVar8 * 0x10;
      while( true ) {
        if ((pTVar14->Objects).ArrayNum != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 == pFVar10) break;
        if ((*(longlong *)pFVar12 != 0) &&
           (uVar7 = uVar13 & 7, ((ushort)(uVar11 << 3) | uVar7) != (uint)(ushort)param_2)) {
          uVar8 = (ulonglong)uVar7;
          if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar7)) == 0) {
            uVar8 = 0;
          }
          if ((this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(uVar11 & 0x1fff)) &&
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
          plVar1 = *(longlong **)
                    (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
                    (ulonglong)(uint)(uVar11 & 0x1fff) * 0x10);
          bVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
          bVar5 = bVar5 | bVar6;
        }
        uVar8 = (ulonglong)uVar9;
        uVar11 = uVar11 + 1;
        pFVar12 = pFVar12 + 0x10;
      }
      uVar13 = (uint)(ushort)((short)uVar13 + 1);
    }
  }
  return (bool)bVar5;
}

// RemoveElementFrom @ 143d65510

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveElementFrom(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *this,FAccelerationStructureHandle *param_1,FSpatialAccelerationIdx param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar14;
  undefined1 local_res20 [8];
  
  uVar13 = param_2.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar13)) == 0) {
    uVar13 = 0;
  }
  uVar9 = param_2.InnerIdx;
  if ((this->Buckets[uVar13].Objects.ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar13].Objects.AllocatorInstance.Data + (ulonglong)uVar9 * 0x10);
  bVar5 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  if (bVar5 == 0) {
    uVar13 = 0;
    for (pTVar14 = this->Buckets;
        (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar14 != &this->Types; pTVar14 = pTVar14 + 1) {
      uVar9 = (pTVar14->Objects).ArrayNum;
      uVar8 = (ulonglong)(int)uVar9;
      uVar11 = 0;
      pFVar12 = (pTVar14->Objects).AllocatorInstance.Data;
      pFVar10 = pFVar12 + uVar8 * 0x10;
      while( true ) {
        if ((pTVar14->Objects).ArrayNum != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 == pFVar10) break;
        if ((*(longlong *)pFVar12 != 0) &&
           (uVar7 = uVar13 & 7, ((ushort)(uVar11 << 3) | uVar7) != (uint)(ushort)param_2)) {
          uVar8 = (ulonglong)uVar7;
          if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar7)) == 0) {
            uVar8 = 0;
          }
          if ((this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(uVar11 & 0x1fff)) &&
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
          plVar1 = *(longlong **)
                    (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
                    (ulonglong)(uint)(uVar11 & 0x1fff) * 0x10);
          bVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
          bVar5 = bVar5 | bVar6;
        }
        uVar8 = (ulonglong)uVar9;
        uVar11 = uVar11 + 1;
        pFVar12 = pFVar12 + 0x10;
      }
      uVar13 = (uint)(ushort)((short)uVar13 + 1);
    }
  }
  return (bool)bVar5;
}

// RemoveElementFrom @ 143d65750

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveElementFrom(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                    *this,FAccelerationStructureHandle *param_1,FSpatialAccelerationIdx param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar14;
  undefined1 local_res20 [8];
  
  uVar13 = param_2.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar13)) == 0) {
    uVar13 = 0;
  }
  uVar9 = param_2.InnerIdx;
  if ((this->Buckets[uVar13].Objects.ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar13].Objects.AllocatorInstance.Data + (ulonglong)uVar9 * 0x10);
  bVar5 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  if (bVar5 == 0) {
    uVar13 = 0;
    for (pTVar14 = this->Buckets;
        (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar14 != &this->Types; pTVar14 = pTVar14 + 1) {
      uVar9 = (pTVar14->Objects).ArrayNum;
      uVar8 = (ulonglong)(int)uVar9;
      uVar11 = 0;
      pFVar12 = (pTVar14->Objects).AllocatorInstance.Data;
      pFVar10 = pFVar12 + uVar8 * 0x10;
      while( true ) {
        if ((pTVar14->Objects).ArrayNum != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 == pFVar10) break;
        if ((*(longlong *)pFVar12 != 0) &&
           (uVar7 = uVar13 & 7, ((ushort)(uVar11 << 3) | uVar7) != (uint)(ushort)param_2)) {
          uVar8 = (ulonglong)uVar7;
          if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar7)) == 0) {
            uVar8 = 0;
          }
          if ((this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(uVar11 & 0x1fff)) &&
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
          plVar1 = *(longlong **)
                    (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
                    (ulonglong)(uint)(uVar11 & 0x1fff) * 0x10);
          bVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
          bVar5 = bVar5 | bVar6;
        }
        uVar8 = (ulonglong)uVar9;
        uVar11 = uVar11 + 1;
        pFVar12 = pFVar12 + 0x10;
      }
      uVar13 = (uint)(ushort)((short)uVar13 + 1);
    }
  }
  return (bool)bVar5;
}

// RemoveElementFrom @ 143d65990

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::RemoveElementFrom(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    *this,FAccelerationStructureHandle *param_1,FSpatialAccelerationIdx param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar14;
  undefined1 local_res20 [8];
  
  uVar13 = param_2.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar13)) == 0) {
    uVar13 = 0;
  }
  uVar9 = param_2.InnerIdx;
  if ((this->Buckets[uVar13].Objects.ArrayNum <= (int)uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar13].Objects.AllocatorInstance.Data + (ulonglong)uVar9 * 0x10);
  bVar5 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  if (bVar5 == 0) {
    uVar13 = 0;
    for (pTVar14 = this->Buckets;
        (TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *)
        pTVar14 != &this->Types; pTVar14 = pTVar14 + 1) {
      uVar9 = (pTVar14->Objects).ArrayNum;
      uVar8 = (ulonglong)(int)uVar9;
      uVar11 = 0;
      pFVar12 = (pTVar14->Objects).AllocatorInstance.Data;
      pFVar10 = pFVar12 + uVar8 * 0x10;
      while( true ) {
        if ((pTVar14->Objects).ArrayNum != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 == pFVar10) break;
        if ((*(longlong *)pFVar12 != 0) &&
           (uVar7 = uVar13 & 7, ((ushort)(uVar11 << 3) | uVar7) != (uint)(ushort)param_2)) {
          uVar8 = (ulonglong)uVar7;
          if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar7)) == 0) {
            uVar8 = 0;
          }
          if ((this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(uVar11 & 0x1fff)) &&
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
          plVar1 = *(longlong **)
                    (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
                    (ulonglong)(uint)(uVar11 & 0x1fff) * 0x10);
          bVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
          bVar5 = bVar5 | bVar6;
        }
        uVar8 = (ulonglong)uVar9;
        uVar11 = uVar11 + 1;
        pFVar12 = pFVar12 + 0x10;
      }
      uVar13 = (uint)(ushort)((short)uVar13 + 1);
    }
  }
  return (bool)bVar5;
}

// RemoveSubstructure @ 143d66750

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveSubstructure
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FSpatialAccelerationIdx param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar4;
  longlong lVar5;
  undefined6 in_register_00000012;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  ushort in_R8W;
  uint uVar8;
  
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000012,param_1);
  pIVar6->_padding_ = 0;
  uVar8 = in_R8W & 7;
  if (this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(in_R8W >> 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  pIVar7 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
           (ulonglong)(uint)(in_R8W >> 3) * 0x10);
  lVar5 = 0;
  if (*(char *)(pIVar7->_padding_ + 0xd) == '\x01') {
    lVar5 = pIVar7->_padding_;
  }
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
  ::Remove(&(this->Types).First,(ushort)pIVar7->SyncTimestamp);
  if (pIVar6 != pIVar7) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = pIVar7->_padding_;
    pIVar7->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::Remove(this->Buckets + uVar8,in_R8W >> 3);
  if (this->Buckets[uVar8].Objects.ArrayNum == 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & ~(byte)(1 << (in_R8W & 7));
  }
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )pIVar6;
}

// RemoveSubstructure @ 143d66890

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveSubstructure
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FSpatialAccelerationIdx param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar5;
  undefined6 in_register_00000012;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  ushort in_R8W;
  uint uVar8;
  
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000012,param_1);
  pIVar6->_padding_ = 0;
  uVar8 = in_R8W & 7;
  if ((this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(in_R8W >> 3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )TVar5.Ptr;
  }
  pIVar7 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
           (ulonglong)(uint)(in_R8W >> 3) * 0x10);
  uVar4 = GetTypeIdx((ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     pIVar7->_padding_);
  switch(uVar4) {
  case '\0':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
    TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
    ::Remove(&(this->Types).First,(ushort)pIVar7->SyncTimestamp);
    break;
  case '\x01':
    TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>
    ::Remove(&(this->Types).Remaining.First,(ushort)pIVar7->SyncTimestamp);
    break;
  case '\x02':
    TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
    ::Remove(&(this->Types).Remaining.Remaining.First,(ushort)pIVar7->SyncTimestamp);
  }
  if (pIVar6 != pIVar7) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = pIVar7->_padding_;
    pIVar7->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::Remove(this->Buckets + uVar8,in_R8W >> 3);
  if (this->Buckets[uVar8].Objects.ArrayNum == 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & ~(byte)(1 << (in_R8W & 7));
  }
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )pIVar6;
}

// RemoveSubstructure @ 143d66a00

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::RemoveSubstructure
          (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *this,FSpatialAccelerationIdx param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar4;
  longlong lVar5;
  undefined6 in_register_00000012;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  ushort in_R8W;
  uint uVar8;
  
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000012,param_1);
  pIVar6->_padding_ = 0;
  uVar8 = in_R8W & 7;
  if (this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(in_R8W >> 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  pIVar7 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
           (ulonglong)(uint)(in_R8W >> 3) * 0x10);
  lVar5 = 0;
  if (*(char *)(pIVar7->_padding_ + 0xd) == '\x02') {
    lVar5 = pIVar7->_padding_;
  }
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
  ::Remove(&(this->Types).First,(ushort)pIVar7->SyncTimestamp);
  if (pIVar6 != pIVar7) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = pIVar7->_padding_;
    pIVar7->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::Remove(this->Buckets + uVar8,in_R8W >> 3);
  if (this->Buckets[uVar8].Objects.ArrayNum == 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & ~(byte)(1 << (in_R8W & 7));
  }
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )pIVar6;
}

// RemoveSubstructure @ 143d66b40

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::RemoveSubstructure
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,FSpatialAccelerationIdx param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar4;
  longlong lVar5;
  undefined6 in_register_00000012;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar6;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  ushort in_R8W;
  uint uVar8;
  
  pIVar6 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           CONCAT62(in_register_00000012,param_1);
  pIVar6->_padding_ = 0;
  uVar8 = in_R8W & 7;
  if (this->Buckets[uVar8].Objects.ArrayNum <= (int)(uint)(in_R8W >> 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  pIVar7 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
           (this->Buckets[uVar8].Objects.AllocatorInstance.Data +
           (ulonglong)(uint)(in_R8W >> 3) * 0x10);
  lVar5 = 0;
  if (*(char *)(pIVar7->_padding_ + 0xd) == '\0') {
    lVar5 = pIVar7->_padding_;
  }
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x329,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
      return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
              )TVar4.Ptr;
    }
  }
  TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>::
  Remove(&(this->Types).First,(ushort)pIVar7->SyncTimestamp);
  if (pIVar6 != pIVar7) {
    puVar1 = (undefined8 *)pIVar6->_padding_;
    pIVar6->_padding_ = pIVar7->_padding_;
    pIVar7->_padding_ = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  ::Remove(this->Buckets + uVar8,in_R8W >> 3);
  if (this->Buckets[uVar8].Objects.ArrayNum == 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & ~(byte)(1 << (in_R8W & 7));
  }
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )pIVar6;
}

// Reset @ 143d67ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Reset(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_AccelerationStructureReset;
  if (StatPtr_STAT_AccelerationStructureReset ==
      (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_AccelerationStructureReset");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccelerationStructureReset,*pFVar4
                       ,L"Acceleration Structure Reset","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                   ,0x1eb);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// Reset @ 143d68140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Reset(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_AccelerationStructureReset;
  if (StatPtr_STAT_AccelerationStructureReset ==
      (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_AccelerationStructureReset");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccelerationStructureReset,*pFVar4
                       ,L"Acceleration Structure Reset","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                   ,0x1eb);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// Reset @ 143d683b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Reset(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_AccelerationStructureReset;
  if (StatPtr_STAT_AccelerationStructureReset ==
      (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_AccelerationStructureReset");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccelerationStructureReset,*pFVar4
                       ,L"Acceleration Structure Reset","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                   ,0x1eb);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// Reset @ 143d68620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Reset(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
        *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_AccelerationStructureReset;
  if (StatPtr_STAT_AccelerationStructureReset ==
      (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_AccelerationStructureReset");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccelerationStructureReset,*pFVar4
                       ,L"Acceleration Structure Reset","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                   ,0x1eb);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>,Chaos::FAccelerationStructureHandle,double,3>
    ::Reset(&this->Types);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// Serialize @ 143d6cda0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Serialize(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,FChaosArchive *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 local_res18 [16];
  
  lVar10 = 8;
  pTVar5 = this;
  do {
    piVar11 = &pTVar5->Buckets[0].Objects.ArrayNum;
    operator<<<Chaos::TSpatialAccelerationBucketEntry<Chaos::
    FAccelerationStructureHandle_double_3>_TSizedDefaultAllocator<32>_>
              (param_1,&pTVar5->Buckets[0].Objects);
    operator<<<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&pTVar5->Buckets[0].FreeIndices);
    if ((param_1->_padding_ & 1) != 0) {
      iVar2 = *piVar11;
      pFVar8 = pTVar5->Buckets[0].Objects.AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (*piVar11 != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar9) break;
        lVar3 = *(longlong *)pFVar8;
        lVar7 = 0;
        if (*(char *)(lVar3 + 0xd) == '\x01') {
          lVar7 = lVar3;
        }
        if ((lVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                               ,0x329,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)(lVar3 + 0xd) != '\x01') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type == TConcrete::StaticType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                               ,399,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(ushort *)(pFVar8 + 8);
        if (((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = pFVar8 + 0x10;
        *(longlong *)((this->Types).First.Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) =
             lVar3;
      }
    }
    lVar10 = lVar10 + -1;
    pTVar5 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)piVar11;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// Serialize @ 143d6cf10

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Serialize(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,FChaosArchive *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [16];
  
  lVar10 = 8;
  pTVar6 = this;
  do {
    piVar11 = &pTVar6->Buckets[0].Objects.ArrayNum;
    operator<<<Chaos::TSpatialAccelerationBucketEntry<Chaos::
    FAccelerationStructureHandle_double_3>_TSizedDefaultAllocator<32>_>
              (param_1,&pTVar6->Buckets[0].Objects);
    operator<<<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&pTVar6->Buckets[0].FreeIndices);
    if ((param_1->_padding_ & 1) != 0) {
      iVar3 = *piVar11;
      pFVar9 = pTVar6->Buckets[0].Objects.AllocatorInstance.Data;
      pFVar12 = pFVar9 + (longlong)iVar3 * 0x10;
      while( true ) {
        if (*piVar11 != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar9 == pFVar12) break;
        lVar4 = *(longlong *)pFVar9;
        cVar1 = *(char *)(lVar4 + 0xd);
        lVar8 = 0;
        if (cVar1 == '\x01') {
          lVar8 = lVar4;
        }
        if (lVar8 == 0) {
          lVar8 = 0;
          if (cVar1 == '\0') {
            lVar8 = lVar4;
          }
          if (lVar8 == 0) {
            lVar8 = 0;
            if (cVar1 == '\x02') {
              lVar8 = lVar4;
            }
            if (lVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                                 ,0x329,L"");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_143d6d0e8;
            }
            if ((cVar1 != '\x02') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type == TConcrete::StaticType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                                   ,399,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar2 = *(ushort *)(pFVar9 + 8);
            if (((this->Types).Remaining.Remaining.First.Objects.ArrayNum <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar9 = pFVar9 + 0x10;
            *(longlong *)
             ((this->Types).Remaining.Remaining.First.Objects.AllocatorInstance.Data +
             (ulonglong)uVar2 * 8) = lVar4;
          }
          else {
            if ((cVar1 != '\0') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type == TConcrete::StaticType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                                   ,399,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar2 = *(ushort *)(pFVar9 + 8);
            if (((this->Types).Remaining.First.Objects.ArrayNum <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar9 = pFVar9 + 0x10;
            *(longlong *)
             ((this->Types).Remaining.First.Objects.AllocatorInstance.Data + (ulonglong)uVar2 * 8) =
                 lVar4;
          }
        }
        else {
LAB_143d6d0e8:
          if ((*(char *)(lVar4 + 0xd) != '\x01') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == TConcrete::StaticType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                                 ,399,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(ushort *)(pFVar9 + 8);
          if (((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar9 = pFVar9 + 0x10;
          *(longlong *)((this->Types).First.Objects.AllocatorInstance.Data + (ulonglong)uVar2 * 8) =
               lVar4;
        }
      }
    }
    lVar10 = lVar10 + -1;
    pTVar6 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)piVar11;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// Serialize @ 143d6d1a0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Serialize(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
            *this,FChaosArchive *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 local_res18 [16];
  
  lVar10 = 8;
  pTVar5 = this;
  do {
    piVar11 = &pTVar5->Buckets[0].Objects.ArrayNum;
    operator<<<Chaos::TSpatialAccelerationBucketEntry<Chaos::
    FAccelerationStructureHandle_double_3>_TSizedDefaultAllocator<32>_>
              (param_1,&pTVar5->Buckets[0].Objects);
    operator<<<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&pTVar5->Buckets[0].FreeIndices);
    if ((param_1->_padding_ & 1) != 0) {
      iVar2 = *piVar11;
      pFVar8 = pTVar5->Buckets[0].Objects.AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (*piVar11 != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar9) break;
        lVar3 = *(longlong *)pFVar8;
        lVar7 = 0;
        if (*(char *)(lVar3 + 0xd) == '\x02') {
          lVar7 = lVar3;
        }
        if ((lVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                               ,0x329,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)(lVar3 + 0xd) != '\x02') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type == TConcrete::StaticType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                               ,399,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(ushort *)(pFVar8 + 8);
        if (((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = pFVar8 + 0x10;
        *(longlong *)((this->Types).First.Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) =
             lVar3;
      }
    }
    lVar10 = lVar10 + -1;
    pTVar5 = (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
              *)piVar11;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// Serialize @ 143d6d310

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Serialize(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
            *this,FChaosArchive *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 local_res18 [16];
  
  lVar10 = 8;
  pTVar5 = this;
  do {
    piVar11 = &pTVar5->Buckets[0].Objects.ArrayNum;
    operator<<<Chaos::TSpatialAccelerationBucketEntry<Chaos::
    FAccelerationStructureHandle_double_3>_TSizedDefaultAllocator<32>_>
              (param_1,&pTVar5->Buckets[0].Objects);
    operator<<<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&pTVar5->Buckets[0].FreeIndices);
    if ((param_1->_padding_ & 1) != 0) {
      iVar2 = *piVar11;
      pFVar8 = pTVar5->Buckets[0].Objects.AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (*piVar11 != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar9) break;
        lVar3 = *(longlong *)pFVar8;
        lVar7 = 0;
        if (*(char *)(lVar3 + 0xd) == '\0') {
          lVar7 = lVar3;
        }
        if ((lVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                               ,0x329,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)(lVar3 + 0xd) != '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type == TConcrete::StaticType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                               ,399,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(ushort *)(pFVar8 + 8);
        if (((this->Types).First.Objects.ArrayNum <= (int)(uint)uVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = pFVar8 + 0x10;
        *(longlong *)((this->Types).First.Objects.AllocatorInstance.Data + (ulonglong)uVar1 * 8) =
             lVar3;
      }
    }
    lVar10 = lVar10 + -1;
    pTVar5 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
              *)piVar11;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// SwapSubstructure @ 143d746b0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::SwapSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                   *this,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                         *param_1,FSpatialAccelerationIdx param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  
  uVar6 = param_2.Bucket;
  uVar2 = param_2.InnerIdx;
  if (this->Buckets[uVar6].Objects.ArrayNum <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(uVar6 * 0x20 + 0x20 + (longlong)param_1) <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other->Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1e0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0xe8))(param_1,&local_res20,param_2);
  (**(code **)(this->_padding_ + 0xe8))(this,&local_res10,param_2);
  uVar4 = param_2.Bucket;
  uVar5 = param_2.InnerIdx;
  (**(code **)(param_1->_padding_ + 0xe0))(param_1,local_res18,&local_res10,uVar4,uVar5);
  (**(code **)(this->_padding_ + 0xe0))(this,local_res8,&local_res20,uVar4,uVar5);
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return;
}

// SwapSubstructure @ 143d747e0

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::SwapSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                   *this,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                         *param_1,FSpatialAccelerationIdx param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  
  uVar6 = param_2.Bucket;
  uVar2 = param_2.InnerIdx;
  if (this->Buckets[uVar6].Objects.ArrayNum <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(uVar6 * 0x20 + 0x20 + (longlong)param_1) <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other->Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1e0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0xe8))(param_1,&local_res20,param_2);
  (**(code **)(this->_padding_ + 0xe8))(this,&local_res10,param_2);
  uVar4 = param_2.Bucket;
  uVar5 = param_2.InnerIdx;
  (**(code **)(param_1->_padding_ + 0xe0))(param_1,local_res18,&local_res10,uVar4,uVar5);
  (**(code **)(this->_padding_ + 0xe0))(this,local_res8,&local_res20,uVar4,uVar5);
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return;
}

// SwapSubstructure @ 143d74910

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::SwapSubstructure(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                   *this,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                         *param_1,FSpatialAccelerationIdx param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  
  uVar6 = param_2.Bucket;
  uVar2 = param_2.InnerIdx;
  if (this->Buckets[uVar6].Objects.ArrayNum <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(uVar6 * 0x20 + 0x20 + (longlong)param_1) <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other->Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1e0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0xe8))(param_1,&local_res20,param_2);
  (**(code **)(this->_padding_ + 0xe8))(this,&local_res10,param_2);
  uVar4 = param_2.Bucket;
  uVar5 = param_2.InnerIdx;
  (**(code **)(param_1->_padding_ + 0xe0))(param_1,local_res18,&local_res10,uVar4,uVar5);
  (**(code **)(this->_padding_ + 0xe0))(this,local_res8,&local_res20,uVar4,uVar5);
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return;
}

// SwapSubstructure @ 143d74a40

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::SwapSubstructure(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                   *this,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                         *param_1,FSpatialAccelerationIdx param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  
  uVar6 = param_2.Bucket;
  uVar2 = param_2.InnerIdx;
  if (this->Buckets[uVar6].Objects.ArrayNum <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(uVar6 * 0x20 + 0x20 + (longlong)param_1) <= (int)uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other->Buckets[Idx.Bucket].Objects.Num() > Idx.InnerIdx",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SpatialAccelerationCollection.h"
                       ,0x1e0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0xe8))(param_1,&local_res20,param_2);
  (**(code **)(this->_padding_ + 0xe8))(this,&local_res10,param_2);
  uVar4 = param_2.Bucket;
  uVar5 = param_2.InnerIdx;
  (**(code **)(param_1->_padding_ + 0xe0))(param_1,local_res18,&local_res10,uVar4,uVar5);
  (**(code **)(this->_padding_ + 0xe0))(this,local_res8,&local_res20,uVar4,uVar5);
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return;
}

// Sweep @ 143d74d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Sweep(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,
       ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_140;
  TVector<double,3> local_138;
  TVector<double,3> local_118;
  TAABB<double,3> local_f8;
  FQueryFastData local_c8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140.Visitor = param_5;
  FQueryFastData::FQueryFastData(&local_c8,param_2,param_3);
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_118._0_8_ = *(undefined8 *)param_4;
      local_118._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_118._16_8_ = *(undefined8 *)&param_4->field_0x10;
      local_138._0_8_ = local_c8.InvDir._0_8_;
      local_138._8_8_ = local_c8.InvDir._8_8_;
      local_138._16_8_ = local_c8.InvDir._16_8_;
      local_f8.MMin._0_8_ = uVar5;
      local_f8.MMin._8_8_ = uVar6;
      local_f8.MMin._16_8_ = uVar7;
      local_f8.MMax._0_8_ = uVar8;
      local_f8.MMax._8_8_ = uVar3;
      local_f8.MMax._16_8_ = uVar4;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,param_1,&local_c8,&local_118,&local_f8,&local_140,local_c8.Dir
                         ,&local_138,local_c8.bParallel);
      if (!bVar9) {
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// Sweep @ 143d74f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Sweep(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,
       ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5)

{
  undefined1 auStackY_e8 [32];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_a8 [2];
  TVector<double,3> local_98;
  TVector<double,3> local_78;
  FQueryFastData local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8[0].Visitor = param_5;
  FQueryFastData::FQueryFastData(&local_58,param_2,param_3);
  local_98._0_8_ = local_58.InvDir._0_8_;
  local_98._8_8_ = local_58.InvDir._8_8_;
  local_78._0_8_ = *(undefined8 *)param_4;
  local_78._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_98._16_8_ = local_58.InvDir._16_8_;
  local_78._16_8_ = *(undefined8 *)&param_4->field_0x10;
  TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::SweepFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
            (&this->Types,param_1,&local_58,&local_78,local_a8,local_58.Dir,&local_98,
             local_58.bParallel);
  return;
}

// Sweep @ 143d75040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::Sweep(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,
       ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_140;
  TVector<double,3> local_138;
  TVector<double,3> local_118;
  TAABB<double,3> local_f8;
  FQueryFastData local_c8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140.Visitor = param_5;
  FQueryFastData::FQueryFastData(&local_c8,param_2,param_3);
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_118._0_8_ = *(undefined8 *)param_4;
      local_118._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_118._16_8_ = *(undefined8 *)&param_4->field_0x10;
      local_138._0_8_ = local_c8.InvDir._0_8_;
      local_138._8_8_ = local_c8.InvDir._8_8_;
      local_138._16_8_ = local_c8.InvDir._16_8_;
      local_f8.MMin._0_8_ = uVar5;
      local_f8.MMin._8_8_ = uVar6;
      local_f8.MMin._16_8_ = uVar7;
      local_f8.MMax._0_8_ = uVar8;
      local_f8.MMax._8_8_ = uVar3;
      local_f8.MMax._16_8_ = uVar4;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,param_1,&local_c8,&local_118,&local_f8,&local_140,local_c8.Dir
                         ,&local_138,local_c8.bParallel);
      if (!bVar9) {
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// Sweep @ 143d75200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::Sweep(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,
       ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [8];
  TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> local_e0;
  TVector<double,3> local_d8;
  TVector<double,3> local_b8;
  FQueryFastData local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e0.Visitor = param_5;
  FQueryFastData::FQueryFastData(&local_98,param_2,param_3);
  pFVar4 = (this->Types).First.Objects.AllocatorInstance.Data;
  iVar2 = (this->Types).First.Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Types).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4 !=
        (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_4;
      local_b8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_4->field_0x10;
      local_d8._0_8_ = local_98.InvDir._0_8_;
      local_d8._8_8_ = local_98.InvDir._8_8_;
      local_d8._16_8_ = local_98.InvDir._16_8_;
      bVar3 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
              SweepImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                        (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4,
                         param_1,&local_98,&local_b8,&local_e0,local_98.Dir,&local_d8,
                         local_98.bParallel);
      if (!bVar3) {
        return;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// UpdateElementIn @ 143d7ca90

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::UpdateElementIn(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3,
                 FSpatialAccelerationIdx param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar13;
  undefined1 local_48 [4];
  uint local_44;
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_40;
  
  uVar12 = param_4.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar12)) == 0) {
    uVar12 = 0;
  }
  uVar8 = param_4.InnerIdx;
  if ((this->Buckets[uVar12].Objects.ArrayNum <= (int)uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar12].Objects.AllocatorInstance.Data + (ulonglong)uVar8 * 0x10);
  cVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2,param_3);
  if (cVar5 == '\0') {
    uVar12 = 0;
    pTVar13 = this->Buckets;
    local_40 = &this->Types;
    if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar13 != local_40) {
      do {
        local_44 = (pTVar13->Objects).ArrayNum;
        uVar7 = (ulonglong)(int)local_44;
        uVar9 = 0;
        pFVar10 = (pTVar13->Objects).AllocatorInstance.Data;
        pFVar11 = pFVar10 + uVar7 * 0x10;
        while( true ) {
          if ((pTVar13->Objects).ArrayNum != (int)uVar7) {
            local_48[0] = 0;
            `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_48);
          }
          if (pFVar10 == pFVar11) break;
          if ((*(longlong *)pFVar10 != 0) &&
             (uVar8 = uVar12 & 7, ((ushort)(uVar9 << 3) | uVar8) != (uint)(ushort)param_4)) {
            uVar7 = (ulonglong)uVar8;
            if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar8)) == 0) {
              uVar7 = 0;
            }
            if ((this->Buckets[uVar7].Objects.ArrayNum <= (int)(uint)(uVar9 & 0x1fff)) &&
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
            plVar1 = *(longlong **)
                      (this->Buckets[uVar7].Objects.AllocatorInstance.Data +
                      (ulonglong)(uint)(uVar9 & 0x1fff) * 0x10);
            cVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
            if ((cVar5 != '\0') || (cVar6 != '\0')) {
              cVar5 = '\x01';
            }
          }
          uVar7 = (ulonglong)local_44;
          uVar9 = uVar9 + 1;
          pFVar10 = pFVar10 + 0x10;
        }
        uVar12 = (uint)(ushort)((short)uVar12 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *)pTVar13 != local_40);
    }
  }
  return (bool)cVar5;
}

// UpdateElementIn @ 143d7ccd0

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::UpdateElementIn(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3,
                 FSpatialAccelerationIdx param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar13;
  undefined1 local_48 [4];
  uint local_44;
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_40;
  
  uVar12 = param_4.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar12)) == 0) {
    uVar12 = 0;
  }
  uVar8 = param_4.InnerIdx;
  if ((this->Buckets[uVar12].Objects.ArrayNum <= (int)uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar12].Objects.AllocatorInstance.Data + (ulonglong)uVar8 * 0x10);
  cVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2,param_3);
  if (cVar5 == '\0') {
    uVar12 = 0;
    pTVar13 = this->Buckets;
    local_40 = &this->Types;
    if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar13 != local_40) {
      do {
        local_44 = (pTVar13->Objects).ArrayNum;
        uVar7 = (ulonglong)(int)local_44;
        uVar9 = 0;
        pFVar10 = (pTVar13->Objects).AllocatorInstance.Data;
        pFVar11 = pFVar10 + uVar7 * 0x10;
        while( true ) {
          if ((pTVar13->Objects).ArrayNum != (int)uVar7) {
            local_48[0] = 0;
            `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_48);
          }
          if (pFVar10 == pFVar11) break;
          if ((*(longlong *)pFVar10 != 0) &&
             (uVar8 = uVar12 & 7, ((ushort)(uVar9 << 3) | uVar8) != (uint)(ushort)param_4)) {
            uVar7 = (ulonglong)uVar8;
            if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar8)) == 0) {
              uVar7 = 0;
            }
            if ((this->Buckets[uVar7].Objects.ArrayNum <= (int)(uint)(uVar9 & 0x1fff)) &&
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
            plVar1 = *(longlong **)
                      (this->Buckets[uVar7].Objects.AllocatorInstance.Data +
                      (ulonglong)(uint)(uVar9 & 0x1fff) * 0x10);
            cVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
            if ((cVar5 != '\0') || (cVar6 != '\0')) {
              cVar5 = '\x01';
            }
          }
          uVar7 = (ulonglong)local_44;
          uVar9 = uVar9 + 1;
          pFVar10 = pFVar10 + 0x10;
        }
        uVar12 = (uint)(ushort)((short)uVar12 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *)pTVar13 != local_40);
    }
  }
  return (bool)cVar5;
}

// UpdateElementIn @ 143d7cf10

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
::UpdateElementIn(TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                  *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3,
                 FSpatialAccelerationIdx param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar13;
  undefined1 local_48 [4];
  uint local_44;
  TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *local_40;
  
  uVar12 = param_4.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar12)) == 0) {
    uVar12 = 0;
  }
  uVar8 = param_4.InnerIdx;
  if ((this->Buckets[uVar12].Objects.ArrayNum <= (int)uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar12].Objects.AllocatorInstance.Data + (ulonglong)uVar8 * 0x10);
  cVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2,param_3);
  if (cVar5 == '\0') {
    uVar12 = 0;
    pTVar13 = this->Buckets;
    local_40 = &this->Types;
    if ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
         *)pTVar13 != local_40) {
      do {
        local_44 = (pTVar13->Objects).ArrayNum;
        uVar7 = (ulonglong)(int)local_44;
        uVar9 = 0;
        pFVar10 = (pTVar13->Objects).AllocatorInstance.Data;
        pFVar11 = pFVar10 + uVar7 * 0x10;
        while( true ) {
          if ((pTVar13->Objects).ArrayNum != (int)uVar7) {
            local_48[0] = 0;
            `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_48);
          }
          if (pFVar10 == pFVar11) break;
          if ((*(longlong *)pFVar10 != 0) &&
             (uVar8 = uVar12 & 7, ((ushort)(uVar9 << 3) | uVar8) != (uint)(ushort)param_4)) {
            uVar7 = (ulonglong)uVar8;
            if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar8)) == 0) {
              uVar7 = 0;
            }
            if ((this->Buckets[uVar7].Objects.ArrayNum <= (int)(uint)(uVar9 & 0x1fff)) &&
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
            plVar1 = *(longlong **)
                      (this->Buckets[uVar7].Objects.AllocatorInstance.Data +
                      (ulonglong)(uint)(uVar9 & 0x1fff) * 0x10);
            cVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
            if ((cVar5 != '\0') || (cVar6 != '\0')) {
              cVar5 = '\x01';
            }
          }
          uVar7 = (ulonglong)local_44;
          uVar9 = uVar9 + 1;
          pFVar10 = pFVar10 + 0x10;
        }
        uVar12 = (uint)(ushort)((short)uVar12 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *)pTVar13 != local_40);
    }
  }
  return (bool)cVar5;
}

// UpdateElementIn @ 143d7d150

bool __thiscall
Chaos::
TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
::UpdateElementIn(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                  *this,FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3,
                 FSpatialAccelerationIdx param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar13;
  undefined1 local_48 [4];
  uint local_44;
  TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *local_40
  ;
  
  uVar12 = param_4.Bucket;
  if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar12)) == 0) {
    uVar12 = 0;
  }
  uVar8 = param_4.InnerIdx;
  if ((this->Buckets[uVar12].Objects.ArrayNum <= (int)uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar1 = *(longlong **)
            (this->Buckets[uVar12].Objects.AllocatorInstance.Data + (ulonglong)uVar8 * 0x10);
  cVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2,param_3);
  if (cVar5 == '\0') {
    uVar12 = 0;
    pTVar13 = this->Buckets;
    local_40 = &this->Types;
    if ((TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> *)
        pTVar13 != local_40) {
      do {
        local_44 = (pTVar13->Objects).ArrayNum;
        uVar7 = (ulonglong)(int)local_44;
        uVar9 = 0;
        pFVar10 = (pTVar13->Objects).AllocatorInstance.Data;
        pFVar11 = pFVar10 + uVar7 * 0x10;
        while( true ) {
          if ((pTVar13->Objects).ArrayNum != (int)uVar7) {
            local_48[0] = 0;
            `TCheckedPointerIterator<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_48);
          }
          if (pFVar10 == pFVar11) break;
          if ((*(longlong *)pFVar10 != 0) &&
             (uVar8 = uVar12 & 7, ((ushort)(uVar9 << 3) | uVar8) != (uint)(ushort)param_4)) {
            uVar7 = (ulonglong)uVar8;
            if ((byte)((byte)this->_padding_ & (byte)(1 << (sbyte)uVar8)) == 0) {
              uVar7 = 0;
            }
            if ((this->Buckets[uVar7].Objects.ArrayNum <= (int)(uint)(uVar9 & 0x1fff)) &&
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
            plVar1 = *(longlong **)
                      (this->Buckets[uVar7].Objects.AllocatorInstance.Data +
                      (ulonglong)(uint)(uVar9 & 0x1fff) * 0x10);
            cVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
            if ((cVar5 != '\0') || (cVar6 != '\0')) {
              cVar5 = '\x01';
            }
          }
          uVar7 = (ulonglong)local_44;
          uVar9 = uVar9 + 1;
          pFVar10 = pFVar10 + 0x10;
        }
        uVar12 = (uint)(ushort)((short)uVar12 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                *)pTVar13 != local_40);
    }
  }
  return (bool)cVar5;
}

