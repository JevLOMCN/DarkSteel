// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 9

// TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> @ 1462cce80

TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::
TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *param_1)

{
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *pTVar1;
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
    ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UTexture2D> *)pFVar5,iVar3);
  }
  return this;
}

// AddReferencedObjects @ 1462d22a0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// Clone @ 1462d56d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1462d5cf0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1462d6a80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
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
         &TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UTexture2D>_>::_vftable__for__FGCObject__;
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

// GetNumArrayElements @ 1462dd660

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetReferencerName @ 1462debf0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetUntypedData @ 1462df130

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// IsArray @ 1462dfbf0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UTexture2D>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

