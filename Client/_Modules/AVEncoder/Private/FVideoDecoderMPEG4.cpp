// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 3

// <lambda_invoker_cdecl> @ 148cff520

FVideoDecoderMPEG4_Impl * __cdecl
`AVEncoder::FVideoDecoderMPEG4::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FVideoDecoderMPEG4_Impl *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pFVar1 = ::operator_new(0x120);
  pTVar3 = (TNode *)0x0;
  if (pFVar1 == (FVideoDecoderMPEG4_Impl *)0x0) {
    return (FVideoDecoderMPEG4_Impl *)0x0;
  }
  *(undefined8 *)&pFVar1->field_0x10 = 0;
  *(undefined8 *)&pFVar1->field_0x38 = 0;
  *(undefined8 *)&pFVar1->field_0x40 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined8 *)&pFVar1->field_0x98 = 0;
  *(undefined8 *)&pFVar1->field_0xa0 = 0;
  *(undefined ***)pFVar1 =
       &AVEncoder::FVideoDecoderMPEG4_Impl::_vftable__for__AVEncoder__FVideoDecoderMPEG4__;
  *(undefined ***)&pFVar1->field_0xa8 =
       &AVEncoder::FVideoDecoderMPEG4_Impl::_vftable__for__vdecmpeg4__VIDStreamIO__;
  *(undefined ***)&pFVar1->field_0xb0 =
       &AVEncoder::FVideoDecoderMPEG4_Impl::_vftable__for__vdecmpeg4__VIDStreamEvents__;
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Ptr = (FInDecoderData *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Ptr = (FInDecoderData *)0x0;
    pTVar3 = pTVar2;
  }
  (pFVar1->PendingDecodeData).Tail = pTVar3;
  (pFVar1->PendingDecodeData).Head = pTVar3;
  (pFVar1->CurrentAU).Ptr = (FInDecoderData *)0x0;
  (pFVar1->DecoderSetup).size = 0;
  (pFVar1->DecoderSetup).flags = 0;
  (pFVar1->DecoderSetup).width = 0;
  (pFVar1->DecoderSetup).height = 0;
  (pFVar1->DecoderSetup).numOfVidBuffers = 0;
  (pFVar1->DecoderSetup)._reserved = 0;
  pFVar1->DecoderHandle = (void *)0x0;
  (pFVar1->DecoderSetup).cbMemAlloc = (_func___cdecl_void_ptr_uint_uint *)0x0;
  (pFVar1->DecoderSetup).cbMemFree = (_func___cdecl_void_void_ptr *)0x0;
  pFVar1->LastDecoderError = 0;
  (pFVar1->DecoderSetup).cbMemAllocLockedCache = (_func___cdecl_void_ptr_uint_uint *)0x0;
  (pFVar1->DecoderSetup).cbReport = (_func___cdecl_void_char_ptr *)0x0;
  pFVar1->bIsInitialized = false;
  pFVar1->bDataReaderAttached = false;
  return pFVar1;
}

// ~FVideoDecoderMPEG4 @ 148d016c0

void __thiscall AVEncoder::FVideoDecoderMPEG4::~FVideoDecoderMPEG4(FVideoDecoderMPEG4 *this)

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

// Register @ 148d10f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AVEncoder::FVideoDecoderMPEG4::Register(FVideoDecoderFactory *param_1)

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
  local_58.CodecType = MPEG4;
  local_58.ID = 0;
  local_20 = (undefined ***)0x0;
  local_58.MaxWidth = 0x780;
  local_38 = &
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderMPEG4_Impl_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `AVEncoder::FVideoDecoderMPEG4::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderMPEG4_Impl_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
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

