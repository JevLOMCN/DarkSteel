// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 40

// FImplicitObjectUnion @ 143b567a0

FImplicitObjectUnion * __thiscall
Chaos::FImplicitObjectUnion::FImplicitObjectUnion(FImplicitObjectUnion *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  (this->MObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MObjects).ArrayNum = 0;
  (this->MObjects).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x505;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0;
  (this->BVH).Ptr = (FImplicitBVH *)0x0;
  this->NumLeafObjects = 0;
  (this->Flags).Bits = '\0';
  return this;
}

// FImplicitObjectUnion @ 143b56800

FImplicitObjectUnion * __thiscall
Chaos::FImplicitObjectUnion::FImplicitObjectUnion
          (FImplicitObjectUnion *this,FImplicitObjectUnion *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  (this->MObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x505;
  (this->MObjects).AllocatorInstance.Data = (param_1->MObjects).AllocatorInstance.Data;
  (param_1->MObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MObjects).ArrayNum = (param_1->MObjects).ArrayNum;
  (this->MObjects).ArrayMax = (param_1->MObjects).ArrayMax;
  (param_1->MObjects).ArrayNum = 0;
  (param_1->MObjects).ArrayMax = 0;
  uVar1 = *(undefined8 *)&(param_1->MLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&(param_1->MLocalBoundingBox).MMin
  ;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->MLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&(param_1->MLocalBoundingBox).MMax
  ;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->MLocalBoundingBox).MMax.field_0x10;
  (this->BVH).Ptr = (param_1->BVH).Ptr;
  (param_1->BVH).Ptr = (FImplicitBVH *)0x0;
  this->NumLeafObjects = param_1->NumLeafObjects;
  (this->Flags).Bits = '\0';
  this->Flags = param_1->Flags;
  return this;
}

// FImplicitObjectUnion @ 143b56890

FImplicitObjectUnion * __thiscall
Chaos::FImplicitObjectUnion::FImplicitObjectUnion
          (FImplicitObjectUnion *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FImplicitObjectUnion *pFVar6;
  TAABB<double,3> *pTVar7;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> local_58;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_48;
  TAABB<double,3> local_38;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  *(undefined2 *)&this->_padding_ = 0x505;
  (this->MObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MObjects).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MObjects).ArrayNum = param_1->ArrayNum;
  (this->MObjects).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  (this->BVH).Ptr = (FImplicitBVH *)0x0;
  this->NumLeafObjects = 0;
  (this->Flags).Bits = '\0';
  if ((this->MObjects).ArrayNum == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7376392192400555950>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,0x52,"MObjects.Num()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObjectUnion *)(*pcVar1)();
      return pFVar6;
    }
  }
  local_58.DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data
  ;
  iVar4 = (this->MObjects).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObjectUnion *)(*pcVar1)();
      return pFVar6;
    }
  }
  local_58.ArrayNum = iVar4;
  pTVar7 = CalculateObjectsBounds(&local_38,&local_58);
  uVar2 = *(undefined8 *)&(pTVar7->MMin).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar7->MMin;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar2;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(pTVar7->MMin).field_0x10;
  uVar2 = *(undefined8 *)&(pTVar7->MMax).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar7->MMax;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar2;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(pTVar7->MMax).field_0x10;
  local_48.ArrayNum = (this->MObjects).ArrayNum;
  local_48.DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data
  ;
  if (local_48.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObjectUnion *)(*pcVar1)();
      return pFVar6;
    }
  }
  iVar4 = Chaos::Private::FImplicitBVH::CountLeafObjects(&local_48);
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumLeafObjects >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,0xab,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObjectUnion *)(*pcVar1)();
      return pFVar6;
    }
  }
  iVar5 = 0x7fffffff;
  if (iVar4 < 0x7fffffff) {
    iVar5 = iVar4;
  }
  this->NumLeafObjects = iVar5;
  return this;
}

// FImplicitObjectUnion @ 143b56a60

FImplicitObjectUnion * __thiscall
Chaos::FImplicitObjectUnion::FImplicitObjectUnion
          (FImplicitObjectUnion *this,
          TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObjectUnion *pFVar3;
  
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->MObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MObjects).ArrayNum = 0;
  (this->MObjects).ArrayMax = 0;
  (this->BVH).Ptr = (FImplicitBVH *)0x0;
  this->NumLeafObjects = 0;
  (this->Flags).Bits = '\0';
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  *(undefined2 *)&this->_padding_ = 0x505;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                     ,0x49,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImplicitObjectUnion *)(*pcVar1)();
    return pFVar3;
  }
  return this;
}

// ~FImplicitObjectUnion @ 143b580b0

void __thiscall Chaos::FImplicitObjectUnion::~FImplicitObjectUnion(FImplicitObjectUnion *this)

{
  FImplicitBVH *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
  pFVar1 = (this->BVH).Ptr;
  if (pFVar1 != (FImplicitBVH *)0x0) {
    pFVar2 = (pFVar1->Nodes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->NodeObjectIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Objects).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data,
             (this->MObjects).ArrayNum);
  pFVar2 = (this->MObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// AccumulateAllImplicitObjects @ 143b5c390

void __thiscall
Chaos::FImplicitObjectUnion::AccumulateAllImplicitObjects
          (FImplicitObjectUnion *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TRigidTransform<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xe0))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// BoundingBox @ 143b5e930

TAABB<double,3> * __thiscall
Chaos::FImplicitObjectUnion::BoundingBox
          (FImplicitObjectUnion *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// CacheAllImplicitObjects @ 143b5fad0

void __thiscall Chaos::FImplicitObjectUnion::CacheAllImplicitObjects(FImplicitObjectUnion *this)

{
  int iVar1;
  FImplicitBVH *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar7;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> *pTVar8;
  TRefCountPtr<Chaos::FImplicitObject> *pTStackX_8;
  FScriptContainerElement *pFStack_38;
  int iStack_30;
  
  pFVar2 = (this->BVH).Ptr;
  if (pFVar2 != (FImplicitBVH *)0x0) {
    (this->BVH).Ptr = (FImplicitBVH *)0x0;
    pFVar3 = (pFVar2->Nodes).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->NodeObjectIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->Objects).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x38);
    (this->Flags).Bits = (this->Flags).Bits & 0xfd;
  }
  iVar5 = CVars::ChaosUnionBVHMinShapes;
  pTVar8 = &this->BVH;
  if ((((this->Flags).Bits & 1) != 0) && (CVars::bChaosUnionBVHEnabled != false)) {
    iVar1 = (this->MObjects).ArrayNum;
    pFVar3 = (this->MObjects).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFStack_38 = pFVar3;
    iStack_30 = iVar1;
    TVar7 = Chaos::Private::FImplicitBVH::TryMake
                      ((TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)&pTStackX_8,
                       (int)&pFStack_38,iVar5);
    if ((FImplicitBVH *)pTVar8 != TVar7.Ptr) {
      pFVar2 = pTVar8->Ptr;
      pTVar8->Ptr = (FImplicitBVH *)((TVar7.Ptr)->Objects).AllocatorInstance.Data;
      ((TVar7.Ptr)->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (pFVar2 != (FImplicitBVH *)0x0) {
        pFVar3 = (pFVar2->Nodes).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->NodeObjectIndices).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->Objects).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar2,0x38);
      }
    }
    if (pTStackX_8 != (TRefCountPtr<Chaos::FImplicitObject> *)0x0) {
      if (pTStackX_8[4].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(pTStackX_8[4].Reference);
      }
      if (pTStackX_8[2].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(pTStackX_8[2].Reference);
      }
      if (pTStackX_8->Reference != (FImplicitObject *)0x0) {
        FMemory::Free(pTStackX_8->Reference);
      }
      ::operator_delete(pTStackX_8,0x38);
    }
    (this->Flags).Bits = -((this->BVH).Ptr != (FImplicitBVH *)0x0) & 2U | (this->Flags).Bits & 0xfd;
  }
  return;
}

