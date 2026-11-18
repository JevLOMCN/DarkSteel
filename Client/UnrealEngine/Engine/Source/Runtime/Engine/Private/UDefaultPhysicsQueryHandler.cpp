// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 14822c140

UClass * __cdecl UDefaultPhysicsQueryHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPhysicsQueryHandler",
               &Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton,
               StaticRegisterNativesUDefaultPhysicsQueryHandler,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDefaultPhysicsQueryHandler>,
               InternalVTableHelperCtorCaller<UDefaultPhysicsQueryHandler>,local_res8,
               UPhysicsQueryHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton;
}

// UDefaultPhysicsQueryHandler @ 1482519c0

UDefaultPhysicsQueryHandler * __thiscall
UDefaultPhysicsQueryHandler::UDefaultPhysicsQueryHandler
          (UDefaultPhysicsQueryHandler *this,FVTableHelper *param_1)

{
  UPhysicsQueryHandler::UPhysicsQueryHandler((UPhysicsQueryHandler *)this,param_1);
  *(undefined ***)this = &___7UDefaultPhysicsQueryHandler__6B_;
  return this;
}

// UDefaultPhysicsQueryHandler @ 1482519f0

UDefaultPhysicsQueryHandler * __thiscall
UDefaultPhysicsQueryHandler::UDefaultPhysicsQueryHandler
          (UDefaultPhysicsQueryHandler *this,FObjectInitializer *param_1)

{
  UPhysicsQueryHandler::UPhysicsQueryHandler((UPhysicsQueryHandler *)this,param_1);
  *(undefined ***)this = &___7UDefaultPhysicsQueryHandler__6B_;
  return this;
}

// ~UDefaultPhysicsQueryHandler @ 148253940

void __thiscall
UDefaultPhysicsQueryHandler::~UDefaultPhysicsQueryHandler(UDefaultPhysicsQueryHandler *this)

{
  *(undefined ***)this = &___7UDefaultPhysicsQueryHandler__6B_;
  UPhysicsQueryHandler::~UPhysicsQueryHandler((UPhysicsQueryHandler *)this);
  return;
}

// GetPrivateStaticClass @ 14828c260

UClass * __cdecl UDefaultPhysicsQueryHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPhysicsQueryHandler",
               &Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton,
               StaticRegisterNativesUDefaultPhysicsQueryHandler,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDefaultPhysicsQueryHandler>,
               InternalVTableHelperCtorCaller<UDefaultPhysicsQueryHandler>,local_res8,
               UPhysicsQueryHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultPhysicsQueryHandler.InnerSingleton;
}

// Overlap @ 148299740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::Overlap
          (UDefaultPhysicsQueryHandler *this,EQueryInfo param_1,EThreadQueryContext param_2,
          UWorld *param_3,FOverlapQueryData *param_4,FCommonQueryData *param_5,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::Overlap
                    (param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}

// RaycastMulti @ 14829f130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::RaycastMulti
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::RaycastMulti
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// RaycastSingle @ 14829f2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::RaycastSingle
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::RaycastSingle
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// RaycastTest @ 14829f2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::RaycastTest
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::RaycastTest
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// StaticRegisterNativesUDefaultPhysicsQueryHandler @ 1482b1de0

void __cdecl UDefaultPhysicsQueryHandler::StaticRegisterNativesUDefaultPhysicsQueryHandler(void)

{
  return;
}

// SweepMulti @ 1482b2860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::SweepMulti
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::SweepMulti
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// SweepSingle @ 1482b2890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::SweepSingle
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::SweepSingle
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// SweepTest @ 1482b28c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDefaultPhysicsQueryHandler::SweepTest
          (UDefaultPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  
  bVar1 = Chaos::Private::FQueryInterface_Internal::SweepTest
                    (param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

