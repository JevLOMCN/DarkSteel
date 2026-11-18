// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc93200

UClass * __cdecl UKelvinBrushProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"KelvinBrushProperties",
               &Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton,
               StaticRegisterNativesUKelvinBrushProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UKelvinBrushProperties>,
               InternalVTableHelperCtorCaller<UKelvinBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton;
}

// UKelvinBrushProperties @ 14ccbb320

UKelvinBrushProperties * __thiscall
UKelvinBrushProperties::UKelvinBrushProperties(UKelvinBrushProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->FallOffDistance = 1.0;
  this->_padding_ = (longlong)&___7UKelvinBrushProperties__6B_;
  this->Stiffness = 1.0;
  this->Incompressiblity = 1.0;
  this->BrushSteps = 3;
  return this;
}

// UKelvinBrushProperties @ 14ccbb370

UKelvinBrushProperties * __thiscall
UKelvinBrushProperties::UKelvinBrushProperties
          (UKelvinBrushProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->FallOffDistance = 1.0;
  this->_padding_ = (longlong)&___7UKelvinBrushProperties__6B_;
  this->Stiffness = 1.0;
  this->Incompressiblity = 1.0;
  this->BrushSteps = 3;
  return this;
}

// ~UKelvinBrushProperties @ 14ccc3670

void __thiscall UKelvinBrushProperties::~UKelvinBrushProperties(UKelvinBrushProperties *this)

{
  this->_padding_ = (longlong)&___7UKelvinBrushProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff550

UClass * __cdecl UKelvinBrushProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"KelvinBrushProperties",
               &Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton,
               StaticRegisterNativesUKelvinBrushProperties,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UKelvinBrushProperties>,
               InternalVTableHelperCtorCaller<UKelvinBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKelvinBrushProperties.InnerSingleton;
}

// StaticRegisterNativesUKelvinBrushProperties @ 14cd2eea0

void __cdecl UKelvinBrushProperties::StaticRegisterNativesUKelvinBrushProperties(void)

{
  return;
}

