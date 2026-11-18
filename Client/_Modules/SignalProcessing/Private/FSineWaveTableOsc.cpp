// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// FSineWaveTableOsc @ 1444f2550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSineWaveTableOsc * __thiscall Audio::FSineWaveTableOsc::FSineWaveTableOsc(FSineWaveTableOsc *this)

{
  ulonglong uVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FSineWaveTableOsc_Audio__6B_;
  iVar3 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      SineWaveTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      SineWaveTable.ArrayNum = 0;
      SineWaveTable.ArrayMax = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x1000,&SineWaveTable.AllocatorInstance,&SineWaveTable.ArrayNum,
                 &SineWaveTable.ArrayMax);
      FVar2 = SineWaveTable.AllocatorInstance;
      do {
        __vdecl_sinf4();
        iVar3 = iVar3 + 4;
        *(undefined8 *)FVar2.Data = extraout_XMM0_Qa;
        *(undefined8 *)(FVar2.Data + 8) = extraout_XMM0_Qb;
        FVar2.Data = FVar2.Data + 0x10;
      } while (iVar3 < 0x1000);
      atexit(`Audio::FSineWaveTableOsc::GetWaveTable'::__l2::
             _dynamic_atexit_destructor_for__SineWaveTable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->PhaseIncrement = 0.0;
  this->InitialPhase = 0.0;
  this->InstantaneousPhase = 0.0;
  this->WaveTableBuffer = &SineWaveTable;
  this->SampleRate = 48000.0;
  this->ReadIndex = 0.0;
  this->FrequencyHz = 440.0;
  this->PhaseIncrement = (float)SineWaveTable.ArrayNum * ___real_3c162fc9;
  return this;
}

// ~FSineWaveTableOsc @ 1444f4650

void __thiscall Audio::FSineWaveTableOsc::~FSineWaveTableOsc(FSineWaveTableOsc *this)

{
  this->_padding_ = (longlong)&___7FSineWaveTableOsc_Audio__6B_;
  return;
}

// Generate @ 1444fd7e0

void __thiscall
Audio::FSineWaveTableOsc::Generate(FSineWaveTableOsc *this,float *param_1,int param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar17 = this->InstantaneousPhase;
  fVar16 = 0.0;
  bVar6 = __real_322bcc77 <
          (float)((uint)(this->InitialPhase - fVar17) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar7 = (float)(param_2 / 2);
  if ((float)(param_2 / 2) <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  if (bVar6) {
    fVar16 = fVar17 - this->InitialPhase;
    this->InitialPhase = fVar17;
    fVar16 = (fVar16 + fVar16) / (float)param_2;
  }
  iVar15 = 0;
  if (0 < param_2) {
    do {
      pTVar1 = this->WaveTableBuffer;
      uVar11 = (uint)this->ReadIndex;
      iVar13 = pTVar1->ArrayNum;
      uVar12 = iVar13 - 1U;
      if ((int)uVar11 < (int)(iVar13 - 1U)) {
        uVar12 = uVar11;
      }
      uVar11 = 0;
      if (0 < (int)uVar12) {
        uVar11 = uVar12;
      }
      uVar14 = (int)(uVar11 + 1) % iVar13;
      fVar17 = this->ReadIndex - (float)(int)uVar11;
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if (fVar8 <= fVar17) {
        fVar17 = fVar8;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = this->WaveTableBuffer;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar11 < pTVar2->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *param_1 = (*(float *)(pFVar3 + (longlong)(int)uVar14 * 4) -
                 *(float *)(pFVar4 + (longlong)(int)uVar11 * 4)) * fVar17 +
                 *(float *)(pFVar4 + (longlong)(int)uVar11 * 4);
      fVar17 = this->PhaseIncrement;
      if (bVar6) {
        fVar17 = (float)((uint)((float)((uint)(fVar8 - (float)iVar15 / fVar7) & uVar9) - fVar8) &
                        uVar9) * fVar16 + fVar17;
      }
      fVar17 = this->ReadIndex + fVar17;
      this->ReadIndex = fVar17;
      iVar13 = this->WaveTableBuffer->ArrayNum;
      if ((float)iVar13 <= fVar17) {
        do {
          fVar17 = fVar17 - (float)iVar13;
          this->ReadIndex = fVar17;
          iVar13 = this->WaveTableBuffer->ArrayNum;
        } while ((float)iVar13 <= fVar17);
      }
      iVar15 = iVar15 + 1;
      param_1 = param_1 + 1;
    } while (iVar15 < param_2);
  }
  return;
}

// GetWaveTable @ 144504cc0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl Audio::FSineWaveTableOsc::GetWaveTable(void)

{
  ForAnyElementType FVar1;
  int iVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      iVar2 = 0;
      SineWaveTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      SineWaveTable.ArrayNum = 0;
      SineWaveTable.ArrayMax = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x1000,&SineWaveTable.AllocatorInstance,&SineWaveTable.ArrayNum,
                 &SineWaveTable.ArrayMax);
      FVar1 = SineWaveTable.AllocatorInstance;
      do {
        __vdecl_sinf4();
        iVar2 = iVar2 + 4;
        *(undefined8 *)FVar1.Data = extraout_XMM0_Qa;
        *(undefined8 *)(FVar1.Data + 8) = extraout_XMM0_Qb;
        FVar1.Data = FVar1.Data + 0x10;
      } while (iVar2 < 0x1000);
      atexit(`Audio::FSineWaveTableOsc::GetWaveTable'::__l2::
             _dynamic_atexit_destructor_for__SineWaveTable__);
      _Init_thread_footer(&::_TSS0);
      return &SineWaveTable;
    }
  }
  return &SineWaveTable;
}

