// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 27

// TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> @ 1462ccc70

TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::
TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,
          TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *param_1)

{
  longlong lVar1;
  UTexture2D *pUVar2;
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
       &TContextCacheElementUObject<TObjectPtr<UTexture2D>&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<UTexture2D>&___ptr64>::_vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> @ 1462ccd20

TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::
TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *param_1)

{
  longlong lVar1;
  UTexture2D *pUVar2;
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
       &TContextCacheElementUObject<TObjectPtr<UTexture2D>_const&___ptr64>::
        _vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ =
       (longlong)
       &TContextCacheElementUObject<TObjectPtr<UTexture2D>_const&___ptr64>::
        _vftable__for__FGCObject__;
  pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
  (this->ObjectPtr).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// TContextCacheElementUObject<TObjectPtr<UTexture2D>_> @ 1462ccdd0

TContextCacheElementUObject<TObjectPtr<UTexture2D>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::
TContextCacheElementUObject<TObjectPtr<UTexture2D>_>
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,
          TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *param_1)

{
  longlong lVar1;
  UTexture2D *pUVar2;
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
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// AddReferencedObjects @ 1462d2240

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462d2253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 1462d2260

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462d2273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 1462d2280

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001462d2293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// Clone @ 1462d55b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462d5610

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::Clone
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462d5670

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElementUObject<TObjectPtr<UTexture2D>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462d58a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UTexture2D>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UTexture2D>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
            (local_18.Data,(TObjectPtr<UTexture2D> *)&local_res8.ObjectPtr,1);
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
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::_vftable__for__FGCObject__;
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

// CreateArrayFromElement @ 1462d5a10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UTexture2D>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UTexture2D>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
            (local_18.Data,(TObjectPtr<UTexture2D> *)&local_res8.ObjectPtr,1);
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
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::_vftable__for__FGCObject__;
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

// CreateArrayFromElement @ 1462d5b80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UTexture2D>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UTexture2D>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
            (local_18.Data,(TObjectPtr<UTexture2D> *)&local_res8.ObjectPtr,1);
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
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::_vftable__for__FGCObject__;
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

// CreateFromArrayElement @ 1462d6a20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462d6a40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462d6a60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 1462dd630

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 1462dd640

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 1462dd650

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetReferencerName @ 1462deb60

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 1462deb90

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetReferencerName @ 1462debc0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetUntypedData @ 1462df100

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 1462df110

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// GetUntypedData @ 1462df120

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// IsArray @ 1462dfbc0

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1462dfbd0

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1462dfbe0

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UTexture2D>_> *this,IContextCacheStore *param_1)

{
  return false;
}

