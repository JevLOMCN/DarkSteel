// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 37

// FMonoWaveTable @ 14f0b73e0

FMonoWaveTable * __thiscall Audio::FMonoWaveTable::FMonoWaveTable(FMonoWaveTable *this)

{
  this->LPFBaseFreqHz = 1000.0;
  this->NewAmpSustain = 0.0;
  this->LastAmpSustain = 0.0;
  (this->WaveTableMatrix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTableMatrix).ArrayNum = 0;
  (this->WaveTableMatrix).ArrayMax = 0;
  (this->WaveTableLookupOutput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTableLookupOutput).ArrayNum = 0;
  (this->WaveTableLookupOutput).ArrayMax = 0;
  FLFO::FLFO(&this->PosLfo);
  FEnvelope::FEnvelope(&this->AmpEnv);
  FEnvelope::FEnvelope(&this->LPFEnv);
  FEnvelope::FEnvelope(&this->PosEnv);
  FLadderFilter::FLadderFilter(&this->LPF);
  (this->NoteStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoteStack).ArrayNum = 0;
  (this->NoteStack).ArrayMax = 0;
  return this;
}

// ~FMonoWaveTable @ 14f0bef10

void __thiscall Audio::FMonoWaveTable::~FMonoWaveTable(FMonoWaveTable *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NoteStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLadderFilter::~FLadderFilter(&this->LPF);
  FEnvelope::~FEnvelope(&this->PosEnv);
  FEnvelope::~FEnvelope(&this->LPFEnv);
  FEnvelope::~FEnvelope(&this->AmpEnv);
  FLFO::~FLFO(&this->PosLfo);
  pFVar1 = (this->WaveTableLookupOutput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::TSampleBuffer<float>,int>
            ((TSampleBuffer<float> *)(this->WaveTableMatrix).AllocatorInstance.Data,
             (this->WaveTableMatrix).ArrayNum);
  pFVar1 = (this->WaveTableMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetMonoSynthOutput @ 14f0d9da0

float __thiscall Audio::FMonoWaveTable::GetMonoSynthOutput(FMonoWaveTable *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  uVar5 = (this->WaveTableMatrix).ArrayNum;
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar7 = param_1 * (float)(int)(uVar5 - 1);
  uVar6 = (int)ROUND((fVar7 + fVar7) - __real_3f000000) >> 1;
  uVar3 = 0;
  if (uVar6 + 1 != uVar5) {
    uVar3 = uVar6 + 1;
  }
  fVar7 = FGenericPlatformMath::Fmod(fVar7,__real_3f800000);
  uVar5 = 0;
  if ((int)uVar6 < (this->WaveTableLookupOutput).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  fVar1 = *(float *)((this->WaveTableLookupOutput).AllocatorInstance.Data + (longlong)(int)uVar6 * 4
                    );
  uVar5 = 0;
  if ((int)uVar3 < (this->WaveTableLookupOutput).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return (*(float *)((this->WaveTableLookupOutput).AllocatorInstance.Data + (longlong)(int)uVar3 * 4
                    ) - fVar1) * fVar7 + fVar1;
}

// Init @ 14f0e3100

void __thiscall
Audio::FMonoWaveTable::Init(FMonoWaveTable *this,int *param_1,int param_2,float param_3)

{
  int *piVar1;
  FEnvelope *pFVar2;
  undefined1 *puVar3;
  FLadderFilter *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  iVar11 = *param_1;
  iVar12 = 0;
  this->WaveTableResolution = param_3;
  local_78 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  this->OutputSampleRate = (float)iVar11;
  local_70 = 0;
  uStack_68 = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  DestructItems<Audio::TSampleBuffer<float>,int>
            ((TSampleBuffer<float> *)(this->WaveTableMatrix).AllocatorInstance.Data,
             (this->WaveTableMatrix).ArrayNum);
  piVar1 = &(this->WaveTableMatrix).ArrayMax;
  (this->WaveTableMatrix).ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_2,&(this->WaveTableMatrix).AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar5 = (this->WaveTableMatrix).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)*piVar1 * 0x28)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->WaveTableMatrix).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&(this->WaveTableMatrix).AllocatorInstance,piVar1);
      }
      (this->WaveTableMatrix).ArrayNum = iVar11 + 1;
      pFVar5 = (this->WaveTableMatrix).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x28) = 0;
      pFVar5 = pFVar5 + (longlong)iVar11 * 0x28;
      *(undefined4 *)&pFVar5[8].field_0x0 = 0;
      *(undefined4 *)(pFVar5 + 0xc) = 0;
      *(int *)&pFVar5[0x10].field_0x0 = (int)uStack_68;
      *(undefined4 *)(pFVar5 + 0x14) = uStack_68._4_4_;
      *(undefined4 *)&pFVar5[0x18].field_0x0 = (undefined4)local_60;
      *(undefined4 *)(pFVar5 + 0x1c) = local_60._4_4_;
      *(undefined4 *)&pFVar5[0x20].field_0x0 = local_58;
      if ((int)uStack_68 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uStack_68 & 0xffffffff);
      }
      if ((0 < (int)uStack_68) && ((int)uStack_68 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)uStack_68,(ForAnyElementType *)pFVar5,0,(int *)(pFVar5 + 0xc));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,*(int *)&pFVar5[0x10].field_0x0,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 8)
                 ,(int *)(pFVar5 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar5->field_0x0,local_78,
             (longlong)*(int *)&pFVar5[0x10].field_0x0 << 2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_2);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (this->bInitialized == 0) {
    lVar6 = (this->PosLfo)._padding_;
    this->WaveTablePosition = 0.5;
    this->LastWaveTablePosition = 0.5;
    this->FrequencyInHz = 220.0;
    this->Phase = 0.0;
    (**(code **)(lVar6 + 8))(&this->PosLfo,this->OutputSampleRate,0,0,1);
    FLFO::SetBipolar(&this->PosLfo,false);
    FLFO::SetType(&this->PosLfo,Sine);
    IOscBase::SetFrequency((IOscBase *)&this->PosLfo,0.0);
    *(undefined4 *)&(this->PosLfo)._padding_ = 0;
    (**(code **)((this->PosLfo)._padding_ + 0x10))(&this->PosLfo);
    uVar8 = __real_3f800000;
    pFVar2 = &this->AmpEnv;
    (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,__real_3f800000);
    (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,uVar8);
    uVar9 = __real_457a0000;
    (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,__real_457a0000);
    (**(code **)(pFVar2->_padding_ + 0x90))(pFVar2,uVar8);
    (this->AmpEnv).bIsLegatoMode = '\x01';
    (this->AmpEnv).bIsRetriggerMode = '\x01';
    pFVar2 = &this->LPFEnv;
    (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,uVar8);
    (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,uVar8);
    (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,uVar9);
    (**(code **)(pFVar2->_padding_ + 0x90))(pFVar2,uVar8);
    (this->LPFEnv).bIsLegatoMode = '\x01';
    (this->LPFEnv).bIsRetriggerMode = '\x01';
    pFVar4 = &this->LPF;
    lVar6 = pFVar4->_padding_;
    this->LPFBaseFreqHz = 1000.0;
    this->LPFMaxModOffsetOctaves = 9.0;
    this->LPFCeilingHz = 8000.0;
    this->LastLPFFreqHz = 1000.0;
    (**(code **)(lVar6 + 8))(pFVar4,this->OutputSampleRate,1,0,0);
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,this->LPFBaseFreqHz);
    (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,__real_40400000);
    this->bInitialized = '\x01';
    this->PitchOffsetCents = 0.0;
  }
  return;
}

