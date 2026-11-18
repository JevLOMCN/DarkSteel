// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 9

// StaticClass @ 14452c090

UClass * __cdecl USoundModulatorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundModulatorBase",
               &Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton,
               StaticRegisterNativesUSoundModulatorBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundModulatorBase>,
               InternalVTableHelperCtorCaller<USoundModulatorBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton;
}

// USoundModulatorBase @ 144530150

USoundModulatorBase * __thiscall
USoundModulatorBase::USoundModulatorBase(USoundModulatorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioProxyDataFactory__;
  return this;
}

// USoundModulatorBase @ 144530190

USoundModulatorBase * __thiscall
USoundModulatorBase::USoundModulatorBase(USoundModulatorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioProxyDataFactory__;
  return this;
}

// ~USoundModulatorBase @ 144530c10

void __thiscall USoundModulatorBase::~USoundModulatorBase(USoundModulatorBase *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioProxyDataFactory__;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateProxyData @ 144532b90

TSharedPtr<Audio::IProxyData,1> * __thiscall
USoundModulatorBase::CreateProxyData
          (USoundModulatorBase *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::IProxyData,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioModulation.cpp"
                     ,0x19c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->Object = (IProxyData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateProxySettings @ 144532be0

TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> __thiscall
USoundModulatorBase::CreateProxySettings(USoundModulatorBase *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> TVar3;
  IModulatorSettings *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioModulation.cpp"
                     ,0x1a2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (IModulatorSettings *)(*pcVar1)();
    return (TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>)
           TVar3.Ptr;
  }
  *in_RDX = (IModulatorSettings)0x0;
  return (TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>)in_RDX;
}

// GetOutputParameter @ 144534a40

FModulationParameter * __thiscall USoundModulatorBase::GetOutputParameter(USoundModulatorBase *this)

{
  return &Audio::ModulationPrivate::DefaultParameter;
}

// GetPrivateStaticClass @ 144535080

UClass * __cdecl USoundModulatorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundModulatorBase",
               &Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton,
               StaticRegisterNativesUSoundModulatorBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundModulatorBase>,
               InternalVTableHelperCtorCaller<USoundModulatorBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton;
}

// StaticRegisterNativesUSoundModulatorBase @ 144537b20

void __cdecl USoundModulatorBase::StaticRegisterNativesUSoundModulatorBase(void)

{
  return;
}

