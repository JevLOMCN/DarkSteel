// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd43890

UClass * __cdecl UIterativeSmoothProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"IterativeSmoothProperties",
               &Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton,
               StaticRegisterNativesUIterativeSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIterativeSmoothProperties>,
               InternalVTableHelperCtorCaller<UIterativeSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton;
}

// UIterativeSmoothProperties @ 14cd4f9c0

UIterativeSmoothProperties * __thiscall
UIterativeSmoothProperties::UIterativeSmoothProperties
          (UIterativeSmoothProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingPerStep = 0.8;
  this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
  this->Steps = 10;
  this->bSmoothBoundary = true;
  return this;
}

// UIterativeSmoothProperties @ 14cd4fa10

UIterativeSmoothProperties * __thiscall
UIterativeSmoothProperties::UIterativeSmoothProperties
          (UIterativeSmoothProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SmoothingPerStep = 0.8;
  this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
  this->Steps = 10;
  this->bSmoothBoundary = true;
  return this;
}

// ~UIterativeSmoothProperties @ 14cd53320

void __thiscall
UIterativeSmoothProperties::~UIterativeSmoothProperties(UIterativeSmoothProperties *this)

{
  this->_padding_ = (longlong)&___7UIterativeSmoothProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d860

UClass * __cdecl UIterativeSmoothProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"IterativeSmoothProperties",
               &Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton,
               StaticRegisterNativesUIterativeSmoothProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UIterativeSmoothProperties>,
               InternalVTableHelperCtorCaller<UIterativeSmoothProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIterativeSmoothProperties.InnerSingleton;
}

// StaticRegisterNativesUIterativeSmoothProperties @ 14cd813c0

void __cdecl UIterativeSmoothProperties::StaticRegisterNativesUIterativeSmoothProperties(void)

{
  return;
}

