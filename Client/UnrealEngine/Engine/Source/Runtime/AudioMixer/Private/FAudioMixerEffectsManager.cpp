// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// FAudioMixerEffectsManager @ 1464d7590

FAudioMixerEffectsManager * __thiscall
Audio::FAudioMixerEffectsManager::FAudioMixerEffectsManager
          (FAudioMixerEffectsManager *this,FAudioDevice *param_1)

{
  FAudioEffectsManager::FAudioEffectsManager((FAudioEffectsManager *)this,param_1);
  this->_padding_ = (longlong)&___7FAudioMixerEffectsManager_Audio__6B_;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->MasterReverbWetLevelCurve);
  (this->InvalidReverbEffect).Object = (FSoundEffectSubmix *)0x0;
  (this->InvalidReverbEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InvalidEQEffect).Object = (FSoundEffectSubmix *)0x0;
  (this->InvalidEQEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FAudioMixerEffectsManager @ 1464dbde0

void __thiscall
Audio::FAudioMixerEffectsManager::~FAudioMixerEffectsManager(FAudioMixerEffectsManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FAudioMixerEffectsManager_Audio__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvalidEQEffect).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvalidReverbEffect).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MasterReverbWetLevelCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MasterReverbWetLevelCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->MasterReverbWetLevelCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->MasterReverbWetLevelCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->MasterReverbWetLevelCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MasterReverbWetLevelCurve).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7FAudioEffectsManager__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  return;
}

// SetEQEffectParameters @ 14651f6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerEffectsManager::SetEQEffectParameters
          (FAudioMixerEffectsManager *this,FAudioEffectParameters *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  atomic<int> aVar8;
  FSharedReferencer<1> FVar9;
  FMixerSubmix *this_00;
  TSharedPtr<FSoundEffectSubmix,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FSoundEffectSubmix *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  lVar3 = this->_padding_;
  if ((*(int *)(lVar3 + 0xb80) < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0xb78);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x38);
  this_00 = *(FMixerSubmix **)(lVar3 + 0x30);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14651f8ac;
      }
      LOCK();
      aVar8 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar8;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar6);
  }
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = (FMixerSubmix *)0x0;
  }
  if (this_00 == (FMixerSubmix *)0x0) goto LAB_14651f89a;
  FMixerSubmix::GetSubmixEffect(this_00,&local_38,0);
  if (local_38.Object == (FSoundEffectSubmix *)0x0) {
LAB_14651f834:
    if ((this->InvalidEQEffect).Object != local_38.Object) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = (this->InvalidEQEffect).Object;
      pTStack_10 = (this->InvalidEQEffect).SharedReferenceCount.ReferenceController;
      (this->InvalidEQEffect).Object = local_38.Object;
      (this->InvalidEQEffect).SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      FVar9.ReferenceController = pTStack_10;
      goto LAB_14651f88b;
    }
  }
  else {
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    if ((local_38.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar7 = (**(code **)(*(longlong *)local_38.Object + 0x20))();
    if (cVar7 == '\0') goto LAB_14651f834;
    if ((local_38.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar7 = (**(code **)(*(longlong *)local_38.Object + 0x10))(local_38.Object,param_1);
    if (cVar7 == '\0') goto LAB_14651f834;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar9.ReferenceController = FStack_20.ReferenceController;
    if (&this->InvalidEQEffect != (TSharedPtr<FSoundEffectSubmix,1> *)&local_28) {
      (this->InvalidEQEffect).Object = (FSoundEffectSubmix *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InvalidEQEffect).SharedReferenceCount,&FStack_20);
      FVar9.ReferenceController = FStack_20.ReferenceController;
    }
LAB_14651f88b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
LAB_14651f89a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
LAB_14651f8ac:
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// SetRadioEffectParameters @ 146520c20

void __thiscall
Audio::FAudioMixerEffectsManager::SetRadioEffectParameters
          (FAudioMixerEffectsManager *this,FAudioEffectParameters *param_1)

{
  return;
}

// SetReverbEffectParameters @ 146520c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerEffectsManager::SetReverbEffectParameters
          (FAudioMixerEffectsManager *this,FAudioEffectParameters *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  atomic<int> aVar8;
  FSharedReferencer<1> FVar9;
  FMixerSubmix *this_00;
  TSharedPtr<FSoundEffectSubmix,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FSoundEffectSubmix *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  lVar3 = this->_padding_;
  if ((*(int *)(lVar3 + 0xb80) < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0xb78);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x28);
  this_00 = *(FMixerSubmix **)(lVar3 + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_146520e5c;
      }
      LOCK();
      aVar8 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar8;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar6);
  }
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = (FMixerSubmix *)0x0;
  }
  if (this_00 == (FMixerSubmix *)0x0) goto LAB_146520e4a;
  FMixerSubmix::GetSubmixEffect(this_00,&local_38,0);
  if (local_38.Object == (FSoundEffectSubmix *)0x0) {
LAB_146520de4:
    if ((this->InvalidReverbEffect).Object != local_38.Object) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = (this->InvalidReverbEffect).Object;
      pTStack_10 = (this->InvalidReverbEffect).SharedReferenceCount.ReferenceController;
      (this->InvalidReverbEffect).Object = local_38.Object;
      (this->InvalidReverbEffect).SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      FVar9.ReferenceController = pTStack_10;
      goto LAB_146520e3b;
    }
  }
  else {
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    if ((local_38.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar7 = (**(code **)(*(longlong *)local_38.Object + 0x18))();
    if (cVar7 == '\0') goto LAB_146520de4;
    if ((local_38.Object == (FSoundEffectSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar7 = (**(code **)(*(longlong *)local_38.Object + 0x10))(local_38.Object,param_1);
    if (cVar7 == '\0') goto LAB_146520de4;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar9.ReferenceController = FStack_20.ReferenceController;
    if (&this->InvalidReverbEffect != (TSharedPtr<FSoundEffectSubmix,1> *)&local_28) {
      (this->InvalidReverbEffect).Object = (FSoundEffectSubmix *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InvalidReverbEffect).SharedReferenceCount,&FStack_20);
      FVar9.ReferenceController = FStack_20.ReferenceController;
    }
LAB_146520e3b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
LAB_146520e4a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
LAB_146520e5c:
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

