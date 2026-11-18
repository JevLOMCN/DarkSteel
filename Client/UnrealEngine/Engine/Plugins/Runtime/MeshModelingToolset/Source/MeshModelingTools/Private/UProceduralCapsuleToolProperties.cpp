// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd23f0

UClass * __cdecl UProceduralCapsuleToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCapsuleToolProperties",
               &Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralCapsuleToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCapsuleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCapsuleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton;
}

// UProceduralCapsuleToolProperties @ 14cbde200

UProceduralCapsuleToolProperties * __thiscall
UProceduralCapsuleToolProperties::UProceduralCapsuleToolProperties
          (UProceduralCapsuleToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralCapsuleToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 25.0;
  this->CylinderLength = 50.0;
  this->HemisphereSlices = 8;
  this->CylinderSlices = 0x10;
  this->CylinderSubdivisions = 1;
  return this;
}

// UProceduralCapsuleToolProperties @ 14cbde290

UProceduralCapsuleToolProperties * __thiscall
UProceduralCapsuleToolProperties::UProceduralCapsuleToolProperties
          (UProceduralCapsuleToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralCapsuleToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 25.0;
  this->CylinderLength = 50.0;
  this->HemisphereSlices = 8;
  this->CylinderSlices = 0x10;
  this->CylinderSubdivisions = 1;
  return this;
}

// ~UProceduralCapsuleToolProperties @ 14cbe0690

void __thiscall
UProceduralCapsuleToolProperties::~UProceduralCapsuleToolProperties
          (UProceduralCapsuleToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0860

UClass * __cdecl UProceduralCapsuleToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCapsuleToolProperties",
               &Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralCapsuleToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCapsuleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCapsuleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCapsuleToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralCapsuleToolProperties @ 14cbf6cd0

void __cdecl
UProceduralCapsuleToolProperties::StaticRegisterNativesUProceduralCapsuleToolProperties(void)

{
  return;
}

