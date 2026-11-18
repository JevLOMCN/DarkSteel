// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b6ac7a0

UClass * __cdecl UDS_VM_NpcViewTargetInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcViewTargetInfo",
               &Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcViewTargetInfo,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcViewTargetInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcViewTargetInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton;
}

// UDS_VM_NpcViewTargetInfo @ 14b6b2b20

UDS_VM_NpcViewTargetInfo * __thiscall
UDS_VM_NpcViewTargetInfo::UDS_VM_NpcViewTargetInfo
          (UDS_VM_NpcViewTargetInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetInfo__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->CharInfoText);
  FText::FText(&this->CurrentState);
  this->CurrentStateVisibility = SelfHitTestInvisible;
  this->TargetInfoVisibility = SelfHitTestInvisible;
  this->TargetEntityID = 0;
  this->TargetOwnerEntityID = 0;
  this->DefaultBroadCastRange = 0.0;
  (this->UserName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserName).Data.ArrayNum = 0;
  (this->UserName).Data.ArrayMax = 0;
  (this->CharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).Data.ArrayNum = 0;
  (this->CharName).Data.ArrayMax = 0;
  (this->CurrentHP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHP).Data.ArrayNum = 0;
  (this->CurrentHP).Data.ArrayMax = 0;
  (this->BattleInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BattleInfo).Data.ArrayNum = 0;
  (this->BattleInfo).Data.ArrayMax = 0;
  return this;
}

// UDS_VM_NpcViewTargetInfo @ 14b6b2c00

UDS_VM_NpcViewTargetInfo * __thiscall
UDS_VM_NpcViewTargetInfo::UDS_VM_NpcViewTargetInfo
          (UDS_VM_NpcViewTargetInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetInfo__6B_;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->CharInfoText);
  FText::FText(&this->CurrentState);
  this->CurrentStateVisibility = SelfHitTestInvisible;
  this->TargetInfoVisibility = SelfHitTestInvisible;
  this->TargetEntityID = 0;
  this->TargetOwnerEntityID = 0;
  this->DefaultBroadCastRange = 0.0;
  (this->UserName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserName).Data.ArrayNum = 0;
  (this->UserName).Data.ArrayMax = 0;
  (this->CharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).Data.ArrayNum = 0;
  (this->CharName).Data.ArrayMax = 0;
  (this->CurrentHP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHP).Data.ArrayNum = 0;
  (this->CurrentHP).Data.ArrayMax = 0;
  (this->BattleInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BattleInfo).Data.ArrayNum = 0;
  (this->BattleInfo).Data.ArrayMax = 0;
  return this;
}

// ~UDS_VM_NpcViewTargetInfo @ 14b6b4300

void __thiscall UDS_VM_NpcViewTargetInfo::~UDS_VM_NpcViewTargetInfo(UDS_VM_NpcViewTargetInfo *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcViewTargetInfo__6B_;
  pFVar1 = (this->BattleInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentHP).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CurrentState).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->CharInfoText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6b70

IClassDescriptor * __thiscall
UDS_VM_NpcViewTargetInfo::GetFieldNotificationDescriptor(UDS_VM_NpcViewTargetInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcViewTargetInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7820

UClass * __cdecl UDS_VM_NpcViewTargetInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcViewTargetInfo",
               &Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcViewTargetInfo,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcViewTargetInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcViewTargetInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcViewTargetInfo.InnerSingleton;
}

// GetTickableTickType @ 14b6b7cc0

ETickableTickType __thiscall
UDS_VM_NpcViewTargetInfo::GetTickableTickType(UDS_VM_NpcViewTargetInfo *this)

{
  return Conditional;
}

// IsUpdate @ 14b6b7cf0

