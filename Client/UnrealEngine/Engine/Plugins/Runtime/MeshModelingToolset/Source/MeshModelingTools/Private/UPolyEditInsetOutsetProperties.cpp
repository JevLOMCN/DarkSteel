// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd40e30

UClass * __cdecl UPolyEditInsetOutsetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetProperties",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditInsetOutsetProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton;
}

// UPolyEditInsetOutsetProperties @ 14cd50e00

UPolyEditInsetOutsetProperties * __thiscall
UPolyEditInsetOutsetProperties::UPolyEditInsetOutsetProperties
          (UPolyEditInsetOutsetProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Softness = 0.5;
  this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
  this->bBoundaryOnly = false;
  this->AreaScale = 1.0;
  this->bReproject = true;
  this->bOutset = false;
  return this;
}

// UPolyEditInsetOutsetProperties @ 14cd50e50

UPolyEditInsetOutsetProperties * __thiscall
UPolyEditInsetOutsetProperties::UPolyEditInsetOutsetProperties
          (UPolyEditInsetOutsetProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Softness = 0.5;
  this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
  this->bBoundaryOnly = false;
  this->AreaScale = 1.0;
  this->bReproject = true;
  this->bOutset = false;
  return this;
}

// ~UPolyEditInsetOutsetProperties @ 14cd537a0

void __thiscall
UPolyEditInsetOutsetProperties::~UPolyEditInsetOutsetProperties
          (UPolyEditInsetOutsetProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditInsetOutsetProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e160

UClass * __cdecl UPolyEditInsetOutsetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetProperties",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditInsetOutsetProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetProperties>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditInsetOutsetProperties @ 14cd81480

void __cdecl
UPolyEditInsetOutsetProperties::StaticRegisterNativesUPolyEditInsetOutsetProperties(void)

{
  return;
}

