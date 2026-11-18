// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// StaticClass @ 1468da940

UClass * __cdecl USlateAccessibleWidgetData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateAccessibleWidgetData",
               &Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton,
               StaticRegisterNativesUSlateAccessibleWidgetData,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USlateAccessibleWidgetData>,
               InternalVTableHelperCtorCaller<USlateAccessibleWidgetData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton;
}

// USlateAccessibleWidgetData @ 1469020b0

USlateAccessibleWidgetData * __thiscall
USlateAccessibleWidgetData::USlateAccessibleWidgetData
          (USlateAccessibleWidgetData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateAccessibleWidgetData__6B_;
  FText::FText(&this->AccessibleText);
  *(undefined8 *)&this->AccessibleTextDelegate = 0;
  *(undefined8 *)&(this->AccessibleTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->AccessibleTextDelegate).field_0x10 = 0;
  FText::FText(&this->AccessibleSummaryText);
  *(undefined8 *)&this->AccessibleSummaryTextDelegate = 0;
  *(undefined8 *)&(this->AccessibleSummaryTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->AccessibleSummaryTextDelegate).field_0x10 = 0;
  return this;
}

// ~USlateAccessibleWidgetData @ 146904cb0

void __thiscall
USlateAccessibleWidgetData::~USlateAccessibleWidgetData(USlateAccessibleWidgetData *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7USlateAccessibleWidgetData__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleSummaryTextDelegate);
  pIVar1 = (this->AccessibleSummaryText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AccessibleTextDelegate);
  pIVar1 = (this->AccessibleText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FGetText_DelegateWrapper @ 146919740

FText * __cdecl
USlateAccessibleWidgetData::FGetText_DelegateWrapper
          (FText *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  FText::FText(&local_18);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  (__return_storage_ptr__->TextData).Reference = local_18.TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = local_18.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146922a60

UClass * __cdecl USlateAccessibleWidgetData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateAccessibleWidgetData",
               &Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton,
               StaticRegisterNativesUSlateAccessibleWidgetData,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USlateAccessibleWidgetData>,
               InternalVTableHelperCtorCaller<USlateAccessibleWidgetData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateAccessibleWidgetData.InnerSingleton;
}

// StaticRegisterNativesUSlateAccessibleWidgetData @ 146945a10

void __cdecl USlateAccessibleWidgetData::StaticRegisterNativesUSlateAccessibleWidgetData(void)

{
  return;
}

// CreateAccessibleSummaryTextAttribute @ 1469b1fe0

TAttribute<FText> * __thiscall
USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
          (USlateAccessibleWidgetData *this,TAttribute<FText> *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  TAttribute<FText> *pTVar4;
  FName local_res8;
  FDestructionSentinel local_88;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->AccessibleSummaryTextDelegate);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AccessibleSummaryTextDelegate,(FReadAccessScope *)&local_88);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->AccessibleSummaryTextDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->AccessibleSummaryTextDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AccessibleSummaryTextDelegate,(FWriteAccessScope *)&local_88);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->AccessibleSummaryTextDelegate).field_0x8)
    ;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pTVar4 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_40,pUVar3,&local_res8);
    bVar1 = true;
    bVar2 = false;
  }
  else {
    local_70._0_8_ = (this->AccessibleSummaryText).TextData.Reference;
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&local_res8);
    }
    local_70._8_4_ = (this->AccessibleSummaryText).Flags;
    pTVar4 = (TAttribute<FText> *)local_70;
    local_70[0x10] = true;
    bVar1 = false;
    bVar2 = true;
    local_48 = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
  }
  FText::FText(&__return_storage_ptr__->Value,&pTVar4->Value);
  __return_storage_ptr__->bIsSet = pTVar4->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar4->Getter);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_88);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
  }
  if (bVar1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// CreateAccessibleTextAttribute @ 1469b21b0

TAttribute<FText> * __thiscall
USlateAccessibleWidgetData::CreateAccessibleTextAttribute
          (USlateAccessibleWidgetData *this,TAttribute<FText> *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  TAttribute<FText> *pTVar4;
  FName local_res8;
  FDestructionSentinel local_88;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->AccessibleTextDelegate);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AccessibleTextDelegate,(FReadAccessScope *)&local_88);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->AccessibleTextDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->AccessibleTextDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->AccessibleTextDelegate,(FWriteAccessScope *)&local_88);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->AccessibleTextDelegate).field_0x8);
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pTVar4 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_40,pUVar3,&local_res8);
    bVar1 = true;
    bVar2 = false;
  }
  else {
    local_70._0_8_ = (this->AccessibleText).TextData.Reference;
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&local_res8);
    }
    local_70._8_4_ = (this->AccessibleText).Flags;
    pTVar4 = (TAttribute<FText> *)local_70;
    local_70[0x10] = true;
    bVar1 = false;
    bVar2 = true;
    local_48 = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
  }
  FText::FText(&__return_storage_ptr__->Value,&pTVar4->Value);
  __return_storage_ptr__->bIsSet = pTVar4->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar4->Getter);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_88);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
  }
  if (bVar1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

