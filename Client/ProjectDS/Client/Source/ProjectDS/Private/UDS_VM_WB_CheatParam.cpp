// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// SetIsEssential_WrapperImpl @ 14b6fb940

void __cdecl UDS_VM_WB_CheatParam::SetIsEssential_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsEssential.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsEssential.FieldName;
  if (*(char *)((longlong)param_1 + 0xc0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xc0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetParamSwitcher_WrapperImpl @ 14b6fb950

void __cdecl UDS_VM_WB_CheatParam::SetParamSwitcher_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ParamSwitcher.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ParamSwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0xc4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xc4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetTextParamValue_WrapperImpl @ 14b6fb960

void __cdecl UDS_VM_WB_CheatParam::SetTextParamValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TextParamValue.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TextParamValue.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xd0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 200),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 200),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetHintTextParamValue_WrapperImpl @ 14b6fb970

void __cdecl UDS_VM_WB_CheatParam::SetHintTextParamValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::HintTextParamValue.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HintTextParamValue.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xe0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xd8),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xd8),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetCheckedState_WrapperImpl @ 14b6fb980

void __cdecl UDS_VM_WB_CheatParam::SetCheckedState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
  if (*(char *)((longlong)param_1 + 0xe8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCheckStateChanged_WrapperImpl @ 14b6fb990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatParam::SetCheckStateChanged_WrapperImpl(void *param_1,void *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_CheatData *pUVar5;
  FDS_CheatSlotInfo *pFVar6;
  FDS_CheatSlotParam *pFVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_158 [2];
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = UDS_DataManager::GetInst();
  if (this != (UDS_DataManager *)0x0) {
    UDS_DataManager::GetCheatData(this);
    bVar2 = FWeakObjectPtr::IsValid(aFStack_158);
    if (bVar2) {
      pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(aFStack_158);
      pFVar6 = UDS_CheatData::GetCheatSlotInfo(pUVar5,*(int *)((longlong)param_1 + 0x11c));
      if (*(int *)&(pFVar6->CheatSlotParamMap).field_0x8 !=
          *(int *)&(pFVar6->CheatSlotParamMap).field_0x34) {
        puVar8 = *(undefined1 **)&(pFVar6->CheatSlotParamMap).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(pFVar6->CheatSlotParamMap).field_0x38;
        }
        iVar3 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(pFVar6->CheatSlotParamMap).field_0x48 - 1U &
                                  *(uint *)((longlong)param_1 + 0x118)) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar6->CheatSlotParamMap + (longlong)iVar3 * 0x50) ==
                *(uint *)((longlong)param_1 + 0x118)) {
              pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(aFStack_158);
              pFVar6 = UDS_CheatData::GetCheatSlotInfo(pUVar5,*(int *)((longlong)param_1 + 0x11c));
              pFVar7 = TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                       ::FindChecked((TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                                      *)&pFVar6->CheatSlotParamMap,
                                     *(int *)((longlong)param_1 + 0x118));
              ::FString::FString(&FStack_148,"1");
              FVar1.Data = FStack_148.Data.AllocatorInstance.Data;
              iVar3 = (pFVar7->ParamValue).Data.ArrayNum;
              if (iVar3 == FStack_148.Data.ArrayNum) {
                if (iVar3 < 2) {
                  bVar2 = false;
                }
                else {
                  iVar3 = wcscmp((wchar_t *)(pFVar7->ParamValue).Data.AllocatorInstance.Data,
                                 (wchar_t *)FStack_148.Data.AllocatorInstance.Data);
                  bVar2 = iVar3 != 0;
                }
              }
              else {
                bVar2 = FStack_148.Data.ArrayNum + iVar3 != 1;
              }
              if (FVar1.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar1.Data);
              }
              pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(aFStack_158);
              pcVar9 = "0";
              if (bVar2 == true) {
                pcVar9 = "1";
              }
              ::FString::FString(&FStack_148,pcVar9);
              UDS_CheatData::SetCheatSlotInfo
                        (pUVar5,*(int *)((longlong)param_1 + 0x11c),
                         *(int *)((longlong)param_1 + 0x118),&FStack_148);
              if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
              }
              FStack_148.Data.ArrayNum = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
              FStack_148.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)
                   FFieldNotificationClassDescriptor::CheckedState.FieldName;
              if ((bool)*(char *)((longlong)param_1 + 0xe8) == bVar2) {
                return;
              }
              *(bool *)((longlong)param_1 + 0xe8) = bVar2;
              (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                        ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
              return;
            }
            iVar3 = *(int *)(*(longlong *)&pFVar6->CheatSlotParamMap + 0x48 + (longlong)iVar3 * 0x50
                            );
          } while (iVar3 != -1);
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_WB_CheatParam::OnCheckBoxCheckedEvent",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,199,L"cheatData is not valid");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
  }
  return;
}

