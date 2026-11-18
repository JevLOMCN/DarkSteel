// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// StaticClass @ 14f041450

UClass * __cdecl UResonanceAudioSoundfieldSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSoundfieldSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton,
               StaticRegisterNativesUResonanceAudioSoundfieldSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioSoundfieldSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton;
}

// UResonanceAudioSoundfieldSettings @ 14f044460

UResonanceAudioSoundfieldSettings * __thiscall
UResonanceAudioSoundfieldSettings::UResonanceAudioSoundfieldSettings
          (UResonanceAudioSoundfieldSettings *this,FVTableHelper *param_1)

{
  USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this,param_1);
  this->RenderMode = BinauralHighQuality;
  this->_padding_ = (longlong)&___7UResonanceAudioSoundfieldSettings__6B_;
  return this;
}

// UResonanceAudioSoundfieldSettings @ 14f044490

UResonanceAudioSoundfieldSettings * __thiscall
UResonanceAudioSoundfieldSettings::UResonanceAudioSoundfieldSettings
          (UResonanceAudioSoundfieldSettings *this,FObjectInitializer *param_1)

{
  USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this,param_1);
  this->RenderMode = BinauralHighQuality;
  this->_padding_ = (longlong)&___7UResonanceAudioSoundfieldSettings__6B_;
  return this;
}

// ~UResonanceAudioSoundfieldSettings @ 14f044d90

void __thiscall
UResonanceAudioSoundfieldSettings::~UResonanceAudioSoundfieldSettings
          (UResonanceAudioSoundfieldSettings *this)

{
  this->_padding_ = (longlong)&___7UResonanceAudioSoundfieldSettings__6B_;
  USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this);
  return;
}

// GetPrivateStaticClass @ 14f048ea0

UClass * __cdecl UResonanceAudioSoundfieldSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSoundfieldSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton,
               StaticRegisterNativesUResonanceAudioSoundfieldSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioSoundfieldSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton;
}

// GetProxy @ 14f049020

TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
__thiscall UResonanceAudioSoundfieldSettings::GetProxy(UResonanceAudioSoundfieldSettings *this)

{
  EResonanceRenderMode EVar1;
  code *pcVar2;
  bool bVar3;
  ISoundfieldEncodingSettingsProxy IVar4;
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  TVar5;
  ISoundfieldEncodingSettingsProxy *in_RDX;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default,
             true);
  local_res10 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  IVar4 = (ISoundfieldEncodingSettingsProxy)::operator_new(0x10);
  if (IVar4 == (ISoundfieldEncodingSettingsProxy)0x0) {
    IVar4 = (ISoundfieldEncodingSettingsProxy)0x0;
  }
  else {
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
    *(undefined ***)IVar4 = &___7FResonanceAmbisonicsSettingsProxy__6B_;
  }
  EVar1 = this->RenderMode;
  if (EVar1 == StereoPanning) {
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
  }
  else if (EVar1 == BinauralLowQuality) {
    *(undefined4 *)((longlong)IVar4 + 8) = 1;
  }
  else if (EVar1 == BinauralMediumQuality) {
    *(undefined4 *)((longlong)IVar4 + 8) = 2;
  }
  else if (EVar1 == BinauralHighQuality) {
    *(undefined4 *)((longlong)IVar4 + 8) = 3;
  }
  else if (EVar1 == RoomEffectsOnly) {
    *(undefined4 *)((longlong)IVar4 + 8) = 4;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonicsSettings.cpp"
                       ,0x30,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (ISoundfieldEncodingSettingsProxy *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
              )TVar5.Ptr;
    }
  }
  *in_RDX = IVar4;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
          )in_RDX;
}

// StaticRegisterNativesUResonanceAudioSoundfieldSettings @ 14f04d690

void __cdecl
UResonanceAudioSoundfieldSettings::StaticRegisterNativesUResonanceAudioSoundfieldSettings(void)

{
  return;
}

