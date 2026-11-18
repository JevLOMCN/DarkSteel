// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b6badf0

UClass * __cdecl UDS_VM_PenaltyStageInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PenaltyStageInfo",
               &Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_PenaltyStageInfo,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PenaltyStageInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_PenaltyStageInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton;
}

// UDS_VM_PenaltyStageInfo @ 14b6bd590

UDS_VM_PenaltyStageInfo * __thiscall
UDS_VM_PenaltyStageInfo::UDS_VM_PenaltyStageInfo
          (UDS_VM_PenaltyStageInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PenaltyStageInfo__6B_;
  this->MainIconID = 0;
  this->PenaltyCount = 0;
  this->bIsMountPenalty = false;
  return this;
}

// UDS_VM_PenaltyStageInfo @ 14b6bd5e0

UDS_VM_PenaltyStageInfo * __thiscall
UDS_VM_PenaltyStageInfo::UDS_VM_PenaltyStageInfo
          (UDS_VM_PenaltyStageInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PenaltyStageInfo__6B_;
  this->MainIconID = 0;
  this->PenaltyCount = 0;
  this->bIsMountPenalty = false;
  return this;
}

// ~UDS_VM_PenaltyStageInfo @ 14b6bf120

void __thiscall UDS_VM_PenaltyStageInfo::~UDS_VM_PenaltyStageInfo(UDS_VM_PenaltyStageInfo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PenaltyStageInfo__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0c40

IClassDescriptor * __thiscall
UDS_VM_PenaltyStageInfo::GetFieldNotificationDescriptor(UDS_VM_PenaltyStageInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PenaltyStageInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1160

UClass * __cdecl UDS_VM_PenaltyStageInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PenaltyStageInfo",
               &Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_PenaltyStageInfo,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PenaltyStageInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_PenaltyStageInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PenaltyStageInfo.InnerSingleton;
}

// IsUpdate @ 14b6c18f0

bool __thiscall UDS_VM_PenaltyStageInfo::IsUpdate(UDS_VM_PenaltyStageInfo *this)

{
  return false;
}

// StaticRegisterNativesUDS_VM_PenaltyStageInfo @ 14b6c1930

void __cdecl UDS_VM_PenaltyStageInfo::StaticRegisterNativesUDS_VM_PenaltyStageInfo(void)

{
  return;
}

// OnSetViewModel @ 14be3bac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PenaltyStageInfo::OnSetViewModel
          (UDS_VM_PenaltyStageInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_SustainPenaltyTableRow *pFVar7;
  ESlateVisibility EVar8;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ViewModelContext_PenaltyStage,1> local_1a8;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_PenaltyStageInfo::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x16,L"InViewModelContext is nullptr.");
      if ((FDS_ViewModelContext_PenaltyStage *)local_148._padding_ !=
          (FDS_ViewModelContext_PenaltyStage *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_158.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_PenaltyStage>(&local_1a8,&local_158);
    if (local_1a8.Object == (FDS_ViewModelContext_PenaltyStage *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)local_1a8.Object;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_PenaltyStageInfo::OnSetViewModel",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x1d,L"context is nullptr.");
        if ((FDS_ViewModelContext_PenaltyStage *)local_148._padding_ !=
            (FDS_ViewModelContext_PenaltyStage *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar7 = UDS_PlayerData::GetSustainPenaltyTable
                         (&(local_1a8.Object)->PenaltyType,&(local_1a8.Object)->PenaltyStage);
      iVar4 = FFieldNotificationClassDescriptor::MainIconID.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::MainIconID.FieldName;
      if (pFVar7 == (FDS_SustainPenaltyTableRow *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_PenaltyStageInfo::OnSetViewModel",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_148.Ptr,0x25,L"sustainPenaltyTable is nullptr.");
          if ((FDS_ViewModelContext_PenaltyStage *)local_148._padding_ !=
              (FDS_ViewModelContext_PenaltyStage *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        if (this->MainIconID != pFVar7->ID_Icon) {
          this->MainIconID = pFVar7->ID_Icon;
          local_190 = iVar4;
          local_198 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
        }
        bVar5 = UDS_PlayerData::GetIsMountPenalty(&(local_1a8.Object)->PenaltyType);
        FVar3 = FFieldNotificationClassDescriptor::bIsMountPenalty.FieldName;
        if (this->bIsMountPenalty != bVar5) {
          local_180 = FFieldNotificationClassDescriptor::bIsMountPenalty.BitNumber;
          this->bIsMountPenalty = bVar5;
          local_188 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
        }
        FVar3 = FFieldNotificationClassDescriptor::PenaltyCount.FieldName;
        if (this->PenaltyCount != (local_1a8.Object)->PenaltyStageValue) {
          local_170 = FFieldNotificationClassDescriptor::PenaltyCount.BitNumber;
          this->PenaltyCount = (local_1a8.Object)->PenaltyStageValue;
          local_178 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        }
        iVar4 = FFieldNotificationClassDescriptor::PenaltyCountVisibilty.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::PenaltyCountVisibilty.FieldName;
        EVar8 = Collapsed;
        if (0 < (local_1a8.Object)->PenaltyStageValue) {
          EVar8 = SelfHitTestInvisible;
        }
        if (this->PenaltyCountVisibilty != EVar8) {
          this->PenaltyCountVisibilty = EVar8;
          local_160 = iVar4;
          local_168 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsMountPenalty @ 14be4c120

void __thiscall
UDS_VM_PenaltyStageInfo::SetIsMountPenalty(UDS_VM_PenaltyStageInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsMountPenalty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsMountPenalty.FieldName;
  if (this->bIsMountPenalty != *param_1) {
    this->bIsMountPenalty = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainIconID @ 14be4dc00

void __thiscall UDS_VM_PenaltyStageInfo::SetMainIconID(UDS_VM_PenaltyStageInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainIconID.FieldName;
  if (this->MainIconID != *param_1) {
    this->MainIconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPenaltyCount @ 14be4f0c0

void __thiscall UDS_VM_PenaltyStageInfo::SetPenaltyCount(UDS_VM_PenaltyStageInfo *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PenaltyCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PenaltyCount.FieldName;
  if (this->PenaltyCount != param_1) {
    this->PenaltyCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPenaltyCountVisibilty @ 14be4f110

void __thiscall
UDS_VM_PenaltyStageInfo::SetPenaltyCountVisibilty
          (UDS_VM_PenaltyStageInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PenaltyCountVisibilty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PenaltyCountVisibilty.FieldName;
  if (this->PenaltyCountVisibilty != *param_1) {
    this->PenaltyCountVisibilty = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