// SetCheckBoxTextParamValue_WrapperImpl @ 14b6fb9a0

void __cdecl
UDS_VM_WB_CheatParam::SetCheckBoxTextParamValue_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FName FStack_28;
  int iStack_20;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             (FReadAccessScope *)&FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (plVar2 = *(longlong **)((longlong)param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_28);
  iVar4 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.FieldName;
  iVar5 = *(int *)((longlong)param_1 + 0xf8);
  if (iVar5 == *(int *)((longlong)param_2 + 8)) {
    if (iVar5 < 2) {
      return;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xf0),*(wchar_t **)param_2);
    bVar6 = iVar5 == 0;
  }
  else {
    bVar6 = iVar5 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar6) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xf0),param_2);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetTextCommittedEvent_WrapperImpl @ 14b6fb9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatParam::SetTextCommittedEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_DataManager *this;
  UDS_LogManager *pUVar3;
  UDS_CheatData *pUVar4;
  FDS_CheatSlotInfo *pFVar5;
  FString *pFVar6;
  undefined1 *puVar7;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_DataManager::GetInst();
  if (this != (UDS_DataManager *)0x0) {
    UDS_DataManager::GetCheatData(this);
    bVar1 = FWeakObjectPtr::IsValid(aFStack_148);
    if (bVar1) {
      pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get(aFStack_148);
      pFVar5 = UDS_CheatData::GetCheatSlotInfo(pUVar4,*(int *)((longlong)param_1 + 0x11c));
      if (*(int *)&(pFVar5->CheatSlotParamMap).field_0x8 !=
          *(int *)&(pFVar5->CheatSlotParamMap).field_0x34) {
        puVar7 = *(undefined1 **)&(pFVar5->CheatSlotParamMap).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(pFVar5->CheatSlotParamMap).field_0x38;
        }
        iVar2 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(pFVar5->CheatSlotParamMap).field_0x48 - 1U &
                                  *(uint *)((longlong)param_1 + 0x118)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar5->CheatSlotParamMap + (longlong)iVar2 * 0x50) ==
                *(uint *)((longlong)param_1 + 0x118)) {
              pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get(aFStack_148);
              pFVar6 = FText::ToString(param_2);
              UDS_CheatData::SetCheatSlotInfo
                        (pUVar4,*(int *)((longlong)param_1 + 0x11c),
                         *(int *)((longlong)param_1 + 0x118),pFVar6);
              pFVar6 = FText::ToString(param_2);
              SetTextParamValue(param_1,pFVar6);
              return;
            }
            iVar2 = *(int *)(*(longlong *)&pFVar5->CheatSlotParamMap + 0x48 + (longlong)iVar2 * 0x50
                            );
          } while (iVar2 != -1);
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_WB_CheatParam::OnTextCommittedEvent",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xaa,L"cheatData is not valid");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
  }
  return;
}

// StaticClass @ 14b6fb9c0

UClass * __cdecl UDS_VM_WB_CheatParam::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatParam",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatParam,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatParam>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatParam>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton;
}

// UDS_VM_WB_CheatParam @ 14b6ffe00

UDS_VM_WB_CheatParam * __thiscall
UDS_VM_WB_CheatParam::UDS_VM_WB_CheatParam(UDS_VM_WB_CheatParam *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->IsEssential = Hidden;
  this->ParamSwitcher = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnCheatParamDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatParam__6B_;
  *(undefined8 *)&(this->OnCheatParamDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCheatParamDelegate).field_0x10 = 0;
  (this->VM_Dropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->TextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextParamValue).Data.ArrayNum = 0;
  (this->TextParamValue).Data.ArrayMax = 0;
  (this->HintTextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintTextParamValue).Data.ArrayNum = 0;
  (this->HintTextParamValue).Data.ArrayMax = 0;
  (this->CheckStateChanged).bIsActivate = false;
  (this->CheckBoxTextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckBoxTextParamValue).Data.ArrayNum = 0;
  (this->CheckBoxTextParamValue).Data.ArrayMax = 0;
  FText::FText(&(this->TextCommittedEvent).NewText);
  this->ParamID = 0;
  this->CheatID = 0;
  return this;
}

