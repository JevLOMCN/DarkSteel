// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147363a50

UClass * __cdecl UActorPartitionSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorPartitionSubsystem",
               &Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton,
               StaticRegisterNativesUActorPartitionSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UActorPartitionSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton;
}

// UActorPartitionSubsystem @ 14737c810

UActorPartitionSubsystem * __thiscall
UActorPartitionSubsystem::UActorPartitionSubsystem
          (UActorPartitionSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  *(undefined ***)this = &___7UActorPartitionSubsystem__6B_;
  return this;
}

// UActorPartitionSubsystem @ 14737c840

UActorPartitionSubsystem * __thiscall
UActorPartitionSubsystem::UActorPartitionSubsystem(UActorPartitionSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  *(undefined ***)this = &___7UActorPartitionSubsystem__6B_;
  return this;
}

// ~UActorPartitionSubsystem @ 14737da50

void __thiscall UActorPartitionSubsystem::~UActorPartitionSubsystem(UActorPartitionSubsystem *this)

{
  *(undefined ***)this = &___7UActorPartitionSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 1473904e0

bool __thiscall
UActorPartitionSubsystem::DoesSupportWorldType(UActorPartitionSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if (((!bVar1) && (param_1 != Inactive)) && (param_1 != EditorPreview)) {
    return false;
  }
  return true;
}

// GetPrivateStaticClass @ 1473a0930

UClass * __cdecl UActorPartitionSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorPartitionSubsystem",
               &Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton,
               StaticRegisterNativesUActorPartitionSubsystem,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UActorPartitionSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton;
}

// IsLevelPartition @ 1473a6b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UActorPartitionSubsystem::IsLevelPartition(UActorPartitionSubsystem *this)

{
  UWorld *this_00;
  UWorldPartition *pUVar1;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 != (UWorld *)0x0) {
    pUVar1 = UWorld::GetWorldPartition(this_00);
    return pUVar1 == (UWorldPartition *)0x0;
  }
  return true;
}

// StaticRegisterNativesUActorPartitionSubsystem @ 1473b8900

void __cdecl UActorPartitionSubsystem::StaticRegisterNativesUActorPartitionSubsystem(void)

{
  return;
}