bool __thiscall UDS_VM_NpcViewTargetInfo::IsUpdate(UDS_VM_NpcViewTargetInfo *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_NpcViewTargetInfo @ 14b6b7e50

void __cdecl UDS_VM_NpcViewTargetInfo::StaticRegisterNativesUDS_VM_NpcViewTargetInfo(void)

{
  return;
}

// BindModel @ 14be128c0

void __thiscall UDS_VM_NpcViewTargetInfo::BindModel(UDS_VM_NpcViewTargetInfo *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64,bool,int),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NpcViewTargetInfo>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64,bool,int),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnHpChangeEventDelegate,
             (UDS_VM_NpcViewTargetInfo *)&stack0x00000010,(pmf_6481b0ba *)this);
  return;
}

// HideTargetInfo @ 14be243f0

void __thiscall UDS_VM_NpcViewTargetInfo::HideTargetInfo(UDS_VM_NpcViewTargetInfo *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
  if (this->TargetInfoVisibility != Collapsed) {
    this->TargetInfoVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedAiRoundRecord @ 14be297f0

void __thiscall
UDS_VM_NpcViewTargetInfo::OnChangedAiRoundRecord
          (UDS_VM_NpcViewTargetInfo *this,ulong64 param_1,ulong64 param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FormatAsNumber(&local_18,(int)param_1 + (int)param_2);
  ::FString::FormatAsNumber(&local_28,(int)param_1);
  ::FString::PrintfImpl(&local_38,L"Battle Info : %s / %s");
  pFVar1 = &this->BattleInfo;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->BattleInfo).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->BattleInfo).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedHp @ 14be2a2f0

void __thiscall
UDS_VM_NpcViewTargetInfo::OnChangedHp(UDS_VM_NpcViewTargetInfo *this,float param_1,float param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  ::FString::FormatAsNumber(local_28,(int)param_2);
  ::FString::FormatAsNumber(&local_38,(int)param_1);
  ::FString::PrintfImpl(&local_48,L"HP : %s / %s");
  pFVar1 = &this->CurrentHP;
  if (pFVar1 != &local_48) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->CurrentHP).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->CurrentHP).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// OnCloseInit @ 14be2d1d0

void __thiscall UDS_VM_NpcViewTargetInfo::OnCloseInit(UDS_VM_NpcViewTargetInfo *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnHpChangeEvent @ 14be30930

void __thiscall
UDS_VM_NpcViewTargetInfo::OnHpChangeEvent
          (UDS_VM_NpcViewTargetInfo *this,ulong64 param_1,ulong64 param_2,bool param_3,int param_4)

{
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStatusData *this_01;
  FDS_StatusInfo *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  
  if (this->TargetEntityID == param_2) {
    this_00 = &this->PlayerData;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      if (param_3) {
        UDS_CharStatusData::GetData((ulong64)&local_res8);
        bVar2 = FWeakObjectPtr::IsValid(&local_res8);
        iVar3 = param_4;
        if (bVar2) {
          this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
          pFVar4 = UDS_CharStatusData::GetStatusInfo(this_01,Hp);
          if ((pFVar4 != (FDS_StatusInfo *)0x0) &&
             (iVar3 = (int)(pFVar4->MaxValue - (float)pFVar4->CurrentValue), param_4 < iVar3)) {
            iVar3 = param_4;
          }
        }
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar5[10].field_0x4;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        *(int *)&pUVar5[10].field_0x4 = iVar3 + iVar1;
        return;
      }
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar3 = *(int *)(pUVar5 + 10);
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      *(int *)(pUVar5 + 10) = iVar3 + param_4;
    }
  }
  return;
}

