// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc91550

UClass * __cdecl UHoleFillToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillToolProperties",
               &Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton,
               StaticRegisterNativesUHoleFillToolProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillToolProperties>,
               InternalVTableHelperCtorCaller<UHoleFillToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton;
}

// UHoleFillToolProperties @ 14ccbb180

UHoleFillToolProperties * __thiscall
UHoleFillToolProperties::UHoleFillToolProperties
          (UHoleFillToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->FillType = Minimal;
  this->bRemoveIsolatedTriangles = false;
  this->_padding_ = (longlong)&___7UHoleFillToolProperties__6B_;
  this->bQuickFillSmallHoles = false;
  return this;
}

// UHoleFillToolProperties @ 14ccbb1c0

UHoleFillToolProperties * __thiscall
UHoleFillToolProperties::UHoleFillToolProperties
          (UHoleFillToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->FillType = Minimal;
  this->bRemoveIsolatedTriangles = false;
  this->_padding_ = (longlong)&___7UHoleFillToolProperties__6B_;
  this->bQuickFillSmallHoles = false;
  return this;
}

// ~UHoleFillToolProperties @ 14ccc3610

void __thiscall UHoleFillToolProperties::~UHoleFillToolProperties(UHoleFillToolProperties *this)

{
  this->_padding_ = (longlong)&___7UHoleFillToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff310

UClass * __cdecl UHoleFillToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillToolProperties",
               &Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton,
               StaticRegisterNativesUHoleFillToolProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillToolProperties>,
               InternalVTableHelperCtorCaller<UHoleFillToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillToolProperties.InnerSingleton;
}

// StaticRegisterNativesUHoleFillToolProperties @ 14cd2ee70

void __cdecl UHoleFillToolProperties::StaticRegisterNativesUHoleFillToolProperties(void)

{
  return;
}

