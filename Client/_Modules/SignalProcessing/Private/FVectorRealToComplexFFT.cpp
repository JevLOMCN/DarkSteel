// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FVectorRealToComplexFFT @ 1444f2e60

FVectorRealToComplexFFT * __thiscall
Audio::FVectorRealToComplexFFT::FVectorRealToComplexFFT(FVectorRealToComplexFFT *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  FVectorComplexFFT *this_00;
  FVectorRealToComplexFFT *pFVar6;
  FVectorComplexFFT *pFVar7;
  int iVar8;
  
  pFVar7 = (FVectorComplexFFT *)0x0;
  this->_padding_ = (longlong)&___7FVectorRealToComplexFFT_Audio__6B_;
  piVar1 = &(this->WorkBuffer).ArrayNum;
  this->Log2FFTSize = param_1;
  this->FFTSize = 1 << ((byte)param_1 & 0x1f);
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->WorkBuffer).ArrayMax = 0;
  (this->ForwardConvBuffers).AlphaReal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForwardConvBuffers).AlphaReal.ArrayNum = 0;
  (this->ForwardConvBuffers).AlphaReal.ArrayMax = 0;
  (this->ForwardConvBuffers).AlphaImag.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForwardConvBuffers).AlphaImag.ArrayNum = 0;
  (this->ForwardConvBuffers).AlphaImag.ArrayMax = 0;
  (this->ForwardConvBuffers).BetaReal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForwardConvBuffers).BetaReal.ArrayNum = 0;
  (this->ForwardConvBuffers).BetaReal.ArrayMax = 0;
  (this->ForwardConvBuffers).BetaImag.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForwardConvBuffers).BetaImag.ArrayNum = 0;
  (this->ForwardConvBuffers).BetaImag.ArrayMax = 0;
  (this->InverseConvBuffers).AlphaReal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseConvBuffers).AlphaReal.ArrayNum = 0;
  (this->InverseConvBuffers).AlphaReal.ArrayMax = 0;
  (this->InverseConvBuffers).AlphaImag.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseConvBuffers).AlphaImag.ArrayNum = 0;
  (this->InverseConvBuffers).AlphaImag.ArrayMax = 0;
  (this->InverseConvBuffers).BetaReal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseConvBuffers).BetaReal.ArrayNum = 0;
  (this->InverseConvBuffers).BetaReal.ArrayMax = 0;
  (this->InverseConvBuffers).BetaImag.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseConvBuffers).BetaImag.ArrayNum = 0;
  (this->InverseConvBuffers).BetaImag.ArrayMax = 0;
  this_00 = ::operator_new(0x50);
  if (this_00 != (FVectorComplexFFT *)0x0) {
    this_00->FFTSize = 0;
    this_00->NumFloats = 0;
    this_00->Log2FFTSize = param_1 + -1;
    piVar2 = &(this_00->InverseWorkBuffer).ArrayNum;
    (this_00->Radix4Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Radix4Weights).ArrayNum = 0;
    (this_00->Radix4Weights).ArrayMax = 0;
    (this_00->FinalIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FinalIndices).ArrayNum = 0;
    (this_00->FinalIndices).ArrayMax = 0;
    (this_00->FinalWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->FinalWeights).ArrayNum = 0;
    (this_00->FinalWeights).ArrayMax = 0;
    (this_00->InverseWorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar2 = 0;
    piVar3 = &(this_00->InverseWorkBuffer).ArrayMax;
    *piVar3 = 0;
    if ((this_00->Log2FFTSize < 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Log2FFTSize >= MinLog2FFTSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                           ,0x1f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FVectorRealToComplexFFT *)(*pcVar4)();
      return pFVar6;
    }
    if ((0x10 < this_00->Log2FFTSize) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Log2FFTSize <= MaxLog2FFTSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VectorFFT.cpp"
                           ,0x20,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FVectorRealToComplexFFT *)(*pcVar4)();
      return pFVar6;
    }
    iVar8 = 1 << ((byte)this_00->Log2FFTSize & 0x1f);
    this_00->FFTSize = iVar8;
    iVar8 = iVar8 * 2;
    this_00->NumFloats = iVar8;
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar8,&(this_00->InverseWorkBuffer).AllocatorInstance,piVar2,piVar3);
    FVectorComplexFFT::GenerateRadix4Weights(this_00);
    FVectorComplexFFT::GenerateFinalIndices(this_00);
    FVectorComplexFFT::GenerateFinalWeights(this_00);
    pFVar7 = this_00;
  }
  (this->ComplexFFT).Ptr = pFVar7;
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->WorkBuffer).AllocatorInstance,piVar1,
             &(this->WorkBuffer).ArrayMax);
  InitRealSequenceConversionBuffers(this);
  return this;
}

