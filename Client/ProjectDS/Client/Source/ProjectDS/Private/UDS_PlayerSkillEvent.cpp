// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b561ae0

UClass * __cdecl UDS_PlayerSkillEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillEvent",
               &Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillEvent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillEvent>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton;
}

// UDS_PlayerSkillEvent @ 14b5648c0

UDS_PlayerSkillEvent * __thiscall
UDS_PlayerSkillEvent::UDS_PlayerSkillEvent(UDS_PlayerSkillEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerSkillEvent__6B_;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_PlayerSkillEvent @ 14b564970

UDS_PlayerSkillEvent * __thiscall
UDS_PlayerSkillEvent::UDS_PlayerSkillEvent(UDS_PlayerSkillEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerSkillEvent__6B_;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillResetDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_PlayerSkillEvent @ 14b5652e0

void __thiscall UDS_PlayerSkillEvent::~UDS_PlayerSkillEvent(UDS_PlayerSkillEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PlayerSkillEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEquipSlotSelectDelegate).Delegate.field_0x8,
             *(int *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEquipSlotSelectDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSkillResetDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSkillResetDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSkillResetDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSkillResetDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSkillSlotOpenDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSkillSlotOpenDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSkillSlotOpenDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSkillSlotLevelUpDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSkillSlotLevelUpDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSkillSlotSelectDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSkillSlotSelectDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSkillSlotSelectDelegate);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b567c20

UClass * __cdecl UDS_PlayerSkillEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillEvent",
               &Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillEvent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillEvent>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillEvent @ 14b568160

void __cdecl UDS_PlayerSkillEvent::StaticRegisterNativesUDS_PlayerSkillEvent(void)

{
  return;
}

// GetEvent @ 14bf57420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PlayerSkillEvent * __cdecl UDS_PlayerSkillEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_PlayerSkillEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_PlayerSkillEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_PlayerSkillEvent *)0x0;
}

