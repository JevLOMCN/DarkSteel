// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// ~FVideoDecoderH264_Impl @ 148d01570

void __thiscall
AVEncoder::FVideoDecoderH264_Impl::~FVideoDecoderH264_Impl(FVideoDecoderH264_Impl *this)

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

// Register @ 148d10dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AVEncoder::FVideoDecoderH264_Impl::Register(FVideoDecoderFactory *param_1)

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