// NoteOff @ 14f0e85e0

void __thiscall Audio::FMonoWaveTable::NoteOff(FMonoWaveTable *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float local_res10 [2];
  ulonglong uVar7;
  
  pFVar1 = (this->NoteStack).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if (((pFVar1 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)(this->NoteStack).ArrayMax * 4))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (this->NoteStack).ArrayNum;
  if (iVar9 != 0) {
    pFVar1 = (this->NoteStack).AllocatorInstance.Data;
    uVar4 = 0;
    bVar3 = local_res10[0] != *(float *)pFVar1;
    uVar7 = uVar4;
    uVar10 = uVar4;
    fVar11 = local_res10[0];
    do {
      uVar5 = (uint)uVar7;
      uVar6 = uVar5;
      do {
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 + 1;
        if ((longlong)iVar9 <= (longlong)uVar4) break;
      } while (bVar3 == (fVar11 != *(float *)(pFVar1 + uVar4 * 4)));
      if (bVar3 != false) {
        uVar8 = (uint)uVar10;
        if (uVar8 != uVar5) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 4,pFVar1 + (longlong)(int)uVar5 * 4,
                  (longlong)(int)(uVar6 - uVar5) << 2);
          fVar11 = local_res10[0];
        }
        uVar10 = (ulonglong)(uVar8 + (uVar6 - uVar5));
      }
      bVar3 = (bool)(bVar3 ^ 1);
      uVar7 = (ulonglong)uVar6;
    } while ((longlong)uVar4 < (longlong)iVar9);
    iVar9 = (int)uVar10;
    (this->NoteStack).ArrayNum = iVar9;
    if (iVar9 != 0) {
      uVar6 = 0;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar6 = ~(iVar9 - 1U) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->FrequencyInHz =
           *(float *)((this->NoteStack).AllocatorInstance.Data +
                     (longlong)(this->NoteStack).ArrayNum * 4 + -4);
      return;
    }
  }
  if (this->bIsSustainPedalPressed == '\0') {
    (**(code **)((this->AmpEnv)._padding_ + 0x20))();
    (**(code **)((this->LPFEnv)._padding_ + 0x20))();
  }
  return;
}

