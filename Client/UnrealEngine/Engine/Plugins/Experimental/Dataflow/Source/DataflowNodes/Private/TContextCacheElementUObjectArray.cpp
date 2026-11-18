// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 54

// TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> @ 14dacc2c0

TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *param_1)

{
  TArray<TObjectPtr<UPhysicsAsset_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UPhysicsAsset_const_>,TObjectPtr<UPhysicsAsset_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UPhysicsAsset_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> @ 14dacc3b0

TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *param_1)

{
  TArray<TObjectPtr<USkeletalMesh_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<USkeletalMesh_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<USkeletalMesh_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> @ 14dacc4a0

TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *param_1)

{
  TArray<TObjectPtr<USkeleton_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<USkeleton_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> @ 14dacc590

TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *param_1)

{
  TArray<TObjectPtr<UStaticMesh_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UStaticMesh_const_>,TObjectPtr<UStaticMesh_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UStaticMesh_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> @ 14dacc680

TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::
TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *param_1)

{
  TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<USkeletalMesh> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> @ 14dacc770

TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::
TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *param_1)

{
  TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<USkeleton> *)pFVar5,iVar3);
  }
  return this;
}

// AddReferencedObjects @ 14dacf6a0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf6e0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf720

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf760

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf7a0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf7e0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// Clone @ 14dad03a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0400

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0460

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad04c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0520

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0580

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad26c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad26e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2700

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2720

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2740

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2760

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2aa0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::_vftable__for__FGCObject__
    ;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2c30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::_vftable__for__FGCObject__
    ;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2dc0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2f50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad30e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad3270

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<USkeleton>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<USkeleton>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14dad5640

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
GetNumArrayElements(TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14dad5650

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
GetNumArrayElements(TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14dad5660

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14dad5670

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14dad5680

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14dad5690

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetReferencerName @ 14dad58b0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad58e0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5910

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5940

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5970

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad59a0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetUntypedData @ 14dad6b10

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14dad6b20

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14dad6b30

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14dad6b40

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14dad6b50

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14dad6b60

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// IsArray @ 14dad6da0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14dad6db0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14dad6dc0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14dad6dd0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14dad6de0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14dad6df0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

