// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 9

// TContextCacheElementUObject<TObjectPtr<UObject>_> @ 144429b60

TContextCacheElementUObject<TObjectPtr<UObject>_> * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
TContextCacheElementUObject<TObjectPtr<UObject>_>
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,
          TContextCacheElementUObject<TObjectPtr<UObject>_> *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
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
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  return this;
}

// AddReferencedObjects @ 144437160

void __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::AddReferencedObjects
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144437173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// Clone @ 14443b920

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::Clone
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1)

{
  TContextCacheElementUObject<TObjectPtr<UObject>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (TContextCacheElementUObject<TObjectPtr<UObject>_> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElementUObject<TObjectPtr<UObject>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440d70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::CreateArrayFromElement
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UObject>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UObject>_u_0)(this->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
            (local_18.Data,(TObjectPtr<UObject> *)&local_res8.ObjectPtr,1);
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
         &TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar4 + 0x38) =
         &TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::_vftable__for__FGCObject__;
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

// CreateFromArrayElement @ 144443c90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::CreateFromArrayElement
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c6a0

int __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::GetNumArrayElements
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetReferencerName @ 14444df60

FString * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::GetReferencerName
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObject");
  return __return_storage_ptr__;
}

// GetUntypedData @ 14444eb60

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::GetUntypedData
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return (this->ObjectPtr).field0_0x0.DebugPtr;
}

// IsArray @ 144451310

bool __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::IsArray
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,IContextCacheStore *param_1)

{
  return false;
}

