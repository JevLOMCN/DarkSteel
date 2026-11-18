// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 13

// TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> @ 1462ccbc0

TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUObject____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar5,iVar3);
  }
  return this;
}

// Clone @ 1462d54a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::Clone
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x40);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar4;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUObject_____Dataflow_UE__6B_;
    pUVar3 = (this->Data).field0_0x0.DebugPtr;
    *(UObject **)((longlong)IVar6 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    *param_1 = IVar6;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462d5550

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462d5750

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::CreateArrayFromElement
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1,
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
  
  local_res8 = (TObjectPtr<UObject>_u_0)(this->Data).field0_0x0.DebugPtr;
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
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUObject____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
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

// CreateArrayFromElement @ 1462d5880

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462d68d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::CreateFromArrayElement
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462d68f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUObject_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 1462dd610

int __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::GetNumArrayElements
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 1462dd620

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetUntypedData @ 1462df0e0

void * __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::GetUntypedData
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 1462df0f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// IsArray @ 1462dfba0

bool __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UObject>_const_&>::IsArray
          (TContextCacheElement<TObjectPtr<UObject>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1462dfbb0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