// CheckNotLocked @ 143b5fdd0

void __thiscall Chaos::FImplicitObjectUnion::CheckNotLocked(FImplicitObjectUnion *this)

{
  undefined1 local_res8 [32];
  
  if (((this->Flags).Bits & 4) != 0) {
    `Chaos::FImplicitObjectUnion::CheckNotLocked'::__l2::<lambda_1>::operator()(local_res8);
    return;
  }
  return;
}

// Combine @ 143b602e0

void __thiscall
Chaos::FImplicitObjectUnion::Combine
          (FImplicitObjectUnion *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> local_88;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  if ((this->MObjects).ArrayNum == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7376392192400555919>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,0x71,"MObjects.Num()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((this->Flags).Bits & 4) != 0) {
    local_res8[0] = 0;
    `Chaos::FImplicitObjectUnion::CheckNotLocked'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_88.DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_88.ArrayNum = iVar3;
  CalculateObjectsBounds((TAABB<double,3> *)&local_68,&local_88);
  if ((this->MObjects).ArrayNum < 1) {
    *(double *)&(this->MLocalBoundingBox).MMin = local_68;
    *(double *)&(this->MLocalBoundingBox).MMin.field_0x8 = dStack_60;
    *(double *)&(this->MLocalBoundingBox).MMin.field_0x10 = local_58;
    *(double *)&(this->MLocalBoundingBox).MMax = local_50;
    *(double *)&(this->MLocalBoundingBox).MMax.field_0x8 = dStack_48;
    *(double *)&(this->MLocalBoundingBox).MMax.field_0x10 = local_40;
  }
  else {
    dVar13 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x8;
    uVar11 = SUB84(local_68,0);
    uVar12 = (undefined4)((ulonglong)local_68 >> 0x20);
    dVar14 = *(double *)&(this->MLocalBoundingBox).MMin;
    if (dVar14 <= local_68) {
      uVar11 = SUB84(dVar14,0);
      uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
    }
    dVar14 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10;
    if (dStack_60 <= dVar13) {
      dVar13 = dStack_60;
    }
    if (local_58 <= dVar14) {
      dVar14 = local_58;
    }
    *(ulonglong *)&(this->MLocalBoundingBox).MMin = CONCAT44(uVar12,uVar11);
    *(double *)&(this->MLocalBoundingBox).MMin.field_0x8 = dVar13;
    *(double *)&(this->MLocalBoundingBox).MMin.field_0x10 = dVar14;
    dVar13 = *(double *)&(this->MLocalBoundingBox).MMax;
    uVar11 = SUB84(dVar13,0);
    uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar14 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x8;
    dVar15 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x10;
    if (dVar13 <= local_50) {
      uVar11 = SUB84(local_50,0);
      uVar12 = (undefined4)((ulonglong)local_50 >> 0x20);
    }
    if (dVar14 <= dStack_48) {
      dVar14 = dStack_48;
    }
    if (dVar15 <= local_40) {
      dVar15 = local_40;
    }
    *(ulonglong *)&(this->MLocalBoundingBox).MMax = CONCAT44(uVar12,uVar11);
    *(double *)&(this->MLocalBoundingBox).MMax.field_0x8 = dVar14;
    *(double *)&(this->MLocalBoundingBox).MMax.field_0x10 = dVar15;
  }
  iVar3 = (this->MObjects).ArrayNum;
  uVar10 = param_1->ArrayNum + iVar3;
  if (-1 < (int)uVar10) {
    piVar1 = &(this->MObjects).ArrayMax;
    if (*piVar1 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,&(this->MObjects).AllocatorInstance,iVar3,piVar1);
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar2) break;
      iVar8 = this->NumLeafObjects;
      local_78.ArrayNum = 1;
      local_78.DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)pFVar9;
      iVar7 = Chaos::Private::FImplicitBVH::CountLeafObjects(&local_78);
      iVar8 = iVar8 + iVar7;
      if (iVar8 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumLeafObjects >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                           ,0xab,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = 0x7fffffff;
      if (iVar8 < 0x7fffffff) {
        iVar7 = iVar8;
      }
      this->NumLeafObjects = iVar7;
      pFVar4 = (this->MObjects).AllocatorInstance.Data;
      if ((pFVar4 <= pFVar9) && (pFVar9 < pFVar4 + (longlong)*piVar1 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this->MObjects).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->MObjects).AllocatorInstance,piVar1);
      }
      (this->MObjects).ArrayNum = iVar8 + 1;
      pFVar4 = (this->MObjects).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = 0;
      *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = *(undefined8 *)&pFVar9->field_0x0;
      *(undefined8 *)&pFVar9->field_0x0 = 0;
      pFVar9 = pFVar9 + 8;
    }
    RebuildBVH(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
}

