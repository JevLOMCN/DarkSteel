// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1eb0

UClass * __cdecl UProceduralDiscToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralDiscToolProperties",
               &Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralDiscToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralDiscToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralDiscToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton;
}

// UProceduralDiscToolProperties @ 14cbde520

UProceduralDiscToolProperties * __thiscall
UProceduralDiscToolProperties::UProceduralDiscToolProperties
          (UProceduralDiscToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralDiscToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->DiscType = Disc;
  this->Radius = 50.0;
  this->RadialSlices = 0x10;
  this->RadialSubdivisions = 1;
  this->HoleRadius = 25.0;
  return this;
}

// UProceduralDiscToolProperties @ 14cbde5a0

UProceduralDiscToolProperties * __thiscall
UProceduralDiscToolProperties::UProceduralDiscToolProperties
          (UProceduralDiscToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralDiscToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->DiscType = Disc;
  this->Radius = 50.0;
  this->RadialSlices = 0x10;
  this->RadialSubdivisions = 1;
  this->HoleRadius = 25.0;
  return this;
}

// ~UProceduralDiscToolProperties @ 14cbe06f0

void __thiscall
UProceduralDiscToolProperties::~UProceduralDiscToolProperties(UProceduralDiscToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0aa0

UClass * __cdecl UProceduralDiscToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralDiscToolProperties",
               &Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralDiscToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralDiscToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralDiscToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralDiscToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralDiscToolProperties @ 14cbf6d00

void __cdecl UProceduralDiscToolProperties::StaticRegisterNativesUProceduralDiscToolProperties(void)

{
  return;
}

