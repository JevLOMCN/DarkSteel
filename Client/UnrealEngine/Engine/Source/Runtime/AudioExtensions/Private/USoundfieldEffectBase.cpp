// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 10

// StaticClass @ 14452aa40

UClass * __cdecl USoundfieldEffectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectBase",
               &Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEffectBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldEffectBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton;
}

// USoundfieldEffectBase @ 1445301d0

USoundfieldEffectBase * __thiscall
USoundfieldEffectBase::USoundfieldEffectBase(USoundfieldEffectBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundfieldEffectBase__6B_;
  (this->Settings).field0_0x0.DebugPtr = (USoundfieldEffectSettingsBase *)0x0;
  return this;
}

// USoundfieldEffectBase @ 144530200

USoundfieldEffectBase * __thiscall
USoundfieldEffectBase::USoundfieldEffectBase
          (USoundfieldEffectBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundfieldEffectBase__6B_;
  (this->Settings).field0_0x0.DebugPtr = (USoundfieldEffectSettingsBase *)0x0;
  return this;
}

// ~USoundfieldEffectBase @ 144530c30

void __thiscall USoundfieldEffectBase::~USoundfieldEffectBase(USoundfieldEffectBase *this)

{
  this->_padding_ = (longlong)&___7USoundfieldEffectBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultSettings @ 144534510

USoundfieldEffectSettingsBase * __thiscall
USoundfieldEffectBase::GetDefaultSettings(USoundfieldEffectBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,0x199,L"Pure virtual not implemented (%s)");
  return (USoundfieldEffectSettingsBase *)0x0;
}

// GetNewProcessor @ 144534980

TUniquePtr<ISoundfieldEffectInstance,TDefaultDelete<ISoundfieldEffectInstance>_> __thiscall
USoundfieldEffectBase::GetNewProcessor
          (USoundfieldEffectBase *this,ISoundfieldEncodingSettingsProxy *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,0x19e,L"Pure virtual not implemented (%s)");
  *param_1 = (ISoundfieldEncodingSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldEffectInstance,TDefaultDelete<ISoundfieldEffectInstance>_>)
         (ISoundfieldEffectInstance *)param_1;
}

// GetPrivateStaticClass @ 144535130

UClass * __cdecl USoundfieldEffectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectBase",
               &Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton,
               StaticRegisterNativesUSoundfieldEffectBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundfieldEffectBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton;
}

// GetSettingsClass @ 144535820

UClass * __thiscall USoundfieldEffectBase::GetSettingsClass(USoundfieldEffectBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,0x194,L"Pure virtual not implemented (%s)");
  return (UClass *)0x0;
}

// StaticRegisterNativesUSoundfieldEffectBase @ 144537b30

void __cdecl USoundfieldEffectBase::StaticRegisterNativesUSoundfieldEffectBase(void)

{
  return;
}

// SupportsFormat @ 144537c10

bool __thiscall USoundfieldEffectBase::SupportsFormat(USoundfieldEffectBase *this,FName *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
             ,399,L"Pure virtual not implemented (%s)");
  return false;
}

