// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a026090

UClass * __cdecl AWN_StaticMesh_NoWPMerge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoWPMerge",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_NoWPMerge,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_NoWPMerge>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoWPMerge>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton;
}

// AWN_StaticMesh_NoWPMerge @ 14a02d740

AWN_StaticMesh_NoWPMerge * __thiscall
AWN_StaticMesh_NoWPMerge::AWN_StaticMesh_NoWPMerge
          (AWN_StaticMesh_NoWPMerge *this,FVTableHelper *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_NoWPMerge__6B_;
  return this;
}

// AWN_StaticMesh_NoWPMerge @ 14a02d770

AWN_StaticMesh_NoWPMerge * __thiscall
AWN_StaticMesh_NoWPMerge::AWN_StaticMesh_NoWPMerge
          (AWN_StaticMesh_NoWPMerge *this,FObjectInitializer *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  *(undefined ***)this = &___7AWN_StaticMesh_NoWPMerge__6B_;
  return this;
}

// ~AWN_StaticMesh_NoWPMerge @ 14a02eaf0

void __thiscall AWN_StaticMesh_NoWPMerge::~AWN_StaticMesh_NoWPMerge(AWN_StaticMesh_NoWPMerge *this)

{
  *(undefined ***)this = &___7AWN_StaticMesh_Inherited__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a034870

UClass * __cdecl AWN_StaticMesh_NoWPMerge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_StaticMesh_NoWPMerge",
               &Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton,
               StaticRegisterNativesAWN_StaticMesh_NoWPMerge,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_StaticMesh_NoWPMerge>,
               InternalVTableHelperCtorCaller<AWN_StaticMesh_NoWPMerge>,local_res8,
               AWN_StaticMesh_Inherited::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_StaticMesh_NoWPMerge.InnerSingleton;
}

// StaticRegisterNativesAWN_StaticMesh_NoWPMerge @ 14a03a7b0

void __cdecl AWN_StaticMesh_NoWPMerge::StaticRegisterNativesAWN_StaticMesh_NoWPMerge(void)

{
  return;
}

