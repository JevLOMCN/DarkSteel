// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// FNiagaraDataInterfaceProxyOscilloscope @ 1490b16a0

FNiagaraDataInterfaceProxyOscilloscope * __thiscall
FNiagaraDataInterfaceProxyOscilloscope::FNiagaraDataInterfaceProxyOscilloscope
          (FNiagaraDataInterfaceProxyOscilloscope *this,int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  int iVar4;
  FDelegateHandle FVar5;
  int iVar6;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyOscilloscope__6B_;
  *(undefined8 *)&this->SubmixListeners = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x8 = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x20 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x28 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubmixListeners).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubmixListeners).field_0x34 = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x40 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x48 = 0;
  memset(&this->PatchMixer,0,0xa8);
  Audio::FPatchMixer::FPatchMixer(&this->PatchMixer);
  this->Resolution = param_1;
  pTVar3 = &this->VectorVMReadBuffer;
  this->ScopeInMilliseconds = param_2;
  this->SubmixRegisteredTo = (USoundSubmix *)0x0;
  piVar1 = &(this->VectorVMReadBuffer).ArrayNum;
  this->bIsSubmixListenerRegistered = false;
  piVar2 = &(this->VectorVMReadBuffer).ArrayMax;
  (this->PopBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopBuffer).ArrayNum = 0;
  (this->PopBuffer).ArrayMax = 0;
  (this->DownsampledBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownsampledBuffer).ArrayNum = 0;
  (this->DownsampledBuffer).ArrayMax = 0;
  (this->GPUDownsampledBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUDownsampledBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUDownsampledBuffer).NumBytes = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->NumChannelsInDownsampledBuffer).Counter = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DownsampleBufferLock,4000);
  FVar5 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FNiagaraDataInterfaceProxyOscilloscope>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
                     (FNiagaraDataInterfaceProxyOscilloscope *)&stack0x00000008,(pmf_b1e7dbd2)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceCreatedHandle).ID = *FVar5.ID;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FNiagaraDataInterfaceProxyOscilloscope>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                     (FNiagaraDataInterfaceProxyOscilloscope *)&stack0x00000008,(pmf_b1e7dbd2)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceDestroyedHandle).ID = *FVar5.ID;
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  iVar6 = this->Resolution << 3;
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,&pTVar3->AllocatorInstance,piVar1,piVar2);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)iVar6 << 2);
  return this;
}

// ~FNiagaraDataInterfaceProxyOscilloscope @ 1490b8000

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::~FNiagaraDataInterfaceProxyOscilloscope
          (FNiagaraDataInterfaceProxyOscilloscope *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyOscilloscope__6B_;
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                       ,0x2c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->GPUDownsampledBuffer).NumBytes = 0;
  pFVar1 = (this->GPUDownsampledBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->GPUDownsampledBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->GPUDownsampledBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->GPUDownsampledBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DownsampleBufferLock);
  pFVar3 = (this->VectorVMReadBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar2 = (this->GPUDownsampledBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->GPUDownsampledBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar3 = (this->DownsampledBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PopBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  Audio::FPatchMixer::~FPatchMixer(&this->PatchMixer);
  *(undefined4 *)&(this->SubmixListeners).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SubmixListeners).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubmixListeners);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  return;
}

// operator() @ 1490bc0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  void *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  size_t _Size;
  
  FNiagaraDataInterfaceProxyOscilloscope::DownsampleAudioToBuffer
            (*(FNiagaraDataInterfaceProxyOscilloscope **)this);
  lVar1 = *(longlong *)this;
  _Size = (longlong)*(int *)(lVar1 + 0x138) << 2;
  if ((_Size != 0) && (*(int *)(lVar1 + 0x150) == 0)) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(lVar1 + 0x140),(FRHICommandListBase *)param_1,L"GPUDownsampledBuffer"
               ,4,*(int *)(lVar1 + 0x158) * *(int *)(*(longlong *)this + 0x114),PF_R32_FLOAT,Static,
               (FResourceArrayUploadInterface *)0x0);
  }
  if (*(int *)(*(longlong *)this + 0x150) != 0) {
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x140),0,
                      (uint)_Size,RLM_WriteOnly);
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x180);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    memcpy(_Dst,*(void **)(*(longlong *)this + 0x130),_Size);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x140));
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// operator() @ 1490bea60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHIResource *pFVar2;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x150) != 0) {
    *(undefined4 *)(lVar1 + 0x150) = 0;
    pFVar2 = *(FRHIResource **)(lVar1 + 0x140);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(undefined8 *)(lVar1 + 0x140) = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar2 = *(FRHIResource **)(lVar1 + 0x148);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(undefined8 *)(lVar1 + 0x148) = 0;
      FRHIResource::Release(pFVar2);
    }
  }
  FReadBuffer::Initialize
            ((FReadBuffer *)(*(longlong *)((longlong)this + 8) + 0x140),
             (FRHICommandListBase *)param_1,
             L"FNiagaraDataInterfaceProxyOscilloscope_GPUDownsampledBuffer",4,*(uint *)this,
             PF_R32_FLOAT,Static,(FResourceArrayUploadInterface *)0x0);
  return;
}

