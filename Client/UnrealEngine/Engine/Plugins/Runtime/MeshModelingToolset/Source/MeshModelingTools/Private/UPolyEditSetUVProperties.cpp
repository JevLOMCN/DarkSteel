// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd417c0

UClass * __cdecl UPolyEditSetUVProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditSetUVProperties",
               &Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditSetUVProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditSetUVProperties>,
               InternalVTableHelperCtorCaller<UPolyEditSetUVProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton;
}

// UPolyEditSetUVProperties @ 14cd51240

UPolyEditSetUVProperties * __thiscall
UPolyEditSetUVProperties::UPolyEditSetUVProperties
          (UPolyEditSetUVProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowMaterial = false;
  this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
  return this;
}

// UPolyEditSetUVProperties @ 14cd51270

UPolyEditSetUVProperties * __thiscall
UPolyEditSetUVProperties::UPolyEditSetUVProperties
          (UPolyEditSetUVProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bShowMaterial = false;
  this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
  return this;
}

// ~UPolyEditSetUVProperties @ 14cd53830

void __thiscall UPolyEditSetUVProperties::~UPolyEditSetUVProperties(UPolyEditSetUVProperties *this)

{
  this->_padding_ = (longlong)&___7UPolyEditSetUVProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e460

UClass * __cdecl UPolyEditSetUVProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditSetUVProperties",
               &Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditSetUVProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditSetUVProperties>,
               InternalVTableHelperCtorCaller<UPolyEditSetUVProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditSetUVProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditSetUVProperties @ 14cd814c0

void __cdecl UPolyEditSetUVProperties::StaticRegisterNativesUPolyEditSetUVProperties(void)

{
  return;
}

