// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd21b0

UClass * __cdecl UProceduralArrowToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralArrowToolProperties",
               &Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralArrowToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralArrowToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralArrowToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton;
}

// UProceduralArrowToolProperties @ 14cbddfc0

UProceduralArrowToolProperties * __thiscall
UProceduralArrowToolProperties::UProceduralArrowToolProperties
          (UProceduralArrowToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralArrowToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->ShaftRadius = 20.0;
  this->ShaftHeight = 200.0;
  this->HeadRadius = 60.0;
  this->HeadHeight = 120.0;
  this->RadialSlices = 0x10;
  this->HeightSubdivisions = 1;
  return this;
}

// UProceduralArrowToolProperties @ 14cbde050

UProceduralArrowToolProperties * __thiscall
UProceduralArrowToolProperties::UProceduralArrowToolProperties
          (UProceduralArrowToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralArrowToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->ShaftRadius = 20.0;
  this->ShaftHeight = 200.0;
  this->HeadRadius = 60.0;
  this->HeadHeight = 120.0;
  this->RadialSlices = 0x10;
  this->HeightSubdivisions = 1;
  return this;
}

// ~UProceduralArrowToolProperties @ 14cbe0650

void __thiscall
UProceduralArrowToolProperties::~UProceduralArrowToolProperties
          (UProceduralArrowToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf06e0

UClass * __cdecl UProceduralArrowToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralArrowToolProperties",
               &Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralArrowToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralArrowToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralArrowToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralArrowToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralArrowToolProperties @ 14cbf6cb0

void __cdecl
UProceduralArrowToolProperties::StaticRegisterNativesUProceduralArrowToolProperties(void)

{
  return;
}

