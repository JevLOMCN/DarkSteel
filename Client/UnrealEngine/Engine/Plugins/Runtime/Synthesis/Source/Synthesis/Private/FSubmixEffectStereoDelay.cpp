// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// FSubmixEffectStereoDelay @ 14f0b8e90

FSubmixEffectStereoDelay * __thiscall
FSubmixEffectStereoDelay::FSubmixEffectStereoDelay(FSubmixEffectStereoDelay *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  (this->ScratchStereoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchStereoBuffer).ArrayNum = 0;
  (this->ScratchStereoBuffer).ArrayMax = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  *(undefined ***)this = &___7FSubmixEffectStereoDelay__6B_;
  Audio::FDelayStereo::FDelayStereo(&this->DelayStereo);
  return this;
}

// ~FSubmixEffectStereoDelay @ 14f0bf710

void __thiscall FSubmixEffectStereoDelay::~FSubmixEffectStereoDelay(FSubmixEffectStereoDelay *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectStereoDelay__6B_;
  Audio::FDelayStereo::~FDelayStereo(&this->DelayStereo);
  pFVar1 = (this->ScratchStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e5450

void __thiscall
FSubmixEffectStereoDelay::Init(FSubmixEffectStereoDelay *this,FSoundEffectSubmixInitData *param_1)

{
  Audio::FDelayStereo::Init(&this->DelayStereo,param_1->SampleRate,2,__real_40000000);
  return;
}

// OnPresetChanged @ 14f0ef8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSubmixEffectStereoDelay::OnPresetChanged(FSubmixEffectStereoDelay *this)

{
  undefined1 *lpCriticalSection;
  FDelayStereo *this_00;
  int iVar1;
  undefined1 auVar2 [16];
  UObject *pUVar3;
  UClass *pUVar4;
  float fVar5;
  float fVar6;
  Type local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USubmixEffectStereoDelayPreset::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14f0ef90b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14f0ef90b:
  if (pUVar3 == (UObject *)0x0) {
    local_58 = PingPong;
    fStack_54 = (float)___xmm_3ecccccd3e4ccccd3dcccccd43fa0000;
    fStack_50 = (float)((ulonglong)___xmm_3ecccccd3e4ccccd3dcccccd43fa0000 >> 0x20);
    fStack_4c = (float)_UNK_15314dde8;
    fStack_48 = (float)((ulonglong)_UNK_15314dde8 >> 0x20);
    fStack_44 = 1.0;
    uStack_40 = 0;
    fVar6 = 20000.0;
    fVar5 = __real_40000000;
  }
  else {
    lpCriticalSection = &pUVar3[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_58 = *(Type *)&pUVar3[3].field_0x18;
    fStack_54 = *(float *)&pUVar3[3].field_0x1c;
    fStack_50 = *(float *)&pUVar3[3].field_0x20;
    fStack_4c = *(float *)&pUVar3[3].field_0x24;
    fStack_48 = *(float *)(pUVar3 + 4);
    fStack_44 = *(float *)&pUVar3[4].field_0x4;
    uStack_40 = *(undefined4 *)&pUVar3[4].field_0x8;
    fVar6 = *(float *)&pUVar3[4].field_0xc;
    fVar5 = *(float *)&pUVar3[4].field_0x10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  this_00 = &this->DelayStereo;
  Audio::FDelayStereo::SetDelayTimeMsec(this_00,fStack_54);
  Audio::FDelayStereo::SetFeedback(this_00,fStack_50);
  Audio::FDelayStereo::SetWetLevel(this_00,fStack_48);
  Audio::FDelayStereo::SetDelayRatio(this_00,fStack_4c);
  Audio::FDelayStereo::SetMode(this_00,local_58 & 0xff);
  Audio::FDelayStereo::SetDryLevel(this_00,fStack_44);
  Audio::FDelayStereo::SetFilterEnabled(this_00,SUB41(uStack_40,0));
  auVar2._4_4_ = fStack_44;
  auVar2._0_4_ = fStack_48;
  auVar2._8_4_ = uStack_40;
  auVar2._12_4_ = fVar6;
  Audio::FDelayStereo::SetFilterSettings(this_00,auVar2._9_4_ & 0xff,fVar6,fVar5);
  return;
}

// OnProcessAudio @ 14f0f0ea0

void __thiscall
FSubmixEffectStereoDelay::OnProcessAudio
          (FSubmixEffectStereoDelay *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = param_1->NumChannels;
  if (iVar12 < 3) {
    Audio::FDelayStereo::ProcessAudio
              (&this->DelayStereo,(float *)(param_1->AudioBuffer->AllocatorInstance).Data,
               iVar12 * param_1->NumFrames,(float *)(param_2->AudioBuffer->AllocatorInstance).Data);
    return;
  }
  memcpy((param_2->AudioBuffer->AllocatorInstance).Data,
         (param_1->AudioBuffer->AllocatorInstance).Data,(longlong)(iVar12 * param_1->NumFrames) << 2
        );
  pTVar4 = &this->ScratchStereoBuffer;
  piVar1 = &(this->ScratchStereoBuffer).ArrayMax;
  (this->ScratchStereoBuffer).ArrayNum = 0;
  piVar2 = &(this->ScratchStereoBuffer).ArrayNum;
  if ((this->ScratchStereoBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1->NumFrames * 2,&pTVar4->AllocatorInstance,piVar2,piVar1);
  iVar12 = 0;
  pFVar6 = (param_1->AudioBuffer->AllocatorInstance).Data;
  if (0 < param_1->NumFrames) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      uVar5 = *(undefined4 *)(pFVar6 + (longlong)(iVar12 * param_1->NumChannels) * 4);
      uVar9 = 0;
      if ((int)uVar13 < *piVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar11) = uVar5;
      uVar5 = *(undefined4 *)(pFVar6 + (longlong)(iVar12 * param_1->NumChannels) * 4 + 4);
      uVar9 = 0;
      if ((int)(uVar13 + 1) < *piVar2) {
        uVar9 = ~(uVar13 + 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 + 2;
      *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar11 + 4) = uVar5;
      lVar11 = lVar11 + 8;
    } while (iVar12 < param_1->NumFrames);
  }
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  Audio::FDelayStereo::ProcessAudio
            (&this->DelayStereo,(float *)pFVar6,(this->ScratchStereoBuffer).ArrayNum,(float *)pFVar6
            );
  iVar12 = 0;
  pFVar6 = (param_2->AudioBuffer->AllocatorInstance).Data;
  if (0 < param_1->NumFrames) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      iVar10 = param_1->NumChannels;
      uVar9 = 0;
      if ((int)uVar13 < *piVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(pFVar6 + (longlong)(iVar12 * iVar10) * 4) =
           *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar11);
      iVar10 = iVar12 * param_1->NumChannels;
      uVar9 = 0;
      if ((int)(uVar13 + 1) < *piVar2) {
        uVar9 = ~(uVar13 + 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 + 2;
      lVar3 = lVar11 + 4;
      lVar11 = lVar11 + 8;
      *(undefined4 *)(pFVar6 + (longlong)iVar10 * 4 + 4) =
           *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar3);
    } while (iVar12 < param_1->NumFrames);
  }
  return;
}