// ~FVectorRealToComplexFFT @ 1444f4840

void __thiscall
Audio::FVectorRealToComplexFFT::~FVectorRealToComplexFFT(FVectorRealToComplexFFT *this)

{
  FVectorComplexFFT *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FVectorRealToComplexFFT_Audio__6B_;
  pFVar1 = (this->ComplexFFT).Ptr;
  if (pFVar1 != (FVectorComplexFFT *)0x0) {
    pFVar2 = (pFVar1->InverseWorkBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->FinalWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->FinalIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Radix4Weights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x50);
  }
  pFVar2 = (this->InverseConvBuffers).BetaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).BetaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).AlphaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).AlphaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).BetaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).BetaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).AlphaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).AlphaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IFFTAlgorithm::~IFFTAlgorithm((IFFTAlgorithm *)this);
  return;
}

// BatchForwardRealToComplex @ 1444f7610

void __thiscall
Audio::FVectorRealToComplexFFT::BatchForwardRealToComplex
          (FVectorRealToComplexFFT *this,int param_1,float **param_2,float **param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_1) {
    lVar2 = (longlong)param_1;
    lVar1 = (longlong)param_3 - (longlong)param_2;
    do {
      (**(code **)(this->_padding_ + 0x20))
                (this,*param_2,*(undefined8 *)((longlong)param_2 + lVar1));
      param_2 = param_2 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// BatchInverseComplexToReal @ 1444f7680

void __thiscall
Audio::FVectorRealToComplexFFT::BatchInverseComplexToReal
          (FVectorRealToComplexFFT *this,int param_1,float **param_2,float **param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_1) {
    lVar2 = (longlong)param_1;
    lVar1 = (longlong)param_3 - (longlong)param_2;
    do {
      (**(code **)(this->_padding_ + 0x28))
                (this,*param_2,*(undefined8 *)((longlong)param_2 + lVar1));
      param_2 = param_2 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// ConvertSequence @ 1444f96b0

void __thiscall
Audio::FVectorRealToComplexFFT::ConvertSequence
          (FVectorRealToComplexFFT *this,FConversionBuffers *param_1,float *param_2,int param_3,
          float *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  float *pfVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  
  pFVar6 = (param_1->AlphaReal).AllocatorInstance.Data;
  pFVar7 = (param_1->AlphaImag).AllocatorInstance.Data;
  pFVar8 = (param_1->BetaReal).AllocatorInstance.Data;
  pFVar9 = (param_1->BetaImag).AllocatorInstance.Data;
  iVar5 = this->FFTSize;
  if (param_3 < iVar5) {
    lVar33 = (longlong)param_3;
    if (lVar33 < iVar5) {
      lVar31 = iVar5 - lVar33;
      pFVar30 = pFVar9 + lVar33 * 4;
      pfVar32 = param_2 + lVar31 + -4;
      lVar33 = (lVar31 - 1U >> 2) + 1;
      fVar34 = param_2[iVar5 - param_3];
      fVar35 = (param_2 + (iVar5 - param_3))[1];
      do {
        pFVar1 = pFVar30 + ((longlong)param_2 - (longlong)pFVar9);
        fVar10 = *(float *)pFVar1;
        fVar11 = *(float *)(pFVar1 + 4);
        fVar12 = *(float *)(pFVar1 + 8);
        fVar13 = *(float *)(pFVar1 + 0xc);
        fVar14 = *pfVar32;
        fVar15 = pfVar32[1];
        fVar16 = pfVar32[2];
        fVar17 = pfVar32[3];
        pfVar32 = pfVar32 + -4;
        pFVar1 = pFVar30 + ((longlong)pFVar6 - (longlong)pFVar9);
        fVar18 = *(float *)(pFVar1 + 4);
        fVar19 = *(float *)(pFVar1 + 8);
        fVar20 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar30 + ((longlong)pFVar7 - (longlong)pFVar9);
        fVar21 = *(float *)(pFVar2 + 4);
        fVar22 = *(float *)(pFVar2 + 8);
        fVar23 = *(float *)(pFVar2 + 0xc);
        fVar24 = *(float *)(pFVar30 + 4);
        fVar25 = *(float *)(pFVar30 + 8);
        fVar26 = *(float *)(pFVar30 + 0xc);
        pFVar3 = pFVar30 + ((longlong)pFVar8 - (longlong)pFVar9);
        fVar27 = *(float *)(pFVar3 + 4);
        fVar28 = *(float *)(pFVar3 + 8);
        fVar29 = *(float *)(pFVar3 + 0xc);
        pFVar4 = pFVar30 + ((longlong)param_4 - (longlong)pFVar9);
        *(float *)pFVar4 =
             fVar11 * *(float *)pFVar2 + *(float *)pFVar1 * fVar10 +
             fVar35 * *(float *)pFVar30 + *(float *)pFVar3 * fVar34;
        *(float *)(pFVar4 + 4) =
             fVar10 * fVar21 + fVar18 * fVar11 + fVar34 * fVar24 + fVar27 * fVar35;
        *(float *)(pFVar4 + 8) =
             fVar13 * fVar22 + fVar19 * fVar12 + fVar17 * fVar25 + fVar28 * fVar16;
        *(float *)(pFVar4 + 0xc) =
             fVar12 * fVar23 + fVar20 * fVar13 + fVar16 * fVar26 + fVar29 * fVar17;
        pFVar30 = pFVar30 + 0x10;
        lVar33 = lVar33 + -1;
        fVar34 = fVar14;
        fVar35 = fVar15;
      } while (lVar33 != 0);
    }
  }
  return;
}

// ForwardRealToComplex @ 1444fc5d0

void __thiscall
Audio::FVectorRealToComplexFFT::ForwardRealToComplex
          (FVectorRealToComplexFFT *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  
  pFVar14 = (this->WorkBuffer).AllocatorInstance.Data;
  FVectorComplexFFT::ForwardComplexToComplex((this->ComplexFFT).Ptr,param_1,(float *)pFVar14);
  pFVar15 = (this->ForwardConvBuffers).BetaReal.AllocatorInstance.Data;
  pFVar16 = (this->ForwardConvBuffers).AlphaImag.AllocatorInstance.Data;
  pFVar17 = (this->ForwardConvBuffers).AlphaReal.AllocatorInstance.Data;
  pFVar18 = (this->ForwardConvBuffers).BetaImag.AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar18 + 4);
  fVar2 = *(float *)(pFVar16 + 4);
  fVar3 = *(float *)(pFVar14 + 8);
  fVar4 = *(float *)pFVar14;
  lVar19 = (longlong)this->FFTSize;
  fVar5 = *(float *)(pFVar14 + 0xc);
  fVar6 = *(float *)(pFVar14 + (lVar19 + -2) * 4);
  fVar7 = *(float *)(pFVar14 + (lVar19 + -1) * 4);
  fVar8 = *(float *)(pFVar17 + 4);
  fVar9 = *(float *)(pFVar15 + 4);
  *param_2 = (*(float *)pFVar15 + *(float *)pFVar17) * fVar4 +
             (*(float *)pFVar16 + *(float *)pFVar18) * *(float *)(pFVar14 + 4);
  fVar10 = *(float *)(pFVar15 + 0xc);
  fVar11 = *(float *)(pFVar18 + 8);
  fVar12 = *(float *)(pFVar17 + 0xc);
  fVar13 = *(float *)(pFVar16 + 8);
  param_2[1] = (fVar1 + fVar2) * fVar4 + (fVar8 + fVar9) * *(float *)(pFVar14 + 4);
  fVar1 = *(float *)(pFVar16 + 0xc);
  fVar2 = *(float *)(pFVar18 + 0xc);
  param_2[2] = fVar3 * *(float *)(pFVar17 + 8) + fVar5 * fVar13 +
               fVar7 * fVar11 + fVar6 * *(float *)(pFVar15 + 8);
  param_2[3] = fVar5 * fVar12 + fVar3 * fVar1 + fVar7 * fVar10 + fVar6 * fVar2;
  ConvertSequence(this,&this->ForwardConvBuffers,(float *)pFVar14,4,param_2);
  param_2[lVar19] = fVar4 - *(float *)(pFVar14 + 4);
  param_2[(longlong)this->FFTSize + 1] = 0.0;
  return;
}

// ForwardScaling @ 1444fc740

EFFTScaling __thiscall Audio::FVectorRealToComplexFFT::ForwardScaling(FVectorRealToComplexFFT *this)

{
  return MultipliedBySqrtFFTSize;
}

// InitRealSequenceConversionBuffers @ 144508440

void __thiscall
Audio::FVectorRealToComplexFFT::InitRealSequenceConversionBuffers(FVectorRealToComplexFFT *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float extraout_XMM0_Da;
  uint uVar15;
  float extraout_XMM0_Db;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,(ForAnyElementType *)&this->ForwardConvBuffers,
             &(this->ForwardConvBuffers).AlphaReal.ArrayNum,
             &(this->ForwardConvBuffers).AlphaReal.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->ForwardConvBuffers).AlphaImag.AllocatorInstance,
             &(this->ForwardConvBuffers).AlphaImag.ArrayNum,
             &(this->ForwardConvBuffers).AlphaImag.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->ForwardConvBuffers).BetaReal.AllocatorInstance,
             &(this->ForwardConvBuffers).BetaReal.ArrayNum,
             &(this->ForwardConvBuffers).BetaReal.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->ForwardConvBuffers).BetaImag.AllocatorInstance,
             &(this->ForwardConvBuffers).BetaImag.ArrayNum,
             &(this->ForwardConvBuffers).BetaImag.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,(ForAnyElementType *)&this->InverseConvBuffers,
             &(this->InverseConvBuffers).AlphaReal.ArrayNum,
             &(this->InverseConvBuffers).AlphaReal.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->InverseConvBuffers).AlphaImag.AllocatorInstance,
             &(this->InverseConvBuffers).AlphaImag.ArrayNum,
             &(this->InverseConvBuffers).AlphaImag.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->InverseConvBuffers).BetaReal.AllocatorInstance,
             &(this->InverseConvBuffers).BetaReal.ArrayNum,
             &(this->InverseConvBuffers).BetaReal.ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->FFTSize,&(this->InverseConvBuffers).BetaImag.AllocatorInstance,
             &(this->InverseConvBuffers).BetaImag.ArrayNum,
             &(this->InverseConvBuffers).BetaImag.ArrayMax);
  uVar5 = __xmm_80000000800000008000000080000000;
  fVar4 = __real_3f000000;
  fVar3 = __real_bf000000;
  fVar2 = __real_3f800000;
  pFVar1 = (this->ForwardConvBuffers).AlphaImag.AllocatorInstance.Data;
  iVar10 = 0;
  if (0 < this->FFTSize) {
    pFVar7 = pFVar1 + 4;
    lVar9 = (longlong)(this->ForwardConvBuffers).AlphaReal.AllocatorInstance.Data - (longlong)pFVar1
    ;
    lVar8 = (longlong)(this->ForwardConvBuffers).BetaReal.AllocatorInstance.Data - (longlong)pFVar1;
    lVar13 = (longlong)(this->ForwardConvBuffers).BetaImag.AllocatorInstance.Data - (longlong)pFVar1
    ;
    lVar14 = (longlong)(this->InverseConvBuffers).AlphaReal.AllocatorInstance.Data -
             (longlong)pFVar1;
    lVar11 = (longlong)(this->InverseConvBuffers).AlphaImag.AllocatorInstance.Data -
             (longlong)pFVar1;
    lVar12 = (longlong)(this->InverseConvBuffers).BetaReal.AllocatorInstance.Data - (longlong)pFVar1
    ;
    lVar6 = (longlong)(this->InverseConvBuffers).BetaImag.AllocatorInstance.Data - (longlong)pFVar1;
    do {
      __libm_sse2_sincosf_();
      fVar20 = extraout_XMM0_Db * fVar4;
      iVar10 = iVar10 + 2;
      fVar17 = extraout_XMM0_Db * fVar3;
      fVar19 = (fVar2 - extraout_XMM0_Da) * fVar4;
      fVar18 = (extraout_XMM0_Da + fVar2) * fVar4;
      uVar15 = (uint)fVar17 ^ uVar5;
      *(float *)(pFVar7 + lVar9 + -4) = fVar18;
      uVar16 = (uint)fVar18 ^ uVar5;
      *(uint *)(pFVar7 + lVar9) = uVar16;
      *(float *)(pFVar7 + -4) = fVar20;
      *(float *)pFVar7 = fVar20;
      *(float *)(pFVar7 + lVar8 + -4) = fVar19;
      *(float *)(pFVar7 + lVar8) = fVar19;
      *(uint *)(pFVar7 + lVar13 + -4) = uVar15;
      *(float *)(pFVar7 + lVar13) = fVar17;
      *(float *)(pFVar7 + lVar14 + -4) = fVar18;
      *(uint *)(pFVar7 + lVar14) = uVar16;
      *(float *)(pFVar7 + lVar11 + -4) = fVar20;
      *(float *)(pFVar7 + lVar11) = fVar20;
      *(float *)(pFVar7 + lVar12 + -4) = fVar19;
      *(float *)(pFVar7 + lVar12) = fVar19;
      *(uint *)(pFVar7 + lVar6 + -4) = uVar15;
      *(float *)(pFVar7 + lVar6) = fVar17;
      pFVar7 = pFVar7 + 8;
    } while (iVar10 < this->FFTSize);
  }
  return;
}

