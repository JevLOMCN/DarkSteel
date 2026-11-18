// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd43950

UClass * __cdecl UDiffusionSmoothProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DiffusionSmoothProperties",
               &Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton,
               StaticRegisterNativesUDiffusionSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDiffusionSmoothProperties>,
               InternalVTableHelperCtorCaller<UDiffusionSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton;
}

// UDiffusionSmoothProperties @ 14cd4f6c0

UDiffusionSmoothProperties * __thiscall
UDiffusionSmoothProperties::UDiffusionSmoothProperties
          (UDiffusionSmoothProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingPerStep = 0.8;
  this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
  this->Steps = 1;
  this->bPreserveUVs = true;
  return this;
}

// UDiffusionSmoothProperties @ 14cd4f710

UDiffusionSmoothProperties * __thiscall
UDiffusionSmoothProperties::UDiffusionSmoothProperties
          (UDiffusionSmoothProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingPerStep = 0.8;
  this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
  this->Steps = 1;
  this->bPreserveUVs = true;
  return this;
}

// ~UDiffusionSmoothProperties @ 14cd532a0

void __thiscall
UDiffusionSmoothProperties::~UDiffusionSmoothProperties(UDiffusionSmoothProperties *this)

{
  this->_padding_ = (longlong)&___7UDiffusionSmoothProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d560

UClass * __cdecl UDiffusionSmoothProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DiffusionSmoothProperties",
               &Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton,
               StaticRegisterNativesUDiffusionSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDiffusionSmoothProperties>,
               InternalVTableHelperCtorCaller<UDiffusionSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiffusionSmoothProperties.InnerSingleton;
}

// StaticRegisterNativesUDiffusionSmoothProperties @ 14cd81380

void __cdecl UDiffusionSmoothProperties::StaticRegisterNativesUDiffusionSmoothProperties(void)

{
  return;
}

