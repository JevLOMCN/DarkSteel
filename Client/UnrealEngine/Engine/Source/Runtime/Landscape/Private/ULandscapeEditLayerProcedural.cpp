// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// StaticClass @ 145f35d80

UClass * __cdecl ULandscapeEditLayerProcedural::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerProcedural",
               &Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerProcedural,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerProcedural>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerProcedural>,local_res8,
               ULandscapeEditLayerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton;
}

// ULandscapeEditLayerProcedural @ 145f42820

ULandscapeEditLayerProcedural * __thiscall
ULandscapeEditLayerProcedural::ULandscapeEditLayerProcedural
          (ULandscapeEditLayerProcedural *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerProcedural__6B_;
  return this;
}

// ULandscapeEditLayerProcedural @ 145f42850

ULandscapeEditLayerProcedural * __thiscall
ULandscapeEditLayerProcedural::ULandscapeEditLayerProcedural
          (ULandscapeEditLayerProcedural *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerProcedural__6B_;
  return this;
}

// ~ULandscapeEditLayerProcedural @ 145f43ab0

void __thiscall
ULandscapeEditLayerProcedural::~ULandscapeEditLayerProcedural(ULandscapeEditLayerProcedural *this)

{
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145f53f00

UClass * __cdecl ULandscapeEditLayerProcedural::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerProcedural",
               &Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerProcedural,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeEditLayerProcedural>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerProcedural>,local_res8,
               ULandscapeEditLayerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.InnerSingleton;
}

// StaticRegisterNativesULandscapeEditLayerProcedural @ 145f5ec50

void __cdecl ULandscapeEditLayerProcedural::StaticRegisterNativesULandscapeEditLayerProcedural(void)

{
  return;
}

// SupportsBeingCollapsedAway @ 145f5ecf0

bool __thiscall
ULandscapeEditLayerProcedural::SupportsBeingCollapsedAway(ULandscapeEditLayerProcedural *this)

{
  return false;
}

// SupportsBlueprintBrushes @ 145f5ed60

bool __thiscall
ULandscapeEditLayerProcedural::SupportsBlueprintBrushes(ULandscapeEditLayerProcedural *this)

{
  return false;
}

// SupportsCollapsingTo @ 145f5edb0

bool __thiscall
ULandscapeEditLayerProcedural::SupportsCollapsingTo(ULandscapeEditLayerProcedural *this)

{
  return false;
}

// SupportsEditingTools @ 145f5ee00

bool __thiscall
ULandscapeEditLayerProcedural::SupportsEditingTools(ULandscapeEditLayerProcedural *this)

{
  return false;
}

