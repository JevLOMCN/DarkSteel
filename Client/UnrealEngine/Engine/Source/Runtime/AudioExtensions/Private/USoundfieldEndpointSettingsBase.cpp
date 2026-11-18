// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// StaticClass @ 14452a6c0

UClass * __cdecl USoundfieldEndpointSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEndpointSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEndpointSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton;
}

// USoundfieldEndpointSettingsBase @ 1445302f0

USoundfieldEndpointSettingsBase * __thiscall
USoundfieldEndpointSettingsBase::USoundfieldEndpointSettingsBase
          (USoundfieldEndpointSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEndpointSettingsBase__6B_;
  return this;
}

// USoundfieldEndpointSettingsBase @ 144530320

USoundfieldEndpointSettingsBase * __thiscall
USoundfieldEndpointSettingsBase::USoundfieldEndpointSettingsBase
          (USoundfieldEndpointSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEndpointSettingsBase__6B_;
  return this;
}

// ~USoundfieldEndpointSettingsBase @ 144530c90

void __thiscall
USoundfieldEndpointSettingsBase::~USoundfieldEndpointSettingsBase
          (USoundfieldEndpointSettingsBase *this)

{
  *(undefined ***)this = &___7USoundfieldEndpointSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144535340

UClass * __cdecl USoundfieldEndpointSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEndpointSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEndpointSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton;
}

// GetProxy @ 144535780

TUniquePtr<ISoundfieldEndpointSettingsProxy,TDefaultDelete<ISoundfieldEndpointSettingsProxy>_>
__thiscall USoundfieldEndpointSettingsBase::GetProxy(USoundfieldEndpointSettingsBase *this)

{
  ISoundfieldEndpointSettingsProxy *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldEndpoint.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  *in_RDX = (ISoundfieldEndpointSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldEndpointSettingsProxy,TDefaultDelete<ISoundfieldEndpointSettingsProxy>_>
          )in_RDX;
}

// StaticRegisterNativesUSoundfieldEndpointSettingsBase @ 144537b60

void __cdecl
USoundfieldEndpointSettingsBase::StaticRegisterNativesUSoundfieldEndpointSettingsBase(void)

{
  return;
}