// NoteOn @ 14f0e8f30

void __thiscall Audio::FMonoWaveTable::NoteOn(FMonoWaveTable *this,float param_1,float param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  if (param_2 < __real_322bcc77) {
    NoteOff(this,param_1);
    return;
  }
  pTVar2 = &this->NoteStack;
  this->FrequencyInHz = param_1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->NoteStack).ArrayMax * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->NoteStack).ArrayNum;
  piVar1 = &(this->NoteStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NoteStack).ArrayNum = iVar6 + 1;
  *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
  (**(code **)((this->AmpEnv)._padding_ + 0x18))(&this->AmpEnv,param_2);
  (**(code **)((this->LPFEnv)._padding_ + 0x10))();
  this->bIsPlaying = '\x01';
  return;
}

// OnGenerateAudio @ 14f0e94a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FMonoWaveTable::OnGenerateAudio(FMonoWaveTable *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FLFO *pFVar15;
  TSampleBuffer<float> *this_00;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  FLadderFilter *pFVar19;
  FEnvelope *pFVar20;
  uint uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res20 [2];
  float local_108;
  float local_104;
  longlong local_100;
  TArray<float,TSizedDefaultAllocator<32>_> local_f8 [11];
  ulonglong uVar22;
  
  iVar12 = (this->WaveTableMatrix).ArrayNum;
  if (iVar12 == 0) {
    return 0;
  }
  uVar22 = 0;
  uVar21 = 0;
  uVar14 = uVar22;
  uVar16 = uVar22;
  uVar18 = uVar22;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar13 < (this->WaveTableMatrix).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
      if (*(int *)((this->WaveTableMatrix).AllocatorInstance.Data + uVar18 + 0x14) == 0) {
        return 0;
      }
      uVar16 = uVar16 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar18 = uVar18 + 0x28;
    } while ((longlong)uVar16 < (longlong)iVar12);
  }
  fVar1 = __real_40000000;
  fVar7 = __real_3f800000;
  fVar26 = this->PitchOffsetCents * __real_3c23d70a;
  fVar28 = __real_3f800000;
  if (fVar26 != 0.0) {
    fVar28 = powf(__real_40000000,fVar26 * __real_3daaaaab);
  }
  fVar26 = __real_322bcc77;
  fVar28 = fVar28 * this->FrequencyInHz;
  if ((fVar28 < __real_322bcc77) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetFrequency >= (1.e-8f)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\MonoWaveTable.cpp"
                         ,0x8c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar12 = (*pcVar6)();
    return iVar12;
  }
  fVar28 = this->OutputSampleRate / fVar28;
  if ((fVar28 < fVar26) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPeriod >= (1.e-8f)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\MonoWaveTable.cpp"
                         ,0x8f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar12 = (*pcVar6)();
    return iVar12;
  }
  fVar26 = this->WaveTableResolution;
  fVar23 = (float)(**(code **)((this->LPFEnv)._padding_ + 0x50))(&this->LPFEnv,0);
  local_104 = powf(fVar1,fVar23 * this->LPFMaxModOffsetOctaves);
  fVar8 = __real_3f000000;
  fVar1 = this->NewAmpSustain;
  local_104 = local_104 * this->LPFBaseFreqHz;
  fVar23 = this->WaveTablePosition;
  if (this->LPFCeilingHz <= local_104) {
    local_104 = this->LPFCeilingHz;
  }
  fVar2 = this->LastAmpSustain;
  fVar3 = this->LastWaveTablePosition;
  if (local_104 <= 0.0) {
    local_104 = 0.0;
  }
  fVar27 = fVar7 / (float)param_2;
  fVar30 = local_104 - this->LastLPFFreqHz;
  if (0 < param_2) {
    local_100 = 0;
    do {
      pFVar15 = &this->PosLfo;
      pFVar19 = &this->LPF;
      lVar5 = pFVar19->_padding_;
      this->LastLPFFreqHz = fVar30 * fVar27 + this->LastLPFFreqHz;
      (**(code **)(lVar5 + 0x10))(pFVar19);
      (**(code **)(pFVar19->_padding_ + 0x58))(pFVar19);
      (**(code **)((this->LPFEnv)._padding_ + 0x50))(&this->LPFEnv,0);
      (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      lVar5 = pFVar15->_padding_;
      fVar29 = (fVar23 - fVar3) * fVar27 + this->LastWaveTablePosition;
      this->LastWaveTablePosition = fVar29;
      fVar24 = (float)(**(code **)(lVar5 + 0x20))(pFVar15,0);
      iVar12 = (this->WaveTableMatrix).ArrayNum;
      fVar25 = this->Phase;
      fVar24 = fVar24 + fVar29;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->WaveTableLookupOutput,iVar12,Default);
      local_f8[0].ArrayNum = 0;
      local_f8[0].ArrayMax = 0;
      local_f8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar14 = uVar22;
      uVar16 = uVar22;
      uVar18 = uVar22;
      if (0 < iVar12) {
        do {
          uVar13 = (uint)uVar14;
          uVar11 = uVar21;
          if ((int)uVar13 < (this->WaveTableMatrix).ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          this_00 = (TSampleBuffer<float> *)
                    ((this->WaveTableMatrix).AllocatorInstance.Data + uVar16);
          fVar25 = FGenericPlatformMath::Fmod(fVar25,(float)this_00->NumFrames);
          TSampleBuffer<float>::GetAudioFrameAtFractionalIndexInternal(this_00,fVar25,local_f8);
          if ((local_f8[0].ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          uVar4 = *(undefined4 *)local_f8[0].AllocatorInstance.Data;
          uVar11 = uVar21;
          if ((int)uVar13 < (this->WaveTableLookupOutput).ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          *(undefined4 *)((this->WaveTableLookupOutput).AllocatorInstance.Data + uVar18 * 4) = uVar4
          ;
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar16 = uVar16 + 0x28;
          uVar18 = uVar18 + 1;
        } while ((int)(uVar13 + 1) < iVar12);
      }
      pFVar20 = &this->AmpEnv;
      if (local_f8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8[0].AllocatorInstance.Data);
      }
      uVar11 = (this->WaveTableMatrix).ArrayNum;
      if (fVar7 <= fVar24) {
        fVar24 = fVar7;
      }
      this->Phase = fVar25;
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar25 = (float)(int)(uVar11 - 1);
      uVar17 = (int)ROUND((fVar24 + fVar24) * fVar25 - fVar8) >> 1;
      uVar13 = uVar21;
      if (uVar17 + 1 != uVar11) {
        uVar13 = uVar17 + 1;
      }
      fVar25 = FGenericPlatformMath::Fmod(fVar25 * fVar24,fVar7);
      uVar11 = uVar21;
      if ((int)uVar17 < (this->WaveTableLookupOutput).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
      fVar24 = *(float *)((this->WaveTableLookupOutput).AllocatorInstance.Data +
                         (longlong)(int)uVar17 * 4);
      uVar11 = uVar21;
      if ((int)uVar13 < (this->WaveTableLookupOutput).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
      local_res20[0] =
           (*(float *)((this->WaveTableLookupOutput).AllocatorInstance.Data +
                      (longlong)(int)uVar13 * 4) - fVar24) * fVar25 + fVar24;
      (**(code **)((this->LPF)._padding_ + 0x60))(&this->LPF,local_res20,&local_108);
      lVar5 = pFVar20->_padding_;
      this->LastAmpSustain = (fVar1 - fVar2) * fVar27 + this->LastAmpSustain;
      (**(code **)(lVar5 + 0x70))(pFVar20);
      fVar25 = (float)(**(code **)(pFVar20->_padding_ + 0x50))(pFVar20);
      param_1[local_100] = fVar25 * local_108;
      local_100 = local_100 + 1;
      this->Phase = fVar26 / fVar28 + this->Phase;
    } while (local_100 < param_2);
  }
  fVar7 = local_104;
  cVar10 = (**(code **)((this->AmpEnv)._padding_ + 0x38))(&this->AmpEnv);
  if (cVar10 == '\0') {
    uVar22 = 2;
  }
  this->bIsPlaying = '\0';
  this->field_0x708 = this->field_0x708 | (byte)uVar22;
  this->LastWaveTablePosition = this->WaveTablePosition;
  this->LastLPFFreqHz = fVar7;
  this->LastAmpSustain = this->NewAmpSustain;
  return param_2;
}

// SetAmpEnvelopeAttackTime @ 14f0f8b90

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeAttackTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0f8ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x60))(&this->AmpEnv,param_1);
  return;
}

// SetAmpEnvelopeBiasDepth @ 14f0f8c00

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeBiasDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0f8c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x98))();
  return;
}