// UDS_VM_WB_CheatParam @ 14b6ffec0

UDS_VM_WB_CheatParam * __thiscall
UDS_VM_WB_CheatParam::UDS_VM_WB_CheatParam(UDS_VM_WB_CheatParam *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->IsEssential = Hidden;
  this->ParamSwitcher = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnCheatParamDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatParam__6B_;
  *(undefined8 *)&(this->OnCheatParamDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCheatParamDelegate).field_0x10 = 0;
  (this->VM_Dropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->TextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextParamValue).Data.ArrayNum = 0;
  (this->TextParamValue).Data.ArrayMax = 0;
  (this->HintTextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintTextParamValue).Data.ArrayNum = 0;
  (this->HintTextParamValue).Data.ArrayMax = 0;
  (this->CheckStateChanged).bIsActivate = false;
  (this->CheckBoxTextParamValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckBoxTextParamValue).Data.ArrayNum = 0;
  (this->CheckBoxTextParamValue).Data.ArrayMax = 0;
  FText::FText(&(this->TextCommittedEvent).NewText);
  this->ParamID = 0;
  this->CheatID = 0;
  return this;
}

// ~UDS_VM_WB_CheatParam @ 14b702a00

void __thiscall UDS_VM_WB_CheatParam::~UDS_VM_WB_CheatParam(UDS_VM_WB_CheatParam *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatParam__6B_;
  pIVar1 = (this->TextCommittedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->CheckBoxTextParamValue).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HintTextParamValue).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TextParamValue).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCheatParamDelegate);
  pvVar3 = *(void **)&(this->OnCheatParamDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCheatParamDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705c10

IClassDescriptor * __thiscall
UDS_VM_WB_CheatParam::GetFieldNotificationDescriptor(UDS_VM_WB_CheatParam *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatParam::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7064d0

UClass * __cdecl UDS_VM_WB_CheatParam::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatParam",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatParam,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatParam>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatParam>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatParam.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatParam @ 14b707590

void __cdecl UDS_VM_WB_CheatParam::StaticRegisterNativesUDS_VM_WB_CheatParam(void)

{
  return;
}

// InitViewModel @ 14bfaf390

void __thiscall UDS_VM_WB_CheatParam::InitViewModel(UDS_VM_WB_CheatParam *this)

{
  UDS_VM_Dropdown *pUVar1;
  
  if ((this->VM_Dropdown).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Dropdown).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnCheckBoxCheckedEvent @ 14bfb79a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatParam::OnCheckBoxCheckedEvent
          (UDS_VM_WB_CheatParam *this,FDS_WidgetEventField *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  UDS_DataManager *this_00;
  UDS_LogManager *pUVar4;
  UDS_CheatData *pUVar5;
  FDS_CheatSlotInfo *pFVar6;
  FDS_CheatSlotParam *pFVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_DataManager::GetInst();
  if (this_00 != (UDS_DataManager *)0x0) {
    UDS_DataManager::GetCheatData(this_00);
    bVar2 = FWeakObjectPtr::IsValid(local_158);
    if (bVar2) {
      pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(local_158);
      pFVar6 = UDS_CheatData::GetCheatSlotInfo(pUVar5,this->CheatID);
      if (*(int *)&(pFVar6->CheatSlotParamMap).field_0x8 !=
          *(int *)&(pFVar6->CheatSlotParamMap).field_0x34) {
        puVar8 = *(undefined1 **)&(pFVar6->CheatSlotParamMap).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(pFVar6->CheatSlotParamMap).field_0x38;
        }
        iVar3 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(pFVar6->CheatSlotParamMap).field_0x48 - 1U &
                                  this->ParamID) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar6->CheatSlotParamMap + (longlong)iVar3 * 0x50) ==
                this->ParamID) {
              pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(local_158);
              pFVar6 = UDS_CheatData::GetCheatSlotInfo(pUVar5,this->CheatID);
              pFVar7 = TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                       ::FindChecked((TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                                      *)&pFVar6->CheatSlotParamMap,this->ParamID);
              ::FString::FString(&local_148,"1");
              FVar1.Data = local_148.Data.AllocatorInstance.Data;
              iVar3 = (pFVar7->ParamValue).Data.ArrayNum;
              if (iVar3 == local_148.Data.ArrayNum) {
                if (iVar3 < 2) {
                  bVar2 = false;
                }
                else {
                  iVar3 = wcscmp((wchar_t *)(pFVar7->ParamValue).Data.AllocatorInstance.Data,
                                 (wchar_t *)local_148.Data.AllocatorInstance.Data);
                  bVar2 = iVar3 != 0;
                }
              }
              else {
                bVar2 = local_148.Data.ArrayNum + iVar3 != 1;
              }
              if (FVar1.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar1.Data);
              }
              pUVar5 = (UDS_CheatData *)FWeakObjectPtr::Get(local_158);
              pcVar9 = "0";
              if (bVar2 == true) {
                pcVar9 = "1";
              }
              ::FString::FString(&local_148,pcVar9);
              UDS_CheatData::SetCheatSlotInfo(pUVar5,this->CheatID,this->ParamID,&local_148);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              local_148.Data.ArrayNum = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
              local_148.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)
                   FFieldNotificationClassDescriptor::CheckedState.FieldName;
              if (this->CheckedState == bVar2) {
                return;
              }
              this->CheckedState = bVar2;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
              return;
            }
            iVar3 = *(int *)(*(longlong *)&pFVar6->CheatSlotParamMap + 0x48 + (longlong)iVar3 * 0x50
                            );
          } while (iVar3 != -1);
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WB_CheatParam::OnCheckBoxCheckedEvent",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,199,L"cheatData is not valid");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnClickDropdownList @ 14bfb9720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WB_CheatParam::OnClickDropdownList(UDS_VM_WB_CheatParam *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UDS_DataManager *this_00;
  UDS_LogManager *pUVar5;
  UDS_CheatData *pUVar6;
  FDS_CheatSlotInfo *pFVar7;
  FDS_CheatSlotParam *pFVar8;
  undefined1 *puVar9;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188 [2];
  FDS_CheatSlotParam local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_DataManager::GetInst();
  if (this_00 != (UDS_DataManager *)0x0) {
    UDS_DataManager::GetCheatData(this_00);
    bVar2 = FWeakObjectPtr::IsValid(local_188);
    if (bVar2) {
      pUVar6 = (UDS_CheatData *)FWeakObjectPtr::Get(local_188);
      pFVar7 = UDS_CheatData::GetCheatSlotInfo(pUVar6,this->CheatID);
      if (*(int *)&(pFVar7->CheatSlotParamMap).field_0x8 !=
          *(int *)&(pFVar7->CheatSlotParamMap).field_0x34) {
        puVar9 = *(undefined1 **)&(pFVar7->CheatSlotParamMap).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(pFVar7->CheatSlotParamMap).field_0x38;
        }
        iVar3 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(pFVar7->CheatSlotParamMap).field_0x48 - 1U &
                                  this->ParamID) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar7->CheatSlotParamMap + (longlong)iVar3 * 0x50) ==
                this->ParamID) {
              pUVar6 = (UDS_CheatData *)FWeakObjectPtr::Get(local_188);
              pFVar7 = UDS_CheatData::GetCheatSlotInfo(pUVar6,this->CheatID);
              pFVar8 = TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                       ::FindChecked((TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                                      *)&pFVar7->CheatSlotParamMap,this->ParamID);
              FDS_CheatSlotParam::FDS_CheatSlotParam(&local_178,pFVar8);
              if ((-1 < param_1) && (param_1 < local_178.ParamValueList.ArrayNum)) {
                pUVar6 = (UDS_CheatData *)FWeakObjectPtr::Get(local_188);
                uVar4 = 0;
                if (param_1 < local_178.ParamValueList.ArrayNum) {
                  uVar4 = (uint)~param_1 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                UDS_CheatData::SetCheatSlotInfo
                          (pUVar6,this->CheatID,this->ParamID,
                           (FString *)
                           (local_178.ParamValueList.AllocatorInstance.Data +
                           (longlong)param_1 * 0x10));
              }
              if (local_178.ParamValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_178.ParamValue.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_178.ParamTextList.AllocatorInstance.Data,
                         local_178.ParamTextList.ArrayNum);
              if (local_178.ParamTextList.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_178.ParamTextList.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_178.ParamValueList.AllocatorInstance.Data,
                         local_178.ParamValueList.ArrayNum);
              goto LAB_14bfb996a;
            }
            iVar3 = *(int *)(*(longlong *)&pFVar7->CheatSlotParamMap + 0x48 + (longlong)iVar3 * 0x50
                            );
          } while (iVar3 != -1);
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WB_CheatParam::OnClickDropdownList",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x8e,L"cheatData is not valid");
        local_178.ParamValueList.AllocatorInstance.Data =
             (FScriptContainerElement *)local_138._padding_;
