// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966bfd0

UClass * __cdecl UBrushBaseProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushBaseProperties",
               &Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton,
               StaticRegisterNativesUBrushBaseProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushBaseProperties>,
               InternalVTableHelperCtorCaller<UBrushBaseProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton;
}

// UBrushBaseProperties @ 1496834f0

UBrushBaseProperties * __thiscall
UBrushBaseProperties::UBrushBaseProperties(UBrushBaseProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bToolSupportsPressureSensitivity = false;
  this->bEnablePressureSensitivity = false;
  this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
  this->bHitBackFaces = false;
  this->bShowStrength = true;
  this->bShowFalloff = true;
  this->bShowHitBackFaces = false;
  return this;
}

// UBrushBaseProperties @ 149683530

UBrushBaseProperties * __thiscall
UBrushBaseProperties::UBrushBaseProperties(UBrushBaseProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar1);
  this->bToolSupportsPressureSensitivity = false;
  this->bEnablePressureSensitivity = false;
  this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
  this->bHitBackFaces = false;
  this->bShowStrength = true;
  this->bShowFalloff = true;
  this->bShowHitBackFaces = false;
  this->BrushSize = 0.25;
  this->bSpecifyRadius = false;
  this->BrushRadius = 10.0;
  this->BrushStrength = 0.5;
  this->BrushFalloffAmount = 1.0;
  return this;
}

// ~UBrushBaseProperties @ 149689530

void __thiscall UBrushBaseProperties::~UBrushBaseProperties(UBrushBaseProperties *this)

{
  this->_padding_ = (longlong)&___7UBrushBaseProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 1496a41d0

UClass * __cdecl UBrushBaseProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushBaseProperties",
               &Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton,
               StaticRegisterNativesUBrushBaseProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushBaseProperties>,
               InternalVTableHelperCtorCaller<UBrushBaseProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBaseProperties.InnerSingleton;
}

// StaticRegisterNativesUBrushBaseProperties @ 1496c2770

void __cdecl UBrushBaseProperties::StaticRegisterNativesUBrushBaseProperties(void)

{
  return;
}

