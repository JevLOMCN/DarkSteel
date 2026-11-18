// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 11

// StaticClass @ 146e306a0

UClass * __cdecl ANavSystemConfigOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavSystemConfigOverride",
               &Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton,
               StaticRegisterNativesANavSystemConfigOverride,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavSystemConfigOverride>,
               InternalVTableHelperCtorCaller<ANavSystemConfigOverride>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton;
}

// ANavSystemConfigOverride @ 146e35b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavSystemConfigOverride * __thiscall
ANavSystemConfigOverride::ANavSystemConfigOverride
          (ANavSystemConfigOverride *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANavSystemConfigOverride__6B_;
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  return this;
}

// ANavSystemConfigOverride @ 146e35bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavSystemConfigOverride * __thiscall
ANavSystemConfigOverride::ANavSystemConfigOverride
          (ANavSystemConfigOverride *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANavSystemConfigOverride__6B_;
  (this->NavigationSystemConfig).field0_0x0.DebugPtr = (UNavigationSystemConfig *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"SceneComp");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pUVar5[10].field_0x1b = 0;
  AActor::SetHidden((AActor *)this,true);
  AActor::SetCanBeDamaged((AActor *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  return this;
}

// ~ANavSystemConfigOverride @ 146e37340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavSystemConfigOverride::~ANavSystemConfigOverride(ANavSystemConfigOverride *this)

{
  this->_padding_ = (longlong)&___7ANavSystemConfigOverride__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AppendToNavSystem @ 146e40dc0

void __thiscall
ANavSystemConfigOverride::AppendToNavSystem
          (ANavSystemConfigOverride *this,UNavigationSystemBase *param_1)

{
  if ((this->NavigationSystemConfig).field0_0x0.DebugPtr != (UNavigationSystemConfig *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e40dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
    return;
  }
  return;
}

// ApplyConfig @ 146e40df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavSystemConfigOverride::ApplyConfig(ANavSystemConfigOverride *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    if (((pUVar1->NavigationSystem).field0_0x0.DebugPtr == (UNavigationSystemBase *)0x0) ||
       (this->OverridePolicy == Override)) {
                    /* WARNING: Could not recover jumptable at 0x000146e40e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x760))(this);
      return;
    }
    if (this->OverridePolicy == Append) {
                    /* WARNING: Could not recover jumptable at 0x000146e40e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x768))(this);
      return;
    }
  }
  return;
}

// BeginPlay @ 146e42100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavSystemConfigOverride::BeginPlay(ANavSystemConfigOverride *this)

{
  UWorld *pUVar1;
  
  AActor::BeginPlay((AActor *)this);
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    if (((pUVar1->NavigationSystem).field0_0x0.DebugPtr == (UNavigationSystemBase *)0x0) ||
       (this->OverridePolicy == Override)) {
                    /* WARNING: Could not recover jumptable at 0x000146e42153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x760))(this);
      return;
    }
    if (this->OverridePolicy == Append) {
                    /* WARNING: Could not recover jumptable at 0x000146e42141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x768))(this);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 146e5d140

UClass * __cdecl ANavSystemConfigOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavSystemConfigOverride",
               &Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton,
               StaticRegisterNativesANavSystemConfigOverride,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavSystemConfigOverride>,
               InternalVTableHelperCtorCaller<ANavSystemConfigOverride>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavSystemConfigOverride.InnerSingleton;
}

// OverrideNavSystem @ 146e67660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavSystemConfigOverride::OverrideNavSystem(ANavSystemConfigOverride *this)

{
  uchar uVar1;
  bool bVar2;
  UWorld *this_00;
  AWorldSettings *this_01;
  FNavigationSystemRunMode FVar3;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetWorldSettings(this_00,false,true);
    if (this_01 != (AWorldSettings *)0x0) {
      AWorldSettings::SetNavigationSystemConfigOverride
                (this_01,(this->NavigationSystemConfig).field0_0x0.DebugPtr);
    }
    if ((this_00->bIsWorldInitialized != '\0') &&
       ((this->NavigationSystemConfig).field0_0x0.DebugPtr != (UNavigationSystemConfig *)0x0)) {
      uVar1 = (this_00->WorldType).Value;
      if (uVar1 == '\x02') {
        FVar3 = EditorMode;
      }
      else {
        FVar3 = GameMode;
        if (uVar1 == '\x03') {
          FVar3 = PIEMode;
        }
      }
      bVar2 = FNavigationSystem::IsEditorRunMode(FVar3);
      FNavigationSystem::AddNavigationSystemToWorld
                (this_00,FVar3,(this->NavigationSystemConfig).field0_0x0.DebugPtr,!bVar2,true);
    }
  }
  return;
}

// PostInitProperties @ 146e688d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavSystemConfigOverride::PostInitProperties(ANavSystemConfigOverride *this)

{
  UObject::PostInitProperties((UObject *)this);
  *(byte *)&this->_padding_ = *(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1;
  if ((this->_padding_ & 0x10) == 0) {
    AActor::ResetOwnedComponents((AActor *)this);
    return;
  }
  return;
}

// StaticRegisterNativesANavSystemConfigOverride @ 146e73ba0

void __cdecl ANavSystemConfigOverride::StaticRegisterNativesANavSystemConfigOverride(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