LAB_14bfb996a:
        if (local_178.ParamValueList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.ParamValueList.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bfc1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatParam::OnSetViewModel
          (UDS_VM_WB_CheatParam *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UDS_VM_Dropdown *this_00;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FDS_ViewModelContext_Dropdown *pFVar8;
  bool bVar9;
  int iVar10;
  UDS_DataManager *this_01;
  UDS_LogManager *pUVar11;
  UDS_CheatData *pUVar12;
  FDS_CheatSlotInfo *pFVar13;
  FDS_CheatSlotParam *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  size_t sVar17;
  ESlateVisibility EVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  ForAnyElementType FVar21;
  wchar_t *_Str;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_548 [32];
  undefined1 local_518 [8];
  FDelegateAllocation local_510;
  FWeakObjectPtr local_500;
  FDS_CheatSlotParam local_4f8;
  TSharedPtr<FDS_ViewModelContext_CheatParam,1> local_4b8;
  TSharedPtr<FDS_ViewModelContext,1> local_4a8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_498;
  FString local_488;
  UDS_VM_WB_CheatParam *local_478 [2];
  FName local_468;
  int local_460;
  FName local_458;
  int local_450;
  FName local_448;
  int local_440;
  FName local_438;
  int local_430;
  FName local_428;
  int local_420;
  FName local_418;
  int local_410;
  TSharedPtr<FDS_ViewModelContext,1> local_408;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDelegateAllocation *local_3c8;
  FReadAccessScope local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_01 = UDS_DataManager::GetInst();
  if (this_01 == (UDS_DataManager *)0x0) goto LAB_14bfc237b;
  UDS_DataManager::GetCheatData(this_01);
  bVar9 = FWeakObjectPtr::IsValid(&local_500);
  if (!bVar9) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_WB_CheatParam::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_3a8.Ptr,0x2a,L"cheatData is not valid");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    goto LAB_14bfc237b;
  }
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_WB_CheatParam::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_288.Ptr,0x30,L"InViewModelContext is nullptr");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    goto LAB_14bfc237b;
  }
  local_408.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_408.Object = pFVar2;
  SafeCast<FDS_ViewModelContext_CheatParam>(&local_4b8,&local_408);
  if (local_4b8.Object != (FDS_ViewModelContext_CheatParam *)0x0) {
    this->ParamID = (local_4b8.Object)->ParamID;
    this->CheatID = (local_4b8.Object)->CheatID;
    pUVar12 = (UDS_CheatData *)FWeakObjectPtr::Get(&local_500);
    pFVar13 = UDS_CheatData::GetCheatSlotInfo(pUVar12,this->CheatID);
    if (*(int *)&(pFVar13->CheatSlotParamMap).field_0x8 !=
        *(int *)&(pFVar13->CheatSlotParamMap).field_0x34) {
      puVar20 = *(undefined1 **)&(pFVar13->CheatSlotParamMap).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(pFVar13->CheatSlotParamMap).field_0x38;
      }
      iVar10 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(pFVar13->CheatSlotParamMap).field_0x48 - 1U & this->ParamID) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*(longlong *)&pFVar13->CheatSlotParamMap + (longlong)iVar10 * 0x50) ==
              this->ParamID) {
            pUVar12 = (UDS_CheatData *)FWeakObjectPtr::Get(&local_500);
            pFVar13 = UDS_CheatData::GetCheatSlotInfo(pUVar12,this->CheatID);
            pFVar14 = TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                      ::FindChecked((TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                                     *)&pFVar13->CheatSlotParamMap,this->ParamID);
            FDS_CheatSlotParam::FDS_CheatSlotParam(&local_4f8,pFVar14);
            iVar10 = FFieldNotificationClassDescriptor::ParamSwitcher.BitNumber;
            FVar5 = FFieldNotificationClassDescriptor::ParamSwitcher.FieldName;
            if (this->ParamSwitcher != (uint)local_4f8.ParamType) {
              this->ParamSwitcher = (uint)local_4f8.ParamType;
              local_460 = iVar10;
              local_468 = FVar5;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_468);
            }
            iVar10 = FFieldNotificationClassDescriptor::IsEssential.BitNumber;
            FVar5 = FFieldNotificationClassDescriptor::IsEssential.FieldName;
            EVar18 = Hidden;
            if (local_4f8.ParamType != None) {
              EVar18 = Visible;
            }
            if (this->IsEssential != EVar18) {
              this->IsEssential = EVar18;
              local_450 = iVar10;
              local_458 = FVar5;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_458);
            }
            if (((this->VM_Dropdown).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) ||
               (local_4f8.ParamType != DropDownList)) {
              if (local_4f8.ParamType == TextBox) {
                if ((local_4f8.ParamTextList.ArrayNum < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar7.Data = local_4f8.ParamTextList.AllocatorInstance.Data;
                iVar6 = FFieldNotificationClassDescriptor::HintTextParamValue.BitNumber;
                FVar5 = FFieldNotificationClassDescriptor::HintTextParamValue.FieldName;
                iVar10 = (this->HintTextParamValue).Data.ArrayNum;
                if (iVar10 == *(int *)(local_4f8.ParamTextList.AllocatorInstance.Data + 8)) {
                  if (1 < iVar10) {
                    iVar10 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)
                                        (this->HintTextParamValue).Data.AllocatorInstance.Data,
                                        *(wchar_t **)local_4f8.ParamTextList.AllocatorInstance.Data)
                    ;
                    bVar9 = iVar10 == 0;
                    goto LAB_14bfc2136;
                  }
                }
                else {
                  bVar9 = iVar10 + *(int *)(local_4f8.ParamTextList.AllocatorInstance.Data + 8) == 1
                  ;
LAB_14bfc2136:
                  if (!bVar9) {
                    ::FString::operator=(&this->HintTextParamValue,(FString *)FVar7.Data);
                    local_438 = FVar5;
                    local_430 = iVar6;
                    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_438);
                  }
                }
                SetTextParamValue(this,&local_4f8.ParamValue);
              }
              else if (local_4f8.ParamType == CheckBox) {
                if ((local_4f8.ParamTextList.ArrayNum < 1) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar7.Data = local_4f8.ParamTextList.AllocatorInstance.Data;
                iVar10 = this->ParamID;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &this->OnCheatParamDelegate,&local_3c0);
                if ((*(int *)&(this->OnCheatParamDelegate).field_0x10 != 0) &&
                   (plVar3 = *(longlong **)&(this->OnCheatParamDelegate).field_0x8,
                   plVar3 != (longlong *)0x0)) {
                  (**(code **)(*plVar3 + 0x68))(plVar3,iVar10,FVar7.Data);
                }
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_3c0);
                iVar6 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.BitNumber;
                FVar5 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.FieldName;
                iVar10 = (this->CheckBoxTextParamValue).Data.ArrayNum;
                if (iVar10 == *(int *)(FVar7.Data + 8)) {
                  if (1 < iVar10) {
                    iVar10 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)
                                        (this->CheckBoxTextParamValue).Data.AllocatorInstance.Data,
                                        *(wchar_t **)FVar7.Data);
                    bVar9 = iVar10 == 0;
                    goto LAB_14bfc223e;
                  }
                }
                else {
                  bVar9 = iVar10 + *(int *)(FVar7.Data + 8) == 1;
LAB_14bfc223e:
                  if (!bVar9) {
                    ::FString::operator=(&this->CheckBoxTextParamValue,(FString *)FVar7.Data);
                    local_428 = FVar5;
                    local_420 = iVar6;
                    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_428);
                  }
                }
                ::FString::FString(&local_488,"1");
                if (local_488.Data.ArrayNum == 0) {
                  _Str = L"";
LAB_14bfc2298:
                  sVar17 = wcslen(_Str);
                  iVar10 = ::FString::Find(&local_4f8.ParamValue,_Str,(int)sVar17,IgnoreCase,
                                           FromStart,-1);
                }
                else {
                  _Str = (wchar_t *)local_488.Data.AllocatorInstance.Data;
                  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  goto LAB_14bfc2298;
                  iVar10 = -1;
                }
                FVar5 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
                if (this->CheckedState != (iVar10 != -1)) {
                  local_410 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
                  this->CheckedState = iVar10 != -1;
                  local_418 = FVar5;
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_418);
                }
                if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_488.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_14bfc2319;
            }
            MakeContext<FDS_ViewModelContext_Dropdown>(&local_498);
            pFVar8 = local_498.Object;
            if (local_498.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
              pUVar11 = UDS_LogManager::GetInst();
              if (pUVar11 != (UDS_LogManager *)0x0) {
                pUVar11 = UDS_LogManager::GetInst();
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"UDS_VM_WB_CheatParam::OnSetViewModel",0x24,Yes);
                UDS_LogManager::PrintLog
                          (pUVar11,1,Warning,local_168.Ptr,0x4d,L"dropdownContext is invalid.");
                if ((void *)local_168._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_498.SharedReferenceCount.ReferenceController);
              goto LAB_14bfc2319;
            }
            if ((local_498.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)&pFVar8->_padding_ = 0x117;
            local_4a8.Object = (FDS_ViewModelContext *)OnClickDropdownList;
            local_4a8.SharedReferenceCount.ReferenceController =
                 local_408.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
            local_518 = (undefined1  [8])0x0;
            local_510.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_510.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                       (FWriteAccessScope *)&local_3e0);
            local_3c8 = &local_510;
            puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_510);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = &
                         ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar16 = FDelegateHandle::GenerateNewID();
              puVar15[2] = uVar16;
              *puVar15 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WB_CheatParam____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar15[3] = 0;
              local_478[0] = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)local_478);
              puVar15[4] = local_4a8.Object;
              puVar15[5] = local_4a8.SharedReferenceCount.ReferenceController;
            }
            if (local_3e0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->OnClickList,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_518);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                       (FWriteAccessScope *)&local_3f8);
            if ((local_510.DelegateSize != 0) &&
               (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_510.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_510,0,0,0x10);
              local_510.DelegateSize = 0;
            }
            if (local_3f8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
            }
            if (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_510.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_518);
            FVar7.Data = local_4f8.ParamValueList.AllocatorInstance.Data;
            pFVar22 = local_4f8.ParamValueList.AllocatorInstance.Data +
                      (longlong)local_4f8.ParamValueList.ArrayNum * 0x10;
            uVar19 = local_4f8.ParamValue.Data._8_8_;
            FVar21.Data = local_4f8.ParamValueList.AllocatorInstance.Data;
            if (local_4f8.ParamValueList.AllocatorInstance.Data == pFVar22) goto LAB_14bfc2050;
            goto LAB_14bfc2008;
          }
          iVar10 = *(int *)(*(longlong *)&pFVar13->CheatSlotParamMap + 0x48 +
                           (longlong)iVar10 * 0x50);
        } while (iVar10 != -1);
      }
    }
  }
  goto LAB_14bfc2362;
