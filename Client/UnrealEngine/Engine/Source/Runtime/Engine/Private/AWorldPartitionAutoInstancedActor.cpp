// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aa5e40

UClass * __cdecl AWorldPartitionAutoInstancedActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionAutoInstancedActor",
               &Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton,
               StaticRegisterNativesAWorldPartitionAutoInstancedActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionAutoInstancedActor>,
               InternalVTableHelperCtorCaller<AWorldPartitionAutoInstancedActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton;
}

// AWorldPartitionAutoInstancedActor @ 148ab3270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionAutoInstancedActor * __thiscall
AWorldPartitionAutoInstancedActor::AWorldPartitionAutoInstancedActor
          (AWorldPartitionAutoInstancedActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionAutoInstancedActor__6B_;
  return this;
}

// AWorldPartitionAutoInstancedActor @ 148ab32a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionAutoInstancedActor * __thiscall
AWorldPartitionAutoInstancedActor::AWorldPartitionAutoInstancedActor
          (AWorldPartitionAutoInstancedActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionAutoInstancedActor__6B_;
  return this;
}

// ~AWorldPartitionAutoInstancedActor @ 148ab6f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWorldPartitionAutoInstancedActor::~AWorldPartitionAutoInstancedActor
          (AWorldPartitionAutoInstancedActor *this)

{
  *(undefined ***)this = &___7AWorldPartitionAutoInstancedActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 148acec00

UClass * __cdecl AWorldPartitionAutoInstancedActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionAutoInstancedActor",
               &Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton,
               StaticRegisterNativesAWorldPartitionAutoInstancedActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionAutoInstancedActor>,
               InternalVTableHelperCtorCaller<AWorldPartitionAutoInstancedActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton;
}

// StaticRegisterNativesAWorldPartitionAutoInstancedActor @ 148adb7c0

void __cdecl
AWorldPartitionAutoInstancedActor::StaticRegisterNativesAWorldPartitionAutoInstancedActor(void)

{
  return;
}

