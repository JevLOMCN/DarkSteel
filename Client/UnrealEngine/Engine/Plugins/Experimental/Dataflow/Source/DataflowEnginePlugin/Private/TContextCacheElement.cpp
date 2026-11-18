// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 19

// TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> @ 14daaf670

TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FManagedArrayCollection *pFVar5;
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
       ___7__TContextCacheElement_V__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FManagedArrayCollection *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// Clone @ 14dab1740

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::Clone
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0xe8);
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
         &___7__TContextCacheElement_AEBUFManagedArrayCollection___Dataflow_UE__6B_;
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dab17e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::Clone
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0xe8);
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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_UFManagedArrayCollection___Dataflow_UE__6B_;
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14dab1880

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dab19c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::CreateArrayFromElement
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  FManagedArrayCollection local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FManagedArrayCollection::FManagedArrayCollection(&local_c8,&this->Data);
  local_d0 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb0,8,1,0,&local_d8,1,&iStack_cc);
  ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>(local_d8.Data,&local_c8,1);
  FManagedArrayCollection::~FManagedArrayCollection(&local_c8);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = local_d0;
    *(int *)((longlong)IVar4 + 0x44) = iStack_cc;
    local_d0 = 0;
    iStack_cc = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  DestructItems<FManagedArrayCollection,int>((FManagedArrayCollection *)local_d8.Data,local_d0);
  if ((FManagedArrayCollection *)local_d8.Data != (FManagedArrayCollection *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dab1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::CreateArrayFromElement
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  FManagedArrayCollection local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FManagedArrayCollection::FManagedArrayCollection(&local_c8,&this->Data);
  local_d0 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb0,8,1,0,&local_d8,1,&iStack_cc);
  ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>(local_d8.Data,&local_c8,1);
  FManagedArrayCollection::~FManagedArrayCollection(&local_c8);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = local_d0;
    *(int *)((longlong)IVar4 + 0x44) = iStack_cc;
    local_d0 = 0;
    iStack_cc = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  DestructItems<FManagedArrayCollection,int>((FManagedArrayCollection *)local_d8.Data,local_d0);
  if ((FManagedArrayCollection *)local_d8.Data != (FManagedArrayCollection *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14dab1c80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dab1ca0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::CreateFromArrayElement
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dab1cc0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::CreateFromArrayElement
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14dab1ce0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

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
  IVar9 = (IContextCacheStore)::operator_new(0xe8);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFManagedArrayCollection___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)IVar9 + 0x38),
               (FManagedArrayCollection *)(pFVar1 + (longlong)(int)uVar10 * 0xb0));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14dab5110

int __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::GetNumArrayElements
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dab5120

int __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::GetNumArrayElements
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14dab5130

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetUntypedData @ 14dab54a0

void * __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::GetUntypedData
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dab54b0

void * __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::GetUntypedData
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14dab54c0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// IsArray @ 14dab5680

bool __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection_const_&>::IsArray
          (TContextCacheElement<FManagedArrayCollection_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dab5690

bool __thiscall
UE::Dataflow::TContextCacheElement<FManagedArrayCollection>::IsArray
          (TContextCacheElement<FManagedArrayCollection> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14dab56a0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