LAB_14bfc2008:
  do {
    iVar10 = *(int *)(FVar21.Data + 8);
    if (iVar10 == (int)uVar19) {
      if (1 < iVar10) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar21.Data,
                            (wchar_t *)local_4f8.ParamValue.Data.AllocatorInstance.Data);
        bVar9 = iVar10 == 0;
        uVar19 = local_4f8.ParamValue.Data._8_8_;
        goto LAB_14bfc202e;
      }
LAB_14bfc2040:
      iVar10 = (int)((longlong)FVar21.Data - (longlong)FVar7.Data >> 4);
      if (iVar10 != -1) {
        pFVar8->DropdownIndex = iVar10;
      }
      break;
    }
    bVar9 = iVar10 + (int)uVar19 == 1;
LAB_14bfc202e:
    if (bVar9) goto LAB_14bfc2040;
    FVar21.Data = FVar21.Data + 0x10;
  } while (FVar21.Data != pFVar22);
LAB_14bfc2050:
  this_00 = (this->VM_Dropdown).field0_0x0.DebugPtr;
  local_4a8.Object = (FDS_ViewModelContext *)local_498.Object;
  local_4a8.SharedReferenceCount.ReferenceController =
       local_498.SharedReferenceCount.ReferenceController;
  if (local_498.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_4a8);
  local_440 = FFieldNotificationClassDescriptor::VM_Dropdown.BitNumber;
  local_448 = FFieldNotificationClassDescriptor::VM_Dropdown.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_448);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.SharedReferenceCount.ReferenceController);
