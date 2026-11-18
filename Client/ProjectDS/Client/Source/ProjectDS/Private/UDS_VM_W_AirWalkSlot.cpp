// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b709fd0

UClass * __cdecl UDS_VM_W_AirWalkSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton;
}

// UDS_VM_W_AirWalkSlot @ 14b710aa0

UDS_VM_W_AirWalkSlot * __thiscall
UDS_VM_W_AirWalkSlot::UDS_VM_W_AirWalkSlot(UDS_VM_W_AirWalkSlot *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot__6B_;
  (this->AirwalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->AirWalkStepList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AirWalkStepList).ArrayNum = 0;
  (this->AirWalkStepList).ArrayMax = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_W_AirWalkSlot @ 14b710b10

UDS_VM_W_AirWalkSlot * __thiscall
UDS_VM_W_AirWalkSlot::UDS_VM_W_AirWalkSlot(UDS_VM_W_AirWalkSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot__6B_;
  (this->AirwalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->AirWalkStepList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AirWalkStepList).ArrayNum = 0;
  (this->AirWalkStepList).ArrayMax = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_W_AirWalkSlot @ 14b7130e0

void __thiscall UDS_VM_W_AirWalkSlot::~UDS_VM_W_AirWalkSlot(UDS_VM_W_AirWalkSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot__6B_;
  pFVar1 = (this->AirWalkStepList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b717710

UClass * __cdecl UDS_VM_W_AirWalkSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot.InnerSingleton;
}

// GetTickableTickType @ 14b718790

ETickableTickType __thiscall UDS_VM_W_AirWalkSlot::GetTickableTickType(UDS_VM_W_AirWalkSlot *this)

{
  return Conditional;
}

// IsUpdate @ 14b718860

bool __thiscall UDS_VM_W_AirWalkSlot::IsUpdate(UDS_VM_W_AirWalkSlot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_AirWalkSlot @ 14b718970

void __cdecl UDS_VM_W_AirWalkSlot::StaticRegisterNativesUDS_VM_W_AirWalkSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedAirWalkData @ 14b71a030

void __cdecl
UDS_VM_W_AirWalkSlot::execOnChangedAirWalkData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x340))(param_1,local_res8);
  return;
}

// BindModel @ 14bf9be00

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

void __thiscall UDS_VM_W_AirWalkSlot::BindModel(UDS_VM_W_AirWalkSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  FName local_res8 [2];
  code *local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong uStack_20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (!bVar2) goto LAB_14bf9bf17;
  pUVar3 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_W_AirWalkSlot::OnChangedAirWalkData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf9be8d:
    pcVar5 = &DAT_00000002;
LAB_14bf9be92:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14bf9be8d;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14bf9be92;
  }
  ::FName::FName(local_res8,pcVar5);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = _vcall__832__flat______;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_AddDynamic<UDS_VM_W_AirWalkSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *)
             (pUVar3 + 1),this,(pmf_b544d72c *)&local_38,local_res8[0]);
LAB_14bf9bf17:
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_38 = OnMainCharChanged;
  local_28 = OnMainCharChanged;
  uStack_20 = uStack_30;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_W_AirWalkSlot>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_W_AirWalkSlot *)(local_res8 + 1),(pmf_0b8721f6 *)this);
  return;
}

// InitViewModel @ 14bfaf880

void __thiscall UDS_VM_W_AirWalkSlot::InitViewModel(UDS_VM_W_AirWalkSlot *this)

{
  UDS_VM_Progress *pUVar1;
  UDS_VM_StackSkillCount *pUVar2;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if ((this->VM_Cooldown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Cooldown).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_AvailableTime).field0_0x0.DebugPtr = pUVar1;
  }
  if (this->_padding_ == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
  }
  if (this->_padding_ == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
  }
  return;
}

// OnChangedAirWalkData @ 14bfb5c10

