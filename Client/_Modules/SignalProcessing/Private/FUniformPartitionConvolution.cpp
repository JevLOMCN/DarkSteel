// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// FUniformPartitionConvolution @ 1444f2aa0

FUniformPartitionConvolution * __thiscall
Audio::FUniformPartitionConvolution::FUniformPartitionConvolution
          (FUniformPartitionConvolution *this,FUniformPartitionConvolutionSettings *param_1,
          TSharedRef<Audio::IFFTAlgorithm,1> *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FUniformPartitionConvolution *pFVar8;
  int iVar9;
  ulonglong uVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  int *piVar12;
  FScriptContainerElement local_68 [8];
  TSharedRef<Audio::IFFTAlgorithm,1> local_60;
  TSharedRef<Audio::IFFTAlgorithm,1> local_50;
  TSharedRef<Audio::IFFTAlgorithm,1> local_40;
  
  this->_padding_ = (longlong)&___7FUniformPartitionConvolution_Audio__6B_;
  iVar7 = param_1->NumOutputChannels;
  iVar9 = param_1->NumImpulseResponses;
  iVar5 = param_1->MaxNumImpulseResponseSamples;
  (this->Settings).NumInputChannels = param_1->NumInputChannels;
  (this->Settings).NumOutputChannels = iVar7;
  (this->Settings).NumImpulseResponses = iVar9;
  (this->Settings).MaxNumImpulseResponseSamples = iVar5;
  this->BlockSize = 0;
  this->NumFFTOutputFloats = 0;
  this->NumBlocks = 0;
  (this->TransformedAndScaledInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformedAndScaledInput).ArrayNum = 0;
  (this->TransformedAndScaledInput).ArrayMax = 0;
  (this->FFTAlgorithm).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->FFTAlgorithm).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->ImpulseResponses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpulseResponses).ArrayNum = 0;
  (this->ImpulseResponses).ArrayMax = 0;
  *(undefined8 *)&this->NonZeroGains = 0;
  *(undefined8 *)&(this->NonZeroGains).field_0x8 = 0;
  *(undefined8 *)&(this->NonZeroGains).field_0x20 = 0;
  *(undefined4 *)&(this->NonZeroGains).field_0x28 = 0;
  *(undefined4 *)&(this->NonZeroGains).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonZeroGains).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonZeroGains).field_0x34 = 0;
  *(undefined8 *)&(this->NonZeroGains).field_0x40 = 0;
  *(undefined4 *)&(this->NonZeroGains).field_0x48 = 0;
  (this->IsOutputZero).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsOutputZero).ArrayNum = 0;
  (this->IsOutputZero).ArrayMax = 0;
  iVar7 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  this->BlockSize = iVar7 / 2;
  if ((iVar7 / 2 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,0x28,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FUniformPartitionConvolution *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  this->NumFFTOutputFloats = iVar7 + 2;
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar7 + 2,&(this->TransformedAndScaledInput).AllocatorInstance,
             &(this->TransformedAndScaledInput).ArrayNum,&(this->TransformedAndScaledInput).ArrayMax
            );
  iVar7 = (this->Settings).MaxNumImpulseResponseSamples;
  iVar9 = 0;
  this->NumBlocks = (uint)(iVar7 % this->BlockSize != 0) + iVar7 / this->BlockSize;
  if (0 < (this->Settings).NumInputChannels) {
    do {
      iVar7 = (this->Inputs).ArrayNum;
      if (iVar7 == (this->Inputs).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&(this->Inputs).AllocatorInstance,&(this->Inputs).ArrayMax);
      }
      (this->Inputs).ArrayNum = iVar7 + 1;
      local_60.Object = (this->FFTAlgorithm).Object;
      pFVar3 = (this->Inputs).AllocatorInstance.Data;
      local_60.SharedReferenceCount.ReferenceController =
           (this->FFTAlgorithm).SharedReferenceCount.ReferenceController;
      if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FInput::FInput((FInput *)(pFVar3 + (longlong)iVar7 * 0x38),&local_60);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (this->Settings).NumInputChannels);
  }
  iVar7 = 0;
  if (0 < (this->Settings).NumImpulseResponses) {
    do {
      iVar9 = (this->ImpulseResponses).ArrayNum;
      if (iVar9 == (this->ImpulseResponses).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&(this->ImpulseResponses).AllocatorInstance,
                           &(this->ImpulseResponses).ArrayMax);
      }
      (this->ImpulseResponses).ArrayNum = iVar9 + 1;
      pFVar3 = (this->ImpulseResponses).AllocatorInstance.Data;
      local_50.Object = (this->FFTAlgorithm).Object;
      local_50.SharedReferenceCount.ReferenceController =
           (this->FFTAlgorithm).SharedReferenceCount.ReferenceController;
      if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FImpulseResponse::FImpulseResponse
                ((FImpulseResponse *)(pFVar3 + (longlong)iVar9 * 0x48),this->NumBlocks,&local_50);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->Settings).NumImpulseResponses);
  }
  pTVar11 = &this->IsOutputZero;
  uVar1 = (this->Settings).NumOutputChannels;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar9 = (this->Outputs).ArrayNum;
      if (iVar9 == (this->Outputs).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&(this->Outputs).AllocatorInstance,&(this->Outputs).ArrayMax);
      }
      (this->Outputs).ArrayNum = iVar9 + 1;
      pFVar3 = (this->Outputs).AllocatorInstance.Data;
      local_40.Object = (this->FFTAlgorithm).Object;
      local_40.SharedReferenceCount.ReferenceController =
           (this->FFTAlgorithm).SharedReferenceCount.ReferenceController;
      if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOutput::FOutput((FOutput *)(pFVar3 + (longlong)iVar9 * 0x48),this->NumBlocks,&local_40);
      uVar1 = (this->Settings).NumOutputChannels;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar1);
  }
  piVar12 = &(this->IsOutputZero).ArrayMax;
  uVar10 = (ulonglong)uVar1;
  local_68[0] = (FScriptContainerElement)0x1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  (this->IsOutputZero).ArrayNum = 0;
  if (*piVar12 != uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&pTVar11->AllocatorInstance,0,piVar12);
  }
  if (0 < (int)uVar1) {
    do {
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (((pFVar3 <= local_68) && (local_68 < pFVar3 + *piVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUniformPartitionConvolution *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (this->IsOutputZero).ArrayNum;
      if (iVar7 == *piVar12) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar11->AllocatorInstance,piVar12);
      }
      (this->IsOutputZero).ArrayNum = iVar7 + 1;
      (pTVar11->AllocatorInstance).Data[iVar7] = local_68[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FUniformPartitionConvolution @ 1444f4730

void __thiscall
Audio::FUniformPartitionConvolution::~FUniformPartitionConvolution
          (FUniformPartitionConvolution *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FUniformPartitionConvolution_Audio__6B_;
  pFVar1 = (this->IsOutputZero).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NonZeroGains).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NonZeroGains).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NonZeroGains);
  DestructItems<Audio::FUniformPartitionConvolution::FImpulseResponse,int>
            ((FImpulseResponse *)(this->ImpulseResponses).AllocatorInstance.Data,
             (this->ImpulseResponses).ArrayNum);
  pFVar1 = (this->ImpulseResponses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FUniformPartitionConvolution::FOutput,int>
            ((FOutput *)(this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FUniformPartitionConvolution::FInput,int>
            ((FInput *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FFTAlgorithm).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TransformedAndScaledInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IConvolutionAlgorithm_Audio__6B_;
  return;
}

// GetMatrixGain @ 144503c30

float __thiscall
Audio::FUniformPartitionConvolution::GetMatrixGain
          (FUniformPartitionConvolution *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  uVar8 = param_1 * 0x40 + param_2 + ((uint)param_1 >> 2) + 0x9e3779b9 ^ param_1;
  if (*(int *)&(this->NonZeroGains).field_0x8 != *(int *)&(this->NonZeroGains).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NonZeroGains).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NonZeroGains).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NonZeroGains).field_0x48 - 1U &
                              (uVar8 * 0x40 + -0x61c88647 + param_3 + (uVar8 >> 2) ^ uVar8)) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->NonZeroGains;
      iVar7 = iVar6;
      do {
        lVar4 = (longlong)iVar7;
        if (((*(int *)(lVar1 + lVar4 * 0x18) == param_1) &&
            (*(int *)(lVar1 + 4 + lVar4 * 0x18) == param_2)) &&
           (*(int *)(lVar1 + 8 + lVar4 * 0x18) == param_3)) {
          if (iVar7 == -1) {
            return 0.0;
          }
          goto LAB_144503d20;
        }
        iVar7 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      } while (iVar7 != -1);
    }
  }
  return 0.0;
LAB_144503d20:
  lVar4 = lVar1 + (longlong)iVar6 * 0x18;
  if (((*(int *)(lVar1 + (longlong)iVar6 * 0x18) == param_1) && (*(int *)(lVar4 + 4) == param_2)) &&
     (*(int *)(lVar4 + 8) == param_3)) {
    if (iVar6 != -1) {
      if (lVar4 == 0) goto LAB_144503d46;
      goto LAB_144503d6c;
    }
    goto LAB_144503d44;
  }
  iVar6 = *(int *)(lVar4 + 0x10);
  if (iVar6 == -1) {
LAB_144503d44:
    lVar4 = 0;
LAB_144503d46:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
LAB_144503d6c:
    return *(float *)(lVar4 + 0xc);
  }
  goto LAB_144503d20;
}

