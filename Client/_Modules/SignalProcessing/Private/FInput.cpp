// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FInput @ 1444ef540

FInput * __thiscall
Audio::FUniformPartitionConvolution::FInput::FInput
          (FInput *this,TSharedRef<Audio::IFFTAlgorithm,1> *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FInput *pFVar9;
  
  iVar7 = (**(code **)((longlong)*param_1->Object + 8))();
  this->BlockSize = iVar7 / 2;
  (this->FFTAlgorithm).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FFTAlgorithm).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  piVar1 = &(this->InputBuffer).ArrayNum;
  piVar2 = &(this->InputBuffer).ArrayMax;
  (this->InputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->OutputBuffer).ArrayNum;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->OutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  (this->OutputBuffer).ArrayMax = 0;
  if (this->BlockSize < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                       ,0x122,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FInput *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar7 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar7,&(this->InputBuffer).AllocatorInstance,piVar1,piVar2);
  memset((this->InputBuffer).AllocatorInstance.Data + (longlong)iVar8 * 4,0,(longlong)iVar7 << 2);
  iVar7 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar7 + 2,&(this->OutputBuffer).AllocatorInstance,piVar3,
             &(this->OutputBuffer).ArrayMax);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// GetTransformedBlock @ 144504b50

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FUniformPartitionConvolution::FInput::GetTransformedBlock(FInput *this)

{
  return &this->OutputBuffer;
}

// PushBlock @ 144514680

void __thiscall Audio::FUniformPartitionConvolution::FInput::PushBlock(FInput *this,float *param_1)

{
  size_t _Size;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  IFFTAlgorithm *pIVar2;
  
  _Dst = (this->InputBuffer).AllocatorInstance.Data;
  pFVar1 = (this->OutputBuffer).AllocatorInstance.Data;
  _Size = (longlong)this->BlockSize * 4;
  memcpy(_Dst + _Size,param_1,_Size);
  pIVar2 = (this->FFTAlgorithm).Object;
  (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,_Dst,pFVar1);
  memcpy(_Dst,param_1,(longlong)this->BlockSize << 2);
  return;
}

// Reset @ 1445170a0

void __thiscall Audio::FUniformPartitionConvolution::FInput::Reset(FInput *this)

{
  memset((this->InputBuffer).AllocatorInstance.Data,0,(longlong)(this->InputBuffer).ArrayNum << 2);
  memset((this->OutputBuffer).AllocatorInstance.Data,0,(longlong)(this->OutputBuffer).ArrayNum << 2)
  ;
  return;
}

