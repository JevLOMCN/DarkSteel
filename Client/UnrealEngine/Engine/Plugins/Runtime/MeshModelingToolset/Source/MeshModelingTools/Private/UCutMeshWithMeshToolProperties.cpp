// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc040d0

UClass * __cdecl UCutMeshWithMeshToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshToolProperties",
               &Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshToolProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCutMeshWithMeshToolProperties>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton;
}

// UCutMeshWithMeshToolProperties @ 14cc1c560

UCutMeshWithMeshToolProperties * __thiscall
UCutMeshWithMeshToolProperties::UCutMeshWithMeshToolProperties
          (UCutMeshWithMeshToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bTryFixHoles = false;
  this->bTryCollapseEdges = true;
  this->_padding_ = (longlong)&___7UCutMeshWithMeshToolProperties__6B_;
  this->WindingThreshold = 0.5;
  this->bShowNewBoundaries = true;
  this->bUseFirstMeshMaterials = false;
  return this;
}

// UCutMeshWithMeshToolProperties @ 14cc1c5b0

UCutMeshWithMeshToolProperties * __thiscall
UCutMeshWithMeshToolProperties::UCutMeshWithMeshToolProperties
          (UCutMeshWithMeshToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bTryFixHoles = false;
  this->bTryCollapseEdges = true;
  this->_padding_ = (longlong)&___7UCutMeshWithMeshToolProperties__6B_;
  this->WindingThreshold = 0.5;
  this->bShowNewBoundaries = true;
  this->bUseFirstMeshMaterials = false;
  return this;
}

// ~UCutMeshWithMeshToolProperties @ 14cc22650

void __thiscall
UCutMeshWithMeshToolProperties::~UCutMeshWithMeshToolProperties
          (UCutMeshWithMeshToolProperties *this)

{
  this->_padding_ = (longlong)&___7UCutMeshWithMeshToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5bcf0

UClass * __cdecl UCutMeshWithMeshToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CutMeshWithMeshToolProperties",
               &Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton,
               StaticRegisterNativesUCutMeshWithMeshToolProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCutMeshWithMeshToolProperties>,
               InternalVTableHelperCtorCaller<UCutMeshWithMeshToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.InnerSingleton;
}

// StaticRegisterNativesUCutMeshWithMeshToolProperties @ 14cc822e0

void __cdecl
UCutMeshWithMeshToolProperties::StaticRegisterNativesUCutMeshWithMeshToolProperties(void)

{
  return;
}