void __thiscall
UDS_VM_W_AirWalkSlot::OnChangedAirWalkData(UDS_VM_W_AirWalkSlot *this,UDS_DataBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_VM_Progress *pUVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UDS_AirWalkAbilityData *pUVar7;
  FDS_AirWalkStepInfo *this_00;
  UObject *pUVar8;
  char cVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  double dVar12;
  undefined1 local_res8 [8];
  FName local_48;
  int local_40;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (bVar6) {
    iVar2 = (this->AirWalkStepList).ArrayNum;
    pFVar10 = (this->AirWalkStepList).AllocatorInstance.Data;
    pFVar1 = pFVar10 + iVar2;
    while( true ) {
      if ((this->AirWalkStepList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_AirWalkStep,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      this_00 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar7,(EDS_AirWalkStep)*pFVar10);
      if (0 < this_00->IconID) {
        UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,this_00->IconID);
      }
      iVar5 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber
      ;
      FVar4 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName
      ;
      if (this_00->bToggleStep == true) {
        cVar9 = '\x01';
        if (this_00->IsActive != false) {
          cVar9 = '\x04';
        }
        if ((char)this->_padding_ != cVar9) {
          *(char *)&this->_padding_ = cVar9;
          local_40 = iVar5;
          local_48 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
        }
      }
      pUVar3 = (this->VM_Cooldown).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_VM_Progress *)0x0) {
        UDS_VM_Progress::SetIncreaseType(pUVar3,DeltaTime);
        pUVar3 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar8 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
        UDS_VM_Progress::SetMaxValue(pUVar3,(float)*(double *)&pUVar8[5].field_0x18);
        pUVar3 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar8 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
        UDS_VM_Progress::SetTargetValue(pUVar3,(float)*(double *)&pUVar8[5].field_0x18);
        pUVar3 = (this->VM_Cooldown).field0_0x0.DebugPtr;
        pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
        dVar12 = UDS_AirWalkAbilityData::GetElapsedTimeCooltime(pUVar7);
        UDS_VM_Progress::SetCurrentValue(pUVar3,(float)dVar12);
      }
      pUVar3 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
      if ((pUVar3 == (UDS_VM_Progress *)0x0) || (this_00->ChargingTimeMax <= 0.0)) {
LAB_14bfb5e22:
        pFVar10 = pFVar10 + 1;
      }
      else {
        if (this_00->IsActive != true) {
          UDS_VM_Progress::SetMaxValue(pUVar3,0.0);
          UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
          UDS_VM_Progress::SetCurrentValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
          goto LAB_14bfb5e22;
        }
        UDS_VM_Progress::SetIncreaseType(pUVar3,DeltaTime);
        UDS_VM_Progress::SetMaxValue
                  ((this->VM_AvailableTime).field0_0x0.DebugPtr,this_00->ChargingTimeMax);
        UDS_VM_Progress::SetTargetValue
                  ((this->VM_AvailableTime).field0_0x0.DebugPtr,this_00->ChargingTimeMax);
        pUVar3 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
        fVar11 = FDS_AirWalkStepInfo::GetElapsedTimeSinceStepStart(this_00);
        UDS_VM_Progress::SetCurrentValue(pUVar3,fVar11);
        pFVar10 = pFVar10 + 1;
      }
    }
  }
  return;
}

// OnClickSkillSlot @ 14bfbaa50

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

void __thiscall UDS_VM_W_AirWalkSlot::OnClickSkillSlot(UDS_VM_W_AirWalkSlot *this)

{
  bool bVar1;
  UDS_DataBase *this_00;
  FDS_EntityBase *this_01;
  ulong64 local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    local_res8 = UDS_DataBase::GetEntityID(this_00);
    this_01 = FDS_EntityBase::GetEntityBase(&local_res8);
    if (this_01 != (FDS_EntityBase *)0x0) {
      FDS_EntityBase::TryActivateAirWalkAbility(this_01,this->AirWalkAbilityType);
    }
  }
  return;
}

// OnCloseInit @ 14bfbbd20

void __thiscall UDS_VM_W_AirWalkSlot::OnCloseInit(UDS_VM_W_AirWalkSlot *this)

