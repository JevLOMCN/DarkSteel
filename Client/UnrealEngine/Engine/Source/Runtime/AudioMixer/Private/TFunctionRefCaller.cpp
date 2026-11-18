// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 149

// Call @ 1464ef110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  TSharedPtr<FSoundEffectBase,1> TStack_18;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  puVar2 = *(undefined8 **)param_1;
  puVar3 = puVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FSoundEffectSource,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar2 == puVar3) break;
    TStack_18.Object = (FSoundEffectBase *)*puVar2;
    TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    USoundEffectPreset::UnregisterInstance(&TStack_18);
    puVar2 = puVar2 + 2;
  }
  return;
}

// Call @ 1464ef120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_18;
  undefined1 local_10;
  
  if ((*(char *)((longlong)param_1 + 0x20) != '\0') &&
     (*(char *)((longlong)param_1 + 0x20) != '\x01')) {
    FOnSoundLoadComplete::ExecuteIfBound(param_1,*(USoundWave **)((longlong)param_1 + 0x18),true);
    return;
  }
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x18);
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar2) {
    local_10 = 0;
    local_18 = uVar1;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  }
  return;
}

// Call @ 1464ef180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FMixerSubmix *this;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FSoundEffectSubmix,1> TStack_18;
  
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0xb80) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18.Object = *(FSoundEffectSubmix **)((longlong)param_1 + 8);
  this = (FMixerSubmix *)*plVar2;
  TStack_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FMixerSubmix::AddSoundEffectSubmix(this,&TStack_18);
  return;
}

// Call @ 1464ef190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::AddPatchInputForAudioBus
            (*(FMixerSourceManager **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8),
             (FPatchInput *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::AddPatchOutputForAudioBus
            (*(FMixerSourceManager **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8),
             (TSharedPtr<Audio::FPatchOutput,1> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0xb80) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Audio::FMixerSubmix::ClearSoundEffectSubmixes((FMixerSubmix *)*plVar2);
  return;
}

// Call @ 1464ef1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  int iVar2;
  FMixerSubmix *this;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  undefined1 auStackX_10 [8];
  TReferenceControllerBase<1> *pTStackX_18;
  
  uVar10 = *(uint *)((longlong)param_1 + 8);
  lVar13 = *(longlong *)param_1;
  uVar12 = 0;
  uVar8 = uVar12;
  if ((int)uVar10 < *(int *)(lVar13 + 0x130)) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTStackX_18 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  lVar13 = (longlong)(int)uVar10 * 0x5d0 + *(longlong *)(lVar13 + 0x128);
  pTVar14 = pTStackX_18;
  if (pTStackX_18 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTStackX_18->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1464ddf62;
      LOCK();
      aVar7 = pTStackX_18->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTStackX_18->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    this = ((TWeakPtr<Audio::FMixerSubmix,1> *)((longlong)param_1 + 0x10))->Object;
    pTVar14 = pTStackX_18;
    if (this != (FMixerSubmix *)0x0) {
      uVar10 = *(int *)(lVar13 + 0xd8) - 1;
      if (-1 < (int)uVar10) {
        lVar15 = (longlong)(int)uVar10 * 0x28;
        do {
          uVar8 = uVar12;
          if ((int)uVar10 < *(int *)(lVar13 + 0xd8)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = TWeakPtr<Audio::FMixerSubmix,1>::UEOpEquals<Audio::FMixerSubmix>
                            ((TWeakPtr<Audio::FMixerSubmix,1> *)
                             (*(longlong *)(lVar13 + 0xd0) + lVar15),
                             (TWeakPtr<Audio::FMixerSubmix,1> *)((longlong)param_1 + 0x10));
          if (bVar6) {
            uVar8 = uVar12;
            if ((int)uVar10 < *(int *)(lVar13 + 0xd8)) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      ((TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_> *)
                       (lVar13 + 0xd0),uVar10);
          }
          lVar15 = lVar15 + -0x28;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      pTVar14 = pTStackX_18;
      *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) & 0xdf;
      iVar2 = *(int *)(lVar13 + 0xd8);
      plVar11 = *(longlong **)(lVar13 + 0xd0);
      plVar1 = plVar11 + (longlong)iVar2 * 5;
      do {
        if (*(int *)(lVar13 + 0xd8) != iVar2) {
          auStackX_10[0] = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_10);
        }
        if (plVar11 == plVar1) goto LAB_1464de0fd;
        pTVar3 = (TReferenceControllerBase<1> *)plVar11[1];
        pTVar9 = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar5 = pTVar3->SharedReferenceCount;
          do {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            if (aVar5 == (atomic<int>)0x0) goto LAB_1464de0d4;
            LOCK();
            aVar7 = pTVar3->SharedReferenceCount;
            bVar6 = aVar5 == aVar7;
            if (bVar6) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar7 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar7;
          } while (!bVar6);
          pTVar9 = pTVar3;
          if ((*plVar11 != 0) && ((int)plVar11[3] == 1)) goto code_r0x0001464de0ed;
        }
LAB_1464de0d4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        plVar11 = plVar11 + 5;
      } while( true );
    }
  }
LAB_1464ddf62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
code_r0x0001464de0ed:
  *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) | 0x20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_1464de0fd:
  if ((*(byte *)(lVar13 + 0x522) & 0x20) == 0) {
    uVar10 = *(uint *)((longlong)param_1 + 8);
    lVar13 = *(longlong *)param_1;
    uVar8 = 0;
    if ((int)uVar10 < *(int *)(lVar13 + 0x140)) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::Audio::FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
              ((FMixerSourceSubmixOutputBuffer *)
               ((longlong)(int)uVar10 * 0x330 + *(longlong *)(lVar13 + 0x138)),
               (TArray<float,TAlignedHeapAllocator<16>_> *)0x0);
  }
  uVar10 = *(uint *)((longlong)param_1 + 8);
  lVar13 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar10 < *(int *)(lVar13 + 0x88)) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::Audio::FMixerSubmix::RemoveSourceVoice
            (this,*(FMixerSourceVoice **)(*(longlong *)(lVar13 + 0x80) + (longlong)(int)uVar10 * 8))
  ;
  goto LAB_1464ddf62;
}