// OnMainCharChanged @ 14be31290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_NpcViewTargetInfo::OnMainCharChanged
          (UDS_VM_NpcViewTargetInfo *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStatusData *pUVar4;
  FDS_StatusInfo *pFVar5;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  UObject *pUVar9;
  FString *pFVar10;
  float fVar11;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  FString local_68;
  FString local_58;
  code *local_48;
  ulonglong uStack_40;
  
  if (param_2 != (FDS_EntityBase *)0x0) {
    this_00 = &this->CharStatusData;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar4 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar5 = UDS_CharStatusData::GetStatusInfo(pUVar4,Hp);
      if (pFVar5 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar5->ChangeStatusDelegate,this);
      }
    }
    this->TargetEntityID = param_2->EntityID;
    TVar6 = UDS_CharInfoData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
    (this->CharInfoData).WeakPtr = *TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar7.WeakPtr;
    TVar8 = UDS_CharStateData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar8.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar4 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar5 = UDS_CharStatusData::GetStatusInfo(pUVar4,Hp);
      if (pFVar5 != (FDS_StatusInfo *)0x0) {
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = OnChangedHp;
        TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_NpcViewTargetInfo>
                  ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                    *)&pFVar5->ChangeStatusDelegate,(UDS_VM_NpcViewTargetInfo *)local_res20,
                   (pmf_af696a62 *)this);
      }
      pUVar4 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar3 = UDS_CharStatusData::GetCurrentStatus(pUVar4,Hp);
      pUVar4 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar11 = UDS_CharStatusData::GetMaxStatus(pUVar4,Hp);
      OnChangedHp(this,(float)iVar3,fVar11);
    }
    UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar9 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar9 + 0x2d0))(pUVar9);
      ::FString::PrintfImpl(&local_68,L"UserName : %s");
      pFVar10 = &this->UserName;
      if (pFVar10 != &local_68) {
        pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar10->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (this->UserName).Data.ArrayNum = local_68.Data.ArrayNum;
        (this->UserName).Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
    if (bVar2) {
      FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
      ::FString::PrintfImpl(&local_58,L"CharacterName : %s");
      pFVar10 = &this->CharName;
      if (pFVar10 != &local_58) {
        pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar10->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (this->CharName).Data.ArrayNum = local_58.Data.ArrayNum;
        (this->CharName).Data.ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be3b370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_NpcViewTargetInfo::OnSetViewModel
          (UDS_VM_NpcViewTargetInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *this_00;
  FString *pFVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FDS_EntityBase *pFVar7;
  TWeakObjectPtr<AActor,FWeakObjectPtr> this_01;
  UObject *pUVar8;
  UClass *pUVar9;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar10;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar11;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar12;
  UDS_CharStatusData *pUVar13;
  FDS_StatusInfo *pFVar14;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> TVar15;
  FDS_SkillTotemTableRow *pFVar16;
  FDS_SkillTableRow *pFVar17;
  float fVar18;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [24];
  undefined8 local_230;
  FString local_228;
  FString local_218;
  FWeakObjectPtr local_208;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_200;
  TSharedPtr<FDS_ViewModelContext,1> local_1f0;
  ulong64 local_1e0;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [24];
  code *local_1a8;
  FWeakObjectPtr FStack_1a0;
  code *local_198;
  FWeakObjectPtr FStack_190;
  code *local_188;
  TRefCountPtr<ITextData> TStack_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f0.Object = param_1->Object;
  local_1f0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_200,&local_1f0);
  if (local_200.Object == (FDS_ViewModelContext_Entity *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_NpcViewTargetInfo::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0x2b,L"context is Invalid.");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.SharedReferenceCount.ReferenceController);
  }
  else {
    uVar2 = (local_200.Object)->EntityID;
    this->TargetEntityID = uVar2;
    this->TargetOwnerEntityID = uVar2;
    pFVar7 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
    if (pFVar7 == (FDS_EntityBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
    }
    else {
      if (pFVar7->EntityType == Totem) {
        this_01 = FDS_EntityBase::GetActorFromEntityID(&local_1e0);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
        if (pUVar8 != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
          iVar5 = (int)pUVar9->_padding_;
          if ((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar9->_padding_)) {
            this->TargetOwnerEntityID = *(ulong64 *)&pUVar8[0x2d].field_0x20;
          }
        }
      }
      TVar10 = UDS_CharInfoData::GetData((ulong64)local_1d8);
                    /* WARNING: Load size is inaccurate */
      (this->CharInfoData).WeakPtr = *TVar10.WeakPtr;
      TVar11 = UDS_CharStatusData::GetData((ulong64)local_1d0);
      this_00 = &this->CharStatusData;
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar11.WeakPtr;
      TVar12 = UDS_CharStateData::GetData((ulong64)local_1c8);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar12.WeakPtr;
      bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar4) {
        pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Hp);
        if (pFVar14 != (FDS_StatusInfo *)0x0) {
          local_248._8_4_ = 0;
          local_248._0_8_ = OnChangedHp;
          FStack_1a0 = (FWeakObjectPtr)((ulonglong)(uint)local_248._12_4_ << 0x20);
          local_1a8 = OnChangedHp;
          TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_VM_NpcViewTargetInfo>
                    ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                      *)&pFVar14->ChangeStatusDelegate,(UDS_VM_NpcViewTargetInfo *)local_1c0,
                     (pmf_af696a62 *)this);
        }
      }
      TVar15 = UDS_PlayerData::GetData((ulong64)(local_1c0 + 8),this->TargetOwnerEntityID,false);
                    /* WARNING: Load size is inaccurate */
      (this->PlayerData).WeakPtr = *TVar15.WeakPtr;
      bVar4 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
      if (bVar4) {
        local_248._8_4_ = 0;
        local_248._0_8_ = OnMainCharChanged;
        FStack_190 = (FWeakObjectPtr)((ulonglong)(uint)local_248._12_4_ << 0x20);
        local_198 = OnMainCharChanged;
        TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_NpcViewTargetInfo>
                  ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                    *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                   (UDS_VM_NpcViewTargetInfo *)(local_1c0 + 0x10),(pmf_e0d9f3ba *)this);
        local_248._8_4_ = 0;
        local_248._0_8_ = OnChangedAiRoundRecord;
        TStack_180.Reference = (ITextData *)((ulonglong)(uint)local_248._12_4_ << 0x20);
        local_188 = OnChangedAiRoundRecord;
        pUVar8 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_NpcViewTargetInfo>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,unsigned___int64),FDefaultDelegateUserPolicy>
                    *)&pUVar8[4].field_0x18,(UDS_VM_NpcViewTargetInfo *)local_248,
                   (pmf_e419773a *)this);
        pUVar8 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
        uVar2 = *(ulong64 *)&pUVar8[9].field_0x20;
        pUVar8 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
        OnChangedAiRoundRecord(this,*(ulong64 *)&pUVar8[9].field_0x18,uVar2);
      }
      if (pFVar7->EntityType == Totem) {
        pFVar16 = FDS_SkillTotemTableRow::GetRef(pFVar7->TableID,true);
        pFVar17 = FDS_SkillTableRow::GetRef((longlong)pFVar16->ID_TotemSkill,true);
        (**(code **)((pFVar17->ID_Name)._padding_ + 8))(&pFVar17->ID_Name);
        ::FString::PrintfImpl((FString *)(local_248 + 0x10),L"%s");
        pFVar1 = &this->UserName;
        if (pFVar1 != (FString *)(local_248 + 0x10)) {
          pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_248._16_8_;
          (this->UserName).Data.ArrayNum = (int)local_230;
          (this->UserName).Data.ArrayMax = local_230._4_4_;
          local_230 = 0;
          local_248._16_8_ = (FScriptContainerElement *)0x0;
        }
        if ((FScriptContainerElement *)local_248._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_248._16_8_);
        }
        this->LifeTime = pFVar16->SkillTotemTime;
      }
      else {
        UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_208);
        bVar4 = FWeakObjectPtr::IsValid(&local_208);
        if (bVar4) {
          pUVar8 = FWeakObjectPtr::Get(&local_208);
          (**(code **)(*(longlong *)pUVar8 + 0x2d0))(pUVar8);
          ::FString::PrintfImpl(&local_228,L"UserName : %s");
          pFVar1 = &this->UserName;
          if (pFVar1 != &local_228) {
            pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (pFVar1->Data).AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
            (this->UserName).Data.ArrayNum = local_228.Data.ArrayNum;
            (this->UserName).Data.ArrayMax = local_228.Data.ArrayMax;
            local_228.Data.ArrayNum = 0;
            local_228.Data.ArrayMax = 0;
            local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
        }
        bVar4 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
        if (bVar4) {
          FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
          ::FString::PrintfImpl(&local_218,L"CharacterName : %s");
          pFVar1 = &this->CharName;
          if (pFVar1 != &local_218) {
            pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (pFVar1->Data).AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
            (this->CharName).Data.ArrayNum = local_218.Data.ArrayNum;
            (this->CharName).Data.ArrayMax = local_218.Data.ArrayMax;
            local_218.Data.ArrayNum = 0;
            local_218.Data.ArrayMax = 0;
            local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
      }
      bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar4) {
        pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar5 = UDS_CharStatusData::GetCurrentStatus(pUVar13,Hp);
        pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar18 = UDS_CharStatusData::GetMaxStatus(pUVar13,Hp);
        OnChangedHp(this,(float)iVar5,fVar18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be43a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_NpcViewTargetInfo::OnUpdate(UDS_VM_NpcViewTargetInfo *this,float param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  UObject *pUVar7;
  UDS_CharStateData *pUVar8;
  UDS_SkillDataSet *this_00;
  FDS_SkillTableRow *pFVar9;
  UDS_AbnormalAbilityData *this_01;
  FDS_AbnormalInfo *this_02;
  FDS_SkillAbnormalTableRow *pFVar10;
  ADS_CameraManager *pAVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  float fVar15;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  FString local_a8;
  FString local_98;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FText local_68;
  FText local_58 [2];
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar3) {
    pFVar4 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this->ElapsedTime = param_1 + this->ElapsedTime;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      iVar12 = 0;
      if (pFVar4->EntityType == Totem) {
        ::FString::FString(&local_a8,"\n");
        ::FString::ConcatFF((FString *)&local_88,&this->UserName,&local_a8);
        iVar14 = local_88.ArrayNum + -1;
        if (local_88.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        bVar3 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
        if (bVar3) {
          fVar15 = this->LifeTime - this->ElapsedTime;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          pFVar5 = DS_Util::GetFloatRoundFormatString((FString *)local_58,fVar15,1,0,0);
          ::FString::FString(&local_a8,"Time Left : ");
          ::FString::ConcatFF((FString *)&local_88,&local_a8,pFVar5);
          iVar14 = local_88.ArrayNum + -1;
          if (local_88.ArrayNum == 0) {
            iVar14 = iVar12;
          }
          ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_58[0].TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_58[0].TextData.Reference);
          }
        }
        pFVar6 = FText::FromString(local_58,&local_98);
        FText::operator=(&this->CharInfoText,pFVar6);
        if (local_58[0].TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
        }
        local_a8.Data.ArrayNum = FFieldNotificationClassDescriptor::CharInfoText.BitNumber;
        local_a8.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FFieldNotificationClassDescriptor::CharInfoText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      }
      else {
        ::FString::FString(&local_a8,"\n");
        ::FString::ConcatFF((FString *)&local_88,&this->UserName,&local_a8);
        iVar14 = local_88.ArrayNum + -1;
        if (local_88.ArrayNum == 0) {
          iVar14 = iVar12;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_a8,"\n");
        ::FString::ConcatFF((FString *)&local_88,&this->CharName,&local_a8);
        iVar14 = local_88.ArrayNum + -1;
        if (local_88.ArrayNum == 0) {
          iVar14 = iVar12;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_a8,"\n");
        ::FString::ConcatFF((FString *)&local_88,&this->BattleInfo,&local_a8);
        iVar14 = local_88.ArrayNum + -1;
        if (local_88.ArrayNum == 0) {
          iVar14 = iVar12;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_a8,"\n");
        ::FString::ConcatFF((FString *)&local_88,&this->CurrentHP,&local_a8);
        iVar14 = local_88.ArrayNum + -1;
        if (local_88.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        bVar3 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
        if (bVar3) {
          ::FString::FString((FString *)local_58,"\n");
          pUVar7 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_a8,*(int *)(pUVar7 + 10));
          ::FString::FString((FString *)&local_68,"Damage Point : ");
          ::FString::ConcatFF(&local_78,(FString *)&local_68,&local_a8);
          ::FString::ConcatFF((FString *)&local_88,&local_78,(FString *)local_58);
          iVar14 = local_88.ArrayNum + -1;
          if (local_88.ArrayNum == 0) {
            iVar14 = 0;
          }
          ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_68.TextData.Reference);
          }
          if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_58[0].TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_58[0].TextData.Reference);
          }
          ::FString::FString(&local_78,"\n");
          pUVar7 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_a8,*(int *)&pUVar7[10].field_0x4);
          ::FString::FString((FString *)&local_68,"Heal Point : ");
          ::FString::ConcatFF((FString *)local_58,(FString *)&local_68,&local_a8);
          ::FString::ConcatFF((FString *)&local_88,(FString *)local_58,&local_78);
          iVar14 = local_88.ArrayNum + -1;
          if (local_88.ArrayNum == 0) {
            iVar14 = iVar12;
          }
          ::FString::AppendChars(&local_98,(wchar_t *)local_88.AllocatorInstance.Data,iVar14);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          if (local_58[0].TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_58[0].TextData.Reference);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_68.TextData.Reference);
          }
          if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        pFVar6 = FText::FromString(local_58,&local_98);
        FText::operator=(&this->CharInfoText,pFVar6);
        if (local_58[0].TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
        }
        local_a8.Data.ArrayNum = FFieldNotificationClassDescriptor::CharInfoText.BitNumber;
        local_a8.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FFieldNotificationClassDescriptor::CharInfoText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
        pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        local_res8[0].ObjectIndex = 0x10;
        local_res8[0].ObjectSerialNumber = 0;
        bVar3 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)local_res8);
        if (bVar3) {
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res18);
          bVar3 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar3) {
            this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res18);
            UDS_SkillDataSet::GetCurrentActiveSkillList(this_00,&local_88);
            iVar12 = local_88.ArrayNum;
            pFVar1 = (FWeakObjectPtr *)(local_88.AllocatorInstance.Data + (longlong)iVar12 * 8);
            FVar13.Data = local_88.AllocatorInstance.Data;
            while( true ) {
              if (local_88.ArrayNum != iVar12) {
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              if ((FWeakObjectPtr *)FVar13.Data == pFVar1) goto LAB_14be44097;
              local_res8[0] = *(FWeakObjectPtr *)FVar13.Data;
              bVar3 = FWeakObjectPtr::IsValid(local_res8);
              if (bVar3) break;
              FVar13.Data = FVar13.Data + 8;
            }
            SetStateInfo_Visibility(this,SelfHitTestInvisible);
            pUVar7 = FWeakObjectPtr::Get(local_res8);
            pFVar9 = FDS_SkillTableRow::GetRef((longlong)*(int *)&pUVar7[2].field_0x1c,true);
            (**(code **)((pFVar9->ID_Name)._padding_ + 8))(&pFVar9->ID_Name);
            ::FString::PrintfImpl((FString *)local_58,L"Skill : %s");
            iVar12 = FFieldNotificationClassDescriptor::CurrentState.BitNumber;
            FVar2 = FFieldNotificationClassDescriptor::CurrentState.FieldName;
            pFVar6 = FText::FromString(&local_68,(FString *)local_58);
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
            local_a8.Data.ArrayNum = iVar12;
            UMVVMViewModelBase::SetPropertyValue
                      ((UMVVMViewModelBase *)this,&this->CurrentState,pFVar6,(FFieldId *)&local_a8);
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58[0].TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_58[0].TextData.Reference);
            }
