// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc00f80

UClass * __cdecl UCSGMeshesToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesToolProperties",
               &Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUCSGMeshesToolProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UCSGMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton;
}

// UCSGMeshesToolProperties @ 14cc1c370

UCSGMeshesToolProperties * __thiscall
UCSGMeshesToolProperties::UCSGMeshesToolProperties
          (UCSGMeshesToolProperties *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Operation = DifferenceAB;
  this->bTryFixHoles = false;
  this->_padding_ = (longlong)&___7UCSGMeshesToolProperties__6B_;
  this->bTryCollapseEdges = true;
  this->WindingThreshold = 0.5;
  this->bShowNewBoundaries = true;
  this->bShowSubtractedMesh = true;
  this->SubtractedMeshOpacity = 0.2;
  FVar1 = FLinearColor::Black;
  this->bUseFirstMeshMaterials = false;
  (this->SubtractedMeshColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// UCSGMeshesToolProperties @ 14cc1c3e0

UCSGMeshesToolProperties * __thiscall
UCSGMeshesToolProperties::UCSGMeshesToolProperties
          (UCSGMeshesToolProperties *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Operation = DifferenceAB;
  this->bTryFixHoles = false;
  this->_padding_ = (longlong)&___7UCSGMeshesToolProperties__6B_;
  this->bTryCollapseEdges = true;
  this->WindingThreshold = 0.5;
  this->bShowNewBoundaries = true;
  this->bShowSubtractedMesh = true;
  this->SubtractedMeshOpacity = 0.2;
  FVar1 = FLinearColor::Black;
  this->bUseFirstMeshMaterials = false;
  (this->SubtractedMeshColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// ~UCSGMeshesToolProperties @ 14cc22570

void __thiscall UCSGMeshesToolProperties::~UCSGMeshesToolProperties(UCSGMeshesToolProperties *this)

{
  this->_padding_ = (longlong)&___7UCSGMeshesToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5bab0

UClass * __cdecl UCSGMeshesToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CSGMeshesToolProperties",
               &Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton,
               StaticRegisterNativesUCSGMeshesToolProperties,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCSGMeshesToolProperties>,
               InternalVTableHelperCtorCaller<UCSGMeshesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCSGMeshesToolProperties.InnerSingleton;
}

// StaticRegisterNativesUCSGMeshesToolProperties @ 14cc822b0

void __cdecl UCSGMeshesToolProperties::StaticRegisterNativesUCSGMeshesToolProperties(void)

{
  return;
}