// Call @ 1464ef1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined1 *puVar1;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar2;
  int *piVar3;
  FString *pFVar4;
  FQuartzQuantizedRequestData *this;
  byte *pbVar5;
  IAudioMixerRenderStep *pIVar6;
  byte bVar7;
  char cVar8;
  Type TVar9;
  IAudioMixerRenderStep IVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  FAudioRenderScheduler *this_00;
  void *_Src;
  code *pcVar14;
  FAudioBusKey FVar15;
  FAudioBusKey FVar16;
  atomic<int> aVar17;
  FMixerAudioBus *pFVar18;
  bool bVar19;
  byte bVar20;
  BOOL BVar21;
  int iVar22;
  atomic<int> aVar23;
  uint uVar24;
  FInlineEnvelopeFollower *pFVar25;
  FQuartzQuantizedCommandHandle *pFVar26;
  FAudioSpatializationInterfaceInfo *pFVar27;
  longlong lVar28;
  longlong lVar29;
  FAudioRenderStepId FVar30;
  byte bVar31;
  uint uVar32;
  ulonglong uVar33;
  LPCRITICAL_SECTION lpCriticalSection;
  IAudioMixerRenderStep IVar34;
  FScriptContainerElement *pFVar35;
  IAudioMixerRenderStep *pIVar36;
  IAudioMixerRenderStep *pIVar37;
  uint uVar38;
  int iVar40;
  FString *pFVar41;
  bool abStackX_8 [8];
  bool abStackX_10 [8];
  undefined1 auStackX_18 [8];
  FLLMScope aFStackX_20 [2];
  uint uStack_2b8;
  undefined4 auStack_2b0 [2];
  ForAnyElementType FStack_2a8;
  undefined8 uStack_2a0;
  TSharedPtr<Audio::FMixerSubmix,1> TStack_298;
  undefined8 uStack_288;
  ForAnyElementType FStack_280;
  int iStack_278;
  int iStack_274;
  uint uStack_270;
  float fStack_26c;
  float afStack_268 [2];
  FMixerSourceSubmixOutputBufferSettings FStack_260;
  uint uStack_240;
  undefined4 uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  longlong lStack_230;
  FInlineEnvelopeFollowerInitParams FStack_228;
  FMemScope FStack_210;
  FAudioRenderStepId FStack_208;
  FAudioRenderStepId FStack_200;
  FScriptContainerElement *pFStack_1f8;
  IAudioMixerRenderStep IStack_1f0;
  TSharedRef<Audio::FMixerAudioBus,1> TStack_1e8;
  FString FStack_1d8;
  FString FStack_1c8;
  FAudioBusSend FStack_1b8;
  TSharedRef<Audio::FMixerAudioBus,1> TStack_1a0;
  undefined1 auStack_190 [8];
  IAudioMixerRenderStep IStack_188;
  IAudioMixerRenderStep IStack_180;
  FString FStack_178;
  IAudioMixerRenderStep IStack_168;
  IAudioMixerRenderStep IStack_160;
  IAudioMixerRenderStep IStack_158;
  IAudioMixerRenderStep IStack_150;
  FQuartzQuantizedCommandInitInfo FStack_148;
  FQuartzQuantizedCommandHandle FStack_c8;
  FAudioSpatializationInterfaceInfo FStack_a8;
  FInlineEnvelopeFollower FStack_88;
  ulonglong uVar39;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if ((*(longlong *)((longlong)param_1 + 0x90) == 0) &&
     (bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959147>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x4ab,"InitParams.SourceVoice != nullptr"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar24 = *(uint *)((longlong)param_1 + 8);
  lVar28 = *(longlong *)param_1;
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x130)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x18);
  IVar10 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x10);
  pIVar37 = (IAudioMixerRenderStep *)((longlong)(int)uVar24 * 0x5d0 + *(longlong *)(lVar28 + 0x128))
  ;
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    LOCK();
    *(int *)((longlong)IVar34 + 8) = *(int *)((longlong)IVar34 + 8) + 1;
    UNLOCK();
  }
  IStack_188 = pIVar37[2];
  IStack_180 = pIVar37[3];
  pIVar37[2] = IVar10;
  pIVar37[3] = IVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IStack_180);
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959153>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x4b1,"SourceInfo.MixerSourceBuffer.IsValid()"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = pIVar37[2];
  uVar24 = *(uint *)((longlong)IVar34 + 0x128);
  TVar9 = *(Type *)((longlong)IVar34 + 0x88);
  *(uint *)((longlong)IVar34 + 0x128) = uVar24 | 1;
  if ((TVar9 == PCM) || (TVar9 == PCMPreview)) {
    ::Audio::FMixerSourceBuffer::SubmitInitialPCMBuffers((FMixerSourceBuffer *)IVar34);
  }
  else if (((TVar9 == PCMRealTime) || (TVar9 == Streaming)) && ((uVar24 & 0x200) == 0)) {
    ::Audio::FMixerSourceBuffer::SubmitInitialRealtimeBuffers((FMixerSourceBuffer *)IVar34);
  }
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = pIVar37[2];
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)IVar34 + 0xd8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  BVar21 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar21 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if (*(longlong **)((longlong)IVar34 + 0x60) == (longlong *)0x0) {
      if ((*(longlong *)((longlong)IVar34 + 0x58) != 0) &&
         ((*(byte *)((longlong)IVar34 + 0x128) & 0x20) != 0)) {
        if (((*(byte *)(*(longlong *)((longlong)IVar34 + 0x58) + 0x364) & 1) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("SoundWave && SoundWave->bProcedural",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                ,0x322,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        (**(code **)(**(longlong **)((longlong)IVar34 + 0x58) + 0x3b8))();
      }
    }
    else {
      (**(code **)(**(longlong **)((longlong)IVar34 + 0x60) + 0x18))();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  bVar31 = *(byte *)(pIVar37 + 0xa4);
  bVar7 = *(byte *)((longlong)param_1 + 0x2c0);
  bVar20 = pIVar37[0xa4].field_0x1 & 0x3d | 2;
  pIVar37[0xa4].field_0x1 = bVar20;
  *(byte *)(pIVar37 + 0xa4) = ((bVar31 ^ bVar7) & 1 ^ bVar31) & 3 | 4;
  bVar20 = (*(char *)((longlong)param_1 + 0x2c2) << 2 ^ bVar20) & 4 ^ bVar20;
  pIVar37[0xa4].field_0x1 = bVar20;
  pIVar37[0xa4].field_0x1 = (*(char *)((longlong)param_1 + 0x2c3) << 3 ^ bVar20) & 8 ^ bVar20;
  bVar31 = (*(char *)((longlong)param_1 + 0x2c8) << 3 ^ pIVar37[0xa4].field_0x2) & 8U ^
           pIVar37[0xa4].field_0x2;
  pIVar37[0xa4].field_0x2 = bVar31;
  *(undefined4 *)(pIVar37 + 0xa6) = *(undefined4 *)((longlong)param_1 + 0x2cc);
  *(undefined4 *)&pIVar37[0xa6].field_0x4 = *(undefined4 *)((longlong)param_1 + 0x2d0);
  pIVar37[0xa7] = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x2b8);
  cVar8 = *(char *)((longlong)param_1 + 0x2c9);
  pIVar37[0xa4].field_0x3 = pIVar37[0xa4].field_0x3 & 0xfe;
  pIVar37[0xa4].field_0x2 = (cVar8 << 4 ^ bVar31) & 0x10 ^ bVar31;
  IVar34 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x20);
  pIVar37[4] = IVar34;
  (**(code **)(*(longlong *)IVar34 + 8))();
  iVar22 = *(int *)((longlong)param_1 + 0x98);
  *(int *)&pIVar37[0xa4].field_0x4 = iVar22;
  *(undefined4 *)&pIVar37[0xa5].field_0x4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  ::Audio::FRuntimeResampler::Reset((FRuntimeResampler *)(pIVar37 + 0xa8),iVar22);
  puVar1 = &pIVar37[10].field_0x4;
  iVar40 = *(int *)(*(longlong *)param_1 + 0x240) * *(int *)((longlong)param_1 + 0x98);
  iVar22 = *(int *)puVar1;
  *(int *)(pIVar37 + 10) = 0;
  if (iVar22 < 0) {
    ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pIVar37 + 9),0,(int *)puVar1);
  }
  iVar22 = ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar40,(ForAnyElementType *)(pIVar37 + 9),(int *)(pIVar37 + 10),
                      (int *)puVar1);
  memset((void *)((longlong)pIVar37[9] + (longlong)iVar22 * 4),0,(longlong)iVar40 << 2);
  iVar22 = *(int *)&pIVar37[0xc].field_0x4;
  *(int *)(pIVar37 + 0xc) = 0;
  if (iVar22 < 0) {
    ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pIVar37 + 0xb),0,(int *)&pIVar37[0xc].field_0x4);
  }
  iVar22 = ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar40,(ForAnyElementType *)(pIVar37 + 0xb),(int *)(pIVar37 + 0xc),
                      (int *)&pIVar37[0xc].field_0x4);
  memset((void *)((longlong)pIVar37[0xb] + (longlong)iVar22 * 4),0,(longlong)iVar40 << 2);
  ::Audio::FInterpolatedLPF::Init
            ((FInterpolatedLPF *)(pIVar37 + 0x2a),
             (float)*(int *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0x84),
             *(int *)((longlong)param_1 + 0x98));
  ::Audio::FInterpolatedHPF::Init
            ((FInterpolatedHPF *)(pIVar37 + 0x32),
             (float)*(int *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0x84),
             *(int *)((longlong)param_1 + 0x98));
  FStack_228.AttackTimeMsec = *(float *)((longlong)param_1 + 0xa0);
  FStack_228.bIsAnalog = true;
  FStack_228.AnalysisWindowMsec = 5.0;
  FStack_228.Mode = Peak;
  FStack_228.SampleRate =
       (float)(*(int *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0x84) /
              *(int *)(*(longlong *)param_1 + 0x240));
  FStack_228.ReleaseTimeMsec = *(float *)((longlong)param_1 + 0xa4);
  pFVar25 = ::Audio::FInlineEnvelopeFollower::FInlineEnvelopeFollower(&FStack_88,&FStack_228);
  IVar34 = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x68] = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x69] = IVar34;
  IVar34 = *(IAudioMixerRenderStep *)&pFVar25->Value;
  pIVar37[0x6a] = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x6b] = IVar34;
  IVar34 = *(IAudioMixerRenderStep *)&pFVar25->AnalysisFilterAlpha;
  pIVar37[0x6c] = *(IAudioMixerRenderStep *)&pFVar25->AnalysisValue;
  pIVar37[0x6d] = IVar34;
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x6f),
             (FModulationDestination *)((longlong)param_1 + 0x2d8));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x71),
             (FModulationDestination *)((longlong)param_1 + 0x308));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x73),
             (FModulationDestination *)((longlong)param_1 + 0x2f8));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x75),
             (FModulationDestination *)((longlong)param_1 + 0x2e8));
  this = (FQuartzQuantizedRequestData *)((longlong)param_1 + 0x238);
  if (*(longlong *)((longlong)param_1 + 0x248) != 0) {
    bVar19 = ::Audio::FQuartzClockManager::DoesClockExist
                       ((FQuartzClockManager *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xab0),
                        (FName *)this);
    if (bVar19) {
      ::Audio::FQuartzQuantizedCommandInitInfo::FQuartzQuantizedCommandInitInfo
                (&FStack_148,this,(float)*(int *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0x84)
                 ,*(int *)((longlong)param_1 + 8));
      pFVar26 = ::Audio::FQuartzClockManager::AddCommandToClock
                          ((FQuartzClockManager *)
                           (*(longlong *)(*(longlong *)param_1 + 0x40) + 0xab0),&FStack_c8,
                           &FStack_148);
      pTVar2 = &pFVar26->CommandPtr;
      *(FName *)(pIVar37 + 0x9c) = pFVar26->OwningClockName;
      if ((TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(pIVar37 + 0x9d) != pTVar2) {
        pIVar37[0x9d] = (IAudioMixerRenderStep)pTVar2->Object;
        pTVar2->Object = (IQuartzQuantizedCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pIVar37 + 0x9e),
                   &(pFVar26->CommandPtr).SharedReferenceCount);
      }
      pIVar37[0x9f] = (IAudioMixerRenderStep)pFVar26->MixerDevice;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_c8.CommandPtr.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_148.OwningClockPointer.SharedReferenceCount.ReferenceController);
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 FStack_148.GameThreadSubscribers.AllocatorInstance.Data,
                 FStack_148.GameThreadSubscribers.ArrayNum);
      if ((FQuartzGameThreadSubscriber *)FStack_148.GameThreadSubscribers.AllocatorInstance.Data !=
          (FQuartzGameThreadSubscriber *)0x0) {
        FMemory::Free(FStack_148.GameThreadSubscribers.AllocatorInstance.Data);
      }
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 FStack_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
                 FStack_148.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
      if ((FQuartzGameThreadSubscriber *)
          FStack_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
          (FQuartzGameThreadSubscriber *)0x0) {
        FMemory::Free(FStack_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_148.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
    }
    else {
      if (2 < (byte)LogAudioMixer._0_1_) {
        ::FName::ToString((FName *)this,&FStack_178);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
        }
      }
      if ((*(longlong *)((longlong)param_1 + 0x248) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      ::Audio::IQuartzQuantizedCommand::Cancel
                (*(IQuartzQuantizedCommand **)((longlong)param_1 + 0x248));
    }
  }
  if (*(char *)((longlong)param_1 + 0x2c2) != '\0') {
    if (((*(byte *)(*(longlong *)param_1 + 0x24c) & 2) == 0) &&
       (bVar19 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160959229>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0x4fd,"bUsingSpatializationPlugin"), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FLLMScope::FLLMScope(aFStackX_20,AudioMixerPlugins,false,None,Default,true);
    FMemScope::FMemScope(&FStack_210,AudioMixerPlugins,true);
    *(byte *)(*(longlong *)param_1 + 0x24c) = *(byte *)(*(longlong *)param_1 + 0x24c) & 0xfd;
    pFVar27 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                        (*(FAudioDevice **)(*(longlong *)param_1 + 0x40),&FStack_a8);
    FAudioDevice::FAudioSpatializationInterfaceInfo::operator=
              ((FAudioSpatializationInterfaceInfo *)(*(longlong *)param_1 + 0x48),pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a8.SpatializationPlugin.SharedReferenceCount.ReferenceController);
    if (*(longlong *)(*(longlong *)param_1 + 0x50) != 0) {
      pbVar5 = (byte *)(*(longlong *)param_1 + 0x24c);
      *pbVar5 = *pbVar5 | 2;
    }
    lVar28 = *(longlong *)param_1;
    if ((*(longlong *)(lVar28 + 0x50) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x50);
    (**(code **)(*plVar11 + 0x40))
              (plVar11,*(undefined4 *)((longlong)param_1 + 8),(longlong)param_1 + 0x2b0,
               *(undefined4 *)((longlong)param_1 + 0x98),*(undefined8 *)((longlong)param_1 + 0xb8));
    FMemScope::~FMemScope(&FStack_210);
    FLLMScope::~FLLMScope(aFStackX_20);
  }
  if (*(longlong *)((longlong)param_1 + 0xc0) != 0) {
    lVar28 = *(longlong *)(*(longlong *)param_1 + 0x40);
    if ((*(longlong *)(lVar28 + 0x110) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x110);
    (**(code **)(*plVar11 + 0x18))
              (plVar11,*(undefined4 *)((longlong)param_1 + 8),(longlong)param_1 + 0x2b0,
               *(undefined4 *)((longlong)param_1 + 0x98),*(undefined8 *)((longlong)param_1 + 0xc0));
    pIVar37[0xa4].field_0x1 = pIVar37[0xa4].field_0x1 | 0x10;
  }
  if (*(longlong *)((longlong)param_1 + 200) != 0) {
    lVar28 = *(longlong *)(*(longlong *)param_1 + 0x40);
    if ((*(longlong *)(lVar28 + 0x100) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x100);
    (**(code **)(*plVar11 + 0x20))
              (plVar11,*(undefined4 *)((longlong)param_1 + 8),(longlong)param_1 + 0x2b0,
               *(undefined4 *)((longlong)param_1 + 0x98),*(undefined8 *)((longlong)param_1 + 200));
    pIVar37[0xa4].field_0x1 = pIVar37[0xa4].field_0x1 | 0x20;
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x2a0);
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    IVar10 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x2a8);
    if (IVar10 != (IAudioMixerRenderStep)0x0) {
      LOCK();
      *(int *)((longlong)IVar10 + 8) = *(int *)((longlong)IVar10 + 8) + 1;
      UNLOCK();
    }
    IStack_168 = pIVar37[0xa2];
    IStack_160 = pIVar37[0xa3];
    pIVar37[0xa2] = IVar34;
    pIVar37[0xa3] = IVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IStack_160);
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x298);
  IVar10 = *(IAudioMixerRenderStep *)((longlong)param_1 + 0x290);
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    LOCK();
    *(int *)((longlong)IVar34 + 8) = *(int *)((longlong)IVar34 + 8) + 1;
    UNLOCK();
  }
  IStack_158 = pIVar37[0xa0];
  IStack_150 = pIVar37[0xa1];
  pIVar37[0xa0] = IVar10;
  pIVar37[0xa1] = IVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IStack_150);
  bVar31 = pIVar37[0xa4].field_0x2 & 0x7f | *(char *)((longlong)param_1 + 0x2cb) << 7;
  *(undefined1 *)(pIVar37 + 0x3f) = 1;
  pIVar37[0xa4].field_0x2 = bVar31;
  bVar31 = (bVar31 ^ *(byte *)((longlong)param_1 + 0x2c5)) & 1 ^ bVar31;
  pIVar37[0xa4].field_0x2 = bVar31;
  bVar31 = (*(char *)((longlong)param_1 + 0x2c6) * '\x02' ^ bVar31) & 2 ^ bVar31;
  pIVar37[0xa4].field_0x2 = bVar31;
  pIVar37[0xa4].field_0x2 = (*(char *)((longlong)param_1 + 0x2c7) << 2 ^ bVar31) & 4 ^ bVar31;
  if (*(int *)((longlong)param_1 + 0x98) <= *(int *)((longlong)param_1 + 0x88)) {
    pIVar36 = (IAudioMixerRenderStep *)((longlong)param_1 + 0x318);
    pIVar6 = pIVar37 + 0x3b;
    *(bool *)(pIVar37 + 0x3f) = *(char *)((longlong)param_1 + 0x2c1) == '\0';
    *(undefined4 *)(pIVar37 + 0x3a) = *(undefined4 *)((longlong)param_1 + 0x74);
    if (pIVar6 != pIVar36) {
      DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                ((TSharedPtr<FSoundEffectSource,1> *)*pIVar6,*(int *)(pIVar37 + 0x3c));
      if (*pIVar6 != (IAudioMixerRenderStep)0x0) {
        FMemory::Free((void *)*pIVar6);
      }
      *pIVar6 = *pIVar36;
      *pIVar36 = (IAudioMixerRenderStep)0x0;
      *(undefined4 *)(pIVar37 + 0x3c) = *(undefined4 *)((longlong)param_1 + 800);
      *(undefined4 *)&pIVar37[0x3c].field_0x4 = *(undefined4 *)((longlong)param_1 + 0x324);
      *(undefined8 *)((longlong)param_1 + 800) = 0;
    }
    pIVar36 = pIVar37 + 0x3d;
    uStack_288 = 0;
    if (((*(FScriptContainerElement **)pIVar36 <= (FScriptContainerElement *)&uStack_288) &&
        ((FScriptContainerElement *)&uStack_288 <
         *(FScriptContainerElement **)pIVar36 + (longlong)*(int *)&pIVar37[0x3e].field_0x4 * 8)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    iVar22 = *(int *)(pIVar37 + 0x3e);
    if (iVar22 == *(int *)&pIVar37[0x3e].field_0x4) {
      iVar22 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pIVar36,(int *)&pIVar37[0x3e].field_0x4);
    }
    *(int *)(pIVar37 + 0x3e) = iVar22 + 1;
    *(undefined8 *)(*(FScriptContainerElement **)pIVar36 + (longlong)iVar22 * 8) = uStack_288;
    uVar24 = *(uint *)((longlong)param_1 + 0x58);
    if (uVar24 != 0xffffffff) {
      *(uint *)(pIVar37 + 0x1c) = uVar24;
      if (*(float *)((longlong)param_1 + 0x70) != 0.0) {
        pIVar37[0x1d] =
             (IAudioMixerRenderStep)
             (longlong)
             ((float)*(int *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0x84) *
             *(float *)((longlong)param_1 + 0x70));
      }
      uStack_23c = 0xffffffff;
      FVar15.InstanceId = 0xffffffff;
      FVar15.ObjectId = uVar24;
      abStackX_8[0] = false;
      uStack_240 = uVar24;
      ::Audio::FMixerSourceManager::FindOrAddAudioBus
                (*(FMixerSourceManager **)param_1,&TStack_1e8,FVar15,
                 *(int *)((longlong)param_1 + 0x5c),true,abStackX_8);
      pFVar18 = TStack_1e8.Object;
      if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar35 = (pFVar18->InstanceIds).AllocatorInstance.Data;
      auStack_2b0[0] = *(undefined4 *)((longlong)param_1 + 8);
      if (((pFVar35 <= (FScriptContainerElement *)auStack_2b0) &&
          ((FScriptContainerElement *)auStack_2b0 <
           pFVar35 + (longlong)(pFVar18->InstanceIds).ArrayMax * 4)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar22 = (pFVar18->InstanceIds).ArrayNum;
      piVar3 = &(pFVar18->InstanceIds).ArrayMax;
      if (iVar22 == *piVar3) {
        iVar22 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar18->InstanceIds).AllocatorInstance,piVar3);
      }
      (pFVar18->InstanceIds).ArrayNum = iVar22 + 1;
      *(undefined4 *)((pFVar18->InstanceIds).AllocatorInstance.Data + (longlong)iVar22 * 4) =
           auStack_2b0[0];
      if (AudioMixerCVars::UseRenderScheduler != 0) {
        ::Audio::FAudioRenderStepId::FromTransmitterID((ulong64)&FStack_208);
        ::Audio::FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&FStack_200);
        ::Audio::FAudioRenderScheduler::AddDependency
                  ((pFVar18->SourceManager->MixerDevice->RenderScheduler).Ptr,FStack_200,FStack_208)
        ;
      }
      if (abStackX_8[0] == false) {
        ::FString::operator=(&(TStack_1e8.Object)->BusName,(FString *)((longlong)param_1 + 0x60));
        ::Audio::TraceAudioBusStartMessage
                  (*(uint *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xa0),
                   *(uint *)((longlong)param_1 + 0x58),(FString *)((longlong)param_1 + 0x60),
                   *(int *)((longlong)param_1 + 0x5c));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_1e8.SharedReferenceCount.ReferenceController);
    }
  }
  pIVar36 = pIVar37 + 0x1f;
  uStack_2b8 = 0;
  lVar28 = (longlong)param_1 - (longlong)pIVar37;
  lStack_230 = lVar28;
  do {
    uStack_270 = *(uint *)((longlong)&pIVar36[-0x17].field_0x0 + lVar28);
    uVar33 = (ulonglong)(int)uStack_270;
    IVar34 = *(IAudioMixerRenderStep *)((longlong)&pIVar36[-0x18].field_0x0 + lVar28);
    IStack_1f0 = (IAudioMixerRenderStep)(uVar33 * 0x20 + (longlong)IVar34);
    while( true ) {
      IVar10 = IStack_1f0;
      if (*(int *)((longlong)&pIVar36[-0x17].field_0x0 + lVar28) != (int)uVar33) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<Audio::FInitAudioBusSend_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_18);
        lVar28 = lStack_230;
      }
      if (IVar34 == IVar10) break;
      FStack_1b8.SourceId = *(int *)((longlong)param_1 + 8);
      FStack_1b8.TransmitterID = 0xffffffffffffffff;
      FStack_1b8.SendLevel = 0.0;
      if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FStack_1b8.SendLevel = *(float *)((longlong)IVar34 + 4);
      uStack_234 = 0xffffffff;
      FStack_1b8.TransmitterID = *(ulong64 *)((longlong)pIVar37[2] + 0x98);
      uStack_238 = *(uint *)IVar34;
      FVar16.InstanceId = 0xffffffff;
      FVar16.ObjectId = uStack_238;
      abStackX_10[0] = false;
      ::Audio::FMixerSourceManager::FindOrAddAudioBus
                (*(FMixerSourceManager **)param_1,&TStack_1a0,FVar16,*(uint *)((longlong)IVar34 + 8)
                 ,true,abStackX_10);
      pFVar18 = TStack_1a0.Object;
      ::Audio::FMixerAudioBus::AddSend(TStack_1a0.Object,(EBusSendType)uStack_2b8,&FStack_1b8);
      if (abStackX_10[0] == false) {
        pFVar41 = &pFVar18->BusName;
        pFVar4 = (FString *)((longlong)IVar34 + 0x10);
        if (pFVar41 != pFVar4) {
          uVar24 = *(uint *)((longlong)IVar34 + 0x18);
          piVar3 = &(pFVar18->BusName).Data.ArrayMax;
          pFStack_1f8 = (pFVar4->Data).AllocatorInstance.Data;
          iVar22 = *piVar3;
          (pFVar18->BusName).Data.ArrayNum = uVar24;
          if ((uVar24 == 0) && (iVar22 == 0)) {
            *piVar3 = 0;
          }
          else {
            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar24,iVar22,(ForAnyElementType *)pFVar41,uVar24,piVar3);
            if (uVar24 != 0) {
              memcpy((pFVar41->Data).AllocatorInstance.Data,pFStack_1f8,(longlong)(int)uVar24 * 2);
            }
          }
        }
        ::Audio::TraceAudioBusStartMessage
                  (*(uint *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xa0),*(uint *)IVar34,
                   pFVar4,*(uint *)((longlong)IVar34 + 8));
      }
      if ((((ulonglong)pIVar36[-1] <= (ulonglong)IVar34) &&
          ((ulonglong)IVar34 <
           (ulonglong)((longlong)pIVar36[-1] + (longlong)*(int *)&pIVar36->field_0x4 * 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar22 = *(int *)pIVar36;
      if (iVar22 == *(int *)&pIVar36->field_0x4) {
        iVar22 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pIVar36 + -1),(int *)&pIVar36->field_0x4);
      }
      *(int *)pIVar36 = iVar22 + 1;
      *(uint *)((longlong)pIVar36[-1] + (longlong)iVar22 * 4) = *(uint *)IVar34;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_1a0.SharedReferenceCount.ReferenceController);
      IVar34 = (IAudioMixerRenderStep)((longlong)IVar34 + 0x20);
      uVar33 = (ulonglong)uStack_270;
      lVar28 = lStack_230;
    }
    uStack_2b8 = uStack_2b8 + 1;
    pIVar36 = pIVar36 + 2;
  } while ((int)uStack_2b8 < 2);
  fStack_26c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(pIVar37 + 0x14),&fStack_26c,
             *(int *)((longlong)param_1 + 0x98));
  afStack_268[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(pIVar37 + 0x16),afStack_268,
             *(int *)((longlong)param_1 + 0x98));
  uVar24 = *(uint *)((longlong)param_1 + 8);
  uVar33 = 0;
  lVar28 = *(longlong *)param_1;
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x88)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(longlong *)(*(longlong *)(lVar28 + 0x80) + (longlong)(int)uVar24 * 8) != 0) &&
     (bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959351>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x577,"MixerSources[SourceId] == nullptr"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar24 = *(uint *)((longlong)param_1 + 8);
  lVar28 = *(longlong *)param_1;
  uVar12 = *(undefined8 *)((longlong)param_1 + 0x90);
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x88)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(undefined8 *)(*(longlong *)(lVar28 + 0x80) + (longlong)(int)uVar24 * 8) = uVar12;
  if ((*(int *)(pIVar37 + 0x1b) != 0) &&
     (bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959356>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x57c,"SourceInfo.SubmixSends.Num() == 0"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(int *)(*(longlong *)param_1 + 0x130) <= *(int *)((longlong)param_1 + 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceId < SourceInfos.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x57f,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((pIVar37[0xa4].field_0x1 & 0xc) == 4) {
    uStack_2b8 = 2;
  }
  else {
    uStack_2b8 = *(uint *)&pIVar37[0xa4].field_0x4;
  }
  iVar22 = *(int *)((longlong)param_1 + 0x30);
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  uStack_2a0 = 0;
  uVar24 = 0;
  uVar39 = uVar33;
  if (0 < iVar22) {
    do {
      uVar38 = (uint)uVar39;
      uVar32 = uVar24;
      if ((int)uVar38 < iVar22) {
        uVar32 = ~uVar38 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar35 = (FScriptContainerElement *)(*(longlong *)((longlong)param_1 + 0x28) + uVar33);
      TStack_298.Object = (FMixerSubmix *)0x0;
      TStack_298.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar35 + 8);
      if (TStack_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        aVar17 = (TStack_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar17 == (atomic<int>)0x0) {
            TStack_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
            ;
            goto LAB_1464df54a;
          }
          LOCK();
          aVar23 = (TStack_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar19 = aVar17 == aVar23;
          if (bVar19) {
            (TStack_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar17 + 1);
            aVar23 = aVar17;
          }
          UNLOCK();
          aVar17 = aVar23;
        } while (!bVar19);
        if (TStack_298.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          TStack_298.Object = *(FMixerSubmix **)pFVar35;
        }
      }
LAB_1464df54a:
      if (TStack_298.Object != (FMixerSubmix *)0x0) {
        pIVar36 = pIVar37 + 0x1a;
        if (((*(FScriptContainerElement **)pIVar36 <= pFVar35) &&
            (pFVar35 < *(FScriptContainerElement **)pIVar36 +
                       (longlong)*(int *)&pIVar37[0x1b].field_0x4 * 0x28)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar22 = *(int *)(pIVar37 + 0x1b);
        if (iVar22 == *(int *)&pIVar37[0x1b].field_0x4) {
          iVar22 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)pIVar36,(int *)&pIVar37[0x1b].field_0x4);
        }
        FVar13.Data = *(FScriptContainerElement **)pIVar36;
        *(int *)(pIVar37 + 0x1b) = iVar22 + 1;
        lVar29 = (longlong)iVar22;
        *(undefined8 *)(FVar13.Data + lVar29 * 0x28) = *(undefined8 *)pFVar35;
        lVar28 = *(longlong *)(pFVar35 + 8);
        *(longlong *)(FVar13.Data + lVar29 * 0x28 + 8) = lVar28;
        if (lVar28 != 0) {
          LOCK();
          *(int *)(lVar28 + 0xc) = *(int *)(lVar28 + 0xc) + 1;
          UNLOCK();
        }
        *(undefined4 *)(FVar13.Data + lVar29 * 0x28 + 0x10) = *(undefined4 *)(pFVar35 + 0x10);
        FVar13.Data[lVar29 * 0x28 + 0x14] = pFVar35[0x14];
        *(undefined4 *)(FVar13.Data + lVar29 * 0x28 + 0x18) = *(undefined4 *)(pFVar35 + 0x18);
        *(undefined8 *)(FVar13.Data + lVar29 * 0x28 + 0x20) = *(undefined8 *)(pFVar35 + 0x20);
        if (*(int *)(pFVar35 + 0x18) == 1) {
          pIVar37[0xa4].field_0x2 = pIVar37[0xa4].field_0x2 | 0x20;
        }
        if ((TStack_298.Object == (FMixerSubmix *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        ::Audio::FMixerSubmix::AddOrSetSourceVoice
                  (TStack_298.Object,*(FMixerSourceVoice **)((longlong)param_1 + 0x90),
                   *(float *)(pFVar35 + 0x10),*(EMixerSourceSubmixSendStage *)(pFVar35 + 0x18));
        if ((TStack_298.Object == (FMixerSubmix *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        bVar19 = ::Audio::FMixerSubmix::IsSoundfieldSubmix(TStack_298.Object);
        if (bVar19) {
          if (((FStack_2a8.Data <= &TStack_298) &&
              (&TStack_298 <
               (TSharedPtr<Audio::FMixerSubmix,1> *)
               (FStack_2a8.Data + (longlong)uStack_2a0._4_4_ * 0x10))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar22 = (int)uStack_2a0;
          if ((int)uStack_2a0 == uStack_2a0._4_4_) {
            iVar22 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_2a8,(int *)((longlong)&uStack_2a0 + 4));
          }
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,iVar22 + 1);
          *(FMixerSubmix **)&FStack_2a8.Data[(longlong)iVar22 * 0x10].field_0x0 = TStack_298.Object;
          *(TReferenceControllerBase<1> **)(FStack_2a8.Data + (longlong)iVar22 * 0x10 + 8) =
               TStack_298.SharedReferenceCount.ReferenceController;
          if (TStack_298.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (TStack_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(TStack_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_298.SharedReferenceCount.ReferenceController);
      iVar22 = *(int *)((longlong)param_1 + 0x30);
      uVar33 = uVar33 + 0x28;
      uVar39 = (ulonglong)(uVar38 + 1);
    } while ((int)(uVar38 + 1) < iVar22);
  }
  uVar32 = *(uint *)((longlong)param_1 + 8);
  lVar28 = *(longlong *)param_1;
  uVar38 = uVar24;
  if ((int)uVar32 < *(int *)(lVar28 + 0x140)) {
    uVar38 = ~uVar32 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar28 = *(longlong *)(lVar28 + 0x138);
  FStack_260.SoundfieldSubmixSends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_260.SoundfieldSubmixSends.ArrayMax = 0;
  FStack_260.NumOutputChannels = *(uint *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xcf8);
  FStack_260.NumSourceChannels = uStack_2b8;
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>((TSharedPtr<Audio::FMixerSubmix,1> *)0x0,0);
  FVar13.Data = FStack_2a8.Data;
  iVar22 = (int)uStack_2a0;
  FStack_260.SoundfieldSubmixSends.ArrayNum = (int)uStack_2a0;
  if (((int)uStack_2a0 != 0) || (FStack_260.SoundfieldSubmixSends.ArrayMax != 0)) {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)uStack_2a0,FStack_260.SoundfieldSubmixSends.ArrayMax,
               &FStack_260.SoundfieldSubmixSends.AllocatorInstance,(int)uStack_2a0,
               &FStack_260.SoundfieldSubmixSends.ArrayMax);
    ConstructItems<TSharedPtr<Audio::FMixerSubmix,1>,TSharedPtr<Audio::FMixerSubmix,1>,int>
              (FStack_260.SoundfieldSubmixSends.AllocatorInstance.Data,
               (TSharedPtr<Audio::FMixerSubmix,1> *)FVar13.Data,iVar22);
  }
  FStack_260.bIs3D = (bool)(*(byte *)(pIVar37 + 0xa4) & 1);
  FStack_260.bIsSoundfield = (bool)((byte)pIVar37[0xa4].field_0x2 >> 4 & 1);
  ::Audio::FMixerSourceSubmixOutputBuffer::Reset
            ((FMixerSourceSubmixOutputBuffer *)((longlong)(int)uVar32 * 0x330 + lVar28),&FStack_260)
  ;
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this_00 = *(FAudioRenderScheduler **)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xe50);
    if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar30 = ::Audio::FAudioRenderStepId::FromTransmitterID((ulong64)auStack_190);
                    /* WARNING: Load size is inaccurate */
    ::Audio::FAudioRenderScheduler::AddStep(this_00,(FAudioRenderStepId)*FVar30.Value,pIVar37);
  }
  if (((*(byte *)(pIVar37 + 0xb6) & 1) != 0) &&
     (bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959406>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x5ae,"!SourceInfo.bIsDebugMode"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(byte *)(pIVar37 + 0xb6) =
       (*(byte *)(pIVar37 + 0xb6) ^ *(byte *)((longlong)param_1 + 0x2c4)) & 1 ^
       *(byte *)(pIVar37 + 0xb6);
  ::FString::operator=((FString *)(pIVar37 + 0xb7),(FString *)((longlong)param_1 + 0xa8));
  uVar32 = *(uint *)((longlong)param_1 + 8);
  lVar28 = *(longlong *)param_1;
  uVar38 = uVar24;
  if ((int)uVar32 < *(int *)(lVar28 + 0x130)) {
    uVar38 = ~uVar32 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar32 * 0x5d0 + 0x5b0 + *(longlong *)(lVar28 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&FStack_1c8,L"Is initializing");
    uVar32 = *(uint *)((longlong)param_1 + 8);
    lVar28 = *(longlong *)param_1;
    if ((int)uVar32 < *(int *)(lVar28 + 0x130)) {
      uVar24 = ~uVar32 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    lVar28 = *(longlong *)(lVar28 + 0x128);
    FStack_280.Data = (FScriptContainerElement *)0x0;
    iStack_278 = *(int *)((longlong)(int)uVar32 * 0x5d0 + 0x5c0 + lVar28);
    lVar29 = (longlong)iStack_278;
    _Src = *(void **)((longlong)(int)uVar32 * 0x5d0 + 0x5b8 + lVar28);
    if (iStack_278 == 0) {
      iStack_274 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_278,0,&FStack_280,iStack_278,&iStack_274);
      memcpy(FStack_280.Data,_Src,lVar29 * 2);
    }
    ::FString::PrintfImpl(&FStack_1d8,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (FStack_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_280.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
    }
    if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)
             FStack_260.SoundfieldSubmixSends.AllocatorInstance.Data,
             FStack_260.SoundfieldSubmixSends.ArrayNum);
  if ((TSharedPtr<Audio::FMixerSubmix,1> *)FStack_260.SoundfieldSubmixSends.AllocatorInstance.Data
      != (TSharedPtr<Audio::FMixerSubmix,1> *)0x0) {
    FMemory::Free(FStack_260.SoundfieldSubmixSends.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)FStack_2a8.Data,(int)uStack_2a0);
  if ((TSharedPtr<Audio::FMixerSubmix,1> *)FStack_2a8.Data !=
      (TSharedPtr<Audio::FMixerSubmix,1> *)0x0) {
    FMemory::Free(FStack_2a8.Data);
  }
  return;
}

// Call @ 1464ef200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  EAudioDeviceChangedRole EVar7;
  FString FStack_28;
  FString FStack_18;
  
  bVar3 = FWeakObjectPtr::IsValid(param_1);
  if (bVar3) {
    FWeakObjectPtr::Get(param_1);
    iVar1 = *(int *)((longlong)param_1 + 8);
    if (iVar1 == 0) {
      EVar7 = Console;
    }
    else if (iVar1 == 1) {
      EVar7 = Multimedia;
    }
    else if (iVar1 == 2) {
      EVar7 = Communications;
    }
    else {
      EVar7 = Invalid;
    }
    pUVar4 = FWeakObjectPtr::Get(param_1);
    pFVar5 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 0x10));
    FOnAudioDefaultDeviceChanged::Broadcast
              ((FOnAudioDefaultDeviceChanged *)&pUVar4[1].field_0x10,EVar7,pFVar5);
    pUVar4 = FWeakObjectPtr::Get(param_1);
    pFVar5 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 0x10));
    pFVar6 = ::FString::FString(&FStack_18,pFVar5);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(enum_EAudioDeviceChangedRole,FString),FDefaultDelegateUserPolicy>,enum_EAudioDeviceChangedRole,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 2),EVar7,pFVar6);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// Call @ 1464ef210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  EAudioDeviceChangedRole EVar7;
  FString FStack_28;
  FString FStack_18;
  
  bVar3 = FWeakObjectPtr::IsValid(param_1);
  if (bVar3) {
    FWeakObjectPtr::Get(param_1);
    iVar1 = *(int *)((longlong)param_1 + 8);
    if (iVar1 == 0) {
      EVar7 = Console;
    }
    else if (iVar1 == 1) {
      EVar7 = Multimedia;
    }
    else if (iVar1 == 2) {
      EVar7 = Communications;
    }
    else {
      EVar7 = Invalid;
    }
    pUVar4 = FWeakObjectPtr::Get(param_1);
    pFVar5 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 0x10));
    FOnAudioDefaultDeviceChanged::Broadcast
              ((FOnAudioDefaultDeviceChanged *)&pUVar4[2].field_0x20,EVar7,pFVar5);
    pUVar4 = FWeakObjectPtr::Get(param_1);
    pFVar5 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 0x10));
    pFVar6 = ::FString::FString(&FStack_18,pFVar5);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(enum_EAudioDeviceChangedRole,FString),FDefaultDelegateUserPolicy>,enum_EAudioDeviceChangedRole,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[3].field_0x10,EVar7,
               pFVar6);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// Call @ 1464ef220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString FStack_28;
  FString FStack_18;
  
  bVar2 = FWeakObjectPtr::IsValid(param_1);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[4].field_0x8,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    pFVar5 = ::FString::FString(&FStack_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x20,pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// Call @ 1464ef230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString FStack_28;
  FString FStack_18;
  
  bVar2 = FWeakObjectPtr::IsValid(param_1);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[5].field_0x18,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    pFVar5 = ::FString::FString(&FStack_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// Call @ 1464ef240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FString *pFVar7;
  EAudioDeviceChangedState EVar8;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  EAudioDeviceChangedState EStack_28;
  
  bVar4 = FWeakObjectPtr::IsValid(param_1);
  if (bVar4) {
    FWeakObjectPtr::Get(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x18);
    if (iVar1 == 0) {
      EVar8 = Active;
    }
    else if (iVar1 == 1) {
      EVar8 = Disabled;
    }
    else if (iVar1 == 2) {
      EVar8 = NotPresent;
    }
    else if (iVar1 == 3) {
      EVar8 = Unplugged;
    }
    else {
      EVar8 = Invalid;
    }
    pUVar5 = FWeakObjectPtr::Get(param_1);
    pFVar6 = ::FString::FString(&FStack_58,(FString *)((longlong)param_1 + 8));
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    if (&FStack_38 != pFVar6) {
      uVar2 = (pFVar6->Data).ArrayNum;
      pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
      FStack_38.Data.ArrayMax = 0;
      FStack_38.Data.ArrayNum = uVar2;
      if (uVar2 != 0) {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,0,(ForAnyElementType *)&FStack_38,uVar2,&FStack_38.Data.ArrayMax);
        memcpy(FStack_38.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar2 * 2);
      }
    }
    EStack_28 = EVar8;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 7),&FStack_38);
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pUVar5 = FWeakObjectPtr::Get(param_1);
    pFVar6 = ::FString::FString(&FStack_58,(FString *)((longlong)param_1 + 8));
    pFVar7 = ::FString::FString(&FStack_48,pFVar6);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString,enum_EAudioDeviceChangedState),FDefaultDelegateUserPolicy>,FString,enum_EAudioDeviceChangedState>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[7].field_0x18,pFVar7,
               EVar8);
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// Call @ 1464ef250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString FStack_28;
  FString FStack_18;
  
  bVar2 = FWeakObjectPtr::IsValid(param_1);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[8].field_0x10,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(param_1);
    pFVar4 = ::FString::FString(&FStack_28,(FString *)((longlong)param_1 + 8));
    pFVar5 = ::FString::FString(&FStack_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 9),pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// Call @ 1464ef260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  lVar5 = *(longlong *)param_1;
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar4 = 0;
  if ((int)uVar1 < *(int *)(lVar5 + 0x130)) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar5 + 0x128);
  *(byte *)(lVar5 + 0x520) = *(byte *)(lVar5 + 0x520) & 0xfb | 0x10;
  return;
}

