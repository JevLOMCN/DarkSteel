// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd2030

UClass * __cdecl UProceduralCylinderToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCylinderToolProperties",
               &Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralCylinderToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCylinderToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCylinderToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton;
}

// UProceduralCylinderToolProperties @ 14cbde420

UProceduralCylinderToolProperties * __thiscall
UProceduralCylinderToolProperties::UProceduralCylinderToolProperties
          (UProceduralCylinderToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralCylinderToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 50.0;
  this->Height = 200.0;
  this->RadialSlices = 0x10;
  this->HeightSubdivisions = 1;
  return this;
}

// UProceduralCylinderToolProperties @ 14cbde4a0

UProceduralCylinderToolProperties * __thiscall
UProceduralCylinderToolProperties::UProceduralCylinderToolProperties
          (UProceduralCylinderToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralCylinderToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Radius = 50.0;
  this->Height = 200.0;
  this->RadialSlices = 0x10;
  this->HeightSubdivisions = 1;
  return this;
}

// ~UProceduralCylinderToolProperties @ 14cbe06d0

void __thiscall
UProceduralCylinderToolProperties::~UProceduralCylinderToolProperties
          (UProceduralCylinderToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf09e0

UClass * __cdecl UProceduralCylinderToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralCylinderToolProperties",
               &Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralCylinderToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralCylinderToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralCylinderToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralCylinderToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralCylinderToolProperties @ 14cbf6cf0

void __cdecl
UProceduralCylinderToolProperties::StaticRegisterNativesUProceduralCylinderToolProperties(void)

{
  return;
}