// SetAmpEnvelopeBiasInvert @ 14f0f8c70

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeBiasInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0f8c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x88))();
  return;
}

// SetAmpEnvelopeDecayTime @ 14f0f8cf0

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeDecayTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0f8d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x68))(&this->AmpEnv,param_1);
  return;
}

// SetAmpEnvelopeDepth @ 14f0f8d60

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0f8d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x90))();
  return;
}

// SetAmpEnvelopeInvert @ 14f0f8dd0

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0f8de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x78))();
  return;
}

// SetAmpEnvelopeReleaseTime @ 14f0f8e50

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeReleaseTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0f8e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->AmpEnv)._padding_ + 0x78))(&this->AmpEnv,param_1);
  return;
}

// SetAmpEnvelopeSustainGain @ 14f0f8ec0

void __thiscall Audio::FMonoWaveTable::SetAmpEnvelopeSustainGain(FMonoWaveTable *this,float param_1)

{
  this->NewAmpSustain = param_1;
  return;
}

// SetFilterEnvelopeAttackTime @ 14f0fb580

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopeAttackTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0fb592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x60))(&this->LPFEnv,param_1);
  return;
}

// SetFilterEnvelopeBiasDepth @ 14f0fb5f0

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopeBiasDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fb5fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x98))();
  return;
}

