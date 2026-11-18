// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 12

// StaticClass @ 14db0ac60

UClass * __cdecl ULandscapePatchEditLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchEditLayer",
               &Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton,
               StaticRegisterNativesULandscapePatchEditLayer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapePatchEditLayer>,
               InternalVTableHelperCtorCaller<ULandscapePatchEditLayer>,local_res8,
               ULandscapeEditLayerProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton;
}

// ULandscapePatchEditLayer @ 14db12fd0

ULandscapePatchEditLayer * __thiscall
ULandscapePatchEditLayer::ULandscapePatchEditLayer
          (ULandscapePatchEditLayer *this,FVTableHelper *param_1)

{
  ULandscapeEditLayerProcedural::ULandscapeEditLayerProcedural
            ((ULandscapeEditLayerProcedural *)this,param_1);
  *(undefined ***)this = &___7ULandscapePatchEditLayer__6B_;
  return this;
}

// ULandscapePatchEditLayer @ 14db13000

ULandscapePatchEditLayer * __thiscall
ULandscapePatchEditLayer::ULandscapePatchEditLayer
          (ULandscapePatchEditLayer *this,FObjectInitializer *param_1)

{
  ULandscapeEditLayerProcedural::ULandscapeEditLayerProcedural
            ((ULandscapeEditLayerProcedural *)this,param_1);
  *(undefined ***)this = &___7ULandscapePatchEditLayer__6B_;
  return this;
}

// ~ULandscapePatchEditLayer @ 14db13540

void __thiscall ULandscapePatchEditLayer::~ULandscapePatchEditLayer(ULandscapePatchEditLayer *this)

{
  *(undefined ***)this = &___7ULandscapePatchEditLayer__6B_;
  ULandscapeEditLayerProcedural::~ULandscapeEditLayerProcedural
            ((ULandscapeEditLayerProcedural *)this);
  return;
}

// GetDefaultName @ 14db18380

FString * __thiscall
ULandscapePatchEditLayer::GetDefaultName
          (ULandscapePatchEditLayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Patches");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14db18ef0

UClass * __cdecl ULandscapePatchEditLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchEditLayer",
               &Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton,
               StaticRegisterNativesULandscapePatchEditLayer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapePatchEditLayer>,
               InternalVTableHelperCtorCaller<ULandscapePatchEditLayer>,local_res8,
               ULandscapeEditLayerProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapePatchEditLayer.InnerSingleton;
}

// GetRenderDependencies @ 14db192a0

void __thiscall
ULandscapePatchEditLayer::GetRenderDependencies
          (ULandscapePatchEditLayer *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// NeedsPersistentTextures @ 14db1bac0

bool __thiscall ULandscapePatchEditLayer::NeedsPersistentTextures(ULandscapePatchEditLayer *this)

{
  return false;
}

// OnLayerRemoved @ 14db1bbb0

void __thiscall ULandscapePatchEditLayer::OnLayerRemoved(ULandscapePatchEditLayer *this)

{
  return;
}

// StaticRegisterNativesULandscapePatchEditLayer @ 14db1d540

void __cdecl ULandscapePatchEditLayer::StaticRegisterNativesULandscapePatchEditLayer(void)

{
  return;
}

// SupportsMultiple @ 14db1d5c0

bool __thiscall ULandscapePatchEditLayer::SupportsMultiple(ULandscapePatchEditLayer *this)

{
  return true;
}

// SupportsTargetType @ 14db1d5d0

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

bool __thiscall
ULandscapePatchEditLayer::SupportsTargetType
          (ULandscapePatchEditLayer *this,ELandscapeToolTargetType param_1)

{
  return param_1 != Count;
}

