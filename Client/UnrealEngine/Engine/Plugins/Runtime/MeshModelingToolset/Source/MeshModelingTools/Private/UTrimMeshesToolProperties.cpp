// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc01840

UClass * __cdecl UTrimMeshesToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"TrimMeshesToolProperties",
               &Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUTrimMeshesToolProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UTrimMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UTrimMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton;
}

// UTrimMeshesToolProperties @ 14cc20470

UTrimMeshesToolProperties * __thiscall
UTrimMeshesToolProperties::UTrimMeshesToolProperties
          (UTrimMeshesToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->WhichMesh = TrimA;
  this->TrimSide = RemoveInside;
  this->_padding_ = (longlong)&___7UTrimMeshesToolProperties__6B_;
  this->WindingThreshold = 0.5;
  this->bShowTrimmingMesh = true;
  this->OpacityOfTrimmingMesh = 0.2;
  (this->ColorOfTrimmingMesh).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0
  ;
  return this;
}

// UTrimMeshesToolProperties @ 14cc204d0

UTrimMeshesToolProperties * __thiscall
UTrimMeshesToolProperties::UTrimMeshesToolProperties
          (UTrimMeshesToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->WhichMesh = TrimA;
  this->TrimSide = RemoveInside;
  this->_padding_ = (longlong)&___7UTrimMeshesToolProperties__6B_;
  this->WindingThreshold = 0.5;
  this->bShowTrimmingMesh = true;
  this->OpacityOfTrimmingMesh = 0.2;
  (this->ColorOfTrimmingMesh).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0
  ;
  return this;
}

// ~UTrimMeshesToolProperties @ 14cc23480

void __thiscall
UTrimMeshesToolProperties::~UTrimMeshesToolProperties(UTrimMeshesToolProperties *this)

{
  this->_padding_ = (longlong)&___7UTrimMeshesToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5da20

UClass * __cdecl UTrimMeshesToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"TrimMeshesToolProperties",
               &Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUTrimMeshesToolProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UTrimMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UTrimMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrimMeshesToolProperties.InnerSingleton;
}

// StaticRegisterNativesUTrimMeshesToolProperties @ 14cc82700

void __cdecl UTrimMeshesToolProperties::StaticRegisterNativesUTrimMeshesToolProperties(void)

{
  return;
}

