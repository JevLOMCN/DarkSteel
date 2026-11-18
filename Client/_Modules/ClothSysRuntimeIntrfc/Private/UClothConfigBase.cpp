// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 12

// StaticClass @ 144646320

UClass * __cdecl UClothConfigBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothConfigBase",
               &Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton,
               StaticRegisterNativesUClothConfigBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothConfigBase>,
               InternalVTableHelperCtorCaller<UClothConfigBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton;
}

// UClothConfigBase @ 1446486a0

UClothConfigBase * __thiscall
UClothConfigBase::UClothConfigBase(UClothConfigBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothConfigBase__6B_;
  return this;
}

// UClothConfigBase @ 1446486d0

UClothConfigBase * __thiscall UClothConfigBase::UClothConfigBase(UClothConfigBase *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UClothConfigBase__6B_;
  return this;
}

// ~UClothConfigBase @ 144648cb0

void __thiscall UClothConfigBase::~UClothConfigBase(UClothConfigBase *this)

{
  *(undefined ***)this = &___7UClothConfigBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14464b8e0

UClass * __cdecl UClothConfigBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothConfigBase",
               &Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton,
               StaticRegisterNativesUClothConfigBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothConfigBase>,
               InternalVTableHelperCtorCaller<UClothConfigBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigBase.InnerSingleton;
}

// GetSelfCollisionRadius @ 14464bdb0

float __thiscall UClothConfigBase::GetSelfCollisionRadius(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// NeedsInverseMasses @ 14464bec0

bool __thiscall UClothConfigBase::NeedsInverseMasses(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  return false;
}

// NeedsNumInfluences @ 14464bef0

bool __thiscall UClothConfigBase::NeedsNumInfluences(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return false;
}

// NeedsSelfCollisionData @ 14464bf20

bool __thiscall UClothConfigBase::NeedsSelfCollisionData(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return false;
}

// NeedsTethers @ 14464bf50

bool __thiscall UClothConfigBase::NeedsTethers(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x27,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUClothConfigBase @ 14464c7a0

void __cdecl UClothConfigBase::StaticRegisterNativesUClothConfigBase(void)

{
  return;
}

// TethersUseGeodesicDistance @ 14464cec0

bool __thiscall UClothConfigBase::TethersUseGeodesicDistance(UClothConfigBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothConfigBase.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return false;
}