{
  this->_padding_ = 0;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return;
}

// OnMainCharChanged @ 14bfbf210

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
UDS_VM_W_AirWalkSlot::OnMainCharChanged
          (UDS_VM_W_AirWalkSlot *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar4;
  char *pcVar5;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar6;
  char *pcVar7;
  ulong64 local_res20;
  FName local_68 [2];
  code *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  code *local_38;
  longlong lStack_30;
  
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  this_00 = &this->AirwalkAbilityData;
  local_res20 = param_2->EntityID;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                    ((ulong64 *)&local_58,(EDS_AbilityTagType *)&local_res20);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar4.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) goto LAB_14bfbf39c;
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar5 = strstr("&UDS_VM_W_AirWalkSlot::OnChangedAirWalkData","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bfbf30d:
    pcVar7 = &DAT_00000002;
LAB_14bfbf312:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bfbf30d;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bfbf312;
  }
  ::FName::FName(local_68,pcVar7);
  local_58 = _vcall__832__flat______;
  uStack_50 = 0;
  lStack_30 = (ulonglong)uStack_4c << 0x20;
  local_38 = _vcall__832__flat______;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_AddDynamic<UDS_VM_W_AirWalkSlot>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *)
             (pUVar3 + 1),this,(pmf_b544d72c *)&local_38,local_68[0]);
LAB_14bfbf39c:
  TVar6 = UDS_CharStateData::GetData((ulong64)local_48);
                    /* WARNING: Load size is inaccurate */
  (this->CharStateData).WeakPtr = *TVar6.WeakPtr;
  return;
}

// OnSetViewModel @ 14bfc3a10