// CopyGeometry @ 143b60a40

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectUnion::CopyGeometry(FImplicitObjectUnion *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FImplicitObjectUnion *pFVar7;
  FImplicitObject *in_RDX;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res18;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_38;
  
  uVar3 = (this->MObjects).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
    }
    pFVar8 = (this->MObjects).AllocatorInstance.Data;
    iVar4 = (this->MObjects).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)pFVar8 + 0x38))(*(longlong **)pFVar8,&local_res18);
      iVar5 = local_38.ArrayNum;
      if (local_38.ArrayNum == local_38.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8) = 0;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8) = *puVar6;
      *puVar6 = 0;
      if (local_res18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res18 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(int *)((longlong)local_res18 + 0xc) == 0)) {
          (**(code **)*local_res18)(local_res18,1);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    pFVar7 = ::operator_new(0x70);
    if (pFVar7 == (FImplicitObjectUnion *)0x0) {
      in_RDX->_padding_ = 0;
    }
    else {
      pFVar7 = FImplicitObjectUnion(pFVar7,&local_38);
      in_RDX->_padding_ = (longlong)pFVar7;
      if (pFVar7 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// CopyGeometryWithScale @ 143b60e60

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectUnion::CopyGeometryWithScale
          (FImplicitObjectUnion *this,TVector<double,3> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FImplicitObjectUnion *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_48;
  
  uVar3 = (this->MObjects).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
    }
    pFVar8 = (this->MObjects).AllocatorInstance.Data;
    iVar4 = (this->MObjects).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)pFVar8 + 0x40))(*(longlong **)pFVar8,&local_res20);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8) = 0;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8) = *puVar6;
      *puVar6 = 0;
      if (local_res20 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res20 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
          (**(code **)*local_res20)(local_res20,1);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    pFVar7 = ::operator_new(0x70);
    if (pFVar7 == (FImplicitObjectUnion *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      pFVar7 = FImplicitObjectUnion(pFVar7,&local_48);
      *(FImplicitObjectUnion **)param_1 = pFVar7;
      if (pFVar7 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// CountLeafObjectsInHierarchyImpl @ 143b61280

int __thiscall
Chaos::FImplicitObjectUnion::CountLeafObjectsInHierarchyImpl(FImplicitObjectUnion *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(**(longlong **)pFVar4 + 0x130))();
    iVar5 = iVar5 + iVar3;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// CountObjectsInHierarchyImpl @ 143b612f0

int __thiscall Chaos::FImplicitObjectUnion::CountObjectsInHierarchyImpl(FImplicitObjectUnion *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  iVar5 = 1;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(**(longlong **)pFVar4 + 0x128))();
    iVar5 = iVar5 + iVar3;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// CreateBVH @ 143b61360

void __thiscall Chaos::FImplicitObjectUnion::CreateBVH(FImplicitObjectUnion *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar6;
  TRefCountPtr<Chaos::FImplicitObject> *local_res8;
  FScriptContainerElement *local_28;
  int local_20;
  
  iVar4 = CVars::ChaosUnionBVHMinShapes;
  if ((((this->Flags).Bits & 1) != 0) && (CVars::bChaosUnionBVHEnabled)) {
    pFVar2 = (this->MObjects).AllocatorInstance.Data;
    iVar1 = (this->MObjects).ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28 = pFVar2;
    local_20 = iVar1;
    TVar6 = Chaos::Private::FImplicitBVH::TryMake
                      ((TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)&local_res8,
                       (int)&local_28,iVar4);
    TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>::
    operator=(&this->BVH,
              (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>
               *)TVar6.Ptr);
    if (local_res8 != (TRefCountPtr<Chaos::FImplicitObject> *)0x0) {
      if (local_res8[4].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8[4].Reference);
      }
      if (local_res8[2].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8[2].Reference);
      }
      if (local_res8->Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8->Reference);
      }
      ::operator_delete(local_res8,0x38);
    }
    (this->Flags).Bits = (this->Flags).Bits & 0xfd;
    (this->Flags).Bits = (this->Flags).Bits | -((this->BVH).Ptr != (FImplicitBVH *)0x0) & 2U;
  }
  return;
}

// DeepCopyGeometry @ 143b625e0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectUnion::DeepCopyGeometry(FImplicitObjectUnion *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FImplicitObjectUnion *pFVar7;
  FImplicitObject *in_RDX;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res18;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_38;
  
  uVar3 = (this->MObjects).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
    }
    pFVar8 = (this->MObjects).AllocatorInstance.Data;
    iVar4 = (this->MObjects).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)pFVar8 + 0x48))(*(longlong **)pFVar8,&local_res18);
      iVar5 = local_38.ArrayNum;
      if (local_38.ArrayNum == local_38.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8) = 0;
      *(undefined8 *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8) = *puVar6;
      *puVar6 = 0;
      if (local_res18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res18 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(int *)((longlong)local_res18 + 0xc) == 0)) {
          (**(code **)*local_res18)(local_res18,1);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    pFVar7 = ::operator_new(0x70);
    if (pFVar7 == (FImplicitObjectUnion *)0x0) {
      in_RDX->_padding_ = 0;
    }
    else {
      pFVar7 = FImplicitObjectUnion(pFVar7,&local_38);
      in_RDX->_padding_ = (longlong)pFVar7;
      if (pFVar7 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// DeepCopyGeometryWithScale @ 143b62770

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectUnion::DeepCopyGeometryWithScale
          (FImplicitObjectUnion *this,TVector<double,3> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FImplicitObjectUnion *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_48;
  
  uVar3 = (this->MObjects).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
    }
    pFVar8 = (this->MObjects).AllocatorInstance.Data;
    iVar4 = (this->MObjects).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)pFVar8 + 0x50))(*(longlong **)pFVar8,&local_res20);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8) = 0;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8) = *puVar6;
      *puVar6 = 0;
      if (local_res20 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res20 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
          (**(code **)*local_res20)(local_res20,1);
        }
      }
      pFVar8 = pFVar8 + 8;
    }
    pFVar7 = ::operator_new(0x70);
    if (pFVar7 == (FImplicitObjectUnion *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      pFVar7 = FImplicitObjectUnion(pFVar7,&local_48);
      *(FImplicitObjectUnion **)param_1 = pFVar7;
      if (pFVar7 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// DestroyBVH @ 143b62a30

void __thiscall Chaos::FImplicitObjectUnion::DestroyBVH(FImplicitObjectUnion *this)

{
  FImplicitBVH *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->BVH).Ptr;
  if (pFVar1 != (FImplicitBVH *)0x0) {
    (this->BVH).Ptr = (FImplicitBVH *)0x0;
    pFVar2 = (pFVar1->Nodes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->NodeObjectIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Objects).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
    (this->Flags).Bits = (this->Flags).Bits & 0xfd;
  }
  return;
}

// FindAllIntersectingObjects @ 143b63af0

void __thiscall
Chaos::FImplicitObjectUnion::FindAllIntersectingObjects
          (FImplicitObjectUnion *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TAABB<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImplicitBVH *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  <lambda_1> local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  this_00 = (this->BVH).Ptr;
  if ((this_00 != (FImplicitBVH *)0x0) && (CVars::bChaosUnionBVHEnabled)) {
    local_38 = (float)*(double *)&param_2->MMin;
    local_34 = (float)*(double *)&(param_2->MMin).field_0x8;
    local_30 = (float)*(double *)&(param_2->MMin).field_0x10;
    local_2c = (float)*(double *)&param_2->MMax;
    local_28 = (float)*(double *)&(param_2->MMax).field_0x8;
    local_24 = (float)*(double *)&(param_2->MMax).field_0x10;
    local_48.__this = this;
    local_48.Out = param_1;
    Chaos::Private::FImplicitBVH::
    VisitOverlappingNodesStack<_Chaos::FImplicitObjectUnion::FindAllIntersectingObjects_::__l5::<lambda_1>_>
              (this_00,(TAABB<float,3> *)&local_38,&local_48);
    return;
  }
  pFVar3 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0xf0))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// FindClosestIntersectionImp @ 143b64f90

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FImplicitObjectUnion::FindClosestIntersectionImp
          (FImplicitObjectUnion *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Pair<Chaos::TVector<double,3>,bool> *pPVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar12 [16];
  double local_58;
  double local_50;
  double local_48;
  bool bStack_40;
  undefined7 uStack_3f;
  
  if (((this->MObjects).ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MObjects.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectUnion.h"
                         ,0xf6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pPVar4 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar1)();
    return pPVar4;
  }
  if (((this->MObjects).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pPVar4 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar1)();
    return pPVar4;
  }
  FImplicitObject::FindClosestIntersection
            (*(FImplicitObject **)(this->MObjects).AllocatorInstance.Data,__return_storage_ptr__,
             param_1,param_2,param_3);
  if (__return_storage_ptr__->Second == false) {
    auVar12 = ZEXT816(0);
  }
  else {
    dVar8 = *(double *)&__return_storage_ptr__->First - *(double *)param_1;
    dVar7 = *(double *)&(__return_storage_ptr__->First).field_0x8 - *(double *)&param_1->field_0x8;
    dVar11 = *(double *)&(__return_storage_ptr__->First).field_0x10 -
             *(double *)&param_1->field_0x10;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar8 * dVar8 + dVar7 * dVar7 + dVar11 * dVar11;
    auVar12 = sqrtpd(unaff_XMM6,auVar12);
  }
  uVar5 = 1;
  if (1 < (this->MObjects).ArrayNum) {
    lVar6 = 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->MObjects).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pPVar4 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar1)();
        return pPVar4;
      }
      FImplicitObject::FindClosestIntersection
                (*(FImplicitObject **)((this->MObjects).AllocatorInstance.Data + lVar6),
                 (Pair<Chaos::TVector<double,3>,bool> *)&local_58,param_1,param_2,param_3);
      if (bStack_40 != false) {
        dVar8 = local_50 - *(double *)&param_1->field_0x8;
        dVar7 = local_48 - *(double *)&param_1->field_0x10;
        auVar9._0_8_ = dVar8 * dVar8;
        auVar9._8_8_ = 0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ =
             (local_58 - *(double *)param_1) * (local_58 - *(double *)param_1) + auVar9._0_8_ +
             dVar7 * dVar7;
        auVar10 = sqrtpd(auVar9,auVar10);
        if ((__return_storage_ptr__->Second == false) || (auVar10._0_8_ < auVar12._0_8_)) {
          *(double *)&__return_storage_ptr__->First = local_58;
          *(double *)&(__return_storage_ptr__->First).field_0x8 = local_50;
          *(double *)&(__return_storage_ptr__->First).field_0x10 = local_48;
          *(ulonglong *)&__return_storage_ptr__->Second = CONCAT71(uStack_3f,bStack_40);
          auVar12 = auVar10;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->MObjects).ArrayNum);
  }
  return __return_storage_ptr__;
}

