// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// StaticClass @ 145f35e40

UClass * __cdecl ULandscapeEditLayerSplines::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerSplines",
               &Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerSplines,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULandscapeEditLayerSplines>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerSplines>,local_res8,
               ULandscapeEditLayerPersistent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton;
}

// ULandscapeEditLayerSplines @ 145f42880

ULandscapeEditLayerSplines * __thiscall
ULandscapeEditLayerSplines::ULandscapeEditLayerSplines
          (ULandscapeEditLayerSplines *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ULandscapeEditLayerSplines @ 145f428c0

ULandscapeEditLayerSplines * __thiscall
ULandscapeEditLayerSplines::ULandscapeEditLayerSplines
          (ULandscapeEditLayerSplines *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ~ULandscapeEditLayerSplines @ 145f43ad0

void __thiscall
ULandscapeEditLayerSplines::~ULandscapeEditLayerSplines(ULandscapeEditLayerSplines *this)

{
  *(undefined ***)&this->field_0x28 = &___7ILandscapeEditLayerRenderer__6B_;
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultName @ 145f53850

FString * __thiscall
ULandscapeEditLayerSplines::GetDefaultName
          (ULandscapeEditLayerSplines *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Splines");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f53fc0

UClass * __cdecl ULandscapeEditLayerSplines::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerSplines",
               &Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerSplines,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULandscapeEditLayerSplines>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerSplines>,local_res8,
               ULandscapeEditLayerPersistent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerSplines.InnerSingleton;
}

// NeedsPersistentTextures @ 145f59980

bool __thiscall
ULandscapeEditLayerSplines::NeedsPersistentTextures(ULandscapeEditLayerSplines *this)

{
  return true;
}

// StaticRegisterNativesULandscapeEditLayerSplines @ 145f5ec60

void __cdecl ULandscapeEditLayerSplines::StaticRegisterNativesULandscapeEditLayerSplines(void)

{
  return;
}

// SupportsBeingCollapsedAway @ 145f5ed00

bool __thiscall
ULandscapeEditLayerSplines::SupportsBeingCollapsedAway(ULandscapeEditLayerSplines *this)

{
  return false;
}

// SupportsEditingTools @ 145f5ee10

bool __thiscall ULandscapeEditLayerSplines::SupportsEditingTools(ULandscapeEditLayerSplines *this)

{
  return false;
}

// SupportsMultiple @ 145f5ee60

bool __thiscall ULandscapeEditLayerSplines::SupportsMultiple(ULandscapeEditLayerSplines *this)

{
  return false;
}

// SupportsTargetType @ 145f5eeb0

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

bool __thiscall
ULandscapeEditLayerSplines::SupportsTargetType
          (ULandscapeEditLayerSplines *this,ELandscapeToolTargetType param_1)

{
  return param_1 < Count;
}

