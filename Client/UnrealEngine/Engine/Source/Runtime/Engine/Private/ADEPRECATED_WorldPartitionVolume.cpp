// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148ae3df0

UClass * __cdecl ADEPRECATED_WorldPartitionVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionVolume",
               &Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton,
               StaticRegisterNativesADEPRECATED_WorldPartitionVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADEPRECATED_WorldPartitionVolume>,
               InternalVTableHelperCtorCaller<ADEPRECATED_WorldPartitionVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton;
}

// ADEPRECATED_WorldPartitionVolume @ 148ae92e0

ADEPRECATED_WorldPartitionVolume * __thiscall
ADEPRECATED_WorldPartitionVolume::ADEPRECATED_WorldPartitionVolume
          (ADEPRECATED_WorldPartitionVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
  return this;
}

// ADEPRECATED_WorldPartitionVolume @ 148ae9310

ADEPRECATED_WorldPartitionVolume * __thiscall
ADEPRECATED_WorldPartitionVolume::ADEPRECATED_WorldPartitionVolume
          (ADEPRECATED_WorldPartitionVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
  return this;
}

// ~ADEPRECATED_WorldPartitionVolume @ 148aea7f0

void __thiscall
ADEPRECATED_WorldPartitionVolume::~ADEPRECATED_WorldPartitionVolume
          (ADEPRECATED_WorldPartitionVolume *this)

{
  *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 148af10c0

UClass * __cdecl ADEPRECATED_WorldPartitionVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionVolume",
               &Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton,
               StaticRegisterNativesADEPRECATED_WorldPartitionVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADEPRECATED_WorldPartitionVolume>,
               InternalVTableHelperCtorCaller<ADEPRECATED_WorldPartitionVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton;
}

// IsEditorOnly @ 148af2850

bool __thiscall
ADEPRECATED_WorldPartitionVolume::IsEditorOnly(ADEPRECATED_WorldPartitionVolume *this)

{
  return true;
}

// StaticRegisterNativesADEPRECATED_WorldPartitionVolume @ 148af7060

void __cdecl
ADEPRECATED_WorldPartitionVolume::StaticRegisterNativesADEPRECATED_WorldPartitionVolume(void)

{
  return;
}