// Call @ 1464ef270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType FStack_68;
  int iStack_60;
  int iStack_5c;
  ForAnyElementType FStack_58;
  int iStack_50;
  int iStack_4c;
  ForAnyElementType FStack_48;
  int iStack_40;
  int iStack_3c;
  FString FStack_38;
  FString FStack_28;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar7 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar7 + 0x128);
  *(byte *)(lVar7 + 0x520) = *(byte *)(lVar7 + 0x520) & 0xef | 0xc;
  if (5 < (byte)LogAudioTiming._0_1_) {
    iStack_60 = *(int *)(lVar7 + 0x5c0);
    lVar8 = (longlong)iStack_60;
    pvVar2 = *(void **)(lVar7 + 0x5b8);
    FStack_68.Data = (FScriptContainerElement *)0x0;
    if (iStack_60 == 0) {
      iStack_5c = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_60,0,&FStack_68,iStack_60,&iStack_5c);
      memcpy(FStack_68.Data,pvVar2,lVar8 * 2);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (iStack_60 != 0) {
      FVar6.Data = FStack_68.Data;
    }
    bVar4 = ::Audio::MatchesLogFilter((wchar_t *)FVar6.Data);
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    if (bVar4) {
      iStack_50 = *(int *)(lVar7 + 0x5c0);
      lVar8 = (longlong)iStack_50;
      pvVar2 = *(void **)(lVar7 + 0x5b8);
      FStack_58.Data = (FScriptContainerElement *)0x0;
      if (iStack_50 == 0) {
        iStack_4c = 0;
      }
      else {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iStack_50,0,&FStack_58,iStack_50,&iStack_4c);
        memcpy(FStack_58.Data,pvVar2,lVar8 * 2);
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (FStack_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data);
      }
    }
  }
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar7 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar1 * 0x5d0 + 0x5b0 + *(longlong *)(lVar7 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&FStack_28,L"Is playing");
    uVar1 = *(uint *)((longlong)param_1 + 8);
    lVar7 = *(longlong *)param_1;
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x128);
    FStack_48.Data = (FScriptContainerElement *)0x0;
    iStack_40 = *(int *)((longlong)(int)uVar1 * 0x5d0 + 0x5c0 + lVar7);
    lVar8 = (longlong)iStack_40;
    pvVar2 = *(void **)((longlong)(int)uVar1 * 0x5d0 + 0x5b8 + lVar7);
    if (iStack_40 == 0) {
      iStack_3c = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_40,0,&FStack_48,iStack_40,&iStack_3c);
      memcpy(FStack_48.Data,pvVar2,lVar8 * 2);
    }
    ::FString::PrintfImpl(&FStack_38,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (FStack_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1464ef280

/* WARNING: Removing unreachable block (ram,0x0001464e06d3) */
/* WARNING: Removing unreachable block (ram,0x0001464e06e3) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *pFVar3;
  FScriptContainerElement *pFVar4;
  FMixerSubmix *pFVar5;
  FMixerSubmix *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  uint uVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  atomic<int> aVar13;
  UObject *pUVar14;
  USoundSubmixBase *pUVar15;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar16;
  FMixerSubmix *pFVar17;
  FMixerSubmix *pFVar18;
  FMixerSubmix *pFVar19;
  FSharedReferencer<1> FStack_80;
  undefined8 uStack_78;
  FSharedReferencer<1> FStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_48;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_38;
  
  pFVar18 = (FMixerSubmix *)0x0;
  if (!__CsvProfilerStat2982) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2982 = true;
  }
  uVar10 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_RegisterSubmixBufferListener");
  pFVar3 = *(FMixerDevice **)param_1;
  pFVar19 = pFVar18;
  if (*(char *)((longlong)param_1 + 0x10) == '\0') {
    pUVar15 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x14));
    pTVar16 = ::Audio::FMixerDevice::GetSubmixInstance(pFVar3,&TStack_48,pUVar15);
    pFVar5 = (FMixerSubmix *)(pTVar16->WeakReferenceCount).ReferenceController;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (pFVar5 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar5->field_0x8;
      do {
        FStack_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar13 = *(atomic<int> *)&pFVar5->field_0x8;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        FStack_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
        aVar2 = aVar13;
      } while (!bVar12);
      pTVar8 = (pTVar16->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar8 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((FMixerSubmix *)FStack_80.ReferenceController != (FMixerSubmix *)0x0) {
        pFVar19 = pTVar16->Object;
        pTVar16->Object = (FMixerSubmix *)0x0;
      }
    }
    uStack_50 = 0;
    uStack_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (TStack_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_48.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  else {
    if (((pFVar3->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (pFVar3->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar5 = *(FMixerSubmix **)(pFVar4 + 8);
    pFVar6 = *(FMixerSubmix **)pFVar4;
    pFVar17 = pFVar5;
    if (pFVar5 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar5->field_0x8;
      do {
        pFVar17 = pFVar18;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar13 = *(atomic<int> *)&pFVar5->field_0x8;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        pFVar17 = pFVar5;
        aVar2 = aVar13;
      } while (!bVar12);
      LOCK();
      paVar1 = (atomic<int> *)&pFVar5->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,1);
      }
      if (pFVar17 != (FMixerSubmix *)0x0) {
        pFVar19 = pFVar6;
      }
    }
    uStack_60 = 0;
    uStack_68 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (((*(char *)((longlong)param_1 + 0x10) == '\0') && (pFVar19 == (FMixerSubmix *)0x0)) &&
     (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x14)), bVar12)) {
    plVar7 = *(longlong **)param_1;
    pcVar9 = *(code **)(*plVar7 + 0x78);
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x14));
    (*pcVar9)(plVar7,pUVar14,1);
    pFVar3 = *(FMixerDevice **)param_1;
    pUVar15 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x14));
    pTVar16 = ::Audio::FMixerDevice::GetSubmixInstance(pFVar3,&TStack_38,pUVar15);
    FStack_70.ReferenceController = (pTVar16->WeakReferenceCount).ReferenceController;
    if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (FStack_70.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar13 = (FStack_70.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          (FStack_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar13;
      } while (!bVar12);
      FVar11.ReferenceController = FStack_70.ReferenceController;
      pTVar8 = (pTVar16->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar8 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        pFVar18 = pTVar16->Object;
        pTVar16->Object = (FMixerSubmix *)0x0;
      }
    }
    uStack_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_80,&FStack_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    pFVar19 = pFVar18;
    if (TStack_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_38.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if (pFVar19 == (FMixerSubmix *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if ((pFVar19 == (FMixerSubmix *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ::Audio::FMixerSubmix::RegisterBufferListener
              (pFVar19,*(ISubmixBufferListener **)((longlong)param_1 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  FCsvProfiler::EndStat("RegisterSubmixBufferListener",uVar10);
  return;
}

// Call @ 1464ef290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  FSharedReferencer<1> FVar8;
  atomic<int> aVar9;
  USoundSubmixBase *pUVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  UObject *pUVar12;
  FMixerSubmix *this;
  FMixerSubmix *pFVar13;
  bool bVar14;
  FSharedReferencer<1> FStack_70;
  undefined8 uStack_68;
  FSharedReferencer<1> FStack_60;
  TSharedRef<ISubmixBufferListener,1> TStack_58;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_48;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_38;
  
  if (!__CsvProfilerStat3025) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3025 = true;
  }
  uVar7 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_RegisterSubmixBufferListener");
  pFVar3 = *(FMixerDevice **)param_1;
  pUVar10 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x28));
  pTVar11 = ::Audio::FMixerDevice::GetSubmixInstance(pFVar3,&TStack_48,pUVar10);
  pFVar13 = (FMixerSubmix *)0x0;
  FStack_70.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FStack_70.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar9 = (FStack_70.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar2 == aVar9;
      if (bVar14) {
        (FStack_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar14);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  this = pFVar13;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this = pTVar11->Object;
    pTVar11->Object = (FMixerSubmix *)0x0;
  }
  if (TStack_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TStack_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((TStack_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (TStack_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  bVar14 = false;
  if (this == (FMixerSubmix *)0x0) {
    bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x28));
    if (bVar14) {
      plVar5 = *(longlong **)param_1;
      pcVar6 = *(code **)(*plVar5 + 0x78);
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x28));
      (*pcVar6)(plVar5,pUVar12,1);
      pFVar3 = *(FMixerDevice **)param_1;
      pUVar10 = (USoundSubmixBase *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x28));
      pTVar11 = ::Audio::FMixerDevice::GetSubmixInstance(pFVar3,&TStack_38,pUVar10);
      FStack_60.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
      this = pFVar13;
      if (FStack_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (FStack_60.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar9 = (FStack_60.ReferenceController)->SharedReferenceCount;
          bVar14 = aVar2 == aVar9;
          if (bVar14) {
            (FStack_60.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar9 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar9;
        } while (!bVar14);
        FVar8.ReferenceController = FStack_60.ReferenceController;
        pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
        (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          this = pTVar11->Object;
          pTVar11->Object = (FMixerSubmix *)0x0;
        }
      }
      uStack_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&FStack_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      if (TStack_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(TStack_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((TStack_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (TStack_38.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    bVar14 = this == (FMixerSubmix *)0x0;
  }
  if (this == (FMixerSubmix *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if ((bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TStack_58.Object = *(ISubmixBufferListener **)((longlong)param_1 + 8);
    TStack_58.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
    if (TStack_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ::Audio::FMixerSubmix::RegisterBufferListener(this,&TStack_58);
    if (3 < (byte)LogAudioMixer._0_1_) {
      if ((this == (FMixerSubmix *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  FCsvProfiler::EndStat("RegisterSubmixBufferListener",uVar7);
  return;
}

// Call @ 1464ef2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  FAudioRenderScheduler *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAudioRenderStepId FVar5;
  longlong lVar6;
  undefined1 auStackX_8 [8];
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    lVar6 = *(longlong *)param_1;
    uVar1 = *(uint *)((longlong)param_1 + 8);
    uVar4 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x130)) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar6 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar6 + 0x128);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceInfo.MixerSourceBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x5d5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = *(FAudioRenderScheduler **)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xe50);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5 = ::Audio::FAudioRenderStepId::FromTransmitterID((ulong64)auStackX_8);
                    /* WARNING: Load size is inaccurate */
    ::Audio::FAudioRenderScheduler::RemoveStep(this,(FAudioRenderStepId)*FVar5.Value);
  }
  ::Audio::FMixerSourceManager::ReleaseSource
            (*(FMixerSourceManager **)param_1,*(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464ef2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0xb80) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Audio::FMixerSubmix::RemoveSoundEffectSubmix
            ((FMixerSubmix *)*plVar2,*(uint *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464ef2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  FAudioBusKey FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ForAnyElementType *pFVar11;
  longlong lVar12;
  longlong lVar13;
  bool abStackX_8 [8];
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  undefined4 uStackX_1c;
  TSharedRef<Audio::FMixerAudioBus,1> TStack_68;
  FAudioBusSend FStack_58;
  
  uVar4 = *(uint *)((longlong)param_1 + 8);
  lVar12 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar4 < *(int *)(lVar12 + 0x130)) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FStack_58.SourceId = *(int *)((longlong)param_1 + 8);
  lVar12 = (longlong)(int)uVar4 * 0x5d0 + *(longlong *)(lVar12 + 0x128);
  if (*(longlong *)(lVar12 + 0x10) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
  FStack_58.SendLevel = *(float *)((longlong)param_1 + 0x14);
  uStackX_1c = 0xffffffff;
  abStackX_8[0] = false;
  FStack_58.TransmitterID = *(ulong64 *)(*(longlong *)(lVar12 + 0x10) + 0x98);
  uStackX_18 = *(uint *)pFVar1;
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = uStackX_18;
  ::Audio::FMixerSourceManager::FindOrAddAudioBus
            (*(FMixerSourceManager **)param_1,&TStack_68,FVar6,*(int *)(lVar12 + 0x524),true,
             abStackX_8);
  ::Audio::FMixerAudioBus::AddSend
            (TStack_68.Object,*(EBusSendType *)((longlong)param_1 + 0xc),&FStack_58);
  if (abStackX_8[0] == false) {
    ::FString::operator=(&(TStack_68.Object)->BusName,(FString *)((longlong)param_1 + 0x18));
    ::Audio::TraceAudioBusStartMessage
              (*(uint *)(*(longlong *)(*(longlong *)param_1 + 0x40) + 0xa0),*(uint *)pFVar1,
               (FString *)((longlong)param_1 + 0x18),*(int *)(lVar12 + 0x524));
  }
  lVar13 = (ulonglong)*(byte *)((longlong)param_1 + 0xc) + 0xf;
  puVar10 = *(uint **)(lVar12 + lVar13 * 0x10);
  iVar9 = *(int *)(lVar12 + 8 + lVar13 * 0x10);
  puVar3 = puVar10 + iVar9;
  while( true ) {
    if (*(int *)(lVar12 + 8 + lVar13 * 0x10) != iVar9) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (puVar10 == puVar3) break;
    if (*puVar10 == *(uint *)pFVar1) goto LAB_1464e10d8;
    puVar10 = puVar10 + 1;
  }
  pFVar11 = (ForAnyElementType *)
            (((ulonglong)*(byte *)((longlong)param_1 + 0xc) + 0xf) * 0x10 + lVar12);
  if ((pFVar11->Data <= pFVar1) &&
     (pFVar1 < pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar11[1].Data;
  piVar2 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (iVar9 == *piVar2) {
    iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar11,piVar2);
  }
  *(int *)&pFVar11[1].Data = iVar9 + 1;
  *(uint *)(pFVar11->Data + (longlong)iVar9 * 4) = *(uint *)pFVar1;
LAB_1464e10d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 1464ef2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FMixerSourceSubmixOutputBuffer *this;
  byte bVar7;
  longlong lVar8;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if (*(int *)(*(longlong *)param_1 + 0x240) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x76a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(uint *)((longlong)param_1 + 8);
  lVar1 = *(longlong *)param_1;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x130)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(uint *)((longlong)param_1 + 8);
  lVar8 = (longlong)(int)uVar5 * 0x5d0 + *(longlong *)(lVar1 + 0x128);
  lVar1 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x140)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = (FMixerSourceSubmixOutputBuffer *)
         ((longlong)(int)uVar6 * 0x330 + *(longlong *)(lVar1 + 0x138));
  if ((this->NumSourceChannels == *(uint *)((longlong)param_1 + 0xc)) ||
     ((*(byte *)(lVar8 + 0x521) & 4) != 0)) {
    bVar7 = (*(byte *)(lVar8 + 0x520) ^ *(byte *)((longlong)param_1 + 0x20)) & 1 ^
            *(byte *)(lVar8 + 0x520);
    *(byte *)(lVar8 + 0x520) = bVar7;
    *(byte *)(lVar8 + 0x520) = (*(char *)((longlong)param_1 + 0x21) * '\x02' ^ bVar7) & 2 ^ bVar7;
    bVar3 = ::Audio::FMixerSourceSubmixOutputBuffer::SetChannelMap
                      (this,(TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)param_1 + 0x10),
                       *(bool *)((longlong)param_1 + 0x21));
    lVar1 = *(longlong *)param_1;
    uVar5 = *(uint *)((longlong)param_1 + 8);
    uVar6 = 0;
    if ((int)uVar5 < *(int *)(lVar1 + 0x1e0)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(bool *)((longlong)(int)uVar5 + *(longlong *)(lVar1 + 0x1d8)) = bVar3;
  }
  return;
}

// Call @ 1464ef2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if (*(int *)(*(longlong *)param_1 + 0x240) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x746,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 8);
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar1 = (float *)((longlong)(int)uVar3 * 0x5d0 + 0x140 + *(longlong *)(lVar4 + 0x128));
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    uVar3 = *(uint *)((longlong)param_1 + 8);
    lVar4 = *(longlong *)param_1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x13c + *(longlong *)(lVar4 + 0x128)) = uVar2;
  }
  lVar4 = *(longlong *)param_1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *(uint *)((longlong)param_1 + 8);
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x140 + *(longlong *)(lVar4 + 0x128)) = uVar2;
  return;
}

