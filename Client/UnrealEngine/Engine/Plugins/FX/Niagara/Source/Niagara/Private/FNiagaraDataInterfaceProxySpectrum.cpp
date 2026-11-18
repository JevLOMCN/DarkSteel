// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// FNiagaraDataInterfaceProxySpectrum @ 1490b1880

FNiagaraDataInterfaceProxySpectrum * __thiscall
FNiagaraDataInterfaceProxySpectrum::FNiagaraDataInterfaceProxySpectrum
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1,float param_2,int param_3,
          float param_4,int param_5)

{
  IFFTAlgorithm *pIVar1;
  float fVar2;
  int iVar3;
  
  FNiagaraDataInterfaceProxySubmix::FNiagaraDataInterfaceProxySubmix
            ((FNiagaraDataInterfaceProxySubmix *)this,param_5);
  iVar3 = 0;
  this->FFTScale = 1.0;
  this->MinimumFrequency = 0.0;
  this->MaximumFrequency = 0.0;
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxySpectrum__6B_;
  this->NumBands = (TAtomic<int>)0x0;
  this->NoiseFloorDb = 0.0;
  this->NumChannels = 0;
  this->SampleRate = 0.0;
  (this->PopBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopBuffer).ArrayNum = 0;
  (this->PopBuffer).ArrayMax = 0;
  (this->SlidingBuffer).Ptr = (TSlidingBuffer<float> *)0x0;
  (this->ChannelSpectrumBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelSpectrumBuffers).ArrayNum = 0;
  (this->ChannelSpectrumBuffers).ArrayMax = 0;
  (this->CQTKernel).Ptr = (FContiguousSparse2DKernelTransform *)0x0;
  (this->FFTAlgorithm).Ptr = (IFFTAlgorithm *)0x0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->DeinterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeinterleavedBuffer).ArrayNum = 0;
  (this->DeinterleavedBuffer).ArrayMax = 0;
  (this->FFTInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FFTInputBuffer).ArrayNum = 0;
  (this->FFTInputBuffer).ArrayMax = 0;
  (this->FFTOutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FFTOutputBuffer).ArrayNum = 0;
  (this->FFTOutputBuffer).ArrayMax = 0;
  (this->PowerSpectrumBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PowerSpectrumBuffer).ArrayNum = 0;
  (this->PowerSpectrumBuffer).ArrayMax = 0;
  (this->SpectrumBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpectrumBuffer).ArrayNum = 0;
  (this->SpectrumBuffer).ArrayMax = 0;
  (this->WindowBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowBuffer).ArrayNum = 0;
  (this->WindowBuffer).ArrayMax = 0;
  (this->GPUBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUBuffer).NumBytes = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BufferLock,4000);
  fVar2 = __real_473b8000;
  if (__real_473b8000 != this->SampleRate) {
    ResizeAudioTransform
              (this,this->MinimumFrequency,this->MaximumFrequency,__real_473b8000,
               (int)this->NumBands);
  }
  if (this->NumChannels != 2) {
    ResizeSpectrumBuffer(this,2,(int)this->NumBands);
  }
  if ((fVar2 != this->SampleRate) || (this->NumChannels != 2)) {
    pIVar1 = (this->FFTAlgorithm).Ptr;
    if (pIVar1 != (IFFTAlgorithm *)0x0) {
      iVar3 = (**(code **)((longlong)*pIVar1 + 8))();
    }
    ResizeWindow(this,2,iVar3);
  }
  this->NumChannels = 2;
  this->SampleRate = 48000.0;
  ResizeCQT(this,param_1,param_2,param_3);
  if (__real_41200000 <= param_4) {
    param_4 = __real_41200000;
  }
  if (param_4 <= __real_c3480000) {
    param_4 = __real_c3480000;
  }
  this->NoiseFloorDb = param_4;
  return this;
}

// ~FNiagaraDataInterfaceProxySpectrum @ 1490b8130

