// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// GetNextBuffer @ 146503fb0

bool __thiscall
Audio::FRawPCMDataBuffer::GetNextBuffer
          (FRawPCMDataBuffer *this,TArrayView<float,int> *param_1,uint param_2)

{
  short sVar1;
  uchar *puVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  bool bVar13;
  
  fVar3 = __real_38000000;
  pfVar5 = param_1->DataPtr;
  puVar2 = this->Data;
  uVar11 = (ulonglong)param_2;
  if (this->LoopCount == -1) {
    lVar8 = 0;
    bVar13 = false;
    uVar10 = 0;
    uVar6 = 0;
    if (param_2 < 4) {
      if (param_2 == 0) {
        return false;
      }
    }
    else {
      pfVar12 = pfVar5 + 2;
      uVar4 = (param_2 - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar4;
      uVar10 = uVar4 * 4;
      lVar8 = (ulonglong)uVar4 * 4;
      do {
        sVar1 = *(short *)(puVar2 + (ulonglong)this->CurrentSample * 2);
        this->CurrentSample = this->CurrentSample + 1;
        pfVar12[-2] = (float)(int)sVar1 * fVar3;
        uVar4 = this->CurrentSample;
        if (this->NumSamples <= this->CurrentSample) {
          this->CurrentSample = 0;
          bVar13 = true;
          uVar4 = uVar6;
        }
        sVar1 = *(short *)(puVar2 + (ulonglong)uVar4 * 2);
        this->CurrentSample = uVar4 + 1;
        pfVar12[-1] = (float)(int)sVar1 * fVar3;
        uVar4 = this->CurrentSample;
        if (this->NumSamples <= this->CurrentSample) {
          this->CurrentSample = 0;
          bVar13 = true;
          uVar4 = uVar6;
        }
        sVar1 = *(short *)(puVar2 + (ulonglong)uVar4 * 2);
        this->CurrentSample = uVar4 + 1;
        *pfVar12 = (float)(int)sVar1 * fVar3;
        uVar4 = this->CurrentSample;
        if (this->NumSamples <= this->CurrentSample) {
          this->CurrentSample = 0;
          bVar13 = true;
          uVar4 = uVar6;
        }
        sVar1 = *(short *)(puVar2 + (ulonglong)uVar4 * 2);
        this->CurrentSample = uVar4 + 1;
        pfVar12[1] = (float)(int)sVar1 * fVar3;
        if (this->NumSamples <= this->CurrentSample) {
          this->CurrentSample = 0;
          bVar13 = true;
        }
        pfVar12 = pfVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      if (param_2 <= uVar10) {
        return bVar13;
      }
    }
    pfVar5 = pfVar5 + lVar8;
    uVar11 = (ulonglong)(param_2 - uVar10);
    do {
      sVar1 = *(short *)(puVar2 + (ulonglong)this->CurrentSample * 2);
      this->CurrentSample = this->CurrentSample + 1;
      *pfVar5 = (float)(int)sVar1 * fVar3;
      if (this->NumSamples <= this->CurrentSample) {
        this->CurrentSample = 0;
        bVar13 = true;
      }
      pfVar5 = pfVar5 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    return bVar13;
  }
  if (this->NumSamples <= this->CurrentSample) goto LAB_1465042e7;
  uVar9 = 0;
  uVar11 = uVar9;
  if (param_2 < 4) {
    if (param_2 != 0) goto LAB_14650429e;
  }
  else {
    pfVar12 = pfVar5 + 2;
    do {
      uVar10 = this->CurrentSample;
      if (this->NumSamples <= uVar10) goto LAB_1465042d3;
      sVar1 = *(short *)(puVar2 + (ulonglong)uVar10 * 2);
      this->CurrentSample = uVar10 + 1;
      pfVar12[-2] = (float)(int)sVar1 * fVar3;
      uVar10 = this->CurrentSample;
      iVar7 = (int)uVar9;
      if (this->NumSamples <= uVar10) {
        uVar11 = (ulonglong)(param_2 - (iVar7 + 1U));
        pfVar5 = pfVar5 + (iVar7 + 1U);
        goto LAB_1465042e7;
      }
      sVar1 = *(short *)(puVar2 + (ulonglong)uVar10 * 2);
      this->CurrentSample = uVar10 + 1;
      pfVar12[-1] = (float)(int)sVar1 * fVar3;
      uVar10 = this->CurrentSample;
      if (this->NumSamples <= uVar10) {
        uVar11 = (ulonglong)(param_2 - (iVar7 + 2U));
        pfVar5 = pfVar5 + (iVar7 + 2U);
        goto LAB_1465042e7;
      }
      sVar1 = *(short *)(puVar2 + (ulonglong)uVar10 * 2);
      this->CurrentSample = uVar10 + 1;
      *pfVar12 = (float)(int)sVar1 * fVar3;
      uVar10 = this->CurrentSample;
      if (this->NumSamples <= uVar10) {
        uVar11 = (ulonglong)(param_2 - (iVar7 + 3U));
        pfVar5 = pfVar5 + (iVar7 + 3U);
        goto LAB_1465042e7;
      }
      sVar1 = *(short *)(puVar2 + (ulonglong)uVar10 * 2);
      this->CurrentSample = uVar10 + 1;
      uVar11 = uVar11 + 4;
      uVar10 = iVar7 + 4;
      uVar9 = (ulonglong)uVar10;
      pfVar12[1] = (float)(int)sVar1 * fVar3;
      pfVar12 = pfVar12 + 4;
    } while (uVar10 < param_2 - 3);
    if (param_2 <= uVar10) {
      uVar11 = (ulonglong)(param_2 - uVar10);
      pfVar5 = pfVar5 + uVar9;
      goto LAB_1465042e7;
    }
LAB_14650429e:
    pfVar12 = pfVar5 + uVar11;
    do {
      uVar10 = this->CurrentSample;
      if (this->NumSamples <= uVar10) break;
      sVar1 = *(short *)(puVar2 + (ulonglong)uVar10 * 2);
      this->CurrentSample = uVar10 + 1;
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      *pfVar12 = (float)(int)sVar1 * fVar3;
      pfVar12 = pfVar12 + 1;
    } while (uVar10 < param_2);
  }
LAB_1465042d3:
  uVar11 = (ulonglong)(param_2 - (int)uVar9);
  pfVar5 = pfVar5 + uVar9;
LAB_1465042e7:
  memset(pfVar5,0,uVar11 << 2);
  return this->NumSamples <= this->CurrentSample;
}

