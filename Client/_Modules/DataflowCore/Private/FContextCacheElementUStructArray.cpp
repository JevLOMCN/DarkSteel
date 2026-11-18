// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// FContextCacheElementUStructArray @ 144429e50

FContextCacheElementUStructArray * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::FContextCacheElementUStructArray
          (FContextCacheElementUStructArray *this,FContextCacheElementUStructArray *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  FContextCacheElementUStructArray *pFVar7;
  UScriptStruct *pUVar8;
  int iVar9;
  void *pvVar10;
  
  pUVar8 = (param_1->InstancedStructArray).ScriptStruct;
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  if (pUVar8 == (UScriptStruct *)0x0) {
    pvVar10 = (void *)0x0;
    pUVar8 = (UScriptStruct *)0x0;
    iVar9 = 0;
  }
  else {
    iVar9 = (int)(param_1->InstancedStructArray)._padding_;
    pvVar10 = (void *)(param_1->InstancedStructArray)._padding_;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                         ,0x1b8,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FContextCacheElementUStructArray *)(*pcVar2)();
        return pFVar7;
      }
    }
    if ((pvVar10 == (void *)0x0) && (iVar9 != 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData != nullptr || InCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                         ,0x1b9,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FContextCacheElementUStructArray *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(undefined4 *)&this->_padding_ = 6;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->InstancedStructArray)._padding_ = 0;
  (this->InstancedStructArray)._padding_ = 0;
  (this->InstancedStructArray).ScriptStruct = pUVar8;
  FInstancedStructArray::InitFromRawData(&this->InstancedStructArray,pvVar10,iVar9);
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  return this;
}

// ~FContextCacheElementUStructArray @ 1444336b0

void __thiscall
UE::Dataflow::FContextCacheElementUStructArray::~FContextCacheElementUStructArray
          (FContextCacheElementUStructArray *this)

{
  FInstancedStructArray::~FInstancedStructArray(&this->InstancedStructArray);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  return;
}

// AddReferencedObjects @ 144437250

void __thiscall
UE::Dataflow::FContextCacheElementUStructArray::AddReferencedObjects
          (FContextCacheElementUStructArray *this,FReferenceCollector *param_1)

{
  UStruct *pUVar1;
  uint uVar2;
  int iVar3;
  FStructOnScope local_38;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < (int)this->_padding_)); iVar3 = iVar3 + 1) {
    pUVar1 = (UStruct *)this->_padding_;
    if (pUVar1 == (UStruct *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = pUVar1->PropertiesSize + -1 + (int)pUVar1->MinAlignment & -(int)pUVar1->MinAlignment;
    }
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    FStructOnScope::FStructOnScope
              (&local_38,pUVar1,(uchar *)((longlong)(int)(uVar2 * iVar3) + this->_padding_));
    FStructOnScope::AddReferencedObjects(&local_38,param_1);
    FStructOnScope::~FStructOnScope(&local_38);
  }
  return;
}

// Clone @ 14443bba0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStructArray::Clone
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1)