// SetFilterEnvelopeBiasInvert @ 14f0fb660

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopeBiasInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fb66a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x88))();
  return;
}

// SetFilterEnvelopeDepth @ 14f0fb6e0

void __thiscall Audio::FMonoWaveTable::SetFilterEnvelopeDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fb6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x90))();
  return;
}

// SetFilterEnvelopeInvert @ 14f0fb750

void __thiscall Audio::FMonoWaveTable::SetFilterEnvelopeInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fb75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x80))();
  return;
}

// SetFilterEnvelopeReleaseTime @ 14f0fb7d0

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopeReleaseTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0fb7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x78))(&this->LPFEnv,param_1);
  return;
}

// SetFilterEnvelopeSustainGain @ 14f0fb840

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopeSustainGain(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fb84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x70))();
  return;
}

// SetFilterEnvelopenDecayTime @ 14f0fb8b0

void __thiscall
Audio::FMonoWaveTable::SetFilterEnvelopenDecayTime(FMonoWaveTable *this,float param_1)

{
  if (param_1 <= __real_40800000) {
    param_1 = __real_40800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0fb8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LPFEnv)._padding_ + 0x68))(&this->LPFEnv,param_1);
  return;
}

// SetPosLFODepth @ 14f0ffea0

void __thiscall Audio::FMonoWaveTable::SetPosLFODepth(FMonoWaveTable *this,float param_1)