// Call @ 1464ef2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x128);
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x148 + lVar2) =
       *(undefined4 *)((longlong)param_1 + 0xc);
  ::Audio::FInterpolatedHPF::StartFrequencyInterpolation
            ((FInterpolatedHPF *)(lVar2 + (longlong)(int)uVar1 * 0x5d0 + 400),
             *(float *)((longlong)param_1 + 0xc),*(int *)(*(longlong *)param_1 + 0x240));
  return;
}

// Call @ 1464ef300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x128);
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x144 + lVar2) =
       *(undefined4 *)((longlong)param_1 + 0xc);
  ::Audio::FInterpolatedLPF::StartFrequencyInterpolation
            ((FInterpolatedLPF *)(lVar2 + (longlong)(int)uVar1 * 0x5d0 + 0x150),
             *(float *)((longlong)param_1 + 0xc),*(int *)(*(longlong *)param_1 + 0x240));
  return;
}

// Call @ 1464ef310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  
  lVar2 = *(longlong *)param_1;
  pFVar3 = (ForAnyElementType *)(lVar2 + 0x118);
  if (pFVar3 != (ForAnyElementType *)((longlong)param_1 + 8)) {
    _Src = ((ForAnyElementType *)((longlong)param_1 + 8))->Data;
    iVar1 = *(int *)((longlong)param_1 + 0x10);
    *(int *)(lVar2 + 0x120) = iVar1;
    if ((iVar1 == 0) && (*(int *)(lVar2 + 0x124) == 0)) {
      *(int *)(lVar2 + 0x124) = 0;
      return;
    }
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar1,*(int *)(lVar2 + 0x124),pFVar3,iVar1,(int *)(lVar2 + 0x124));
    if (iVar1 != 0) {
      memcpy(pFVar3->Data,_Src,(longlong)iVar1 * 0x60);
    }
  }
  return;
}

// Call @ 1464ef320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar2 = *(uint *)((longlong)param_1 + 8);
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x128);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x5d0 + 0x522 + lVar4);
  *pbVar1 = *pbVar1 | 0x40;
  *(undefined4 *)((longlong)(int)uVar2 * 0x5d0 + 0x3c4 + lVar4) = uVar3;
  return;
}

// Call @ 1464ef330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar2 = *(uint *)((longlong)param_1 + 8);
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x128);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x5d0 + 0x522 + lVar4);
  *pbVar1 = *pbVar1 | 0x40;
  *(undefined4 *)((longlong)(int)uVar2 * 0x5d0 + 0x3c0 + lVar4) = uVar3;
  return;
}

// Call @ 1464ef340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x3bc + *(longlong *)(lVar2 + 0x128)) =
       *(undefined4 *)((longlong)param_1 + 0xc);
  return;
}

// Call @ 1464ef350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x3b8 + *(longlong *)(lVar2 + 0x128)) =
       *(undefined4 *)((longlong)param_1 + 0xc);
  return;
}

