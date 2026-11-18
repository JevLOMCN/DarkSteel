// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 3

// Call @ 148d207a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGameplayMediaEncoder::ObtainInputFrame'::__l8::<lambda_1>,void,ID3D11Texture2D_*>
::Call(void *param_1,ID3D11Texture2D **param_2)

{
  longlong lVar1;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_18;
  
  local_18.Object = *(FVideoEncoderInputFrame **)param_1;
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
  ::Remove((TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
            *)(lVar1 + 0x130),&local_18);
  return;
}

// Call @ 148d207e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGameplayMediaEncoder::Initialize'::__l2::<lambda_2>,void,unsigned_int,TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,AVEncoder::FCodecPacket_const_&>
::Call(void *param_1,uint *param_2,TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *param_3,
      FCodecPacket *param_4)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGameplayMediaEncoder *this;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> local_18;
  
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  local_18.Object = param_3->Object;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (FVideoEncoderInputFrame *)0x0;
  uVar1 = *param_2;
  this = *(FGameplayMediaEncoder **)param_1;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  FGameplayMediaEncoder::OnEncodedVideoFrame(this,uVar1,&local_18,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// Call @ 148d20830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGameplayMediaEncoder::ObtainInputFrame'::__l12::<lambda_2>,void,ID3D12Resource_*>
::Call(void *param_1,ID3D12Resource **param_2)

{
  longlong lVar1;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_18;
  
  local_18.Object = *(FVideoEncoderInputFrame **)param_1;
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
  ::Remove((TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
            *)(lVar1 + 0x130),&local_18);
  return;
}

