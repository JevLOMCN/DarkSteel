// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f90ae0

UClass * __cdecl AMeshMergeCullingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshMergeCullingVolume",
               &Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton,
               StaticRegisterNativesAMeshMergeCullingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMeshMergeCullingVolume>,
               InternalVTableHelperCtorCaller<AMeshMergeCullingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton;
}

// AMeshMergeCullingVolume @ 147fa3540

AMeshMergeCullingVolume * __thiscall
AMeshMergeCullingVolume::AMeshMergeCullingVolume
          (AMeshMergeCullingVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
  return this;
}

// AMeshMergeCullingVolume @ 147fa3570

AMeshMergeCullingVolume * __thiscall
AMeshMergeCullingVolume::AMeshMergeCullingVolume
          (AMeshMergeCullingVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 9;
  *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
  *(undefined4 *)&this->field_0x2c4 = 0xff2de12d;
  return this;
}

// ~AMeshMergeCullingVolume @ 147fa8b00

void __thiscall AMeshMergeCullingVolume::~AMeshMergeCullingVolume(AMeshMergeCullingVolume *this)

{
  *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147fd5f10

UClass * __cdecl AMeshMergeCullingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshMergeCullingVolume",
               &Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton,
               StaticRegisterNativesAMeshMergeCullingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMeshMergeCullingVolume>,
               InternalVTableHelperCtorCaller<AMeshMergeCullingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton;
}

// StaticRegisterNativesAMeshMergeCullingVolume @ 147ff87c0

void __cdecl AMeshMergeCullingVolume::StaticRegisterNativesAMeshMergeCullingVolume(void)

{
  return;
}

