// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148a721b0

UClass * __cdecl UWorldPartitionHLODModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODModifier",
               &Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODModifier,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODModifier>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODModifier>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton;
}

// UWorldPartitionHLODModifier @ 148a801d0

UWorldPartitionHLODModifier * __thiscall
UWorldPartitionHLODModifier::UWorldPartitionHLODModifier
          (UWorldPartitionHLODModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODModifier__6B_;
  return this;
}

// UWorldPartitionHLODModifier @ 148a80200

UWorldPartitionHLODModifier * __thiscall
UWorldPartitionHLODModifier::UWorldPartitionHLODModifier
          (UWorldPartitionHLODModifier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODModifier__6B_;
  return this;
}

// ~UWorldPartitionHLODModifier @ 148a81b70

void __thiscall
UWorldPartitionHLODModifier::~UWorldPartitionHLODModifier(UWorldPartitionHLODModifier *this)

{
  *(undefined ***)this = &___7UWorldPartitionHLODModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginHLODBuild @ 148a8b1e0

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
UWorldPartitionHLODModifier::BeginHLODBuild
          (UWorldPartitionHLODModifier *this,FHLODBuildContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\HLOD\\HLODModifier.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return;
}

// CanModifyHLOD @ 148a8bd20

bool __thiscall
UWorldPartitionHLODModifier::CanModifyHLOD
          (UWorldPartitionHLODModifier *this,TSubclassOf<UHLODBuilder> param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\HLOD\\HLODModifier.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return false;
}

// EndHLODBuild @ 148a8f720

void __thiscall
UWorldPartitionHLODModifier::EndHLODBuild
          (UWorldPartitionHLODModifier *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\HLOD\\HLODModifier.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 148a96830

UClass * __cdecl UWorldPartitionHLODModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODModifier",
               &Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODModifier,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODModifier>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODModifier>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionHLODModifier @ 148aa2a80

void __cdecl UWorldPartitionHLODModifier::StaticRegisterNativesUWorldPartitionHLODModifier(void)

{
  return;
}

