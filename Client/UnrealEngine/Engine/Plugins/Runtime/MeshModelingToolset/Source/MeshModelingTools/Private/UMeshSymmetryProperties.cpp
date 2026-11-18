// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc92540

UClass * __cdecl UMeshSymmetryProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSymmetryProperties",
               &Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton,
               StaticRegisterNativesUMeshSymmetryProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSymmetryProperties>,
               InternalVTableHelperCtorCaller<UMeshSymmetryProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton;
}

// UMeshSymmetryProperties @ 14ccbdb00

UMeshSymmetryProperties * __thiscall
UMeshSymmetryProperties::UMeshSymmetryProperties
          (UMeshSymmetryProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableSymmetry = false;
  this->bSymmetryCanBeEnabled = false;
  this->_padding_ = (longlong)&___7UMeshSymmetryProperties__6B_;
  return this;
}

// UMeshSymmetryProperties @ 14ccbdb30

UMeshSymmetryProperties * __thiscall
UMeshSymmetryProperties::UMeshSymmetryProperties
          (UMeshSymmetryProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableSymmetry = false;
  this->bSymmetryCanBeEnabled = false;
  this->_padding_ = (longlong)&___7UMeshSymmetryProperties__6B_;
  return this;
}

// ~UMeshSymmetryProperties @ 14ccc4220

void __thiscall UMeshSymmetryProperties::~UMeshSymmetryProperties(UMeshSymmetryProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshSymmetryProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00670

UClass * __cdecl UMeshSymmetryProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSymmetryProperties",
               &Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton,
               StaticRegisterNativesUMeshSymmetryProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSymmetryProperties>,
               InternalVTableHelperCtorCaller<UMeshSymmetryProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSymmetryProperties.InnerSingleton;
}

// StaticRegisterNativesUMeshSymmetryProperties @ 14cd2f100

void __cdecl UMeshSymmetryProperties::StaticRegisterNativesUMeshSymmetryProperties(void)

{
  return;
}

