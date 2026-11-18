// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbce3d0

UClass * __cdecl URemeshProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshProperties",
               &Z_Registration_Info_UClass_URemeshProperties.InnerSingleton,
               StaticRegisterNativesURemeshProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URemeshProperties>,
               InternalVTableHelperCtorCaller<URemeshProperties>,local_res8,
               UMeshConstraintProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshProperties.InnerSingleton;
}

// URemeshProperties @ 14cbdec40

URemeshProperties * __thiscall
URemeshProperties::URemeshProperties(URemeshProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0x10101;
  this->_padding_ = (longlong)&___7URemeshProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  this->SmoothingStrength = 0.1;
  this->bFlips = false;
  this->bSplits = true;
  this->bCollapses = true;
  return this;
}

// URemeshProperties @ 14cbdeca0

URemeshProperties * __thiscall
URemeshProperties::URemeshProperties(URemeshProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0x10101;
  this->_padding_ = (longlong)&___7URemeshProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  this->SmoothingStrength = 0.1;
  this->bFlips = false;
  this->bSplits = true;
  this->bCollapses = true;
  return this;
}

// ~URemeshProperties @ 14cbe07d0

void __thiscall URemeshProperties::~URemeshProperties(URemeshProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0fe0

UClass * __cdecl URemeshProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemeshProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemeshProperties",
               &Z_Registration_Info_UClass_URemeshProperties.InnerSingleton,
               StaticRegisterNativesURemeshProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URemeshProperties>,
               InternalVTableHelperCtorCaller<URemeshProperties>,local_res8,
               UMeshConstraintProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemeshProperties.InnerSingleton;
}

// StaticRegisterNativesURemeshProperties @ 14cbf6d70

void __cdecl URemeshProperties::StaticRegisterNativesURemeshProperties(void)

{
  return;
}