// ForEachObject @ 143b66780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FImplicitObjectUnion::ForEachObject
          (FImplicitObjectUnion *this,
          TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&)>
          *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FImplicitBVH *pFVar15;
  longlong lVar16;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  ulonglong local_78;
  
  uVar9 = _UNK_150689688;
  uVar8 = ___xmm_3ff00000000000003ff0000000000000;
  uVar7 = _UNK_150689518;
  uVar6 = ___xmm_00000000000000003ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar15 = (this->BVH).Ptr;
  if ((pFVar15 == (FImplicitBVH *)0x0) || (!CVars::bChaosUnionBVHEnabled)) {
    pFVar14 = (this->MObjects).AllocatorInstance.Data;
    iVar1 = (this->MObjects).ArrayNum;
    pFVar3 = pFVar14 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_148);
      }
      if (pFVar14 == pFVar3) break;
      if (*(longlong *)pFVar14 != 0) {
        local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        cVar11 = (**(code **)param_1)
                           (*(undefined8 *)&param_1->field_0x8,*(longlong *)pFVar14,local_d8);
        if (cVar11 != '\0') {
          return;
        }
      }
      pFVar14 = pFVar14 + 8;
    }
  }
  else {
    uVar13 = 0;
    if (0 < (pFVar15->Objects).ArrayNum) {
      lVar16 = 0;
      do {
        iVar1 = (pFVar15->Objects).ArrayNum;
        uVar12 = 0;
        if ((int)uVar13 < iVar1) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_158 = (longlong)(int)uVar13;
          local_150 = (longlong)iVar1;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar2 = *(longlong *)((pFVar15->Objects).AllocatorInstance.Data + lVar16 + 0x38);
        if (lVar2 != 0) {
          pFVar15 = (this->BVH).Ptr;
          iVar1 = (pFVar15->Objects).ArrayNum;
          uVar12 = 0;
          if ((int)uVar13 < iVar1) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_158 = (longlong)(int)uVar13;
            local_150 = (longlong)iVar1;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = (pFVar15->Objects).AllocatorInstance.Data;
          dVar5 = (double)(float)((ulonglong)*(undefined8 *)(pFVar3 + lVar16 + 8) >> 0x20);
          local_128._8_4_ = SUB84(dVar5,0);
          local_128._0_8_ = (double)(float)*(undefined8 *)(pFVar3 + lVar16 + 8);
          local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_138._8_4_ = SUB84((double)*(float *)(pFVar3 + lVar16 + 4),0);
          local_138._0_8_ = (double)*(float *)(pFVar3 + lVar16);
          local_138._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar3 + lVar16 + 4) >> 0x20);
          local_108 = (double)*(float *)(pFVar3 + lVar16 + 0x18);
          local_f8 = uVar8;
          uStack_f0 = uVar9;
          local_118._8_4_ = SUB84((double)*(float *)(pFVar3 + lVar16 + 0x14),0);
          local_118._0_8_ = (double)*(float *)(pFVar3 + lVar16 + 0x10);
          local_118._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar3 + lVar16 + 0x14) >> 0x20);
          uStack_100 = 0;
          local_e8 = uVar6;
          uStack_e0 = uVar7;
          cVar11 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar2,local_138);
          if (cVar11 != '\0') {
            return;
          }
        }
        pFVar15 = (this->BVH).Ptr;
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 0x48;
      } while ((int)uVar13 < (pFVar15->Objects).ArrayNum);
    }
  }
  return;
}

