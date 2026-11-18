// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 14

// StaticClass @ 14d0cd4a0

UClass * __cdecl UAudioCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureComponent",
               &Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton,
               StaticRegisterNativesUAudioCaptureComponent,0x980,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureComponent>,
               InternalVTableHelperCtorCaller<UAudioCaptureComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton;
}

// UAudioCaptureComponent @ 14d0ce770

UAudioCaptureComponent * __thiscall
UAudioCaptureComponent::UAudioCaptureComponent
          (UAudioCaptureComponent *this,FObjectInitializer *param_1)

{
  int *piVar1;
  
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FAudioCaptureSynth::FAudioCaptureSynth(&this->CaptureSynth);
  (this->CaptureAudioData).ArrayMax = 0;
  piVar1 = &(this->CaptureAudioData).ArrayMax;
  (this->CaptureAudioData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureAudioData).ArrayNum = 0;
  this->bIsDestroying = (FThreadSafeBool)0x0;
  this->bIsNotReadyForForFinishDestroy = (FThreadSafeBool)0x0;
  this->bSuccessfullyInitialized = false;
  this->bIsCapturing = false;
  this->CapturedAudioDataSamples = 0;
  this->ReadSampleIndex = 0;
  LOCK();
  this->bIsDestroying = (FThreadSafeBool)0x0;
  UNLOCK();
  LOCK();
  this->bIsNotReadyForForFinishDestroy = (FThreadSafeBool)0x0;
  UNLOCK();
  this->bIsStreamOpen = false;
  if (((this->_padding_ & 0x10) == 0) && (*piVar1 < 480000)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,480000,&(this->CaptureAudioData).AllocatorInstance,
               (this->CaptureAudioData).ArrayNum,piVar1);
  }
  return this;
}

// UAudioCaptureComponent @ 14d0ce840

UAudioCaptureComponent * __thiscall
UAudioCaptureComponent::UAudioCaptureComponent(UAudioCaptureComponent *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FAudioCaptureSynth::FAudioCaptureSynth(&this->CaptureSynth);
  (this->CaptureAudioData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptureAudioData).ArrayNum = 0;
  (this->CaptureAudioData).ArrayMax = 0;
  this->bIsDestroying = (FThreadSafeBool)0x0;
  this->bIsNotReadyForForFinishDestroy = (FThreadSafeBool)0x0;
  return this;
}

// ~UAudioCaptureComponent @ 14d0ce9b0

void __thiscall UAudioCaptureComponent::~UAudioCaptureComponent(UAudioCaptureComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->CaptureAudioData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FAudioCaptureSynth::~FAudioCaptureSynth(&this->CaptureSynth);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// BeginDestroy @ 14d0ceca0

void __thiscall UAudioCaptureComponent::BeginDestroy(UAudioCaptureComponent *this)

{
  USynthComponent::BeginDestroy((USynthComponent *)this);
  LOCK();
  this->bIsDestroying = (FThreadSafeBool)0x1;
  UNLOCK();
  USynthComponent::Stop((USynthComponent *)this);
  return;
}

// FinishDestroy @ 14d0cf190

void __thiscall UAudioCaptureComponent::FinishDestroy(UAudioCaptureComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Audio::FAudioCaptureSynth::IsStreamOpen(&this->CaptureSynth);
  if (bVar2) {
    Audio::FAudioCaptureSynth::AbortCapturing(&this->CaptureSynth);
  }
  bVar2 = Audio::FAudioCaptureSynth::IsStreamOpen(&this->CaptureSynth);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CaptureSynth.IsStreamOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioCapture\\Source\\AudioCapture\\Private\\AudioCaptureComponent.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::FinishDestroy((UObject *)this);
  this->bSuccessfullyInitialized = false;
  this->bIsCapturing = false;
  LOCK();
  this->bIsDestroying = (FThreadSafeBool)0x0;
  UNLOCK();
  this->bIsStreamOpen = false;
  return;
}

// GetPrivateStaticClass @ 14d0cf840

UClass * __cdecl UAudioCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureComponent",
               &Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton,
               StaticRegisterNativesUAudioCaptureComponent,0x980,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureComponent>,
               InternalVTableHelperCtorCaller<UAudioCaptureComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton;
}

