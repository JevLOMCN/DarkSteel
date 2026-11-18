// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 99

// TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> @ 14dacbb30

TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *param_1)

{
  longlong lVar1;
  USkeletalMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> @ 14dacbbe0

TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::
TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *param_1)

{
  longlong lVar1;
  USkeleton *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> @ 14dacbc90

TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::
TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *param_1)

{
  longlong lVar1;
  UStaticMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> @ 14dacbd40

TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::
TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *param_1)

{
  longlong lVar1;
  USkeletalMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> @ 14dacbdf0

TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::
TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *param_1)

{
  longlong lVar1;
  USkeleton *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeleton>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<USkeleton>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> @ 14dacbea0

TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::
TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *param_1)

{
  longlong lVar1;
  UPhysicsAsset *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> @ 14dacbf50

TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::
TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *param_1)

{
  longlong lVar1;
  USkeletalMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> @ 14dacc000

TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *param_1)

{
  longlong lVar1;
  USkeleton *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> @ 14dacc0b0

TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::
TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *param_1)

{
  longlong lVar1;
  UStaticMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> @ 14dacc160

TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::
TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,
          TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *param_1)

{
  longlong lVar1;
  USkeletalMesh *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<USkeleton>_> @ 14dacc210

TContextCacheElementUObject<TObjectPtr<USkeleton>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::
TContextCacheElementUObject<TObjectPtr<USkeleton>_>
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,
          TContextCacheElementUObject<TObjectPtr<USkeleton>_> *param_1)

{
  longlong lVar1;
  USkeleton *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// AddReferencedObjects @ 14dacf540

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf560

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::
AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf580

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::
AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf5a0

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf5c0

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf5e0

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf600

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf620

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf640

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf660

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14dacf680

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dacf693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// Clone @ 14dacff80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dacffe0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0040

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad00a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0100

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0160

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad01c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0220

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0280

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad02e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          )

{
  TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dad0340

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElementUObject<TObjectPtr<USkeleton>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad16f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeletalMesh_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeletalMesh_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<USkeletalMesh_const_>,int>
            (local_18.Data,(TObjectPtr<USkeletalMesh_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1860

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::
CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeleton_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeleton_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>,int>
            (local_18.Data,(TObjectPtr<USkeleton_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad19d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::
CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UStaticMesh_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UStaticMesh_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UStaticMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UStaticMesh_const_>,TObjectPtr<UStaticMesh_const_>,int>
            (local_18.Data,(TObjectPtr<UStaticMesh_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1b40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeletalMesh>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeletalMesh>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
            (local_18.Data,(TObjectPtr<USkeletalMesh> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::_vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1cb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeleton>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeleton>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
            (local_18.Data,(TObjectPtr<USkeleton> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::_vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1e20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UPhysicsAsset_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UPhysicsAsset_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UPhysicsAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UPhysicsAsset_const_>,TObjectPtr<UPhysicsAsset_const_>,int>
            (local_18.Data,(TObjectPtr<UPhysicsAsset_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UPhysicsAsset_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad1f90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeletalMesh_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeletalMesh_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<USkeletalMesh_const_>,int>
            (local_18.Data,(TObjectPtr<USkeletalMesh_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2100

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeleton_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeleton_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>,int>
            (local_18.Data,(TObjectPtr<USkeleton_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2270

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UStaticMesh_const_>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UStaticMesh_const_>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UStaticMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UStaticMesh_const_>,TObjectPtr<UStaticMesh_const_>,int>
            (local_18.Data,(TObjectPtr<UStaticMesh_const_> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh_const_>_>::
          _vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad23e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeletalMesh>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeletalMesh>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
            (local_18.Data,(TObjectPtr<USkeletalMesh> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeletalMesh>_>::_vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dad2550

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<USkeleton>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<USkeleton>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
            (local_18.Data,(TObjectPtr<USkeleton> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x58);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined ***)IVar4 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)((longlong)IVar4 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar4 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar4 + 0x38));
    *(undefined ***)IVar4 =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<USkeleton>_>::_vftable__for__FGCObject__;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x48) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x50) = local_10;
    *(int *)((longlong)IVar4 + 0x54) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2940

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2960

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::
CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2980

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::
CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad29a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad29c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad29e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2a00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2a20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2a40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2a60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dad2a80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14dad5590

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
GetNumArrayElements(TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55a0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55b0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::
GetNumArrayElements(TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55c0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55d0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55e0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad55f0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5600

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5610

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dad5620

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14dad5630

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetReferencerName @ 14dad56a0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::
GetReferencerName(TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
                 FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad56d0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5700

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5730

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5760

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5790

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad57c0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad57f0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5820

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5850

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14dad5880

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetUntypedData @ 14dad6a60

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6a70

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6a80

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6a90

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6aa0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6ab0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6ac0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6ad0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6ae0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6af0

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 14dad6b00

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// IsArray @ 14dad6cf0

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d00

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d10

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d20

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d30

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d40

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UPhysicsAsset_const_>_> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d50

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d60

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d70

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dad6d80

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 14dad6d90

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<USkeleton>_> *this,IContextCacheStore *param_1)

{
  return false;
}

