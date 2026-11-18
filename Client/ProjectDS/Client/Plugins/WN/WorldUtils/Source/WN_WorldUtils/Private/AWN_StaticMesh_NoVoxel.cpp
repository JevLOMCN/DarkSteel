// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a025fd0

UClass * __cdecl AWN_StaticMesh_NoVoxel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoVoxel",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_NoVoxel,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_NoVoxel>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoVoxel>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton;
}

// AWN_StaticMesh_NoVoxel @ 14a02d6e0

AWN_StaticMesh_NoVoxel * __thiscall
AWN_StaticMesh_NoVoxel::AWN_StaticMesh_NoVoxel(AWN_StaticMesh_NoVoxel *this,FVTableHelper *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_NoVoxel__6B_;
  return this;
}

// AWN_StaticMesh_NoVoxel @ 14a02d710

AWN_StaticMesh_NoVoxel * __thiscall
AWN_StaticMesh_NoVoxel::AWN_StaticMesh_NoVoxel
          (AWN_StaticMesh_NoVoxel *this,FObjectInitializer *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_NoVoxel__6B_;
  return this;
}

// ~AWN_StaticMesh_NoVoxel @ 14a02ead0

void __thiscall AWN_StaticMesh_NoVoxel::~AWN_StaticMesh_NoVoxel(AWN_StaticMesh_NoVoxel *this)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a0347b0

UClass * __cdecl AWN_StaticMesh_NoVoxel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoVoxel",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_NoVoxel,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_NoVoxel>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoVoxel>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoVoxel.InnerSingleton;
}

// StaticRegisterNativesAWN_StaticMesh_NoVoxel @ 14a03a7a0

void __cdecl AWN_StaticMesh_NoVoxel::StaticRegisterNativesAWN_StaticMesh_NoVoxel(void)

{
  return;
}

