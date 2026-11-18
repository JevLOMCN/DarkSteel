// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc941d0

UClass * __cdecl UVertexPaintBrushFilterProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexPaintBrushFilterProperties",
               &Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton,
               StaticRegisterNativesUVertexPaintBrushFilterProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexPaintBrushFilterProperties>,
               InternalVTableHelperCtorCaller<UVertexPaintBrushFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton;
}

// UVertexPaintBrushFilterProperties @ 14ccc04c0

UVertexPaintBrushFilterProperties * __thiscall
UVertexPaintBrushFilterProperties::UVertexPaintBrushFilterProperties
          (UVertexPaintBrushFilterProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->BrushAreaMode = Connected;
  this->_padding_ = (longlong)&___7UVertexPaintBrushFilterProperties__6B_;
  this->AngleThreshold = 180.0;
  this->bUVSeams = false;
  this->bNormalSeams = false;
  this->VisibilityFilter = None;
  this->bIsolateGeometrySelection = false;
  this->bToolHasSelection = false;
  this->MinTriVertCount = 1;
  this->MaterialMode = UnlitVertexColor;
  this->bShowHitColor = false;
  return this;
}

// UVertexPaintBrushFilterProperties @ 14ccc0520

UVertexPaintBrushFilterProperties * __thiscall
UVertexPaintBrushFilterProperties::UVertexPaintBrushFilterProperties
          (UVertexPaintBrushFilterProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->BrushAreaMode = Connected;
  this->_padding_ = (longlong)&___7UVertexPaintBrushFilterProperties__6B_;
  this->AngleThreshold = 180.0;
  this->bUVSeams = false;
  this->bNormalSeams = false;
  this->VisibilityFilter = None;
  this->bIsolateGeometrySelection = false;
  this->bToolHasSelection = false;
  this->MinTriVertCount = 1;
  this->MaterialMode = UnlitVertexColor;
  this->bShowHitColor = false;
  return this;
}

// ~UVertexPaintBrushFilterProperties @ 14ccc4f80

void __thiscall
UVertexPaintBrushFilterProperties::~UVertexPaintBrushFilterProperties
          (UVertexPaintBrushFilterProperties *this)

{
  this->_padding_ = (longlong)&___7UVertexPaintBrushFilterProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd02090

UClass * __cdecl UVertexPaintBrushFilterProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexPaintBrushFilterProperties",
               &Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton,
               StaticRegisterNativesUVertexPaintBrushFilterProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexPaintBrushFilterProperties>,
               InternalVTableHelperCtorCaller<UVertexPaintBrushFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.InnerSingleton;
}

// StaticRegisterNativesUVertexPaintBrushFilterProperties @ 14cd2f3c0

void __cdecl
UVertexPaintBrushFilterProperties::StaticRegisterNativesUVertexPaintBrushFilterProperties(void)

{
  return;
}

