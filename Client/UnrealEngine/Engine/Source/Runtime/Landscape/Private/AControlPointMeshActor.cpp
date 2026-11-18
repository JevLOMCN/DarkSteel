// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145ef7cb0

UClass * __cdecl AControlPointMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"ControlPointMeshActor",
               &Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton,
               StaticRegisterNativesAControlPointMeshActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AControlPointMeshActor>,
               InternalVTableHelperCtorCaller<AControlPointMeshActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton;
}

// AControlPointMeshActor @ 145f01d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AControlPointMeshActor * __thiscall
AControlPointMeshActor::AControlPointMeshActor(AControlPointMeshActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AControlPointMeshActor__6B_;
  (this->ControlPointMeshComponent).field0_0x0.DebugPtr = (UControlPointMeshComponent *)0x0;
  return this;
}

// AControlPointMeshActor @ 145f01dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AControlPointMeshActor * __thiscall
AControlPointMeshActor::AControlPointMeshActor
          (AControlPointMeshActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UControlPointMeshComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AControlPointMeshActor__6B_;
  (this->ControlPointMeshComponent).field0_0x0.DebugPtr = (UControlPointMeshComponent *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pFVar2 = ::FName::FName(&local_res8,L"ControlPointMeshComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
  pUVar4 = (UControlPointMeshComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UControlPointMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ControlPointMeshComponent).field0_0x0.DebugPtr = pUVar4;
  (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,UCollisionProfile::BlockAll_ProfileName,1);
  ((this->ControlPointMeshComponent).field0_0x0.DebugPtr)->field_0x1ab = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->ControlPointMeshComponent).field0_0x0.DebugPtr,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->ControlPointMeshComponent).field0_0x0.DebugPtr,
     pUVar4 != (UControlPointMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->ControlPointMeshComponent).field0_0x0;
  return this;
}

// ~AControlPointMeshActor @ 145f03a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AControlPointMeshActor::~AControlPointMeshActor(AControlPointMeshActor *this)

{
  this->_padding_ = (longlong)&___7AControlPointMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetControlPointMeshComponent @ 145f0eb40

UControlPointMeshComponent * __thiscall
AControlPointMeshActor::GetControlPointMeshComponent(AControlPointMeshActor *this)

{
  return (this->ControlPointMeshComponent).field0_0x0.DebugPtr;
}

// GetDetailedInfoInternal @ 145f0ef30

FString * __thiscall
AControlPointMeshActor::GetDetailedInfoInternal
          (AControlPointMeshActor *this,FString *__return_storage_ptr__)

{
  UControlPointMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->ControlPointMeshComponent).field0_0x0.DebugPtr == (UControlPointMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ControlPointMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\ControlPointMeshActor.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ControlPointMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x48))(pUVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f128a0

UClass * __cdecl AControlPointMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"ControlPointMeshActor",
               &Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton,
               StaticRegisterNativesAControlPointMeshActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AControlPointMeshActor>,
               InternalVTableHelperCtorCaller<AControlPointMeshActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AControlPointMeshActor.InnerSingleton;
}

// SetMobility @ 145f1e390

void __thiscall AControlPointMeshActor::SetMobility(AControlPointMeshActor *this,Type param_1)

{
  UControlPointMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ControlPointMeshComponent).field0_0x0.DebugPtr == (UControlPointMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ControlPointMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\ControlPointMeshActor.cpp"
                       ,0x2a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->ControlPointMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000145f1e3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x5f8))(pUVar1,param_1);
  return;
}

// StaticRegisterNativesAControlPointMeshActor @ 145f1eed0

void __cdecl AControlPointMeshActor::StaticRegisterNativesAControlPointMeshActor(void)

{
  return;
}

