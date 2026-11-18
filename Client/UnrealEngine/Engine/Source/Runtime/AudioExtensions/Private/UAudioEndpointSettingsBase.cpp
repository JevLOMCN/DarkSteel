// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// StaticClass @ 14452b480

UClass * __cdecl UAudioEndpointSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioEndpointSettingsBase",
               &Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton,
               StaticRegisterNativesUAudioEndpointSettingsBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAudioEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<UAudioEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton;
}

// UAudioEndpointSettingsBase @ 14452feb0

UAudioEndpointSettingsBase * __thiscall
UAudioEndpointSettingsBase::UAudioEndpointSettingsBase
          (UAudioEndpointSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
  return this;
}

// UAudioEndpointSettingsBase @ 14452fee0

UAudioEndpointSettingsBase * __thiscall
UAudioEndpointSettingsBase::UAudioEndpointSettingsBase
          (UAudioEndpointSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
  return this;
}

// ~UAudioEndpointSettingsBase @ 144530b50

void __thiscall
UAudioEndpointSettingsBase::~UAudioEndpointSettingsBase(UAudioEndpointSettingsBase *this)

{
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144534b80

UClass * __cdecl UAudioEndpointSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioEndpointSettingsBase",
               &Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton,
               StaticRegisterNativesUAudioEndpointSettingsBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAudioEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<UAudioEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton;
}

// GetProxy @ 1445356b0

TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_> __thiscall
UAudioEndpointSettingsBase::GetProxy(UAudioEndpointSettingsBase *this)

{
  IAudioEndpointSettingsProxy *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\IAudioEndpoint.h"
             ,0x3a,L"Pure virtual not implemented (%s)");
  *in_RDX = (IAudioEndpointSettingsProxy)0x0;
  return (TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_>)
         in_RDX;
}

// StaticRegisterNativesUAudioEndpointSettingsBase @ 144537a50

void __cdecl UAudioEndpointSettingsBase::StaticRegisterNativesUAudioEndpointSettingsBase(void)

{
  return;
}

