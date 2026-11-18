// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4db600

UClass * __cdecl ADS_LevelTriggerKill::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerKill",
               &Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerKill,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelTriggerKill>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerKill>,local_res8,
               ADS_LevelTriggerActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton;
}

// ADS_LevelTriggerKill @ 14b4df6d0

ADS_LevelTriggerKill * __thiscall
ADS_LevelTriggerKill::ADS_LevelTriggerKill(ADS_LevelTriggerKill *this,FVTableHelper *param_1)

{
  ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerKill__6B_;
  return this;
}

// ADS_LevelTriggerKill @ 14b4df700

ADS_LevelTriggerKill * __thiscall
ADS_LevelTriggerKill::ADS_LevelTriggerKill(ADS_LevelTriggerKill *this)

{
  ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerKill__6B_;
  return this;
}

// ~ADS_LevelTriggerKill @ 14b4e0160

void __thiscall ADS_LevelTriggerKill::~ADS_LevelTriggerKill(ADS_LevelTriggerKill *this)

{
  this->_padding_ = (longlong)&___7ADS_LevelTriggerKill__6B_;
  ADS_LevelTriggerActorBase::~ADS_LevelTriggerActorBase((ADS_LevelTriggerActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1a90

UClass * __cdecl ADS_LevelTriggerKill::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerKill",
               &Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerKill,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelTriggerKill>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerKill>,local_res8,
               ADS_LevelTriggerActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerKill.InnerSingleton;
}

// StaticRegisterNativesADS_LevelTriggerKill @ 14b4e2750

void __cdecl ADS_LevelTriggerKill::StaticRegisterNativesADS_LevelTriggerKill(void)

{
  return;
}

// CheckCondition @ 14bc31980

bool __thiscall ADS_LevelTriggerKill::CheckCondition(ADS_LevelTriggerKill *this)

{
  return true;
}

// CheckOverlap @ 14bc31e70

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
ADS_LevelTriggerKill::CheckOverlap
          (ADS_LevelTriggerKill *this,AActor *param_1,UPrimitiveComponent *param_2)

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

// ExecuteTriggerBeginEvent @ 14bc3d7f0

void __thiscall ADS_LevelTriggerKill::ExecuteTriggerBeginEvent(ADS_LevelTriggerKill *this)

{
  return;
}

// ExecuteTriggerEndEvent @ 14bc3d900

void __thiscall ADS_LevelTriggerKill::ExecuteTriggerEndEvent(ADS_LevelTriggerKill *this)

{
  return;
}

// GetComponentProfile @ 14bc40090

FName __thiscall ADS_LevelTriggerKill::GetComponentProfile(ADS_LevelTriggerKill *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"LevelTrigger");
  return in_RDX;
}

// SetPropertiesChange @ 14bc641e0

void __thiscall ADS_LevelTriggerKill::SetPropertiesChange(ADS_LevelTriggerKill *this)

{
  if (0 < (int)this->_padding_) {
    this->DeathType = *(EDS_DeathType *)this->_padding_;
  }
  return;
}