// GetMaxNumImpulseResponseSamples @ 144503d90

int __thiscall
Audio::FUniformPartitionConvolution::GetMaxNumImpulseResponseSamples
          (FUniformPartitionConvolution *this)

{
  return (this->Settings).MaxNumImpulseResponseSamples;
}

// GetNumAudioInputs @ 144504130

int __thiscall
Audio::FUniformPartitionConvolution::GetNumAudioInputs(FUniformPartitionConvolution *this)

{
  return (this->Settings).NumInputChannels;
}

// GetNumAudioOutputs @ 144504140

int __thiscall
Audio::FUniformPartitionConvolution::GetNumAudioOutputs(FUniformPartitionConvolution *this)

{
  return (this->Settings).NumOutputChannels;
}

// GetNumImpulseResponseSamples @ 1445041f0

int __thiscall
Audio::FUniformPartitionConvolution::GetNumImpulseResponseSamples
          (FUniformPartitionConvolution *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ImpulseResponses).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ImpulseResponses).AllocatorInstance.Data + (longlong)param_1 * 0x48 + 0x20)
  ;
}

// GetNumImpulseResponses @ 144504270

int __thiscall
Audio::FUniformPartitionConvolution::GetNumImpulseResponses(FUniformPartitionConvolution *this)

{
  return (this->Settings).NumImpulseResponses;
}

