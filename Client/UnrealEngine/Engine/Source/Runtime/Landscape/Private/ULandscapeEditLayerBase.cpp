// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 24

// StaticClass @ 145f35a00

UClass * __cdecl ULandscapeEditLayerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerBase",
               &Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeEditLayerBase>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton;
}

// ULandscapeEditLayerBase @ 145f42740

ULandscapeEditLayerBase * __thiscall
ULandscapeEditLayerBase::ULandscapeEditLayerBase
          (ULandscapeEditLayerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  return this;
}

// ULandscapeEditLayerBase @ 145f42770

ULandscapeEditLayerBase * __thiscall
ULandscapeEditLayerBase::ULandscapeEditLayerBase
          (ULandscapeEditLayerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  return this;
}

// ~ULandscapeEditLayerBase @ 145f43a70

void __thiscall ULandscapeEditLayerBase::~ULandscapeEditLayerBase(ULandscapeEditLayerBase *this)

{
  *(undefined ***)this = &___7ULandscapeEditLayerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetActions @ 145f53340

TArray<ULandscapeEditLayerBase::FEditLayerAction,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeEditLayerBase::GetActions
          (ULandscapeEditLayerBase *this,
          TArray<ULandscapeEditLayerBase::FEditLayerAction,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultName @ 145f53810

FString * __thiscall
ULandscapeEditLayerBase::GetDefaultName
          (ULandscapeEditLayerBase *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0xa5,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f53d90

UClass * __cdecl ULandscapeEditLayerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditLayerBase",
               &Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton,
               StaticRegisterNativesULandscapeEditLayerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeEditLayerBase>,
               InternalVTableHelperCtorCaller<ULandscapeEditLayerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditLayerBase.InnerSingleton;
}

// GetRenderDependencies @ 145f54650

void __thiscall
ULandscapeEditLayerBase::GetRenderDependencies
          (ULandscapeEditLayerBase *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// NeedsPersistentTextures @ 145f59940

bool __thiscall ULandscapeEditLayerBase::NeedsPersistentTextures(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x81,L"Pure virtual not implemented (%s)");
  return false;
}

// OnLayerRemoved @ 145f599e0

void __thiscall ULandscapeEditLayerBase::OnLayerRemoved(ULandscapeEditLayerBase *this)

{
  return;
}

// SetGuid_WrapperImpl @ 145f5dca0

void __cdecl ULandscapeEditLayerBase::SetGuid_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetHeightmapAlpha_WrapperImpl @ 145f5dcc0

void __cdecl ULandscapeEditLayerBase::SetHeightmapAlpha_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetLayerName_WrapperImpl @ 145f5e300

void __cdecl ULandscapeEditLayerBase::SetLayerName_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetWeightmapAlpha_WrapperImpl @ 145f5e5e0

void __cdecl ULandscapeEditLayerBase::SetWeightmapAlpha_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetWeightmapLayerAllocationBlend_WrapperImpl @ 145f5e5f0

void __cdecl
ULandscapeEditLayerBase::SetWeightmapLayerAllocationBlend_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetbLocked_WrapperImpl @ 145f5e600

void __cdecl ULandscapeEditLayerBase::SetbLocked_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetbVisible_WrapperImpl @ 145f5e610

void __cdecl ULandscapeEditLayerBase::SetbVisible_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticRegisterNativesULandscapeEditLayerBase @ 145f5ec30

void __cdecl ULandscapeEditLayerBase::StaticRegisterNativesULandscapeEditLayerBase(void)

{
  return;
}

// SupportsBeingCollapsedAway @ 145f5ecc0

bool __thiscall ULandscapeEditLayerBase::SupportsBeingCollapsedAway(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x93,L"Pure virtual not implemented (%s)");
  return true;
}

// SupportsBlueprintBrushes @ 145f5ed20

bool __thiscall ULandscapeEditLayerBase::SupportsBlueprintBrushes(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x9f,L"Pure virtual not implemented (%s)");
  return false;
}

// SupportsCollapsingTo @ 145f5ed70

bool __thiscall ULandscapeEditLayerBase::SupportsCollapsingTo(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x99,L"Pure virtual not implemented (%s)");
  return true;
}

// SupportsEditingTools @ 145f5edd0

bool __thiscall ULandscapeEditLayerBase::SupportsEditingTools(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x87,L"Pure virtual not implemented (%s)");
  return true;
}

// SupportsMultiple @ 145f5ee30

bool __thiscall ULandscapeEditLayerBase::SupportsMultiple(ULandscapeEditLayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x8d,L"Pure virtual not implemented (%s)");
  return true;
}

// SupportsTargetType @ 145f5ee80

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

bool __thiscall
ULandscapeEditLayerBase::SupportsTargetType
          (ULandscapeEditLayerBase *this,ELandscapeToolTargetType param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeEditLayer.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return true;
}