LAB_14bfc2319:
  if (local_4f8.ParamValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.ParamValue.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_4f8.ParamTextList.AllocatorInstance.Data,
             local_4f8.ParamTextList.ArrayNum);
  if (local_4f8.ParamTextList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.ParamTextList.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_4f8.ParamValueList.AllocatorInstance.Data,
             local_4f8.ParamValueList.ArrayNum);
  if (local_4f8.ParamValueList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.ParamValueList.AllocatorInstance.Data);
  }
LAB_14bfc2362:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b8.SharedReferenceCount.ReferenceController);
LAB_14bfc237b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEvent @ 14bfd00c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatParam::OnTextCommittedEvent
          (UDS_VM_WB_CheatParam *this,FDS_TextCommittedEventField *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_DataManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_CheatData *pUVar4;
  FDS_CheatSlotInfo *pFVar5;
  FString *pFVar6;
  undefined1 *puVar7;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_DataManager::GetInst();
  if (this_00 != (UDS_DataManager *)0x0) {
    UDS_DataManager::GetCheatData(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get(local_148);
      pFVar5 = UDS_CheatData::GetCheatSlotInfo(pUVar4,this->CheatID);
      if (*(int *)&(pFVar5->CheatSlotParamMap).field_0x8 !=
          *(int *)&(pFVar5->CheatSlotParamMap).field_0x34) {
        puVar7 = *(undefined1 **)&(pFVar5->CheatSlotParamMap).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(pFVar5->CheatSlotParamMap).field_0x38;
        }
        iVar2 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(pFVar5->CheatSlotParamMap).field_0x48 - 1U &
                                  this->ParamID) * 4);
        if (iVar2 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pFVar5->CheatSlotParamMap + (longlong)iVar2 * 0x50) ==
                this->ParamID) {
              pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get(local_148);
              pFVar6 = FText::ToString(&param_1->NewText);
              UDS_CheatData::SetCheatSlotInfo(pUVar4,this->CheatID,this->ParamID,pFVar6);
              pFVar6 = FText::ToString(&param_1->NewText);
              SetTextParamValue(this,pFVar6);
              return;
            }
            iVar2 = *(int *)(*(longlong *)&pFVar5->CheatSlotParamMap + 0x48 + (longlong)iVar2 * 0x50
                            );
          } while (iVar2 != -1);
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WB_CheatParam::OnTextCommittedEvent",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xaa,L"cheatData is not valid");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// SetCheckBoxTextParamValue @ 14bfd6da0

