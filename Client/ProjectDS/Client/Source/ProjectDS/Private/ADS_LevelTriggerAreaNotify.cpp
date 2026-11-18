// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4dd460

UClass * __cdecl ADS_LevelTriggerAreaNotify::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerAreaNotify",
               &Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerAreaNotify,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelTriggerAreaNotify>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerAreaNotify>,local_res8,
               ADS_LevelTriggerActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton;
}

// ADS_LevelTriggerAreaNotify @ 14b4df670

ADS_LevelTriggerAreaNotify * __thiscall
ADS_LevelTriggerAreaNotify::ADS_LevelTriggerAreaNotify
          (ADS_LevelTriggerAreaNotify *this,FVTableHelper *param_1)

{
  ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerAreaNotify__6B_;
  return this;
}

// ADS_LevelTriggerAreaNotify @ 14b4df6a0

ADS_LevelTriggerAreaNotify * __thiscall
ADS_LevelTriggerAreaNotify::ADS_LevelTriggerAreaNotify(ADS_LevelTriggerAreaNotify *this)

{
  ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerAreaNotify__6B_;
  return this;
}

// ~ADS_LevelTriggerAreaNotify @ 14b4e0140

void __thiscall
ADS_LevelTriggerAreaNotify::~ADS_LevelTriggerAreaNotify(ADS_LevelTriggerAreaNotify *this)

{
  this->_padding_ = (longlong)&___7ADS_LevelTriggerAreaNotify__6B_;
  ADS_LevelTriggerActorBase::~ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e19d0

UClass * __cdecl ADS_LevelTriggerAreaNotify::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerAreaNotify",
               &Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerAreaNotify,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelTriggerAreaNotify>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerAreaNotify>,local_res8,
               ADS_LevelTriggerActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerAreaNotify.InnerSingleton;
}

// StaticRegisterNativesADS_LevelTriggerAreaNotify @ 14b4e2740

void __cdecl ADS_LevelTriggerAreaNotify::StaticRegisterNativesADS_LevelTriggerAreaNotify(void)

{
  return;
}

// CheckCondition @ 14bc31970

bool __thiscall ADS_LevelTriggerAreaNotify::CheckCondition(ADS_LevelTriggerAreaNotify *this)

{
  return true;
}

// CheckOverlap @ 14bc31d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
ADS_LevelTriggerAreaNotify::CheckOverlap
          (ADS_LevelTriggerAreaNotify *this,AActor *param_1,UPrimitiveComponent *param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res10 [2];
  AActor *local_res20;
  FWeakObjectPtr local_18 [2];
  
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_res10,(FObjectPtr)&local_res20);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
    if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == MainCharacter)) {
      (**(code **)(pFVar2->_padding_ + 0x160))(pFVar2,local_18);
      bVar1 = FWeakObjectPtr::IsValid(local_18);
      if (bVar1) {
        pFVar3 = ::FName::FName(local_res10,"LevelTrigger");
        FVar4 = UPrimitiveComponent::GetCollisionProfileName(param_2);
        return *(FName *)FVar4 == *pFVar3;
      }
    }
  }
  return false;
}

// ExecuteTriggerBeginEvent @ 14bc3d700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_LevelTriggerAreaNotify::ExecuteTriggerBeginEvent(ADS_LevelTriggerAreaNotify *this)

{
  UDS_ZoneManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ZoneManager::GetInst();
  if (this_00 == (UDS_ZoneManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_LevelTriggerAreaNotify::ExecuteTriggerBeginEvent",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xf,L"zoneManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ZoneManager::SetMiddleZoneID(this_00,this->AreaNotifyID,this->ZoneDeathPenaltyID);
  }
  return;
}

// ExecuteTriggerEndEvent @ 14bc3d8f0

void __thiscall ADS_LevelTriggerAreaNotify::ExecuteTriggerEndEvent(ADS_LevelTriggerAreaNotify *this)

{
  return;
}

// GetComponentProfile @ 14bc40060

FName __thiscall ADS_LevelTriggerAreaNotify::GetComponentProfile(ADS_LevelTriggerAreaNotify *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"LevelTrigger");
  return in_RDX;
}

// SetPropertiesChange @ 14bc641a0

void __thiscall ADS_LevelTriggerAreaNotify::SetPropertiesChange(ADS_LevelTriggerAreaNotify *this)

{
  int iVar1;
  
  iVar1 = (int)this->_padding_;
  if (0 < iVar1) {
    this->AreaNotifyID = *(int *)this->_padding_;
    if (1 < iVar1) {
      this->ZoneDeathPenaltyID = ((int *)this->_padding_)[1];
    }
  }
  return;
}