void __thiscall
UDS_VM_W_AirWalkSlot::OnSetViewModel
          (UDS_VM_W_AirWalkSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<EDS_AirWalkStep,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *_Src;
  UDS_VM_StackSkillCount *pUVar6;
  code *pcVar7;
  FName FVar8;
  FDS_ViewModelContext_InputKey *pFVar9;
  bool bVar10;
  EDS_AbilityTagType EVar11;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar12;
  UObject *pUVar13;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar14;
  UDS_VM_InputKey *pUVar15;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_b8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TVar12 = UDS_CharBuffData::GetData((ulong64)local_68);
  this->_padding_ = *(longlong *)TVar12.WeakPtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_AirWalkSlot>(&local_c8,&local_78);
  if (local_c8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_c8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->AirwalkAbilityData).WeakPtr = ((local_c8.Object)->AirwalkAbilityData).WeakPtr;
    bVar10 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
    if (bVar10) {
      if (0 < ((local_c8.Object)->AirWalkStepList).ArrayNum) {
        if ((((local_c8.Object)->AirWalkStepList).ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        EVar11 = UDS_AirWalkAbilityData::GetAirWalkAbilityTagType
                           ((EDS_AirWalkStep)
                            *((local_c8.Object)->AirWalkStepList).AllocatorInstance.Data);
        this->AirWalkAbilityType = EVar11;
      }
      if ((local_c8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar3 = &this->AirWalkStepList;
      if (pTVar3 != &(local_c8.Object)->AirWalkStepList) {
        iVar4 = ((local_c8.Object)->AirWalkStepList).ArrayNum;
        piVar1 = &(this->AirWalkStepList).ArrayMax;
        _Src = ((local_c8.Object)->AirWalkStepList).AllocatorInstance.Data;
        (this->AirWalkStepList).ArrayNum = iVar4;
        if ((iVar4 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4);
          }
        }
      }
      pcVar7 = *(code **)(this->_padding_ + 0x340);
      pUVar13 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      (*pcVar7)(this,pUVar13);
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      TVar14 = UDS_CharStateData::GetData((ulong64)local_60);
      plVar2 = &this->_padding_;
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar14.WeakPtr;
      iVar4 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.BitNumber;
      FVar8 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsSkillExist.FieldName;
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
        local_a0 = iVar4;
        local_a8 = FVar8;
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_a8);
      }
      if ((local_c8.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar8 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
      if ((local_c8.Object)->bShowInputKey == false) {
        if ((char)this->_padding_ != '\x01') {
          local_90 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.
                     BitNumber;
          *(undefined1 *)&this->_padding_ = 1;
          local_98 = FVar8;
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_98);
        }
      }
      else {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_b8);
        pFVar9 = local_b8.Object;
        if ((local_b8.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)&pFVar9->_padding_ = 0x15d;
        pFVar9->KeyActionType = (local_c8.Object)->KeyActionType;
        FVar8 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
        if ((char)this->_padding_ != '\x04') {
          local_80 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.
                     BitNumber;
          *(undefined1 *)&this->_padding_ = 4;
          local_88 = FVar8;
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_88);
        }
        if (this->_padding_ == 0) {
          local_58.Object = (FDS_ViewModelContext *)local_b8.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_b8.SharedReferenceCount.ReferenceController;
          if (local_b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pUVar15 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_58);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar15 != (UDS_VM_InputKey *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
          this->_padding_ = (longlong)pUVar15;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
      }
      pUVar6 = (UDS_VM_StackSkillCount *)this->_padding_;
      if (pUVar6 != (UDS_VM_StackSkillCount *)0x0) {
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = 0;
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        UDS_VM_StackSkillCount::UpdateStackCount
                  (pUVar6,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res8);
      }
      pUVar6 = (UDS_VM_StackSkillCount *)this->_padding_;
      if (pUVar6 != (UDS_VM_StackSkillCount *)0x0) {
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res20 = 0;
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
        UDS_VM_StackSkillCount::UpdateStackCount
                  (pUVar6,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0290

void __thiscall UDS_VM_W_AirWalkSlot::OnUpdate(UDS_VM_W_AirWalkSlot *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  UDS_VM_Progress *pUVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  UDS_CharStateData *pUVar8;
  UDS_AirWalkAbilityData *pUVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  float fVar13;
  EDS_CharState local_res8;
  FName local_38;
  int local_30;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (bVar6) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (bVar6) {
      pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res8 = Battle;
      bVar6 = UDS_CharStateData::HasCharState(pUVar8,&local_res8);
      if (bVar6) {
        pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        local_res8 = Battle;
        bVar6 = UDS_CharStateData::HasCharState(pUVar8,&local_res8);
        FVar5 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
                FieldName;
        if ((bool)(char)this->_padding_ != bVar6) {
          local_30 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
                     BitNumber;
          *(bool *)&this->_padding_ = bVar6;
          local_38 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
      }
    }
    pUVar4 = (this->VM_Cooldown).field0_0x0.DebugPtr;
    if (pUVar4 != (UDS_VM_Progress *)0x0) {
      bVar6 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar4);
      iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
              BitNumber;
      FVar5 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
              FieldName;
      cVar2 = *(char *)((longlong)&this->_padding_ + 4);
      if (bVar6) {
        if (cVar2 != '\x04') {
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 4;
          local_30 = iVar3;
          local_38 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
        fVar13 = UDS_VM_Progress::GetCurrentPercent((this->VM_Cooldown).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar13);
        fVar13 = UDS_VM_Progress::GetCurrentValue((this->VM_Cooldown).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetCooldownValue((UDS_VM_W_CommonSkillSlot *)this,fVar13);
      }
      else if (cVar2 != '\x01') {
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        local_30 = iVar3;
        local_38 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
    }
    pUVar4 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
    if (pUVar4 != (UDS_VM_Progress *)0x0) {
      bVar6 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar4);
      iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_AvailableProgress.
              BitNumber;
      FVar5 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_AvailableProgress.
              FieldName;
      cVar2 = *(char *)((longlong)&this->_padding_ + 6);
      if (bVar6) {
        if (cVar2 != '\x04') {
          *(undefined1 *)((longlong)&this->_padding_ + 6) = 4;
          local_30 = iVar3;
          local_38 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
        fVar13 = UDS_VM_Progress::GetCurrentPercent((this->VM_AvailableTime).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar13)
        ;
      }
      else if (cVar2 != '\x01') {
        *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
        local_30 = iVar3;
        local_38 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
    }
    bVar6 = false;
    pUVar9 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    pUVar10 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar9,pUVar10[4].field_0x20);
    pFVar11 = (this->AirWalkStepList).AllocatorInstance.Data;
    iVar3 = (this->AirWalkStepList).ArrayNum;
    pFVar1 = pFVar11 + iVar3;
    while( true ) {
      if ((this->AirWalkStepList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_AirWalkStep,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar11 == pFVar1) break;
      pUVar9 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar9,(EDS_AirWalkStep)*pFVar11);
      pUVar9 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
      bVar7 = UDS_AirWalkAbilityData::IsNextStepPossible(pUVar9,(EDS_AirWalkStep)*pFVar11);
      FVar5 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
              FieldName;
      bVar12 = false;
      if (!bVar6) {
        if (bVar7) {
          bVar6 = true;
        }
        bVar12 = !bVar6;
      }
      if ((bool)(char)this->_padding_ != bVar12) {
        local_30 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
                   BitNumber;
        *(bool *)&this->_padding_ = bVar12;
        local_38 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
      pFVar11 = pFVar11 + 1;
    }
  }
  return;
}

// SetAirWalkIconID @ 14bfd60a0

void __thiscall UDS_VM_W_AirWalkSlot::SetAirWalkIconID(UDS_VM_W_AirWalkSlot *this,int param_1)

{
  longlong *plVar1;
  char cVar2;
  FDS_ResourceIconTableRow *pFVar3;
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_Icon.BitNumber;
  FStack_18 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_Icon.FieldName;
  if (param_1 == 0) {
    if (*(char *)((longlong)&this->_padding_ + 7) != '\x01') {
      *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
      return;
    }
  }
  else {
    pFVar3 = FDS_ResourceIconTableRow::Get((longlong)param_1,true);
    iStack_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_Icon.BitNumber;
    FStack_18 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_Icon.FieldName;
    cVar2 = *(char *)((longlong)&this->_padding_ + 7);
    if (pFVar3 == (FDS_ResourceIconTableRow *)0x0) {
      if (cVar2 != '\x01') {
        *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
        return;
      }
    }
    else {
      plVar1 = &this->_padding_;
      if (cVar2 != '\x04') {
        *(undefined1 *)((longlong)&this->_padding_ + 7) = 4;
        (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
      }
      iStack_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IconID.BitNumber;
      FStack_18 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IconID.FieldName;
      if ((int)this->_padding_ != param_1) {
        *(int *)&this->_padding_ = param_1;
        (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
      }
    }
  }
  return;
}

// SetInputKeyPosition @ 14bfda670

void __thiscall
UDS_VM_W_AirWalkSlot::SetInputKeyPosition
          (UDS_VM_W_AirWalkSlot *this,EDS_KeyActionType *param_1,bool param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  FDS_ViewModelContext_InputKey *pFVar4;
  bool bVar5;
  UDS_VM_InputKey *pUVar6;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_40 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.BitNumber;
  local_48 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
  if (param_2) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar4 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x15d;
    pFVar4->KeyActionType = *param_1;
    iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.BitNumber;
    FVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
    if ((char)this->_padding_ != '\x04') {
      *(undefined1 *)&this->_padding_ = 4;
      local_30 = iVar3;
      local_38 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    if (this->_padding_ == 0) {
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_InputKey *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      this->_padding_ = (longlong)pUVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    return;
  }
  return;
}

// UnbindModel @ 14bfdf440

void __thiscall UDS_VM_W_AirWalkSlot::UnbindModel(UDS_VM_W_AirWalkSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_VM_W_CommonSkillSlot::UnbindModel((UDS_VM_W_CommonSkillSlot *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->AirwalkAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->AirwalkAbilityData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