// GetNumSamplesInBlock @ 1445046e0

int __thiscall
Audio::FUniformPartitionConvolution::GetNumSamplesInBlock(FUniformPartitionConvolution *this)

{
  return this->BlockSize;
}

// ProcessAudioBlock @ 14450f020

void __thiscall
Audio::FUniformPartitionConvolution::ProcessAudioBlock
          (FUniformPartitionConvolution *this,float **param_1,float **param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  size_t _Size;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  void *_Dst;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  IFFTAlgorithm *pIVar10;
  code *pcVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  longlong lVar25;
  FOutput *this_00;
  uint uVar26;
  longlong lVar27;
  undefined1 local_res20 [8];
  uint local_168;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  float *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  float *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68 [2];
  undefined4 local_3c;
  
  uVar26 = 0;
  if (0 < (this->Settings).NumInputChannels) {
    lVar25 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar26 < (this->Inputs).ArrayNum) {
        uVar19 = ~uVar26 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar4 = (this->Inputs).AllocatorInstance.Data;
      pfVar5 = *param_1;
      _Dst = *(void **)(pFVar4 + lVar25 + 0x18);
      uVar6 = *(undefined8 *)(pFVar4 + lVar25 + 0x28);
      memcpy((void *)((longlong)*(int *)(pFVar4 + lVar25) * 4 + (longlong)_Dst),pfVar5,
             (longlong)*(int *)(pFVar4 + lVar25) * 4);
      (**(code **)(**(longlong **)(pFVar4 + lVar25 + 8) + 0x20))
                (*(longlong **)(pFVar4 + lVar25 + 8),_Dst,uVar6);
      memcpy(_Dst,pfVar5,(longlong)*(int *)(pFVar4 + lVar25) << 2);
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 0x38;
      param_1 = param_1 + 1;
    } while ((int)uVar26 < (this->Settings).NumInputChannels);
  }
  puVar1 = &(this->NonZeroGains).field_0x10;
  iVar21 = 0;
  iVar3 = *(int *)&(this->NonZeroGains).field_0x28;
  iVar23 = 0;
  uVar26 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar24 = *(uint **)&(this->NonZeroGains).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar19 = *puVar24;
    while (uVar19 == 0) {
      lVar25 = (longlong)iVar21;
      iVar23 = iVar23 + 0x20;
      iVar21 = iVar21 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14450f1ae;
      uVar19 = puVar24[lVar25 + 1];
    }
    uVar26 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar26 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar14 = (int)lVar25 + -1 + iVar23;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_14450f1ae:
  local_168 = *(uint *)&(this->NonZeroGains).field_0x28;
  uVar19 = local_168 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uVar26,iVar21);
  TStack_e0.CurrentBitIndex = iVar14;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)local_168 >> 5;
  TStack_e0._28_4_ = local_3c;
  TStack_e0.BaseBitIndex = iVar23;
  uStack_c0 = CONCAT44(uStack_ec,
                       *(int *)&(this->NonZeroGains).field_0x8 -
                       *(int *)&(this->NonZeroGains).field_0x34);
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_168 < 0) || (iVar3 < (int)local_168)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar26 = *(uint *)&(this->NonZeroGains).field_0x28;
  if (local_168 != uVar26) {
    puVar22 = *(undefined1 **)&(this->NonZeroGains).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)local_168 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar21 * 4);
    while (uVar20 == 0) {
      lVar25 = (longlong)iVar21;
      uVar19 = uVar19 + 0x20;
      iVar21 = iVar21 + 1;
      local_168 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14450f2d0;
      uVar20 = *(uint *)(puVar22 + lVar25 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_168 = (int)lVar25 + -1 + uVar19;
    if ((int)uVar26 < (int)local_168) {
      local_168 = uVar26;
    }
  }
LAB_14450f2d0:
  while( true ) {
    if (*(int *)&(this->NonZeroGains).field_0x8 - *(int *)&(this->NonZeroGains).field_0x34 !=
        (int)uStack_c0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_e0.CurrentBitIndex == local_168) &&
       (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->NonZeroGains).field_0x10)
       ) {
      uVar26 = 0;
      if (0 < (this->Settings).NumOutputChannels) {
        lVar16 = 0;
        lVar25 = 0;
        do {
          uVar20 = ~uVar26 >> 0x1f;
          uVar19 = 0;
          if ((int)uVar26 < (this->IsOutputZero).ArrayNum) {
            uVar19 = uVar20;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((this->IsOutputZero).AllocatorInstance.Data[lVar16] == (FScriptContainerElement)0x0) {
            uVar19 = 0;
            if ((int)uVar26 < (this->Outputs).ArrayNum) {
              uVar19 = uVar20;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            this_00 = (FOutput *)((this->Outputs).AllocatorInstance.Data + lVar25);
            pfVar5 = param_2[lVar16];
            uVar19 = this_00->HeadBlockIndex;
            uVar20 = 0;
            if ((int)uVar19 < (this_00->Blocks).ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pIVar10 = (this_00->FFTAlgorithm).Object;
            pFVar4 = (this_00->OutputBuffer).AllocatorInstance.Data;
            (**(code **)((longlong)*pIVar10 + 0x28))
                      (pIVar10,*(undefined8 *)
                                ((this_00->Blocks).AllocatorInstance.Data +
                                (longlong)(int)uVar19 * 0x10),pFVar4);
            _Size = (longlong)this_00->BlockSize * 4;
            memcpy(pfVar5,pFVar4 + _Size,_Size);
            FOutput::PopBlock(this_00);
          }
          else {
            memset(param_2[lVar16],0,(longlong)this->BlockSize << 2);
            uVar19 = 0;
            if ((int)uVar26 < (this->Outputs).ArrayNum) {
              uVar19 = uVar20;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar4 = (this->Outputs).AllocatorInstance.Data;
            uVar19 = *(uint *)(pFVar4 + lVar25 + 0x30);
            *(int *)(pFVar4 + lVar25 + 0x30) = (int)(uVar19 + 1) % *(int *)(pFVar4 + lVar25);
            uVar20 = 0;
            if ((int)uVar19 < *(int *)(pFVar4 + lVar25 + 0x40)) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            memset(*(void **)(*(longlong *)(pFVar4 + lVar25 + 0x38) + (longlong)(int)uVar19 * 0x10),
                   0,(longlong)*(int *)(pFVar4 + lVar25 + 8) << 2);
          }
          uVar26 = uVar26 + 1;
          lVar16 = lVar16 + 1;
          lVar25 = lVar25 + 0x48;
        } while ((int)uVar26 < (this->Settings).NumOutputChannels);
      }
      return;
    }
    puVar24 = (uint *)(*(longlong *)&this->NonZeroGains + (longlong)TStack_e0.CurrentBitIndex * 0x18
                      );
    uVar26 = *puVar24;
    uVar19 = puVar24[1];
    uVar20 = puVar24[2];
    fVar12 = (float)puVar24[3];
    uVar15 = 0;
    if ((int)uVar26 < (this->Inputs).ArrayNum) {
      uVar15 = ~uVar26 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar4 = (this->Inputs).AllocatorInstance.Data;
    uVar15 = 0;
    if ((int)uVar19 < (this->ImpulseResponses).ArrayNum) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar7 = (this->ImpulseResponses).AllocatorInstance.Data;
    lVar25 = (longlong)(int)uVar19;
    uVar19 = 0;
    if ((int)uVar20 < (this->Outputs).ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) break;
    lVar16 = (longlong)(int)uVar20;
    iVar3 = *(int *)(pFVar7 + lVar25 * 0x48 + 0x1c);
    lVar17 = (longlong)iVar3;
    pFVar8 = (this->Outputs).AllocatorInstance.Data;
    if (0 < iVar3) {
      VectorMultiplyByConstant
                (this,(TArray<float,TAlignedHeapAllocator<16>_> *)
                      (pFVar4 + (longlong)(int)uVar26 * 0x38 + 0x28),fVar12,
                 &this->TransformedAndScaledInput);
      uVar26 = 0;
      if (0 < iVar3) {
        lVar27 = 0;
        do {
          uVar20 = (int)(*(int *)(pFVar8 + lVar16 * 0x48 + 0x30) + uVar26) %
                   *(int *)(pFVar8 + lVar16 * 0x48);
          uVar19 = 0;
          if ((int)uVar20 < *(int *)(pFVar8 + lVar16 * 0x48 + 0x40)) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar18 = (undefined8 *)
                    ((longlong)(int)uVar20 * 0x10 + *(longlong *)(pFVar8 + lVar16 * 0x48 + 0x38));
          uVar19 = 0;
          if ((int)uVar26 < *(int *)(pFVar7 + lVar25 * 0x48 + 0x40)) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_b8 = (float *)*puVar18;
          iVar3 = *(int *)(puVar18 + 1);
          lVar9 = *(longlong *)(pFVar7 + lVar25 * 0x48 + 0x38);
          if ((iVar3 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_a8 = *(float **)(lVar27 + lVar9);
          iVar21 = *(int *)(lVar27 + 8 + lVar9);
          iStack_b0 = iVar3;
          if ((iVar21 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_98 = (this->TransformedAndScaledInput).AllocatorInstance.Data;
          iVar3 = (this->TransformedAndScaledInput).ArrayNum;
          iStack_a0 = iVar21;
          if ((iVar3 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_88._12_4_ = uStack_ac;
          local_88.ArrayNum = iStack_b0;
          local_78._12_4_ = uStack_9c;
          local_78.ArrayNum = iStack_a0;
          local_88.DataPtr = local_b8;
          local_68[0]._12_4_ = uStack_8c;
          local_68[0].ArrayNum = iVar3;
          local_68[0].DataPtr = (float *)local_98;
          local_78.DataPtr = local_a8;
          iStack_90 = iVar3;
          ArrayComplexMultiplyAdd(local_68,&local_78,&local_88);
          uVar26 = uVar26 + 1;
          lVar27 = lVar27 + 0x10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// ResetAudioHistory @ 144517c50

void __thiscall
Audio::FUniformPartitionConvolution::ResetAudioHistory(FUniformPartitionConvolution *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar8 = 0;
  if (0 < (this->Settings).NumInputChannels) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Inputs).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->Inputs).AllocatorInstance.Data;
      memset(*(void **)(pFVar9 + lVar6 + 0x18),0,(longlong)*(int *)(pFVar9 + lVar6 + 0x20) << 2);
      memset(*(void **)(pFVar9 + lVar6 + 0x28),0,(longlong)*(int *)(pFVar9 + lVar6 + 0x30) << 2);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar8 < (this->Settings).NumInputChannels);
  }
  uVar8 = 0;
  if (0 < (this->Settings).NumOutputChannels) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Outputs).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      pFVar9 = (this->Outputs).AllocatorInstance.Data + lVar6;
      if (0 < *(int *)pFVar9) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(pFVar9 + 8);
          uVar4 = 0;
          if ((int)uVar5 < *(int *)(pFVar9 + 0x40)) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          memset(*(void **)(lVar7 + *(longlong *)(pFVar9 + 0x38)),0,(longlong)iVar1 << 2);
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 0x10;
        } while ((int)uVar5 < *(int *)pFVar9);
      }
      memset(*(void **)(pFVar9 + 0x20),0,(longlong)*(int *)(pFVar9 + 4) << 3);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((int)uVar8 < (this->Settings).NumOutputChannels);
  }
  return;
}

// SetImpulseResponse @ 14451b2e0

void __thiscall
Audio::FUniformPartitionConvolution::SetImpulseResponse
          (FUniformPartitionConvolution *this,int param_1,float *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->Settings).MaxNumImpulseResponseSamples < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSamples <= Settings.MaxNumImpulseResponseSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->ImpulseResponses).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FImpulseResponse::SetImpulseResponse
            ((FImpulseResponse *)
             ((this->ImpulseResponses).AllocatorInstance.Data + (longlong)param_1 * 0x48),param_2,
             param_3);
  return;
}

// SetMatrixGain @ 14451b410

void __thiscall
Audio::FUniformPartitionConvolution::SetMatrixGain
          (FUniformPartitionConvolution *this,int param_1,int param_2,int param_3,float param_4)

{
  TMap<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  FInputTransformOutputGroup local_110 [2];
  int local_f8;
  TPairInitializer<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup_const_&,float_const_&>
  local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FInputTransformOutputGroup *local_90;
  float *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_54;
  
  this_00 = &this->NonZeroGains;
  local_110[0]._0_4_ = param_1;
  local_110[0]._4_4_ = param_2;
  local_110[0]._8_4_ = param_3;
  if (param_4 != 0.0) {
    local_90 = local_110;
    local_88 = &param_4;
    TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup_const_&,float_const_&>_>
              ((TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
                *)this_00,&local_f4,(bool *)&local_90);
    uVar11 = 0;
    if (param_3 < (this->IsOutputZero).ArrayNum) {
      uVar11 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->IsOutputZero).AllocatorInstance.Data[param_3] = (FScriptContainerElement)0x0;
    return;
  }
  if (*(int *)&(this->NonZeroGains).field_0x8 != *(int *)&(this->NonZeroGains).field_0x34) {
    uVar11 = param_2 + param_1 * 0x40 + ((uint)param_1 >> 2) + 0x9e3779b9 ^ param_1;
    TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
    ::RemoveImpl<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup>
              ((TSet<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>,TDefaultMapHashableKeyFuncs<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float,0>,FDefaultSetAllocator>
                *)this_00,uVar11 * 0x40 + param_3 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11,local_110);
  }
  local_res18 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (this->IsOutputZero).ArrayNum) {
    uVar11 = local_res18;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = &(this->NonZeroGains).field_0x10;
  local_f4.Value._4_4_ = 0;
  uStack_e4 = 1;
  local_d0 = 0;
  (this->IsOutputZero).AllocatorInstance.Data[param_3] = (FScriptContainerElement)0x1;
  iVar10 = *(int *)&(this->NonZeroGains).field_0x28;
  iVar9 = 0;
  iStack_d4 = 0;
  if (iVar10 != 0) {
    puVar13 = *(uint **)&(this->NonZeroGains).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)local_f4.Value._4_4_;
      local_d0 = local_d0 + 0x20;
      local_f4.Value._4_4_ = local_f4.Value._4_4_ + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_f4.Value._4_4_) {
        iVar9 = *(int *)&(this->NonZeroGains).field_0x28;
        iStack_d4 = iVar10;
        goto LAB_14451b596;
      }
      uVar11 = puVar13[lVar8 + 1];
    }
    iVar9 = *(int *)&(this->NonZeroGains).field_0x28;
    uStack_e4 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_e4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_d4 = local_d0 + -1 + local_res20;
    if (iVar9 < iStack_d4) {
      iStack_d4 = iVar10;
    }
  }
LAB_14451b596:
  uVar11 = *(uint *)&(this->NonZeroGains).field_0x28;
  uStack_cc = local_54;
  iStack_c8 = *(int *)&(this->NonZeroGains).field_0x8 - *(int *)&(this->NonZeroGains).field_0x34;
  uStack_d8 = 0xffffffff;
  uVar14 = uVar11 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_e4,local_f4.Value._4_4_);
  TStack_b8.CurrentBitIndex = iStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  local_f4._4_8_ = this_00;
  local_e0 = puVar1;
  local_c0 = this_00;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->NonZeroGains).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->NonZeroGains).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14451b6c0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_f8 = (int)lVar8;
    uVar11 = local_f8 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14451b6c0:
  while( true ) {
    pTVar6 = local_c0;
    if (*(int *)(&local_c0->field_0x0 + 8) - *(int *)(&local_c0->field_0x0 + 0x34) != (int)uStack_98
       ) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b8.CurrentBitIndex == uVar11) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this_00))
    break;
    lVar8 = *(longlong *)&pTVar6->field_0x0;
    puVar2 = (undefined8 *)(lVar8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    local_80 = *puVar2;
    uStack_78 = puVar2[1];
    if ((int)*(undefined8 *)(lVar8 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18) == param_3) {
      uVar11 = 0;
      if (param_3 < (this->IsOutputZero).ArrayNum) {
        uVar11 = local_res18;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->IsOutputZero).AllocatorInstance.Data[param_3] = (FScriptContainerElement)0x0;
      return;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return;
}

// VectorComplexMultiplyAdd @ 144520560

void __thiscall
Audio::FUniformPartitionConvolution::VectorComplexMultiplyAdd
          (FUniformPartitionConvolution *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  pFVar4 = (param_3->AllocatorInstance).Data;
  iVar1 = param_3->ArrayNum;
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  if (iVar3 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iVar1;
  local_28._12_4_ = uStack_4c;
  local_28.ArrayNum = iVar2;
  local_18._12_4_ = uStack_3c;
  local_18.ArrayNum = iVar3;
  local_38.DataPtr = (float *)pFVar4;
  local_28.DataPtr = (float *)pFVar5;
  local_18.DataPtr = (float *)pFVar6;
  ArrayComplexMultiplyAdd(&local_18,&local_28,&local_38);
  return;
}

// VectorMultiplyByConstant @ 144520680

void __thiscall
Audio::FUniformPartitionConvolution::VectorMultiplyByConstant
          (FUniformPartitionConvolution *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          float param_2,TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBuffer.Num() == OutBuffer.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                          ,0x105,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = param_1->ArrayNum;
  lVar19 = (longlong)(int)uVar3;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = (param_3->AllocatorInstance).Data;
  uVar20 = uVar3 & 0xfffffffc;
  lVar22 = (longlong)(int)uVar20;
  if (0 < (int)uVar20) {
    lVar17 = (lVar22 - 1U >> 2) + 1;
    pFVar16 = pFVar5;
    do {
      pFVar1 = pFVar16 + ((longlong)pFVar4 - (longlong)pFVar5);
      fVar7 = *(float *)(pFVar1 + 4);
      fVar8 = *(float *)(pFVar1 + 8);
      fVar9 = *(float *)(pFVar1 + 0xc);
      *(float *)pFVar16 = *(float *)pFVar1 * param_2;
      *(float *)(pFVar16 + 4) = fVar7 * param_2;
      *(float *)(pFVar16 + 8) = fVar8 * param_2;
      *(float *)(pFVar16 + 0xc) = fVar9 * param_2;
      lVar17 = lVar17 + -1;
      pFVar16 = pFVar16 + 0x10;
    } while (lVar17 != 0);
  }
  if (((int)uVar20 < (int)uVar3) && (0xf < uVar3 - uVar20)) {
    if ((pFVar4 + (longlong)(int)(uVar3 - 1) * 4 < pFVar5 + lVar22 * 4) ||
       (pFVar5 + (longlong)(int)(uVar3 - 1) * 4 < pFVar4 + lVar22 * 4)) {
      uVar18 = uVar3 - uVar20 & 0x8000000f;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
      }
      lVar17 = (longlong)pFVar4 - (longlong)pFVar5;
      pFVar16 = pFVar5 + (lVar22 + 4) * 4;
      do {
        pFVar2 = pFVar16 + lVar17 + -0x10;
        fVar7 = *(float *)(pFVar2 + 4);
        fVar8 = *(float *)(pFVar2 + 8);
        fVar9 = *(float *)(pFVar2 + 0xc);
        uVar20 = uVar20 + 0x10;
        lVar22 = lVar22 + 0x10;
        pFVar1 = pFVar16 + lVar17;
        fVar10 = *(float *)pFVar1;
        fVar11 = *(float *)(pFVar1 + 4);
        fVar12 = *(float *)(pFVar1 + 8);
        fVar13 = *(float *)(pFVar1 + 0xc);
        *(float *)(pFVar16 + -0x10) = *(float *)pFVar2 * param_2;
        *(float *)(pFVar16 + -0xc) = fVar7 * param_2;
        *(float *)(pFVar16 + -8) = fVar8 * param_2;
        *(float *)(pFVar16 + -4) = fVar9 * param_2;
        pFVar1 = pFVar16 + lVar17 + 0x10;
        fVar7 = *(float *)pFVar1;
        fVar8 = *(float *)(pFVar1 + 4);
        fVar9 = *(float *)(pFVar1 + 8);
        fVar14 = *(float *)(pFVar1 + 0xc);
        *(float *)pFVar16 = fVar10 * param_2;
        *(float *)(pFVar16 + 4) = fVar11 * param_2;
        *(float *)(pFVar16 + 8) = fVar12 * param_2;
        *(float *)(pFVar16 + 0xc) = fVar13 * param_2;
        pFVar1 = pFVar16 + lVar17 + 0x20;
        fVar10 = *(float *)pFVar1;
        fVar11 = *(float *)(pFVar1 + 4);
        fVar12 = *(float *)(pFVar1 + 8);
        fVar13 = *(float *)(pFVar1 + 0xc);
        *(float *)(pFVar16 + 0x10) = fVar7 * param_2;
        *(float *)(pFVar16 + 0x14) = fVar8 * param_2;
        *(float *)(pFVar16 + 0x18) = fVar9 * param_2;
        *(float *)(pFVar16 + 0x1c) = fVar14 * param_2;
        *(float *)(pFVar16 + 0x20) = fVar10 * param_2;
        *(float *)(pFVar16 + 0x24) = fVar11 * param_2;
        *(float *)(pFVar16 + 0x28) = fVar12 * param_2;
        *(float *)(pFVar16 + 0x2c) = fVar13 * param_2;
        pFVar16 = pFVar16 + 0x40;
      } while (lVar22 < (int)(uVar3 - uVar18));
    }
  }
  lVar22 = (longlong)(int)uVar20;
  if (lVar22 < lVar19) {
    if (3 < lVar19 - lVar22) {
      lVar17 = lVar22 + 1;
      lVar21 = ((lVar19 - lVar22) - 4U >> 2) + 1;
      lVar22 = lVar22 + lVar21 * 4;
      pFVar16 = pFVar5 + lVar17 * 4;
      do {
        pFVar1 = pFVar16 + 0x10;
        *(float *)(pFVar16 + -4) =
             param_2 * *(float *)(pFVar1 + (longlong)(pFVar4 + (-0x14 - (longlong)pFVar5)));
        *(float *)pFVar16 =
             param_2 * *(float *)(pFVar1 + (longlong)(pFVar4 + (-0x10 - (longlong)pFVar5)));
        *(float *)(pFVar16 + 4) =
             param_2 * *(float *)(pFVar1 + (longlong)(pFVar4 + (-0xc - (longlong)pFVar5)));
        *(float *)(pFVar16 + 8) =
             param_2 * *(float *)(pFVar1 + (longlong)(pFVar4 + (-8 - (longlong)pFVar5)));
        lVar21 = lVar21 + -1;
        pFVar16 = pFVar1;
      } while (lVar21 != 0);
      if (lVar19 <= lVar22) {
        return;
      }
    }
    lVar19 = lVar19 - lVar22;
    pFVar16 = pFVar5 + lVar22 * 4;
    do {
      *(float *)pFVar16 =
           param_2 * *(float *)(pFVar16 + 4 + (longlong)(pFVar4 + (-4 - (longlong)pFVar5)));
      lVar19 = lVar19 + -1;
      pFVar16 = pFVar16 + 4;
    } while (lVar19 != 0);
  }
  return;
}

