// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a025df0

UClass * __cdecl AWN_StaticMesh_Inherited::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_Inherited",
               &Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_Inherited,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_Inherited>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_Inherited>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton;
}

// AWN_StaticMesh_Inherited @ 14a02d680

AWN_StaticMesh_Inherited * __thiscall
AWN_StaticMesh_Inherited::AWN_StaticMesh_Inherited
          (AWN_StaticMesh_Inherited *this,FVTableHelper *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  return this;
}

// AWN_StaticMesh_Inherited @ 14a02d6b0

AWN_StaticMesh_Inherited * __thiscall
AWN_StaticMesh_Inherited::AWN_StaticMesh_Inherited
          (AWN_StaticMesh_Inherited *this,FObjectInitializer *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  return this;
}

// ~AWN_StaticMesh_Inherited @ 14a02eab0

void __thiscall AWN_StaticMesh_Inherited::~AWN_StaticMesh_Inherited(AWN_StaticMesh_Inherited *this)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a0346f0

UClass * __cdecl AWN_StaticMesh_Inherited::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_Inherited",
               &Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_Inherited,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_Inherited>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_Inherited>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_Inherited.InnerSingleton;
}

// StaticRegisterNativesAWN_StaticMesh_Inherited @ 14a03a790

void __cdecl AWN_StaticMesh_Inherited::StaticRegisterNativesAWN_StaticMesh_Inherited(void)

{
  return;
}

