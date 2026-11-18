// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 13

// FAmbisonicsSoundfieldFormat @ 14f09c6d0

FAmbisonicsSoundfieldFormat * __thiscall
FAmbisonicsSoundfieldFormat::FAmbisonicsSoundfieldFormat(FAmbisonicsSoundfieldFormat *this)

{
  *this = (FAmbisonicsSoundfieldFormat)&___7FAmbisonicsSoundfieldFormat__6B_;
  ISoundfieldFactory::RegisterSoundfieldFormat((ISoundfieldFactory *)this);
  return this;
}

// ~FAmbisonicsSoundfieldFormat @ 14f09c830

void __thiscall
FAmbisonicsSoundfieldFormat::~FAmbisonicsSoundfieldFormat(FAmbisonicsSoundfieldFormat *this)

{
  *this = (FAmbisonicsSoundfieldFormat)&___7FAmbisonicsSoundfieldFormat__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)this);
  *this = (FAmbisonicsSoundfieldFormat)&___7ISoundfieldFactory__6B_;
  return;
}

// CanTranscodeFromSoundfieldFormat @ 14f09cb70

bool __thiscall
FAmbisonicsSoundfieldFormat::CanTranscodeFromSoundfieldFormat
          (FAmbisonicsSoundfieldFormat *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2
          )

{
  return false;
}

// CanTranscodeToSoundfieldFormat @ 14f09cb80

bool __thiscall
FAmbisonicsSoundfieldFormat::CanTranscodeToSoundfieldFormat
          (FAmbisonicsSoundfieldFormat *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2
          )

{
  return false;
}

// CreateDecoderStream @ 14f09cb90

TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> __thiscall
FAmbisonicsSoundfieldFormat::CreateDecoderStream
          (FAmbisonicsSoundfieldFormat *this,FAudioPluginInitializationParams *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x120);
  if (puVar2 != (undefined8 *)0x0) {
    memset(puVar2 + 1,0,0x118);
    *puVar2 = &___7FAmbisonicsSoundfieldDecoder__6B_;
    FSoundFieldDecoder::FSoundFieldDecoder((FSoundFieldDecoder *)(puVar2 + 1));
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    puVar2[0x12] = UE::Math::TQuat<double>::Identity.X;
    puVar2[0x13] = dVar1;
    *(undefined8 **)param_1 = puVar2;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    puVar2[0x14] = UE::Math::TQuat<double>::Identity.Z;
    puVar2[0x15] = dVar1;
    puVar2[0x16] = &___7FAmbisonicsSoundfieldBuffer__6B_;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    puVar2[0x1a] = UE::Math::TQuat<double>::Identity.X;
    puVar2[0x1b] = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    puVar2[0x1c] = UE::Math::TQuat<double>::Identity.Z;
    puVar2[0x1d] = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    puVar2[0x1e] = UE::Math::TQuat<double>::Identity.X;
    puVar2[0x1f] = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    puVar2[0x20] = UE::Math::TQuat<double>::Identity.Z;
    puVar2[0x21] = dVar1;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
           (ISoundfieldDecoderStream *)param_1;
  }
  param_1->NumSources = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
         (ISoundfieldDecoderStream *)param_1;
}

// CreateEmptyPacket @ 14f09cc90

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> __thiscall
FAmbisonicsSoundfieldFormat::CreateEmptyPacket(FAmbisonicsSoundfieldFormat *this)

{
  double dVar1;
  ISoundfieldAudioPacket IVar2;
  ISoundfieldAudioPacket *in_RDX;
  
  IVar2 = (ISoundfieldAudioPacket)::operator_new(0x60);
  if (IVar2 != (ISoundfieldAudioPacket)0x0) {
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined4 *)((longlong)IVar2 + 0x18) = 0;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)((longlong)IVar2 + 0x20) = UE::Math::TQuat<double>::Identity.X;
    *(double *)((longlong)IVar2 + 0x28) = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    *(double *)((longlong)IVar2 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
    *(double *)((longlong)IVar2 + 0x38) = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)((longlong)IVar2 + 0x40) = UE::Math::TQuat<double>::Identity.X;
    *(double *)((longlong)IVar2 + 0x48) = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    *(double *)((longlong)IVar2 + 0x50) = UE::Math::TQuat<double>::Identity.Z;
    *(double *)((longlong)IVar2 + 0x58) = dVar1;
    return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
  }
  *in_RDX = (ISoundfieldAudioPacket)0x0;
  return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
}

// CreateEncoderStream @ 14f09cd10

TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_> __thiscall
FAmbisonicsSoundfieldFormat::CreateEncoderStream
          (FAmbisonicsSoundfieldFormat *this,FAudioPluginInitializationParams *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &___7FAmbisonicsSoundfieldEncoder__6B_;
    FSoundFieldEncoder::FSoundFieldEncoder((FSoundFieldEncoder *)(puVar1 + 1));
    *(undefined8 **)param_1 = puVar1;
    return (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>)
           (ISoundfieldEncoderStream *)param_1;
  }
  param_1->NumSources = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>)
         (ISoundfieldEncoderStream *)param_1;
}

// CreateMixerStream @ 14f09cd90

TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_> __thiscall
FAmbisonicsSoundfieldFormat::CreateMixerStream
          (FAmbisonicsSoundfieldFormat *this,ISoundfieldEncodingSettingsProxy *param_1)

{
  code *pcVar1;
  double dVar2;
  IAnalyticsProviderET *pIVar3;
  ISoundfieldEncodingSettingsProxy IVar4;
  FAnalyticsEventAttribute *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  local_38 = (FAnalyticsEventAttribute *)0x0;
  local_30 = 0;
  ::FString::FString(&local_18,"SoundFields.MixerStreamCreated");
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    pIVar3 = FEngineAnalytics::GetProvider();
    pcVar1 = *(code **)(pIVar3->_padding_ + 0x100);
    ::FString::ConcatCF(&local_28,L"Audio.Usage.",&local_18);
    (*pcVar1)(pIVar3,&local_28,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>(local_38,(int)local_30);
  if (local_38 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_38);
  }
  IVar4 = (ISoundfieldEncodingSettingsProxy)::operator_new(0x70);
  if (IVar4 != (ISoundfieldEncodingSettingsProxy)0x0) {
    *(undefined8 *)((longlong)IVar4 + 0x18) = 0;
    *(undefined ***)IVar4 = &___7FAmbisonicsMixer__6B_;
    *(undefined8 *)((longlong)IVar4 + 0x20) = 0;
    *(undefined ***)((longlong)IVar4 + 0x10) = &___7FAmbisonicsSoundfieldBuffer__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x28) = 0;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)((longlong)IVar4 + 0x30) = UE::Math::TQuat<double>::Identity.X;
    *(double *)((longlong)IVar4 + 0x38) = dVar2;
    *param_1 = IVar4;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)((longlong)IVar4 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
    *(double *)((longlong)IVar4 + 0x48) = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)((longlong)IVar4 + 0x50) = UE::Math::TQuat<double>::Identity.X;
    *(double *)((longlong)IVar4 + 0x58) = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)((longlong)IVar4 + 0x60) = UE::Math::TQuat<double>::Identity.Z;
    *(double *)((longlong)IVar4 + 0x68) = dVar2;
    return (TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_>)
           (ISoundfieldMixerStream *)param_1;
  }
  *param_1 = (ISoundfieldEncodingSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_>)
         (ISoundfieldMixerStream *)param_1;
}

// CreateTranscoderStream @ 14f09ced0

TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> __thiscall
FAmbisonicsSoundfieldFormat::CreateTranscoderStream
          (FAmbisonicsSoundfieldFormat *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2
          ,FName param_3,ISoundfieldEncodingSettingsProxy *param_4,
          FAudioPluginInitializationParams *param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> TVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)(**(code **)((longlong)*this + 8))(this,local_res8);
  if (param_2 != (ISoundfieldEncodingSettingsProxy *)*plVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceFormat == GetSoundfieldFormatName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                       ,0xf7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Ptr = (ISoundfieldTranscodeStream *)(*pcVar1)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar4.Ptr;
    }
  }
  plVar3 = (longlong *)(**(code **)((longlong)*this + 8))(this,local_res10);
  if (param_4 != (ISoundfieldEncodingSettingsProxy *)*plVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationFormat == GetSoundfieldFormatName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                       ,0xf8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Ptr = (ISoundfieldTranscodeStream *)(*pcVar1)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar4.Ptr;
    }
  }
  puVar5 = ::operator_new(8);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)param_1 = puVar5;
    *puVar5 = &___7FAmbisonicsOrderConverter__6B_;
    return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
           param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)param_1
  ;
}

// GetCustomEncodingSettingsClass @ 14f09d300

UClass * __thiscall
FAmbisonicsSoundfieldFormat::GetCustomEncodingSettingsClass(FAmbisonicsSoundfieldFormat *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SoundFields",L"AmbisonicsEncodingSettings",
               &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton,
               UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAmbisonicsEncodingSettings>,
               InternalVTableHelperCtorCaller<UAmbisonicsEncodingSettings>,aFStackX_8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.InnerSingleton;
}

// GetDefaultEncodingSettings @ 14f09d310

USoundfieldEncodingSettingsBase * __thiscall
FAmbisonicsSoundfieldFormat::GetDefaultEncodingSettings(FAmbisonicsSoundfieldFormat *this)

{
  code *pcVar1;
  bool bVar2;
  USoundfieldEncodingSettingsBase *pUVar3;
  UClass *this_00;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                         ,0x11c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USoundfieldEncodingSettingsBase *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  this_00 = UAmbisonicsEncodingSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (USoundfieldEncodingSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (USoundfieldEncodingSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetSoundfieldFormatName @ 14f09d4c0

FName __thiscall
FAmbisonicsSoundfieldFormat::GetSoundfieldFormatName(FAmbisonicsSoundfieldFormat *this)

{
  FName in_RDX;
  
  GetUnrealAmbisonicsFormatName();
  return in_RDX;
}

// IsTranscodeRequiredBetweenSettings @ 14f09d530

bool __thiscall
FAmbisonicsSoundfieldFormat::IsTranscodeRequiredBetweenSettings
          (FAmbisonicsSoundfieldFormat *this,ISoundfieldEncodingSettingsProxy *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_2 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)(param_1 + 1) != *(int *)(param_2 + 1);
}

