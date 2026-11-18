// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd2270

UClass * __cdecl UProceduralSphereToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralSphereToolProperties",
               &Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralSphereToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralSphereToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralSphereToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton;
}

// UProceduralSphereToolProperties @ 14cbde820

UProceduralSphereToolProperties * __thiscall
UProceduralSphereToolProperties::UProceduralSphereToolProperties
          (UProceduralSphereToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralSphereToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 50.0;
  this->SubdivisionType = Box;
  this->Subdivisions = 0x10;
  this->HorizontalSlices = 0x10;
  this->VerticalSlices = 0x10;
  return this;
}

// UProceduralSphereToolProperties @ 14cbde8b0

UProceduralSphereToolProperties * __thiscall
UProceduralSphereToolProperties::UProceduralSphereToolProperties
          (UProceduralSphereToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralSphereToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 50.0;
  this->SubdivisionType = Box;
  this->Subdivisions = 0x10;
  this->HorizontalSlices = 0x10;
  this->VerticalSlices = 0x10;
  return this;
}

// ~UProceduralSphereToolProperties @ 14cbe0750

void __thiscall
UProceduralSphereToolProperties::~UProceduralSphereToolProperties
          (UProceduralSphereToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0ce0

UClass * __cdecl UProceduralSphereToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralSphereToolProperties",
               &Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralSphereToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralSphereToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralSphereToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralSphereToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralSphereToolProperties @ 14cbf6d30

void __cdecl
UProceduralSphereToolProperties::StaticRegisterNativesUProceduralSphereToolProperties(void)

{
  return;
}