{
  FContextCacheElementUStructArray *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x60);
  if (this_00 != (FContextCacheElementUStructArray *)0x0) {
    IVar1 = (IContextCacheStore)FContextCacheElementUStructArray(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444410a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStructArray::CreateArrayFromElement
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443f20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementUStructArray::CreateFromArrayElement
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UScriptStruct *pUVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  IContextCacheStore IVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FConstStructView local_28;
  
  iVar11 = (int)param_3;
  if ((-1 < iVar11) && (iVar11 < (int)(this->InstancedStructArray)._padding_)) {
    pUVar1 = (this->InstancedStructArray).ScriptStruct;
    if (pUVar1 == (UScriptStruct *)0x0) {
      uVar10 = 0;
    }
    else {
      iVar9 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      uVar10 = iVar9 + -1 + (int)pUVar1->_padding_ & -iVar9;
    }
    lVar7 = this->_padding_;
    lVar2 = this->_padding_;
    if ((int)uVar10 < 1) {
      uVar10 = 1;
    }
    lVar3 = (this->InstancedStructArray)._padding_;
    IVar8 = (IContextCacheStore)::operator_new(0x58);
    if (IVar8 == (IContextCacheStore)0x0) {
      IVar8 = (IContextCacheStore)0x0;
    }
    else {
      lVar4 = this->_padding_;
      uVar5 = *(undefined8 *)((longlong)&this->_padding_ + 4);
      uVar6 = *(undefined8 *)((longlong)&this->_padding_ + 4);
      *(undefined ***)IVar8 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      *(longlong *)((longlong)IVar8 + 0x30) = lVar4;
      *(undefined8 *)((longlong)IVar8 + 0xc) = uVar5;
      *(undefined8 *)((longlong)IVar8 + 0x14) = uVar6;
      *(undefined4 *)((longlong)IVar8 + 8) = 5;
      *(longlong *)((longlong)IVar8 + 0x20) = lVar2;
      *(int *)((longlong)IVar8 + 0x28) = (int)lVar7;
      *(undefined ***)((longlong)IVar8 + 0x38) = &___7FGCObject__6B_;
      *(undefined2 *)((longlong)IVar8 + 0x40) = 0;
      FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar8 + 0x38));
      *(undefined ***)IVar8 =
           &FContextCacheElementUStruct::_vftable__for__UE__Dataflow__FContextCacheElementBase__;
      *(undefined ***)((longlong)IVar8 + 0x38) =
           &FContextCacheElementUStruct::_vftable__for__FGCObject__;
      local_28.ScriptStruct = pUVar1;
      local_28.StructMemory = (uchar *)((int)(uVar10 * iVar11) + lVar3);
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)IVar8 + 0x48),&local_28);
    }
    *param_1 = IVar8;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c720

int __thiscall
UE::Dataflow::FContextCacheElementUStructArray::GetNumArrayElements
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1)

{
  return (int)(this->InstancedStructArray)._padding_;
}

// GetReferencerName @ 14444dff0

FString * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::GetReferencerName
          (FContextCacheElementUStructArray *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FContextCacheElementUStructArray");
  return __return_storage_ptr__;
}

// GetStructArrayView @ 14444e1b0

FConstStructArrayView * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::GetStructArrayView
          (FContextCacheElementUStructArray *this,FConstStructArrayView *__return_storage_ptr__)

{
  int iVar1;
  UScriptStruct *pUVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FConstStructArrayView *pFVar7;
  int iVar8;
  
  pUVar2 = (this->InstancedStructArray).ScriptStruct;
  if (pUVar2 == (UScriptStruct *)0x0) {
    __return_storage_ptr__->DataPtr = (void *)0x0;
    __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
    __return_storage_ptr__->ElementSize = 0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  pvVar3 = (void *)(this->InstancedStructArray)._padding_;
  iVar1 = (int)(this->InstancedStructArray)._padding_;
  __return_storage_ptr__->DataPtr = pvVar3;
  __return_storage_ptr__->ScriptStruct = pUVar2;
  iVar8 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
  lVar5 = pUVar2->_padding_;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->ElementSize = iVar8 + -1 + (int)lVar5 & -iVar8;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                       ,0x1b8,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConstStructArrayView *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((pvVar3 == (void *)0x0) && (iVar1 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData != nullptr || InCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                       ,0x1b9,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConstStructArrayView *)(*pcVar4)();
      return pFVar7;
    }
  }
  return __return_storage_ptr__;
}

// GetUntypedData @ 14444ec40

void * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::GetUntypedData
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)(this->InstancedStructArray)._padding_;
}

// IsArray @ 144451390

bool __thiscall
UE::Dataflow::FContextCacheElementUStructArray::IsArray
          (FContextCacheElementUStructArray *this,IContextCacheStore *param_1)

{
  return true;
}

