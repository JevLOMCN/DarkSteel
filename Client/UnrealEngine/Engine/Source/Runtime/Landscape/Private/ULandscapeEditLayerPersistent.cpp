// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// StaticClass @ 145f35ab0

UClass * __cdecl ULandscapeEditLayerPersistent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerPersistent",
               &Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerPersistent,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerPersistent>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerPersistent>,local_res8,
               ULandscapeEditLayerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton;
}

// ULandscapeEditLayerPersistent @ 145f427a0

ULandscapeEditLayerPersistent * __thiscall
ULandscapeEditLayerPersistent::ULandscapeEditLayerPersistent
          (ULandscapeEditLayerPersistent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ULandscapeEditLayerPersistent @ 145f427e0

ULandscapeEditLayerPersistent * __thiscall
ULandscapeEditLayerPersistent::ULandscapeEditLayerPersistent
          (ULandscapeEditLayerPersistent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ~ULandscapeEditLayerPersistent @ 145f43a90

void __thiscall
ULandscapeEditLayerPersistent::~ULandscapeEditLayerPersistent(ULandscapeEditLayerPersistent *this)

{
  *(undefined ***)&this->field_0x28 = &___7ILandscapeEditLayerRenderer__6B_;
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145f53e40

UClass * __cdecl ULandscapeEditLayerPersistent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerPersistent",
               &Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerPersistent,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerPersistent>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerPersistent>,local_res8,
               ULandscapeEditLayerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.InnerSingleton;
}

// NeedsPersistentTextures @ 145f59970

bool __thiscall
ULandscapeEditLayerPersistent::NeedsPersistentTextures(ULandscapeEditLayerPersistent *this)

{
  return true;
}

// StaticRegisterNativesULandscapeEditLayerPersistent @ 145f5ec40

void __cdecl ULandscapeEditLayerPersistent::StaticRegisterNativesULandscapeEditLayerPersistent(void)

{
  return;
}

// SupportsBlueprintBrushes @ 145f5ed50

bool __thiscall
ULandscapeEditLayerPersistent::SupportsBlueprintBrushes(ULandscapeEditLayerPersistent *this)

{
  return false;
}

// SupportsCollapsingTo @ 145f5eda0

bool __thiscall
ULandscapeEditLayerPersistent::SupportsCollapsingTo(ULandscapeEditLayerPersistent *this)

{
  return true;
}

// _getUObject @ 145f64e90

UObject * __thiscall ULandscapeEditLayerPersistent::_getUObject(ULandscapeEditLayerPersistent *this)

{
  return (UObject *)&this[-1].field_0x8;
}

