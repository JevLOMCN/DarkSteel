// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc92600

UClass * __cdecl UGroupPaintBrushFilterProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupPaintBrushFilterProperties",
               &Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton,
               StaticRegisterNativesUGroupPaintBrushFilterProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupPaintBrushFilterProperties>,
               InternalVTableHelperCtorCaller<UGroupPaintBrushFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton;
}

// UGroupPaintBrushFilterProperties @ 14ccbac20

UGroupPaintBrushFilterProperties * __thiscall
UGroupPaintBrushFilterProperties::UGroupPaintBrushFilterProperties
          (UGroupPaintBrushFilterProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Paint;
  this->SubToolType = Brush;
  this->_padding_ = (longlong)&___7UGroupPaintBrushFilterProperties__6B_;
  this->BrushSize = 0.25;
  this->BrushAreaMode = Connected;
  this->bHitBackFaces = true;
  this->SetGroup = 1;
  this->bOnlySetUngrouped = false;
  this->EraseGroup = 0;
  this->bOnlyEraseCurrent = false;
  this->AngleThreshold = 180.0;
  this->bUVSeams = false;
  this->bNormalSeams = false;
  this->VisibilityFilter = None;
  this->MinTriVertCount = 1;
  this->bShowHitGroup = false;
  this->bShowAllGroups = false;
  return this;
}

// UGroupPaintBrushFilterProperties @ 14ccbacc0

UGroupPaintBrushFilterProperties * __thiscall
UGroupPaintBrushFilterProperties::UGroupPaintBrushFilterProperties
          (UGroupPaintBrushFilterProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Paint;
  this->SubToolType = Brush;
  this->_padding_ = (longlong)&___7UGroupPaintBrushFilterProperties__6B_;
  this->BrushSize = 0.25;
  this->BrushAreaMode = Connected;
  this->bHitBackFaces = true;
  this->SetGroup = 1;
  this->bOnlySetUngrouped = false;
  this->EraseGroup = 0;
  this->bOnlyEraseCurrent = false;
  this->AngleThreshold = 180.0;
  this->bUVSeams = false;
  this->bNormalSeams = false;
  this->VisibilityFilter = None;
  this->MinTriVertCount = 1;
  this->bShowHitGroup = false;
  this->bShowAllGroups = false;
  return this;
}

// ~UGroupPaintBrushFilterProperties @ 14ccc33d0

void __thiscall
UGroupPaintBrushFilterProperties::~UGroupPaintBrushFilterProperties
          (UGroupPaintBrushFilterProperties *this)

{
  this->_padding_ = (longlong)&___7UGroupPaintBrushFilterProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccfeea0

UClass * __cdecl UGroupPaintBrushFilterProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupPaintBrushFilterProperties",
               &Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton,
               StaticRegisterNativesUGroupPaintBrushFilterProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupPaintBrushFilterProperties>,
               InternalVTableHelperCtorCaller<UGroupPaintBrushFilterProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.InnerSingleton;
}

// StaticRegisterNativesUGroupPaintBrushFilterProperties @ 14cd2ede0

void __cdecl
UGroupPaintBrushFilterProperties::StaticRegisterNativesUGroupPaintBrushFilterProperties(void)

{
  return;
}

