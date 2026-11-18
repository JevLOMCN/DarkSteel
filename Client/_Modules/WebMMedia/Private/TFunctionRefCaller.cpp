// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 4

// Call @ 14f11bc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FTaskGraphInterface *this;
  
  if ((*(longlong *)((longlong)param_1 + 8) != 0) &&
     (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0xd0) == '\0')) {
    this = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this,(TRefCountPtr<FBaseGraphTask> *)((longlong)param_1 + 8),
               AnyNormalThreadNormalTask);
  }
  FWebMAudioDecoder::DoDecodeAudioFrames
            (*(FWebMAudioDecoder **)param_1,
             (TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10));
  return;
}

// Call @ 14f11bc90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FWebMVideoDecoder::DoDecodeVideoFrames
            (*(FWebMVideoDecoder **)param_1,
             (TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8)
            );
  return;
}

// Call @ 14f11bcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  longlong lVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  TRefCountPtr<FRHITexture> TVar5;
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1a8 [80];
  wchar_t *pwStack_158;
  FRHITextureCreateDesc FStack_118;
  FRHITextureCreateDesc FStack_98;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  FRHITextureCreateDesc::Create2D
            (&FStack_98,L"FWebMVideoDecoder_DecodedY",*(int *)(lVar2 + 0x50),*(int *)(lVar2 + 0x1c),
             PF_G8);
  FRHITextureCreateDesc::Create2D
            (&FStack_118,L"FWebMVideoDecoder_DecodedU",*(int *)(lVar2 + 0x54),
             *(uint *)(lVar2 + 0x1c) >> 1,PF_G8);
  FRHITextureCreateDesc::Create2D
            ((FRHITextureCreateDesc *)(auStack_1a8 + 0x10),L"FWebMVideoDecoder_DecodedV",
             *(int *)(lVar2 + 0x58),*(uint *)(lVar2 + 0x1c) >> 1,PF_G8);
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_2,(FRHITextureCreateDesc *)auStack_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x40);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)auStack_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)auStack_1a8._0_8_);
  }
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_2,(FRHITextureCreateDesc *)auStack_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x48);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)auStack_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)auStack_1a8._0_8_);
  }
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_2,(FRHITextureCreateDesc *)auStack_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x50);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)auStack_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)auStack_1a8._0_8_);
  }
  if (pwStack_158 != (wchar_t *)0x0) {
    FMemory::Free(pwStack_158);
  }
  if ((void *)FStack_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_118._padding_);
  }
  if ((void *)FStack_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_98._padding_);
  }
  return;
}

// Call @ 14f11bcc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FWebMVideoDecoder::ConvertYUVToRGBAndSubmit
            (*(FWebMVideoDecoder **)param_1,param_2,(FConvertParams *)((longlong)param_1 + 8));
  return;
}

