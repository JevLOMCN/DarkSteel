// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// IsLevelBoundsRelevant @ 145ef5eb0

bool __thiscall ALandscapeGizmoActor::IsLevelBoundsRelevant(ALandscapeGizmoActor *this)

{
  return false;
}

// StaticClass @ 145ef5fa0

UClass * __cdecl ALandscapeGizmoActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoActor",
               &Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton,
               StaticRegisterNativesALandscapeGizmoActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeGizmoActor>,
               InternalVTableHelperCtorCaller<ALandscapeGizmoActor>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton;
}

// ALandscapeGizmoActor @ 145f40c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeGizmoActor * __thiscall
ALandscapeGizmoActor::ALandscapeGizmoActor(ALandscapeGizmoActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ALandscapeGizmoActor__6B_;
  return this;
}

// ALandscapeGizmoActor @ 145f40c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeGizmoActor * __thiscall
ALandscapeGizmoActor::ALandscapeGizmoActor(ALandscapeGizmoActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ALandscapeGizmoActor__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&this->field_0x1b8 = pUVar4;
  return this;
}

// ~ALandscapeGizmoActor @ 145f43260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALandscapeGizmoActor::~ALandscapeGizmoActor(ALandscapeGizmoActor *this)

{
  *(undefined ***)this = &___7ALandscapeGizmoActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 145f53b60

UClass * __cdecl ALandscapeGizmoActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoActor",
               &Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton,
               StaticRegisterNativesALandscapeGizmoActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeGizmoActor>,
               InternalVTableHelperCtorCaller<ALandscapeGizmoActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeGizmoActor.InnerSingleton;
}

// StaticRegisterNativesALandscapeGizmoActor @ 145f5ec00

void __cdecl ALandscapeGizmoActor::StaticRegisterNativesALandscapeGizmoActor(void)

{
  return;
}