LAB_14be44097:
            if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          local_res8[0].ObjectIndex = 0x1000;
          local_res8[0].ObjectSerialNumber = 0;
          bVar3 = UDS_CharStateData::HasCharState(pUVar8,(EDS_CharState *)local_res8);
          if (bVar3) {
            local_res8[0].ObjectIndex._0_1_ = 0x30;
            UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                      ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&this->TargetEntityID);
            bVar3 = FWeakObjectPtr::IsValid(&local_res18);
            if (bVar3) {
              this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
              this_02 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_01,None);
              bVar3 = FDS_AbnormalInfo::IsValid(this_02);
              if (bVar3) {
                SetStateInfo_Visibility(this,SelfHitTestInvisible);
                pFVar10 = FDS_SkillAbnormalTableRow::GetRef((ulonglong)this_02->AbnormalType,true);
                (**(code **)((pFVar10->ID_Name)._padding_ + 8))(&pFVar10->ID_Name);
                ::FString::PrintfImpl((FString *)local_58,L"Abnormal : %s");
                iVar12 = FFieldNotificationClassDescriptor::CurrentState.BitNumber;
                FVar2 = FFieldNotificationClassDescriptor::CurrentState.FieldName;
                pFVar6 = FText::FromString(&local_68,(FString *)local_58);
                local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
                local_a8.Data.ArrayNum = iVar12;
                UMVVMViewModelBase::SetPropertyValue
                          ((UMVVMViewModelBase *)this,&this->CurrentState,pFVar6,
                           (FFieldId *)&local_a8);
                if (local_68.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                }
                if (local_58[0].TextData.Reference != (ITextData *)0x0) {
                  FMemory::Free(local_58[0].TextData.Reference);
                }
              }
            }
          }
          else {
            SetStateInfo_Visibility(this,Collapsed);
            pFVar6 = FText::GetEmpty();
            FText::operator=(&this->CurrentState,pFVar6);
            local_a8.Data.ArrayNum = FFieldNotificationClassDescriptor::CurrentState.BitNumber;
            local_a8.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)
                 FFieldNotificationClassDescriptor::CurrentState.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
          }
        }
        pAVar11 = ADS_CameraManager::GetInst();
        if ((pAVar11 != (ADS_CameraManager *)0x0) &&
           (local_res20 = pAVar11->BossEntityID, local_res20 != 0)) {
          local_res8[0].ObjectIndex._0_1_ = 0x1b;
          UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                    ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
          bVar3 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar3) {
            pUVar7 = FWeakObjectPtr::Get(&local_res18);
            this->bIsMainTarget = this->TargetEntityID == *(ulong64 *)&pUVar7[2].field_0x10;
            local_a8.Data.ArrayNum = FFieldNotificationClassDescriptor::bIsMainTarget.BitNumber;
            local_a8.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)
                 FFieldNotificationClassDescriptor::bIsMainTarget.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
          }
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetStateInfo_Visibility @ 14be51d10

