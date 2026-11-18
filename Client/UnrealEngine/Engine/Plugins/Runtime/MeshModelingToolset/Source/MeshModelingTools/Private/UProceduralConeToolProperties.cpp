// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd20f0

UClass * __cdecl UProceduralConeToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralConeToolProperties",
               &Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralConeToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralConeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralConeToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton;
}

// UProceduralConeToolProperties @ 14cbde320

UProceduralConeToolProperties * __thiscall
UProceduralConeToolProperties::UProceduralConeToolProperties
          (UProceduralConeToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralConeToolProperties__6B_;
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

// UProceduralConeToolProperties @ 14cbde3a0

UProceduralConeToolProperties * __thiscall
UProceduralConeToolProperties::UProceduralConeToolProperties
          (UProceduralConeToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralConeToolProperties__6B_;
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

// ~UProceduralConeToolProperties @ 14cbe06b0

void __thiscall
UProceduralConeToolProperties::~UProceduralConeToolProperties(UProceduralConeToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0920

UClass * __cdecl UProceduralConeToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralConeToolProperties",
               &Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralConeToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralConeToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralConeToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralConeToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralConeToolProperties @ 14cbf6ce0

void __cdecl UProceduralConeToolProperties::StaticRegisterNativesUProceduralConeToolProperties(void)

{
  return;
}

