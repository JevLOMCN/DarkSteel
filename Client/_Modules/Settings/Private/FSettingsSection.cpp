// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 33

// FSettingsSection @ 142695e30

FSettingsSection * __thiscall
FSettingsSection::FSettingsSection
          (FSettingsSection *this,TSharedRef<ISettingsCategory,1> *param_1,FName *param_2,
          FText *param_3,FText *param_4,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  
  pFVar3 = param_4;
  this->_padding_ = (longlong)&___7FSettingsSection__6B_;
  (this->Category).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Category).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->CustomWidget).Object = (SWidget *)0x0;
  (this->CustomWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->TextData).Reference;
  (this->Description).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  (this->Description).Flags = pFVar3->Flags;
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->TextData).Reference;
  (this->DisplayName).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  (this->DisplayName).Flags = param_3->Flags;
  this->Name = *param_2;
  (this->SettingsObject).WeakPtr = param_5->WeakPtr;
  *(undefined8 *)&this->CanEditDelegate = 0;
  *(undefined8 *)&(this->CanEditDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanEditDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ExportDelegate = 0;
  *(undefined8 *)&(this->ExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ImportDelegate = 0;
  *(undefined8 *)&(this->ImportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ImportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ModifiedDelegate = 0;
  *(undefined8 *)&(this->ModifiedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ModifiedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ResetDefaultsDelegate = 0;
  *(undefined8 *)&(this->ResetDefaultsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ResetDefaultsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SaveDefaultsDelegate = 0;
  *(undefined8 *)&(this->SaveDefaultsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SaveDefaultsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SaveDelegate = 0;
  *(undefined8 *)&(this->SaveDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SaveDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StatusDelegate = 0;
  *(undefined8 *)&(this->StatusDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StatusDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SelectDelegate = 0;
  *(undefined8 *)&(this->SelectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SelectDelegate).field_0x10 = 0;
  return this;
}

// FSettingsSection @ 142695fb0

FSettingsSection * __thiscall
FSettingsSection::FSettingsSection
          (FSettingsSection *this,TSharedRef<ISettingsCategory,1> *param_1,FName *param_2,
          FText *param_3,FText *param_4,TSharedRef<SWidget,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7FSettingsSection__6B_;
  (this->Category).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Category).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->CustomWidget).Object = param_5->Object;
  pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
  (this->CustomWidget).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->TextData).Reference;
  (this->Description).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_5);
  }
  (this->Description).Flags = param_4->Flags;
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->TextData).Reference;
  (this->DisplayName).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_5);
  }
  (this->DisplayName).Flags = param_3->Flags;
  this->Name = *param_2;
  (this->SettingsObject).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CanEditDelegate = 0;
  *(undefined8 *)&(this->CanEditDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CanEditDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ExportDelegate = 0;
  *(undefined8 *)&(this->ExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ImportDelegate = 0;
  *(undefined8 *)&(this->ImportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ImportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ModifiedDelegate = 0;
  *(undefined8 *)&(this->ModifiedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ModifiedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ResetDefaultsDelegate = 0;
  *(undefined8 *)&(this->ResetDefaultsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ResetDefaultsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SaveDefaultsDelegate = 0;
  *(undefined8 *)&(this->SaveDefaultsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SaveDefaultsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SaveDelegate = 0;
  *(undefined8 *)&(this->SaveDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SaveDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StatusDelegate = 0;
  *(undefined8 *)&(this->StatusDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StatusDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SelectDelegate = 0;
  *(undefined8 *)&(this->SelectDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SelectDelegate).field_0x10 = 0;
  return this;
}

// CanEdit @ 142697910

bool __thiscall FSettingsSection::CanEdit(FSettingsSection *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CanEditDelegate,
             &local_28);
  if ((*(int *)&(this->CanEditDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->CanEditDelegate).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CanEditDelegate,
                 &local_28);
      if (*(int *)&(this->CanEditDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->CanEditDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// CanExport @ 1426979a0

bool __thiscall FSettingsSection::CanExport(FSettingsSection *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ExportDelegate,
             &local_28);
  if ((*(int *)&(this->ExportDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExportDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// CanImport @ 142697a40

bool __thiscall FSettingsSection::CanImport(FSettingsSection *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ImportDelegate,
             &local_28);
  if ((*(int *)&(this->ImportDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ImportDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// CanResetDefaults @ 142697af0

bool __thiscall FSettingsSection::CanResetDefaults(FSettingsSection *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ResetDefaultsDelegate,
             &local_28);
  if ((*(int *)&(this->ResetDefaultsDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ResetDefaultsDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 4) != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
      if ((*(uint *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 0x8000042) == 0) {
        return true;
      }
    }
  }
  return false;
}

// CanSave @ 142697bb0

bool __thiscall FSettingsSection::CanSave(FSettingsSection *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SaveDelegate,&local_28
            );
  if ((*(int *)&(this->SaveDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->SaveDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// CanSaveDefaults @ 142697c60

bool __thiscall FSettingsSection::CanSaveDefaults(FSettingsSection *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SaveDefaultsDelegate,
             &local_28);
  if ((*(int *)&(this->SaveDefaultsDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->SaveDefaultsDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 4) != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
      if ((*(uint *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 0x8000042) == 0) {
        return true;
      }
    }
  }
  return false;
}

// Export @ 1426983b0

bool __thiscall FSettingsSection::Export(FSettingsSection *this,FString *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  UObject *this_00;
  longlong *plVar4;
  wchar_t *pwVar5;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ExportDelegate,
             &local_28);
  if ((*(int *)&(this->ExportDelegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->ExportDelegate).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar4 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ExportDelegate,
                 &local_28);
      if (*(int *)&(this->ExportDelegate).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->ExportDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (bVar3) {
    this_00 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    UObject::SaveConfig(this_00,0x4000,pwVar5,GConfig,true);
    return true;
  }
  return false;
}

// GetCategory @ 1426988e0

TWeakPtr<ISettingsCategory,1> * __thiscall
FSettingsSection::GetCategory
          (FSettingsSection *this,TWeakPtr<ISettingsCategory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Category).Object;
  pTVar1 = (this->Category).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCustomWidget @ 142698910

TWeakPtr<SWidget,1> * __thiscall
FSettingsSection::GetCustomWidget
          (FSettingsSection *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->CustomWidget).Object;
  pTVar1 = (this->CustomWidget).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDescription @ 142698960

FText * __thiscall FSettingsSection::GetDescription(FSettingsSection *this)

{
  return &this->Description;
}

// GetDisplayName @ 142698990

FText * __thiscall FSettingsSection::GetDisplayName(FSettingsSection *this)

{
  return &this->DisplayName;
}

// GetName @ 1426989d0

FName * __thiscall FSettingsSection::GetName(FSettingsSection *this)

{
  return &this->Name;
}

// GetSettingsObject @ 142698da0

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FSettingsSection::GetSettingsObject(FSettingsSection *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->SettingsObject).WeakPtr;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// GetStatus @ 142698dc0

FText * __thiscall FSettingsSection::GetStatus(FSettingsSection *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  char cVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StatusDelegate,
             &local_28);
  if ((*(int *)&(this->StatusDelegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->StatusDelegate).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StatusDelegate,
                 &local_28);
      if (*(int *)&(this->StatusDelegate).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->StatusDelegate).field_0x8;
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,__return_storage_ptr__);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// HasDefaultSettingsObject @ 142698e90

bool __thiscall FSettingsSection::HasDefaultSettingsObject(FSettingsSection *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
  return (bool)((byte)(*(uint *)(*(longlong *)&pUVar2->field_0x10 + 0xd4) >> 1) & 1);
}

// Import @ 142698ed0

bool __thiscall FSettingsSection::Import(FSettingsSection *this,FString *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  UObject *this_00;
  UObject *pUVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_01;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ImportDelegate,
             &local_28);
  if ((*(int *)&(this->ImportDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->ImportDelegate).field_0x8, plVar5 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar5 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ImportDelegate,
                 &local_28);
      if (*(int *)&(this->ImportDelegate).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->ImportDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this_01 = &this->SettingsObject;
  bVar3 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
  if (bVar3) {
    this_00 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pUVar4 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UObject::LoadConfig(this_00,*(UClass **)&pUVar4->field_0x10,pwVar6,4,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
    return true;
  }
  return false;
}

// NotifySectionOnPropertyModified @ 1426990f0

bool __thiscall FSettingsSection::NotifySectionOnPropertyModified(FSettingsSection *this)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ModifiedDelegate,
             &local_28);
  if ((*(int *)&(this->ModifiedDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->ModifiedDelegate).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ModifiedDelegate,
                 &local_28);
      if (*(int *)&(this->ModifiedDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->ModifiedDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// OnCanEdit @ 142699180

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnCanEdit(FSettingsSection *this)

{
  return &this->CanEditDelegate;
}

// OnExport @ 1426991a0

TDelegate<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnExport(FSettingsSection *this)

{
  return &this->ExportDelegate;
}

// OnImport @ 1426991b0

TDelegate<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnImport(FSettingsSection *this)

{
  return &this->ImportDelegate;
}

// OnModified @ 1426991c0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnModified(FSettingsSection *this)

{
  return &this->ModifiedDelegate;
}

// OnResetDefaults @ 1426991d0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnResetDefaults(FSettingsSection *this)

{
  return &this->ResetDefaultsDelegate;
}

// OnSave @ 1426991e0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnSave(FSettingsSection *this)

{
  return &this->SaveDelegate;
}

// OnSaveDefaults @ 1426991f0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnSaveDefaults(FSettingsSection *this)

{
  return &this->SaveDefaultsDelegate;
}

// OnSelect @ 142699210

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnSelect(FSettingsSection *this)

{
  return &this->SelectDelegate;
}

// OnStatus @ 142699220

TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FSettingsSection::OnStatus(FSettingsSection *this)

{
  return &this->StatusDelegate;
}

// ReinstancingComplete @ 14269a050

void __thiscall FSettingsSection::ReinstancingComplete(FSettingsSection *this,IReload *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x58);
  pUVar2 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr,true);
  local_res8 = (UObject *)(*pcVar1)(param_1,pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->SettingsObject).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// ResetDefaults @ 14269a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FSettingsSection::ResetDefaults(FSettingsSection *this)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  UClass *this_01;
  UClass *this_02;
  _func___cdecl_void_FObjectInitializer_ptr *p_Var1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  UObject *pUVar7;
  FString *pFVar8;
  UPackage *pUVar9;
  UObjectBase *this_03;
  UObjectBase *pUVar10;
  FObjectInitializer *pFVar11;
  FUObjectItem *pFVar12;
  uint uVar13;
  void *_Dst;
  wchar_t *pwVar14;
  void *_Src;
  EObjectInitializerOptions EVar15;
  longlong *plVar16;
  undefined1 auStackY_578 [32];
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FReadAccessScope local_4c0;
  FReadAccessScope local_4a8;
  FConfigContext local_488;
  FObjectInitializer local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_578;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ResetDefaultsDelegate,
             &local_4c0);
  if (((*(int *)&(this->ResetDefaultsDelegate).field_0x10 == 0) ||
      (plVar16 = *(longlong **)&(this->ResetDefaultsDelegate).field_0x8, plVar16 == (longlong *)0x0)
      ) || (cVar4 = (**(code **)(*plVar16 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_4c0);
    this_00 = &this->SettingsObject;
    bVar6 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (((bVar6) &&
        (pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr),
        (*(byte *)(*(longlong *)&pUVar7->field_0x10 + 0xd4) & 4) != 0)) &&
       (pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr),
       (*(uint *)(*(longlong *)&pUVar7->field_0x10 + 0xd4) & 0x8000042) == 0)) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = *(UClass **)&pUVar7->field_0x10;
      UClass::GetConfigName(this_01,&local_500);
      pFVar8 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_01,&local_4e0,(UObject *)0x0);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FConfigCacheIni::EmptySection(GConfig,pwVar14,&local_500);
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_4f0,L"");
      FConfigCacheIni::Flush(GConfig,false,&local_4f0);
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
      pUVar7 = (UObject *)0x0;
      local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_510.Data.ArrayNum = 0;
      local_510.Data.ArrayMax = 0;
      FConfigContext::FConfigContext(&local_488,GConfig,true,&local_510,(FConfigFile *)0x0);
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      local_488.bForceReload = true;
      pFVar8 = FPaths::GetBaseFilename(&local_4d0,&local_500,true);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FConfigContext::Load(&local_488,pwVar14);
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      FConfigContext::~FConfigContext(&local_488);
      this_02 = (UClass *)this_01->_padding_;
      if (this_02 != (UClass *)0x0) {
        UObjectForceRegistration((UObjectBase *)this_02,true);
        if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_02);
        }
        pUVar7 = (this_02->ClassDefaultObject).field0_0x0.DebugPtr;
        if ((GConfig == (FConfigCacheIni *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GConfig",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Settings\\Private\\SettingsSection.cpp"
                               ,0xcf,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((GEventDrivenLoaderEnabled != false) &&
           (((pUVar7 == (UObject *)0x0 || ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) != 0)) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParentDefaultObject && !ParentDefaultObject->HasAnyFlags(RF_NeedLoad)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Settings\\Private\\SettingsSection.cpp"
                                ,0xd2,L""), bVar6)))) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pUVar9 = GetTransientPackage();
      this_03 = (UObjectBase *)
                StaticAllocateObject
                          (this_01,(UObject *)pUVar9,(FName)0x0,RF_ClassDefaultObject,Borrowed,false
                           ,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                           (FGCReconstructionGuard *)0x0);
      pUVar10 = (UObjectBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      if ((pUVar10 == this_03) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SettingsObject.Get() != TempDefaultObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Settings\\Private\\SettingsSection.cpp"
                             ,0xd6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      p_Var1 = this_01->ClassConstructor;
      EVar15 = InitializeProperties;
      if ((this_01->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) != CLASS_None) {
        EVar15 = None;
      }
      pFVar11 = FObjectInitializer::FObjectInitializer
                          (&local_298,(UObject *)this_03,pUVar7,EVar15,(FObjectInstancingGraph *)0x0
                          );
      (*p_Var1)(pFVar11);
      FObjectInitializer::~FObjectInitializer(&local_298);
      (**(code **)(this_03->_padding_ + 0x170))(this_03,0,0,0x34);
      for (plVar16 = (longlong *)this_01->_padding_; plVar16 != (longlong *)0x0;
          plVar16 = (longlong *)plVar16[9]) {
        if ((*(uint *)(plVar16 + 7) & 0x44000) != 0) {
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          if (((int)plVar16[6] < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          _Src = (void *)((longlong)&this_03->_padding_ +
                         (longlong)*(int *)((longlong)plVar16 + 0x44));
          if (((int)plVar16[6] < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((pUVar7 == (UObject *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          _Dst = &pUVar7->field_0x0 + *(int *)((longlong)plVar16 + 0x44);
          if (_Dst != _Src) {
            if ((*(uint *)(plVar16 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar16 + 0xf0))(plVar16,_Dst,_Src,(int)plVar16[6]);
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)*(int *)((longlong)plVar16 + 0x34) * (longlong)(int)plVar16[6]);
            }
          }
        }
      }
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_03->InternalIndex);
      if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      UObjectBase::AtomicallySetFlags(this_03,RF_MirroredGarbage);
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_03->InternalIndex);
      do {
        lVar2 = (pFVar12->field0_0x0).FlagsAndRefCount;
        uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
        if ((uVar13 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar2 == (pFVar12->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar12->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar13 << 0x20 | (longlong)(int)lVar2 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar6);
      pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_03->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar12,Async);
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UObject::ReloadConfig(pUVar7,(UClass *)0x0,(wchar_t *)0x0,6,(FProperty *)0x0);
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_4c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ResetDefaultsDelegate,&local_4a8);
    if (*(int *)&(this->ResetDefaultsDelegate).field_0x10 == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = *(longlong **)&(this->ResetDefaultsDelegate).field_0x8;
    }
    uVar5 = (**(code **)(*plVar16 + 0x60))(plVar16);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_4a8);
  }
  return (bool)uVar5;
}

// Save @ 14269a9c0

bool __thiscall FSettingsSection::Save(FSettingsSection *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *local_28 [4];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ModifiedDelegate,
             (FReadAccessScope *)local_28);
  plVar6 = (longlong *)0x0;
  if (((*(int *)&(this->ModifiedDelegate).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->ModifiedDelegate).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ModifiedDelegate,
               (FReadAccessScope *)local_28);
    plVar5 = plVar6;
    if (*(int *)&(this->ModifiedDelegate).field_0x10 != 0) {
      plVar5 = *(longlong **)&(this->ModifiedDelegate).field_0x8;
    }
    cVar1 = (**(code **)(*plVar5 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    if (cVar1 == '\0') {
      return false;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SaveDelegate,
             (FReadAccessScope *)local_28);
  if (((*(int *)&(this->SaveDelegate).field_0x10 != 0) &&
      (plVar5 = *(longlong **)&(this->SaveDelegate).field_0x8, plVar5 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SaveDelegate,
               (FReadAccessScope *)local_28);
    if (*(int *)&(this->SaveDelegate).field_0x10 != 0) {
      plVar6 = *(longlong **)&(this->SaveDelegate).field_0x8;
    }
    uVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    return (bool)uVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_28);
  bVar3 = FWeakObjectPtr::IsValid(&(this->SettingsObject).WeakPtr);
  if (!bVar3) {
    return false;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
  if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 2) == 0) {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(uint *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 0x8000000) != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
      UObject::UpdateGlobalUserConfigFile(pUVar4);
      return true;
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    if ((*(byte *)(*(longlong *)&pUVar4->field_0x10 + 0xd4) & 0x40) != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
      UObject::UpdateProjectUserConfigFile(pUVar4);
      return true;
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    UObject::SaveConfig(pUVar4,0x4000,(wchar_t *)0x0,GConfig,true);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->SettingsObject).WeakPtr);
    ::FString::FString((FString *)local_28,"");
    UObject::TryUpdateDefaultConfigFile(pUVar4,(FString *)local_28,true);
    if (local_28[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0]);
      return true;
    }
  }
  return true;
}

// SaveDefaults @ 14269ac00

bool __thiscall FSettingsSection::SaveDefaults(FSettingsSection *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong *plVar5;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SaveDefaultsDelegate,
             &local_28);
  if ((*(int *)&(this->SaveDefaultsDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->SaveDefaultsDelegate).field_0x8, plVar5 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar5 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->SaveDefaultsDelegate,&local_28);
      if (*(int *)&(this->SaveDefaultsDelegate).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->SaveDefaultsDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar5 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this_00 = &this->SettingsObject;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    ::FString::FString((FString *)&local_28,"");
    UObject::TryUpdateDefaultConfigFile(pUVar4,(FString *)&local_28,true);
    if ((void *)local_28.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UObject::ReloadConfig(pUVar4,(UClass *)0x0,(wchar_t *)0x0,4,(FProperty *)0x0);
    return true;
  }
  return false;
}

// Select @ 14269ad20

void __thiscall FSettingsSection::Select(FSettingsSection *this)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SelectDelegate,
             &local_28);
  if ((*(int *)&(this->SelectDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->SelectDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SelectDelegate,
                 &local_28);
      if (*(int *)&(this->SelectDelegate).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->SelectDelegate).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

