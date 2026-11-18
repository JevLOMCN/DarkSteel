// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1c70

UClass * __cdecl UProceduralBoxToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralBoxToolProperties",
               &Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralBoxToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralBoxToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralBoxToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton;
}

// UProceduralBoxToolProperties @ 14cbde0e0

UProceduralBoxToolProperties * __thiscall
UProceduralBoxToolProperties::UProceduralBoxToolProperties
          (UProceduralBoxToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralBoxToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Width = 100.0;
  this->Depth = 100.0;
  this->Height = 100.0;
  this->WidthSubdivisions = 1;
  this->DepthSubdivisions = 1;
  this->HeightSubdivisions = 1;
  return this;
}

// UProceduralBoxToolProperties @ 14cbde170

UProceduralBoxToolProperties * __thiscall
UProceduralBoxToolProperties::UProceduralBoxToolProperties
          (UProceduralBoxToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralBoxToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Width = 100.0;
  this->Depth = 100.0;
  this->Height = 100.0;
  this->WidthSubdivisions = 1;
  this->DepthSubdivisions = 1;
  this->HeightSubdivisions = 1;
  return this;
}

// ~UProceduralBoxToolProperties @ 14cbe0670

void __thiscall
UProceduralBoxToolProperties::~UProceduralBoxToolProperties(UProceduralBoxToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf07a0

UClass * __cdecl UProceduralBoxToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralBoxToolProperties",
               &Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralBoxToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralBoxToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralBoxToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralBoxToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralBoxToolProperties @ 14cbf6cc0

void __cdecl UProceduralBoxToolProperties::StaticRegisterNativesUProceduralBoxToolProperties(void)

{
  return;
}