// GetTypeHash @ 143b68e60

uint __thiscall Chaos::FImplicitObjectUnion::GetTypeHash(FImplicitObjectUnion *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = (**(code **)(**(longlong **)pFVar5 + 0x110))();
    uVar4 = uVar4 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    uVar4 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xf;
    pFVar5 = pFVar5 + 8;
  }
  return uVar4;
}

// HasValidBVH @ 143b69b20

bool __thiscall Chaos::FImplicitObjectUnion::HasValidBVH(FImplicitObjectUnion *this)

{
  if (((this->BVH).Ptr != (FImplicitBVH *)0x0) && (CVars::bChaosUnionBVHEnabled)) {
    return true;
  }
  return false;
}

// IsOverlappingBoundsImpl @ 143b69bc0

bool __thiscall
Chaos::FImplicitObjectUnion::IsOverlappingBoundsImpl
          (FImplicitObjectUnion *this,TAABB<double,3> *param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FImplicitBVH *this_00;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  this_00 = (this->BVH).Ptr;
  if ((this_00 != (FImplicitBVH *)0x0) && (CVars::bChaosUnionBVHEnabled)) {
    local_48 = (float)*(double *)&param_1->MMin;
    local_44 = (float)*(double *)&(param_1->MMin).field_0x8;
    local_40 = (float)*(double *)&(param_1->MMin).field_0x10;
    local_3c = (float)*(double *)&param_1->MMax;
    local_38 = (float)*(double *)&(param_1->MMax).field_0x8;
    local_34 = (float)*(double *)&(param_1->MMax).field_0x10;
    bVar5 = Chaos::Private::FImplicitBVH::IsOverlappingBoundsStack
                      (this_00,(TAABB<float,3> *)&local_48);
    return bVar5;
  }
  lVar7 = (**(code **)(this->_padding_ + 0x90))(this);
  lVar9 = 0;
  pdVar1 = (double *)(lVar7 + 0x18);
  pdVar8 = pdVar1;
  while( true ) {
    dVar3 = *(double *)((longlong)pdVar8 + ((longlong)param_1 - (longlong)pdVar1));
    if (*pdVar8 <= dVar3 && dVar3 != *pdVar8) {
      return false;
    }
    if (*(double *)((longlong)param_1 + (0x18 - (longlong)pdVar1) + (longlong)pdVar8) < pdVar8[-3])
    break;
    lVar9 = lVar9 + 1;
    pdVar8 = pdVar8 + 1;
    if (2 < lVar9) {
      pFVar10 = (this->MObjects).AllocatorInstance.Data;
      iVar4 = (this->MObjects).ArrayNum;
      pFVar2 = pFVar10 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->MObjects).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar2) break;
        cVar6 = (**(code **)(**(longlong **)pFVar10 + 0x150))(*(longlong **)pFVar10,param_1);
        if (cVar6 != '\0') {
          return true;
        }
        pFVar10 = pFVar10 + 8;
      }
      return false;
    }
  }
  return false;
}

// IsValidGeometry @ 143b6a540

bool __thiscall Chaos::FImplicitObjectUnion::IsValidGeometry(FImplicitObjectUnion *this)

{
  return (this->MObjects).ArrayNum != 0;
}

// LegacySerializeBVH @ 143b6a550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FImplicitObjectUnion::LegacySerializeBVH(FImplicitObjectUnion *this,FChaosArchive *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStackY_3c8 [32];
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_398;
  TGeometryParticlesImp<double,3,0> local_388;
  undefined1 local_100 [40];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  int local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if ((param_1->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,499,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>(&local_388);
  local_100._12_2_ = 0x401;
  local_100._8_4_ = 0;
  local_100._0_8_ =
       &
       ___7__TBoundingVolumeHierarchy_V__TGeometryParticlesImp_N_02_0A__Chaos__V__TArray_HV__TSizedDefaultAllocator__0CA_____N_02_Chaos__6B_
  ;
  local_100._16_8_ = (TGeometryParticlesImp<double,3,0> *)0x0;
  local_100._24_8_ = (FScriptContainerElement *)0x0;
  local_100._32_4_ = 0;
  local_100._36_4_ = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_78 = 0xc;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_50,4000);
  (**(code **)(local_388._padding_ + 8))(&local_388,param_1);
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::Serialize((TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
               *)local_100,(FArchive *)param_1);
  DeleteCriticalSection(&local_50);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_60.Data,(int)local_58);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_60.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_60.Data);
  }
  DestructItems<Chaos::TBVHNode<double,3>,int>((TBVHNode<double,3> *)local_70.Data,(int)local_68);
  if ((TBVHNode<double,3> *)local_70.Data != (TBVHNode<double,3> *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  uVar2 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if ((FScriptContainerElement *)local_100._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._24_8_);
  }
  TGeometryParticlesImp<double,3,0>::~TGeometryParticlesImp<double,3,0>(&local_388);
  local_398.ArrayNum = (this->MObjects).ArrayNum;
  local_398.DataPtr =
       (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data;
  if (local_398.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = Chaos::Private::FImplicitBVH::CountLeafObjects(&local_398);
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumLeafObjects >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,0xab,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = 0x7fffffff;
  if (iVar4 < 0x7fffffff) {
    iVar5 = iVar4;
  }
  (this->Flags).Bits = (this->Flags).Bits | 1;
  this->NumLeafObjects = iVar5;
  RebuildBVH(this);
  return;
}

// Overlap @ 143b6ad20

bool __thiscall
Chaos::FImplicitObjectUnion::Overlap
          (FImplicitObjectUnion *this,TVector<double,3> *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    cVar3 = (**(code **)(**(longlong **)pFVar4 + 0xd8))
                      (*(longlong **)pFVar4,param_1,SUB84(param_2,0));
    if (cVar3 != '\0') {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// PhiWithNormal @ 143b6c190

double __thiscall
Chaos::FImplicitObjectUnion::PhiWithNormal
          (FImplicitObjectUnion *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double local_58;
  double dStack_50;
  double local_48;
  
  iVar8 = (this->MObjects).ArrayNum;
  bVar4 = false;
  uVar7 = 0;
  dVar3 = __real_7fefffffffffffff;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          dVar3 = (double)(*pcVar2)();
          return dVar3;
        }
      }
      if (*(longlong *)((this->MObjects).AllocatorInstance.Data + lVar9) == 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1142876963375939698>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectUnion.h"
                           ,0x72,"Objects[i]");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          dVar3 = (double)(*pcVar2)();
          return dVar3;
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar7 < (this->MObjects).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            dVar3 = (double)(*pcVar2)();
            return dVar3;
          }
        }
        plVar1 = *(longlong **)((this->MObjects).AllocatorInstance.Data + lVar9);
        dVar10 = (double)(**(code **)(*plVar1 + 0x80))(plVar1,param_1,&local_58);
        if (dVar3 <= dVar10) {
          if (dVar10 == dVar3) {
            bVar4 = true;
            *(double *)param_2 = local_58 + *(double *)param_2;
            *(double *)&param_2->field_0x8 = dStack_50 + *(double *)&param_2->field_0x8;
            *(double *)&param_2->field_0x10 = local_48 + *(double *)&param_2->field_0x10;
          }
        }
        else {
          bVar4 = false;
          *(double *)param_2 = local_58;
          *(double *)&param_2->field_0x8 = dStack_50;
          *(double *)&param_2->field_0x10 = local_48;
          dVar3 = dVar10;
        }
      }
      iVar8 = (this->MObjects).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < iVar8);
    if (bVar4) {
      UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
    }
  }
  return dVar3;
}

