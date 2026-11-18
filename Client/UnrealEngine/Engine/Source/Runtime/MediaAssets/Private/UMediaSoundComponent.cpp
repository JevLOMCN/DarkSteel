// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 40

// StaticClass @ 146c14540

UClass * __cdecl UMediaSoundComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSoundComponent",
               &Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton,
               StaticRegisterNativesUMediaSoundComponent,0x9a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaSoundComponent>,
               InternalVTableHelperCtorCaller<UMediaSoundComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton;
}

// UMediaSoundComponent @ 146c1d700

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSoundComponent * __thiscall
UMediaSoundComponent::UMediaSoundComponent(UMediaSoundComponent *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined1 *)&this->RateAdjustmentRange = 2;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined4 *)&(this->RateAdjustmentRange).field_0x4 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->RateAdjustmentRange).field_0x8 = 2;
  *(undefined4 *)&(this->RateAdjustmentRange).field_0xc = 0;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->CachedTime).Ticks = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CurrentPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentPlayerFacade).Object = (FMediaPlayerFacade *)0x0;
  (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LastPlaySampleTime).Ticks = 0;
  (this->FrequenciesToAnalyze).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequenciesToAnalyze).ArrayNum = 0;
  (this->FrequenciesToAnalyze).ArrayMax = 0;
  (this->SpectrumAnalyzerSettings).WindowType = Hann;
  (this->SpectrumAnalyzerSettings).FFTSize = Default;
  (this->SpectrumAnalyzerSettings).HopSize = 0.0;
  (this->ClockSink).Object = (FMediaSoundComponentClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MediaSoundGenerator).Object = (ISoundGenerator *)0x0;
  (this->MediaSoundGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMediaSoundComponent @ 146c1d7f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSoundComponent * __thiscall
UMediaSoundComponent::UMediaSoundComponent(UMediaSoundComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->Channels = Stereo;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->DynamicRateAdjustment = false;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->RateAdjustmentFactor = 1e-08;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined1 *)&this->RateAdjustmentRange = 1;
  *(undefined4 *)&(this->RateAdjustmentRange).field_0x4 = 0x3f7eb852;
  (this->RateAdjustmentRange).field_0x8 = 0;
  *(undefined4 *)&(this->RateAdjustmentRange).field_0xc = 0x3f80a3d7;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  this->CachedRate = 0.0;
  (this->CachedTime).Ticks = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CurrentPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastPlaySampleTime).Ticks = -0x8000000000000000;
  (this->CurrentPlayerFacade).Object = (FMediaPlayerFacade *)0x0;
  (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->RateAdjustment = 1.0;
  (this->FrequenciesToAnalyze).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequenciesToAnalyze).ArrayNum = 0;
  (this->FrequenciesToAnalyze).ArrayMax = 0;
  (this->SpectrumAnalyzerSettings).WindowType = Hann;
  (this->SpectrumAnalyzerSettings).FFTSize = Default;
  (this->SpectrumAnalyzerSettings).HopSize = 0.0;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 100;
  this->bSpectralAnalysisEnabled = false;
  this->bEnvelopeFollowingEnabled = false;
  (this->ClockSink).Object = (FMediaSoundComponentClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MediaSoundGenerator).Object = (ISoundGenerator *)0x0;
  (this->MediaSoundGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMediaSoundComponent @ 146c1eaa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::~UMediaSoundComponent(UMediaSoundComponent *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FMediaSoundComponentClockSink,1> *pTVar2;
  atomic<int> aVar3;
  FMediaSoundComponentClockSink *pFVar4;
  FName FVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  longlong *plVar12;
  FName local_res8;
  FMediaSoundComponentClockSink *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pTVar2 = &this->ClockSink;
  pFVar4 = pTVar2->Object;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  if (pFVar4 != (FMediaSoundComponentClockSink *)0x0) {
    pFVar10 = ::FName::FName(&local_res8,"Media");
    FVar5 = *pFVar10;
    this_00 = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModule(this_00,FVar5,None);
    if (pIVar11 != (IModuleInterface *)0x0) {
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xa8))(pIVar11);
      pcVar6 = *(code **)(*plVar12 + 0x18);
      if (pTVar2->Object == (FMediaSoundComponentClockSink *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar7 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar4 = pTVar2->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 == (FMediaSoundComponentClockSink *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar4;
      local_30 = pTVar7;
      (*pcVar6)(plVar12,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ClockSink != (TSharedPtr<FMediaSoundComponentClockSink,1> *)&local_28) {
      (this->ClockSink).Object = (FMediaSoundComponentClockSink *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockSink).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediaSoundGenerator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockSink).SharedReferenceCount.ReferenceController);
  pFVar8 = (this->FrequenciesToAnalyze).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SampleQueue).SharedReferenceCount.ReferenceController);
  pTVar7 = (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// Activate @ 146c20250

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::Activate(UMediaSoundComponent *this,bool param_1)

{
  char cVar1;
  undefined7 in_register_00000011;
  
  if (!param_1) {
    cVar1 = (**(code **)(this->_padding_ + 0x330))();
    if (cVar1 == '\0') goto LAB_146c2027f;
  }
  (**(code **)(this->_padding_ + 0x420))(this,CONCAT71(in_register_00000011,1));
LAB_146c2027f:
  USynthComponent::Activate((USynthComponent *)this,param_1);
  return;
}

// AddClockSink @ 146c20590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::AddClockSink(UMediaSoundComponent *this)

{
  TSharedPtr<FMediaSoundComponentClockSink,1> *pTVar1;
  FName FVar2;
  FMediaSoundComponentClockSink *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  UMediaSoundComponent *local_res8;
  FName local_res10;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  FMediaSoundComponentClockSink *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar1 = &this->ClockSink;
  if (pTVar1->Object == (FMediaSoundComponentClockSink *)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"Media");
    FVar2 = *pFVar6;
    this_00 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModule(this_00,FVar2,None);
    if (pIVar7 != (IModuleInterface *)0x0) {
      pTVar8 = ::operator_new(0x20);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        local_48 = ___xmm_00000000000000000000000000000010;
        pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
        FStack_40.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMediaSoundComponentClockSink___00_SharedPointerInternals__6B_
        ;
        pTVar8[1]._padding_ = (longlong)&___7FMediaSoundComponentClockSink__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)&pTVar8[1].SharedReferenceCount,(FObjectPtr)&local_res8);
        pTVar10 = pTVar8 + 1;
        if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        FStack_40.ReferenceController = pTVar8;
        local_48 = pTVar10;
      }
      if (pTVar1 != (TSharedPtr<FMediaSoundComponentClockSink,1> *)&local_48) {
        pTVar1->Object = (FMediaSoundComponentClockSink *)pTVar10;
        local_48 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ClockSink).SharedReferenceCount,&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
      pcVar4 = *(code **)(*plVar9 + 0x10);
      if ((pTVar1->Object == (FMediaSoundComponentClockSink *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar3 = pTVar1->Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FMediaSoundComponentClockSink *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar3;
      local_30 = pTVar8;
      (*pcVar4)(plVar9,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return;
}

// BP_GetAttenuationSettingsToApply @ 146c20a80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
UMediaSoundComponent::BP_GetAttenuationSettingsToApply
          (UMediaSoundComponent *this,FSoundAttenuationSettings *param_1)

{
  FSoundAttenuationSettings *pFVar1;
  
  if ((this->_padding_ & 8) == 0) {
    if (this->_padding_ == 0) {
      return false;
    }
    pFVar1 = (FSoundAttenuationSettings *)(this->_padding_ + 0x28);
  }
  else {
    pFVar1 = (FSoundAttenuationSettings *)&this->_padding_;
  }
  if (pFVar1 == (FSoundAttenuationSettings *)0x0) {
    return false;
  }
  FSoundAttenuationSettings::operator=(param_1,pFVar1);
  return true;
}

// CollectAttenuationShapesForVisualization @ 146c21b00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::CollectAttenuationShapesForVisualization
          (UMediaSoundComponent *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  longlong *plVar1;
  
  if ((this->_padding_ & 8) == 0) {
    if (this->_padding_ == 0) {
      return;
    }
    plVar1 = (longlong *)(this->_padding_ + 0x28);
  }
  else {
    plVar1 = &this->_padding_;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c21b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))();
  return;
}

// CreateSoundGenerator @ 146c25f80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<ISoundGenerator,1> * __thiscall
UMediaSoundComponent::CreateSoundGenerator
          (UMediaSoundComponent *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  FMediaAudioSampleQueue *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  TSharedPtr<ISoundGenerator,1> *pTVar7;
  FMediaSoundGenerator *pFVar8;
  FMediaSoundGenerator *pFVar9;
  FMediaSoundGenerator *pFVar10;
  FMediaSoundGenerator *local_98;
  FSharedReferencer<1> local_90;
  FMediaAudioSampleQueue *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FSoundGeneratorParams local_78;
  
  local_78.SampleRate = (int)param_1->SampleRate;
  pFVar10 = (FMediaSoundGenerator *)0x0;
  local_78.SampleQueue.Object = (FMediaAudioSampleQueue *)0x0;
  local_78.SampleQueue.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.PreviousSampleQueueFlushCount = 0;
  local_78.FrequenciesToAnalyze.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.FrequenciesToAnalyze.ArrayNum = 0;
  local_78.FrequenciesToAnalyze.ArrayMax = 0;
  local_78.CachedRate = 0.0;
  local_78.CachedTime.Ticks = 0;
  local_78.NumChannels = param_1->NumChannels;
  local_78.bSpectralAnalysisEnabled = this->bSpectralAnalysisEnabled;
  local_78.bEnvelopeFollowingEnabled = this->bEnvelopeFollowingEnabled;
  local_78.EnvelopeFollowerAttackTime = this->EnvelopeFollowerAttackTime;
  local_78.EnvelopeFollowerReleaseTime = this->EnvelopeFollowerReleaseTime;
  local_78.SpectrumAnalyzerSettings = this->SpectrumAnalyzerSettings;
  local_78.LastPlaySampleTime.Ticks = 0;
  if (&local_78.FrequenciesToAnalyze != &this->FrequenciesToAnalyze) {
    uVar1 = (this->FrequenciesToAnalyze).ArrayNum;
    _Src = (this->FrequenciesToAnalyze).AllocatorInstance.Data;
    local_78.FrequenciesToAnalyze.ArrayMax = 0;
    local_78.FrequenciesToAnalyze.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_78.FrequenciesToAnalyze.AllocatorInstance,uVar1,
                 &local_78.FrequenciesToAnalyze.ArrayMax);
      memcpy(local_78.FrequenciesToAnalyze.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 2);
    }
  }
  local_78.CachedTime.Ticks = (this->CachedTime).Ticks;
  lpCriticalSection = &this->CriticalSection;
  local_78.CachedRate = this->CachedRate;
  local_78.LastPlaySampleTime.Ticks = (this->LastPlaySampleTime).Ticks;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar4)();
    return pTVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar5.ReferenceController = local_78.SampleQueue.SharedReferenceCount.ReferenceController;
  pTVar2 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
  pFVar3 = (this->SampleQueue).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_78.SampleQueue.Object;
  pTStack_80 = local_78.SampleQueue.SharedReferenceCount.ReferenceController;
  local_78.SampleQueue.Object = pFVar3;
  local_78.SampleQueue.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_78.SampleQueue.Object == (FMediaAudioSampleQueue *)0x0) {
    local_78.PreviousSampleQueueFlushCount = 0;
  }
  else {
    if ((local_78.SampleQueue.Object == (FMediaAudioSampleQueue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar4)();
      return pTVar7;
    }
    local_78.PreviousSampleQueueFlushCount =
         (**(code **)((local_78.SampleQueue.Object)->_padding_ + 0x20))();
  }
  pFVar8 = ::operator_new(0x210);
  pFVar9 = pFVar10;
  if (pFVar8 != (FMediaSoundGenerator *)0x0) {
    pFVar9 = FMediaSoundGenerator::FMediaSoundGenerator(pFVar8,&local_78);
  }
  local_98 = pFVar9;
  pFVar8 = ::operator_new(0x18);
  if (pFVar8 != (FMediaSoundGenerator *)0x0) {
    *(undefined4 *)&pFVar8->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 1;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMediaSoundGenerator__U__DefaultDeleter_VFMediaSoundGenerator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pFVar8->_padding_ = (longlong)pFVar9;
    pFVar10 = pFVar8;
  }
  pTVar7 = &this->MediaSoundGenerator;
  local_90.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (pTVar7 != (TSharedPtr<ISoundGenerator,1> *)&local_98) {
    pTVar7->Object = (ISoundGenerator *)pFVar9;
    local_98 = (FMediaSoundGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MediaSoundGenerator).SharedReferenceCount,&local_90);
  }
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar2 = (this->MediaSoundGenerator).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_78.FrequenciesToAnalyze.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.FrequenciesToAnalyze.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SampleQueue.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Deactivate @ 146c26590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::Deactivate(UMediaSoundComponent *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18 [2];
  
  cVar5 = (**(code **)(this->_padding_ + 0x330))();
  if (cVar5 == '\0') {
    (**(code **)(this->_padding_ + 0x420))(this,0);
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SampleQueue != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_38) {
      (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SampleQueue).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (&this->CurrentPlayerFacade != (TWeakPtr<FMediaPlayerFacade,1> *)local_18) {
      pTVar3 = (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
      (this->CurrentPlayerFacade).Object = (FMediaPlayerFacade *)0x0;
      (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MediaSoundGenerator != (TSharedPtr<ISoundGenerator,1> *)&local_28) {
      (this->MediaSoundGenerator).Object = (ISoundGenerator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MediaSoundGenerator).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  USynthComponent::Deactivate((USynthComponent *)this);
  return;
}

// GetEnvelopeValue @ 146c28b90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UMediaSoundComponent::GetEnvelopeValue(UMediaSoundComponent *this)

{
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->MediaSoundGenerator).Object;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    return *(float *)&pIVar1[0x12].CommandQueue.Head;
  }
  return 0.0;
}

// GetMediaPlayer @ 146c2adb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaSoundComponent::GetMediaPlayer(UMediaSoundComponent *this)

{
  UMediaPlayer *pUVar1;
  
  pUVar1 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->CurrentPlayer).WeakPtr);
  return pUVar1;
}

// GetNormalizedSpectralData @ 146c2b0e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> * __thiscall
UMediaSoundComponent::GetNormalizedSpectralData
          (UMediaSoundComponent *this,
          TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FNode **lpCriticalSection;
  FNode **this_00;
  float *pfVar1;
  int iVar2;
  ISoundGenerator *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar7;
  float *pfVar8;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if ((this->bSpectralAnalysisEnabled == false) ||
     (pIVar3 = (this->MediaSoundGenerator).Object, pIVar3 == (ISoundGenerator *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  lpCriticalSection = &pIVar3[0x12].CommandQueue.Tail;
  if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(char *)((longlong)&pIVar3[2]._padding_ + 4) == '\0') {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    Audio::FAsyncSpectrumAnalyzer::LockOutputBuffer
              ((FAsyncSpectrumAnalyzer *)&pIVar3[0xb].CommandQueue.Tail);
    pfVar8 = (float *)pIVar3[3]._padding_;
    iVar2 = *(int *)&pIVar3[3].CommandQueue.Head;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pfVar1 = pfVar8 + iVar2;
    while( true ) {
      if (*(int *)&pIVar3[3].CommandQueue.Head != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      this_00 = &pIVar3[0xb].CommandQueue.Tail;
      if (pfVar8 == pfVar1) break;
      local_58 = *pfVar8;
      fStack_54 = 0.0;
      fStack_54 = Audio::FAsyncSpectrumAnalyzer::GetNormalizedMagnitudeForFrequency
                            ((FAsyncSpectrumAnalyzer *)this_00,local_58,Linear);
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      iVar6 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_50,(int *)((longlong)&local_48 + 4));
      }
      pfVar8 = pfVar8 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
      *(ulonglong *)(local_50.Data + (longlong)iVar6 * 8) = CONCAT44(fStack_54,local_58);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayNum = (int)local_48;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    local_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    Audio::FAsyncSpectrumAnalyzer::UnlockOutputBuffer((FAsyncSpectrumAnalyzer *)this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146c2cc90

UClass * __cdecl UMediaSoundComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSoundComponent",
               &Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton,
               StaticRegisterNativesUMediaSoundComponent,0x9a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaSoundComponent>,
               InternalVTableHelperCtorCaller<UMediaSoundComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSoundComponent.InnerSingleton;
}

// GetSelectedAttenuationSettings @ 146c2d420

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSoundAttenuationSettings * __thiscall
UMediaSoundComponent::GetSelectedAttenuationSettings(UMediaSoundComponent *this)

{
  FSoundAttenuationSettings *pFVar1;
  
  if ((this->_padding_ & 8) != 0) {
    return (FSoundAttenuationSettings *)&this->_padding_;
  }
  pFVar1 = (FSoundAttenuationSettings *)0x0;
  if (this->_padding_ != 0) {
    pFVar1 = (FSoundAttenuationSettings *)(this->_padding_ + 0x28);
  }
  return pFVar1;
}

// GetSoundClass @ 146c2d570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

USoundClass * __thiscall UMediaSoundComponent::GetSoundClass(UMediaSoundComponent *this)

{
  UAudioSettings *this_00;
  UClass *this_01;
  USoundClass *pUVar1;
  
  pUVar1 = (USoundClass *)this->_padding_;
  if (pUVar1 == (USoundClass *)0x0) {
    this_01 = Z_Construct_UClass_UAudioSettings_NoRegister();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    this_00 = (UAudioSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    if (this_00 == (UAudioSettings *)0x0) {
      pUVar1 = (USoundClass *)0x0;
    }
    else {
      pUVar1 = UAudioSettings::GetDefaultMediaSoundClass(this_00);
      if (pUVar1 == (USoundClass *)0x0) {
        pUVar1 = UAudioSettings::GetDefaultSoundClass(this_00);
        return pUVar1;
      }
    }
  }
  return pUVar1;
}

// GetSpectralData @ 146c2d830

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> * __thiscall
UMediaSoundComponent::GetSpectralData
          (UMediaSoundComponent *this,
          TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FNode **lpCriticalSection;
  FNode **this_00;
  float *pfVar1;
  int iVar2;
  ISoundGenerator *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar7;
  float *pfVar8;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if ((this->bSpectralAnalysisEnabled == false) ||
     (pIVar3 = (this->MediaSoundGenerator).Object, pIVar3 == (ISoundGenerator *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  lpCriticalSection = &pIVar3[0x12].CommandQueue.Tail;
  if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(char *)((longlong)&pIVar3[2]._padding_ + 4) == '\0') {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    Audio::FAsyncSpectrumAnalyzer::LockOutputBuffer
              ((FAsyncSpectrumAnalyzer *)&pIVar3[0xb].CommandQueue.Tail);
    pfVar8 = (float *)pIVar3[3]._padding_;
    iVar2 = *(int *)&pIVar3[3].CommandQueue.Head;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pfVar1 = pfVar8 + iVar2;
    while( true ) {
      if (*(int *)&pIVar3[3].CommandQueue.Head != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      this_00 = &pIVar3[0xb].CommandQueue.Tail;
      if (pfVar8 == pfVar1) break;
      local_58 = *pfVar8;
      fStack_54 = 0.0;
      fStack_54 = Audio::FAsyncSpectrumAnalyzer::GetMagnitudeForFrequency
                            ((FAsyncSpectrumAnalyzer *)this_00,local_58,Linear);
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      iVar6 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_50,(int *)((longlong)&local_48 + 4));
      }
      pfVar8 = pfVar8 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
      *(ulonglong *)(local_50.Data + (longlong)iVar6 * 8) = CONCAT44(fStack_54,local_58);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayNum = (int)local_48;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    local_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    Audio::FAsyncSpectrumAnalyzer::UnlockOutputBuffer((FAsyncSpectrumAnalyzer *)this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// Init @ 146c2efc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaSoundComponent::Init(UMediaSoundComponent *this,int *param_1)

{
  undefined4 uVar1;
  
  if (this->Channels == Mono) {
    *(undefined4 *)&this->_padding_ = 1;
    return true;
  }
  uVar1 = 8;
  if (this->Channels == Stereo) {
    uVar1 = 2;
  }
  *(undefined4 *)&this->_padding_ = uVar1;
  return true;
}

// OnRegister @ 146c30330

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaSoundComponent::OnRegister(UMediaSoundComponent *this)

{
  USynthComponent::CreateAudioComponent((USynthComponent *)this);
  USceneComponent::OnRegister((USceneComponent *)this);
  return;
}

// OnUnregister @ 146c30340

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::OnUnregister(UMediaSoundComponent *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SampleQueue != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_38) {
    (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SampleQueue).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (&this->CurrentPlayerFacade != (TWeakPtr<FMediaPlayerFacade,1> *)local_18) {
    pTVar3 = (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
    (this->CurrentPlayerFacade).Object = (FMediaPlayerFacade *)0x0;
    (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MediaSoundGenerator != (TSharedPtr<ISoundGenerator,1> *)&local_28) {
    (this->MediaSoundGenerator).Object = (ISoundGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MediaSoundGenerator).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  USynthComponent::OnUnregister((USynthComponent *)this);
  return;
}

// PostLoad @ 146c31160

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaSoundComponent::PostLoad(UMediaSoundComponent *this)

{
  UMediaPlayer *pUVar1;
  FWeakObjectPtr local_res8;
  UMediaPlayer *local_res10;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UMediaPlayer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CurrentPlayer).WeakPtr = local_res8;
  return;
}

// RemoveClockSink @ 146c324d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaSoundComponent::RemoveClockSink(UMediaSoundComponent *this)

{
  TSharedPtr<FMediaSoundComponentClockSink,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaSoundComponentClockSink *pFVar5;
  bool bVar6;
  FName *pFVar7;
  FModuleManager *this_00;
  IModuleInterface *pIVar8;
  longlong *plVar9;
  FName local_res8;
  FMediaSoundComponentClockSink *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &this->ClockSink;
  if (pTVar1->Object != (FMediaSoundComponentClockSink *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,"Media");
    FVar2 = *pFVar7;
    this_00 = FModuleManager::Get();
    pIVar8 = FModuleManager::LoadModule(this_00,FVar2,None);
    if (pIVar8 != (IModuleInterface *)0x0) {
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0xa8))(pIVar8);
      pcVar3 = *(code **)(*plVar9 + 0x18);
      if (pTVar1->Object == (FMediaSoundComponentClockSink *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar4 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar5 = pTVar1->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar5 == (FMediaSoundComponentClockSink *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar5;
      local_30 = pTVar4;
      (*pcVar3)(plVar9,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ClockSink != (TSharedPtr<FMediaSoundComponentClockSink,1> *)&local_28) {
      (this->ClockSink).Object = (FMediaSoundComponentClockSink *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockSink).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  return;
}

// SetEnableEnvelopeFollowing @ 146c35c30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::SetEnableEnvelopeFollowing(UMediaSoundComponent *this,bool param_1)

{
  FNode **lpCriticalSection;
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->MediaSoundGenerator).Object;
  this->bEnvelopeFollowingEnabled = param_1;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    lpCriticalSection = &pIVar1[0x12].CommandQueue.Tail;
    if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(bool *)((longlong)&pIVar1[2]._padding_ + 5) = param_1;
    *(undefined4 *)&pIVar1[0x12].CommandQueue.Head = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetEnableSpectralAnalysis @ 146c35d00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::SetEnableSpectralAnalysis(UMediaSoundComponent *this,bool param_1)

{
  FNode **lpCriticalSection;
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->MediaSoundGenerator).Object;
  this->bSpectralAnalysisEnabled = param_1;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    lpCriticalSection = &pIVar1[0x12].CommandQueue.Tail;
    if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(bool *)((longlong)&pIVar1[2]._padding_ + 4) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetEnvelopeFollowingsettings @ 146c35de0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::SetEnvelopeFollowingsettings
          (UMediaSoundComponent *this,int param_1,int param_2)

{
  FNode **lpCriticalSection;
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->MediaSoundGenerator).Object;
  this->EnvelopeFollowerAttackTime = param_1;
  this->EnvelopeFollowerReleaseTime = param_2;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    lpCriticalSection = &pIVar1[0x12].CommandQueue.Tail;
    if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(int *)&pIVar1[2].CommandQueue.Head = param_1;
    *(int *)&pIVar1[2].CommandQueue.Head.field_0x4 = param_2;
    pIVar1[0x12].CommandQueue.Head.field_0x4 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetMediaPlayer @ 146c36a90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::SetMediaPlayer(UMediaSoundComponent *this,UMediaPlayer *param_1)

{
  UMediaPlayer *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CurrentPlayer).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetSpectralAnalysisSettings @ 146c37290

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::SetSpectralAnalysisSettings
          (UMediaSoundComponent *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          EMediaSoundComponentFFTSize param_2)

{
  FNode **lpCriticalSection;
  ISoundGenerator *pIVar1;
  FScriptContainerElement *pFVar2;
  EFFTSize EVar3;
  
  if (param_2 == Min_64) {
    EVar3 = Min_64;
  }
  else if (param_2 == Small_256) {
    EVar3 = Small_256;
  }
  else if ((param_2 == Medium_512) || (param_2 != Large_1024)) {
    EVar3 = Default;
  }
  else {
    EVar3 = Large_1024;
  }
  (this->SpectrumAnalyzerSettings).FFTSize = EVar3;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->FrequenciesToAnalyze,param_1);
  pIVar1 = (this->MediaSoundGenerator).Object;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    lpCriticalSection = &pIVar1[0x12].CommandQueue.Tail;
    if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(EFFTSize *)((longlong)&pIVar1[2].CommandQueue.Tail + 2) = EVar3;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(pIVar1 + 3),param_1);
    Audio::FAsyncSpectrumAnalyzer::SetSettings
              ((FAsyncSpectrumAnalyzer *)&pIVar1[0xb].CommandQueue.Tail,
               (FSpectrumAnalyzerSettings *)&pIVar1[2].CommandQueue.Tail);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticRegisterNativesUMediaSoundComponent @ 146c37f50

void __cdecl UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMediaSoundComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146c381e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMediaSoundComponent::TickComponent
          (UMediaSoundComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  UpdatePlayer(this);
  return;
}

// UpdatePlayer @ 146c39b20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaSoundComponent::UpdatePlayer(UMediaSoundComponent *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  atomic<int> aVar3;
  FMediaPlayerFacade *this_00;
  TReferenceControllerBase<1> *pTVar4;
  ISoundGenerator *pIVar5;
  FNode *pFVar6;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  int iVar10;
  FMediaPlayerOptions *pFVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  UObject *pUVar16;
  FMediaPlayerFacade *pFVar17;
  FTimespan FVar18;
  FMediaPlayerFacade *pFVar19;
  FMediaPlayerFacade *pFVar20;
  FMediaPlayerFacade *pFVar21;
  float fVar22;
  FMediaAudioSampleQueue *local_res8;
  FMediaAudioSampleQueue *local_a8;
  FSharedReferencer<1> local_a0;
  TSharedRef<FMediaAudioSampleSink,1> local_98;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> local_58;
  FNode *pFStack_50;
  undefined8 local_48 [2];
  
  pUVar16 = FWeakObjectPtr::Get(&(this->CurrentPlayer).WeakPtr);
  if (pUVar16 == (UObject *)0x0) {
    pFVar2 = &this->CriticalSection;
    this->CachedRate = 0.0;
    (this->CachedTime).Ticks = 0;
    if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SampleQueue != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_88) {
      (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SampleQueue).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MediaSoundGenerator != (TSharedPtr<ISoundGenerator,1> *)&local_78) {
      (this->MediaSoundGenerator).Object = (ISoundGenerator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MediaSoundGenerator).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c39c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      return;
    }
  }
  else {
    if ((*(longlong *)&pUVar16[10].field_0x20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_00 = *(FMediaPlayerFacade **)&pUVar16[10].field_0x20;
    pTVar4 = *(TReferenceControllerBase<1> **)(pUVar16 + 0xb);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FMediaPlayerFacade *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar17 = (FMediaPlayerFacade *)
              (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
    pFVar21 = (FMediaPlayerFacade *)0x0;
    uVar15 = 0;
    pFVar19 = pFVar17;
    pFVar20 = pFVar21;
    if (pFVar17 != (FMediaPlayerFacade *)0x0) {
      iVar10 = (int)pFVar17->_padding_;
      do {
        pFVar19 = pFVar21;
        pFVar20 = (FMediaPlayerFacade *)0x0;
        if (iVar10 == 0) goto LAB_146c39cd6;
        LOCK();
        iVar14 = (int)pFVar17->_padding_;
        bVar12 = iVar10 == iVar14;
        if (bVar12) {
          *(int *)&pFVar17->_padding_ = iVar10 + 1;
          iVar14 = iVar10;
        }
        UNLOCK();
        iVar10 = iVar14;
      } while (!bVar12);
      pFVar19 = pFVar17;
      pFVar20 = (this->CurrentPlayerFacade).Object;
    }
LAB_146c39cd6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar19);
    bVar13 = *(byte *)((longlong)&this->_padding_ + 2) & 0x10;
    if (this_00 == pFVar20) {
      if (bVar13 == 0) {
        pFVar2 = &this->CriticalSection;
        if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
        local_68 = 0;
        FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->SampleQueue != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_68) {
          (this->SampleQueue).Object = (FMediaAudioSampleQueue *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->SampleQueue).SharedReferenceCount,&FStack_60);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_60.ReferenceController);
        if (&this->CurrentPlayerFacade != (TWeakPtr<FMediaPlayerFacade,1> *)local_48) {
          pTVar8 = (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
          (this->CurrentPlayerFacade).Object = (FMediaPlayerFacade *)0x0;
          (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar8->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
            }
          }
        }
        if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
        }
      }
    }
    else if (bVar13 != 0) {
      pFVar17 = ::operator_new(0xa0);
      if (pFVar17 == (FMediaPlayerFacade *)0x0) {
        local_98.Object = ___xmm_00000000000000000000000000000010;
        local_98.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)_UNK_150651568;
        local_res8 = (FMediaAudioSampleQueue *)&DAT_00000010;
      }
      else {
        *(undefined4 *)&pFVar17->_padding_ = 1;
        *(undefined4 *)((longlong)&pFVar17->_padding_ + 4) = 1;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMediaAudioSampleQueue___00_SharedPointerInternals__6B_
        ;
        pFVar17->_padding_ = 0;
        (pFVar17->DesiredPlayerName).ComparisonIndex = 0;
        (pFVar17->DesiredPlayerName).Number = 0;
        (pFVar17->TimeDelay).Ticks = 2;
        pFVar17->_padding_ =
             (longlong)
             &TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
              _vftable__for__FMediaAudioSampleSink__;
        *(undefined ***)&(pFVar17->ActivePlayerOptions).TypedValue.Tracks =
             &TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
              _vftable__for__TMediaSampleSource<IMediaAudioSample>__;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&(pFVar17->ActivePlayerOptions).TypedValue.Tracks.Metadata,
                   4000);
        pFVar11 = &(pFVar17->ActivePlayerOptions).TypedValue;
        (pFVar11->TracksByLanguage).Audio.Data.ArrayNum = 0;
        (pFVar11->TracksByLanguage).Audio.Data.ArrayMax = 0;
        pFVar17->_padding_ =
             (longlong)&FMediaAudioSampleQueue::_vftable__for__FMediaAudioSampleSink__;
        (pFVar17->ActivePlayerOptions).TypedValue.TracksByLanguage.Subtitle.Data.AllocatorInstance.
        Data = (FScriptContainerElement *)0x8;
        *(undefined ***)&(pFVar17->ActivePlayerOptions).TypedValue.Tracks =
             &FMediaAudioSampleQueue::_vftable__for__TMediaSampleSource<IMediaAudioSample>__;
        (pFVar17->ActivePlayerOptions).TypedValue.TracksByLanguage.Subtitle.Data.ArrayNum = 0;
        (pFVar17->ActivePlayerOptions).TypedValue.TracksByLanguage.Caption.Data.AllocatorInstance.
        Data = (FScriptContainerElement *)0x8000000000000000;
        (pFVar17->ActivePlayerOptions).TypedValue.TracksByLanguage.Audio.Data.AllocatorInstance.Data
             = (FScriptContainerElement *)0x0;
        pFVar11 = &(pFVar17->ActivePlayerOptions).TypedValue;
        (pFVar11->TracksByLanguage).Caption.Data.ArrayNum = 0;
        (pFVar11->TracksByLanguage).Caption.Data.ArrayMax = 0;
        *(undefined8 *)&(pFVar17->ActivePlayerOptions).TypedValue.TrackSelection =
             0xbff0000000000000;
        local_res8 = (FMediaAudioSampleQueue *)&pFVar17->_padding_;
        if ((local_res8 == (FMediaAudioSampleQueue *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
        pFVar21 = pFVar17;
        local_98.Object = (FMediaAudioSampleSink *)local_res8;
        local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      }
      FMediaPlayerFacade::AddAudioSampleSink(this_00,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      pFVar2 = &this->CriticalSection;
      if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      local_a8 = local_res8;
      if (pFVar21 != (FMediaPlayerFacade *)0x0) {
        LOCK();
        *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
        UNLOCK();
      }
      local_a0.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      if (&this->SampleQueue != (TSharedPtr<FMediaAudioSampleQueue,1> *)&local_a8) {
        (this->SampleQueue).Object = local_res8;
        local_a8 = (FMediaAudioSampleQueue *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SampleQueue).SharedReferenceCount,&local_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.ReferenceController);
      pIVar5 = (this->MediaSoundGenerator).Object;
      if (pIVar5 != (ISoundGenerator *)0x0) {
        if (&pIVar5[0x14].CommandQueue ==
            (TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&pIVar5[0x14].CommandQueue);
        pFVar6 = (FNode *)(this->SampleQueue).SharedReferenceCount.ReferenceController;
        aVar7 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
                (this->SampleQueue).Object;
        if (pFVar6 != (FNode *)0x0) {
          LOCK();
          *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
          UNLOCK();
        }
        local_58 = pIVar5[1].CommandQueue.Head;
        pFStack_50 = pIVar5[1].CommandQueue.Tail;
        pIVar5[1].CommandQueue.Head = aVar7;
        pIVar5[1].CommandQueue.Tail = pFVar6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFStack_50);
        aVar7 = pIVar5[1].CommandQueue.Head;
        if (aVar7 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0)
        {
          uVar15 = (**(code **)(*(longlong *)aVar7 + 0x20))();
        }
        *(undefined4 *)&pIVar5[2]._padding_ = uVar15;
        if (5 < (byte)LogMediaAssets._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&pIVar5[0x14].CommandQueue);
      }
      if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      }
      (this->CurrentPlayerFacade).Object = this_00;
      if (pTVar4 != (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar8 = (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar8->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
          }
        }
        (this->CurrentPlayerFacade).WeakReferenceCount.ReferenceController = pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
    }
    fVar22 = FMediaPlayerFacade::GetRate(this_00);
    this->CachedRate = fVar22;
    FVar18 = FMediaPlayerFacade::GetTime(this_00);
    pIVar5 = (this->MediaSoundGenerator).Object;
                    /* WARNING: Load size is inaccurate */
    (this->CachedTime).Ticks = *FVar18.Ticks;
    if (pIVar5 == (ISoundGenerator *)0x0) {
      FVar18.Ticks = -0x8000000000000000;
    }
    else {
      (this->LastPlaySampleTime).Ticks = pIVar5[0x12]._padding_;
      LOCK();
      *(float *)&pIVar5[0x11].CommandQueue.Head = this->CachedRate;
      UNLOCK();
      LOCK();
      pIVar5[0x11].CommandQueue.Tail = (FNode *)(this->CachedTime).Ticks;
      UNLOCK();
      FVar18.Ticks = (this->LastPlaySampleTime).Ticks;
    }
    FMediaPlayerFacade::SetLastAudioRenderedSampleTime(this_00,FVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// execBP_GetAttenuationSettingsToApply @ 146c3bbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMediaSoundComponent::execBP_GetAttenuationSettingsToApply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSoundAttenuationSettings *this;
  FSoundAttenuationSettings *pFVar3;
  undefined1 auStack_418 [32];
  FSoundAttenuationSettings local_3f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_418;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&local_3f8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3f8);
  }
  this = &local_3f8;
  if ((FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FSoundAttenuationSettings *)0x0) {
    this = (FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0xe].field_0x20 & 8) == 0) {
    if (*(longlong *)(param_1 + 0xf) != 0) {
      pFVar3 = (FSoundAttenuationSettings *)(*(longlong *)(param_1 + 0xf) + 0x28);
      goto LAB_146c3bc78;
    }
  }
  else {
    pFVar3 = (FSoundAttenuationSettings *)&param_1[0xf].field_0x8;
LAB_146c3bc78:
    if (pFVar3 != (FSoundAttenuationSettings *)0x0) {
      FSoundAttenuationSettings::operator=(this,pFVar3);
      uVar2 = 1;
      goto LAB_146c3bc88;
    }
  }
  uVar2 = 0;
LAB_146c3bc88:
  *(undefined1 *)param_3 = uVar2;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_3f8);
  return;
}

// execGetEnvelopeValue @ 146c3cae0

void __cdecl
UMediaSoundComponent::execGetEnvelopeValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x3d].field_0x8 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x3d].field_0x8 + 0x1b8);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetMediaPlayer @ 146c3cd30

void __cdecl
UMediaSoundComponent::execGetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x3a].field_0x10);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetNormalizedSpectralData @ 146c3ce90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaSoundComponent::execGetNormalizedSpectralData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetNormalizedSpectralData((UMediaSoundComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSpectralData @ 146c3d540

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaSoundComponent::execGetSpectralData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMediaSoundComponentSpectralData,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSpectralData((UMediaSoundComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetEnableEnvelopeFollowing @ 146c41640

void __cdecl
UMediaSoundComponent::execSetEnableEnvelopeFollowing(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x3c].field_0x19 = bVar3;
  lVar2 = *(longlong *)&param_1[0x3d].field_0x8;
  if (lVar2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x1c0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(bool *)(lVar2 + 0x35) = bVar3;
    *(undefined4 *)(lVar2 + 0x1b8) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// execSetEnableSpectralAnalysis @ 146c41710

void __cdecl
UMediaSoundComponent::execSetEnableSpectralAnalysis(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x3d].field_0x8;
  param_1[0x3c].field_0x18 = bVar3;
  if (lVar2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x1c0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(bool *)(lVar2 + 0x34) = bVar3;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// execSetEnvelopeFollowingsettings @ 146c417e0

void __cdecl
UMediaSoundComponent::execSetEnvelopeFollowingsettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res10[0];
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x3d].field_0x8;
  *(undefined4 *)&param_1[0x3c].field_0x10 = local_res8[0];
  *(undefined4 *)&param_1[0x3c].field_0x14 = local_res10[0];
  if (lVar2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x1c0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(undefined4 *)(lVar2 + 0x38) = uVar3;
    *(undefined4 *)(lVar2 + 0x3c) = uVar4;
    *(undefined1 *)(lVar2 + 0x1bc) = 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// execSetMediaPlayer @ 146c42530

void __cdecl
UMediaSoundComponent::execSetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x3a].field_0x10,(FObjectPtr)&local_res10);
  return;
}

// execSetSpectralAnalysisSettings @ 146c42970

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaSoundComponent::execSetSpectralAnalysisSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  char cVar2;
  void *_Src;
  undefined2 uVar3;
  longlong lVar4;
  char local_res8 [8];
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _Src = local_28;
  cVar2 = local_res8[0];
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_20;
  local_38.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_20,0,&local_38.AllocatorInstance,(int)local_20,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,_Src,lVar4 << 2);
  }
  if (cVar2 == '\0') {
    uVar3 = 0x40;
  }
  else if (cVar2 == '\x01') {
    uVar3 = 0x100;
  }
  else if ((cVar2 == '\x02') || (cVar2 != '\x03')) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x400;
  }
  *(undefined2 *)&param_1[0x3c].field_0xa = uVar3;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&param_1[0x3b].field_0x20,&local_38);
  lVar4 = *(longlong *)&param_1[0x3d].field_0x8;
  if (lVar4 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x1c0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(undefined2 *)(lVar4 + 0x42) = uVar3;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x48),&local_38);
    Audio::FAsyncSpectrumAnalyzer::SetSettings
              ((FAsyncSpectrumAnalyzer *)(lVar4 + 0x118),(FSpectrumAnalyzerSettings *)(lVar4 + 0x40)
              );
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