void __thiscall
FNiagaraDataInterfaceProxySpectrum::~FNiagaraDataInterfaceProxySpectrum
          (FNiagaraDataInterfaceProxySpectrum *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FScriptContainerElement *pFVar3;
  IFFTAlgorithm *pIVar4;
  FContiguousSparse2DKernelTransform *pFVar5;
  TSlidingBuffer<float> *pTVar6;
  code *pcVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxySpectrum__6B_;
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioSpectrum.cpp"
                       ,0x2c,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (this->GPUBuffer).NumBytes = 0;
  pFVar1 = (this->GPUBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->GPUBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->GPUBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->GPUBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferLock);
  pFVar2 = (this->GPUBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->GPUBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar3 = (this->WindowBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SpectrumBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FFTOutputBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FFTInputBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DeinterleavedBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar4 = (this->FFTAlgorithm).Ptr;
  if (pIVar4 != (IFFTAlgorithm *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pFVar5 = (this->CQTKernel).Ptr;
  if (pFVar5 != (FContiguousSparse2DKernelTransform *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->ChannelSpectrumBuffers).AllocatorInstance.Data,
             (this->ChannelSpectrumBuffers).ArrayNum);
  pFVar3 = (this->ChannelSpectrumBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar6 = (this->SlidingBuffer).Ptr;
  if (pTVar6 != (TSlidingBuffer<float> *)0x0) {
    pFVar3 = (pTVar6->StorageBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar6,0x20);
  }
  pFVar3 = (this->PopBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FNiagaraDataInterfaceProxySubmix::~FNiagaraDataInterfaceProxySubmix
            ((FNiagaraDataInterfaceProxySubmix *)this);
  return;
}

// operator() @ 1490bc1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int iVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FNiagaraDataInterfaceProxySpectrum::UpdateSpectrum(*(FNiagaraDataInterfaceProxySpectrum **)this);
  uVar10 = 0;
  uVar9 = *(int *)(*(longlong *)this + 0x130) * *(int *)(*(longlong *)this + 0x138);
  lVar7 = *(longlong *)this;
  iVar1 = *(int *)(*(longlong *)this + 0x130) * 4;
  uVar8 = iVar1 * *(int *)(lVar7 + 0x138);
  if (uVar8 != *(uint *)(lVar7 + 0x200)) {
    if (*(uint *)(lVar7 + 0x200) != 0) {
      *(undefined4 *)(lVar7 + 0x200) = 0;
      pFVar3 = *(FRHIResource **)(lVar7 + 0x1f0);
      if (pFVar3 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        FRHIResource::Release(pFVar3);
      }
      pFVar3 = *(FRHIResource **)(lVar7 + 0x1f8);
      if (pFVar3 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        FRHIResource::Release(pFVar3);
      }
    }
    if (0 < (int)uVar9) {
      FReadBuffer::Initialize
                ((FReadBuffer *)(*(longlong *)this + 0x1f0),(FRHICommandListBase *)param_1,
                 L"FNiagaraDataInterfaceProxySpectrum_GPUBuffer",4,uVar9,PF_R32_FLOAT,Static,
                 (FResourceArrayUploadInterface *)0x0);
    }
  }
  if (*(int *)(*(longlong *)this + 0x200) != 0) {
    pvVar6 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x1f0),0
                        ,uVar8,RLM_WriteOnly);
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x208);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    lVar7 = *(longlong *)this;
    if (0 < *(int *)(lVar7 + 0x138)) {
      uVar11 = uVar10;
      do {
        iVar2 = *(int *)(lVar7 + 0x130);
        uVar9 = (uint)uVar10;
        lVar7 = *(longlong *)this;
        uVar8 = 0;
        if ((int)uVar9 < *(int *)(lVar7 + 0x168)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy((void *)((longlong)pvVar6 + (longlong)(int)(iVar2 * uVar9) * 4),
               *(void **)(*(longlong *)(lVar7 + 0x160) + uVar11),(longlong)iVar1);
        lVar7 = *(longlong *)this;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 0x10;
      } while ((int)(uVar9 + 1) < *(int *)(lVar7 + 0x138));
    }
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(lVar7 + 0x1f0));
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// Clamp @ 1490d2ae0

void __cdecl FNiagaraDataInterfaceProxySpectrum::Clamp(float *param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  if (*param_1 <= __real_41a00000) {
    fVar3 = __real_41a00000;
  }
  *param_1 = fVar3;
  fVar3 = *param_2;
  if (__real_469c4000 <= *param_2) {
    fVar3 = __real_469c4000;
  }
  *param_2 = fVar3;
  fVar4 = *param_1;
  if (*param_1 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_2 = fVar4;
  iVar2 = 0x4000;
  if (*param_3 < 0x4000) {
    iVar2 = *param_3;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  *param_3 = iVar1;
  return;
}

// ComputeAndPostSRV @ 1490d5a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FReadBuffer * __thiscall
FNiagaraDataInterfaceProxySpectrum::ComputeAndPostSRV(FNiagaraDataInterfaceProxySpectrum *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  FReadBuffer *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataInterfaceProxySpectrum *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxySpectrum *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxySpectrum::PostDataToGPU_::__l2::TSTR_FUpdateSpectrumBuffer158>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::TSTR_FUpdateSpectrumBuffer158>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FReadBuffer *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return &this->GPUBuffer;
}

// GetBandwidthStretch @ 149103080

float __cdecl
FNiagaraDataInterfaceProxySpectrum::GetBandwidthStretch
          (float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,__real_3f800000 / param_3);
  if (param_2 <= __real_3f800000) {
    param_2 = __real_3f800000;
  }
  fVar1 = (fVar1 - __real_3f800000) * param_4;
  if (fVar1 <= __real_3c23d70a) {
    fVar1 = __real_3c23d70a;
  }
  fVar1 = param_1 / (fVar1 * param_2);
  if (__real_40000000 <= fVar1) {
    fVar1 = __real_40000000;
  }
  if (fVar1 <= __real_3f000000) {
    fVar1 = __real_3f000000;
  }
  return fVar1;
}

// GetConstantQSettings @ 1491045e0

FPseudoConstantQKernelSettings * __cdecl
FNiagaraDataInterfaceProxySpectrum::GetConstantQSettings
          (FPseudoConstantQKernelSettings *__return_storage_ptr__,float param_1,float param_2,
          int param_3,float param_4,float param_5)

{
  __return_storage_ptr__->KernelLowestCenterFreq = param_1;
  __return_storage_ptr__->BandWidthStretch = param_5;
  __return_storage_ptr__->NumBandsPerOctave = param_4;
  __return_storage_ptr__->NumBands = param_3;
  __return_storage_ptr__->Normalization = EqualEnergy;
  return __return_storage_ptr__;
}

// GetFFTSettings @ 149105410

FFFTSettings __cdecl
FNiagaraDataInterfaceProxySpectrum::GetFFTSettings(float param_1,float param_2,float param_3)

{
  FFFTSettings FVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined2 uStackX_26;
  
  if (param_3 <= __real_3c23d70a) {
    param_3 = __real_3c23d70a;
  }
  fVar5 = param_2 * __real_40400000;
  fVar4 = powf(__real_40000000,__real_3f800000 / param_3);
  iVar2 = 8;
  fVar4 = (fVar4 - __real_3f800000) * param_1;
  if (fVar4 <= __real_3c23d70a) {
    fVar4 = __real_3c23d70a;
  }
  iVar3 = -((int)ROUND(__real_bf000000 - (fVar5 + fVar5) / fVar4) >> 1);
  if (0x100 < iVar3) {
    do {
      if (0xc < iVar2) break;
      iVar2 = iVar2 + 1;
    } while (1 << ((byte)iVar2 & 0x1f) < iVar3);
  }
  FVar1.bArrays128BitAligned = true;
  FVar1.bEnableHardwareAcceleration = true;
  FVar1.Log2Size = iVar2;
  FVar1._6_2_ = uStackX_26;
  return FVar1;
}

// GetNumBands @ 1491070c0

int __thiscall
FNiagaraDataInterfaceProxySpectrum::GetNumBands(FNiagaraDataInterfaceProxySpectrum *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioSpectrum.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (int)this->NumBands;
}

// GetNumBandsPerOctave @ 149107110

float __cdecl FNiagaraDataInterfaceProxySpectrum::GetNumBandsPerOctave(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 <= __real_3c23d70a) {
    param_2 = __real_3c23d70a;
  }
  fVar1 = (float)param_1 / param_2;
  if ((float)param_1 / param_2 <= __real_3c23d70a) {
    fVar1 = __real_3c23d70a;
  }
  return fVar1;
}

// GetNumOctaves @ 149107450

float __cdecl FNiagaraDataInterfaceProxySpectrum::GetNumOctaves(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = logf(param_2);
  fVar1 = fVar1 * __real_3fb8aa3b;
  fVar2 = logf(param_1);
  fVar1 = fVar1 - fVar2 * __real_3fb8aa3b;
  if (fVar1 <= __real_3c23d70a) {
    fVar1 = __real_3c23d70a;
  }
  return fVar1;
}

// GetSpectrumValue @ 14910a100

float __thiscall
FNiagaraDataInterfaceProxySpectrum::GetSpectrumValue
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  lVar8 = (longlong)param_2;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannelIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioSpectrum.cpp"
                       ,0x32,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar10 = (float)(*pcVar4)();
      return fVar10;
    }
  }
  if (param_2 < (this->ChannelSpectrumBuffers).ArrayNum) {
    if (param_2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        fVar10 = (float)(*pcVar4)();
        return fVar10;
      }
    }
    pFVar2 = (this->ChannelSpectrumBuffers).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar2 + lVar8 * 0x10 + 8);
    uVar9 = iVar1 - 1;
    if (-1 < (int)uVar9) {
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      fVar10 = param_1 * (float)iVar1;
      uVar6 = (int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1;
      uVar7 = uVar9;
      if ((int)uVar6 < (int)uVar9) {
        uVar7 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar7) {
        uVar6 = uVar7;
      }
      uVar7 = -((int)ROUND(__real_bf000000 - (fVar10 + fVar10)) >> 1);
      if ((int)uVar7 < (int)uVar9) {
        uVar9 = uVar7;
      }
      uVar7 = 0;
      if (0 < (int)uVar9) {
        uVar7 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar7 < iVar1) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          fVar10 = (float)(*pcVar4)();
          return fVar10;
        }
      }
      lVar3 = *(longlong *)(pFVar2 + lVar8 * 0x10);
      uVar9 = 0;
      if ((int)uVar6 < *(int *)(pFVar2 + lVar8 * 0x10 + 8)) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          fVar10 = (float)(*pcVar4)();
          return fVar10;
        }
      }
      return (fVar10 - (float)(int)uVar6) *
             (*(float *)(lVar3 + (longlong)(int)uVar7 * 4) -
             *(float *)(*(longlong *)(pFVar2 + lVar8 * 0x10) + (longlong)(int)uVar6 * 4)) +
             *(float *)(*(longlong *)(pFVar2 + lVar8 * 0x10) + (longlong)(int)uVar6 * 4);
    }
  }
  return 0.0;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911acf0