// Raycast @ 143b72380

bool __thiscall
Chaos::FImplicitObjectUnion::Raycast
          (FImplicitObjectUnion *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  TVector<double,3> *local_res10;
  TVector<double,3> *local_res18;
  int local_a8 [2];
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pFVar4 = (this->MObjects).AllocatorInstance.Data;
  iVar2 = (this->MObjects).ArrayNum;
  bVar5 = false;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  uVar6 = 0;
  uVar7 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    if ((this->MObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    cVar3 = (**(code **)(**(longlong **)pFVar4 + 0xb0))
                      (*(longlong **)pFVar4,local_res10,local_res18,SUB84(param_3,0),param_4,
                       &local_a0,&local_98,&local_80,local_a8);
    if (cVar3 != '\0') {
      if ((bVar5 == false) || (local_a0 < (double)CONCAT44(uVar7,uVar6))) {
        bVar5 = true;
        *param_5 = local_a0;
        *(undefined8 *)param_6 = local_98;
        *(undefined8 *)&param_6->field_0x8 = uStack_90;
        *(undefined8 *)&param_6->field_0x10 = local_88;
        *(undefined8 *)param_7 = local_80;
        *(undefined8 *)&param_7->field_0x8 = uStack_78;
        *(undefined8 *)&param_7->field_0x10 = local_70;
        *param_8 = local_a8[0];
        uVar6 = SUB84(local_a0,0);
        uVar7 = (int)((ulonglong)local_a0 >> 0x20);
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return bVar5;
}

// RebuildBVH @ 143b72500

void __thiscall Chaos::FImplicitObjectUnion::RebuildBVH(FImplicitObjectUnion *this)

{
  int iVar1;
  FImplicitBVH *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar7;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> *pTVar8;
  TRefCountPtr<Chaos::FImplicitObject> *local_res8;
  FScriptContainerElement *local_38;
  int local_30;
  
  pFVar2 = (this->BVH).Ptr;
  if (pFVar2 != (FImplicitBVH *)0x0) {
    (this->BVH).Ptr = (FImplicitBVH *)0x0;
    pFVar3 = (pFVar2->Nodes).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->NodeObjectIndices).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->Objects).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x38);
    (this->Flags).Bits = (this->Flags).Bits & 0xfd;
  }
  iVar5 = CVars::ChaosUnionBVHMinShapes;
  pTVar8 = &this->BVH;
  if ((((this->Flags).Bits & 1) != 0) && (CVars::bChaosUnionBVHEnabled != false)) {
    iVar1 = (this->MObjects).ArrayNum;
    pFVar3 = (this->MObjects).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38 = pFVar3;
    local_30 = iVar1;
    TVar7 = Chaos::Private::FImplicitBVH::TryMake
                      ((TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)&local_res8,
                       (int)&local_38,iVar5);
    if ((FImplicitBVH *)pTVar8 != TVar7.Ptr) {
      pFVar2 = pTVar8->Ptr;
      pTVar8->Ptr = (FImplicitBVH *)((TVar7.Ptr)->Objects).AllocatorInstance.Data;
      ((TVar7.Ptr)->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (pFVar2 != (FImplicitBVH *)0x0) {
        pFVar3 = (pFVar2->Nodes).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->NodeObjectIndices).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->Objects).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar2,0x38);
      }
    }
    if (local_res8 != (TRefCountPtr<Chaos::FImplicitObject> *)0x0) {
      if (local_res8[4].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8[4].Reference);
      }
      if (local_res8[2].Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8[2].Reference);
      }
      if (local_res8->Reference != (FImplicitObject *)0x0) {
        FMemory::Free(local_res8->Reference);
      }
      ::operator_delete(local_res8,0x38);
    }
    (this->Flags).Bits = -((this->BVH).Ptr != (FImplicitBVH *)0x0) & 2U | (this->Flags).Bits & 0xfd;
  }
  return;
}

// RemoveAt @ 143b72a00

