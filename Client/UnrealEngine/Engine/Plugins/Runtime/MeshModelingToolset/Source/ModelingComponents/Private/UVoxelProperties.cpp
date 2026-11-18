// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca416a0

UClass * __cdecl UVoxelProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"VoxelProperties",
               &Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton,
               StaticRegisterNativesUVoxelProperties,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UVoxelProperties>,
               InternalVTableHelperCtorCaller<UVoxelProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton;
}

// UVoxelProperties @ 14ca69280

UVoxelProperties * __thiscall
UVoxelProperties::UVoxelProperties(UVoxelProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->VoxelCount = 0x80;
  this->_padding_ = (longlong)&___7UVoxelProperties__6B_;
  this->SimplifyMaxErrorFactor = 1.0;
  this->bAutoSimplify = false;
  this->bRemoveInternalSurfaces = false;
  this->CubeRootMinComponentVolume = 0.0;
  return this;
}

// UVoxelProperties @ 14ca692e0

UVoxelProperties * __thiscall
UVoxelProperties::UVoxelProperties(UVoxelProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->VoxelCount = 0x80;
  this->_padding_ = (longlong)&___7UVoxelProperties__6B_;
  this->SimplifyMaxErrorFactor = 1.0;
  this->bAutoSimplify = false;
  this->bRemoveInternalSurfaces = false;
  this->CubeRootMinComponentVolume = 0.0;
  return this;
}

// ~UVoxelProperties @ 14ca6bcd0

void __thiscall UVoxelProperties::~UVoxelProperties(UVoxelProperties *this)

{
  this->_padding_ = (longlong)&___7UVoxelProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ca92630

UClass * __cdecl UVoxelProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"VoxelProperties",
               &Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton,
               StaticRegisterNativesUVoxelProperties,200,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UVoxelProperties>,
               InternalVTableHelperCtorCaller<UVoxelProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoxelProperties.InnerSingleton;
}

// StaticRegisterNativesUVoxelProperties @ 14caa7350

void __cdecl UVoxelProperties::StaticRegisterNativesUVoxelProperties(void)

{
  return;
}