// Call @ 1464ef360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar5 = *(longlong *)param_1;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)(lVar5 + 0x130)) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar5 + 0x128);
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x378),
             (FModulationDestination *)((longlong)param_1 + 0x10));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x388),
             (FModulationDestination *)((longlong)param_1 + 0x40));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x398),
             (FModulationDestination *)((longlong)param_1 + 0x30));
  ::Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x3a8),
             (FModulationDestination *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 1464ef370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if (*(int *)(*(longlong *)param_1 + 0x240) < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x71c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 8);
  lVar5 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar5 + 0x130)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x128);
  fVar1 = *(float *)((longlong)param_1 + 0xc);
  lVar9 = (longlong)(int)uVar3 * 0x5d0;
  iVar4 = *(int *)(*(longlong *)param_1 + 0x240);
  *(float *)(lVar9 + 0x118 + lVar5) = fVar1;
  if ((*(char *)(lVar9 + 0x120 + lVar5) == '\0') && (iVar4 != 0)) {
    fVar2 = *(float *)(lVar9 + 0x110 + lVar5);
    *(float *)(lVar9 + 0x11c + lVar5) = (fVar1 - fVar2) / (float)iVar4;
    *(float *)(lVar9 + 0x114 + lVar5) = fVar2;
    return;
  }
  *(float *)(lVar9 + 0x110 + lVar5) = fVar1;
  *(undefined1 *)(lVar9 + 0x120 + lVar5) = 0;
  *(undefined4 *)(lVar9 + 0x11c + lVar5) = 0;
  *(float *)(lVar9 + 0x114 + lVar5) = fVar1;
  return;
}

// Call @ 1464ef380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar8 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar8 + 0x130)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x18);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
  lVar8 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar8 + 0x128);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(lVar8 + 0x508);
  *(undefined8 *)(lVar8 + 0x500) = uVar3;
  *(longlong *)(lVar8 + 0x508) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(byte *)(lVar8 + 0x522) =
       *(char *)((longlong)param_1 + 0x20) << 7 | *(byte *)(lVar8 + 0x522) & 0x7f;
  return;
}

// Call @ 1464ef390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 auStack_108 [32];
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  lVar11 = 2;
  lVar12 = 2;
  puVar9 = (undefined8 *)((longlong)param_1 + 0x10);
  puVar10 = auStack_108;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    *puVar10 = *puVar9;
    puVar10[1] = uVar3;
    uVar3 = puVar9[4];
    uVar6 = puVar9[5];
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    uVar4 = puVar9[6];
    uVar5 = puVar9[7];
    puVar10[4] = uVar3;
    puVar10[5] = uVar6;
    uVar3 = puVar9[8];
    uVar6 = puVar9[9];
    puVar10[6] = uVar4;
    puVar10[7] = uVar5;
    uVar4 = puVar9[10];
    uVar5 = puVar9[0xb];
    puVar10[8] = uVar3;
    puVar10[9] = uVar6;
    uVar3 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    puVar10[10] = uVar4;
    puVar10[0xb] = uVar5;
    uVar4 = puVar9[0xe];
    uVar5 = puVar9[0xf];
    puVar10[0xc] = uVar3;
    puVar10[0xd] = uVar6;
    puVar10[0xe] = uVar4;
    puVar10[0xf] = uVar5;
    lVar12 = lVar12 + -1;
    puVar9 = puVar9 + 0x10;
    puVar10 = puVar10 + 0x10;
  } while (lVar12 != 0);
  lVar12 = *(longlong *)param_1;
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar12 + 0x130)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar9 = auStack_108;
  puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x128) + 0x3d0 + (longlong)(int)uVar1 * 0x5d0);
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    *puVar10 = *puVar9;
    puVar10[1] = uVar3;
    uVar3 = puVar9[4];
    uVar6 = puVar9[5];
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    uVar4 = puVar9[6];
    uVar5 = puVar9[7];
    puVar10[4] = uVar3;
    puVar10[5] = uVar6;
    uVar3 = puVar9[8];
    uVar6 = puVar9[9];
    puVar10[6] = uVar4;
    puVar10[7] = uVar5;
    uVar4 = puVar9[10];
    uVar5 = puVar9[0xb];
    puVar10[8] = uVar3;
    puVar10[9] = uVar6;
    uVar3 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    puVar10[10] = uVar4;
    puVar10[0xb] = uVar5;
    uVar4 = puVar9[0xe];
    uVar5 = puVar9[0xf];
    puVar10[0xc] = uVar3;
    puVar10[0xd] = uVar6;
    puVar10[0xe] = uVar4;
    puVar10[0xf] = uVar5;
    lVar11 = lVar11 + -1;
    puVar9 = puVar9 + 0x10;
    puVar10 = puVar10 + 0x10;
  } while (lVar11 != 0);
  return;
}

// Call @ 1464ef3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *this;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FMixerSourceVoice *pFVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  atomic<int> aVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong *plVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackX_8 [8];
  longlong *plStackX_10;
  
  uVar3 = *(uint *)((longlong)param_1 + 8);
  lVar19 = *(longlong *)param_1;
  uVar15 = 0;
  if ((int)uVar3 < *(int *)(lVar19 + 0x130)) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  lVar19 = (longlong)(int)uVar3 * 0x5d0 + *(longlong *)(lVar19 + 0x128);
  pTVar18 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar4->SharedReferenceCount;
    do {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar9 == (atomic<int>)0x0) goto LAB_1464e1e71;
      LOCK();
      aVar11 = pTVar4->SharedReferenceCount;
      bVar10 = aVar9 == aVar11;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar11 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar11;
    } while (!bVar10);
    this = *(FMixerSubmix **)((longlong)param_1 + 0x10);
    pTVar18 = pTVar4;
    if (this != (FMixerSubmix *)0x0) {
      bVar14 = 0;
      if (*(int *)((longlong)param_1 + 0x28) == 1) {
        bVar14 = 0x20;
      }
      bVar10 = true;
      *(byte *)(lVar19 + 0x522) = bVar14 | *(byte *)(lVar19 + 0x522) & 0xdf;
      iVar12 = *(int *)(lVar19 + 0xd8);
      plVar17 = *(longlong **)(lVar19 + 0xd0);
      plStackX_10 = plVar17 + (longlong)iVar12 * 5;
      while( true ) {
        if (*(int *)(lVar19 + 0xd8) != iVar12) {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (plVar17 == plStackX_10) break;
        pTVar18 = (TReferenceControllerBase<1> *)plVar17[1];
        pTVar16 = pTVar18;
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          aVar9 = pTVar18->SharedReferenceCount;
          do {
            pTVar16 = (TReferenceControllerBase<1> *)0x0;
            if (aVar9 == (atomic<int>)0x0) goto LAB_1464e1f31;
            LOCK();
            aVar11 = pTVar18->SharedReferenceCount;
            bVar20 = aVar9 == aVar11;
            if (bVar20) {
              pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
              aVar11 = aVar9;
            }
            UNLOCK();
            aVar9 = aVar11;
          } while (!bVar20);
          pTVar16 = pTVar18;
          if (*plVar17 != 0) {
            if (*(uint *)(*plVar17 + 0x30) == this->Id) {
              bVar10 = false;
              *(undefined4 *)(plVar17 + 2) = *(undefined4 *)((longlong)param_1 + 0x20);
              *(undefined4 *)(plVar17 + 3) = *(undefined4 *)((longlong)param_1 + 0x28);
              if ((*(byte *)(lVar19 + 0x522) & 0x20) != 0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar18);
                goto LAB_1464e2062;
              }
            }
            if ((int)plVar17[3] == 1) {
              *(byte *)(lVar19 + 0x522) = *(byte *)(lVar19 + 0x522) | 0x20;
            }
          }
        }
LAB_1464e1f31:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        plVar17 = plVar17 + 5;
      }
      if (bVar10) {
        pFVar2 = (ForAnyElementType *)(lVar19 + 0xd0);
        pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 0x10);
        if (((pFVar2->Data <= pFVar1) &&
            (pFVar1 < pFVar2->Data + (longlong)*(int *)(lVar19 + 0xdc) * 0x28)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)(lVar19 + 0xd8);
        if (iVar12 == *(int *)(lVar19 + 0xdc)) {
          iVar12 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,pFVar2,(int *)(lVar19 + 0xdc));
        }
        pFVar5 = pFVar2->Data;
        *(int *)(lVar19 + 0xd8) = iVar12 + 1;
        lVar13 = (longlong)iVar12;
        *(undefined8 *)(pFVar5 + lVar13 * 0x28) = *(undefined8 *)pFVar1;
        lVar6 = *(longlong *)((longlong)param_1 + 0x18);
        *(longlong *)(pFVar5 + lVar13 * 0x28 + 8) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          UNLOCK();
        }
        *(undefined4 *)(pFVar5 + lVar13 * 0x28 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x20);
        pFVar5[lVar13 * 0x28 + 0x14] = *(FScriptContainerElement *)((longlong)param_1 + 0x24);
        *(undefined4 *)(pFVar5 + lVar13 * 0x28 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x28);
        *(undefined8 *)(pFVar5 + lVar13 * 0x28 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x30);
      }
LAB_1464e2062:
      if ((*(byte *)(lVar19 + 0x522) & 0x20) == 0) {
        uVar3 = *(uint *)((longlong)param_1 + 8);
        lVar19 = *(longlong *)param_1;
        uVar15 = 0;
        if ((int)uVar3 < *(int *)(lVar19 + 0x140)) {
          uVar15 = ~uVar3 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ::Audio::FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
                  ((FMixerSourceSubmixOutputBuffer *)
                   ((longlong)(int)uVar3 * 0x330 + *(longlong *)(lVar19 + 0x138)),
                   (TArray<float,TAlignedHeapAllocator<16>_> *)0x0);
      }
      uVar3 = *(uint *)((longlong)param_1 + 8);
      lVar19 = *(longlong *)param_1;
      uVar15 = 0;
      if ((int)uVar3 < *(int *)(lVar19 + 0x88)) {
        uVar15 = ~uVar3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = *(FMixerSourceVoice **)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar3 * 8);
      if (pFVar7 == (FMixerSourceVoice *)0x0) {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160960083>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0x853,"nullptr != SourceVoice");
        pTVar18 = pTVar4;
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        ::Audio::FMixerSubmix::AddOrSetSourceVoice
                  (this,pFVar7,*(float *)((longlong)param_1 + 0x20),
                   *(EMixerSourceSubmixSendStage *)((longlong)param_1 + 0x28));
        pTVar18 = pTVar4;
      }
    }
  }
LAB_1464e1e71:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return;
}

// Call @ 1464ef3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  if (*(int *)(*(longlong *)param_1 + 0x240) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x72b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 8);
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (-1 < *(char *)((longlong)(int)uVar3 * 0x5d0 + 0x520 + *(longlong *)(lVar4 + 0x128))) {
    uVar3 = *(uint *)((longlong)param_1 + 8);
    lVar4 = *(longlong *)param_1;
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pfVar1 = (float *)((longlong)(int)uVar3 * 0x5d0 + 0x128 + *(longlong *)(lVar4 + 0x128));
    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
      uVar3 = *(uint *)((longlong)param_1 + 8);
      lVar4 = *(longlong *)param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      uVar7 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x124 + *(longlong *)(lVar4 + 0x128)) = uVar2;
    }
    lVar4 = *(longlong *)param_1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar3 = *(uint *)((longlong)param_1 + 8);
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x128 + *(longlong *)(lVar4 + 0x128)) = uVar2;
  }
  return;
}

// Call @ 1464ef3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool abStackX_8 [8];
  TSharedRef<Audio::FMixerAudioBus,1> TStack_18;
  
  abStackX_8[0] = false;
  ::Audio::FMixerSourceManager::FindOrAddAudioBus
            (*(FMixerSourceManager **)param_1,&TStack_18,*(FAudioBusKey *)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10),*(bool *)((longlong)param_1 + 0x14),abStackX_8);
  if (abStackX_8[0] == false) {
    ::FString::operator=(&(TStack_18.Object)->BusName,(FString *)((longlong)param_1 + 0x18));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((TStack_18.Object)->NumChannels != *(int *)((longlong)param_1 + 0x10)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x5f7,"AudioBusPtr->GetNumChannels() == InNumChannels");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (TStack_18.Object)->bIsAutomatic = *(bool *)((longlong)param_1 + 0x14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 1464ef3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
::Call(void *param_1,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)&param_2->field_0x8;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x18);
    iVar1 = *(int *)(*(undefined8 **)((longlong)param_1 + 8) + 1);
    if (iVar4 == iVar1) {
      if (iVar4 < 2) goto LAB_1464e24d5;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar2 + 0x10),
                         (wchar_t *)**(undefined8 **)((longlong)param_1 + 8));
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (bVar5) {
LAB_1464e24d5:
      if (*(longlong *)&param_2->field_0x8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::Audio::FMixerSubmix::StartEnvelopeFollowing(*(FMixerSubmix **)&param_2->field_0x8,10,500);
      return;
    }
  }
  return;
}