void __thiscall Chaos::FImplicitObjectUnion::RemoveAt(FImplicitObjectUnion *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TAABB<double,3> *pTVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res10 [8];
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_78;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> local_68;
  TAABB<double,3> local_58;
  
  lVar10 = (longlong)param_1;
  if (((this->Flags).Bits & 4) != 0) {
    local_res10[0] = 0;
    `Chaos::FImplicitObjectUnion::CheckNotLocked'::__l2::<lambda_1>::operator()(local_res10);
  }
  if (param_1 < (this->MObjects).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = this->NumLeafObjects;
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         (TRefCountPtr<Chaos::FImplicitObject> *)
         ((this->MObjects).AllocatorInstance.Data + lVar10 * 8);
    iVar8 = Chaos::Private::FImplicitBVH::CountLeafObjects(&local_78);
    iVar11 = iVar11 - iVar8;
    if ((iVar11 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumLeafObjects >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                           ,0xab,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = 0x7fffffff;
    if (iVar11 < 0x7fffffff) {
      iVar8 = iVar11;
    }
    this->NumLeafObjects = iVar8;
    uVar5 = 0;
    if (param_1 < (this->MObjects).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->MObjects).AllocatorInstance.Data;
    puVar3 = *(undefined8 **)(pFVar2 + lVar10 * 8);
    pFVar2 = pFVar2 + lVar10 * 8;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    iVar11 = (this->MObjects).ArrayNum + ~param_1;
    if (iVar11 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar11 << 3);
    }
    piVar1 = &(this->MObjects).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->MObjects).AllocatorInstance,(this->MObjects).ArrayNum,
               &(this->MObjects).ArrayMax);
  }
  local_68.DataPtr = (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data
  ;
  iVar11 = (this->MObjects).ArrayNum;
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68.ArrayNum = iVar11;
  pTVar9 = CalculateObjectsBounds(&local_58,&local_68);
  uVar6 = *(undefined8 *)&(pTVar9->MMin).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar9->MMin;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar6;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(pTVar9->MMin).field_0x10;
  uVar6 = *(undefined8 *)&(pTVar9->MMax).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar9->MMax;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar6;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(pTVar9->MMax).field_0x10;
  RebuildBVH(this);
  return;
}

// RemoveAtSortedIndices @ 143b72ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FImplicitObjectUnion::RemoveAtSortedIndices
          (FImplicitObjectUnion *this,TArrayView<int_const_,int> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  TAABB<double,3> *pTVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res8 [8];
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_78;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> local_68;
  TAABB<double,3> local_58;
  
  if (((this->Flags).Bits & 4) != 0) {
    local_res8[0] = 0;
    `Chaos::FImplicitObjectUnion::CheckNotLocked'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (param_1->ArrayNum != 0) {
    iVar9 = 1;
    piVar6 = TArrayView<int_const_,int>::operator[](param_1,0);
    iVar5 = param_1->ArrayNum;
    uVar8 = 1;
    iVar11 = *piVar6;
    if (1 < iVar5) {
      lVar10 = 4;
      do {
        uVar4 = 0;
        if ((int)uVar8 < iVar5) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = *(int *)(lVar10 + (longlong)param_1->DataPtr);
        if (iVar5 != iVar11) {
          MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
                    (&this->MObjects,iVar11 + 1,iVar5,iVar9);
          iVar9 = iVar9 + 1;
          iVar11 = iVar5;
        }
        iVar5 = param_1->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 4;
      } while ((int)uVar8 < iVar5);
    }
    MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
              (&this->MObjects,iVar11 + 1,(this->MObjects).ArrayNum,iVar9);
    TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->MObjects,(this->MObjects).ArrayNum - iVar9,No);
    local_78.ArrayNum = (this->MObjects).ArrayNum;
    local_78.DataPtr =
         (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data;
    if ((local_78.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = Chaos::Private::FImplicitBVH::CountLeafObjects(&local_78);
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumLeafObjects >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                           ,0xab,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar11 = 0x7fffffff;
    if (iVar5 < 0x7fffffff) {
      iVar11 = iVar5;
    }
    this->NumLeafObjects = iVar11;
    local_68.DataPtr =
         (TRefCountPtr<Chaos::FImplicitObject> *)(this->MObjects).AllocatorInstance.Data;
    iVar5 = (this->MObjects).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_68.ArrayNum = iVar5;
    pTVar7 = CalculateObjectsBounds(&local_58,&local_68);
    uVar2 = *(undefined8 *)&(pTVar7->MMin).field_0x8;
    *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar7->MMin;
    *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar2;
    *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
         *(undefined8 *)&(pTVar7->MMin).field_0x10;
    uVar2 = *(undefined8 *)&(pTVar7->MMax).field_0x8;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar7->MMax;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar2;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
         *(undefined8 *)&(pTVar7->MMax).field_0x10;
    RebuildBVH(this);
  }
  return;
}

// Serialize @ 143b76f90

void __thiscall
Chaos::FImplicitObjectUnion::Serialize(FImplicitObjectUnion *this,FChaosArchive *param_1)

{
  TAABB<double,3> *pTVar1;
  ulonglong *puVar2;
  FFLags *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar7;
  int iVar8;
  FImplicitBVH *pFVar9;
  FImplicitBVH *pFVar10;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> local_res8;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  (**(code **)(this->_padding_ + 0x118))(this,&local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  operator<<<Chaos::FImplicitObject_TSizedDefaultAllocator<32>_>(param_1,&this->MObjects);
  pTVar1 = &this->MLocalBoundingBox;
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,pTVar1);
  pFVar9 = (this->BVH).Ptr;
  local_res8.Ptr._0_1_ = pFVar9 != (FImplicitBVH *)0x0;
  iVar8 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  pFVar10 = (FImplicitBVH *)0x0;
  if (iVar8 < 0x1d) {
    LegacySerializeBVH(this,param_1);
    puVar2 = (ulonglong *)param_1->_padding_;
    if (puVar2[1] < *puVar2 + 4) {
      uVar6 = (ulonglong)local_res8.Ptr >> 0x20;
      local_res8.Ptr = local_res8.Ptr & 0xffffffff00000000;
      if ((param_1->_padding_ & 1) == 0) {
        local_res8.Ptr = (FImplicitBVH *)CONCAT44((int)uVar6,(uint)(pFVar9 != (FImplicitBVH *)0x0));
      }
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_res8,4);
      if (1 < (uint)local_res8.Ptr) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  else {
    iVar8 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar8 < 0x5b) {
      ::operator<<((FArchive *)param_1,(bool *)&local_res8);
      if ((char)local_res8.Ptr != '\0') {
        LegacySerializeBVH(this,param_1);
      }
    }
    else {
      pFVar3 = *(FFLags **)param_1->_padding_;
      if ((FFLags *)((undefined8 *)param_1->_padding_)[1] < pFVar3 + 1) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->Flags,1);
      }
      else {
        this->Flags = *pFVar3;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
      }
      iVar8 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
      if (iVar8 < 0xc) {
        plVar4 = (longlong *)param_1->_padding_;
        local_res8.Ptr._0_2_ = (short)this->NumLeafObjects;
        if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_res8,2);
            this->NumLeafObjects = (uint)(ushort)local_res8.Ptr;
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ushort *)&local_res8);
            this->NumLeafObjects = (uint)(ushort)local_res8.Ptr;
          }
        }
        else {
          local_res8.Ptr._0_2_ = *(ushort *)*plVar4;
          *plVar4 = *plVar4 + 2;
          this->NumLeafObjects = (uint)(ushort)local_res8.Ptr;
        }
      }
      else {
        ::operator<<((FArchive *)param_1,&this->NumLeafObjects);
      }
      if (((this->Flags).Bits & 2) != 0) {
        if ((param_1->_padding_ & 1) != 0) {
          pFVar9 = ::operator_new(0x38);
          if (pFVar9 != (FImplicitBVH *)0x0) {
            (pFVar9->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar9->Objects).ArrayNum = 0;
            (pFVar9->Objects).ArrayMax = 0;
            (pFVar9->NodeObjectIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar9->NodeObjectIndices).ArrayNum = 0;
            (pFVar9->NodeObjectIndices).ArrayMax = 0;
            (pFVar9->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar9->Nodes).ArrayNum = 0;
            (pFVar9->Nodes).ArrayMax = 0;
            pFVar9->TreeDepth = 0;
            pFVar10 = pFVar9;
          }
          local_res8.Ptr = pFVar10;
          TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>::
          operator=(&this->BVH,&local_res8);
          TVar7.Ptr = local_res8.Ptr;
          if (local_res8.Ptr != (FImplicitBVH *)0x0) {
            pFVar5 = ((local_res8.Ptr)->Nodes).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            pFVar5 = ((TVar7.Ptr)->NodeObjectIndices).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            pFVar5 = ((TVar7.Ptr)->Objects).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            ::operator_delete(TVar7.Ptr,0x38);
          }
        }
        Chaos::Private::FImplicitBVH::Serialize((this->BVH).Ptr,param_1);
        if ((param_1->_padding_ & 1) != 0) {
          RebuildBVH(this);
        }
      }
    }
  }
  if (((param_1->_padding_ & 1) != 0) && (__real_7fefffffffffffff == *(double *)&pTVar1->MMin)) {
    *(undefined8 *)&pTVar1->MMin = 0;
    *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0;
    *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0;
    *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0;
  }
  return;
}