int __thiscall
FNiagaraDataInterfaceProxySpectrum::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxySpectrum *this)

{
  return 0;
}

// PostDataToGPU @ 14911f5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraDataInterfaceProxySpectrum::PostDataToGPU(FNiagaraDataInterfaceProxySpectrum *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataInterfaceProxySpectrum *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxySpectrum *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxySpectrum::PostDataToGPU_::__l2::TSTR_FUpdateSpectrumBuffer158>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::TSTR_FUpdateSpectrumBuffer158>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ResizeAudioTransform @ 14912bb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxySpectrum::ResizeAudioTransform
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1,float param_2,float param_3,
          int param_4)

{
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar1;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  *pTVar2;
  int *piVar3;
  IFFTAlgorithm *pIVar4;
  FContiguousSparse2DKernelTransform *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar11;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  TVar12;
  FStaticBasicLogRecord *pFVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FFFTSettings local_res8;
  FFFTSettings local_d8;
  undefined8 *local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8;
  
  pTVar1 = &this->FFTAlgorithm;
  pIVar4 = pTVar1->Ptr;
  if (pIVar4 != (IFFTAlgorithm *)0x0) {
    pTVar1->Ptr = (IFFTAlgorithm *)0x0;
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pTVar2 = &this->CQTKernel;
  pFVar5 = pTVar2->Ptr;
  if (pFVar5 != (FContiguousSparse2DKernelTransform *)0x0) {
    pTVar2->Ptr = (FContiguousSparse2DKernelTransform *)0x0;
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  piVar3 = &(this->FFTInputBuffer).ArrayMax;
  (this->FFTInputBuffer).ArrayNum = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->FFTInputBuffer).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->FFTOutputBuffer).ArrayMax;
  (this->FFTOutputBuffer).ArrayNum = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->FFTOutputBuffer).AllocatorInstance,0,piVar3);
  }
  (this->PowerSpectrumBuffer).ArrayNum = 0;
  if ((this->PowerSpectrumBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PowerSpectrumBuffer).AllocatorInstance,0,
               &(this->PowerSpectrumBuffer).ArrayMax);
  }
  (this->SpectrumBuffer).ArrayNum = 0;
  if ((this->SpectrumBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->SpectrumBuffer).AllocatorInstance,0,&(this->SpectrumBuffer).ArrayMax);
  }
  this->FFTScale = 1.0;
  if ((0.0 < param_3) && (0 < param_4)) {
    fVar15 = logf(param_2);
    fVar15 = fVar15 * __real_3fb8aa3b;
    fVar16 = logf(param_1);
    fVar8 = __real_40000000;
    fVar7 = __real_3f800000;
    fVar18 = __real_3c23d70a;
    fVar15 = fVar15 - fVar16 * __real_3fb8aa3b;
    if (fVar15 <= __real_3c23d70a) {
      fVar15 = __real_3c23d70a;
    }
    fVar16 = (float)param_4 / fVar15;
    if ((float)param_4 / fVar15 <= __real_3c23d70a) {
      fVar16 = __real_3c23d70a;
    }
    fVar15 = powf(__real_40000000,__real_3f800000 / fVar16);
    local_res8.Log2Size = 8;
    fVar15 = (fVar15 - fVar7) * param_1;
    if (fVar15 <= fVar18) {
      fVar15 = fVar18;
    }
    fVar18 = (param_3 * __real_40400000 + param_3 * __real_40400000) / fVar15;
    iVar14 = -((int)ROUND(__real_bf000000 - fVar18) >> 1);
    if (0x100 < iVar14) {
      do {
        if (0xc < local_res8.Log2Size) break;
        local_res8.Log2Size = local_res8.Log2Size + 1;
      } while (1 << ((byte)local_res8.Log2Size & 0x1f) < iVar14);
    }
    local_res8.bArrays128BitAligned = true;
    local_res8.bEnableHardwareAcceleration = true;
    bVar9 = Audio::FFFTFactory::AreFFTSettingsSupported
                      (&local_res8,&Audio::FFFTFactory::AnyAlgorithmFactory);
    if (bVar9) {
      TVar11 = Audio::FFFTFactory::NewFFTAlgorithm(&local_d8,(FName *)&local_res8);
      if ((IFFTAlgorithm *)pTVar1 != TVar11.Ptr) {
        pIVar4 = pTVar1->Ptr;
        pTVar1->Ptr = (IFFTAlgorithm *)*TVar11.Ptr;
        *TVar11.Ptr = (IFFTAlgorithm)0x0;
        if (pIVar4 != (IFFTAlgorithm *)0x0) {
          (**(code **)*pIVar4)(pIVar4,1);
        }
      }
      if (local_d8 != (FFFTSettings)0x0) {
        (*(code *)**(undefined8 **)local_d8)(local_d8,1);
      }
      if (pTVar1->Ptr == (IFFTAlgorithm *)0x0) {
        if ((byte)LogNiagara._0_1_ < 2) {
          return;
        }
        pFVar13 = &::LOG_Static;
      }
      else {
        iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->FFTInputBuffer,iVar14);
        iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar14 + 2,&(this->FFTOutputBuffer).AllocatorInstance,
                   &(this->FFTOutputBuffer).ArrayNum,piVar3);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(this->FFTOutputBuffer).ArrayNum / 2,
                   &(this->PowerSpectrumBuffer).AllocatorInstance,
                   &(this->PowerSpectrumBuffer).ArrayNum,&(this->PowerSpectrumBuffer).ArrayMax);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,param_4,&(this->SpectrumBuffer).AllocatorInstance,
                   &(this->SpectrumBuffer).ArrayNum,&(this->SpectrumBuffer).ArrayMax);
        iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
        fVar19 = (float)iVar14;
        if ((fVar19 <= 0.0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FFTSize > 0.f",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioSpectrum.cpp"
                               ,0x1a8,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        cVar10 = (**(code **)((longlong)*pTVar1->Ptr + 0x10))();
        if (cVar10 == '\x01') {
          fVar17 = fVar7 / (fVar19 * fVar19);
        }
        else if (cVar10 == '\x02') {
          fVar17 = fVar7 / fVar19;
        }
        else if (cVar10 == '\x03') {
          fVar17 = fVar19 * fVar19;
        }
        else {
          fVar17 = fVar19;
          if (cVar10 != '\x04') {
            fVar17 = fVar7;
          }
        }
        this->FFTScale = fVar17;
        if (fVar19 <= fVar7) {
          fVar19 = fVar7;
        }
        local_c8 = (float)param_4;
        local_b8 = 2;
        local_bc = param_3 / (fVar19 * fVar15);
        if (fVar8 <= local_bc) {
          local_bc = fVar8;
        }
        if (local_bc <= __real_3f000000) {
          local_bc = __real_3f000000;
        }
        local_c4 = fVar16;
        local_c0 = param_1;
        (**(code **)((longlong)*pTVar1->Ptr + 8))();
        TVar12 = Audio::NewPseudoConstantQKernelTransform
                           ((FPseudoConstantQKernelSettings *)&local_d0,(int)&local_c8,fVar18);
        if ((FContiguousSparse2DKernelTransform *)pTVar2 != TVar12.Ptr) {
          pFVar5 = pTVar2->Ptr;
          pTVar2->Ptr = (FContiguousSparse2DKernelTransform *)(TVar12.Ptr)->_padding_;
          (TVar12.Ptr)->_padding_ = 0;
          if (pFVar5 != (FContiguousSparse2DKernelTransform *)0x0) {
            (**(code **)pFVar5->_padding_)(pFVar5,1);
          }
        }
        if (local_d0 != (undefined8 *)0x0) {
          (**(code **)*local_d0)(local_d0,1);
        }
        if (pTVar2->Ptr != (FContiguousSparse2DKernelTransform *)0x0) {
          return;
        }
        if ((byte)LogNiagara._0_1_ < 2) {
          return;
        }
        pFVar13 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogNiagara);
    }
    else if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  return;
}

