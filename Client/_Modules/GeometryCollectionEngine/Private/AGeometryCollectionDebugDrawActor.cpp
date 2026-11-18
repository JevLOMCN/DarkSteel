// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticClass @ 1463477f0

UClass * __cdecl AGeometryCollectionDebugDrawActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionDebugDrawActor",
               &Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionDebugDrawActor,0x380,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionDebugDrawActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionDebugDrawActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton;
}

// AGeometryCollectionDebugDrawActor @ 14635c580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionDebugDrawActor * __thiscall
AGeometryCollectionDebugDrawActor::AGeometryCollectionDebugDrawActor
          (AGeometryCollectionDebugDrawActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionDebugDrawActor__6B_;
  (this->SelectedRigidBody_DEPRECATED).Solver.field0_0x0.DebugPtr = (AChaosSolverActor *)0x0;
  (this->SelectedRigidBody_DEPRECATED).GeometryCollection.field0_0x0.DebugPtr =
       (AGeometryCollectionActor *)0x0;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->SelectedRigidBody_DEPRECATED).Id = -1;
  return this;
}

// AGeometryCollectionDebugDrawActor @ 14635c5d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionDebugDrawActor * __thiscall
AGeometryCollectionDebugDrawActor::AGeometryCollectionDebugDrawActor
          (AGeometryCollectionDebugDrawActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionDebugDrawActor__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfc;
  (this->SelectedRigidBody_DEPRECATED).Solver.field0_0x0.DebugPtr = (AChaosSolverActor *)0x0;
  (this->SelectedRigidBody_DEPRECATED).GeometryCollection.field0_0x0.DebugPtr =
       (AGeometryCollectionActor *)0x0;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->SelectedRigidBody_DEPRECATED).Id = -1;
  return this;
}

// ~AGeometryCollectionDebugDrawActor @ 14635ec80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGeometryCollectionDebugDrawActor::~AGeometryCollectionDebugDrawActor
          (AGeometryCollectionDebugDrawActor *this)

{
  this->_padding_ = (longlong)&___7AGeometryCollectionDebugDrawActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1463798c0

UClass * __cdecl AGeometryCollectionDebugDrawActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionDebugDrawActor",
               &Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionDebugDrawActor,0x380,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionDebugDrawActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionDebugDrawActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.InnerSingleton;
}

// StaticRegisterNativesAGeometryCollectionDebugDrawActor @ 14638f4c0

void __cdecl
AGeometryCollectionDebugDrawActor::StaticRegisterNativesAGeometryCollectionDebugDrawActor(void)

{
  return;
}