// SetNumLeafObjects @ 143b77f10

void __thiscall
Chaos::FImplicitObjectUnion::SetNumLeafObjects(FImplicitObjectUnion *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumLeafObjects >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                       ,0xab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0x7fffffff;
  if (param_1 < 0x7fffffff) {
    iVar3 = param_1;
  }
  this->NumLeafObjects = iVar3;
  return;
}

// VisitLeafObjectsImpl @ 143b7fe30

void __thiscall
Chaos::FImplicitObjectUnion::VisitLeafObjectsImpl
          (FImplicitObjectUnion *this,TRigidTransform<double,3> *param_1,int param_2,int *param_3,
          int *param_4,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  *param_3 = *param_3 + 1;
  uVar5 = 0;
  if (0 < (this->MObjects).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = uVar5;
      if (param_2 != -1) {
        uVar6 = param_2;
      }
      uVar4 = 0;
      if ((int)uVar5 < (this->MObjects).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->MObjects).AllocatorInstance.Data + lVar7);
      (**(code **)(*plVar1 + 0x140))(plVar1,param_1,uVar6,param_3,param_4,param_5);
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->MObjects).ArrayNum);
  }
  return;
}

// VisitObjectsImpl @ 143b7ff20

bool __thiscall
Chaos::FImplicitObjectUnion::VisitObjectsImpl
          (FImplicitObjectUnion *this,TRigidTransform<double,3> *param_1,int param_2,int *param_3,
          int *param_4,
          TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int local_res8 [2];
  TRigidTransform<double,3> *local_res10;
  undefined4 local_res18 [2];
  int local_res20 [2];
  FImplicitObjectUnion *local_58 [3];
  
  local_res8[0] = *param_3;
  local_res18[0] = 0xffffffff;
  local_res10 = param_1;
  local_res20[0] = param_2;
  local_58[0] = this;
  cVar3 = (**(code **)param_5)
                    (*(undefined8 *)&param_5->field_0x8,local_58,param_1,local_res20,local_res8,
                     local_res18);
  *param_3 = *param_3 + 1;
  uVar7 = 0;
  if (0 < (this->MObjects).ArrayNum) {
    lVar9 = 0;
    do {
      if (cVar3 == '\0') {
        return false;
      }
      uVar8 = uVar7;
      if (param_2 != -1) {
        uVar8 = param_2;
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->MObjects).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      plVar1 = *(longlong **)((this->MObjects).AllocatorInstance.Data + lVar9);
      cVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,local_res10,uVar8,param_3,param_4,param_5);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->MObjects).ArrayNum);
  }
  return (bool)cVar3;
}

// VisitOverlappingLeafObjectsImpl @ 143b80060

void __thiscall
Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl
          (FImplicitObjectUnion *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          int param_3,int *param_4,int *param_5,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_6)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FImplicitBVH *local_78;
  FImplicitObjectUnion **local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  FImplicitObjectUnion *local_50;
  TRigidTransform<double,3> *local_48;
  int *local_40;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_38;
  
  *param_4 = *param_4 + 1;
  local_78 = (this->BVH).Ptr;
  if ((local_78 != (FImplicitBVH *)0x0) && (CVars::bChaosUnionBVHEnabled != false)) {
    local_68 = (float)*(double *)&param_1->MMin;
    local_38 = param_6;
    local_70 = &local_50;
    local_40 = param_4;
    local_64 = (float)*(double *)&(param_1->MMin).field_0x8;
    local_60 = (float)*(double *)&(param_1->MMin).field_0x10;
    local_5c = (float)*(double *)&param_1->MMax;
    local_58 = (float)*(double *)&(param_1->MMax).field_0x8;
    local_54 = (float)*(double *)&(param_1->MMax).field_0x10;
    local_50 = this;
    local_48 = param_2;
    Chaos::Private::FImplicitBVH::
    VisitOverlappingNodesStack<_Chaos::Private::FImplicitBVH::VisitAllIntersections<_Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
              (local_78,(TAABB<float,3> *)&local_68,(<lambda_1> *)&local_78);
    return;
  }
  uVar6 = 0;
  if (0 < (this->MObjects).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = uVar6;
      if (param_3 != -1) {
        uVar3 = param_3;
      }
      uVar5 = 0;
      if ((int)uVar6 < (this->MObjects).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->MObjects).AllocatorInstance.Data + lVar7);
      (**(code **)(*plVar1 + 0x138))(plVar1,param_1,param_2,uVar3,param_4,param_5,param_6);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->MObjects).ArrayNum);
  }
  return;
}

// SetLockedRecursive @ 143c16ee0

void __thiscall
Chaos::FImplicitObjectUnion::SetLockedRecursive(FImplicitObjectUnion *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1 != (bool)((this->Flags).Bits >> 2 & 1)) {
    pFVar3 = (this->MObjects).AllocatorInstance.Data;
    iVar2 = (this->MObjects).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->MObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      if ((char)(*(FImplicitObjectUnion **)pFVar3)->_padding_ == '\x05') {
        SetLockedRecursive(*(FImplicitObjectUnion **)pFVar3,param_1);
      }
      pFVar3 = pFVar3 + 8;
    }
    (this->Flags).Bits = (this->Flags).Bits & 0xfb;
    (this->Flags).Bits = (this->Flags).Bits | param_1 << 2;
  }
  return;
}

// SetAllowBVH @ 14412bd50

void __thiscall Chaos::FImplicitObjectUnion::SetAllowBVH(FImplicitObjectUnion *this,bool param_1)

{
  if (param_1 != (bool)((this->Flags).Bits & 1)) {
    CheckNotLocked(this);
    (this->Flags).Bits = (this->Flags).Bits & 0xfe | param_1;
    RebuildBVH(this);
  }
  return;
}

// operator() @ 1504a5f60

bool __thiscall
`Chaos::FImplicitObjectUnion::CheckNotLocked'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7376392192400555924>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7376392192400555924>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