void __thiscall
UDS_VM_NpcViewTargetInfo::SetStateInfo_Visibility
          (UDS_VM_NpcViewTargetInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CurrentStateVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentStateVisibility.FieldName;
  if (this->CurrentStateVisibility != param_1) {
    this->CurrentStateVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTargetInfo_Visibility @ 14be51d60

void __thiscall
UDS_VM_NpcViewTargetInfo::SetTargetInfo_Visibility
          (UDS_VM_NpcViewTargetInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
  if (this->TargetInfoVisibility != param_1) {
    this->TargetInfoVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// ShowTargetInfo @ 14be533c0

void __thiscall UDS_VM_NpcViewTargetInfo::ShowTargetInfo(UDS_VM_NpcViewTargetInfo *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TargetInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetInfoVisibility.FieldName;
  if (this->TargetInfoVisibility != SelfHitTestInvisible) {
    this->TargetInfoVisibility = SelfHitTestInvisible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55800

void __thiscall UDS_VM_NpcViewTargetInfo::UnbindModel(UDS_VM_NpcViewTargetInfo *this)

{
  bool bVar1;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar2;
  UObject *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStatusData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatusData).WeakPtr);
    pFVar2 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
    if (pFVar2 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->ChangeStatusDelegate
                 ,this);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
  if (bVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
    pUVar3 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x18,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnHpChangeEventDelegate,this);
  return;
}

