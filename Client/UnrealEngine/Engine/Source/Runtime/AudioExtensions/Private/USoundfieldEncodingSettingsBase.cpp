// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// StaticClass @ 14452a4d0

UClass * __cdecl USoundfieldEncodingSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEncodingSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEncodingSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEncodingSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEncodingSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton;
}

// USoundfieldEncodingSettingsBase @ 144530290

USoundfieldEncodingSettingsBase * __thiscall
USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
          (USoundfieldEncodingSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEncodingSettingsBase__6B_;
  return this;
}

// USoundfieldEncodingSettingsBase @ 1445302c0

USoundfieldEncodingSettingsBase * __thiscall
USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
          (USoundfieldEncodingSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEncodingSettingsBase__6B_;
  return this;
}

// ~USoundfieldEncodingSettingsBase @ 144530c70

void __thiscall
USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase
          (USoundfieldEncodingSettingsBase *this)

{
  *(undefined ***)this = &___7USoundfieldEncodingSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144535290

UClass * __cdecl USoundfieldEncodingSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEncodingSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEncodingSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEncodingSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEncodingSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton;
}

// GetProxy @ 144535740

TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
__thiscall USoundfieldEncodingSettingsBase::GetProxy(USoundfieldEncodingSettingsBase *this)

{
  ISoundfieldEncodingSettingsProxy *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,0x80,L"Pure virtual not implemented (%s)");
  *in_RDX = (ISoundfieldEncodingSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
          )in_RDX;
}

// StaticRegisterNativesUSoundfieldEncodingSettingsBase @ 144537b50

void __cdecl
USoundfieldEncodingSettingsBase::StaticRegisterNativesUSoundfieldEncodingSettingsBase(void)

{
  return;
}

