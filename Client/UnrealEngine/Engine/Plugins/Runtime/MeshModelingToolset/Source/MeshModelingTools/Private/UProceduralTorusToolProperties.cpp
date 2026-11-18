// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1f70

UClass * __cdecl UProceduralTorusToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralTorusToolProperties",
               &Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralTorusToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralTorusToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralTorusToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton;
}

// UProceduralTorusToolProperties @ 14cbdea80

UProceduralTorusToolProperties * __thiscall
UProceduralTorusToolProperties::UProceduralTorusToolProperties
          (UProceduralTorusToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralTorusToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->MajorRadius = 50.0;
  this->MinorRadius = 25.0;
  this->MajorSlices = 0x10;
  this->MinorSlices = 0x10;
  return this;
}

// UProceduralTorusToolProperties @ 14cbdeb00

UProceduralTorusToolProperties * __thiscall
UProceduralTorusToolProperties::UProceduralTorusToolProperties
          (UProceduralTorusToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = (longlong)&___7UProceduralTorusToolProperties__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->MajorRadius = 50.0;
  this->MinorRadius = 25.0;
  this->MajorSlices = 0x10;
  this->MinorSlices = 0x10;
  return this;
}

// ~UProceduralTorusToolProperties @ 14cbe0790

void __thiscall
UProceduralTorusToolProperties::~UProceduralTorusToolProperties
          (UProceduralTorusToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0e60

UClass * __cdecl UProceduralTorusToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralTorusToolProperties",
               &Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralTorusToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralTorusToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralTorusToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralTorusToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralTorusToolProperties @ 14cbf6d50

void __cdecl
UProceduralTorusToolProperties::StaticRegisterNativesUProceduralTorusToolProperties(void)

{
  return;
}