{
  *(float *)&(this->PosLfo)._padding_ = param_1;
  return;
}

// SetPosLFOFrequency @ 14f0ffeb0

void __thiscall Audio::FMonoWaveTable::SetPosLFOFrequency(FMonoWaveTable *this,float param_1)

{
  IOscBase::SetFrequency((IOscBase *)&this->PosLfo,param_1);
  return;
}

// SetPosLFOType @ 14f0ffec0

void __thiscall Audio::FMonoWaveTable::SetPosLFOType(FMonoWaveTable *this,Type param_1)

{
  FLFO::SetType(&this->PosLfo,param_1);
  return;
}

// SetPositionEnvelopeAttackTime @ 14f0fffd0

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeAttackTime(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0fffda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x60))();
  return;
}

// SetPositionEnvelopeBiasDepth @ 14f100040

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeBiasDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f10004a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x98))();
  return;
}

// SetPositionEnvelopeBiasInvert @ 14f1000b0

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeBiasInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f1000ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x88))();
  return;
}

// SetPositionEnvelopeDecayTime @ 14f100130

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeDecayTime(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f10013a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x68))();
  return;
}

// SetPositionEnvelopeDepth @ 14f1001a0

void __thiscall Audio::FMonoWaveTable::SetPositionEnvelopeDepth(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f1001aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x90))();
  return;
}

// SetPositionEnvelopeInvert @ 14f100210

void __thiscall Audio::FMonoWaveTable::SetPositionEnvelopeInvert(FMonoWaveTable *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f10021a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x80))();
  return;
}

// SetPositionEnvelopeReleaseTime @ 14f100290

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeReleaseTime(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f10029a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x78))();
  return;
}

// SetPositionEnvelopeSustainGain @ 14f100300

void __thiscall
Audio::FMonoWaveTable::SetPositionEnvelopeSustainGain(FMonoWaveTable *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f10030a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PosEnv)._padding_ + 0x70))();
  return;
}

// SetSustainPedalPressed @ 14f1027b0

void __thiscall Audio::FMonoWaveTable::SetSustainPedalPressed(FMonoWaveTable *this,bool param_1)

{
  if ((!param_1) && ((this->NoteStack).ArrayNum == 0)) {
    (**(code **)((this->AmpEnv)._padding_ + 0x20))();
    (**(code **)((this->LPFEnv)._padding_ + 0x20))();
  }
  this->bIsSustainPedalPressed = '\0';
  this->field_0x708 = this->field_0x708 | param_1 << 2;
  return;
}

// UpdateWaveTable @ 14f1099e0

