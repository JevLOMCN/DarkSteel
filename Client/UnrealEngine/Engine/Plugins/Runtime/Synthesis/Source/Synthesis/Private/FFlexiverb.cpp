// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 7

// FFlexiverb @ 14f0b6f20

FFlexiverb * __thiscall Audio::FFlexiverb::FFlexiverb(FFlexiverb *this)

{
  (this->PrivateSettings).Complexity = 4.0;
  (this->PrivateSettings).DecayTime = 6.0;
  (this->PrivateSettings).PreDelay = 6.0;
  (this->PrivateSettings).RoomDampening = 220.0;
  FDelay::FDelay(&this->PreDelayLine);
  (this->DelayLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayLines).ArrayNum = 0;
  (this->DelayLines).ArrayMax = 0;
  (this->APFArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->APFArray).ArrayNum = 0;
  (this->APFArray).ArrayMax = 0;
  (this->DampeningArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DampeningArray).ArrayNum = 0;
  (this->DampeningArray).ArrayMax = 0;
  this->DecayFactor = 0.0;
  this->ScatteringMatrixLength = 0;
  return this;
}

// ~FFlexiverb @ 14f0bee20

void __thiscall Audio::FFlexiverb::~FFlexiverb(FFlexiverb *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DampeningArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FDelayAPF,int>
            ((FDelayAPF *)(this->APFArray).AllocatorInstance.Data,(this->APFArray).ArrayNum);
  pFVar1 = (this->APFArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FDelayAPF,int>
            ((FDelayAPF *)(this->DelayLines).AllocatorInstance.Data,(this->DelayLines).ArrayNum);
  pFVar1 = (this->DelayLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDelay::~FDelay(&this->PreDelayLine);
  return;
}

// Init @ 14f0e2ff0

void __thiscall Audio::FFlexiverb::Init(FFlexiverb *this,int param_1,FFlexiverbSettings *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  FDelayAPF *pFVar4;
  FDelay *this_00;
  FDelay *pFVar5;
  float *pfVar6;
  undefined1 local_res10 [8];
  FDelayAPF local_88;
  
  fVar3 = __real_40000000;
  this->SampleRate = (float)param_1;
  FDelay::Init(&this->PreDelayLine,(float)param_1,fVar3);
  SetSettings(this,param_2);
  pFVar4 = FDelayAPF::FDelayAPF(&local_88);
  TArray<Audio::FDelayAPF,TSizedDefaultAllocator<32>_>::Init(&this->APFArray,pFVar4,4);
  FDelayAPF::~FDelayAPF(&local_88);
  iVar2 = (this->APFArray).ArrayNum;
  pfVar6 = APFAmountFactor;
  this_00 = (FDelay *)(this->APFArray).AllocatorInstance.Data;
  pFVar5 = (FDelay *)((longlong)this_00 + (longlong)iVar2 * 0x60);
  while( true ) {
    if ((this->APFArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FDelayAPF,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar5) break;
    FDelay::Init(this_00,this->SampleRate,fVar3);
    fVar1 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    FDelay::SetDelaySamples(this_00,fVar1);
    this_00 = (FDelay *)&this_00[1].AudioBuffer;
  }
  return;
}

// ProcessAudioFrame @ 14f0f4410

void __thiscall
Audio::FFlexiverb::ProcessAudioFrame
          (FFlexiverb *this,float *param_1,int param_2,float *param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 extraout_var [12];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  iVar5 = 0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  uVar11 = (ulonglong)param_2;
  fVar24 = 0.0;
  iVar9 = iVar5;
  if ((0 < param_2) && (iVar9 = 0, 7 < (uint)param_2)) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    lVar3 = 0;
    do {
      pfVar4 = param_1 + lVar3;
      iVar5 = iVar5 + 8;
      fVar20 = fVar20 + *pfVar4;
      fVar21 = fVar21 + pfVar4[1];
      fVar22 = fVar22 + pfVar4[2];
      fVar23 = fVar23 + pfVar4[3];
      pfVar4 = param_1 + lVar3 + 4;
      lVar3 = lVar3 + 8;
      fVar16 = fVar16 + *pfVar4;
      fVar17 = fVar17 + pfVar4[1];
      fVar18 = fVar18 + pfVar4[2];
      fVar19 = fVar19 + pfVar4[3];
    } while (lVar3 < (longlong)(uVar11 & 0xfffffffffffffff8));
    fVar17 = fVar19 + fVar23 + fVar17 + fVar21;
    fVar16 = fVar18 + fVar22 + fVar16 + fVar20 + fVar17;
    iVar9 = iVar5;
  }
  lVar3 = (longlong)iVar9;
  if (lVar3 < (longlong)uVar11) {
    if (3 < (longlong)(uVar11 - lVar3)) {
      pfVar4 = param_1 + lVar3 + 2;
      lVar6 = ((uVar11 - lVar3) - 4 >> 2) + 1;
      lVar3 = lVar3 + lVar6 * 4;
      do {
        fVar16 = fVar16 + pfVar4[-2] + pfVar4[-1] + *pfVar4 + pfVar4[1];
        pfVar4 = pfVar4 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if ((longlong)uVar11 <= lVar3) goto LAB_14f0f44ff;
    }
    do {
      fVar16 = fVar16 + param_1[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 < (longlong)uVar11);
  }
LAB_14f0f44ff:
  uVar13 = (**(code **)((this->PreDelayLine)._padding_ + 8))
                     (&this->PreDelayLine,CONCAT44(fVar17,fVar16 / (float)param_2));
  pFVar1 = (this->APFArray).AllocatorInstance.Data;
  iVar9 = 0;
  fVar16 = (float)uVar13;
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  pFVar8 = pFVar1;
  if (0 < (this->APFArray).ArrayNum) {
    do {
      uVar13 = (**(code **)(*(longlong *)pFVar8 + 8))
                         (pFVar1 + (longlong)iVar9 * 0x60,CONCAT44(uVar14,fVar16));
      iVar9 = iVar9 + 1;
      fVar16 = (float)uVar13;
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      pFVar8 = pFVar8 + 0x60;
    } while (iVar9 < (this->APFArray).ArrayNum);
  }
  uVar2 = __xmm_80000000800000008000000080000000;
  iVar9 = this->ScatteringMatrixLength;
  pFVar1 = (this->DelayLines).AllocatorInstance.Data;
  if (0 < iVar9) {
    pFVar8 = (this->DampeningArray).AllocatorInstance.Data + 0xc;
    pFVar12 = pFVar1;
    iVar5 = 0;
    do {
      iVar10 = 0;
      iVar7 = iVar5 + 1;
      fVar17 = fVar16;
      uVar15 = uVar14;
      if (0 < iVar9) {
        do {
          fVar18 = FDelay::Read((FDelay *)(pFVar1 + (longlong)(iVar7 % iVar9) * 0x60));
          fVar17 = fVar18 + fVar17;
          uVar15 = extraout_var._0_4_;
          if (iVar10 != iVar5) {
            fVar17 = (float)((uint)fVar17 ^ uVar2);
          }
          iVar9 = this->ScatteringMatrixLength;
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar9);
      }
      lVar3 = *(longlong *)pFVar12;
      fVar17 = fVar17 * this->DecayFactor * *(float *)(pFVar8 + -4) +
               *(float *)(pFVar8 + -8) * *(float *)pFVar8;
      *(float *)pFVar8 = fVar17;
      fVar17 = (float)(**(code **)(lVar3 + 8))
                                (pFVar1 + (longlong)iVar5 * 0x60,CONCAT44(uVar15,fVar17));
      iVar9 = this->ScatteringMatrixLength;
      pFVar8 = pFVar8 + 0x10;
      pFVar12 = pFVar12 + 0x60;
      fVar24 = fVar24 + fVar17;
      iVar5 = iVar7;
    } while (iVar7 < iVar9);
  }
  lVar3 = (longlong)param_4;
  if (0 < param_4) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_3 = fVar24 / (float)param_4;
      param_3 = param_3 + 1;
    }
  }
  return;
}

// SetSettings @ 14f100f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FFlexiverb::SetSettings(FFlexiverb *this,FFlexiverbSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_1->Complexity != (float)this->ScatteringMatrixLength) {
    UpdateComplexity(this,(int)param_1->Complexity);
  }
  fVar4 = param_1->DecayTime;
  fVar14 = param_1->PreDelay;
  fVar5 = param_1->RoomDampening;
  fVar13 = fVar4 * __real_3daaaaab;
  (this->PrivateSettings).Complexity = param_1->Complexity;
  (this->PrivateSettings).DecayTime = fVar4;
  (this->PrivateSettings).PreDelay = fVar14;
  (this->PrivateSettings).RoomDampening = fVar5;
  fVar14 = logf(fVar13);
  fVar4 = __real_3f800000;
  fVar14 = fVar14 * ___real_3dfa19e0 + __real_3f7fff58;
  bVar9 = __real_3f800000 <= fVar14;
  this->DecayFactor = fVar14;
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecayFactor < 1.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\Flexiverb.cpp"
                         ,0x46,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDelay::SetDelayMsec(&this->PreDelayLine,(this->PrivateSettings).PreDelay);
  fVar8 = __real_3b96012c;
  fVar7 = __real_42960000;
  fVar13 = __real_c0490fdb;
  fVar5 = __real_3f000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar14 = __real_322bcc77;
  uVar11 = 0;
  if (0 < this->ScatteringMatrixLength) {
    lVar12 = 0;
    do {
      uVar10 = rand();
      uVar3 = 0;
      if ((int)uVar11 < (this->DampeningArray).ArrayNum) {
        uVar3 = ~uVar11 >> 0x1f;
      }
      fVar15 = (this->PrivateSettings).RoomDampening;
      if ((uVar3 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->DampeningArray).AllocatorInstance.Data;
      fVar15 = ((((float)(uVar10 & 0x7fff) * fVar8 + fVar15) - fVar7) * fVar5) / this->SampleRate;
      if (fVar14 < (float)((uint)(fVar15 - *(float *)(pFVar1 + lVar12)) & uVar6)) {
        *(float *)(pFVar1 + lVar12) = fVar15;
        fVar15 = expf(fVar15 * fVar13);
        *(float *)(pFVar1 + lVar12 + 4) = fVar15;
        *(float *)(pFVar1 + lVar12 + 8) = fVar4 - fVar15;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < this->ScatteringMatrixLength);
  }
  return;
}

// Update @ 14f106750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FFlexiverb::Update(FFlexiverb *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = logf((this->PrivateSettings).DecayTime * __real_3daaaaab);
  fVar4 = __real_3f800000;
  fVar14 = fVar14 * ___real_3dfa19e0 + __real_3f7fff58;
  bVar10 = __real_3f800000 <= fVar14;
  this->DecayFactor = fVar14;
  if ((bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DecayFactor < 1.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\Flexiverb.cpp"
                          ,0x46,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDelay::SetDelayMsec(&this->PreDelayLine,(this->PrivateSettings).PreDelay);
  fVar9 = __real_3b96012c;
  fVar8 = __real_42960000;
  fVar7 = __real_c0490fdb;
  fVar6 = __real_3f000000;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar14 = __real_322bcc77;
  uVar12 = 0;
  if (0 < this->ScatteringMatrixLength) {
    lVar13 = 0;
    do {
      uVar11 = rand();
      uVar3 = 0;
      if ((int)uVar12 < (this->DampeningArray).ArrayNum) {
        uVar3 = ~uVar12 >> 0x1f;
      }
      fVar15 = (this->PrivateSettings).RoomDampening;
      if ((uVar3 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->DampeningArray).AllocatorInstance.Data;
      fVar15 = ((((float)(uVar11 & 0x7fff) * fVar9 + fVar15) - fVar8) * fVar6) / this->SampleRate;
      if (fVar14 < (float)((uint)(fVar15 - *(float *)(pFVar1 + lVar13)) & uVar5)) {
        *(float *)(pFVar1 + lVar13) = fVar15;
        fVar15 = expf(fVar15 * fVar7);
        *(float *)(pFVar1 + lVar13 + 4) = fVar15;
        *(float *)(pFVar1 + lVar13 + 8) = fVar4 - fVar15;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar12 < this->ScatteringMatrixLength);
  }
  return;
}

// UpdateComplexity @ 14f106ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FFlexiverb::UpdateComplexity(FFlexiverb *this,int param_1)

{
  int *piVar1;
  TArray<Audio::FOnePoleLPF,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  FDelayAPF *pFVar9;
  int iVar10;
  FDelay *this_00;
  FDelay *pFVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined1 local_res10 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  FDelayAPF local_88;
  
  iVar10 = param_1 * 2 + 1;
  this->ScatteringMatrixLength = iVar10;
  pFVar9 = FDelayAPF::FDelayAPF(&local_88);
  TArray<Audio::FDelayAPF,TSizedDefaultAllocator<32>_>::Init(&this->DelayLines,pFVar9,iVar10);
  FDelayAPF::~FDelayAPF(&local_88);
  fVar7 = __real_41200000;
  iVar10 = (this->DelayLines).ArrayNum;
  pfVar13 = DelayLineSampleLengths;
  this_00 = (FDelay *)(this->DelayLines).AllocatorInstance.Data;
  pFVar11 = (FDelay *)((longlong)this_00 + (longlong)iVar10 * 0x60);
  while( true ) {
    if ((this->DelayLines).ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Audio::FDelayAPF,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar11) break;
    FDelay::Init(this_00,this->SampleRate,fVar7);
    fVar3 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    FDelay::SetDelaySamples(this_00,fVar3);
    this_00 = (FDelay *)&this_00[1].AudioBuffer;
  }
  pTVar2 = &this->DampeningArray;
  uVar4 = this->ScatteringMatrixLength;
  uVar12 = (ulonglong)uVar4;
  local_98 = ___xmm_000000003f8000000000000000000000;
  uStack_90 = _UNK_150689538;
  if (-1 < (int)uVar4) {
    piVar1 = &(this->DampeningArray).ArrayMax;
    (this->DampeningArray).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar4) {
      do {
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar5 <= (FScriptContainerElement *)&local_98) &&
           ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)*piVar1 * 0x10)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (this->DampeningArray).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->DampeningArray).ArrayNum = iVar10 + 1;
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar5 = local_98;
        *(undefined8 *)(pFVar5 + 8) = uStack_90;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar12);
}

