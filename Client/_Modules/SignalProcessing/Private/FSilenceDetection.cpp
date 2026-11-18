// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FSilenceDetection @ 144520f40

FSilenceDetection * __thiscall
Audio::FSilenceDetection::FSilenceDetection
          (FSilenceDetection *this,float param_1,float param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSilenceDetection *pFVar6;
  float fVar7;
  undefined1 local_res10 [8];
  
  piVar1 = &(this->Averager).AudioBuffer.ArrayNum;
  (this->Averager).AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Averager).AudioBuffer.ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Averager).AccumulatedSum.m128_u64[0] = 0;
  (this->Averager).AccumulatedSum.m128_u64[1] = 0;
  (this->Averager).BufferCursor = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Averager).ProcessCriticalSection,4000);
  if ((param_3 & 3U) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VoiceProcessing.cpp"
                       ,0x31,L"NumSamples must be divisible by 4!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSilenceDetection *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = *piVar2;
  *piVar1 = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,(ForAnyElementType *)this,0,piVar2);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,(uint)param_3 >> 2,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->Averager).AudioBuffer.AllocatorInstance.Data + (longlong)iVar5 * 0x10,0,
         (ulonglong)((uint)param_3 >> 2) << 4);
  fVar7 = expf(__real_bf800000 / (float)((int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2));
  this->CurrentAmplitude = 0.0;
  this->bOnsetWasInLastBuffer = false;
  this->ReleaseTau = fVar7;
  this->OnsetThreshold = param_1;
  this->ReleaseThreshold = param_2;
  if (param_1 <= param_2) {
    `Audio::FSilenceDetection::FSilenceDetection'::__l2::<lambda_1>::operator()(local_res10);
  }
  return this;
}

// GetCurrentAmplitude @ 1445233b0

float __thiscall Audio::FSilenceDetection::GetCurrentAmplitude(FSilenceDetection *this)

{
  return this->CurrentAmplitude;
}

// ProcessBuffer @ 144523bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Audio::FSilenceDetection::ProcessBuffer
          (FSilenceDetection *this,float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_1c;
  TArrayView<float,int> local_18;
  
  uVar14 = _UNK_15061cc7c;
  uVar13 = _UNK_15061cc78;
  uVar12 = _UNK_15061cc74;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pfVar1 = &this->CurrentAmplitude;
  lVar18 = (longlong)param_3;
  if ((this->bOnsetWasInLastBuffer != false) || (this->ReleaseThreshold < *pfVar1)) {
    this->bOnsetWasInLastBuffer = false;
    uVar14 = _UNK_15061cc7c;
    uVar13 = _UNK_15061cc78;
    uVar12 = _UNK_15061cc74;
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (0 < param_3) {
      lVar18 = (lVar18 - 1U >> 2) + 1;
      pfVar21 = param_2;
      do {
        puVar3 = (uint *)((longlong)pfVar21 + ((longlong)param_1 - (longlong)param_2));
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        lVar17 = (longlong)(this->Averager).BufferCursor;
        pFVar4 = (this->Averager).AudioBuffer.AllocatorInstance.Data;
        pFVar2 = pFVar4 + lVar17 * 0x10;
        fVar25 = *(float *)pFVar2;
        fVar22 = *(float *)(pFVar2 + 4);
        fVar23 = *(float *)(pFVar2 + 8);
        fVar24 = *(float *)(pFVar2 + 0xc);
        pFVar4 = pFVar4 + lVar17 * 0x10;
        *(uint *)pFVar4 = uVar7;
        *(uint *)(pFVar4 + 4) = uVar8;
        *(uint *)(pFVar4 + 8) = uVar9;
        *(uint *)(pFVar4 + 0xc) = uVar10;
        iVar16 = (this->Averager).AudioBuffer.ArrayNum;
        fVar26 = ((float)(uVar7 & uVar11) - (float)((uint)fVar25 & uVar11)) +
                 (this->Averager).AccumulatedSum.m128_f32[0];
        fVar27 = ((float)(uVar8 & uVar12) - (float)((uint)fVar22 & uVar12)) +
                 (this->Averager).AccumulatedSum.m128_f32[1];
        fVar28 = ((float)(uVar9 & uVar13) - (float)((uint)fVar23 & uVar13)) +
                 (this->Averager).AccumulatedSum.m128_f32[2];
        fVar29 = ((float)(uVar10 & uVar14) - (float)((uint)fVar24 & uVar14)) +
                 (this->Averager).AccumulatedSum.m128_f32[3];
        (this->Averager).BufferCursor = ((this->Averager).BufferCursor + 1) % iVar16;
        (this->Averager).AccumulatedSum.m128_f32[0] = fVar26;
        (this->Averager).AccumulatedSum.m128_f32[1] = fVar27;
        (this->Averager).AccumulatedSum.m128_f32[2] = fVar28;
        (this->Averager).AccumulatedSum.m128_f32[3] = fVar29;
        fVar26 = (fVar26 + fVar27 + fVar28 + fVar29) / (float)(iVar16 * 4);
        *pfVar1 = (*pfVar1 - fVar26) * this->ReleaseTau + fVar26;
        *pfVar21 = fVar25;
        pfVar21[1] = fVar22;
        pfVar21[2] = fVar23;
        pfVar21[3] = fVar24;
        pfVar21 = pfVar21 + 4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (this->CurrentAmplitude <= this->ReleaseThreshold &&
        this->ReleaseThreshold != this->CurrentAmplitude) {
      iVar16 = 0x20;
      if (param_3 < 0x20) {
        iVar16 = param_3;
      }
      if ((iVar16 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        iVar16 = (*pcVar6)();
        return iVar16;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar16;
      local_18.DataPtr = param_2 + (param_3 - iVar16);
      ArrayFade(&local_18,__real_3f800000,0.0);
    }
  }
  else {
    uVar19 = 0;
    param_3 = 0;
    bVar15 = false;
    fVar25 = 0.0;
    uVar20 = uVar19;
    if (0 < lVar18) {
      do {
        pfVar21 = param_1 + uVar20;
        fVar25 = *pfVar21;
        fVar22 = pfVar21[1];
        fVar23 = pfVar21[2];
        fVar24 = pfVar21[3];
        lVar17 = (longlong)(this->Averager).BufferCursor;
        pFVar4 = (this->Averager).AudioBuffer.AllocatorInstance.Data;
        pFVar2 = pFVar4 + lVar17 * 0x10;
        fVar26 = *(float *)pFVar2;
        fVar27 = *(float *)(pFVar2 + 4);
        fVar28 = *(float *)(pFVar2 + 8);
        fVar29 = *(float *)(pFVar2 + 0xc);
        pFVar4 = pFVar4 + lVar17 * 0x10;
        *(float *)pFVar4 = fVar25;
        *(float *)(pFVar4 + 4) = fVar22;
        *(float *)(pFVar4 + 8) = fVar23;
        *(float *)(pFVar4 + 0xc) = fVar24;
        iVar16 = (this->Averager).AudioBuffer.ArrayNum;
        (this->Averager).BufferCursor = ((this->Averager).BufferCursor + 1) % iVar16;
        fVar25 = ((float)((uint)fVar25 & uVar11) - (float)((uint)fVar26 & uVar11)) +
                 (this->Averager).AccumulatedSum.m128_f32[0];
        fVar22 = ((float)((uint)fVar22 & uVar12) - (float)((uint)fVar27 & uVar12)) +
                 (this->Averager).AccumulatedSum.m128_f32[1];
        fVar23 = ((float)((uint)fVar23 & uVar13) - (float)((uint)fVar28 & uVar13)) +
                 (this->Averager).AccumulatedSum.m128_f32[2];
        fVar24 = ((float)((uint)fVar24 & uVar14) - (float)((uint)fVar29 & uVar14)) +
                 (this->Averager).AccumulatedSum.m128_f32[3];
        (this->Averager).AccumulatedSum.m128_f32[0] = fVar25;
        (this->Averager).AccumulatedSum.m128_f32[1] = fVar22;
        (this->Averager).AccumulatedSum.m128_f32[2] = fVar23;
        (this->Averager).AccumulatedSum.m128_f32[3] = fVar24;
        fVar25 = (fVar25 + fVar22 + fVar23 + fVar24) / (float)(iVar16 * 4);
        if (bVar15 == false) {
          bVar15 = this->OnsetThreshold <= fVar25 && fVar25 != this->OnsetThreshold;
        }
        else {
          uVar19 = (ulonglong)((int)uVar19 + 4);
          *param_2 = fVar26;
          param_2[1] = fVar27;
          param_2[2] = fVar28;
          param_2[3] = fVar29;
          param_2 = param_2 + 4;
        }
        param_3 = (int)uVar19;
        uVar20 = uVar20 + 4;
      } while ((longlong)uVar20 < lVar18);
    }
    bVar5 = __real_42c80000 <= fVar25;
    this->bOnsetWasInLastBuffer = bVar15;
    *pfVar1 = fVar25;
    if ((bVar5) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentAmplitude < 100.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VoiceProcessing.cpp"
                            ,0x90,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      iVar16 = (*pcVar6)();
      return iVar16;
    }
  }
  return param_3;
}

// SetThreshold @ 144525590

void __thiscall Audio::FSilenceDetection::SetThreshold(FSilenceDetection *this,float param_1)

{
  this->OnsetThreshold = param_1;
  return;
}

// operator() @ 1504bfc10

bool __thiscall
`Audio::FSilenceDetection::FSilenceDetection'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1143921920329121708>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1143921920329121708>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