// InverseComplexToReal @ 144508da0

void __thiscall
Audio::FVectorRealToComplexFFT::InverseComplexToReal
          (FVectorRealToComplexFFT *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FVectorComplexFFT *this_00;
  
  pFVar5 = (this->InverseConvBuffers).BetaImag.AllocatorInstance.Data;
  pFVar6 = (this->InverseConvBuffers).BetaReal.AllocatorInstance.Data;
  pFVar7 = (this->InverseConvBuffers).AlphaReal.AllocatorInstance.Data;
  pFVar8 = (this->InverseConvBuffers).AlphaImag.AllocatorInstance.Data;
  pFVar9 = (this->WorkBuffer).AllocatorInstance.Data;
  fVar1 = param_1[1];
  fVar2 = *param_1;
  *(float *)pFVar9 =
       param_1[(longlong)this->FFTSize + 1] * *(float *)pFVar5 +
       param_1[this->FFTSize] * *(float *)pFVar6 +
       fVar2 * *(float *)pFVar7 + fVar1 * *(float *)pFVar8;
  fVar3 = param_1[3];
  fVar4 = param_1[2];
  *(float *)(pFVar9 + 4) =
       param_1[this->FFTSize] * *(float *)(pFVar5 + 4) +
       param_1[(longlong)this->FFTSize + 1] * *(float *)pFVar6 +
       fVar2 * *(float *)(pFVar8 + 4) + fVar1 * *(float *)(pFVar7 + 4);
  *(float *)(pFVar9 + 8) =
       param_1[(longlong)this->FFTSize + -1] * *(float *)(pFVar5 + 8) +
       param_1[(longlong)this->FFTSize + -2] * *(float *)(pFVar6 + 8) +
       fVar4 * *(float *)(pFVar7 + 8) + fVar3 * *(float *)(pFVar8 + 8);
  *(float *)(pFVar9 + 0xc) =
       param_1[(longlong)this->FFTSize + -2] * *(float *)(pFVar5 + 0xc) +
       param_1[(longlong)this->FFTSize + -1] * *(float *)(pFVar6 + 0xc) +
       fVar4 * *(float *)(pFVar8 + 0xc) + fVar3 * *(float *)(pFVar7 + 0xc);
  ConvertSequence(this,&this->ForwardConvBuffers,param_1,4,(float *)pFVar9);
  fVar1 = __real_3f800000;
  this_00 = (this->ComplexFFT).Ptr;
  pFVar5 = (this_00->InverseWorkBuffer).AllocatorInstance.Data;
  ArrayScaledComplexConjugate((float *)pFVar9,this_00->NumFloats,(float *)pFVar5,__real_3f800000);
  FVectorComplexFFT::ForwardComplexToComplex(this_00,(float *)pFVar5,param_2);
  ArrayScaledComplexConjugate(param_2,this_00->NumFloats,param_2,fVar1 / (float)this_00->FFTSize);
  return;
}

// InverseScaling @ 144508f60

EFFTScaling __thiscall Audio::FVectorRealToComplexFFT::InverseScaling(FVectorRealToComplexFFT *this)

{
  return DividedBySqrtFFTSize;
}

// Size @ 14451d2d0

int __thiscall Audio::FVectorRealToComplexFFT::Size(FVectorRealToComplexFFT *this)

{
  return this->FFTSize;
}

