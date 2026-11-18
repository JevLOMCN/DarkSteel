// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14df92dd0

UClass * __cdecl AGroomActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGroomActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomActor",
               &Z_Registration_Info_UClass_AGroomActor.InnerSingleton,
               StaticRegisterNativesAGroomActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AGroomActor>,
               InternalVTableHelperCtorCaller<AGroomActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGroomActor.InnerSingleton;
}

// AGroomActor @ 14dfab040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGroomActor * __thiscall AGroomActor::AGroomActor(AGroomActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGroomActor__6B_;
  (this->GroomComponent).field0_0x0.DebugPtr = (UGroomComponent *)0x0;
  return this;
}

// AGroomActor @ 14dfab080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGroomActor * __thiscall AGroomActor::AGroomActor(AGroomActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGroomComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGroomActor__6B_;
  (this->GroomComponent).field0_0x0.DebugPtr = (UGroomComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"GroomComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UGroomComponent_NoRegister();
  pUVar4 = (UGroomComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UGroomComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->GroomComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UGroomComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->GroomComponent).field0_0x0;
  return this;
}

// ~AGroomActor @ 14dfb0400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGroomActor::~AGroomActor(AGroomActor *this)

{
  this->_padding_ = (longlong)&___7AGroomActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14dfc8180

UClass * __cdecl AGroomActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGroomActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomActor",
               &Z_Registration_Info_UClass_AGroomActor.InnerSingleton,
               StaticRegisterNativesAGroomActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<AGroomActor>,
               InternalVTableHelperCtorCaller<AGroomActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGroomActor.InnerSingleton;
}

// StaticRegisterNativesAGroomActor @ 14dfd88d0

void __cdecl AGroomActor::StaticRegisterNativesAGroomActor(void)

{
  return;
}

