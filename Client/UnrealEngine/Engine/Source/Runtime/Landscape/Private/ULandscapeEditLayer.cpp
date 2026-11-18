// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// StaticClass @ 145f35b70

UClass * __cdecl ULandscapeEditLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayer",
               &Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayer,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeEditLayer>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayer>,local_res8,
               ULandscapeEditLayerPersistent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton;
}

// ULandscapeEditLayer @ 145f426c0

ULandscapeEditLayer * __thiscall
ULandscapeEditLayer::ULandscapeEditLayer(ULandscapeEditLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ULandscapeEditLayer @ 145f42700

ULandscapeEditLayer * __thiscall
ULandscapeEditLayer::ULandscapeEditLayer(ULandscapeEditLayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__ULandscapeEditLayerBase__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ILandscapeEditLayerRenderer__;
  return this;
}

// ~ULandscapeEditLayer @ 145f43a50

void __thiscall ULandscapeEditLayer::~ULandscapeEditLayer(ULandscapeEditLayer *this)

{
  *(undefined ***)&this->field_0x28 = &___7ILandscapeEditLayerRenderer__6B_;
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultName @ 145f537e0

FString * __thiscall
ULandscapeEditLayer::GetDefaultName(ULandscapeEditLayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Layer");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f53cd0

UClass * __cdecl ULandscapeEditLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayer",
               &Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayer,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeEditLayer>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayer>,local_res8,
               ULandscapeEditLayerPersistent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayer.InnerSingleton;
}

// StaticRegisterNativesULandscapeEditLayer @ 145f5ec20

void __cdecl ULandscapeEditLayer::StaticRegisterNativesULandscapeEditLayer(void)

{
  return;
}

// SupportsBeingCollapsedAway @ 145f5ecb0

bool __thiscall ULandscapeEditLayer::SupportsBeingCollapsedAway(ULandscapeEditLayer *this)

{
  return true;
}

// SupportsBlueprintBrushes @ 145f5ed10

bool __thiscall ULandscapeEditLayer::SupportsBlueprintBrushes(ULandscapeEditLayer *this)

{
  return true;
}

// SupportsEditingTools @ 145f5edc0

bool __thiscall ULandscapeEditLayer::SupportsEditingTools(ULandscapeEditLayer *this)

{
  return true;
}

// SupportsMultiple @ 145f5ee20

bool __thiscall ULandscapeEditLayer::SupportsMultiple(ULandscapeEditLayer *this)

{
  return true;
}

// SupportsTargetType @ 145f5ee70

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

bool __thiscall
ULandscapeEditLayer::SupportsTargetType(ULandscapeEditLayer *this,ELandscapeToolTargetType param_1)

{
  return param_1 < Count;
}

