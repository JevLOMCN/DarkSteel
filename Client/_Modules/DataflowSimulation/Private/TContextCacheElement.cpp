// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 27

// TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&> @ 1462f1880

TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&> * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
           *this,TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
                 *param_1)

{
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&> @ 1462f1940

TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> @ 1462f1a00

TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// Clone @ 1462f4590

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::Clone
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&> *)0x0
     ) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462f45f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::Clone
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x40);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_AEBUFDataflowSimulationProperty___Dataflow_UE__6B_;
    *(FDataflowSimulationProxy **)((longlong)IVar5 + 0x38) = (this->Data).SimulationProxy;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462f4680

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
       *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1462f46e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> *this
       ,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462f4980

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462f49a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::CreateArrayFromElement
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  FDataflowSimulationProxy *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  pFVar1 = (this->Data).SimulationProxy;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(FDataflowSimulationProxy **)local_18.Data = pFVar1;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar2;
    *(undefined ***)IVar5 =
         &
         ___7__TContextCacheElement_V__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar5 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar5 + 0x40) = local_10;
    *(int *)((longlong)IVar5 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar6 = IVar5;
  }
  *param_1 = IVar6;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462f4ab0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462f4ad0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462f4f10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFDataflowSimulationProperty___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462f5030

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::CreateFromArrayElement
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462f5050

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFDataflowSimulationProperty___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462f5170

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFDataflowSimulationProperty___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 1462f67a0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::
GetNumArrayElements(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 1462f67b0

int __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::GetNumArrayElements
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 1462f67c0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 1462f67d0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetUntypedData @ 1462f7bf0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::
GetUntypedData(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 1462f7c00

void * __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::GetUntypedData
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 1462f7c10

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 1462f7c20

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// IsArray @ 1462f8810

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>::IsArray
          (TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1462f8820

bool __thiscall
UE::Dataflow::TContextCacheElement<FDataflowSimulationProperty_const_&>::IsArray
          (TContextCacheElement<FDataflowSimulationProperty_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1462f8830

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>::
IsArray(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
        *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1462f8840

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

