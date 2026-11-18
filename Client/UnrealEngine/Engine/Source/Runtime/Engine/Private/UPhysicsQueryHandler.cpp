// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1482b1c70

UClass * __cdecl UPhysicsQueryHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsQueryHandler",
               &Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton,
               StaticRegisterNativesUPhysicsQueryHandler,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsQueryHandler>,
               InternalVTableHelperCtorCaller<UPhysicsQueryHandler>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton;
}

// UPhysicsQueryHandler @ 1482dc0f0

UPhysicsQueryHandler * __thiscall
UPhysicsQueryHandler::UPhysicsQueryHandler(UPhysicsQueryHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPhysicsQueryHandler__6B_;
  return this;
}

// UPhysicsQueryHandler @ 1482dc120

UPhysicsQueryHandler * __thiscall
UPhysicsQueryHandler::UPhysicsQueryHandler(UPhysicsQueryHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPhysicsQueryHandler__6B_;
  return this;
}

// ~UPhysicsQueryHandler @ 1482de2e0

void __thiscall UPhysicsQueryHandler::~UPhysicsQueryHandler(UPhysicsQueryHandler *this)

{
  *(undefined ***)this = &___7UPhysicsQueryHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AreAsyncRequestsAdded @ 1482e9da0

bool __thiscall UPhysicsQueryHandler::AreAsyncRequestsAdded(UPhysicsQueryHandler *this)

{
  return false;
}

// GetPrivateStaticClass @ 14830c880

UClass * __cdecl UPhysicsQueryHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsQueryHandler",
               &Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton,
               StaticRegisterNativesUPhysicsQueryHandler,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsQueryHandler>,
               InternalVTableHelperCtorCaller<UPhysicsQueryHandler>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsQueryHandler.InnerSingleton;
}

// Overlap @ 148316280

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
UPhysicsQueryHandler::Overlap
          (UPhysicsQueryHandler *this,EQueryInfo param_1,EThreadQueryContext param_2,UWorld *param_3
          ,FOverlapQueryData *param_4,FCommonQueryData *param_5,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6)

{
  return false;
}

// QueueAsyncOverlap @ 14831a9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsQueryHandler::QueueAsyncOverlap
          (UPhysicsQueryHandler *this,FTraceHandle *param_1,EQueryInfo param_2,
          EThreadQueryContext param_3,UWorld *param_4,FOverlapQueryData *param_5,
          FCommonQueryData *param_6)

{
  return;
}

// QueueAsyncRaycast @ 14831a9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsQueryHandler::QueueAsyncRaycast
          (UPhysicsQueryHandler *this,FTraceHandle *param_1,EPhysicsQueryKind param_2,
          EThreadQueryContext param_3,UWorld *param_4,FRayQueryData *param_5,
          FCommonQueryData *param_6)

{
  return;
}

// QueueAsyncSweep @ 14831a9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsQueryHandler::QueueAsyncSweep
          (UPhysicsQueryHandler *this,FTraceHandle *param_1,EPhysicsQueryKind param_2,
          EThreadQueryContext param_3,UWorld *param_4,FSweepQueryData *param_5,
          FCommonQueryData *param_6)

{
  return;
}

// RaycastMulti @ 14831a9e0

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
UPhysicsQueryHandler::RaycastMulti
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  return false;
}

// RaycastSingle @ 14831a9f0

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
UPhysicsQueryHandler::RaycastSingle
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  return false;
}

// RaycastTest @ 14831aa00

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
UPhysicsQueryHandler::RaycastTest
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FRayQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  return false;
}

// StaticRegisterNativesUPhysicsQueryHandler @ 148323c20

void __cdecl UPhysicsQueryHandler::StaticRegisterNativesUPhysicsQueryHandler(void)

{
  return;
}

// SweepMulti @ 148324230

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
UPhysicsQueryHandler::SweepMulti
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  return false;
}

// SweepSingle @ 148324240

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
UPhysicsQueryHandler::SweepSingle
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  return false;
}

// SweepTest @ 148324250

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
UPhysicsQueryHandler::SweepTest
          (UPhysicsQueryHandler *this,EThreadQueryContext param_1,UWorld *param_2,
          FSweepQueryData *param_3,FCommonQueryData *param_4,FHitResult *param_5)

{
  return false;
}

// VerifyAsyncRequestsAreCompletedOrAbort @ 14832b0f0

void __thiscall
UPhysicsQueryHandler::VerifyAsyncRequestsAreCompletedOrAbort(UPhysicsQueryHandler *this)

{
  return;
}

