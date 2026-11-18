// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 3

// <lambda_invoker_cdecl> @ 148cff3b0

FVideoDecoderH264_WindowsImpl * __cdecl
`AVEncoder::FVideoDecoderH264_Windows::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FVideoDecoderH264_WindowsImpl *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FEvent *pFVar5;
  
  pFVar1 = ::operator_new(0x160);
  pTVar4 = (TNode *)0x0;
  if (pFVar1 == (FVideoDecoderH264_WindowsImpl *)0x0) {
    return (FVideoDecoderH264_WindowsImpl *)0x0;
  }
  *(undefined8 *)&pFVar1->field_0x10 = 0;
  *(undefined8 *)&pFVar1->field_0x38 = 0;
  *(undefined8 *)&pFVar1->field_0x40 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined8 *)&pFVar1->field_0x98 = 0;
  *(undefined8 *)&pFVar1->field_0xa0 = 0;
  *(undefined ***)pFVar1 = &___7FVideoDecoderH264_WindowsImpl_AVEncoder__6B_;
  (pFVar1->DXDeviceInfo).DxVersion = VersionUnknown;
  (pFVar1->DXDeviceInfo).DxDevice.Reference = (ID3D11Device *)0x0;
  (pFVar1->DXDeviceInfo).DxDeviceContext.Reference = (ID3D11DeviceContext *)0x0;
  (pFVar1->DXDeviceInfo).DxDeviceManager.Reference = (IMFDXGIDeviceManager *)0x0;
  (pFVar1->DXDeviceInfo).DxMainAppDevice11.Reference = (ID3D11Device *)0x0;
  (pFVar1->DXDeviceInfo).DxMainAppDevice12.Reference = (ID3D12Device *)0x0;
  pTVar2 = ::operator_new(0x10);
  pTVar3 = pTVar4;
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Ptr = (FInputToDecode *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Ptr = (FInputToDecode *)0x0;
    pTVar3 = pTVar2;
  }
  (pFVar1->InputQueue).Tail = pTVar3;
  (pFVar1->InputQueue).Head = pTVar3;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Ptr = (FInputToDecode *)0x0;
    pTVar3->NextNode = (TNode *)0x0;
    pTVar4 = pTVar3;
  }
  (pFVar1->OutputQueue).Tail = (TNode *)pTVar4;
  (pFVar1->OutputQueue).Head = (TNode *)pTVar4;
  (pFVar1->WorkerThread).Ptr = (FThread *)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  (pFVar1->WorkerThreadSignalHaveWork).Event = pFVar5;
  (pFVar1->DecoderTransform).Reference = (IMFTransform *)0x0;
  (pFVar1->CurrentOutputMediaType).Reference = (IMFMediaType *)0x0;
  (pFVar1->CurrentDecoderOutputBuffer).Ptr = (FDecoderOutputBuffer *)0x0;
  (pFVar1->DecoderOutputStreamInfo).dwFlags = 0;
  (pFVar1->DecoderOutputStreamInfo).cbSize = 0;
  (pFVar1->DecoderOutputStreamInfo).cbAlignment = 0;
  pFVar1->bIsHardwareAccelerated = false;
  pFVar1->bRequiresReconfigurationForSW = false;
  pFVar1->bIsInitialized = false;
  pFVar1->DecodeMode = Undefined;
  pFVar1->bTerminateWorkerThread = false;
  pFVar1->CurrentApplicationOutputSample = (FVideoDecoderOutputH264_Windows *)0x0;
  pFVar1->CurrentSoftwareDecoderOutput = (FF5PlayerVideoDecoderOutputDX *)0x0;
  pFVar1->NumFramesInDecoder = 0;
  return pFVar1;
}

// ~FVideoDecoderH264_Windows @ 148d01580

void __thiscall
AVEncoder::FVideoDecoderH264_Windows::~FVideoDecoderH264_Windows(FVideoDecoderH264_Windows *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FVideoDecoder_AVEncoder__6B_;
  if (*(longlong *)&this->field_0xa0 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlatformDecoderAllocInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x70 != 0) {
    plVar3 = (longlong *)&this->field_0x80;
    if (*(longlong **)&this->field_0x98 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x98;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->field_0x40 != 0) {
    plVar3 = (longlong *)&this->field_0x50;
    if (*(longlong **)&this->field_0x68 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar3 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x38;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d0148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// Register @ 148d10e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AVEncoder::FVideoDecoderH264_Windows::Register(FVideoDecoderFactory *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FVideoDecoderInfo local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.CodecType = H264;
  local_58.ID = 0;
  local_20 = (undefined ***)0x0;
  local_58.MaxWidth = 0x780;
  local_38 = &
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_WindowsImpl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `AVEncoder::FVideoDecoderH264_Windows::Register'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderH264_WindowsImpl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
                ::Call;
  local_58.MaxHeight = 0x440;
  FVideoDecoderFactory::Register
            (param_1,&local_58,(TFunction<AVEncoder::FVideoDecoder_*___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

