// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// StaticClass @ 14452a990

UClass * __cdecl USoundfieldEffectSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEffectSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEffectSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton;
}

// USoundfieldEffectSettingsBase @ 144530230

USoundfieldEffectSettingsBase * __thiscall
USoundfieldEffectSettingsBase::USoundfieldEffectSettingsBase
          (USoundfieldEffectSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEffectSettingsBase__6B_;
  return this;
}

// USoundfieldEffectSettingsBase @ 144530260

USoundfieldEffectSettingsBase * __thiscall
USoundfieldEffectSettingsBase::USoundfieldEffectSettingsBase
          (USoundfieldEffectSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USoundfieldEffectSettingsBase__6B_;
  return this;
}

// ~USoundfieldEffectSettingsBase @ 144530c50

void __thiscall
USoundfieldEffectSettingsBase::~USoundfieldEffectSettingsBase(USoundfieldEffectSettingsBase *this)

{
  *(undefined ***)this = &___7USoundfieldEffectSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNewProxy @ 1445349c0

TUniquePtr<ISoundfieldEffectSettingsProxy,TDefaultDelete<ISoundfieldEffectSettingsProxy>_>
__thiscall USoundfieldEffectSettingsBase::GetNewProxy(USoundfieldEffectSettingsBase *this)

{
  ISoundfieldEffectSettingsProxy *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,0x164,L"Pure virtual not implemented (%s)");
  *in_RDX = (ISoundfieldEffectSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldEffectSettingsProxy,TDefaultDelete<ISoundfieldEffectSettingsProxy>_>
         )in_RDX;
}

// GetPrivateStaticClass @ 1445351e0

UClass * __cdecl USoundfieldEffectSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEffectSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEffectSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton;
}

// StaticRegisterNativesUSoundfieldEffectSettingsBase @ 144537b40

void __cdecl USoundfieldEffectSettingsBase::StaticRegisterNativesUSoundfieldEffectSettingsBase(void)

{
  return;
}