// Call @ 1464ef3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::StopInternal
            (*(FMixerSourceManager **)param_1,*(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464ef400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackX_8 [8];
  
  pTVar6 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)param_1 + 0x148),(FAudioBusKey *)((longlong)param_1 + 8));
  plVar7 = (longlong *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(char *)(*plVar7 + 400) == '\0') {
      lVar3 = *(longlong *)param_1;
      iVar1 = *(int *)(lVar3 + 0x130);
      lVar8 = *(longlong *)(lVar3 + 0x128);
      lVar9 = (longlong)iVar1 * 0x5d0 + lVar8;
      while( true ) {
        if (*(int *)(lVar3 + 0x130) != iVar1) {
          `TCheckedPointerIterator<Audio::FMixerSourceManager::FSourceInfo,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(auStackX_8);
        }
        if (lVar8 == lVar9) break;
        if (*(int *)(lVar8 + 0xe0) == *(int *)((longlong)param_1 + 8)) {
          *(byte *)(lVar8 + 0x520) = *(byte *)(lVar8 + 0x520) & 99;
        }
        lVar8 = lVar8 + 0x5d0;
      }
      lVar3 = *(longlong *)param_1;
      if (*(int *)(lVar3 + 0x150) != *(int *)(lVar3 + 0x17c)) {
        uVar2 = *(uint *)((longlong)param_1 + 8);
        TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Audio::FAudioBusKey>
                  ((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                    *)(lVar3 + 0x148),
                   uVar2 * 0x40 + (uVar2 >> 2) + *(int *)((longlong)param_1 + 0xc) + -0x61c88647 ^
                   uVar2,(FAudioBusKey *)((longlong)param_1 + 8));
        return;
      }
    }
  }
  return;
}

// Call @ 1464ef410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType FStack_48;
  int iStack_40;
  int iStack_3c;
  FString FStack_38;
  FString FStack_28;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0x40));
  uVar6 = *(uint *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x128);
  lVar8 = (longlong)(int)uVar6 * 0x5d0;
  bVar2 = *(byte *)(lVar8 + 0x520 + lVar3);
  *(byte *)(lVar8 + 0x520 + lVar3) = bVar2 & 0xef | 0x80;
  if ((bVar2 & 0x20) != 0) {
    ::Audio::FMixerSourceManager::StopInternal
              (*(FMixerSourceManager **)param_1,*(int *)((longlong)param_1 + 8));
    return;
  }
  uVar6 = *(int *)((longlong)param_1 + 0xc) + 3U & 0xfffffffc;
  if ((int)uVar6 < 1) {
    *(byte *)(lVar8 + 0x520 + lVar3) = bVar2 & 99;
  }
  else {
    fVar1 = *(float *)(lVar8 + 0x124 + lVar3);
    *(float *)(lVar8 + 0x130 + lVar3) = fVar1;
    *(uint *)(lVar8 + 0x138 + lVar3) = uVar6;
    *(undefined4 *)(lVar8 + 0x134 + lVar3) = 0;
    *(uint *)(lVar8 + 300 + lVar3) =
         (uint)(fVar1 / (float)(int)uVar6) ^ __xmm_80000000800000008000000080000000;
  }
  uVar6 = *(uint *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar6 * 0x5d0 + 0x5b0 + *(longlong *)(lVar3 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&FStack_28,L"Is stopping with fade");
    uVar6 = *(uint *)((longlong)param_1 + 8);
    lVar3 = *(longlong *)param_1;
    uVar7 = 0;
    if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x128);
    FStack_48.Data = (FScriptContainerElement *)0x0;
    iStack_40 = *(int *)((longlong)(int)uVar6 * 0x5d0 + 0x5c0 + lVar3);
    lVar8 = (longlong)iStack_40;
    _Src = *(void **)((longlong)(int)uVar6 * 0x5d0 + 0x5b8 + lVar3);
    if (iStack_40 == 0) {
      iStack_3c = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_40,0,&FStack_48,iStack_40,&iStack_3c);
      memcpy(FStack_48.Data,_Src,lVar8 * 2);
    }
    ::FString::PrintfImpl(&FStack_38,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (FStack_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1464ef420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
::Call(void *param_1,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)&param_2->field_0x8;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x18);
    iVar1 = *(int *)(*(undefined8 **)((longlong)param_1 + 8) + 1);
    if (iVar4 == iVar1) {
      if (iVar4 < 2) goto LAB_1464e29d5;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar2 + 0x10),
                         (wchar_t *)**(undefined8 **)((longlong)param_1 + 8));
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (bVar5) {
LAB_1464e29d5:
      if (*(longlong *)&param_2->field_0x8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::Audio::FMixerSubmix::StopEnvelopeFollowing(*(FMixerSubmix **)&param_2->field_0x8);
      return;
    }
  }
  return;
}

// Call @ 1464ef430

/* WARNING: Removing unreachable block (ram,0x0001464e2b4d) */
/* WARNING: Removing unreachable block (ram,0x0001464e2b5b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *this;
  FScriptContainerElement *pFVar3;
  FMixerSubmix *pFVar4;
  FMixerSubmix *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  atomic<int> aVar10;
  USoundSubmixBase *pUVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar13;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_38;
  
  this_00 = (FMixerSubmix *)0x0;
  if (!__CsvProfilerStat3060) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3060 = true;
  }
  uVar8 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_UnregisterSubmixBufferListener");
  this = *(FMixerDevice **)param_1;
  if (*(char *)((longlong)param_1 + 0x10) == '\0') {
    pUVar11 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x14));
    pTVar12 = ::Audio::FMixerDevice::GetSubmixInstance(this,&TStack_38,pUVar11);
    pFVar4 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
    pFVar13 = pFVar4;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar13 = this_00;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pFVar13 = pFVar4;
        aVar2 = aVar10;
      } while (!bVar9);
      pTVar6 = (pTVar12->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar13 != (FMixerSubmix *)0x0) {
        this_00 = pTVar12->Object;
        pTVar12->Object = (FMixerSubmix *)0x0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (TStack_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(TStack_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TStack_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (TStack_38.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  else {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar4 = *(FMixerSubmix **)(pFVar3 + 8);
    pFVar5 = *(FMixerSubmix **)pFVar3;
    pFVar13 = pFVar4;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar4->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar4->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar13 = this_00;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pFVar13 = pFVar4;
        aVar2 = aVar10;
      } while (!bVar9);
      LOCK();
      paVar1 = (atomic<int> *)&pFVar4->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
      }
      if (pFVar13 != (FMixerSubmix *)0x0) {
        this_00 = pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (this_00 == (FMixerSubmix *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    ::Audio::FMixerSubmix::UnregisterBufferListener
              (this_00,*(ISubmixBufferListener **)((longlong)param_1 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  FCsvProfiler::EndStat("UnregisterSubmixBufferListener",uVar8);
  return;
}

// Call @ 1464ef440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *this;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  atomic<int> aVar5;
  USoundSubmixBase *pUVar6;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSubmix *this_00;
  bool bVar9;
  TWeakPtr<Audio::FMixerSubmix,1> TStack_28;
  
  if (!__CsvProfilerStat3091) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3091 = true;
  }
  uVar4 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_UnregisterSubmixBufferListener");
  this = *(FMixerDevice **)param_1;
  pUVar6 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
  pTVar7 = ::Audio::FMixerDevice::GetSubmixInstance(this,&TStack_28,pUVar6);
  this_00 = (FMixerSubmix *)0x0;
  pTVar8 = (pTVar7->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
    pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      this_00 = pTVar7->Object;
      pTVar7->Object = (FMixerSubmix *)0x0;
    }
  }
  if (TStack_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TStack_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((TStack_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (TStack_28.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (this_00 == (FMixerSubmix *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if (3 < (byte)LogAudioMixer._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    ::Audio::FMixerSubmix::UnregisterBufferListenerInternal
              (this_00,*(ulong64 *)((longlong)param_1 + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FCsvProfiler::EndStat("UnregisterSubmixBufferListener",uVar4);
  return;
}

// Call @ 1464ef450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMixerSourceSubmixOutputBuffer *this;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lStackX_8;
  longlong lStackX_10;
  
  lVar9 = *(longlong *)param_1;
  uVar8 = 0;
  *(int *)(lVar9 + 0x244) = *(int *)(*(longlong *)(lVar9 + 0x40) + 0xcf8) * *(int *)(lVar9 + 0x240);
  lVar9 = *(longlong *)param_1;
  if (0 < *(int *)(lVar9 + 0x23c)) {
    lVar12 = 0;
    lStackX_8 = 0;
    lStackX_10 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)(lVar9 + 0x130)) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x128) + lStackX_8;
      if ((*(byte *)(lVar9 + 0x520) & 0x14) != 0) {
        lVar3 = *(longlong *)param_1;
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(lVar3 + 0x140)) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = (FMixerSourceSubmixOutputBuffer *)(*(longlong *)(lVar3 + 0x138) + lStackX_10);
        ::Audio::FMixerSourceSubmixOutputBuffer::SetNumOutputChannels
                  (this,*(uint *)((longlong)param_1 + 8));
        pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)(lVar9 + 0x4d0);
        piVar1 = (int *)(lVar9 + 0x4dc);
        *(undefined4 *)(lVar9 + 0x4d8) = 0;
        if (*(int *)(lVar9 + 0x4dc) < 0) {
          ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pTVar2,0,piVar1);
        }
        iVar11 = 2;
        if ((*(byte *)(lVar9 + 0x521) & 4) == 0) {
          iVar11 = *(int *)(lVar9 + 0x524);
        }
        if ((*(byte *)(lVar9 + 0x520) & 1) == 0) {
          *(undefined4 *)(lVar9 + 0x4d8) = 0;
          if (*piVar1 < 0) {
            ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,(ForAnyElementType *)pTVar2,0,piVar1);
          }
          ::Audio::FMixerDevice::Get2DChannelMap
                    ((bool)(*(byte *)(lVar9 + 0x522) >> 3 & 1),iVar11,
                     *(int *)((longlong)param_1 + 8),(bool)(*(byte *)(lVar9 + 0x520) >> 1 & 1),
                     pTVar2);
        }
        else {
          lVar3 = *(longlong *)param_1;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(lVar3 + 0x1e0)) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined1 *)(*(longlong *)(lVar3 + 0x1d8) + lVar12) = 1;
          iVar11 = iVar11 * *(int *)((longlong)param_1 + 8);
          iVar7 = ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (4,4,iVar11,(ForAnyElementType *)pTVar2,(int *)(lVar9 + 0x4d8),piVar1);
          memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4,0,(longlong)iVar11 << 2);
        }
        ::Audio::FMixerSourceSubmixOutputBuffer::SetChannelMap
                  (this,pTVar2,(bool)(*(byte *)(lVar9 + 0x520) >> 1 & 1));
      }
      lVar9 = *(longlong *)param_1;
      lStackX_8 = lStackX_8 + 0x5d0;
      lStackX_10 = lStackX_10 + 0x330;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar8 < *(int *)(lVar9 + 0x23c));
  }
  return;
}

// Call @ 1464ef460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  FMixerSourceManager *this;
  FSourceEffectChainEntry *pFVar5;
  ForAnyElementType FVar6;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar7;
  code **ppcVar8;
  undefined1 auStackY_c8 [32];
  ForAnyElementType FStack_78;
  int iStack_70;
  int iStack_6c;
  undefined1 uStack_68;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this_00 = FAudioDeviceManager::Get();
  if (((this_00 != (FAudioDeviceManager *)0x0) &&
      (pFVar7 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,*(uint *)param_1),
      pFVar7 != (FAudioDevice *)0x0)) &&
     (this = *(FMixerSourceManager **)&pFVar7[1].DynamicSoundClassProperties.field_0x28,
     this != (FMixerSourceManager *)0x0)) {
    uVar3 = *(undefined4 *)((longlong)param_1 + 4);
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x18);
    iVar4 = *(int *)((longlong)param_1 + 0x10);
    pFVar5 = *(FSourceEffectChainEntry **)((longlong)param_1 + 8);
    FStack_78.Data = (FScriptContainerElement *)0x0;
    iStack_70 = iVar4;
    if (iVar4 == 0) {
      iStack_6c = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&FStack_78,iVar4,&iStack_6c);
      ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
                (FStack_78.Data,pFVar5,iVar4);
    }
    apcStack_58[0] = (code *)0x0;
    uStack_68 = uVar2;
    ppcVar8 = FMemory::Malloc(0x30,8);
    iVar4 = iStack_70;
    FVar6.Data = FStack_78.Data;
    *ppcVar8 = (code *)&TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    pFVar1 = (ForAnyElementType *)(ppcVar8 + 3);
    ppcVar8[1] = (code *)this;
    *(undefined4 *)(ppcVar8 + 2) = uVar3;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(ppcVar8 + 4) = iStack_70;
    ppcStack_30 = ppcVar8;
    if (iStack_70 == 0) {
      *(int *)((longlong)ppcVar8 + 0x24) = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iStack_70,0,pFVar1,iStack_70,(int *)((longlong)ppcVar8 + 0x24));
      ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
                (pFVar1->Data,(FSourceEffectChainEntry *)FVar6.Data,iVar4);
    }
    *(undefined1 *)(ppcVar8 + 5) = uStack_68;
    if (ppcVar8 + 1 != (code **)0x0) {
      apcStack_58[0] =
           TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,void>
           ::Call;
    }
    ::Audio::FMixerSourceManager::AudioMixerThreadCommand
              (this,(TFunction<void___cdecl(void)> *)apcStack_58,"UpdateSourceEffectChain()",true);
    if (apcStack_58[0] != (code *)0x0) {
      ppcVar8 = apcStack_58 + 2;
      if (ppcStack_30 != (code **)0x0) {
        ppcVar8 = ppcStack_30;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    if ((FSourceEffectChainEntry *)FStack_78.Data != (FSourceEffectChainEntry *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
  }
  return;
}

// Call @ 1464ef470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSoundEffectBase *this;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar11;
  ForAnyElementType *pFVar12;
  TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uStackX_10;
  longlong lStackX_18;
  undefined8 uStack_88;
  longlong lStack_80;
  TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> TStack_78;
  FSoundEffectSourceInitData FStack_68;
  
  lVar14 = *(longlong *)param_1;
  FStack_68.NumSourceChannels = 0;
  FStack_68.ParentPresetUniqueId = 0xffffffff;
  uStackX_10 = 0;
  lVar2 = *(longlong *)(lVar14 + 0x40);
  FStack_68.AudioClock = *(double *)(lVar2 + 0x5c8);
  FStack_68.AudioDeviceId = *(uint *)(lVar2 + 0xa0);
  FStack_68.SampleRate = (float)*(int *)(lVar2 + 0x84);
  if (0 < *(int *)(lVar14 + 0x23c)) {
    lStackX_18 = 0;
    do {
      uVar11 = 0;
      uVar9 = 0;
      if ((int)uStackX_10 < *(int *)(lVar14 + 0x130)) {
        uVar9 = ~uStackX_10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = *(longlong *)(lVar14 + 0x128);
      lStack_80 = lVar14;
      if (*(int *)(lStackX_18 + 0x1d0 + lVar14) == *(int *)((longlong)param_1 + 8)) {
        *(bool *)(lStackX_18 + 0x1f8 + lVar14) = *(char *)((longlong)param_1 + 0x20) == '\0';
        lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x18);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pTVar13 = (TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> *)
                  (lVar14 + 0x1d8 + lStackX_18);
        if (*(int *)((longlong)param_1 + 0x18) == pTVar13->ArrayNum) {
          if (0 < pTVar13->ArrayNum) {
            lVar14 = 0;
            do {
              uVar9 = 0;
              if ((int)uVar11 < *(int *)((longlong)param_1 + 0x18)) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar3 = (((TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_1 + 0x10))->AllocatorInstance).Data;
              uVar9 = 0;
              if ((int)uVar11 < pTVar13->ArrayNum) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (pTVar13->AllocatorInstance).Data;
              pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar14 + 8);
              this = *(FSoundEffectBase **)(pFVar4 + lVar14);
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((this == (FSoundEffectBase *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar8 = FSoundEffectBase::IsPreset(this,*(USoundEffectPreset **)(pFVar3 + lVar14));
              if (!bVar8) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar5);
                lVar14 = lStack_80;
                goto LAB_1464e36db;
              }
              if ((this == (FSoundEffectBase *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FSoundEffectBase::SetEnabled(this,(bool)(~(byte)pFVar3[lVar14 + 8] & 1));
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              uVar11 = uVar11 + 1;
              lVar14 = lVar14 + 0x10;
            } while ((int)uVar11 < pTVar13->ArrayNum);
          }
        }
        else {
LAB_1464e36db:
          FStack_68.NumSourceChannels = *(int *)(lStackX_18 + 0x524 + lVar14);
          ::Audio::FMixerSourceManager::ResetSourceEffectChain
                    (*(FMixerSourceManager **)param_1,uStackX_10);
          TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_78.ArrayNum = 0;
          TStack_78.ArrayMax = 0;
          ::Audio::FMixerSourceManager::BuildSourceEffectChain
                    (*(FMixerSourceManager **)param_1,uStackX_10,&FStack_68,
                     (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 + 0x10),&TStack_78);
          if (pTVar13 != &TStack_78) {
            DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                      ((TSharedPtr<FSoundEffectSource,1> *)(pTVar13->AllocatorInstance).Data,
                       pTVar13->ArrayNum);
            FVar7.Data = TStack_78.AllocatorInstance.Data;
            iVar10 = TStack_78.ArrayNum;
            piVar1 = &pTVar13->ArrayMax;
            pTVar13->ArrayNum = TStack_78.ArrayNum;
            if ((TStack_78.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,TStack_78.ArrayNum,*piVar1,(ForAnyElementType *)pTVar13,
                         TStack_78.ArrayNum,piVar1);
              ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int>
                        ((pTVar13->AllocatorInstance).Data,
                         (TSharedPtr<FSoundEffectSource,1> *)FVar7.Data,iVar10);
            }
          }
          uStack_88 = 0;
          pFVar12 = (ForAnyElementType *)(lVar14 + 0x1e8 + lStackX_18);
          if (((pFVar12->Data <= (FScriptContainerElement *)&uStack_88) &&
              ((FScriptContainerElement *)&uStack_88 <
               pFVar12->Data + (longlong)*(int *)((longlong)&pFVar12[1].Data + 4) * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)&pFVar12[1].Data;
          piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
          if (iVar10 == *piVar1) {
            iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar12,piVar1);
          }
          *(int *)&pFVar12[1].Data = iVar10 + 1;
          *(undefined8 *)(pFVar12->Data + (longlong)iVar10 * 8) = uStack_88;
          DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                    ((TSharedPtr<FSoundEffectSource,1> *)TStack_78.AllocatorInstance.Data,
                     TStack_78.ArrayNum);
          if ((TSharedPtr<FSoundEffectSource,1> *)TStack_78.AllocatorInstance.Data !=
              (TSharedPtr<FSoundEffectSource,1> *)0x0) {
            FMemory::Free(TStack_78.AllocatorInstance.Data);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      lVar14 = *(longlong *)param_1;
      uStackX_10 = uStackX_10 + 1;
      lStackX_18 = lStackX_18 + 0x5d0;
    } while ((int)uStackX_10 < *(int *)(lVar14 + 0x23c));
  }
  return;
}

// Call @ 1464ef480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  return;
}

// Call @ 1464ef490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2755) {
    FCsvProfilerTrace::OutputInlineStat("AddEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2755 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("AddEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index,
             "CSV_AddEnvelopeFollowerDelegate");
  (**(code **)(**(longlong **)param_1 + 0x1b0))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),(longlong)param_1 + 0x10);
  FCsvProfiler::EndStat("AddEnvelopeFollowerDelegate",uVar1);
  return;
}

// Call @ 1464ef4a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2913) {
    FCsvProfilerTrace::OutputInlineStat("AddSpectralAnalysisDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2913 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("AddSpectralAnalysisDelegate",_GCsvCategory_Audio.Index,
             "CSV_AddSpectralAnalysisDelegate");
  (**(code **)(**(longlong **)param_1 + 0x1e0))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),(longlong)param_1 + 0x10,
             (longlong)param_1 + 0x38);
  FCsvProfiler::EndStat("AddSpectralAnalysisDelegate",uVar1);
  return;
}

// Call @ 1464ef4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FMixerSubmix *this;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSoundEffectSubmix,1> local_18;
  
  if (*(longlong *)((longlong)param_1 + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = *(FSoundEffectSubmix **)((longlong)param_1 + 0x18);
  this = *(FMixerSubmix **)((longlong)param_1 + 8);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FMixerSubmix::AddSoundEffectSubmix(this,&local_18);
  return;
}

// Call @ 1464ef520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::ClearSubmixEffectChainOverride
            (*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::ClearSoundEffectSubmixes(*(FMixerSubmix **)param_1);
  return;
}

// Call @ 1464ef5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::StartAudioBusEnvelopeFollowerFromCVar
            (*(FMixerSourceManager **)param_1,*(uint *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464ef5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStackX_8 [8];
  code *apcStack_48 [5];
  undefined8 *puStack_20;
  
  lVar2 = *(longlong *)param_1;
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107722>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x1f6,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  apcStack_48[0] = (code *)0x0;
  puStack_20 = FMemory::Malloc(0x20,8);
  *puStack_20 = &TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
  puStack_20[1] = lVar2;
  puStack_20[2] = (undefined8 *)((longlong)param_1 + 8);
  *(undefined4 *)(puStack_20 + 3) = 10;
  *(undefined4 *)((longlong)puStack_20 + 0x1c) = 500;
  if (puStack_20 + 1 != (longlong *)0x0) {
    apcStack_48[0] =
         TFunctionRefCaller<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
         ::Call;
  }
  ::Audio::FSubmixMap::Iterate
            ((FSubmixMap *)(lVar2 + 0xd20),
             (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
              *)apcStack_48);
  iVar1 = *(int *)(lVar2 + 0xb80);
  plVar7 = *(longlong **)(lVar2 + 0xb78);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  do {
    if (*(int *)(lVar2 + 0xb80) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (plVar7 == plVar8) {
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      if (iVar6 == *(int *)((longlong)param_1 + 0x10)) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),*(wchar_t **)((longlong)param_1 + 8));
          bVar5 = iVar6 == 0;
          goto LAB_1464e3a75;
        }
      }
      else {
        bVar5 = iVar6 + *(int *)((longlong)param_1 + 0x10) == 1;
LAB_1464e3a75:
        if (!bVar5) goto LAB_1464e3abb;
      }
      if (*plVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      ::Audio::FMixerSubmix::StartEnvelopeFollowing((FMixerSubmix *)*plVar7,10,500);
    }
LAB_1464e3abb:
    plVar7 = plVar7 + 2;
  } while( true );
}

// Call @ 1464ef5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::StopAudioBusEnvelopeFollowerFromCVar
            (*(FMixerSourceManager **)param_1,*(uint *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464ef610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStackX_8 [8];
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  longlong lStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  lVar2 = *(longlong *)param_1;
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x211,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_20 = 0;
  ppuStack_38 = &TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
       ::Call;
  lStack_30 = lVar2;
  puStack_28 = (undefined8 *)((longlong)param_1 + 8);
  ::Audio::FSubmixMap::Iterate
            ((FSubmixMap *)(lVar2 + 0xd20),
             (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
              *)apcStack_48);
  iVar1 = *(int *)(lVar2 + 0xb80);
  plVar7 = *(longlong **)(lVar2 + 0xb78);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  do {
    if (*(int *)(lVar2 + 0xb80) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (plVar7 == plVar8) {
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      if (iVar6 == *(int *)((longlong)param_1 + 0x10)) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),*(wchar_t **)((longlong)param_1 + 8));
          bVar5 = iVar6 == 0;
          goto LAB_1464e3bd2;
        }
      }
      else {
        bVar5 = iVar6 + *(int *)((longlong)param_1 + 0x10) == 1;
LAB_1464e3bd2:
        if (!bVar5) goto LAB_1464e3c0d;
      }
      if (*plVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      ::Audio::FMixerSubmix::StopEnvelopeFollowing((FMixerSubmix *)*plVar7);
    }
LAB_1464e3c0d:
    plVar7 = plVar7 + 2;
  } while( true );
}

// Call @ 1464ef620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2631) {
    FCsvProfilerTrace::OutputInlineStat("PauseRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2631 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("PauseRecording",_GCsvCategory_Audio.Index,"CSV_PauseRecording");
  (**(code **)(**(longlong **)param_1 + 0x240))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8));
  FCsvProfiler::EndStat("PauseRecording",uVar1);
  return;
}

// Call @ 1464ef630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2785) {
    FCsvProfilerTrace::OutputInlineStat("RemoveEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2785 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RemoveEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index,
             "CSV_RemoveEnvelopeFollowerDelegate");
  (**(code **)(**(longlong **)param_1 + 0x1b8))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),(longlong)param_1 + 0x10);
  FCsvProfiler::EndStat("RemoveEnvelopeFollowerDelegate",uVar1);
  return;
}

// Call @ 1464ef640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2943) {
    FCsvProfilerTrace::OutputInlineStat("RemoveSpectralAnalysisDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2943 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RemoveSpectralAnalysisDelegate",_GCsvCategory_Audio.Index,
             "CSV_RemoveSpectralAnalysisDelegate");
  (**(code **)(**(longlong **)param_1 + 0x1e8))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),(longlong)param_1 + 0x10);
  FCsvProfiler::EndStat("RemoveSpectralAnalysisDelegate",uVar1);
  return;
}

// Call @ 1464ef650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::RemoveSoundEffectSubmix
            (*(FMixerSubmix **)param_1,*(uint *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::RemoveSoundEffectSubmixAtIndex
            (*(FMixerSubmix **)param_1,*(int *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FMixerSubmix *this;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSoundEffectSubmix,1> local_18;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = *(FSoundEffectSubmix **)((longlong)param_1 + 0x18);
  this = *(FMixerSubmix **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FMixerSubmix::ReplaceSoundEffectSubmix(this,*(int *)((longlong)param_1 + 0x10),&local_18)
  ;
  return;
}

// Call @ 1464ef760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2661) {
    FCsvProfilerTrace::OutputInlineStat("ResumeRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2661 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("ResumeRecording",_GCsvCategory_Audio.Index,"CSV_ResumeRecording");
  (**(code **)(**(longlong **)param_1 + 0x248))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8));
  FCsvProfiler::EndStat("ResumeRecording",uVar1);
  return;
}

// Call @ 1464ef770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ef782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x160))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined1 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ef7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x168))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef7b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ef7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x198))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetSubmixEffectChainOverride
            (*(FMixerSubmix **)param_1,
             (TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10),*(float *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 1464ef830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  UObject *pUVar1;
  FAudioDeviceManager *this;
  FAudioDevice *pFVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 4));
  if (pUVar1 != (UObject *)0x0) {
    this = FAudioDeviceManager::Get();
    pFVar2 = FAudioDeviceManager::GetAudioDeviceRaw(this,*(uint *)param_1);
    if (pFVar2 != (FAudioDevice *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x180))
                (pFVar2,pUVar1,*(undefined4 *)((longlong)param_1 + 0xc),
                 *(undefined4 *)((longlong)param_1 + 0x10),*(undefined4 *)((longlong)param_1 + 0x14)
                );
    }
  }
  return;
}

// Call @ 1464ef8a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ef8b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x188))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  (**(code **)(**(longlong **)param_1 + 0x158))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10),*(undefined4 *)((longlong)param_1 + 0x14),
             *(undefined4 *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 1464ef900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ef912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 400))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464ef920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  FMixerSourceManager *this;
  
  this = UAudioEngineSubsystem::GetMutableSourceManager(*(UAudioEngineSubsystem **)param_1);
  if (this != (FMixerSourceManager *)0x0) {
    ::Audio::FMixerSourceManager::StartAudioBus
              (this,*(FAudioBusKey *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + 0x10),
               *(int *)((longlong)param_1 + 0x20),*(bool *)((longlong)param_1 + 0x24));
  }
  return;
}

// Call @ 1464ef960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2691) {
    FCsvProfilerTrace::OutputInlineStat("StartEnvelopeFollowing",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2691 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StartEnvelopeFollowing",_GCsvCategory_Audio.Index,"CSV_StartEnvelopeFollowing");
  (**(code **)(**(longlong **)param_1 + 0x148))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8));
  FCsvProfiler::EndStat("StartEnvelopeFollowing",uVar1);
  return;
}

// Call @ 1464ef970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2584) {
    FCsvProfilerTrace::OutputInlineStat("StartRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2584 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("StartRecording",_GCsvCategory_Audio.Index,"CSV_StartRecording");
  (**(code **)(**(longlong **)param_1 + 0x138))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined4 *)((longlong)param_1 + 0x10));
  FCsvProfiler::EndStat("StartRecording",uVar1);
  return;
}

// Call @ 1464ef980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2815) {
    FCsvProfilerTrace::OutputInlineStat("StartSpectrumAnalysis",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2815 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StartSpectrumAnalysis",_GCsvCategory_Audio.Index,"CSV_StartSpectrumAnalysis");
  (**(code **)(**(longlong **)param_1 + 0x1c0))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),(longlong)param_1 + 0x10);
  FCsvProfiler::EndStat("StartSpectrumAnalysis",uVar1);
  return;
}

// Call @ 1464ef990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined ***pppuVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_78 [32];
  FAudioBusKey aFStack_58 [2];
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FMixerSourceManager *pFStack_30;
  FAudioBusKey FStack_28;
  undefined ***pppuStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFStack_30 = UAudioEngineSubsystem::GetMutableSourceManager(*(UAudioEngineSubsystem **)param_1);
  if (pFStack_30 != (FMixerSourceManager *)0x0) {
    pFVar3 = (pFStack_30->AudioBusKeys_AudioThread).AllocatorInstance.Data;
    aFStack_58[0] = *(FAudioBusKey *)((longlong)param_1 + 8);
    pFVar1 = pFVar3 + (longlong)(pFStack_30->AudioBusKeys_AudioThread).ArrayNum * 8;
    if (pFVar3 != pFVar1) {
      do {
        if ((*(uint *)pFVar3 == aFStack_58[0].ObjectId) &&
           (*(uint *)(pFVar3 + 4) == aFStack_58[0].InstanceId)) {
          TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_>::Remove
                    (&pFStack_30->AudioBusKeys_AudioThread,aFStack_58);
          ::Audio::TraceAudioBusStopMessage
                    (*(uint *)&pFStack_30->MixerDevice->field_0xa0,aFStack_58[0].ObjectId);
          pppuStack_20 = (undefined ***)0x0;
          ppuStack_38 = &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>
                         ::_vftable_;
          FStack_28 = aFStack_58[0];
          apcStack_48[0] =
               TFunctionRefCaller<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,void>
               ::Call;
          ::Audio::FMixerSourceManager::AudioMixerThreadCommand
                    (pFStack_30,(TFunction<void___cdecl(void)> *)apcStack_48,"StopAudioBus()",false)
          ;
          if (apcStack_48[0] == (code *)0x0) {
            return;
          }
          pppuVar2 = &ppuStack_38;
          if (pppuStack_20 != (undefined ***)0x0) {
            pppuVar2 = pppuStack_20;
          }
          (*(code *)(*pppuVar2)[2])();
          return;
        }
        pFVar3 = pFVar3 + 8;
      } while (pFVar3 != pFVar1);
    }
  }
  return;
}

// Call @ 1464ef9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2723) {
    FCsvProfilerTrace::OutputInlineStat("StopEnvelopeFollowing",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2723 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StopEnvelopeFollowing",_GCsvCategory_Audio.Index,"CSV_StopEnvelopeFollowing");
  (**(code **)(**(longlong **)param_1 + 0x150))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8));
  FCsvProfiler::EndStat("StopEnvelopeFollowing",uVar1);
  return;
}

// Call @ 1464ef9b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2846) {
    FCsvProfilerTrace::OutputInlineStat("StopSpectrumAnalysis",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2846 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StopSpectrumAnalysis",_GCsvCategory_Audio.Index,"CSV_StopSpectrumAnalysis");
  (**(code **)(**(longlong **)param_1 + 0x1c8))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8));
  FCsvProfiler::EndStat("StopSpectrumAnalysis",uVar1);
  return;
}

// Call @ 1464ef9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  UObject *pUVar1;
  FAudioDeviceManager *this;
  FAudioDevice *pFVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 4));
  if (pUVar1 != (UObject *)0x0) {
    this = FAudioDeviceManager::Get();
    pFVar2 = FAudioDeviceManager::GetAudioDeviceRaw(this,*(uint *)param_1);
    if (pFVar2 != (FAudioDevice *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x170))
                (pFVar2,pUVar1,(longlong)param_1 + 0x10,(longlong)param_1 + 0x60,
                 (longlong)param_1 + 0xb0);
    }
  }
  return;
}

// Call @ 1464efa30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,void>::
Call(void *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  local_18 = *(undefined4 *)((longlong)param_1 + 8);
  local_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  local_28 = &TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = TFunctionRefCaller<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>((TSharedPtr<FSoundEffectSource,1> *)0x0,0);
  return;
}

// Call @ 1464efaa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices
            (*(UObject **)param_1,(FOnAudioOutputDevicesObtained *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464efac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName
            (*(UObject **)param_1,(FOnMainAudioOutputDeviceObtained *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464efae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,void>::
Call(void *param_1)

{
  UAudioMixerBlueprintLibrary::SwapAudioOutputDevice
            (*(UObject **)param_1,(FString *)((longlong)param_1 + 8),
             (FOnCompletedDeviceSwap *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 1464efb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  FMixerDevice *this;
  uint uVar1;
  bool bVar2;
  USoundSubmixBase *pUVar3;
  
  if (!__CsvProfilerStat2223) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmix",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2223 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("UnregisterSubmix",_GCsvCategory_Audio.Index,"CSV_UnregisterSubmix");
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 8));
  if (bVar2) {
    this = *(FMixerDevice **)param_1;
    bVar2 = *(bool *)((longlong)param_1 + 0x10);
    pUVar3 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
    ::Audio::FMixerDevice::UnloadSoundSubmix(this,pUVar3,bVar2);
  }
  FCsvProfiler::EndStat("UnregisterSubmix",uVar1);
  return;
}

// Call @ 1464efb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,void>::
Call(void *param_1)

{
  ::Audio::FMixerSourceManager::AddPatchInputForAudioBus
            (*(FMixerSourceManager **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8),
             (FPatchInput *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSourceManager::AddPatchOutputForAudioBus
            (*(FMixerSourceManager **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8),
             (TSharedPtr<Audio::FPatchOutput,1> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,void>::Call
          (void *param_1)

{
  FMixerSubmix *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedPtr<FSoundEffectSubmix,1> TStack_18;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1464e4c02;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this = *(FMixerSubmix **)param_1;
    if ((this != (FMixerSubmix *)0x0) &&
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x10)), bVar4)) {
      TStack_18.Object = *(FSoundEffectSubmix **)((longlong)param_1 + 0x18);
      TStack_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ::Audio::FMixerSubmix::ReplaceSoundEffectSubmix(this,0,&TStack_18);
    }
  }
LAB_1464e4c02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 1464efb60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,void,enum_EAudioChunkLoadResult>
::Call(void *param_1,EAudioChunkLoadResult *param_2)

{
  `UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1464efb70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2113) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmix",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2113 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("RegisterSubmix",_GCsvCategory_Audio.Index,"CSV_RegisterSubmix");
  (**(code **)(**(longlong **)param_1 + 0x78))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             *(undefined1 *)((longlong)param_1 + 0x10));
  FCsvProfiler::EndStat("RegisterSubmix",uVar1);
  return;
}