// ResizeCQT @ 14912c100

void __thiscall
FNiagaraDataInterfaceProxySpectrum::ResizeCQT
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1,float param_2,int param_3)

{
  IFFTAlgorithm *pIVar1;
  TAtomic<int> TVar2;
  int iVar3;
  int iVar4;
  TAtomic<int> TVar5;
  
  if (param_1 <= __real_41a00000) {
    param_1 = __real_41a00000;
  }
  TVar2 = (TAtomic<int>)0x4000;
  if (param_3 < 0x4000) {
    TVar2 = (TAtomic<int>)param_3;
  }
  if (__real_469c4000 <= param_2) {
    param_2 = __real_469c4000;
  }
  TVar5 = (TAtomic<int>)0x1;
  if (1 < (int)TVar2) {
    TVar5 = TVar2;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (((param_1 != this->MinimumFrequency) || (param_2 != this->MaximumFrequency)) ||
     (TVar5 != this->NumBands)) {
    if (TVar5 != this->NumBands) {
      ResizeSpectrumBuffer(this,this->NumChannels,(int)TVar5);
    }
    pIVar1 = (this->FFTAlgorithm).Ptr;
    iVar4 = 0;
    iVar3 = iVar4;
    if (pIVar1 != (IFFTAlgorithm *)0x0) {
      iVar3 = (**(code **)((longlong)*pIVar1 + 8))();
    }
    ResizeAudioTransform(this,param_1,param_2,this->SampleRate,(int)TVar5);
    pIVar1 = (this->FFTAlgorithm).Ptr;
    if (pIVar1 != (IFFTAlgorithm *)0x0) {
      iVar4 = (**(code **)((longlong)*pIVar1 + 8))();
    }
    if (iVar4 != iVar3) {
      ResizeWindow(this,this->NumChannels,iVar4);
    }
  }
  this->MinimumFrequency = param_1;
  this->MaximumFrequency = param_2;
  LOCK();
  this->NumBands = TVar5;
  UNLOCK();
  return;
}

// ResizeSpectrumBuffer @ 14912c240

void __thiscall
FNiagaraDataInterfaceProxySpectrum::ResizeSpectrumBuffer
          (FNiagaraDataInterfaceProxySpectrum *this,int param_1,int param_2)

{
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar4 = (this->ChannelSpectrumBuffers).ArrayNum;
  pTVar1 = &this->ChannelSpectrumBuffers;
  if (iVar4 < param_1) {
    uVar8 = (ulonglong)(uint)(param_1 - iVar4);
    do {
      iVar4 = (this->ChannelSpectrumBuffers).ArrayNum;
      if (iVar4 == (this->ChannelSpectrumBuffers).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&(this->ChannelSpectrumBuffers).ArrayMax
                          );
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      (this->ChannelSpectrumBuffers).ArrayNum = iVar4 + 1;
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)(pFVar6 + 8) = 0;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar9 = 0;
  if (0 < param_1) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->ChannelSpectrumBuffers).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
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
      pFVar6 = (pTVar1->AllocatorInstance).Data + lVar7;
      *(undefined4 *)(pFVar6 + 8) = 0;
      if (*(int *)(pFVar6 + 0xc) < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar6,0,(int *)(pFVar6 + 0xc));
      }
      if (0 < param_2) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,param_2,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),(int *)(pFVar6 + 0xc)
                  );
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar9 < param_1);
  }
  return;
}

