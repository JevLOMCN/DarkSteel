// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 7

// <lambda_invoker_cdecl> @ 148cff350

FVideoDecoderH264_Dummy * __cdecl
`AVEncoder::FVideoDecoderH264_Dummy::Register'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FVideoDecoderH264_Dummy *pFVar1;
  
  pFVar1 = ::operator_new(0xb0);
  if (pFVar1 != (FVideoDecoderH264_Dummy *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FVideoDecoderH264_Dummy_AVEncoder__6B_;
    pFVar1->YOffset = '\0';
    pFVar1->bIsInitialized = false;
    return pFVar1;
  }
  return (FVideoDecoderH264_Dummy *)0x0;
}

// FVideoDecoderH264_Dummy @ 148d00160

FVideoDecoderH264_Dummy * __thiscall
AVEncoder::FVideoDecoderH264_Dummy::FVideoDecoderH264_Dummy(FVideoDecoderH264_Dummy *this)

{
  this->YOffset = '\0';
  this->bIsInitialized = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVideoDecoderH264_Dummy_AVEncoder__6B_;
  return this;
}

// ~FVideoDecoderH264_Dummy @ 148d01550

void __thiscall
AVEncoder::FVideoDecoderH264_Dummy::~FVideoDecoderH264_Dummy(FVideoDecoderH264_Dummy *this)

{
  this->_padding_ = (longlong)&___7FVideoDecoderH264_Dummy_AVEncoder__6B_;
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  return;
}

// Decode @ 148d08160

EDecodeResult __thiscall
AVEncoder::FVideoDecoderH264_Dummy::Decode
          (FVideoDecoderH264_Dummy *this,FVideoDecoderInput *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  EFrameBufferAllocReturn EVar6;
  EDecodeResult EVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  void *_Dst;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *local_res8;
  FVideoDecoderAllocFrameBufferParams local_58;
  
  cVar2 = this->bIsInitialized;
  if ((bool)cVar2 == false) {
    cVar2 = FVideoDecoder::CreateDecoderAllocationInterface((FVideoDecoder *)this);
    this->bIsInitialized = (bool)cVar2;
  }
  if (this->_padding_ != 0) {
    if (cVar2 == '\0') {
      return Failure;
    }
    iVar4 = (**(code **)*param_1)(param_1);
    uVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
    uVar13 = (ulonglong)uVar5;
    plVar8 = ::operator_new(0xd0);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar9 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
      *plVar8 = (longlong)&___7FVideoDecoderOutputDummy_AVEncoder__6B_;
      plVar8[0x16] = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x1c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x34) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x3c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x44) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x4c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x54) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x5c) = 0;
      *(undefined8 *)((longlong)plVar8 + 100) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x6c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x74) = 0;
      plVar8[0x12] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = 0;
      plVar8[0x15] = 0;
      plVar8[0x13] = 0;
      plVar8[0x14] = 0;
      *(undefined4 *)(plVar8 + 0x17) = 1;
      *(int *)((longlong)plVar8 + 0xbc) = iVar4;
      *(uint *)(plVar8 + 0x18) = uVar5;
      plVar8[0x19] = lVar9;
    }
    EVar7 = Success;
    local_58._28_8_ = 0;
    iVar12 = uVar5 * iVar4;
    local_58.ExtraCustomParameters._4_4_ = 0;
    local_58.FrameBufferType = CODEC_RawBuffer;
    local_58.AllocAlignment = 0x10;
    local_58.AllocFlags = 0;
    local_58.BytesPerPixel = 1;
    local_58.AllocSize = (iVar12 * 3) / 2;
    local_58.Width = iVar4;
    local_58.Height = uVar5;
    EVar6 = FVideoDecoder::AllocateOutputFrameBuffer
                      ((FVideoDecoder *)this,(FVideoDecoderAllocFrameBufferResult *)(plVar8 + 1),
                       &local_58);
    if (EVar6 == CODEC_Success) {
      if (plVar8[1] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("pNew->GetBuffer()->AllocatedBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderH264_Dummy.cpp"
                           ,0xdb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          EVar7 = (*pcVar1)();
          return EVar7;
        }
      }
      _Dst = (void *)plVar8[1];
      memset((void *)((longlong)iVar12 + (longlong)_Dst),0x80,(longlong)(iVar12 / 2));
      this->YOffset = this->YOffset + '\x01';
      bVar11 = this->YOffset;
      if (0 < (int)uVar5) {
        do {
          memset(_Dst,(uint)bVar11,(longlong)iVar4);
          _Dst = (void *)((longlong)_Dst + (longlong)iVar4);
          uVar13 = uVar13 - 1;
          bVar11 = bVar11 + 1;
        } while (uVar13 != 0);
      }
      local_res8 = plVar8;
      UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
      pcVar1 = (code *)this->_padding_;
      plVar8 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar8 = (longlong *)this->_padding_;
      }
      uVar10 = (**(code **)(*plVar8 + 8))();
      (*pcVar1)(uVar10,&local_res8);
    }
    else {
      if (EVar6 == CODEC_TryAgainLater) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"TODO\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoderH264_Dummy.cpp"
                           ,0xdf,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          EVar7 = (*pcVar1)();
          return EVar7;
        }
      }
      EVar7 = Failure;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x78))(plVar8,1);
      }
    }
    return EVar7;
  }
  return Success;
}

// Register @ 148d10d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AVEncoder::FVideoDecoderH264_Dummy::Register(FVideoDecoderFactory *param_1)

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
             ___7__TFunction_OwnedObject_P6APEAVFVideoDecoderH264_Dummy_AVEncoder__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `AVEncoder::FVideoDecoderH264_Dummy::Register'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<AVEncoder::FVideoDecoderH264_Dummy_*_(__cdecl*)(void),AVEncoder::FVideoDecoder_*>
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

// Setup @ 148d13600

bool __thiscall
AVEncoder::FVideoDecoderH264_Dummy::Setup(FVideoDecoderH264_Dummy *this,FInit *param_1)

{
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->_padding_,
             &param_1->CreateDecoderAllocationInterface);
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->_padding_,
             &param_1->ReleaseDecoderAllocationInterface);
  return true;
}

// Shutdown @ 148d148f0

void __thiscall AVEncoder::FVideoDecoderH264_Dummy::Shutdown(FVideoDecoderH264_Dummy *this)

{
  if (this->bIsInitialized != false) {
    FVideoDecoder::ReleaseDecoderAllocationInterface((FVideoDecoder *)this);
    this->bIsInitialized = false;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d1491e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(this,1);
  return;
}