// Call @ 1464efb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1464efbb0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(FMixerSubmix **)((longlong)param_1 + 8) != (FMixerSubmix *)0x0) {
      ::Audio::FMixerSubmix::BroadcastDelegates(*(FMixerSubmix **)((longlong)param_1 + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1464efbb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 1464efbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,void>
::Call(void *param_1)

{
  UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix
            (*(UObject **)param_1,*(USoundSubmix **)((longlong)param_1 + 8),
             *(UAudioBus **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efc00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,void>
::Call(void *param_1)

{
  UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix
            (*(UObject **)param_1,*(USoundSubmix **)((longlong)param_1 + 8),
             *(UAudioBus **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efc20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,void>::Call
          (void *param_1)

{
  FSoundWavePCMWriter *this;
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData>_> TVar4;
  FReadAccessScope FStack_28;
  
  lVar2 = *(longlong *)param_1;
  if (lVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x230),&FStack_28)
    ;
    iVar1 = *(int *)(lVar2 + 0x240);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
    if (0 < iVar1) {
      FOnSubmixRecordedFileDone_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)param_1 + 0x230),(USoundWave *)0x0);
    }
  }
  TVar4.Ptr = RecordingData.Ptr;
  if (RecordingData.Ptr != (FAudioRecordingData *)0x0) {
    this = &(RecordingData.Ptr)->Writer;
    RecordingData.Ptr = (FAudioRecordingData *)0x0;
    ::Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(this);
    pFVar3 = ((TVar4.Ptr)->InputBuffer).RawPCMData.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(TVar4.Ptr,0xa0);
  }
  return;
}

// Call @ 1464efc30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat1470) {
    FCsvProfilerTrace::OutputInlineStat("InitSubmix",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1470 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("InitSubmix",_GCsvCategory_Audio.Index,"CSV_InitSubmix");
  (**(code **)(**(longlong **)param_1 + 0x70))();
  FCsvProfiler::EndStat("InitSubmix",uVar1);
  return;
}

// Call @ 1464efcb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
::Call(void *param_1,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_> *param_2)

{
  if (*(longlong *)&param_2->field_0x8 != 0) {
    `Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_1>::operator()
              (*(void **)((longlong)param_1 + 8),
               (TSharedPtr<Audio::FMixerSubmix,1> *)&param_2->field_0x8);
    return;
  }
  return;
}

// Call @ 1464efcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetAutoDisable
            (*(FMixerSubmix **)param_1,*(bool *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetAutoDisableTime
            (*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetDryLevel(*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10))
  ;
  return;
}

// Call @ 1464efdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,void>::
Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetModulationBaseLevels
            (*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10),
             *(float *)((longlong)param_1 + 0x14),*(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 1464efe20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetOutputVolume
            (*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1464efe70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetOutputVolume
            (*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10));
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetWetLevel(*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x14))
  ;
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetDryLevel(*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x18))
  ;
  return;
}

// Call @ 1464efe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Audio::FMixerSubmix::SetWetLevel(*(FMixerSubmix **)param_1,*(float *)((longlong)param_1 + 0x10))
  ;
  return;
}

// Call @ 1464efed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,void>::Call(void *param_1)

{
  UAudioBusSubsystem::StartAudioBus
            (*(UAudioBusSubsystem **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8),
             (FString *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x20),
             *(bool *)((longlong)param_1 + 0x24));
  return;
}

// Call @ 1464eff00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,void>::Call(void *param_1)

{
  UAudioBusSubsystem::StopAudioBus
            (*(UAudioBusSubsystem **)param_1,*(FAudioBusKey *)((longlong)param_1 + 8));
  return;
}

// Call @ 1464eff20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,void>
::Call(void *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  ForAnyElementType FStack_18;
  undefined8 uStack_10;
  
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar2) {
    FStack_18.Data = (FScriptContainerElement *)0x0;
    uStack_10 = 0;
    if (&FStack_18 != (ForAnyElementType *)((longlong)param_1 + 0x18)) {
      uVar1 = *(uint *)((longlong)param_1 + 0x20);
      _Src = ((ForAnyElementType *)((longlong)param_1 + 0x18))->Data;
      uStack_10 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,&FStack_18,uVar1,(int *)((longlong)&uStack_10 + 4));
        memcpy(FStack_18.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&FStack_18);
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
  }
  return;
}

// Call @ 1464eff30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,void>::
Call(void *param_1)

{
  bool bVar1;
  FString FStack_38;
  FString FStack_28;
  undefined1 uStack_18;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar1) {
    uStack_18 = 2;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
    ::FString::operator=(&FStack_38,(FString *)((longlong)param_1 + 0x18));
    ::FString::operator=(&FStack_28,(FString *)((longlong)param_1 + 0x28));
    uStack_18 = *(undefined1 *)((longlong)param_1 + 0x38);
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&FStack_38);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1464eff40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  int iVar1;
  FAudioOutputDeviceInfo *pFVar2;
  bool bVar3;
  ForAnyElementType FStack_18;
  undefined8 uStack_10;
  
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_1);
  if (bVar3) {
    FStack_18.Data = (FScriptContainerElement *)0x0;
    uStack_10 = 0;
    if (&FStack_18 != (ForAnyElementType *)((longlong)param_1 + 0x18)) {
      DestructItems<FAudioOutputDeviceInfo,int>((FAudioOutputDeviceInfo *)0x0,0);
      iVar1 = *(int *)((longlong)param_1 + 0x20);
      pFVar2 = (FAudioOutputDeviceInfo *)((ForAnyElementType *)((longlong)param_1 + 0x18))->Data;
      uStack_10 = CONCAT44(uStack_10._4_4_,iVar1);
      if ((iVar1 == 0) && (uStack_10._4_4_ == 0)) {
        uStack_10 = 0;
      }
      else {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar1,uStack_10._4_4_,&FStack_18,iVar1,(int *)((longlong)&uStack_10 + 4));
        ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int>
                  (FStack_18.Data,pFVar2,iVar1);
      }
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&FStack_18);
    DestructItems<FAudioOutputDeviceInfo,int>
              ((FAudioOutputDeviceInfo *)FStack_18.Data,(int)uStack_10);
    if ((FAudioOutputDeviceInfo *)FStack_18.Data != (FAudioOutputDeviceInfo *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
  }
  return;
}

// Call @ 146548900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
::Call(void *param_1,FSubmixEffectDynamicsProcessor *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 146548910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>::Call
          (void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 146548920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
::Call(void *param_1,FSubmixEffectDynamicsProcessor *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [5];
  undefined8 *puStack_60;
  FSubmixEffectDynamicsProcessor *pFStack_58;
  longlong lStack_48;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lStack_48 = *(longlong *)param_1;
  plStack_20 = (longlong *)0x0;
  pFStack_58 = param_2;
  if (lStack_48 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&lStack_38);
  }
  apcStack_88[0] = (code *)0x0;
  puStack_60 = FMemory::Malloc(0x50,0x10);
  *puStack_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z_QEBA_AEAVFSubmixEffectDynamicsProcessor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puStack_60[2] = pFStack_58;
  puStack_60[4] = lStack_48;
  puStack_60[9] = plStack_20;
  plStack_20 = (longlong *)0x0;
  puStack_60[6] = lStack_38;
  puStack_60[7] = uStack_30;
  puStack_60[8] = uStack_28;
  if (puStack_60[4] != 0) {
    lStack_48 = 0;
  }
  if (puStack_60 + 2 != (undefined8 *)0x0) {
    apcStack_88[0] =
         TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_2,(TUniqueFunction<void___cdecl(void)> *)apcStack_88);
  if (lStack_48 != 0) {
    plVar2 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 146548930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014654897f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}

// Call @ 146548990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  TSharedPtr<FSoundEffectBase,1> TStack_18;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  puVar2 = *(undefined8 **)param_1;
  puVar3 = puVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar2 == puVar3) break;
    TStack_18.Object = (FSoundEffectBase *)*puVar2;
    TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    USoundEffectPreset::UnregisterInstance(&TStack_18);
    puVar2 = puVar2 + 2;
  }
  return;
}

// Call @ 1465489a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined4 auStackX_8 [2];
  int iStackX_10;
  undefined4 *puStack_18;
  longlong *plStack_10;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0xb8));
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146542915;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      auStackX_8[0] = *(undefined4 *)(lVar1 + 0x30);
      lVar1 = *(longlong *)param_1;
      puStack_18 = auStackX_8;
      plStack_10 = (longlong *)((longlong)param_1 + 8);
      TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&>_>
                ((TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&> *)
                 &iStackX_10,(bool *)&puStack_18);
      if (((*(FMixerSubmix **)param_1)->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) {
        ::Audio::FMixerSubmix::SetupSoundfieldEncodingForChild
                  (*(FMixerSubmix **)param_1,
                   (FChildSubmixInfo *)
                   ((longlong)iStackX_10 * 0x38 + 8 + *(longlong *)(lVar1 + 0x48)));
      }
    }
  }
LAB_146542915:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 1465489b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
  `UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1465489c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001465489d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 1465489e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001465489f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 146548a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lStack_18;
  longlong lStack_10;
  
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if (*(int *)(lVar2 + 0x590) != *(int *)(lVar2 + 0x5bc)) {
    lVar4 = *(longlong *)(lVar2 + 0x5c8);
    if (*(longlong *)(lVar2 + 0x5c8) == 0) {
      lVar4 = lVar2 + 0x5c0;
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0x5d0) - 1U &
                             (uVar1 * 0x40 + *(int *)((longlong)param_1 + 0xc) +
                              (uVar1 >> 2) + 0x9e3779b9 ^ uVar1)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)
               &((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x588))->Elements;
      do {
        lVar3 = (longlong)iVar5;
        if ((*(uint *)(lVar4 + lVar3 * 0x28) == uVar1) &&
           (*(int *)(lVar4 + 4 + lVar3 * 0x28) == *(int *)((longlong)param_1 + 0xc))) {
          if (iVar5 != -1) goto LAB_146542adb;
          break;
        }
        iVar5 = *(int *)(lVar4 + 0x20 + lVar3 * 0x28);
      } while (iVar5 != -1);
    }
  }
  lStack_10 = (longlong)param_1 + 0x10;
  lStack_18 = (longlong)param_1 + 8;
  TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Audio::FAudioBusKey_const_&,Audio::FPatchInput_const_&>_>
            ((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x588),
             (TPairInitializer<Audio::FAudioBusKey_const_&,Audio::FPatchInput_const_&> *)
             &stack0x00000008,(bool *)&lStack_18);
LAB_146542adb:
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
            ((TArray<float,TAlignedHeapAllocator<16>_> *)(*(longlong *)param_1 + 0x5d8),
             *(int *)(*(longlong *)param_1 + 0x164) << 3,Default);
  return;
}

// Call @ 146548a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  uint local_res8 [8];
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0xb8));
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(uint *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x50) != *(int *)(lVar1 + 0x7c)) {
    TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x48),local_res8[0],local_res8);
  }
  return;
}