// GetResourceSizeEx @ 14d0cf9c0

void __thiscall
UAudioCaptureComponent::GetResourceSizeEx(UAudioCaptureComponent *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CaptureAudioData).ArrayMax << 2);
  return;
}

// Init @ 14d0cf9e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UAudioCaptureComponent::Init(UAudioCaptureComponent *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsProviderET *pIVar3;
  FAnalyticsEventAttribute *local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FCaptureDeviceInfo local_38;
  
  local_38.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DeviceName.Data.ArrayNum = 0;
  local_38.DeviceName.Data.ArrayMax = 0;
  local_38.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DeviceId.Data.ArrayNum = 0;
  local_38.DeviceId.Data.ArrayMax = 0;
  bVar2 = Audio::FAudioCaptureSynth::GetDefaultCaptureDeviceInfo(&this->CaptureSynth,&local_38);
  if (bVar2) {
    if (local_38.PreferredSampleRate < 1) {
      if (2 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      *param_1 = local_38.PreferredSampleRate;
    }
    *(int *)&this->_padding_ = local_38.InputChannels;
    if (local_38.InputChannels - 1U < 8) {
      bVar2 = Audio::FAudioCaptureSynth::OpenDefaultStream(&this->CaptureSynth);
      this->bIsStreamOpen = bVar2;
      local_68 = (FAnalyticsEventAttribute *)0x0;
      local_60 = 0;
      ::FString::FString(&local_48,L"AudioCapture.AudioCaptureComponentInitialized");
      if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
        pIVar3 = FEngineAnalytics::GetProvider();
        pcVar1 = *(code **)(pIVar3->_padding_ + 0x100);
        ::FString::ConcatCF(&local_58,L"Audio.Usage.",&local_48);
        (*pcVar1)(pIVar3,&local_58,&local_68);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>(local_68,(int)local_60);
      if (local_68 != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_68);
      }
      bVar2 = true;
      goto LAB_14d0cfb30;
    }
    if (2 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  bVar2 = false;
LAB_14d0cfb30:
  if (local_38.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DeviceId.Data.AllocatorInstance.Data);
  }
  if (local_38.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DeviceName.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsReadyForFinishDestroy @ 14d0cfbd0

bool __thiscall UAudioCaptureComponent::IsReadyForFinishDestroy(UAudioCaptureComponent *this)

{
  (**(code **)(this->_padding_ + 0x670))();
  return this->bIsNotReadyForForFinishDestroy == (FThreadSafeBool)0x0;
}

// OnBeginGenerate @ 14d0cfc00

void __thiscall UAudioCaptureComponent::OnBeginGenerate(UAudioCaptureComponent *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  this->CapturedAudioDataSamples = 0;
  this->ReadSampleIndex = 0;
  piVar1 = &(this->CaptureAudioData).ArrayMax;
  (this->CaptureAudioData).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CaptureAudioData).AllocatorInstance,0,piVar1);
  }
  if (this->bIsStreamOpen == false) {
    bVar3 = Audio::FAudioCaptureSynth::OpenDefaultStream(&this->CaptureSynth);
    this->bIsStreamOpen = bVar3;
    if (!bVar3) {
      return;
    }
  }
  Audio::FAudioCaptureSynth::StartCapturing(&this->CaptureSynth);
  bVar3 = Audio::FAudioCaptureSynth::IsCapturing(&this->CaptureSynth);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CaptureSynth.IsCapturing()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioCapture\\Source\\AudioCapture\\Private\\AudioCaptureComponent.cpp"
                         ,0x73,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  this->bIsNotReadyForForFinishDestroy = (FThreadSafeBool)0x1;
  UNLOCK();
  this->FramesSinceStarting = 0;
  this->ReadSampleIndex = 0;
  return;
}

// OnEndGenerate @ 14d0cfce0