void __thiscall
UDS_VM_WB_CheatParam::SetCheckBoxTextParamValue(UDS_VM_WB_CheatParam *this,FString *param_1)

{
  int iVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FName local_28;
  int local_20;
  
  iVar5 = this->ParamID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCheatParamDelegate,
             (FReadAccessScope *)&local_28);
  if ((*(int *)&(this->OnCheatParamDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnCheatParamDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar5,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  iVar4 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CheckBoxTextParamValue.FieldName;
  iVar5 = (this->CheckBoxTextParamValue).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar5 == iVar1) {
    if (iVar5 < 2) {
      return;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->CheckBoxTextParamValue).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar6 = iVar5 == 0;
  }
  else {
    bVar6 = iVar5 + iVar1 == 1;
  }
  if (!bVar6) {
    ::FString::operator=(&this->CheckBoxTextParamValue,param_1);
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetCheckedState @ 14bfd6ee0

void __thiscall UDS_VM_WB_CheatParam::SetCheckedState(UDS_VM_WB_CheatParam *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
  if (this->CheckedState != *param_1) {
    this->CheckedState = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetHintTextParamValue @ 14bfda3f0

void __thiscall
UDS_VM_WB_CheatParam::SetHintTextParamValue(UDS_VM_WB_CheatParam *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::HintTextParamValue.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::HintTextParamValue.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->HintTextParamValue).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->HintTextParamValue).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->HintTextParamValue,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsEssential @ 14bfda9c0

void __thiscall
UDS_VM_WB_CheatParam::SetIsEssential(UDS_VM_WB_CheatParam *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsEssential.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEssential.FieldName;
  if (this->IsEssential != *param_1) {
    this->IsEssential = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetParamSwitcher @ 14bfdd240

void __thiscall UDS_VM_WB_CheatParam::SetParamSwitcher(UDS_VM_WB_CheatParam *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ParamSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ParamSwitcher.FieldName;
  if (this->ParamSwitcher != *param_1) {
    this->ParamSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTextParamValue @ 14bfddc90

void __thiscall UDS_VM_WB_CheatParam::SetTextParamValue(UDS_VM_WB_CheatParam *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::TextParamValue.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::TextParamValue.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->TextParamValue).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->TextParamValue).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->TextParamValue,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

