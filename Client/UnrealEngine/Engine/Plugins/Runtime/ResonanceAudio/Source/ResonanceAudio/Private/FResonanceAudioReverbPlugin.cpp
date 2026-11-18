// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// FResonanceAudioReverbPlugin @ 14f043f90

FResonanceAudioReverbPlugin * __thiscall
FResonanceAudioReverbPlugin::FResonanceAudioReverbPlugin(FResonanceAudioReverbPlugin *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FResonanceAudioReverbPlugin__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->ResonanceAudioReverb = (FResonanceAudioReverb *)0x0;
  return this;
}

// GetDesiredInputChannelCountOverride @ 14f048540

uint __thiscall
FResonanceAudioReverbPlugin::GetDesiredInputChannelCountOverride(FResonanceAudioReverbPlugin *this)

{
  return 2;
}

// Init @ 14f049340

void __thiscall
FResonanceAudioReverbPlugin::Init
          (FResonanceAudioReverbPlugin *this,FSoundEffectSubmixInitData *param_1)

{
  return;
}

// OnPresetChanged @ 14f04b1a0

void __thiscall FResonanceAudioReverbPlugin::OnPresetChanged(FResonanceAudioReverbPlugin *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined1 *lpCriticalSection;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UResonanceAudioReverbPluginPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lpCriticalSection = &pUVar2[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (this->ResonanceAudioReverb != (FResonanceAudioReverb *)0x0) {
    ResonanceAudio::FResonanceAudioReverb::UpdateRoomEffects(this->ResonanceAudioReverb);
  }
  return;
}

// OnProcessAudio @ 14f04b230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FResonanceAudioReverbPlugin::OnProcessAudio
          (FResonanceAudioReverbPlugin *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FResonanceAudioReverb *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  
  this_00 = this->ResonanceAudioReverb;
  if (this_00 == (FResonanceAudioReverb *)0x0) {
    return;
  }
  if ((this_00->ResonanceAudioModule != (FResonanceAudioModule *)0x0) &&
     (this_00->ResonanceAudioApi != (ResonanceAudioApi *)0x0)) {
    ResonanceAudio::FResonanceAudioReverb::UpdateRoomEffects(this_00);
    iVar14 = param_2->NumChannels;
    if (iVar14 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00014f04bbb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*this_00->ResonanceAudioApi + 0x10))
                (this_00->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                 (param_2->AudioBuffer->AllocatorInstance).Data);
      return;
    }
    if (iVar14 < 3) {
      if (iVar14 == 1) {
        if (2 < (byte)LogResonanceAudio._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
        }
        pTVar1 = &this_00->TemporaryStereoBuffer;
        (this_00->TemporaryStereoBuffer).ArrayNum = 0;
        if ((this_00->TemporaryStereoBuffer).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar1->AllocatorInstance,0,&(this_00->TemporaryStereoBuffer).ArrayMax);
        }
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar1,param_1->NumFrames * 2);
        (**(code **)((longlong)*this_00->ResonanceAudioApi + 0x10))
                  (this_00->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                   (pTVar1->AllocatorInstance).Data);
        fVar7 = __real_3f000000;
        iVar14 = 0;
        pFVar13 = (param_2->AudioBuffer->AllocatorInstance).Data;
        if (0 < param_1->NumFrames) {
          uVar10 = 0;
          lVar12 = 0;
          do {
            uVar9 = 0;
            if ((int)(uVar10 + 1) < (this_00->TemporaryStereoBuffer).ArrayNum) {
              uVar9 = ~(uVar10 + 1) >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            uVar9 = 0;
            if ((int)uVar10 < (this_00->TemporaryStereoBuffer).ArrayNum) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar14 = iVar14 + 1;
            uVar10 = uVar10 + 2;
            pFVar2 = (pTVar1->AllocatorInstance).Data + lVar12;
            lVar11 = lVar12 + 4;
            lVar12 = lVar12 + 8;
            *(float *)pFVar13 = (*(float *)pFVar2 + *(float *)(pFVar4 + lVar11)) * fVar7;
            pFVar13 = pFVar13 + 4;
          } while (iVar14 < param_1->NumFrames);
        }
      }
    }
    else {
      pTVar1 = &this_00->TemporaryStereoBuffer;
      (this_00->TemporaryStereoBuffer).ArrayNum = 0;
      if ((this_00->TemporaryStereoBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,&(this_00->TemporaryStereoBuffer).ArrayMax);
      }
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar1,param_1->NumFrames * 2);
      (**(code **)((longlong)*this_00->ResonanceAudioApi + 0x10))
                (this_00->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                 (pTVar1->AllocatorInstance).Data);
      iVar14 = 0;
      pFVar13 = (param_2->AudioBuffer->AllocatorInstance).Data;
      if (0 < param_1->NumFrames) {
        uVar10 = 0;
        lVar12 = 0;
        do {
          iVar3 = param_2->NumChannels;
          uVar9 = 0;
          if ((int)uVar10 < (this_00->TemporaryStereoBuffer).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = (longlong)(iVar14 * iVar3);
          *(undefined4 *)(pFVar13 + lVar11 * 4) =
               *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar12);
          uVar9 = 0;
          if ((int)(uVar10 + 1) < (this_00->TemporaryStereoBuffer).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = iVar14 + 1;
          uVar10 = uVar10 + 2;
          lVar6 = lVar12 + 4;
          lVar12 = lVar12 + 8;
          *(undefined4 *)(pFVar13 + lVar11 * 4 + 4) =
               *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar6);
        } while (iVar14 < param_1->NumFrames);
      }
    }
  }
  return;
}

// SetResonanceAudioReverbPlugin @ 14f04c8e0

void __thiscall
FResonanceAudioReverbPlugin::SetResonanceAudioReverbPlugin
          (FResonanceAudioReverbPlugin *this,FResonanceAudioReverb *param_1)

{
  this->ResonanceAudioReverb = param_1;
  return;
}

