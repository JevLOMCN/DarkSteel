// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd1d30

UClass * __cdecl UProceduralRectangleToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralRectangleToolProperties",
               &Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralRectangleToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralRectangleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralRectangleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton;
}

// UProceduralRectangleToolProperties @ 14cbde620

UProceduralRectangleToolProperties * __thiscall
UProceduralRectangleToolProperties::UProceduralRectangleToolProperties
          (UProceduralRectangleToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralRectangleToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->RectangleType = Rectangle;
  this->Width = 100.0;
  this->Depth = 100.0;
  this->WidthSubdivisions = 1;
  this->DepthSubdivisions = 1;
  this->bMaintainDimension = true;
  this->CornerRadius = 25.0;
  this->CornerSlices = 0x10;
  return this;
}

// UProceduralRectangleToolProperties @ 14cbde6c0

UProceduralRectangleToolProperties * __thiscall
UProceduralRectangleToolProperties::UProceduralRectangleToolProperties
          (UProceduralRectangleToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UProceduralRectangleToolProperties__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->RectangleType = Rectangle;
  this->Width = 100.0;
  this->Depth = 100.0;
  this->WidthSubdivisions = 1;
  this->DepthSubdivisions = 1;
  this->bMaintainDimension = true;
  this->CornerRadius = 25.0;
  this->CornerSlices = 0x10;
  return this;
}

// ~UProceduralRectangleToolProperties @ 14cbe0710

void __thiscall
UProceduralRectangleToolProperties::~UProceduralRectangleToolProperties
          (UProceduralRectangleToolProperties *this)

{
  this->_padding_ = (longlong)&___7UProceduralShapeToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0b60

UClass * __cdecl UProceduralRectangleToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProceduralRectangleToolProperties",
               &Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton,
               StaticRegisterNativesUProceduralRectangleToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UProceduralRectangleToolProperties>,
               InternalVTableHelperCtorCaller<UProceduralRectangleToolProperties>,local_res8,
               UProceduralShapeToolProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralRectangleToolProperties.InnerSingleton;
}

// StaticRegisterNativesUProceduralRectangleToolProperties @ 14cbf6d10

void __cdecl
UProceduralRectangleToolProperties::StaticRegisterNativesUProceduralRectangleToolProperties(void)

{
  return;
}