// ResizeWindow @ 14912c3b0

void __thiscall
FNiagaraDataInterfaceProxySpectrum::ResizeWindow
          (FNiagaraDataInterfaceProxySpectrum *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  TSlidingBuffer<float> *pTVar6;
  TSlidingBuffer<float> *pTVar7;
  int iVar8;
  longlong local_38 [2];
  
  piVar1 = &(this->WindowBuffer).ArrayMax;
  piVar2 = &(this->WindowBuffer).ArrayNum;
  if (param_2 < 1) {
    param_2 = 1;
  }
  iVar8 = 0x400;
  if (param_2 < 0x400) {
    iVar8 = param_2;
  }
  pTVar7 = (TSlidingBuffer<float> *)0x0;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->WindowBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar8,&(this->WindowBuffer).AllocatorInstance,piVar2,piVar1);
  Audio::GenerateBlackmanWindow((float *)(this->WindowBuffer).AllocatorInstance.Data,iVar8,1,true);
  if (0 < param_1) {
    iVar8 = iVar8 * param_1;
  }
  iVar5 = iVar8 / 2;
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 != (TSlidingBuffer<float> *)0x0) {
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    pTVar7 = Audio::TSlidingBuffer<float>::TSlidingBuffer<float>(pTVar6,iVar8,iVar5);
  }
  pTVar3 = &this->SlidingBuffer;
  if (pTVar3 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)local_38) {
    if (pTVar7 == (TSlidingBuffer<float> *)0x0) {
      return;
    }
    pFVar4 = (pTVar7->StorageBuffer).AllocatorInstance.Data;
    pTVar6 = pTVar7;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pTVar6 = pTVar3->Ptr;
    pTVar3->Ptr = pTVar7;
    if (pTVar6 == (TSlidingBuffer<float> *)0x0) {
      return;
    }
    pFVar4 = (pTVar6->StorageBuffer).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pTVar6,0x20);
  return;
}

// SetAudioFormat @ 14912d2a0

void __thiscall
FNiagaraDataInterfaceProxySpectrum::SetAudioFormat
          (FNiagaraDataInterfaceProxySpectrum *this,int param_1,float param_2)

{
  IFFTAlgorithm *pIVar1;
  int iVar2;
  
  if (param_2 != this->SampleRate) {
    ResizeAudioTransform
              (this,this->MinimumFrequency,this->MaximumFrequency,param_2,(int)this->NumBands);
  }
  if (param_1 != this->NumChannels) {
    ResizeSpectrumBuffer(this,param_1,(int)this->NumBands);
  }
  if ((param_2 != this->SampleRate) || (param_1 != this->NumChannels)) {
    pIVar1 = (this->FFTAlgorithm).Ptr;
    if (pIVar1 == (IFFTAlgorithm *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)((longlong)*pIVar1 + 8))();
    }
    ResizeWindow(this,param_1,iVar2);
  }
  this->SampleRate = param_2;
  this->NumChannels = param_1;
  return;
}

// SetNoiseFloor @ 1491306a0

void __thiscall
FNiagaraDataInterfaceProxySpectrum::SetNoiseFloor
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1)

{
  if (__real_41200000 <= param_1) {
    param_1 = __real_41200000;
  }
  if (param_1 <= __real_c3480000) {
    param_1 = __real_c3480000;
  }
  this->NoiseFloorDb = param_1;
  return;
}