// operator() @ 1490beb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>::operator()
          (void *this,uint param_1,FAudioDevice *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  atomic<int> aVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  float fVar13;
  undefined1 local_res8 [8];
  atomic<int> local_res10 [2];
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  atomic<int> *local_38;
  TReferenceControllerBase<1> **local_30;
  
  lVar2 = *(longlong *)this;
  local_res10[0] = (atomic<int>)param_1;
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar12 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar12 = lVar2 + 0x48;
    }
    iVar8 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        if (*(uint *)((longlong)iVar8 * 0x20 + *(longlong *)(lVar2 + 0x10)) == param_1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SubmixListeners.Contains(DeviceId)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                             ,0x37,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)(lVar2 + 0x10));
      } while (iVar8 != -1);
    }
  }
  lVar2 = *(longlong *)this;
  fVar13 = (float)param_2->SampleRate * *(float *)(lVar2 + 0x118) * __real_3b03126f -
           __real_3f000000;
  pTVar9 = ::operator_new(0x60);
  aVar6 = local_res10[0];
  fVar5 = __real_3f800000;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTStack_40 = _UNK_150651568;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSubmixListener___00_SharedPointerInternals__6B_
    ;
    lVar12 = *(longlong *)(lVar2 + 0x108);
    pTVar9[1]._padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    Audio::FPatchMixer::AddNewInput
              ((FPatchMixer *)(lVar2 + 0x60),(FPatchInput *)(pTVar9 + 3),
               ((int)ROUND(fVar13) >> 1) << 3,fVar5);
    pTVar9[4].SharedReferenceCount = aVar6;
    pTVar11 = pTVar9 + 1;
    pTVar9[5]._padding_ = lVar12;
    *(undefined1 *)&pTVar9[5].SharedReferenceCount = 0;
    local_48 = pTVar11;
    pTStack_40 = pTVar9;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1490bed13;
    }
  }
  lVar12._0_4_ = pTVar11->SharedReferenceCount;
  lVar12._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar12 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pTVar11[1]._padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pTVar11[1]._padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_1490bed13:
  local_38 = local_res10;
  local_30 = &local_48;
  TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,TSharedRef<FNiagaraSubmixListener,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),
             (TPairInitializer<unsigned_int_&,TSharedRef<FNiagaraSubmixListener,1>_&&> *)local_res8,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pTVar10 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
            ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                           *)(*(longlong *)this + 0x10),(uint)local_res10[0]);
  if ((pTVar10->Object == (FNiagaraSubmixListener *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraSubmixListener::RegisterToSubmix(pTVar10->Object);
  return;
}

// operator() @ 1490bedc0

void __thiscall
`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>::
operator()(void *this,uint param_1,FAudioDevice *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint local_res10 [6];
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar5 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar5 = lVar1 + 0x48;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar1 + 0x58) - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar1 + 0x10)) == param_1)
        goto LAB_1490bee3a;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(lVar1 + 0x10));
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubmixListeners.Contains(DeviceId)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                     ,0x48,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1490bee3a:
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    local_res10[0] = param_1;
    TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),param_1,local_res10);
  }
  return;
}

// ComputeAndPostSRV @ 1490d5920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FReadBuffer * __thiscall
FNiagaraDataInterfaceProxyOscilloscope::ComputeAndPostSRV
          (FNiagaraDataInterfaceProxyOscilloscope *this)

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
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU_::__l2::TSTR_FUpdateDIAudioBuffer462>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::TSTR_FUpdateDIAudioBuffer462>
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
  return &this->GPUDownsampledBuffer;
}

// DownsampleAudioToBuffer @ 1490ec440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FNiagaraDataInterfaceProxyOscilloscope::DownsampleAudioToBuffer
          (FNiagaraDataInterfaceProxyOscilloscope *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  code *pcVar7;
  TMap<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  float fVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  FResamplingParameters local_e8;
  TMap<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FResamplerResults local_70 [2];
  
  lpCriticalSection = &this->DownsampleBufferLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar10 = *(int *)&(this->SubmixListeners).field_0x28;
  puVar1 = &(this->SubmixListeners).field_0x10;
  local_d0 = &this->SubmixListeners;
  local_res10 = 0;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->SubmixListeners).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1490ec50e;
      uVar13 = puVar17[lVar12 + 1];
    }
    uStack_c4 = -uVar13 & uVar13;
    uVar5 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_b4 = local_b0 + -1 + local_res18;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_1490ec50e:
  uVar13 = *(uint *)&(this->SubmixListeners).field_0x28;
  iStack_a8 = *(int *)&(this->SubmixListeners).field_0x8 -
              *(int *)&(this->SubmixListeners).field_0x34;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = iStack_b4;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_a0 = local_d0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar10 = (*pcVar7)();
    return iVar10;
  }
  uVar6 = *(uint *)&(this->SubmixListeners).field_0x28;
  if (uVar13 != uVar6) {
    puVar16 = *(undefined1 **)&(this->SubmixListeners).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1490ec620;
      uVar13 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar13 = local_res20 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_1490ec620:
  do {
    pTVar8 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar8 == &this->SubmixListeners)) goto LAB_1490ec965;
    lVar12 = *(longlong *)pTVar8;
    lVar15 = (longlong)TStack_98.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar15 + 8 + lVar12) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    iVar10 = *(int *)(*(longlong *)(lVar15 + 8 + lVar12) + 0x18);
    if ((*(longlong *)(lVar15 + 8 + lVar12) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    fVar19 = (float)*(int *)(*(longlong *)(lVar15 + 8 + lVar12) + 0x1c);
    if (iVar10 != 0) {
      if (__real_322bcc77 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if ((iVar10 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumChannels > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                               ,0x1fc,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        pTVar4 = &this->PopBuffer;
        piVar2 = &(this->PopBuffer).ArrayNum;
        LOCK();
        (this->NumChannelsInDownsampledBuffer).Counter = iVar10;
        UNLOCK();
        uVar13 = ((int)ROUND(fVar19 * this->ScopeInMilliseconds * __real_3b03126f - __real_3f000000)
                 >> 1) + 3U & 0xfffffffc;
        iVar14 = uVar13 * iVar10;
        if (*piVar2 != iVar14) {
          piVar3 = &(this->PopBuffer).ArrayMax;
          *piVar2 = 0;
          if ((this->PopBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&pTVar4->AllocatorInstance,0,piVar3);
          }
          iVar11 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                             (4,4,iVar14,&pTVar4->AllocatorInstance,&(this->PopBuffer).ArrayNum,
                              piVar3);
          memset((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 4,0,(longlong)iVar14 << 2);
        }
        iVar11 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(&this->PatchMixer);
        if (iVar14 <= iVar11) {
          Audio::FPatchMixer::PopAudio
                    (&this->PatchMixer,(float *)(pTVar4->AllocatorInstance).Data,iVar14,true);
        }
        local_e8.ResamplerMethod = Linear;
        local_e8.DestinationSampleRate = ((float)this->Resolution / (float)(int)uVar13) * fVar19;
        local_e8.NumChannels = iVar10;
        local_e8.SourceSampleRate = fVar19;
        local_e8.InputBuffer = pTVar4;
        local_res10 = Audio::GetOutputBufferSize(&local_e8);
        pTVar4 = &this->DownsampledBuffer;
        piVar2 = &(this->DownsampledBuffer).ArrayMax;
        piVar3 = &(this->DownsampledBuffer).ArrayNum;
        *piVar3 = 0;
        if ((this->DownsampledBuffer).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar4->AllocatorInstance,0,piVar2);
        }
        iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                           (4,4,local_res10,&pTVar4->AllocatorInstance,piVar3,piVar2);
        memset((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 4,0,(longlong)local_res10 << 2)
        ;
        local_70[0].ResultingSampleRate = 0.0;
        local_70[0].InputFramesUsed = 0;
        local_70[0].OutputFramesGenerated = 0;
        local_70[0].OutBuffer = pTVar4;
        bVar9 = Audio::Resample(&local_e8,local_70);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bResampleResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                               ,0x225,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed
                  (pTVar4,iVar10 * this->Resolution,Default);
        if (((this->VectorVMReadBuffer).ArrayNum < (this->DownsampledBuffer).ArrayNum) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DownsampledBuffer.Num() <= VectorVMReadBuffer.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                               ,0x22a,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        memcpy((this->VectorVMReadBuffer).AllocatorInstance.Data,(pTVar4->AllocatorInstance).Data,
               (longlong)(this->VectorVMReadBuffer).ArrayNum);
        local_res10 = this->Resolution;
      }
LAB_1490ec965:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return local_res10;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// GetNumChannels @ 149107140

int __thiscall
FNiagaraDataInterfaceProxyOscilloscope::GetNumChannels(FNiagaraDataInterfaceProxyOscilloscope *this)

{
  return (this->NumChannelsInDownsampledBuffer).Counter;
}

// OnBeginDestroy @ 149119bd0

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::OnBeginDestroy(FNiagaraDataInterfaceProxyOscilloscope *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->DeviceCreatedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceCreated,FVar1);
  }
  FVar1.ID = (this->DeviceDestroyedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,FVar1);
  }
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  if (this->bIsSubmixListenerRegistered != false) {
    UnregisterFromAllAudioDevices(this,this->SubmixRegisteredTo);
    return;
  }
  return;
}

// OnDeviceDestroyed @ 14911a150

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::OnDeviceDestroyed
          (FNiagaraDataInterfaceProxyOscilloscope *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res8 [8];
  
  if ((this->bIsSubmixListenerRegistered != false) &&
     (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34)) {
    puVar3 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SubmixListeners).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->SubmixListeners).field_0x0;
      while (*(uint *)((longlong)iVar2 * 0x20 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res8[0] = param_1;
      TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
                  *)&this->SubmixListeners,param_1,local_res8);
    }
  }
  return;
}

// OnNewDeviceCreated @ 14911a250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::OnNewDeviceCreated
          (FNiagaraDataInterfaceProxyOscilloscope *this,uint param_1)

{
  int *piVar1;
  USoundSubmix *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  atomic<int> aVar7;
  bool bVar8;
  int iVar9;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar12;
  undefined1 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  undefined1 local_res8 [8];
  atomic<int> local_res10 [2];
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  atomic<int> *local_38;
  TReferenceControllerBase<1> **local_30;
  
  if (this->bIsSubmixListenerRegistered == false) {
    return;
  }
  local_res10[0] = (atomic<int>)param_1;
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SubmixListeners).field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)((longlong)iVar9 * 0x20 + *(longlong *)&this->SubmixListeners) == param_1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SubmixListeners.Contains(InID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                             ,0x62,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this->SubmixListeners);
      } while (iVar9 != -1);
    }
  }
  this_00 = FAudioDeviceManager::Get();
  pFVar10 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,(uint)local_res10[0]);
  if (pFVar10 == (FAudioDevice *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<936582687647334501>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                       ,0x65,"DeviceHandle");
    if (!bVar8) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar15 = (float)pFVar10->SampleRate * this->ScopeInMilliseconds * __real_3b03126f -
           __real_3f000000;
  pTVar11 = ::operator_new(0x60);
  aVar7 = local_res10[0];
  fVar6 = __real_3f800000;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTStack_40 = _UNK_150651568;
    pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSubmixListener___00_SharedPointerInternals__6B_
    ;
    pUVar2 = this->SubmixRegisteredTo;
    pTVar11[1]._padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    Audio::FPatchMixer::AddNewInput
              (&this->PatchMixer,(FPatchInput *)(pTVar11 + 3),((int)ROUND(fVar15) >> 1) << 3,fVar6);
    pTVar11[4].SharedReferenceCount = aVar7;
    pTVar14 = pTVar11 + 1;
    pTVar11[5]._padding_ = (longlong)pUVar2;
    *(undefined1 *)&pTVar11[5].SharedReferenceCount = 0;
    local_48 = pTVar14;
    pTStack_40 = pTVar11;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14911a4a8;
    }
  }
  lVar3._0_4_ = pTVar14->SharedReferenceCount;
  lVar3._4_4_ = pTVar14->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar14[1]._padding_ == 0)) || (*(int *)(pTVar14[1]._padding_ + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar14->SharedReferenceCount = pTVar14;
    if (pTVar11 != (TReferenceControllerBase<1> *)pTVar14[1]._padding_) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar14[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar14[1]._padding_ = (longlong)pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14911a4a8:
  local_38 = local_res10;
  local_30 = &local_48;
  TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,TSharedRef<FNiagaraSubmixListener,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
              *)&this->SubmixListeners,
             (TPairInitializer<unsigned_int_&,TSharedRef<FNiagaraSubmixListener,1>_&&> *)local_res8,
             (bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pTVar12 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
            ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                           *)&this->SubmixListeners,(uint)local_res10[0]);
  if ((pTVar12->Object == (FNiagaraSubmixListener *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNiagaraSubmixListener::RegisterToSubmix(pTVar12->Object);
  return;
}

// OnUpdateResampling @ 14911a870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling
          (FNiagaraDataInterfaceProxyOscilloscope *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 uStack_94;
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_90;
  code *local_88 [2];
  undefined **local_78 [2];
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [2];
  FNiagaraDataInterfaceProxyOscilloscope *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this->Resolution = param_1;
  this->ScopeInMilliseconds = param_2;
  local_98 = (this->NumChannelsInDownsampledBuffer).Counter * this->Resolution;
  if (local_98 != 0) {
    local_78[1]._4_4_ = uStack_94;
    local_78[1]._0_4_ = local_98;
    local_78[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    pFStack_90 = this;
    pFStack_68 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling_::__l5::TSTR_FUpdateDIAudioBuffer342>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48[0] = local_78[0];
      local_48[1] = local_78[1];
      local_38 = pFStack_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::TSTR_FUpdateDIAudioBuffer342>
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
      pppuVar4 = local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed
              (&this->VectorVMReadBuffer,this->Resolution << 3,Default);
  }
  return;
}

// OnUpdateSubmix @ 14911aa20

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::OnUpdateSubmix
          (FNiagaraDataInterfaceProxyOscilloscope *this,USoundSubmix *param_1)

{
  FAudioDeviceManager *this_00;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataInterfaceProxyOscilloscope *local_20;
  undefined8 local_10;
  
  if (this->bIsSubmixListenerRegistered != false) {
    UnregisterFromAllAudioDevices(this,param_1);
  }
  this->SubmixRegisteredTo = param_1;
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_20 = this;
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  this->bIsSubmixListenerRegistered = true;
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911ace0

int __thiscall
FNiagaraDataInterfaceProxyOscilloscope::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyOscilloscope *this)

{
  return 0;
}

// PostAudioToGPU @ 14911f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU(FNiagaraDataInterfaceProxyOscilloscope *this)

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
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxyOscilloscope *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU_::__l2::TSTR_FUpdateDIAudioBuffer462>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::TSTR_FUpdateDIAudioBuffer462>
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

// RegisterToAllAudioDevices @ 149126a90

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices
          (FNiagaraDataInterfaceProxyOscilloscope *this)

{
  FAudioDeviceManager *this_00;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataInterfaceProxyOscilloscope *local_20;
  undefined8 local_10;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_20 = this;
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  this->bIsSubmixListenerRegistered = true;
  return;
}

// SampleAudio @ 14912c510

float __thiscall
FNiagaraDataInterfaceProxyOscilloscope::SampleAudio
          (FNiagaraDataInterfaceProxyOscilloscope *this,float param_1,int param_2,int param_3,
          int param_4)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    iVar8 = param_4;
    if (param_2 < param_4) {
      iVar8 = param_2;
    }
    iVar3 = 0;
    if (0 < iVar8) {
      iVar3 = iVar8;
    }
    fVar9 = param_1 * (float)(param_3 / param_4);
    iVar8 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
    uVar6 = iVar8 * param_4 + iVar3;
    uVar5 = 0;
    if ((int)uVar6 < (this->VectorVMReadBuffer).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
    }
    iVar7 = iVar8 + 1;
    if (param_3 <= iVar8) {
      iVar7 = iVar8;
    }
    fVar1 = *(float *)((this->VectorVMReadBuffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)
    ;
    uVar6 = param_4 * iVar7 + iVar3;
    uVar5 = 0;
    if ((int)uVar6 < (this->VectorVMReadBuffer).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
    }
    return (*(float *)((this->VectorVMReadBuffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)
           - fVar1) * ((float)iVar7 - fVar9) + fVar1;
  }
  return 0.0;
}

// UnregisterFromAllAudioDevices @ 14913ead0

void __thiscall
FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices
          (FNiagaraDataInterfaceProxyOscilloscope *this,USoundSubmix *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataInterfaceProxyOscilloscope *local_20;
  undefined8 local_10;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_20 = this;
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<936582687647334477>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioOscilloscope.cpp"
                       ,0x4d,"SubmixListeners.Num() == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
           *)&this->SubmixListeners);
  return;
}