// Call @ 146548a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 146548a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 146548aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x46c);
  *(byte *)(*(longlong *)param_1 + 0x46c) =
       (*(char *)((longlong)param_1 + 8) * '\x02' ^ bVar1) & 2 ^ bVar1;
  return;
}

// Call @ 146548ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
::Call(void *param_1,FSubmixEffectDynamicsProcessor *param_2)

{
  ESubmixEffectDynamicsKeySource EVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)param_1;
  iVar4 = 0;
  uVar3 = 0xffffffff;
  EVar1 = *(ESubmixEffectDynamicsKeySource *)(lVar2 + 0x20);
  if (EVar1 == AudioBus) {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    iVar5 = 0;
    if (lVar2 == 0) goto LAB_146548b10;
    iVar4 = *(byte *)(lVar2 + 0x30) + 1;
  }
  else {
    iVar5 = iVar4;
    if ((EVar1 != Submix) || (lVar2 = *(longlong *)(lVar2 + 0x30), iVar5 = 0, lVar2 == 0))
    goto LAB_146548b10;
  }
  uVar3 = *(uint *)(lVar2 + 0xc);
  iVar5 = iVar4;
LAB_146548b10:
  FKeySource::Update(&param_2->KeySource,EVar1,uVar3,iVar5);
  return;
}

// Call @ 146548b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 146548b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x58))(&(*param_2)->_padding_,param_1);
  return;
}

// Call @ 146548b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>::
Call(void *param_1,FQuartzClock **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*param_2)->_padding_ + 0x20))(&(*param_2)->_padding_,*(undefined1 *)param_1);
  return;
}

// Call @ 146548b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
  `UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 146548ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
  `UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 146548bb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)param_1;
  uVar1 = ((FAudioBusKey *)((longlong)param_1 + 8))->ObjectId;
  uVar5 = uVar1 * 0x40 + *(int *)((longlong)param_1 + 0xc) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  if (*(int *)(lVar2 + 0x590) != *(int *)(lVar2 + 0x5bc)) {
    lVar4 = *(longlong *)(lVar2 + 0x5c8);
    if (*(longlong *)(lVar2 + 0x5c8) == 0) {
      lVar4 = lVar2 + 0x5c0;
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x5d0) - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)
               &((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x588))->Elements;
      while ((lVar3 = (longlong)iVar6, *(uint *)(lVar4 + lVar3 * 0x28) != uVar1 ||
             (*(int *)(lVar4 + 4 + lVar3 * 0x28) != *(int *)((longlong)param_1 + 0xc)))) {
        iVar6 = *(int *)(lVar4 + 0x20 + lVar3 * 0x28);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 != -1) {
        TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
        ::RemoveImpl<Audio::FAudioBusKey>
                  ((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                    *)(lVar2 + 0x588),uVar5,(FAudioBusKey *)((longlong)param_1 + 8));
      }
    }
  }
  return;
}

// Call @ 146548bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
  `UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 146548bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
::Call(void *param_1,FQuartzClock **param_2)

{
  `UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146548be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FQuartzClockManager::PauseClock
            (*(FQuartzClockManager **)param_1,(FName *)((longlong)param_1 + 8));
  return;
}

// Call @ 146548c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FQuartzClockManager::RemoveClock
            (*(FQuartzClockManager **)param_1,(FName *)((longlong)param_1 + 8),false);
  return;
}

// Call @ 146548c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FQuartzClockManager::ResumeClock
            (*(FQuartzClockManager **)param_1,(FName *)((longlong)param_1 + 8),0);
  return;
}

// Call @ 146548c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,void,Audio::Quartz::IQuartzClock_&>
::Call(void *param_1,IQuartzClock *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  IQuartzClock *local_res8;
  
  local_res8 = param_2 + -1;
  if (param_2 == (IQuartzClock *)0x0) {
    local_res8 = (IQuartzClock *)0x0;
  }
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res8);
  return;
}

// Call @ 146548ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
::Call(void *param_1,FSubmixEffectDynamicsProcessor *param_2)

{
  FKeySource::Update(&param_2->KeySource,
                     *(ESubmixEffectDynamicsKeySource *)((longlong)param_1 + 0xc),
                     *(uint *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 146548cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FQuartzClockManager::SetTickRateForClock
            (*(FQuartzClockManager **)param_1,(FQuartzClockTickRate *)((longlong)param_1 + 8),
             (FName *)((longlong)param_1 + 0x38));
  return;
}

// Call @ 146548cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Audio::FQuartzClockManager::StopClock
            (*(FQuartzClockManager **)param_1,(FName *)((longlong)param_1 + 8),
             *(bool *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 146548d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  FQuartzClockManager *this;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  TStack_18;
  
  TStack_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)param_1 + 0x10);
  this = *(FQuartzClockManager **)param_1;
  TStack_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FQuartzClockManager::SubscribeToAllTimeDivisions
            (this,*(FName *)((longlong)param_1 + 8),&TStack_18);
  return;
}

// Call @ 146548d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  EQuartzCommandQuantization EVar1;
  FQuartzClockManager *this;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  TStack_18;
  
  TStack_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)param_1 + 0x10);
  this = *(FQuartzClockManager **)param_1;
  EVar1 = *(EQuartzCommandQuantization *)((longlong)param_1 + 0x20);
  TStack_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FQuartzClockManager::SubscribeToTimeDivision
            (this,*(FName *)((longlong)param_1 + 8),&TStack_18,EVar1);
  return;
}

// Call @ 146548d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  FQuartzClockManager *this;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  TStack_18;
  
  TStack_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)param_1 + 0x10);
  this = *(FQuartzClockManager **)param_1;
  TStack_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions
            (this,*(FName *)((longlong)param_1 + 8),&TStack_18);
  return;
}

// Call @ 146548d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  EQuartzCommandQuantization EVar1;
  FQuartzClockManager *this;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  TStack_18;
  
  TStack_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)param_1 + 0x10);
  this = *(FQuartzClockManager **)param_1;
  EVar1 = *(EQuartzCommandQuantization *)((longlong)param_1 + 0x20);
  TStack_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Audio::FQuartzClockManager::UnsubscribeFromTimeDivision
            (this,*(FName *)((longlong)param_1 + 8),&TStack_18,EVar1);
  return;
}

// Call @ 146548d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  uint local_res8 [8];
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0xb8));
  lVar1 = *(longlong *)param_1;
  local_res8[0] = *(uint *)((longlong)param_1 + 8);
  if (*(int *)(lVar1 + 0x50) != *(int *)(lVar1 + 0x7c)) {
    TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x48),local_res8[0],local_res8);
  }
  return;
}

// Call @ 146548da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,void>::Call
          (void *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  local_18 = *(undefined4 *)((longlong)param_1 + 8);
  local_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  local_28 = &TFunction_OwnedObject<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = TFunctionRefCaller<``Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>((TSharedPtr<FSoundEffectSubmix,1> *)0x0,0);
  return;
}

// Call @ 146548e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FQuartzMetronome::FireEvents'::__l17::<lambda_1>,void,Audio::Quartz::IMetronomeEventListener_&>
::Call(void *param_1,IMetronomeEventListener *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146548e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_2 + 8))(param_2,param_1);
  return;
}

// Call @ 146548e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,void>
::Call(void *param_1)

{
  ::Audio::FMixerSubmix::InitInternal(*(FMixerSubmix **)param_1);
  return;
}

// Call @ 146548e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,void>::Call(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  ::Audio::FModulationDestination::UpdateModulators
            ((FModulationDestination *)(lVar1 + 0x2b0),
             (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 8));
  ::Audio::FModulationDestination::UpdateModulators
            ((FModulationDestination *)(lVar1 + 0x2d0),
             (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0x58));
  ::Audio::FModulationDestination::UpdateModulators
            ((FModulationDestination *)(lVar1 + 0x2c0),
             (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)((longlong)param_1 + 0xa8));
  return;
}

// Call @ 146548ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  ::Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)param_1 + 0xb8));
  lVar3 = *(longlong *)((longlong)param_1 + 0x10);
  lVar4 = *(longlong *)param_1;
  uVar5 = *(undefined8 *)((longlong)param_1 + 8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar4 + 0x40);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  *(longlong *)(lVar4 + 0x40) = lVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if (((*(FMixerSubmix **)param_1)->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) {
    ::Audio::FMixerSubmix::SetupSoundfieldStreamForParent(*(FMixerSubmix **)param_1);
    return;
  }
  return;
}

// Call @ 146585f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FString FStack_18;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)param_1 + 0x20);
    FStack_18.Data._8_8_ = (longlong)param_1 + 0x30;
    TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&>_>
              ((TSet<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FDecodingSoundSource,1>,0>,FDefaultSetAllocator>
                *)(*(longlong *)param_1 + 0xa0),
               (TPairInitializer<int_const_&,TSharedPtr<Audio::FDecodingSoundSource,1>_const_&> *)
               &stack0x00000008,(bool *)&FStack_18);
    if (5 < (byte)LogAudioMixer._0_1_) {
      ::FName::ToString((FName *)((longlong)param_1 + 0x24),&FStack_18);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146585535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