// UpdateCQT @ 14913efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraDataInterfaceProxySpectrum::UpdateCQT
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1,float param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  float local_c8;
  float fStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  FNiagaraDataInterfaceProxySpectrum *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8[0] = (code *)0x0;
  iStack_c0 = param_3;
  local_b8 = this;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(float *)(local_80 + 1) = param_1;
  *(float *)((longlong)local_80 + 0xc) = param_2;
  *(int *)(local_80 + 2) = iStack_c0;
  *(undefined4 *)((longlong)local_80 + 0x14) = uStack_bc;
  local_80[3] = (code *)local_b8;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  local_c8 = param_1;
  fStack_c4 = param_2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxySpectrum::UpdateCQT_::__l2::TSTR_FUpdateSpectrumBuffer90>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::TSTR_FUpdateSpectrumBuffer90>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar3);
    uVar5 = (ulonglong)local_48;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar4 = local_50;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar4 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar4 = local_80;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// UpdateNoiseFloor @ 14913fe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor
          (FNiagaraDataInterfaceProxySpectrum *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  float local_98;
  undefined4 uStack_94;
  FNiagaraDataInterfaceProxySpectrum *pFStack_90;
  code *local_88 [2];
  undefined **local_78;
  float fStack_70;
  undefined4 uStack_6c;
  FNiagaraDataInterfaceProxySpectrum *pFStack_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [2];
  FNiagaraDataInterfaceProxySpectrum *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  uStack_6c = uStack_94;
  local_98 = param_1;
  pFStack_90 = this;
  fStack_70 = param_1;
  pFStack_68 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor_::__l2::TSTR_FUpdateSpectrumBuffer136>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_48[1]._4_4_ = uStack_6c;
    local_48[1]._0_4_ = fStack_70;
    local_38 = pFStack_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48[0] = local_78;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::TSTR_FUpdateSpectrumBuffer136>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// UpdateSpectrum @ 149140610

void __thiscall
FNiagaraDataInterfaceProxySpectrum::UpdateSpectrum(FNiagaraDataInterfaceProxySpectrum *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  float fVar3;
  TAtomic<int> TVar4;
  TSlidingBuffer<float> *pTVar5;
  IFFTAlgorithm *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar21;
  int *piVar22;
  int iVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  int local_258;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_250;
  int local_240;
  int local_23c;
  int local_238;
  uint local_234;
  FContiguousSparse2DKernelTransform *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_218;
  TSlidingBuffer<float> *local_208;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  float *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  float *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  float *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  float *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  float *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TArrayView<float,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88 [4];
  
  lpCriticalSection = &this->BufferLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res10 = FNiagaraDataInterfaceProxySubmix::GetNumChannels
                          ((FNiagaraDataInterfaceProxySubmix *)this);
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              *)&this->_padding_,&local_250);
  iVar23 = local_250.ArrayNum;
  uVar14 = (ulonglong)local_250.ArrayNum;
  pFVar2 = local_250.AllocatorInstance.Data + uVar14 * 4;
  FVar17.Data = local_250.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar14 != iVar23) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar17.Data == pFVar2) {
      if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.AllocatorInstance.Data);
      }
      fVar27 = 0.0;
      goto LAB_149140737;
    }
    pTVar11 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                             *)&this->_padding_,*(uint *)FVar17.Data);
    if ((pTVar11->Object == (FNiagaraSubmixListener *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar27 = (float)(int)pTVar11->Object->SubmixSampleRate;
    if (0.0 < fVar27) break;
    uVar14 = local_250._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 4;
  }
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
LAB_149140737:
  if ((local_res10 != this->NumChannels) || (fVar27 != this->SampleRate)) {
    SetAudioFormat(this,local_res10,fVar27);
  }
  if ((this->NumChannels == 0) ||
     ((float)((uint)this->SampleRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77))
  {
    uVar16 = 0;
    if (0 < (this->ChannelSpectrumBuffers).ArrayNum) {
      lVar24 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar16 < (this->ChannelSpectrumBuffers).ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (this->ChannelSpectrumBuffers).AllocatorInstance.Data;
        iVar23 = *(int *)(pFVar2 + lVar24 + 8);
        if (0 < iVar23) {
          memset(*(void **)(pFVar2 + lVar24),0,(longlong)iVar23 << 2);
        }
        uVar16 = uVar16 + 1;
        lVar24 = lVar24 + 0x10;
      } while ((int)uVar16 < (this->ChannelSpectrumBuffers).ArrayNum);
    }
  }
  else {
    iVar9 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped((FPatchMixer *)&this->_padding_);
    pTVar21 = &this->PopBuffer;
    piVar1 = &(this->PopBuffer).ArrayMax;
    piVar22 = &(this->PopBuffer).ArrayNum;
    iVar23 = this->NumChannels;
    *piVar22 = 0;
    iVar9 = iVar9 - iVar9 % iVar23;
    if ((this->PopBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&pTVar21->AllocatorInstance,0,piVar1);
    }
    if (0 < iVar9) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar9,&pTVar21->AllocatorInstance,piVar22,piVar1);
      Audio::FPatchMixer::PopAudio
                ((FPatchMixer *)&this->_padding_,(float *)(pTVar21->AllocatorInstance).Data,iVar9,
                 false);
    }
    if (((this->FFTAlgorithm).Ptr != (IFFTAlgorithm *)0x0) &&
       ((this->CQTKernel).Ptr != (FContiguousSparse2DKernelTransform *)0x0)) {
      local_218 = (pTVar21->AllocatorInstance).Data;
      local_258 = *piVar22;
      local_23c = local_258;
      local_148 = local_218;
      if ((local_258 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar5 = (this->SlidingBuffer).Ptr;
      iVar23 = (pTVar5->StorageBuffer).ArrayNum;
      local_228 = (pTVar5->StorageBuffer).AllocatorInstance.Data;
      local_240 = iVar23;
      local_208 = pTVar5;
      iStack_140 = local_258;
      if ((iVar23 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_238 = pTVar5->NumHopSamples;
      iVar9 = pTVar5->NumUnderflowSamples;
      local_258 = (iVar23 - pTVar5->NumWindowSamples) + local_258;
      if (local_258 < 0) {
        local_258 = -1;
        iVar9 = -1;
      }
      else if (local_258 < iVar9) {
        iVar9 = -1;
      }
      local_res18 = 0;
      uVar16 = pTVar5->NumWindowSamples;
      while (local_res20 = iVar9, local_234 = uVar16, iVar9 != -1) {
        pTVar21 = &this->InterleavedBuffer;
        if (iVar9 == -1) {
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&pTVar21->AllocatorInstance,0,&(this->InterleavedBuffer).ArrayMax);
          }
        }
        else {
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
          }
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if (*piVar1 < (int)uVar16) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,uVar16,&pTVar21->AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar16,&pTVar21->AllocatorInstance,&(this->InterleavedBuffer).ArrayNum,
                     piVar1);
          iVar23 = local_240;
          iVar15 = 0;
          if (iVar9 < local_240) {
            iVar15 = local_240 - iVar9;
            memcpy((pTVar21->AllocatorInstance).Data,local_228 + (longlong)iVar9 * 4,
                   (longlong)iVar15 << 2);
          }
          if (iVar15 < (int)uVar16) {
            iVar9 = (iVar9 - iVar23) + iVar15;
            iVar23 = local_23c - iVar9;
            if ((int)(uVar16 - iVar15) < iVar23) {
              iVar23 = uVar16 - iVar15;
            }
            if (0 < iVar23) {
              memcpy((pTVar21->AllocatorInstance).Data + (longlong)iVar15 * 4,
                     local_218 + (longlong)iVar9 * 4,(longlong)iVar23 << 2);
              iVar15 = iVar15 + iVar23;
            }
            if (iVar15 < (int)uVar16) {
              memset((pTVar21->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
                     (longlong)(int)(uVar16 - iVar15) << 2);
            }
          }
        }
        iVar23 = local_res18;
        if ((local_res18 == 0) && (uVar16 = 0, 0 < this->NumChannels)) {
          lVar24 = 0;
          do {
            TVar4 = this->NumBands;
            uVar10 = 0;
            if ((int)uVar16 < (this->ChannelSpectrumBuffers).ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            memset(*(void **)((this->ChannelSpectrumBuffers).AllocatorInstance.Data + lVar24),0,
                   (longlong)(int)TVar4 << 2);
            uVar16 = uVar16 + 1;
            lVar24 = lVar24 + 0x10;
          } while ((int)uVar16 < this->NumChannels);
        }
        iVar9 = (this->InterleavedBuffer).ArrayNum;
        local_res18 = iVar23 + 1;
        iVar23 = this->NumChannels;
        pFVar2 = (pTVar21->AllocatorInstance).Data;
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((iVar9 % iVar23 != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InterleavedArray.Num() % NumChannels == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                               ,0x91,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = (int)((longlong)iVar9 / (longlong)iVar23);
        local_res10 = (0 < iVar23) - 1;
        if (0 < iVar23) {
          if (local_res10 != 0xffffffff) goto LAB_149140bd7;
          if (iVar15 < 0) {
LAB_149141388:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((longlong)iVar9 / (longlong)iVar23 & 0xffffffff);
          }
          (this->DeinterleavedBuffer).ArrayNum = 0;
          if ((this->DeinterleavedBuffer).ArrayMax < iVar15) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar15,&(this->DeinterleavedBuffer).AllocatorInstance,0,
                       &(this->DeinterleavedBuffer).ArrayMax);
          }
          while( true ) {
            local_1f8 = (this->DeinterleavedBuffer).AllocatorInstance.Data;
            iVar20 = (this->DeinterleavedBuffer).ArrayNum;
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_1e8 = (this->WindowBuffer).AllocatorInstance.Data;
            iVar12 = (this->WindowBuffer).ArrayNum;
            iStack_1f0 = iVar20;
            if ((iVar12 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_138._12_4_ = uStack_1ec;
            local_138.ArrayNum = iStack_1f0;
            local_128._12_4_ = uStack_1dc;
            local_128.ArrayNum = iVar12;
            local_128.DataPtr = (float *)local_1e8;
            local_138.DataPtr = (float *)local_1f8;
            iStack_1e0 = iVar12;
            Audio::ArrayMultiplyInPlace(&local_128,&local_138);
            memcpy((this->FFTInputBuffer).AllocatorInstance.Data,
                   (this->DeinterleavedBuffer).AllocatorInstance.Data,
                   (longlong)(this->DeinterleavedBuffer).ArrayNum << 2);
            pIVar6 = (this->FFTAlgorithm).Ptr;
            (**(code **)((longlong)*pIVar6 + 0x20))
                      (pIVar6,(this->FFTInputBuffer).AllocatorInstance.Data,
                       (this->FFTOutputBuffer).AllocatorInstance.Data);
            local_1d8 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
            iVar20 = (this->PowerSpectrumBuffer).ArrayNum;
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_1c8 = (this->FFTOutputBuffer).AllocatorInstance.Data;
            iVar12 = (this->FFTOutputBuffer).ArrayNum;
            iStack_1d0 = iVar20;
            if ((iVar12 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_118._12_4_ = uStack_1cc;
            local_118.ArrayNum = iStack_1d0;
            local_108._12_4_ = uStack_1bc;
            local_108.ArrayNum = iVar12;
            local_108.DataPtr = (float *)local_1c8;
            local_118.DataPtr = (float *)local_1d8;
            iStack_1c0 = iVar12;
            Audio::ArrayComplexToPower(&local_108,&local_118);
            local_230 = (this->CQTKernel).Ptr;
            iVar20 = (this->PowerSpectrumBuffer).ArrayNum;
            local_1b8 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_f8._12_4_ = uStack_1ac;
            local_f8.ArrayNum = iVar20;
            local_f8.DataPtr = (float *)local_1b8;
            iStack_1b0 = iVar20;
            Audio::FContiguousSparse2DKernelTransform::TransformArray
                      (local_230,&local_f8,&this->SpectrumBuffer);
            lVar24 = (longlong)(int)local_res10;
            uVar16 = 0;
            if ((int)local_res10 < (this->ChannelSpectrumBuffers).ArrayNum) {
              uVar16 = ~local_res10 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar19 = (this->ChannelSpectrumBuffers).AllocatorInstance.Data;
            local_1a8 = *(float **)(pFVar19 + lVar24 * 0x10);
            iVar20 = *(int *)(pFVar19 + lVar24 * 0x10 + 8);
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_198 = (this->SpectrumBuffer).AllocatorInstance.Data;
            iVar12 = (this->SpectrumBuffer).ArrayNum;
            iStack_1a0 = iVar20;
            if ((iVar12 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_e8._12_4_ = uStack_19c;
            local_e8.ArrayNum = iStack_1a0;
            local_d8._12_4_ = uStack_18c;
            local_d8.ArrayNum = iVar12;
            local_d8.DataPtr = (float *)local_198;
            local_e8.DataPtr = local_1a8;
            iStack_190 = iVar12;
            Audio::ArrayAddInPlace(&local_d8,&local_e8);
            if (((local_res10 == 0xffffffff) ||
                (local_res10 = local_res10 + 1, iVar23 <= (int)local_res10)) ||
               (local_res10 == 0xffffffff)) break;
LAB_149140bd7:
            if (iVar15 < 0) goto LAB_149141388;
            piVar1 = &(this->DeinterleavedBuffer).ArrayNum;
            piVar22 = &(this->DeinterleavedBuffer).ArrayMax;
            *piVar1 = 0;
            if ((this->DeinterleavedBuffer).ArrayMax < iVar15) {
              UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar15,&(this->DeinterleavedBuffer).AllocatorInstance,0,piVar22);
            }
            if (0 < iVar15) {
              UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar15,&(this->DeinterleavedBuffer).AllocatorInstance,piVar1,piVar22);
            }
            pFVar19 = (this->DeinterleavedBuffer).AllocatorInstance.Data;
            iVar20 = 0;
            lVar24 = 0;
            uVar16 = local_res10;
            if (3 < iVar15) {
              uVar16 = (iVar15 - 4U >> 2) + 1;
              uVar14 = (ulonglong)uVar16;
              lVar24 = (ulonglong)uVar16 * 4;
              iVar20 = uVar16 * 4;
              pFVar18 = pFVar19 + 8;
              uVar16 = local_res10;
              do {
                iVar12 = uVar16 + iVar23 + iVar23;
                *(undefined4 *)(pFVar18 + -8) = *(undefined4 *)(pFVar2 + (longlong)(int)uVar16 * 4);
                iVar13 = iVar12 + iVar23;
                *(undefined4 *)(pFVar18 + -4) =
                     *(undefined4 *)(pFVar2 + (longlong)(int)(uVar16 + iVar23) * 4);
                uVar16 = iVar13 + iVar23;
                *(undefined4 *)pFVar18 = *(undefined4 *)(pFVar2 + (longlong)iVar12 * 4);
                *(undefined4 *)(pFVar18 + 4) = *(undefined4 *)(pFVar2 + (longlong)iVar13 * 4);
                uVar14 = uVar14 - 1;
                pFVar18 = pFVar18 + 0x10;
              } while (uVar14 != 0);
            }
            if (iVar20 < iVar15) {
              uVar14 = (ulonglong)(uint)(iVar15 - iVar20);
              pFVar19 = pFVar19 + lVar24 * 4;
              do {
                lVar24 = (longlong)(int)uVar16;
                uVar16 = uVar16 + iVar23;
                *(undefined4 *)pFVar19 = *(undefined4 *)(pFVar2 + lVar24 * 4);
                uVar14 = uVar14 - 1;
                pFVar19 = pFVar19 + 4;
              } while (uVar14 != 0);
            }
          }
        }
        if (local_res20 == -1) break;
        uVar16 = local_234;
        iVar9 = local_res20 + local_238;
        if (local_258 < local_res20 + local_238) {
          iVar9 = -1;
        }
      }
      if (0 < local_res18) {
        uVar16 = 0;
        fVar27 = this->FFTScale;
        fVar25 = (float)local_res18;
        fVar26 = (float)((uint)this->NoiseFloorDb ^ __xmm_80000000800000008000000080000000);
        if (fVar26 <= __real_3f800000) {
          fVar26 = __real_3f800000;
        }
        fVar26 = __real_3f800000 / fVar26;
        if (0 < this->NumChannels) {
          lVar24 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar16 < (this->ChannelSpectrumBuffers).ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar2 = (this->ChannelSpectrumBuffers).AllocatorInstance.Data;
            local_188 = *(float **)(pFVar2 + lVar24);
            iVar23 = *(int *)(pFVar2 + lVar24 + 8);
            if ((iVar23 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_c8._12_4_ = uStack_17c;
            local_c8.ArrayNum = iVar23;
            local_c8.DataPtr = local_188;
            iStack_180 = iVar23;
            Audio::ArrayMultiplyByConstantInPlace(&local_c8,fVar27 / fVar25);
            local_178 = *(float **)(pFVar2 + lVar24);
            iVar23 = *(int *)(pFVar2 + lVar24 + 8);
            fVar3 = this->NoiseFloorDb;
            if ((iVar23 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_b8._12_4_ = uStack_16c;
            local_b8.ArrayNum = iVar23;
            local_b8.DataPtr = local_178;
            iStack_170 = iVar23;
            Audio::ArrayPowerToDecibelInPlace(&local_b8,fVar3);
            local_168 = *(float **)(pFVar2 + lVar24);
            iVar23 = *(int *)(pFVar2 + lVar24 + 8);
            fVar3 = this->NoiseFloorDb;
            if ((iVar23 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_a8._12_4_ = uStack_15c;
            local_a8.ArrayNum = iVar23;
            local_a8.DataPtr = local_168;
            iStack_160 = iVar23;
            Audio::ArraySubtractByConstantInPlace(&local_a8,fVar3);
            local_158 = *(float **)(pFVar2 + lVar24);
            iVar23 = *(int *)(pFVar2 + lVar24 + 8);
            if ((iVar23 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_98._12_4_ = uStack_14c;
            local_98.ArrayNum = iVar23;
            local_98.DataPtr = local_158;
            iStack_150 = iVar23;
            Audio::ArrayMultiplyByConstantInPlace(&local_98,fVar26);
            uVar16 = uVar16 + 1;
            lVar24 = lVar24 + 0x10;
          } while ((int)uVar16 < this->NumChannels);
        }
      }
      local_88[0]._12_4_ = uStack_13c;
      local_88[0].ArrayNum = iStack_140;
      local_88[0].DataPtr = (float *)local_148;
      Audio::TSlidingBuffer<float>::StoreForFutureWindows(local_208,local_88);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149141381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

