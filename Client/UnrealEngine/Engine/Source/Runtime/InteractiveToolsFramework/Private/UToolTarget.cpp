// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 1496cbf10

UClass * __cdecl UToolTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTarget",
               &Z_Registration_Info_UClass_UToolTarget.InnerSingleton,
               StaticRegisterNativesUToolTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolTarget>,InternalVTableHelperCtorCaller<UToolTarget>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTarget.InnerSingleton;
}

// UToolTarget @ 1496d3df0

UToolTarget * __thiscall UToolTarget::UToolTarget(UToolTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolTarget__6B_;
  return this;
}

// UToolTarget @ 1496d3e20

UToolTarget * __thiscall UToolTarget::UToolTarget(UToolTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolTarget__6B_;
  return this;
}

// ~UToolTarget @ 1496d4b60

void __thiscall UToolTarget::~UToolTarget(UToolTarget *this)

{
  *(undefined ***)this = &___7UToolTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1496ddf40

UClass * __cdecl UToolTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolTarget",
               &Z_Registration_Info_UClass_UToolTarget.InnerSingleton,
               StaticRegisterNativesUToolTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolTarget>,InternalVTableHelperCtorCaller<UToolTarget>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolTarget.InnerSingleton;
}

// IsValid @ 1496e2700

bool __thiscall UToolTarget::IsValid(UToolTarget *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\ToolTargets\\ToolTarget.h"
             ,0x2d,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUToolTarget @ 1496e67b0

void __cdecl UToolTarget::StaticRegisterNativesUToolTarget(void)

{
  return;
}