void __thiscall
Audio::FMonoWaveTable::UpdateWaveTable
          (FMonoWaveTable *this,int param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  TSampleBuffer<float> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TSampleBuffer<float> local_48;
  
  if ((this->WaveTableMatrix).ArrayNum < param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index <= WaveTableMatrix.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\MonoWaveTable.cpp"
                       ,0x4b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->WaveTableMatrix).ArrayNum;
  if (param_1 == iVar8) {
    uVar10 = param_1 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar8) {
      uVar7 = ~uVar10 >> 0x1f;
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
    TSampleBuffer<float>::TSampleBuffer<float>
              (&local_48,
               (TSampleBuffer<float> *)
               ((this->WaveTableMatrix).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28));
    pTVar4 = (TSampleBuffer<float> *)(this->WaveTableMatrix).AllocatorInstance.Data;
    if ((pTVar4 <= &local_48) && (&local_48 < pTVar4 + (this->WaveTableMatrix).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->WaveTableMatrix).ArrayNum;
    piVar1 = &(this->WaveTableMatrix).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->WaveTableMatrix).AllocatorInstance,piVar1);
    }
    (this->WaveTableMatrix).ArrayNum = iVar8 + 1;
    TSampleBuffer<float>::TSampleBuffer<float>
              ((TSampleBuffer<float> *)
               ((this->WaveTableMatrix).AllocatorInstance.Data + (longlong)iVar8 * 0x28),&local_48);
    if (local_48.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.RawPCMData.AllocatorInstance.Data);
    }
  }
  uVar7 = 0;
  if (param_1 < (this->WaveTableMatrix).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
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
  uVar7 = param_2->ArrayNum;
  pFVar2 = (this->WaveTableMatrix).AllocatorInstance.Data + (longlong)param_1 * 0x28;
  fVar3 = this->OutputSampleRate;
  *(uint *)&pFVar2[0x10].field_0x0 = uVar7;
  *(uint *)(pFVar2 + 0x14) = uVar7;
  *(undefined4 *)&pFVar2[0x18].field_0x0 = 1;
  *(int *)(pFVar2 + 0x1c) = (int)fVar3;
  *(float *)&pFVar2[0x20].field_0x0 = (float)(int)uVar7 / (float)(int)fVar3;
  if (-1 < (int)uVar7) {
    iVar8 = *(int *)(pFVar2 + 0xc);
    *(int *)&pFVar2[8].field_0x0 = 0;
    if (iVar8 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,(ForAnyElementType *)pFVar2,0,(int *)(pFVar2 + 0xc));
    }
    iVar8 = *(int *)&pFVar2[0x10].field_0x0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,(ForAnyElementType *)pFVar2,(int *)(pFVar2 + 8),
                       (int *)(pFVar2 + 0xc));
    memset(*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar9 * 4,0,
           (longlong)iVar8 << 2);
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,(param_2->AllocatorInstance).Data,
           (longlong)*(int *)&pFVar2[0x10].field_0x0 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// UpdateWaveTableLookupOutput @ 14f109ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

float __thiscall
Audio::FMonoWaveTable::UpdateWaveTableLookupOutput(FMonoWaveTable *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSampleBuffer<float> *this_00;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  TArray<float,TSizedDefaultAllocator<32>_> local_58 [3];
  
  iVar2 = (this->WaveTableMatrix).ArrayNum;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->WaveTableLookupOutput,iVar2,Default);
  uVar7 = 0;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < iVar2) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->WaveTableMatrix).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      this_00 = (TSampleBuffer<float> *)((this->WaveTableMatrix).AllocatorInstance.Data + uVar9);
      param_1 = FGenericPlatformMath::Fmod(param_1,(float)this_00->NumFrames);
      TSampleBuffer<float>::GetAudioFrameAtFractionalIndexInternal(this_00,param_1,local_58);
      if ((local_58[0].ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      uVar1 = *(undefined4 *)local_58[0].AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (this->WaveTableLookupOutput).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined4 *)((this->WaveTableLookupOutput).AllocatorInstance.Data + uVar8 * 4) = uVar1;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 0x28;
    } while ((longlong)uVar8 < (longlong)iVar2);
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return param_1;
}

