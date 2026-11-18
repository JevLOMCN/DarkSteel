// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc930e0

UClass * __cdecl USculptBrushProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptBrushProperties",
               &Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton,
               StaticRegisterNativesUSculptBrushProperties,0xf0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USculptBrushProperties>,
               InternalVTableHelperCtorCaller<USculptBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton;
}

// USculptBrushProperties @ 14ccbffe0

USculptBrushProperties * __thiscall
USculptBrushProperties::USculptBrushProperties(USculptBrushProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->StrokeType = Spacing;
  this->_padding_ = (longlong)&___7USculptBrushProperties__6B_;
  this->Depth = 0.0;
  (this->BrushSize).SizeType = Adaptive;
  (this->BrushSize).AdaptiveSize = 0.25;
  (this->BrushSize).WorldRadius = 100.0;
  (this->BrushSize).bToolSupportsPressureSensitivity = false;
  (this->BrushSize).bEnablePressureSensitivity = false;
  (this->BrushSize).WorldSizeRange.Min = 1.0;
  (this->BrushSize).WorldSizeRange.Max = 1000.0;
  this->bShowFalloff = true;
  this->bHitBackFaces = true;
  this->FlowRate = 1.0;
  this->RayDensity = 1.0;
  this->Spacing = 0.05;
  this->Lazyness = 0.0;
  this->bShowPerBrushProps = true;
  this->bShowLazyness = true;
  this->bShowFlowRate = true;
  this->bShowSpacing = true;
  return this;
}

// USculptBrushProperties @ 14ccc0090

USculptBrushProperties * __thiscall
USculptBrushProperties::USculptBrushProperties
          (USculptBrushProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->StrokeType = Spacing;
  this->_padding_ = (longlong)&___7USculptBrushProperties__6B_;
  this->Depth = 0.0;
  (this->BrushSize).SizeType = Adaptive;
  (this->BrushSize).AdaptiveSize = 0.25;
  (this->BrushSize).WorldRadius = 100.0;
  (this->BrushSize).bToolSupportsPressureSensitivity = false;
  (this->BrushSize).bEnablePressureSensitivity = false;
  (this->BrushSize).WorldSizeRange.Min = 1.0;
  (this->BrushSize).WorldSizeRange.Max = 1000.0;
  this->bShowFalloff = true;
  this->bHitBackFaces = true;
  this->FlowRate = 1.0;
  this->RayDensity = 1.0;
  this->Spacing = 0.05;
  this->Lazyness = 0.0;
  this->bShowPerBrushProps = true;
  this->bShowLazyness = true;
  this->bShowFlowRate = true;
  this->bShowSpacing = true;
  return this;
}

// ~USculptBrushProperties @ 14ccc4ea0

void __thiscall USculptBrushProperties::~USculptBrushProperties(USculptBrushProperties *this)

{
  this->_padding_ = (longlong)&___7USculptBrushProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01b60

UClass * __cdecl USculptBrushProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SculptBrushProperties",
               &Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton,
               StaticRegisterNativesUSculptBrushProperties,0xf0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USculptBrushProperties>,
               InternalVTableHelperCtorCaller<USculptBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USculptBrushProperties.InnerSingleton;
}

// StaticRegisterNativesUSculptBrushProperties @ 14cd2f350

void __cdecl USculptBrushProperties::StaticRegisterNativesUSculptBrushProperties(void)

{
  return;
}