void __thiscall UAudioCaptureComponent::OnEndGenerate(UAudioCaptureComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsStreamOpen != false) {
    bVar2 = Audio::FAudioCaptureSynth::IsStreamOpen(&this->CaptureSynth);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CaptureSynth.IsStreamOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioCapture\\Source\\AudioCapture\\Private\\AudioCaptureComponent.cpp"
                         ,0x81,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Audio::FAudioCaptureSynth::StopCapturing(&this->CaptureSynth);
    this->bIsStreamOpen = false;
    LOCK();
    this->bIsNotReadyForForFinishDestroy = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  return;
}

// OnGenerateAudio @ 14d0cfd60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UAudioCaptureComponent::OnGenerateAudio(UAudioCaptureComponent *this,float *param_1,int param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((this->bIsStreamOpen != false) &&
      (bVar2 = Audio::FAudioCaptureSynth::IsStreamOpen(&this->CaptureSynth), bVar2)) &&
     (bVar2 = Audio::FAudioCaptureSynth::IsCapturing(&this->CaptureSynth), bVar2)) {
    iVar4 = 0;
    pTVar1 = &this->CaptureAudioData;
    if ((uint)(this->CaptureAudioData).ArrayNum < 0x75301) {
      if ((this->CapturedAudioDataSamples < 1) &&
         (iVar3 = Audio::FAudioCaptureSynth::GetNumSamplesEnqueued(&this->CaptureSynth),
         iVar3 < 0x401)) {
        memset(param_1,0,(longlong)param_2 << 2);
        iVar4 = param_2;
      }
      else {
        iVar3 = this->ReadSampleIndex;
        iVar5 = (this->CaptureAudioData).ArrayNum;
        if (iVar5 < iVar3 + param_2) {
          iVar5 = iVar5 - iVar3;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          iVar4 = 0;
          if (0 < iVar5) {
            if (479999 < (uint)(iVar3 + param_2)) {
              if ((byte)LogAudio._0_1_ < 3) {
                return param_2;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              return param_2;
            }
            memcpy(param_1,(pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 4,
                   (longlong)iVar5 << 2);
            iVar4 = iVar5;
          }
          (this->CaptureAudioData).ArrayNum = 0;
          if ((this->CaptureAudioData).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar1->AllocatorInstance,0,&(this->CaptureAudioData).ArrayMax);
          }
          Audio::FAudioCaptureSynth::GetAudioData(&this->CaptureSynth,pTVar1);
          iVar3 = 0;
          this->ReadSampleIndex = 0;
        }
        iVar5 = (this->CaptureAudioData).ArrayNum;
        if (0 < iVar5) {
          iVar5 = iVar5 - iVar3;
          if (param_2 - iVar4 < iVar5) {
            iVar5 = param_2 - iVar4;
          }
          if (479999 < (uint)(iVar5 + iVar3)) {
            if ((byte)LogAudio._0_1_ < 3) {
              return param_2;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            return param_2;
          }
          memcpy(param_1 + iVar4,(pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 4,
                 (longlong)iVar5 << 2);
          this->ReadSampleIndex = this->ReadSampleIndex + iVar5;
          iVar4 = iVar4 + iVar5;
        }
        this->CapturedAudioDataSamples = this->CapturedAudioDataSamples + iVar4;
        if (iVar4 < param_2) {
          memset(param_1 + iVar4,0,(longlong)(param_2 - iVar4) << 2);
        }
      }
      return iVar4;
    }
    Audio::FAudioCaptureSynth::GetAudioData(&this->CaptureSynth,pTVar1);
    (this->CaptureAudioData).ArrayNum = 0;
    if ((this->CaptureAudioData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,&(this->CaptureAudioData).ArrayMax);
    }
  }
  memset(param_1,0,(longlong)param_2 << 2);
  return param_2;
}

// StaticRegisterNativesUAudioCaptureComponent @ 14d0d0220

void __cdecl UAudioCaptureComponent::StaticRegisterNativesUAudioCaptureComponent(void)

{
  return;
}

