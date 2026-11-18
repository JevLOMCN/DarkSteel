// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FBufferOnePoleLPF @ 1444a30d0

FBufferOnePoleLPF * __thiscall
Audio::FBufferOnePoleLPF::FBufferOnePoleLPF(FBufferOnePoleLPF *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 - param_1;
  this->CutoffFrequency = 0.0;
  this->Z1 = 0.0;
  this->B1 = param_1;
  this->A0 = fVar1;
  return this;
}

// FlushAudio @ 1444beaa0

void __thiscall Audio::FBufferOnePoleLPF::FlushAudio(FBufferOnePoleLPF *this)

{
  this->Z1 = 0.0;
  return;
}

// ProcessAudio @ 1444d6b70

void __thiscall
Audio::FBufferOnePoleLPF::ProcessAudio
          (FBufferOnePoleLPF *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  
  uVar1 = param_1->ArrayNum;
  lVar7 = (longlong)(int)uVar1;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  lVar6 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  pFVar2 = (param_2->AllocatorInstance).Data;
  *(float *)pFVar2 = *(float *)pFVar3 * this->A0 + this->Z1 * this->B1;
  if (1 < lVar7) {
    lVar8 = (longlong)pFVar3 - (longlong)pFVar2;
    lVar9 = 1;
    if (4 < lVar7) {
      pFVar3 = pFVar2 + 4;
      lVar4 = (lVar7 - 5U >> 2) + 1;
      lVar6 = lVar4 * 4;
      lVar9 = lVar6 + 1;
      do {
        fVar10 = *(float *)(pFVar3 + -4) * this->B1 + *(float *)(pFVar3 + lVar8) * this->A0;
        *(float *)pFVar3 = fVar10;
        fVar10 = *(float *)(pFVar3 + lVar8 + 4) * this->A0 + fVar10 * this->B1;
        *(float *)(pFVar3 + 4) = fVar10;
        fVar10 = *(float *)(pFVar3 + lVar8 + 8) * this->A0 + fVar10 * this->B1;
        *(float *)(pFVar3 + 8) = fVar10;
        *(float *)(pFVar3 + 0xc) = *(float *)(pFVar3 + lVar8 + 0xc) * this->A0 + fVar10 * this->B1;
        pFVar3 = pFVar3 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (lVar7 <= lVar9) goto LAB_1444d6cfd;
    }
    pFVar3 = pFVar2 + lVar9 * 4;
    lVar9 = lVar7 - lVar9;
    pFVar5 = pFVar2 + lVar6 * 4;
    do {
      fVar10 = *(float *)pFVar5;
      pFVar5 = pFVar5 + 4;
      *(float *)pFVar3 = *(float *)(pFVar3 + lVar8) * this->A0 + fVar10 * this->B1;
      pFVar3 = pFVar3 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_1444d6cfd:
  this->Z1 = *(float *)(pFVar2 + (lVar7 + -1) * 4);
  return;
}

// Reset @ 1444e1600

void __thiscall Audio::FBufferOnePoleLPF::Reset(FBufferOnePoleLPF *this)

{
  this->A0 = 1.0;
  this->Z1 = 0.0;
  this->B1 = 0.0;
  return;
}

// SetFrequency @ 1444e3a40

void __thiscall Audio::FBufferOnePoleLPF::SetFrequency(FBufferOnePoleLPF *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CutoffFrequency) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CutoffFrequency = param_1;
    fVar1 = expf(param_1 * __real_c0490fdb);
    fVar2 = __real_3f800000 - fVar1;
    this->B1 = fVar1;
    this->A0 = fVar2;
  }
  return;
}

// SetG @ 1444e3bc0

void __thiscall Audio::FBufferOnePoleLPF::SetG(FBufferOnePoleLPF *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 - param_1;
  this->B1 = param_1;
  this->A0 = fVar1;
  return;
}