// Init @ 144507c60

void __thiscall
Audio::FSineWaveTableOsc::Init(FSineWaveTableOsc *this,float param_1,float param_2,float param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  float fVar3;
  
  pTVar1 = this->WaveTableBuffer;
  if (__real_3f800000 <= param_3) {
    param_3 = __real_3f800000;
  }
  fVar3 = 0.0;
  if (param_2 <= 0.0) {
    param_2 = fVar3;
  }
  if (param_1 <= 0.0) {
    param_1 = fVar3;
  }
  if (param_3 <= 0.0) {
    param_3 = fVar3;
  }
  this->FrequencyHz = param_2;
  this->SampleRate = param_1;
  this->InitialPhase = param_3;
  this->InstantaneousPhase = param_3;
  fVar3 = (float)pTVar1->ArrayNum * param_3;
  this->ReadIndex = fVar3;
  iVar2 = pTVar1->ArrayNum;
  if ((float)iVar2 <= fVar3) {
    do {
      fVar3 = fVar3 - (float)iVar2;
      this->ReadIndex = fVar3;
      iVar2 = pTVar1->ArrayNum;
    } while ((float)iVar2 <= fVar3);
  }
  this->PhaseIncrement = ((float)iVar2 * param_2) / param_1;
  return;
}

// Reset @ 144517840

void __thiscall Audio::FSineWaveTableOsc::Reset(FSineWaveTableOsc *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  float fVar3;
  
  pTVar1 = this->WaveTableBuffer;
  fVar3 = (float)pTVar1->ArrayNum * this->InitialPhase;
  this->ReadIndex = fVar3;
  iVar2 = pTVar1->ArrayNum;
  if ((float)iVar2 <= fVar3) {
    do {
      fVar3 = fVar3 - (float)iVar2;
      this->ReadIndex = fVar3;
      iVar2 = pTVar1->ArrayNum;
    } while ((float)iVar2 <= fVar3);
  }
  return;
}

// SetFrequencyHz @ 14451a360

void __thiscall Audio::FSineWaveTableOsc::SetFrequencyHz(FSineWaveTableOsc *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->FrequencyHz = param_1;
  this->PhaseIncrement = ((float)this->WaveTableBuffer->ArrayNum * param_1) / this->SampleRate;
  return;
}

// SetPhase @ 14451c3f0

void __thiscall Audio::FSineWaveTableOsc::SetPhase(FSineWaveTableOsc *this,float param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  float fVar3;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = param_1 - this->InitialPhase;
  if (__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pTVar1 = this->WaveTableBuffer;
    this->InstantaneousPhase = param_1;
    fVar3 = (float)pTVar1->ArrayNum * fVar3 + this->ReadIndex;
    this->ReadIndex = fVar3;
    iVar2 = pTVar1->ArrayNum;
    if ((float)iVar2 <= fVar3) {
      do {
        fVar3 = fVar3 - (float)iVar2;
        this->ReadIndex = fVar3;
        iVar2 = pTVar1->ArrayNum;
      } while ((float)iVar2 <= fVar3);
    }
    while (fVar3 < 0.0) {
      fVar3 = (float)pTVar1->ArrayNum + fVar3;
      this->ReadIndex = fVar3;
    }
  }
  return;
}

// SetSampleRate @ 14451c740

void __thiscall Audio::FSineWaveTableOsc::SetSampleRate(FSineWaveTableOsc *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->SampleRate = param_1;
  this->PhaseIncrement = ((float)this->WaveTableBuffer->ArrayNum * this->FrequencyHz) / param_1;
  return;
}

// UpdatePhaseIncrement @ 1445200e0

void __thiscall Audio::FSineWaveTableOsc::UpdatePhaseIncrement(FSineWaveTableOsc *this)

{
  this->PhaseIncrement =
       ((float)this->WaveTableBuffer->ArrayNum * this->FrequencyHz) / this->SampleRate;
  return;
}

