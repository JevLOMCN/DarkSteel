// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 33

// FVideoDecoderH264_WindowsImpl @ 148d001b0

FVideoDecoderH264_WindowsImpl * __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::FVideoDecoderH264_WindowsImpl
          (FVideoDecoderH264_WindowsImpl *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FEvent *pFVar4;
  
  pTVar3 = (TNode *)0x0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined ***)this = &___7FVideoDecoderH264_WindowsImpl_AVEncoder__6B_;
  (this->DXDeviceInfo).DxVersion = VersionUnknown;
  (this->DXDeviceInfo).DxDevice.Reference = (ID3D11Device *)0x0;
  (this->DXDeviceInfo).DxDeviceContext.Reference = (ID3D11DeviceContext *)0x0;
  (this->DXDeviceInfo).DxDeviceManager.Reference = (IMFDXGIDeviceManager *)0x0;
  (this->DXDeviceInfo).DxMainAppDevice11.Reference = (ID3D11Device *)0x0;
  (this->DXDeviceInfo).DxMainAppDevice12.Reference = (ID3D12Device *)0x0;
  pTVar1 = ::operator_new(0x10);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Ptr = (FInputToDecode *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Ptr = (FInputToDecode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->InputQueue).Tail = pTVar2;
  (this->InputQueue).Head = pTVar2;
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Ptr = (FInputToDecode *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->OutputQueue).Tail = (TNode *)pTVar3;
  (this->OutputQueue).Head = (TNode *)pTVar3;
  (this->WorkerThread).Ptr = (FThread *)0x0;
  pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  (this->WorkerThreadSignalHaveWork).Event = pFVar4;
  (this->DecoderTransform).Reference = (IMFTransform *)0x0;
  (this->CurrentOutputMediaType).Reference = (IMFMediaType *)0x0;
  (this->CurrentDecoderOutputBuffer).Ptr = (FDecoderOutputBuffer *)0x0;
  (this->DecoderOutputStreamInfo).dwFlags = 0;
  (this->DecoderOutputStreamInfo).cbSize = 0;
  (this->DecoderOutputStreamInfo).cbAlignment = 0;
  this->bIsHardwareAccelerated = false;
  this->bRequiresReconfigurationForSW = false;
  this->bIsInitialized = false;
  this->DecodeMode = Undefined;
  this->bTerminateWorkerThread = false;
  this->CurrentApplicationOutputSample = (FVideoDecoderOutputH264_Windows *)0x0;
  this->CurrentSoftwareDecoderOutput = (FF5PlayerVideoDecoderOutputDX *)0x0;
  this->NumFramesInDecoder = 0;
  return this;
}

// ~FVideoDecoderH264_WindowsImpl @ 148d01590

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::~FVideoDecoderH264_WindowsImpl
          (FVideoDecoderH264_WindowsImpl *this)

{
  FDecoderOutputBuffer *pFVar1;
  IMFCollection *pIVar2;
  IMFSample *pIVar3;
  IMFMediaType *pIVar4;
  IMFTransform *pIVar5;
  FThread *this_00;
  TNode *pTVar6;
  
  *(undefined ***)this = &___7FVideoDecoderH264_WindowsImpl_AVEncoder__6B_;
  pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
  if (pFVar1 != (FDecoderOutputBuffer *)0x0) {
    pIVar2 = (pFVar1->OutputBuffer).pEvents;
    if (pIVar2 != (IMFCollection *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (pFVar1->OutputBuffer).pEvents = (IMFCollection *)0x0;
    }
    pIVar3 = (pFVar1->OutputBuffer).pSample;
    if (pIVar3 != (IMFSample *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    ::operator_delete(pFVar1,0x30);
  }
  pIVar4 = (this->CurrentOutputMediaType).Reference;
  if (pIVar4 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->DecoderTransform).Reference;
  if (pIVar5 != (IMFTransform *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x10))();
  FGenericPlatformProcess::ReturnSynchEventToPool((this->WorkerThreadSignalHaveWork).Event);
  this_00 = (this->WorkerThread).Ptr;
  if (this_00 != (FThread *)0x0) {
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  pTVar6 = (this->OutputQueue).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->OutputQueue).Tail = pTVar6->NextNode;
    ::operator_delete(pTVar6,0x10);
    pTVar6 = (this->OutputQueue).Tail;
  }
  TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
  ::
  ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
            (&this->InputQueue);
  FDXDeviceInfo::~FDXDeviceInfo(&this->DXDeviceInfo);
  FVideoDecoder::~FVideoDecoder((FVideoDecoder *)this);
  return;
}

// AllocateApplicationOutputSample @ 148d03580

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::AllocateApplicationOutputSample
          (FVideoDecoderH264_WindowsImpl *this)

{
  FVideoDecoderOutputH264_Windows *pFVar1;
  
  if (this->CurrentApplicationOutputSample == (FVideoDecoderOutputH264_Windows *)0x0) {
    pFVar1 = ::operator_new(0x108);
    if (pFVar1 != (FVideoDecoderOutputH264_Windows *)0x0) {
      pFVar1 = FVideoDecoderOutputH264_Windows::FVideoDecoderOutputH264_Windows(pFVar1);
      this->CurrentApplicationOutputSample = pFVar1;
      return;
    }
    this->CurrentApplicationOutputSample = (FVideoDecoderOutputH264_Windows *)0x0;
  }
  return;
}

// AllocateApplicationOutputSampleBuffer @ 148d035d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::AllocateApplicationOutputSampleBuffer
          (FVideoDecoderH264_WindowsImpl *this,int param_1,int param_2)

{
  EDecodeMode EVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  FVideoDecoderAllocFrameBufferResult *pFVar9;
  longlong *plVar10;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  longlong local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  if ((this->CurrentApplicationOutputSample == (FVideoDecoderOutputH264_Windows *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplicationOutputSample",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                         ,0x657,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  plVar10 = (longlong *)0x0;
  this->CurrentApplicationOutputSample->Width = param_1;
  this->CurrentApplicationOutputSample->Height = param_2;
  EVar1 = this->DecodeMode;
  local_1c = 0;
  local_14 = 0;
  if (EVar1 == Win8HW) {
    local_38 = ___xmm_00000000000000080000000800000001;
    uStack_30 = _UNK_151ccde28;
  }
  else if (EVar1 - XB1 < 3) {
    uStack_30 = 1;
    local_38 = (ulonglong)(uint)((param_1 * param_2 * 3) / 2) << 0x20;
  }
  else {
    if (EVar1 != Win8SW) {
      if ((byte)LogVideoDecoder._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      return false;
    }
    local_38 = ___xmm_00000000000000080000000800000002;
    uStack_30 = _UNK_151ccde38;
  }
  local_20 = 1;
  pFVar9 = &this->CurrentApplicationOutputSample->Buffer;
  local_28 = param_1;
  local_24 = param_2;
  if ((pFVar9 == (FVideoDecoderAllocFrameBufferResult *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\VideoDecoder.cpp"
                         ,0x56,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar2 = *(longlong *)&this->field_0xa0;
  if (lVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x10),&local_68);
    if (((*(int *)(lVar2 + 0x20) == 0) || (*(longlong **)(lVar2 + 0x18) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      lVar2 = *(longlong *)&this->field_0xa0;
      uVar3 = *(undefined8 *)(lVar2 + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x10),&local_50)
      ;
      if (*(int *)(lVar2 + 0x20) != 0) {
        plVar10 = *(longlong **)(lVar2 + 0x18);
      }
      iVar8 = (**(code **)(*plVar10 + 0x60))(plVar10,uVar3,&local_38,pFVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (iVar8 == 0) {
        if (((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplicationOutputSample->GetBuffer()->AllocatedBuffer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                               ,0x699,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        return true;
      }
      if ((iVar8 == 1) && (1 < (byte)LogVideoDecoder._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      }
    }
  }
  return false;
}

// AsyncShutdownProc @ 148d03a10

ulong __cdecl AVEncoder::FVideoDecoderH264_WindowsImpl::AsyncShutdownProc(void *param_1)

{
  FThread *this;
  
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  (**(code **)(**(longlong **)((longlong)param_1 + 0x108) + 0x10))();
  ::FThread::Join(*(FThread **)((longlong)param_1 + 0x100));
  this = *(FThread **)((longlong)param_1 + 0x100);
  if (this != (FThread *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x100) = 0;
    ::FThread::~FThread(this);
    ::operator_delete(this,0x10);
  }
  if (*(char *)((longlong)param_1 + 0xd8) != '\0') {
    FDXDeviceInfo::Reset((FDXDeviceInfo *)((longlong)param_1 + 0xa8));
    FVideoDecoder::ReleaseDecoderAllocationInterface(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
    GlobalInitCount = GlobalInitCount + -1;
    if ((GlobalInitCount == 0) && (bGlobalMFStartedUp != false)) {
      MFShutdown();
      bGlobalMFStartedUp = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
    *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  }
  (**(code **)(*(longlong *)param_1 + 0x28))(param_1,1);
  return 0;
}

// Configure @ 148d04520

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::Configure(FVideoDecoderH264_WindowsImpl *this)

{
  bool bVar1;
  
  bVar1 = DecoderSetInputType(this);
  if ((bVar1) && (this->bRequiresReconfigurationForSW == false)) {
    bVar1 = DecoderSetOutputType(this);
    if ((bVar1) && (this->bRequiresReconfigurationForSW == false)) {
      bVar1 = DecoderVerifyStatus(this);
      if (bVar1) {
        return this->bRequiresReconfigurationForSW == false;
      }
    }
  }
  return false;
}

// ConvertDecodedImage @ 148d04580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::ConvertDecodedImage
          (FVideoDecoderH264_WindowsImpl *this,TRefCountPtr<IMFSample> *param_1)

{
  IMFMediaType *pIVar1;
  FVideoDecoderOutputH264_Windows *pFVar2;
  FNativeVideoDecoderOutput *pFVar3;
  ID3D11Texture2D *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  EOutputType EVar10;
  FF5PlayerVideoDecoderOutputDX *pFVar11;
  TRefCountPtr<ID3D11Texture2D> TVar12;
  FF5PlayerVideoDecoderOutputDX *this_00;
  FF5PlayerVideoDecoderOutputDX *pFVar13;
  FF5PlayerVideoDecoderOutputDX *pFVar14;
  undefined1 auStackY_98 [32];
  int local_68;
  int local_64;
  long64 local_60;
  longlong *local_58;
  FF5PlayerVideoDecoderOutputDX *local_50;
  undefined8 local_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 TStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pIVar1 = (this->CurrentOutputMediaType).Reference;
  this_00 = (FF5PlayerVideoDecoderOutputDX *)0x0;
  local_60 = 0;
  local_40 = 0;
  TStack_38 = (TIntPoint<int>_u_0)0x0;
  local_68 = 0;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,&MF_MT_PAN_SCAN_ENABLED,&local_68);
  if ((-1 < iVar8) && (local_68 != 0)) {
    pIVar1 = (this->CurrentOutputMediaType).Reference;
    (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,&MF_MT_PAN_SCAN_APERTURE,&local_40,0x10);
  }
  pIVar1 = (this->CurrentOutputMediaType).Reference;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&MF_MT_FRAME_SIZE,&local_50);
  if (iVar8 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(Result)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                       ,0x81d,L"");
    pFVar13 = this_00;
    pFVar14 = this_00;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else {
    pFVar13 = local_50;
    pFVar14 = (FF5PlayerVideoDecoderOutputDX *)((ulonglong)local_50 >> 0x20);
  }
  pIVar1 = (this->CurrentOutputMediaType).Reference;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x78))
                    (pIVar1,&MF_MT_MINIMUM_DISPLAY_APERTURE,&local_40,0x10);
  if (iVar8 < 0) {
    pIVar1 = (this->CurrentOutputMediaType).Reference;
    (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,&MF_MT_GEOMETRIC_APERTURE,&local_40,0x10);
  }
  if ((this->CurrentApplicationOutputSample == (FVideoDecoderOutputH264_Windows *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplicationOutputSample",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                         ,0x824,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  this->CurrentApplicationOutputSample->CropLeft = 0;
  this->CurrentApplicationOutputSample->CropTop = 0;
  this->CurrentApplicationOutputSample->CropRight = (int)pFVar14 - TStack_38._0_4_;
  this->CurrentApplicationOutputSample->CropBottom = (int)pFVar13 - TStack_38._4_4_;
  pIVar1 = (this->CurrentOutputMediaType).Reference;
  iVar9 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,&MF_MT_DEFAULT_STRIDE,&local_64);
  iVar8 = 0;
  if (-1 < iVar9) {
    iVar8 = local_64;
  }
  this->CurrentApplicationOutputSample->PitchX = iVar8;
  pIVar1 = (this->CurrentOutputMediaType).Reference;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&MF_MT_PIXEL_ASPECT_RATIO,&local_48);
  if (((iVar8 < 0) || (iVar8 = (int)((ulonglong)local_48 >> 0x20), iVar8 == 0)) ||
     ((int)local_48 == 0)) {
    iVar8 = 1;
    local_48 = 1;
  }
  this->CurrentApplicationOutputSample->AspectX = iVar8;
  this->CurrentApplicationOutputSample->AspectY = (int)local_48;
  iVar8 = (**(code **)((longlong)*param_1->Reference + 0x118))(param_1->Reference,&local_60);
  if (iVar8 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    }
    bVar6 = false;
  }
  else {
    this->CurrentApplicationOutputSample->PTS = local_60;
    pFVar11 = ::operator_new(0x38);
    if (pFVar11 != (FF5PlayerVideoDecoderOutputDX *)0x0) {
      pFVar11->OutputType = Unknown;
      pFVar11->_padding_ = (longlong)&___7FF5PlayerVideoDecoderOutputDX_AVEncoder__6B_;
      (pFVar11->SharedTexture).Reference = (ID3D11Texture2D *)0x0;
      (pFVar11->D3D11Device).Reference = (ID3D11Device *)0x0;
      (pFVar11->MFSample).Reference = (IMFSample *)0x0;
      (pFVar11->SampleDim).field0_0x0 = (TIntPoint<int>_u_0)0x0;
      pFVar11->Stride = 0;
      this_00 = pFVar11;
    }
    CopyTexture(this,param_1,this_00,(TIntPoint<int>)TStack_38._s_0,
                (TIntPoint<int>)((longlong)pFVar13 << 0x20 | (ulonglong)pFVar14));
    pFVar2 = this->CurrentApplicationOutputSample;
    pFVar3 = pFVar2->NativeDecoderOutput;
    if (pFVar3 != (FNativeVideoDecoderOutput *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar2->NativeDecoderOutput = (FNativeVideoDecoderOutput *)this_00;
    if (this->DecodeMode == Win8HW) {
      pIVar4 = (this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer;
      pcVar5 = *(code **)(this_00->_padding_ + 0x50);
      if (pcVar5 == FF5PlayerVideoDecoderOutputDX::GetTexture) {
        TVar12 = FF5PlayerVideoDecoderOutputDX::GetTexture(this_00);
      }
      else {
        TVar12.Reference = (ID3D11Texture2D *)(*pcVar5)(this_00,&local_58);
      }
      *pIVar4 = *TVar12.Reference;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    pFVar13 = this->CurrentSoftwareDecoderOutput;
    if (pFVar13 != (FF5PlayerVideoDecoderOutputDX *)0x0) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
    this->CurrentSoftwareDecoderOutput = (FF5PlayerVideoDecoderOutputDX *)0x0;
    pcVar5 = *(code **)(this_00->_padding_ + 0x30);
    if (pcVar5 == FF5PlayerVideoDecoderOutputDX::GetOutputType) {
      EVar10 = this_00->OutputType;
    }
    else {
      EVar10 = (*pcVar5)(this_00);
    }
    pFVar2 = this->CurrentApplicationOutputSample;
    if (EVar10 == SoftwareWin7) {
      pFVar2->ColorFormat = 1;
    }
    else if (EVar10 == SoftwareWin8Plus) {
      pFVar2->ColorFormat = 2;
    }
    else if (EVar10 == HardwareWin8Plus) {
      pFVar2->ColorFormat = 3;
    }
    else if (EVar10 == HardwareDX9_DX12) {
      pFVar2->ColorFormat = 4;
    }
    else {
      pFVar2->ColorFormat = 0;
    }
    bVar6 = true;
  }
  return bVar6;
}

// CopyTexture @ 148d04bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::CopyTexture
          (FVideoDecoderH264_WindowsImpl *this,TRefCountPtr<IMFSample> *param_1,
          FF5PlayerVideoDecoderOutputDX *param_2,TIntPoint<int> param_3,TIntPoint<int> param_4)

{
  EDecodeMode EVar1;
  code *pcVar2;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FStaticBasicLogRecord *pFVar8;
  uint uVar9;
  TIntPoint<int>_u_0 local_res20;
  undefined1 auStackY_1a8 [32];
  uint local_178;
  uint local_174;
  longlong *local_170;
  int local_168 [2];
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  uint local_148;
  int iStack_144;
  void *local_140;
  undefined4 local_138;
  uint uStack_134;
  void *local_130;
  ID3D11DeviceContext *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  undefined4 local_80;
  int local_7c;
  int local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168[0] = 0;
  local_res20 = param_3.field0_0x0;
  iVar7 = (**(code **)((longlong)*param_1->Reference + 0x138))(param_1->Reference,local_168);
  if (iVar7 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription(&local_120,iVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
        return false;
      }
    }
    return false;
  }
  if (local_168[0] != 1) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    return false;
  }
  local_170 = (longlong *)0x0;
  iVar7 = (**(code **)((longlong)*param_1->Reference + 0x140))(param_1->Reference,0,&local_170);
  if (iVar7 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription(&local_110,iVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      goto LAB_148d05042;
    }
  }
  else {
    EVar1 = this->DecodeMode;
    uVar9 = param_3.field0_0x0._0_4_;
    if (EVar1 == Win8HW) {
      if (((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer != (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentApplicationOutputSample->GetBuffer()->AllocatedBuffer == nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                             ,0x77c,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      bVar5 = AllocateApplicationOutputSampleBuffer(this,uVar9,local_res20._s_0.Y);
      if (bVar5) {
        local_128 = (this->DXDeviceInfo).DxDeviceContext.Reference;
        if (local_128 != (ID3D11DeviceContext *)0x0) {
          (**(code **)((longlong)*local_128 + 8))();
        }
        FF5PlayerVideoDecoderOutputDX::InitializeWithSharedTexture
                  (param_2,&(this->DXDeviceInfo).DxDevice,(ID3D11DeviceContext *)&local_128,param_1,
                   (TIntPoint<int> *)&local_res20._s_0);
        bVar5 = true;
        goto LAB_148d05426;
      }
      if (1 < (byte)LogVideoDecoder._0_1_) {
        pFVar8 = &::LOG_Static;
        goto LAB_148d05418;
      }
    }
    else {
      if (EVar1 == Win8SW) {
        if (((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplicationOutputSample->GetBuffer()->AllocatedBuffer != nullptr"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                               ,0x788,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        param_2->OutputType = SoftwareWin8Plus;
        (param_2->SampleDim).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_3.field0_0x0;
        param_2->Stride = uVar9;
LAB_148d04e0a:
        bVar5 = true;
        goto LAB_148d05426;
      }
      if (EVar1 == Win10SW) {
        if (((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer != (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentApplicationOutputSample->GetBuffer()->AllocatedBuffer == nullptr"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                               ,0x78f,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        bVar5 = AllocateApplicationOutputSampleBuffer
                          (this,param_4.field0_0x0._s_0.X,param_4.field0_0x0._s_0.Y);
        if (bVar5) {
          local_178 = 0;
          iVar7 = (**(code **)(*local_170 + 0x28))(local_170,&local_178);
          if (iVar7 < 0) {
            if (1 < (byte)LogVideoDecoder._0_1_) {
              GetComErrorDescription(&local_100,iVar7);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
              local_110.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
LAB_148d05042:
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            local_140 = (void *)0x0;
            iVar7 = (**(code **)(*local_170 + 0x18))(local_170,&local_140,0,0);
            if (iVar7 < 0) {
              if (1 < (byte)LogVideoDecoder._0_1_) {
                GetComErrorDescription(&local_f0,iVar7);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                local_110.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
                goto LAB_148d05042;
              }
            }
            else {
              param_2->OutputType = HardwareDX9_DX12;
              param_2->Stride = uVar9;
              iStack_144 = (local_res20._s_0.Y * 3) / 2;
              TVar3._s_0.Y = iStack_144;
              TVar3._s_0.X = uVar9;
              (param_2->SampleDim).field0_0x0 = TVar3;
              local_148 = uVar9;
              if ((this->CurrentApplicationOutputSample == (FVideoDecoderOutputH264_Windows *)0x0)
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentApplicationOutputSample",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                                        ,0x7aa,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              if (((uint)(this->CurrentApplicationOutputSample->Buffer).AllocatedSize < local_178)
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(DWORD)CurrentApplicationOutputSample->GetBuffer()->AllocatedSize >= BufferSize"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                                        ,0x7ac,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              memcpy((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer,local_140,
                     (ulonglong)local_178);
              iVar7 = (**(code **)(*local_170 + 0x20))();
              if (-1 < iVar7) goto LAB_148d04e0a;
              if (1 < (byte)LogVideoDecoder._0_1_) {
                GetComErrorDescription(&local_e0,iVar7);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                local_110.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
                goto LAB_148d05042;
              }
            }
          }
        }
        else if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar8 = &::LOG_Static;
LAB_148d05418:
          UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoDecoder);
        }
      }
      else {
        if (EVar1 == Win10HW) {
          local_150 = (longlong *)0x0;
          iVar7 = (**(code **)*local_170)
                            (local_170,&_GUID_e7174cfa_1c9e_48b1_8866_626226bfc258,&local_150);
          if (iVar7 < 0) {
            if (1 < (byte)LogVideoDecoder._0_1_) {
              GetComErrorDescription(&local_d0,iVar7);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = false;
          }
          else {
            local_158 = (longlong *)0x0;
            iVar7 = (**(code **)(*local_150 + 0x18))
                              (local_150,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_158);
            if (iVar7 < 0) {
              if (1 < (byte)LogVideoDecoder._0_1_) {
                GetComErrorDescription(&local_c0,iVar7);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                  bVar5 = false;
                  goto LAB_148d053e6;
                }
              }
LAB_148d0517c:
              bVar5 = false;
            }
            else {
              (**(code **)(*local_158 + 0x50))(local_158,&local_80);
              if (local_70 != 0x67) {
                if (1 < (byte)LogVideoDecoder._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                }
                goto LAB_148d0517c;
              }
              local_160 = (longlong *)0x0;
              iVar7 = (**(code **)*local_170)
                                (local_170,&_GUID_7dc9d5f9_9ed9_44ec_9bbf_0600bb589fbb,&local_160);
              if (iVar7 < 0) {
                if (1 < (byte)LogVideoDecoder._0_1_) {
                  GetComErrorDescription(&local_b0,iVar7);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
LAB_148d053c6:
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                }
LAB_148d053d0:
                bVar5 = false;
              }
              else {
                local_130 = (void *)0x0;
                iVar7 = (**(code **)(*local_160 + 0x18))(local_160,&local_130,&local_174);
                if (iVar7 < 0) {
                  if (1 < (byte)LogVideoDecoder._0_1_) {
                    GetComErrorDescription(&local_a0,iVar7);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                    local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
                    goto LAB_148d053c6;
                  }
                  goto LAB_148d053d0;
                }
                if (((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer != (void *)0x0)
                   && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CurrentApplicationOutputSample->GetBuffer()->AllocatedBuffer == nullptr"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                                          ,0x7e3,L""), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
                bVar5 = AllocateApplicationOutputSampleBuffer(this,local_174,local_7c);
                if (bVar5) {
                  this->CurrentApplicationOutputSample->Width = uVar9;
                  this->CurrentApplicationOutputSample->Height = local_7c;
                  this->CurrentApplicationOutputSample->PitchX = local_174;
                  param_2->OutputType = HardwareDX9_DX12;
                  param_2->Stride = local_174;
                  uStack_134 = (uint)(local_7c * 3) >> 1;
                  local_138 = local_80;
                  TVar4._s_0.Y = uStack_134;
                  TVar4._s_0.X = local_80;
                  (param_2->SampleDim).field0_0x0 = TVar4;
                  uVar9 = local_174 * uStack_134;
                  if (((uint)(this->CurrentApplicationOutputSample->Buffer).AllocatedSize < uVar9)
                     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(DWORD)CurrentApplicationOutputSample->GetBuffer()->AllocatedSize >= BufferSize"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                                            ,0x7f4,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    uVar6 = (*pcVar2)();
                    return (bool)uVar6;
                  }
                  memcpy((this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer,local_130,
                         (ulonglong)uVar9);
                  iVar7 = (**(code **)(*local_160 + 0x20))();
                  if (iVar7 < 0) {
                    if (1 < (byte)LogVideoDecoder._0_1_) {
                      GetComErrorDescription(&local_90,iVar7);
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                      local_b0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
                      goto LAB_148d053c6;
                    }
                    goto LAB_148d053d0;
                  }
                  bVar5 = true;
                }
                else {
                  if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d053d0;
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                  bVar5 = false;
                }
              }
              if (local_160 != (longlong *)0x0) {
                (**(code **)(*local_160 + 0x10))();
              }
            }
LAB_148d053e6:
            if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x10))();
            }
          }
          if (local_150 != (longlong *)0x0) {
            (**(code **)(*local_150 + 0x10))();
          }
          goto LAB_148d05426;
        }
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar8 = &::LOG_Static;
          goto LAB_148d05418;
        }
      }
    }
  }
  bVar5 = false;
LAB_148d05426:
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
    return bVar5;
  }
  return bVar5;
}

// CreateD3DResources @ 148d06160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::CreateD3DResources(FVideoDecoderH264_WindowsImpl *this)

{
  FDXDeviceInfo *this_00;
  TRefCountPtr<IMFDXGIDeviceManager> *pTVar1;
  TRefCountPtr<ID3D11Device> *pTVar2;
  TRefCountPtr<ID3D12Device> *pTVar3;
  TRefCountPtr<ID3D11DeviceContext> *pTVar4;
  int *piVar5;
  undefined8 uVar6;
  IMFDXGIDeviceManager *pIVar7;
  code *pcVar8;
  ID3D11Device *pIVar9;
  ID3D11DeviceContext *pIVar10;
  ID3D12Device *pIVar11;
  int iVar12;
  uint uVar13;
  ID3D11Device IVar14;
  FStaticBasicLogRecord *pFVar15;
  TRefCountPtr<ID3D11Device> TVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  TRefCountPtr<ID3D11Device> *local_1f0;
  longlong **local_1e8;
  TRefCountPtr<ID3D11DeviceContext> *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  int local_1c8 [2];
  longlong *local_1c0;
  undefined4 local_1b8 [2];
  TRefCountPtr<ID3D11Device> local_1b0;
  FReadAccessScope local_1a8;
  FString local_190;
  longlong local_180;
  undefined8 local_178 [2];
  wchar_t local_168 [152];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  piVar5 = *(int **)&this->field_0xa0;
  plVar17 = (longlong *)0x0;
  local_1b0.Reference = (ID3D11Device *)0x0;
  local_1c8[0] = 0;
  if (piVar5 == (int *)0x0) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    pFVar15 = &::LOG_Static;
LAB_148d0684e:
    UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogVideoDecoder);
    return false;
  }
  if (*piVar5 != 0x57696e58) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    return false;
  }
  uVar6 = *(undefined8 *)(piVar5 + 2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(piVar5 + 10),&local_1a8);
  if (piVar5[0xe] != 0) {
    plVar17 = *(longlong **)(piVar5 + 0xc);
  }
  iVar12 = (**(code **)(*plVar17 + 0x60))(plVar17,uVar6,&local_1b0,local_1c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1a8);
  if (iVar12 != 0) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    return false;
  }
  if (1999 < local_1c8[0] - 11000U) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    return false;
  }
  if (local_1b0.Reference == (ID3D11Device *)0x0) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    pFVar15 = &::LOG_Static;
    goto LAB_148d0684e;
  }
  this_00 = &this->DXDeviceInfo;
  FDXDeviceInfo::Reset(this_00);
  pTVar1 = &(this->DXDeviceInfo).DxDeviceManager;
  local_1b8[0] = 0;
  pIVar7 = pTVar1->Reference;
  if (pIVar7 != (IMFDXGIDeviceManager *)0x0) {
    pTVar1->Reference = (IMFDXGIDeviceManager *)0x0;
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  iVar12 = MFCreateDXGIDeviceManager(local_1b8,pTVar1);
  TVar16.Reference = local_1b0.Reference;
  if (iVar12 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription((FString *)&local_1a8,iVar12);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      if ((FScriptContainerElement *)local_1a8.DestructionSentinel._0_8_ !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8.DestructionSentinel._0_8_);
      }
    }
    goto LAB_148d06774;
  }
  local_1d8 = (longlong *)((ulonglong)local_1d8 & 0xffffffff00000000);
  uVar18 = 0;
  local_1d0 = (longlong *)0x0;
  uVar13 = 0;
  if (local_1c8[0] / 1000 == 0xb) {
    local_1d8 = (longlong *)0x0;
    (**(code **)*local_1b0.Reference)
              (local_1b0.Reference,&_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,&local_1d8);
    plVar17 = local_1d8;
    pcVar8 = *(code **)(*local_1d8 + 0x38);
    if (local_1d0 != (longlong *)0x0) {
      (**(code **)(*local_1d0 + 0x10))();
    }
    iVar12 = (*pcVar8)(plVar17,&local_1d0);
    if (iVar12 < 0) {
      plVar17 = local_1d8;
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription(&local_190,iVar12);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_ID3D11Device__G_151cc8080,
                   (FLogCategoryBase *)&LogVideoDecoder);
        plVar17 = local_1d8;
        uVar13 = uVar18;
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
          plVar17 = local_1d8;
        }
      }
    }
    else {
      uVar13 = (**(code **)((longlong)*TVar16.Reference + 0x130))(TVar16.Reference);
      this_00->DxVersion = Version11Win8;
      (**(code **)((longlong)*TVar16.Reference + 8))(TVar16.Reference);
      pTVar2 = &(this->DXDeviceInfo).DxMainAppDevice11;
      if (pTVar2 == (TRefCountPtr<ID3D11Device> *)&local_180) {
        (**(code **)((longlong)*TVar16.Reference + 0x10))(TVar16.Reference);
        plVar17 = local_1d8;
      }
      else {
        pIVar9 = pTVar2->Reference;
        pTVar2->Reference = TVar16.Reference;
        plVar17 = local_1d8;
        if (pIVar9 != (ID3D11Device *)0x0) {
          (**(code **)((longlong)*pIVar9 + 0x10))();
          plVar17 = local_1d8;
        }
      }
    }
  }
  else {
    local_1c0 = (longlong *)0x0;
    iVar12 = CreateDXGIFactory(&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,&local_1c0);
    TVar16.Reference = local_1b0.Reference;
    if (iVar12 < 0) {
      plVar17 = local_1c0;
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription((FString *)&local_1a8,iVar12);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        plVar17 = local_1c0;
        uVar13 = uVar18;
        if ((FScriptContainerElement *)local_1a8.DestructionSentinel._0_8_ !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1a8.DestructionSentinel._0_8_);
          plVar17 = local_1c0;
        }
      }
    }
    else {
      (**(code **)((longlong)*local_1b0.Reference + 0x158))(local_1b0.Reference,&local_190);
      plVar17 = local_1c0;
      pcVar8 = *(code **)(*local_1c0 + 0xd0);
      if (local_1d0 != (longlong *)0x0) {
        (**(code **)(*local_1d0 + 0x10))();
      }
      iVar12 = (*pcVar8)(plVar17,local_190.Data.AllocatorInstance.Data,
                         &_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,&local_1d0);
      if (iVar12 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription((FString *)&local_1a8,iVar12);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if ((FScriptContainerElement *)local_1a8.DestructionSentinel._0_8_ !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1a8.DestructionSentinel._0_8_);
          }
        }
      }
      else {
        this_00->DxVersion = Version12Win10;
        (**(code **)((longlong)*TVar16.Reference + 8))(TVar16.Reference);
        pTVar3 = &(this->DXDeviceInfo).DxMainAppDevice12;
        if (pTVar3 == (TRefCountPtr<ID3D12Device> *)local_178) {
          IVar14 = *TVar16.Reference;
        }
        else {
          pIVar9 = (ID3D11Device *)pTVar3->Reference;
          pTVar3->Reference = (ID3D12Device *)TVar16.Reference;
          if (pIVar9 == (ID3D11Device *)0x0) goto LAB_148d06463;
          IVar14 = *pIVar9;
          TVar16.Reference = pIVar9;
        }
        (**(code **)((longlong)IVar14 + 0x10))(TVar16.Reference);
      }
LAB_148d06463:
      plVar17 = local_1c0;
      uVar13 = (uint)local_1d8;
    }
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x10))();
  }
  if (-1 < iVar12) {
    pTVar4 = &(this->DXDeviceInfo).DxDeviceContext;
    pIVar10 = pTVar4->Reference;
    if (pIVar10 != (ID3D11DeviceContext *)0x0) {
      pTVar4->Reference = (ID3D11DeviceContext *)0x0;
      (**(code **)((longlong)*pIVar10 + 0x10))();
    }
    pTVar2 = &(this->DXDeviceInfo).DxDevice;
    pIVar9 = pTVar2->Reference;
    if (pIVar9 != (ID3D11Device *)0x0) {
      pTVar2->Reference = (ID3D11Device *)0x0;
      (**(code **)((longlong)*pIVar9 + 0x10))();
    }
    local_1e8 = &local_1d8;
    local_1f8 = 7;
    local_200 = 0;
    local_208 = 0;
    local_1f0 = pTVar2;
    local_1e0 = pTVar4;
    iVar12 = D3D11CreateDevice(local_1d0,0,0,uVar13 & 2);
    if (iVar12 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription((FString *)&local_1a8,iVar12);
        pFVar15 = &::LOG_Static;
LAB_148d066f2:
        UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogVideoDecoder);
        if ((FScriptContainerElement *)local_1a8.DestructionSentinel._0_8_ !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1a8.DestructionSentinel._0_8_);
        }
      }
    }
    else if ((int)(uint)local_1d8 < 0x9300) {
      this_00->DxVersion = VersionUnknown;
      if (1 < (byte)LogVideoDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      }
    }
    else {
      iVar12 = (**(code **)((longlong)*pTVar1->Reference + 0x38))
                         (pTVar1->Reference,pTVar2->Reference,local_1b8[0]);
      if (-1 < iVar12) {
        local_1c0 = (longlong *)0x0;
        iVar12 = (**(code **)*pTVar2->Reference)
                           (pTVar2->Reference,&_GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0,&local_1c0
                           );
        if (-1 < iVar12) {
          (**(code **)(*local_1c0 + 0x28))(local_1c0,1);
        }
        (**(code **)(*local_1d0 + 0x40))(local_1d0,local_168);
        if (3 < (byte)LogVideoDecoder._0_1_) {
          ::FString::FString((FString *)&local_1a8,local_168);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if ((FScriptContainerElement *)local_1a8.DestructionSentinel._0_8_ !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1a8.DestructionSentinel._0_8_);
          }
        }
        if (local_1c0 != (longlong *)0x0) {
          (**(code **)(*local_1c0 + 0x10))();
        }
        if (local_1d0 != (longlong *)0x0) {
          (**(code **)(*local_1d0 + 0x10))();
        }
        return true;
      }
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription((FString *)&local_1a8,iVar12);
        pFVar15 = &::LOG_Static;
        goto LAB_148d066f2;
      }
    }
  }
  if (local_1d0 != (longlong *)0x0) {
    (**(code **)(*local_1d0 + 0x10))();
  }
LAB_148d06774:
  pIVar9 = (this->DXDeviceInfo).DxDevice.Reference;
  if (pIVar9 != (ID3D11Device *)0x0) {
    (this->DXDeviceInfo).DxDevice.Reference = (ID3D11Device *)0x0;
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar10 = (this->DXDeviceInfo).DxDeviceContext.Reference;
  if (pIVar10 != (ID3D11DeviceContext *)0x0) {
    (this->DXDeviceInfo).DxDeviceContext.Reference = (ID3D11DeviceContext *)0x0;
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  pIVar7 = (this->DXDeviceInfo).DxDeviceManager.Reference;
  if (pIVar7 != (IMFDXGIDeviceManager *)0x0) {
    (this->DXDeviceInfo).DxDeviceManager.Reference = (IMFDXGIDeviceManager *)0x0;
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  this_00->DxVersion = VersionUnknown;
  pIVar9 = (this->DXDeviceInfo).DxMainAppDevice11.Reference;
  if (pIVar9 != (ID3D11Device *)0x0) {
    (this->DXDeviceInfo).DxMainAppDevice11.Reference = (ID3D11Device *)0x0;
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar11 = (this->DXDeviceInfo).DxMainAppDevice12.Reference;
  if (pIVar11 != (ID3D12Device *)0x0) {
    (this->DXDeviceInfo).DxMainAppDevice12.Reference = (ID3D12Device *)0x0;
    (**(code **)((longlong)*pIVar11 + 0x10))();
  }
  return false;
}

// CreateDecoderInstance @ 148d06ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::CreateDecoderInstance(FVideoDecoderH264_WindowsImpl *this)

{
  ED3DVersion EVar1;
  IMFTransform *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  EDecodeMode EVar7;
  FStaticBasicLogRecord *pFVar8;
  bool bVar9;
  FString local_28;
  FString local_18;
  
  bVar9 = true;
  this->NumFramesInDecoder = 0;
  this->bIsHardwareAccelerated = true;
  bVar4 = InternalDecoderCreate(this);
  if (!bVar4) {
    return false;
  }
  this->bRequiresReconfigurationForSW = false;
  bVar4 = DecoderSetInputType(this);
  if ((((bVar4) && (this->bRequiresReconfigurationForSW == false)) &&
      (bVar4 = DecoderSetOutputType(this), bVar4)) && (this->bRequiresReconfigurationForSW == false)
     ) {
    DecoderVerifyStatus(this);
  }
  if (this->bRequiresReconfigurationForSW != false) {
    if ((this->bIsHardwareAccelerated != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsHardwareAccelerated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                           ,0x5fc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this->bRequiresReconfigurationForSW = false;
    bVar4 = DecoderSetInputType(this);
    if (bVar4) {
      if (this->bRequiresReconfigurationForSW == false) {
        bVar4 = DecoderSetOutputType(this);
        if (bVar4) {
          if (this->bRequiresReconfigurationForSW != false) goto LAB_148d06dcd;
          DecoderVerifyStatus(this);
        }
        goto LAB_148d06dc4;
      }
    }
    else {
LAB_148d06dc4:
      if (this->bRequiresReconfigurationForSW == false) goto LAB_148d06dff;
    }
LAB_148d06dcd:
    if (1 < (byte)LogVideoDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    }
    bVar9 = false;
  }
LAB_148d06dff:
  EVar1 = (this->DXDeviceInfo).DxVersion;
  if (EVar1 == Version9Win7) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      pFVar8 = &::LOG_Static;
LAB_148d06f96:
      UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoDecoder);
    }
LAB_148d06fa2:
    this->DecodeMode = Undefined;
  }
  else {
    if (EVar1 == Version11Win8) {
      EVar7 = Win8SW - (this->bIsHardwareAccelerated != false);
    }
    else if (EVar1 == Version11XB1) {
      EVar7 = XB1;
    }
    else {
      if (EVar1 != Version12Win10) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar8 = &::LOG_Static;
          goto LAB_148d06f96;
        }
        goto LAB_148d06fa2;
      }
      EVar7 = Win10SW - (this->bIsHardwareAccelerated != false);
    }
    this->DecodeMode = EVar7;
    if (bVar9) {
      pIVar2 = (this->DecoderTransform).Reference;
      iVar6 = (**(code **)((longlong)*pIVar2 + 0xb8))(pIVar2,0x10000000,0);
      if (iVar6 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_28,iVar6);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
            InternalDecoderDestroy(this);
            return false;
          }
        }
      }
      else {
        pIVar2 = (this->DecoderTransform).Reference;
        iVar6 = (**(code **)((longlong)*pIVar2 + 0xb8))(pIVar2,0x10000003,0);
        if (-1 < iVar6) {
          return true;
        }
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_18,iVar6);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
            InternalDecoderDestroy(this);
            return false;
          }
        }
      }
    }
  }
  InternalDecoderDestroy(this);
  return false;
}

// CreateDecoderOutputBuffer @ 148d06fe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::CreateDecoderOutputBuffer
          (FVideoDecoderH264_WindowsImpl *this)

{
  TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FDecoderOutputBuffer,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FDecoderOutputBuffer>_>
  *pTVar1;
  IMFTransform *pIVar2;
  FF5PlayerVideoDecoderOutputDX *pFVar3;
  FDecoderOutputBuffer *pFVar4;
  IMFCollection *pIVar5;
  IMFSample *pIVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FDecoderOutputBuffer *pFVar11;
  undefined8 *puVar12;
  longlong *local_res8;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FDecoderOutputBuffer *)0x0) {
    pFVar11 = (FDecoderOutputBuffer *)0x0;
  }
  else {
    local_40 = 0;
    (pFVar11->OutputStreamInfo).dwFlags = 0;
    (pFVar11->OutputStreamInfo).cbSize = 0;
    *(undefined8 *)&pFVar11->OutputBuffer = 0;
    (pFVar11->OutputBuffer).pSample = (IMFSample *)0x0;
    local_38 = 0;
    *(undefined8 *)&(pFVar11->OutputBuffer).dwStatus = 0;
    (pFVar11->OutputBuffer).pEvents = (IMFCollection *)0x0;
    (pFVar11->OutputStreamInfo).cbAlignment = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
  }
  pIVar2 = (this->DecoderTransform).Reference;
  iVar10 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,0,pFVar11);
  if (iVar10 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
    }
LAB_148d07062:
    bVar8 = false;
  }
  else {
    if (((pFVar11->OutputStreamInfo).dwFlags & 0x300) == 0) {
      if (this->bIsHardwareAccelerated != false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsHardwareAccelerated == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                           ,0x6c6,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      if (this->CurrentSoftwareDecoderOutput == (FF5PlayerVideoDecoderOutputDX *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentSoftwareDecoderOutput",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                           ,0x6c8,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      pFVar3 = this->CurrentSoftwareDecoderOutput;
      if (pFVar3 == (FF5PlayerVideoDecoderOutputDX *)0x0) goto LAB_148d07062;
      puVar12 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,&local_res8);
      (pFVar11->OutputBuffer).pSample = (IMFSample *)*puVar12;
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x10))();
      }
      pIVar6 = (pFVar11->OutputBuffer).pSample;
      if (pIVar6 != (IMFSample *)0x0) {
        (**(code **)((longlong)*pIVar6 + 8))();
      }
    }
    pTVar1 = &this->CurrentDecoderOutputBuffer;
    if (pTVar1 != (TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FDecoderOutputBuffer,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FDecoderOutputBuffer>_>
                   *)&local_48) {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      pFVar11 = (FDecoderOutputBuffer *)0x0;
      if (pFVar4 != (FDecoderOutputBuffer *)0x0) {
        pIVar5 = (pFVar4->OutputBuffer).pEvents;
        if (pIVar5 != (IMFCollection *)0x0) {
          (**(code **)((longlong)*pIVar5 + 0x10))();
          (pFVar4->OutputBuffer).pEvents = (IMFCollection *)0x0;
        }
        pIVar6 = (pFVar4->OutputBuffer).pSample;
        if (pIVar6 != (IMFSample *)0x0) {
          (**(code **)((longlong)*pIVar6 + 0x10))();
        }
        ::operator_delete(pFVar4,0x30);
      }
    }
    bVar8 = true;
  }
  if (pFVar11 != (FDecoderOutputBuffer *)0x0) {
    pIVar5 = (pFVar11->OutputBuffer).pEvents;
    if (pIVar5 != (IMFCollection *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
      (pFVar11->OutputBuffer).pEvents = (IMFCollection *)0x0;
    }
    pIVar6 = (pFVar11->OutputBuffer).pSample;
    if (pIVar6 != (IMFSample *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    ::operator_delete(pFVar11,0x30);
  }
  return bVar8;
}

// CreateWorkerThread @ 148d07f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread(FVideoDecoderH264_WindowsImpl *this)

{
  TUniquePtr<FThread,TDefaultDelete<FThread>_> *pTVar1;
  FThread *pFVar2;
  FThread *this_00;
  undefined ***pppuVar3;
  undefined1 auStackY_a8 [32];
  FThreadAffinity local_68;
  undefined4 local_58;
  undefined8 local_50;
  code *local_48 [2];
  undefined **local_38;
  FVideoDecoderH264_WindowsImpl *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this_00 = (FThread *)0x0;
  this->bTerminateWorkerThread = false;
  local_58 = 0;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FThread *)0x0) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_68.ProcessorGroup = 0;
    local_68._10_6_ = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,void>
                  ::Call;
    local_20 = (undefined ***)0x0;
    local_68.ThreadAffinityMask = 0xffffffffffffffff;
    local_30 = this;
    this_00 = ::FThread::FThread(pFVar2,L"AVEncoder::WindowsH264DecoderMFT",
                                 (TUniqueFunction<void___cdecl(void)> *)local_48,0,TPri_Normal,
                                 &local_68,NonForkable);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  pTVar1 = &this->WorkerThread;
  if (pTVar1 == (TUniquePtr<FThread,TDefaultDelete<FThread>_> *)&local_50) {
    if (this_00 == (FThread *)0x0) {
      return;
    }
    ::FThread::~FThread(this_00);
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar2 == (FThread *)0x0) {
      return;
    }
    ::FThread::~FThread(pFVar2);
    this_00 = pFVar2;
  }
  ::operator_delete(this_00,0x10);
  return;
}

// Decode @ 148d08410

/* WARNING: Enum "Type": Some values do not have unique names */

EDecodeResult __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::Decode
          (FVideoDecoderH264_WindowsImpl *this,FVideoDecoderInput *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FVideoDecoderOutputH264_Windows *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  HRESULT HVar8;
  void *pvVar9;
  longlong lVar10;
  FInputToDecode *pFVar11;
  long64 lVar12;
  TNode *pTVar13;
  undefined8 uVar14;
  FStaticBasicLogRecord *pFVar15;
  longlong *plVar16;
  FInputToDecode *pFVar17;
  EDecodeResult EVar18;
  bool bVar19;
  FVideoDecoderOutputH264_Windows *local_res8;
  FString local_38;
  
  if (this->bIsInitialized != false) goto LAB_148d08570;
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  iVar7 = GlobalInitCount + 1;
  bVar19 = GlobalInitCount == 0;
  GlobalInitCount = iVar7;
  if (bVar19) {
    bVar19 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
    if (bVar19) {
      pvVar9 = FWindowsPlatformProcess::GetDllHandle(L"mf.dll");
      if (((pvVar9 == (void *)0x0) ||
          (pvVar9 = FWindowsPlatformProcess::GetDllHandle(L"mfplat.dll"), pvVar9 == (void *)0x0)) ||
         (pvVar9 = FWindowsPlatformProcess::GetDllHandle(L"msmpeg2vdec.dll"), pvVar9 == (void *)0x0)
         ) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar15 = &::LOG_Static;
          goto LAB_148d0852d;
        }
      }
      else {
        HVar8 = MFStartup(0x20070,0);
        if (HVar8 < 0) {
          if (1 < (byte)LogVideoDecoder._0_1_) {
            GetComErrorDescription(&local_38,HVar8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          bGlobalMFStartedUp = true;
        }
      }
    }
    else if (1 < (byte)LogVideoDecoder._0_1_) {
      pFVar15 = &::LOG_Static;
LAB_148d0852d:
      UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogVideoDecoder);
    }
  }
  bVar19 = bGlobalMFStartedUp;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  if (((bVar19 != false) &&
      (bVar19 = FVideoDecoder::CreateDecoderAllocationInterface((FVideoDecoder *)this), bVar19)) &&
     (bVar19 = CreateD3DResources(this), bVar19)) {
    this->bIsInitialized = true;
  }
LAB_148d08570:
  if (((this->bIsInitialized == false) ||
      (lVar10 = (**(code **)((longlong)*param_1 + 0x18))(param_1), lVar10 == 0)) ||
     (iVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1), iVar7 < 1)) {
    return Failure;
  }
  pFVar11 = ::operator_new(0x28);
  EVar18 = Success;
  pFVar17 = (FInputToDecode *)0x0;
  if (pFVar11 != (FInputToDecode *)0x0) {
    pFVar11->PTS = 0;
    pFVar11->Width = 0;
    pFVar11->Height = 0;
    *(undefined8 *)&pFVar11->bIsKeyframe = 0;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    pFVar17 = pFVar11;
  }
  lVar12 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  pFVar17->PTS = lVar12;
  iVar7 = (**(code **)*param_1)(param_1);
  pFVar17->Width = iVar7;
  iVar7 = (**(code **)((longlong)*param_1 + 8))(param_1);
  pFVar17->Height = iVar7;
  bVar19 = (bool)(**(code **)((longlong)*param_1 + 0x28))(param_1);
  pFVar17->bIsKeyframe = bVar19;
  iVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar7,&(pFVar17->Data).AllocatorInstance,&(pFVar17->Data).ArrayNum,
             &(pFVar17->Data).ArrayMax);
  iVar7 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  pvVar9 = (void *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
  memcpy((pFVar17->Data).AllocatorInstance.Data,pvVar9,(longlong)iVar7);
  pTVar13 = ::operator_new(0x10);
  if (pTVar13 != (TNode *)0x0) {
    (pTVar13->Item).Ptr = pFVar17;
    pTVar13->NextNode = (TNode *)0x0;
    pTVar1 = (this->InputQueue).Head;
    (this->InputQueue).Head = pTVar13;
    pTVar1->NextNode = pTVar13;
    pFVar17 = (FInputToDecode *)0x0;
  }
  (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x10))();
  do {
    pTVar2 = ((this->OutputQueue).Tail)->NextNode;
    if (pTVar2 == (TNode *)0x0) {
LAB_148d0872c:
      if (pFVar17 != (FInputToDecode *)0x0) {
        pFVar6 = (pFVar17->Data).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(pFVar17,0x28);
      }
      return EVar18;
    }
    pFVar3 = pTVar2->Item;
    pTVar4 = (this->OutputQueue).Tail;
    (this->OutputQueue).Tail = pTVar2;
    pTVar2->Item = (FVideoDecoderOutputH264_Windows *)0x0;
    ::operator_delete(pTVar4,0x10);
    if (pFVar3->bIsValid == false) {
      (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,1);
      EVar18 = Failure;
      goto LAB_148d0872c;
    }
    local_res8 = pFVar3;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
    pcVar5 = *(code **)&this->field_0x10;
    plVar16 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar16 = *(longlong **)&this->field_0x38;
    }
    uVar14 = (**(code **)(*plVar16 + 8))();
    (*pcVar5)(uVar14,&local_res8);
  } while( true );
}

// DecoderSetInputType @ 148d08ed0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::DecoderSetInputType(FVideoDecoderH264_WindowsImpl *this)

{
  IMFTransform *pIVar1;
  bool bVar2;
  HRESULT HVar3;
  int iVar4;
  FString *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  IMFMediaType *local_res10 [3];
  FString local_18;
  
  local_res10[0] = (IMFMediaType *)0x0;
  HVar3 = MFCreateMediaType(local_res10);
  if (HVar3 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      pFVar5 = GetComErrorDescription(&local_18,HVar3);
      if ((pFVar5->Data).ArrayNum == 0) {
        pFVar6 = &::LOG_Static;
      }
      else {
        pFVar6 = &::LOG_Static;
      }
LAB_148d090ba:
      UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogVideoDecoder);
LAB_148d090c9:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar3 = (*local_res10[0]->lpVtbl->SetGUID)
                      (local_res10[0],(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Video);
    if ((HVar3 < 0) ||
       (HVar3 = (*local_res10[0]->lpVtbl->SetGUID)
                          (local_res10[0],(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFVideoFormat_H264),
       HVar3 < 0)) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription(&local_18,HVar3);
        pFVar6 = &::LOG_Static;
        goto LAB_148d090ba;
      }
    }
    else {
      HVar3 = (*local_res10[0]->lpVtbl->SetUINT64)
                        (local_res10[0],(GUID *)&MF_MT_FRAME_SIZE,0x78000000440);
      if (HVar3 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_18,HVar3);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          goto LAB_148d090c9;
        }
      }
      else {
        pIVar1 = (this->DecoderTransform).Reference;
        iVar4 = (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,0,local_res10[0],0);
        if ((this->bIsHardwareAccelerated != false) && (iVar4 == -0x3ff2928a)) {
          pFVar5 = ::FString::FString(&local_18,L"MF_E_UNSUPPORTED_D3D_TYPE");
          bVar2 = ReconfigureForSwDecoding(this,pFVar5);
          goto LAB_148d090da;
        }
        if (-1 < iVar4) {
          bVar2 = true;
          goto LAB_148d090da;
        }
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar5 = GetComErrorDescription(&local_18,iVar4);
          if ((pFVar5->Data).ArrayNum == 0) {
            pFVar6 = &::LOG_Static;
          }
          else {
            pFVar6 = &::LOG_Static;
          }
          goto LAB_148d090ba;
        }
      }
    }
  }
  bVar2 = false;
LAB_148d090da:
  if (local_res10[0] != (IMFMediaType *)0x0) {
    (*local_res10[0]->lpVtbl->Release)(local_res10[0]);
  }
  return bVar2;
}

// DecoderSetOutputType @ 148d09100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::DecoderSetOutputType(FVideoDecoderH264_WindowsImpl *this)

{
  IMFTransform *pIVar1;
  code *pcVar2;
  IMFMediaType *pIVar3;
  TRefCountPtr<IMFMediaType> TVar4;
  int iVar5;
  FString *pFVar6;
  FStaticBasicLogRecord *pFVar7;
  bool bVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  TRefCountPtr<IMFMediaType> local_58;
  FString local_50;
  longlong local_40;
  uchar local_38 [8];
  longlong local_30;
  uchar local_28 [8];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar9 = 0;
  local_58.Reference = (IMFMediaType *)0x0;
  while( true ) {
    TVar4.Reference = local_58.Reference;
    pIVar1 = (this->DecoderTransform).Reference;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x70);
    if (local_58.Reference != (IMFMediaType *)0x0) {
      local_58.Reference = (IMFMediaType *)0x0;
      (**(code **)((longlong)*TVar4.Reference + 0x10))();
    }
    iVar5 = (*pcVar2)(pIVar1,0,iVar9,&local_58);
    if (iVar5 < 0) {
      if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d0930a;
      GetComErrorDescription(&local_50,iVar5);
      pFVar7 = &::LOG_Static;
      goto LAB_148d092ed;
    }
    iVar5 = (**(code **)((longlong)*local_58.Reference + 0x50))
                      (local_58.Reference,&MF_MT_MAJOR_TYPE,&local_40);
    if ((iVar5 < 0) ||
       (iVar5 = (**(code **)((longlong)*local_58.Reference + 0x50))
                          (local_58.Reference,&MF_MT_SUBTYPE,&local_30), iVar5 < 0)) break;
    if ((((local_40 == MFMediaType_Video._0_8_) && (local_38 == MFMediaType_Video.Data4)) &&
        (local_30 == MFVideoFormat_NV12._0_8_)) && (local_28 == MFVideoFormat_NV12.Data4)) {
      pIVar1 = (this->DecoderTransform).Reference;
      iVar9 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,0,local_58.Reference,0);
      if (iVar9 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          pFVar6 = GetComErrorDescription(&local_50,iVar9);
          if ((pFVar6->Data).ArrayNum == 0) {
            pFVar7 = &::LOG_Static;
          }
          else {
            pFVar7 = &::LOG_Static;
          }
LAB_148d092ed:
          UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
LAB_148d0930a:
        bVar8 = false;
      }
      else {
        pIVar3 = (this->CurrentOutputMediaType).Reference;
        if (pIVar3 != local_58.Reference) {
          (this->CurrentOutputMediaType).Reference = local_58.Reference;
          if (local_58.Reference != (IMFMediaType *)0x0) {
            (**(code **)((longlong)*local_58.Reference + 8))();
          }
          if (pIVar3 != (IMFMediaType *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          }
        }
        bVar8 = true;
      }
      if (local_58.Reference != (IMFMediaType *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      return bVar8;
    }
    iVar9 = iVar9 + 1;
  }
  if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d0930a;
  pFVar6 = GetComErrorDescription(&local_50,iVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    pFVar7 = &::LOG_Static;
  }
  else {
    pFVar7 = &::LOG_Static;
  }
  goto LAB_148d092ed;
}

// DecoderVerifyStatus @ 148d09350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::DecoderVerifyStatus(FVideoDecoderH264_WindowsImpl *this)

{
  uint uVar1;
  IMFTransform *pIVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  FString local_28;
  
  pIVar2 = (this->DecoderTransform).Reference;
  iVar4 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,local_res18,local_res10);
  if (iVar4 < 0) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    pFVar5 = GetComErrorDescription(&local_28,iVar4);
    if ((pFVar5->Data).ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
  }
  else {
    if ((local_res18[0] != 1) || (local_res10[0] != 1)) {
      if ((byte)LogVideoDecoder._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      return false;
    }
    pIVar2 = (this->DecoderTransform).Reference;
    local_res8[0] = 0;
    iVar4 = (**(code **)((longlong)*pIVar2 + 0x98))(pIVar2,0,local_res8);
    if (iVar4 < 0) {
      if ((byte)LogVideoDecoder._0_1_ < 2) {
        return false;
      }
      pFVar5 = GetComErrorDescription(&local_28,iVar4);
      if ((pFVar5->Data).ArrayNum == 0) {
        pFVar6 = &::LOG_Static;
      }
      else {
        pFVar6 = &::LOG_Static;
      }
    }
    else {
      if (local_res8[0] != 1) {
        if ((byte)LogVideoDecoder._0_1_ < 2) {
          return false;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        return false;
      }
      pIVar2 = (this->DecoderTransform).Reference;
      iVar4 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,0,&this->DecoderOutputStreamInfo);
      if (-1 < iVar4) {
        uVar1 = (this->DecoderOutputStreamInfo).dwFlags;
        if ((uVar1 & 4) == 0) {
          pFVar5 = ::FString::FString(&local_28,
                                      L"Incompatible H.264 decoder: Fixed sample size expected");
          bVar3 = ReconfigureForSwDecoding(this,pFVar5);
          return bVar3;
        }
        if ((uVar1 & 1) != 0) {
          if (this->bIsHardwareAccelerated == false) {
            if ((uVar1 & 0x100) != 0) {
              if ((byte)LogVideoDecoder._0_1_ < 2) {
                return false;
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
              return false;
            }
          }
          else if ((uVar1 & 0x100) == 0) {
            pFVar5 = ::FString::FString(&local_28,
                                        L"Incompatible H.264 decoder: H/W accelerated decoder is expected to provide output samples"
                                       );
            bVar3 = ReconfigureForSwDecoding(this,pFVar5);
            return bVar3;
          }
          return true;
        }
        pFVar5 = ::FString::FString(&local_28,L"Incompatible H.264 decoder: Whole samples expected")
        ;
        bVar3 = ReconfigureForSwDecoding(this,pFVar5);
        return bVar3;
      }
      if ((byte)LogVideoDecoder._0_1_ < 2) {
        return false;
      }
      GetComErrorDescription(&local_28,iVar4);
      pFVar6 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogVideoDecoder);
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return false;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return false;
}

// FallbackToSwDecoding @ 148d0a410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::FallbackToSwDecoding
          (FVideoDecoderH264_WindowsImpl *this,FString *param_1)

{
  int iVar1;
  ID3D11Device *pIVar2;
  FScriptContainerElement *pFVar3;
  longlong *local_res8;
  FString local_18;
  
  if (this->bIsHardwareAccelerated == false) {
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    goto LAB_148d0a565;
  }
  if (3 < (byte)LogVideoDecoder._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
  }
  pIVar2 = (this->DXDeviceInfo).DxMainAppDevice11.Reference;
  this->bIsHardwareAccelerated = false;
  local_res8 = (longlong *)0x0;
  if ((pIVar2 == (ID3D11Device *)0x0) &&
     (pIVar2 = (ID3D11Device *)(this->DXDeviceInfo).DxMainAppDevice12.Reference,
     pIVar2 == (ID3D11Device *)0x0)) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      goto LAB_148d0a557;
    }
  }
  else {
    iVar1 = (**(code **)*pIVar2)(pIVar2,&_GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0,&local_res8);
    if ((-1 < iVar1) && (local_res8 != (longlong *)0x0)) {
      (**(code **)(*local_res8 + 0x28))(local_res8,1);
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x10))();
      }
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return true;
    }
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription(&local_18,iVar1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
LAB_148d0a557:
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
LAB_148d0a565:
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return false;
}

// InternalDecoderCreate @ 148d0cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::InternalDecoderCreate(FVideoDecoderH264_WindowsImpl *this)

{
  code *pcVar1;
  IMFTransform *pIVar2;
  TRefCountPtr<IMFTransform> TVar3;
  bool bVar4;
  int iVar5;
  HRESULT HVar6;
  FString *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  int local_res10 [2];
  TRefCountPtr<IMFTransform> local_res18;
  longlong *local_res20;
  FString local_38;
  FString local_28;
  
  local_res20 = (longlong *)0x0;
  local_res18.Reference = (IMFTransform *)0x0;
  bVar4 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
  if ((bVar4) &&
     (iVar5 = (**(code **)((longlong)*(this->DXDeviceInfo).DxDevice.Reference + 0x138))(),
     iVar5 != 0)) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      pFVar7 = GetComErrorDescription(&local_38,iVar5);
      if ((pFVar7->Data).ArrayNum == 0) {
        pFVar8 = &::LOG_Static;
      }
      else {
        pFVar8 = &::LOG_Static;
      }
LAB_148d0d113:
      UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogVideoDecoder);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar6 = CoCreateInstance((IID *)&MFTmsH264Decoder,(LPUNKNOWN)0x0,1,(IID *)&IID_IMFTransform,
                             &local_res18.Reference);
    TVar3.Reference = local_res18.Reference;
    if (HVar6 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        pFVar7 = GetComErrorDescription(&local_38,HVar6);
        if ((pFVar7->Data).ArrayNum == 0) {
          pFVar8 = &::LOG_Static;
        }
        else {
          pFVar8 = &::LOG_Static;
        }
        goto LAB_148d0d113;
      }
    }
    else {
      pcVar1 = *(code **)((longlong)*local_res18.Reference + 0x40);
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
      }
      iVar5 = (*pcVar1)(TVar3.Reference,&local_res20);
      if (-1 < iVar5) {
        local_res10[0] = 0;
        iVar5 = (**(code **)(*local_res20 + 0x38))(local_res20,&MF_SA_D3D11_AWARE,local_res10);
        if (iVar5 < 0) {
          pFVar7 = ::FString::FString(&local_28,L"Failed to get MF_SA_D3D11_AWARE");
          FallbackToSwDecoding(this,pFVar7);
        }
        else if (local_res10[0] == 0) {
          pFVar7 = ::FString::FString(&local_28,L"Not MF_SA_D3D11_AWARE");
          FallbackToSwDecoding(this,pFVar7);
        }
        else {
          iVar5 = (**(code **)((longlong)*local_res18.Reference + 0xb8))
                            (local_res18.Reference,2,(this->DXDeviceInfo).DxDeviceManager.Reference)
          ;
          if (iVar5 < 0) {
            GetComErrorDescription(&local_28,iVar5);
            ::FString::PrintfImpl(&local_38,L"Failed to set MFT_MESSAGE_SET_D3D_MANAGER: 0x%X %s");
            FallbackToSwDecoding(this,&local_38);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
        }
        (**(code **)(*local_res20 + 0xa8))
                  (local_res20,&_GUID_9c27891a_ed7a_40e1_88e8_b22727a024ee,1);
        pIVar2 = (this->DecoderTransform).Reference;
        if (pIVar2 != local_res18.Reference) {
          (this->DecoderTransform).Reference = local_res18.Reference;
          if (local_res18.Reference != (IMFTransform *)0x0) {
            (**(code **)((longlong)*local_res18.Reference + 8))();
          }
          if (pIVar2 != (IMFTransform *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        bVar4 = true;
        goto LAB_148d0d25b;
      }
      if (1 < (byte)LogVideoDecoder._0_1_) {
        GetComErrorDescription(&local_38,iVar5);
        pFVar8 = &::LOG_Static;
        goto LAB_148d0d113;
      }
    }
  }
  bVar4 = false;
LAB_148d0d25b:
  if (local_res18.Reference != (IMFTransform *)0x0) {
    (**(code **)((longlong)*local_res18.Reference + 0x10))();
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  return bVar4;
}

// InternalDecoderDestroy @ 148d0d290

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::InternalDecoderDestroy
          (FVideoDecoderH264_WindowsImpl *this)

{
  IMFTransform *pIVar1;
  IMFMediaType *pIVar2;
  FDecoderOutputBuffer *pFVar3;
  IMFCollection *pIVar4;
  IMFSample *pIVar5;
  
  this->DecodeMode = Undefined;
  pIVar1 = (this->DecoderTransform).Reference;
  if (pIVar1 != (IMFTransform *)0x0) {
    (this->DecoderTransform).Reference = (IMFTransform *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->CurrentOutputMediaType).Reference;
  if (pIVar2 != (IMFMediaType *)0x0) {
    (this->CurrentOutputMediaType).Reference = (IMFMediaType *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->NumFramesInDecoder = 0;
  (this->DecoderOutputStreamInfo).dwFlags = 0;
  (this->DecoderOutputStreamInfo).cbSize = 0;
  (this->DecoderOutputStreamInfo).cbAlignment = 0;
  this->bIsHardwareAccelerated = true;
  this->bRequiresReconfigurationForSW = false;
  pFVar3 = (this->CurrentDecoderOutputBuffer).Ptr;
  if (pFVar3 != (FDecoderOutputBuffer *)0x0) {
    (this->CurrentDecoderOutputBuffer).Ptr = (FDecoderOutputBuffer *)0x0;
    pIVar4 = (pFVar3->OutputBuffer).pEvents;
    if (pIVar4 != (IMFCollection *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
      (pFVar3->OutputBuffer).pEvents = (IMFCollection *)0x0;
    }
    pIVar5 = (pFVar3->OutputBuffer).pSample;
    if (pIVar5 != (IMFSample *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    ::operator_delete(pFVar3,0x30);
  }
  return;
}

// PerformAsyncShutdown @ 148d0fdc0

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::PerformAsyncShutdown(FVideoDecoderH264_WindowsImpl *this)

{
  FThread *this_00;
  
  this->bTerminateWorkerThread = true;
  (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x10))();
  ::FThread::Join((this->WorkerThread).Ptr);
  this_00 = (this->WorkerThread).Ptr;
  if (this_00 != (FThread *)0x0) {
    (this->WorkerThread).Ptr = (FThread *)0x0;
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  if (this->bIsInitialized != false) {
    FDXDeviceInfo::Reset(&this->DXDeviceInfo);
    FVideoDecoder::ReleaseDecoderAllocationInterface((FVideoDecoder *)this);
    EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
    GlobalInitCount = GlobalInitCount + -1;
    if ((GlobalInitCount == 0) && (bGlobalMFStartedUp != false)) {
      MFShutdown();
      bGlobalMFStartedUp = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
    this->bIsInitialized = false;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d0fe8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))(this,1);
  return;
}

// ProcessDecoding @ 148d100b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::ProcessDecoding
          (FVideoDecoderH264_WindowsImpl *this,FInputToDecode *param_1)

{
  FDecoderOutputBuffer *pFVar1;
  IMFTransform *pIVar2;
  IMFCollection *pIVar3;
  IMFSample *pIVar4;
  TNode *pTVar5;
  IMFSample *This;
  ForAnyElementType FVar6;
  bool bVar7;
  HRESULT HVar8;
  int iVar9;
  FVideoDecoderOutputH264_Windows *pFVar10;
  FVideoDecoderOutputH264_Windows *pFVar11;
  TNode *pTVar12;
  uint uVar13;
  FVideoDecoderOutputH264_Windows *pFVar14;
  uint uVar15;
  DWORD local_res8 [2];
  DWORD local_res18 [2];
  undefined4 local_res20 [2];
  IMFSample *local_68;
  IMFMediaBuffer *local_60;
  FString local_58;
  BYTE *local_48 [2];
  
  if (((this->DecoderTransform).Reference == (IMFTransform *)0x0) ||
     (param_1 == (FInputToDecode *)0x0)) {
    return false;
  }
  pFVar14 = (FVideoDecoderOutputH264_Windows *)0x0;
  local_68 = (IMFSample *)0x0;
  local_60 = (IMFMediaBuffer *)0x0;
  local_48[0] = (BYTE *)0x0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  HVar8 = MFCreateSample(&local_68);
  if (HVar8 < 0) {
    if (1 < (byte)LogVideoDecoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      bVar7 = false;
      goto LAB_148d10666;
    }
  }
  else {
    if (local_60 != (IMFMediaBuffer *)0x0) {
      (*local_60->lpVtbl->Release)(local_60);
    }
    HVar8 = MFCreateMemoryBuffer((param_1->Data).ArrayNum,&local_60);
    if (HVar8 < 0) {
      if (1 < (byte)LogVideoDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
        bVar7 = false;
        goto LAB_148d10666;
      }
    }
    else {
      HVar8 = (*local_68->lpVtbl->AddBuffer)(local_68,local_60);
      if (HVar8 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          bVar7 = false;
          goto LAB_148d10666;
        }
      }
      else {
        HVar8 = (*local_60->lpVtbl->Lock)(local_60,local_48,local_res18,local_res8);
        if (HVar8 < 0) {
          if (1 < (byte)LogVideoDecoder._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
            bVar7 = false;
            goto LAB_148d10666;
          }
        }
        else {
          memcpy(local_48[0],(param_1->Data).AllocatorInstance.Data,
                 (longlong)(param_1->Data).ArrayNum);
          HVar8 = (*local_60->lpVtbl->Unlock)(local_60);
          if (HVar8 < 0) {
            if (1 < (byte)LogVideoDecoder._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
              bVar7 = false;
              goto LAB_148d10666;
            }
          }
          else {
            HVar8 = (*local_60->lpVtbl->SetCurrentLength)(local_60,(param_1->Data).ArrayNum);
            if (HVar8 < 0) {
              if (1 < (byte)LogVideoDecoder._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                bVar7 = false;
                goto LAB_148d10666;
              }
            }
            else {
              HVar8 = (*local_68->lpVtbl->SetSampleTime)(local_68,param_1->PTS);
              if (HVar8 < 0) {
                if (1 < (byte)LogVideoDecoder._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_Failed_to_set_v_151cc9be0,
                             (FLogCategoryBase *)&LogVideoDecoder);
                  bVar7 = false;
                  goto LAB_148d10666;
                }
              }
              else {
                HVar8 = (*local_68->lpVtbl->SetUINT32)
                                  (local_68,(GUID *)&MFSampleExtension_CleanPoint,
                                   (uint)(param_1->bIsKeyframe != false));
                if (HVar8 < 0) {
                  if (1 < (byte)LogVideoDecoder._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                    bVar7 = false;
                    goto LAB_148d10666;
                  }
                }
                else {
                  uVar15 = param_1->Width + 0xf;
                  uVar13 = param_1->Height + 0xf;
LAB_148d1031a:
                  do {
                    if ((this->bTerminateWorkerThread != false) || (local_68 == (IMFSample *)0x0)) {
LAB_148d10664:
                      bVar7 = true;
                      goto LAB_148d10666;
                    }
                    pFVar11 = this->CurrentApplicationOutputSample;
                    if (pFVar11 == (FVideoDecoderOutputH264_Windows *)0x0) {
                      pFVar10 = ::operator_new(0x108);
                      pFVar11 = pFVar14;
                      if (pFVar10 != (FVideoDecoderOutputH264_Windows *)0x0) {
                        pFVar11 = FVideoDecoderOutputH264_Windows::FVideoDecoderOutputH264_Windows
                                            (pFVar10);
                      }
                      this->CurrentApplicationOutputSample = pFVar11;
                    }
                    if (this->DecodeMode == Win8SW) {
                      if (((pFVar11->Buffer).AllocatedBuffer == (void *)0x0) &&
                         (bVar7 = AllocateApplicationOutputSampleBuffer
                                            (this,uVar15 & 0xfffffff0,uVar13 & 0xfffffff0), !bVar7))
                      break;
LAB_148d10399:
                      pFVar11 = (FVideoDecoderOutputH264_Windows *)
                                this->CurrentSoftwareDecoderOutput;
                      if (pFVar11 == (FVideoDecoderOutputH264_Windows *)0x0) {
                        pFVar10 = ::operator_new(0x38);
                        pFVar11 = pFVar14;
                        if (pFVar10 != (FVideoDecoderOutputH264_Windows *)0x0) {
                          pFVar10->_padding_ =
                               (longlong)&___7FF5PlayerVideoDecoderOutputDX_AVEncoder__6B_;
                          *(undefined4 *)&(pFVar10->Buffer).AllocatedBuffer = 0;
                          (pFVar10->Buffer).AllocatedSize = 0;
                          (pFVar10->Buffer).AllocatedPlanesNum = 0;
                          (pFVar10->Buffer).AllocatedPlaneLayout = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].Width = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].Height = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].BytesPerPixel = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetToFirstPixel = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenPixels = 0;
                          (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenRows = 0;
                          pFVar11 = pFVar10;
                        }
                        this->CurrentSoftwareDecoderOutput =
                             (FF5PlayerVideoDecoderOutputDX *)pFVar11;
                      }
                      pFVar10 = pFVar14;
                      if (this->DecodeMode == Win8SW) {
                        pFVar10 = *(FVideoDecoderOutputH264_Windows **)
                                   (this->CurrentApplicationOutputSample->Buffer).AllocatedBuffer;
                      }
                      bVar7 = FF5PlayerVideoDecoderOutputDX::PreInitForSoftwareDecode
                                        ((FF5PlayerVideoDecoderOutputDX *)pFVar11,
                                         (TIntPoint<int>)
                                         (CONCAT44(uVar13,uVar15) & 0xfffffff0fffffff0),
                                         (ID3D11Texture2D *)pFVar10);
                      if (!bVar7) break;
                    }
                    else if (this->DecodeMode == Win10SW) goto LAB_148d10399;
                    if (((this->CurrentDecoderOutputBuffer).Ptr == (FDecoderOutputBuffer *)0x0) &&
                       (bVar7 = CreateDecoderOutputBuffer(this), !bVar7)) break;
                    pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
                    (pFVar1->OutputBuffer).dwStatus = 0;
                    (pFVar1->OutputBuffer).dwStreamID = 0;
                    (pFVar1->OutputBuffer).pEvents = (IMFCollection *)0x0;
                    pIVar2 = (this->DecoderTransform).Reference;
                    local_res20[0] = 0;
                    iVar9 = (**(code **)((longlong)*pIVar2 + 200))
                                      (pIVar2,0,1,
                                       &((this->CurrentDecoderOutputBuffer).Ptr)->OutputBuffer,
                                       local_res20);
                    pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
                    pIVar3 = (pFVar1->OutputBuffer).pEvents;
                    if (pIVar3 != (IMFCollection *)0x0) {
                      (**(code **)((longlong)*pIVar3 + 0x10))();
                      (pFVar1->OutputBuffer).pEvents = (IMFCollection *)0x0;
                    }
                    if (iVar9 == -0x3ff2928e) {
                      if (local_68 == (IMFSample *)0x0) goto LAB_148d10664;
                      pIVar2 = (this->DecoderTransform).Reference;
                      iVar9 = (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,0,local_68,0);
                      This = local_68;
                      if (iVar9 < 0) {
                        if (1 < (byte)LogVideoDecoder._0_1_) {
                          UE::Logging::Private::BasicLog<2>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                          bVar7 = false;
                          goto LAB_148d10666;
                        }
                        break;
                      }
                      if (local_68 != (IMFSample *)0x0) {
                        local_68 = (IMFSample *)0x0;
                        (*This->lpVtbl->Release)(This);
                      }
                      this->NumFramesInDecoder = this->NumFramesInDecoder + 1;
                      goto LAB_148d1031a;
                    }
                    if (iVar9 != -0x3ff2929f) {
                      if (iVar9 < 0) {
                        if (1 < (byte)LogVideoDecoder._0_1_) {
                          GetComErrorDescription(&local_58,iVar9);
                          UE::Logging::Private::BasicLog<2>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
                          if ((IMFSample *)local_58.Data.AllocatorInstance.Data != (IMFSample *)0x0)
                          {
                            FMemory::Free(local_58.Data.AllocatorInstance.Data);
                          }
                        }
                        break;
                      }
                      pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
                      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      pIVar4 = (pFVar1->OutputBuffer).pSample;
                      if (pIVar4 != (IMFSample *)0x0) {
                        (pFVar1->OutputBuffer).pSample = (IMFSample *)0x0;
                        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)pIVar4;
                      }
                      FVar6.Data = local_58.Data.AllocatorInstance.Data;
                      pFVar1 = (this->CurrentDecoderOutputBuffer).Ptr;
                      if (pFVar1 != (FDecoderOutputBuffer *)0x0) {
                        (this->CurrentDecoderOutputBuffer).Ptr = (FDecoderOutputBuffer *)0x0;
                        pIVar3 = (pFVar1->OutputBuffer).pEvents;
                        if (pIVar3 != (IMFCollection *)0x0) {
                          (**(code **)((longlong)*pIVar3 + 0x10))();
                          (pFVar1->OutputBuffer).pEvents = (IMFCollection *)0x0;
                        }
                        pIVar4 = (pFVar1->OutputBuffer).pSample;
                        if (pIVar4 != (IMFSample *)0x0) {
                          (**(code **)((longlong)*pIVar4 + 0x10))();
                        }
                        ::operator_delete(pFVar1,0x30);
                      }
                      this->NumFramesInDecoder = this->NumFramesInDecoder + -1;
                      if ((IMFSample *)FVar6.Data != (IMFSample *)0x0) {
                        bVar7 = ConvertDecodedImage(this,(TRefCountPtr<IMFSample> *)&local_58);
                        if (!bVar7) {
                          if ((IMFSample *)local_58.Data.AllocatorInstance.Data != (IMFSample *)0x0)
                          {
                            (**(code **)((longlong)
                                         *(IMFSample *)local_58.Data.AllocatorInstance.Data + 0x10))
                                      ();
                            bVar7 = false;
                            goto LAB_148d10666;
                          }
                          break;
                        }
                        pTVar12 = ::operator_new(0x10);
                        if (pTVar12 != (TNode *)0x0) {
                          pTVar12->NextNode = (TNode *)0x0;
                          pTVar12->Item = this->CurrentApplicationOutputSample;
                          pTVar5 = (this->OutputQueue).Head;
                          (this->OutputQueue).Head = pTVar12;
                          pTVar5->NextNode = pTVar12;
                        }
                        this->CurrentApplicationOutputSample =
                             (FVideoDecoderOutputH264_Windows *)0x0;
                        if ((IMFSample *)local_58.Data.AllocatorInstance.Data != (IMFSample *)0x0) {
                          (**(code **)((longlong)*(IMFSample *)local_58.Data.AllocatorInstance.Data
                                      + 0x10))();
                        }
                      }
                      goto LAB_148d1031a;
                    }
                    bVar7 = DecoderSetOutputType(this);
                  } while (bVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_148d10666:
  if (local_60 != (IMFMediaBuffer *)0x0) {
    (*local_60->lpVtbl->Release)(local_60);
  }
  if (local_68 != (IMFSample *)0x0) {
    (*local_68->lpVtbl->Release)(local_68);
  }
  return bVar7;
}

// PurgeAllPendingOutput @ 148d106d0

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::PurgeAllPendingOutput(FVideoDecoderH264_WindowsImpl *this)

{
  FVideoDecoderOutputH264_Windows *pFVar1;
  FF5PlayerVideoDecoderOutputDX *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  FReadAccessScope local_38;
  
  pFVar1 = this->CurrentApplicationOutputSample;
  if (pFVar1 != (FVideoDecoderOutputH264_Windows *)0x0) {
    if (&pFVar1->Buffer != (FVideoDecoderAllocFrameBufferResult *)0x0) {
      TDelegate<void___cdecl(void_*,void_*),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&(pFVar1->Buffer).ReleaseCallback,(pFVar1->Buffer).CallbackValue,
                 (pFVar1->Buffer).AllocatedBuffer);
    }
    (**(code **)(this->CurrentApplicationOutputSample->_padding_ + 8))();
    this->CurrentApplicationOutputSample = (FVideoDecoderOutputH264_Windows *)0x0;
  }
  pFVar2 = this->CurrentSoftwareDecoderOutput;
  if (pFVar2 != (FF5PlayerVideoDecoderOutputDX *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  this->CurrentSoftwareDecoderOutput = (FF5PlayerVideoDecoderOutputDX *)0x0;
  while (pTVar3 = ((this->OutputQueue).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
    pFVar1 = pTVar3->Item;
    pTVar4 = (this->OutputQueue).Tail;
    (this->OutputQueue).Tail = pTVar3;
    pTVar3->Item = (FVideoDecoderOutputH264_Windows *)0x0;
    ::operator_delete(pTVar4,0x10);
    if (&pFVar1->Buffer != (FVideoDecoderAllocFrameBufferResult *)0x0) {
      pvVar5 = (pFVar1->Buffer).AllocatedBuffer;
      pvVar6 = (pFVar1->Buffer).CallbackValue;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar1->Buffer).ReleaseCallback,&local_38);
      if ((*(int *)&(pFVar1->Buffer).ReleaseCallback.field_0x10 != 0) &&
         (plVar7 = *(longlong **)&(pFVar1->Buffer).ReleaseCallback.field_0x8,
         plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x68))(plVar7,pvVar6,pvVar5);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
  }
  return;
}

// ReconfigureForSwDecoding @ 148d109c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::ReconfigureForSwDecoding
          (FVideoDecoderH264_WindowsImpl *this,FString *param_1)

{
  IMFTransform *pIVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FString local_18;
  
  this->bRequiresReconfigurationForSW = true;
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  bVar3 = FallbackToSwDecoding(this,&local_18);
  if ((bVar3) && (pIVar1 = (this->DecoderTransform).Reference, pIVar1 != (IMFTransform *)0x0)) {
    iVar4 = (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,2,0);
    if (-1 < iVar4) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return true;
    }
    if (1 < (byte)LogVideoDecoder._0_1_) {
      GetComErrorDescription(&local_18,iVar4);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ReleaseD3DResources @ 148d11a40

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::ReleaseD3DResources(FVideoDecoderH264_WindowsImpl *this)

{
  FDXDeviceInfo::Reset(&this->DXDeviceInfo);
  return;
}

// ReturnUnusedApplicationOutputSample @ 148d12090

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::ReturnUnusedApplicationOutputSample
          (FVideoDecoderH264_WindowsImpl *this)

{
  FVideoDecoderOutputH264_Windows *pFVar1;
  FF5PlayerVideoDecoderOutputDX *pFVar2;
  
  pFVar1 = this->CurrentApplicationOutputSample;
  if (pFVar1 != (FVideoDecoderOutputH264_Windows *)0x0) {
    if (&pFVar1->Buffer != (FVideoDecoderAllocFrameBufferResult *)0x0) {
      TDelegate<void___cdecl(void_*,void_*),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&(pFVar1->Buffer).ReleaseCallback,(pFVar1->Buffer).CallbackValue,
                 (pFVar1->Buffer).AllocatedBuffer);
    }
    (**(code **)(this->CurrentApplicationOutputSample->_padding_ + 8))();
    this->CurrentApplicationOutputSample = (FVideoDecoderOutputH264_Windows *)0x0;
  }
  pFVar2 = this->CurrentSoftwareDecoderOutput;
  if (pFVar2 != (FF5PlayerVideoDecoderOutputDX *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  this->CurrentSoftwareDecoderOutput = (FF5PlayerVideoDecoderOutputDX *)0x0;
  return;
}

// Setup @ 148d13640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::Setup(FVideoDecoderH264_WindowsImpl *this,FInit *param_1)

{
  TUniquePtr<FThread,TDefaultDelete<FThread>_> *pTVar1;
  FThread *pFVar2;
  FThread *this_00;
  undefined ***pppuVar3;
  undefined1 auStackY_a8 [32];
  FThreadAffinity local_68;
  undefined4 local_58;
  undefined8 local_50;
  code *local_48 [2];
  undefined **local_38;
  FVideoDecoderH264_WindowsImpl *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this_00 = (FThread *)0x0;
  local_58 = 0;
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->field_0x40,
             &param_1->CreateDecoderAllocationInterface);
  TFunction<void___cdecl(void_*,void_*_*)>::operator=
            ((TFunction<void___cdecl(void_*,void_*_*)> *)&this->field_0x70,
             &param_1->ReleaseDecoderAllocationInterface);
  this->bTerminateWorkerThread = false;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FThread *)0x0) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_68.ProcessorGroup = 0;
    local_68._10_6_ = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`AVEncoder::FVideoDecoderH264_WindowsImpl::CreateWorkerThread'::__l2::<lambda_1>,void>
                  ::Call;
    local_20 = (undefined ***)0x0;
    local_68.ThreadAffinityMask = 0xffffffffffffffff;
    local_30 = this;
    this_00 = ::FThread::FThread(pFVar2,L"AVEncoder::WindowsH264DecoderMFT",
                                 (TUniqueFunction<void___cdecl(void)> *)local_48,0,TPri_Normal,
                                 &local_68,NonForkable);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  pTVar1 = &this->WorkerThread;
  if (pTVar1 == (TUniquePtr<FThread,TDefaultDelete<FThread>_> *)&local_50) {
    if (this_00 == (FThread *)0x0) {
      return true;
    }
    ::FThread::~FThread(this_00);
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar2 == (FThread *)0x0) {
      return true;
    }
    ::FThread::~FThread(pFVar2);
    this_00 = pFVar2;
  }
  ::operator_delete(this_00,0x10);
  return true;
}

// SetupFirstUseResources @ 148d13820

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::SetupFirstUseResources
          (FVideoDecoderH264_WindowsImpl *this)

{
  int iVar1;
  HRESULT HVar2;
  void *pvVar3;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  FString local_18;
  
  if (this->bIsInitialized != false) {
    return this->bIsInitialized;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  iVar1 = GlobalInitCount + 1;
  bVar5 = GlobalInitCount != 0;
  GlobalInitCount = iVar1;
  if (bVar5) goto LAB_148d13948;
  bVar5 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
  if (bVar5) {
    pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"mf.dll");
    if (((pvVar3 != (void *)0x0) &&
        (pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"mfplat.dll"), pvVar3 != (void *)0x0)) &&
       (pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"msmpeg2vdec.dll"), pvVar3 != (void *)0x0))
    {
      HVar2 = MFStartup(0x20070,0);
      if (HVar2 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_18,HVar2);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        bGlobalMFStartedUp = true;
      }
      goto LAB_148d13948;
    }
    if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d13948;
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d13948;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogVideoDecoder);
LAB_148d13948:
  bVar5 = bGlobalMFStartedUp;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  if (((bVar5 != false) &&
      (bVar5 = FVideoDecoder::CreateDecoderAllocationInterface((FVideoDecoder *)this), bVar5)) &&
     (bVar5 = CreateD3DResources(this), bVar5)) {
    this->bIsInitialized = true;
  }
  return this->bIsInitialized;
}

// Shutdown @ 148d14930

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::Shutdown(FVideoDecoderH264_WindowsImpl *this)

{
  HANDLE hObject;
  
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x100000,AsyncShutdownProc,this,0,(LPDWORD)0x0);
  if (hObject != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d14962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(hObject);
    return;
  }
  return;
}

// StartStreaming @ 148d14c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::StartStreaming(FVideoDecoderH264_WindowsImpl *this)

{
  IMFTransform *pIVar1;
  int iVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FString local_18;
  
  pIVar1 = (this->DecoderTransform).Reference;
  iVar2 = (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,0x10000000,0);
  if (iVar2 < 0) {
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    pFVar3 = GetComErrorDescription(&local_18,iVar2);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    pIVar1 = (this->DecoderTransform).Reference;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,0x10000003,0);
    if (-1 < iVar2) {
      return true;
    }
    if ((byte)LogVideoDecoder._0_1_ < 2) {
      return false;
    }
    GetComErrorDescription(&local_18,iVar2);
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogVideoDecoder);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// StaticInitializeResources @ 148d14e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl AVEncoder::FVideoDecoderH264_WindowsImpl::StaticInitializeResources(void)

{
  int iVar1;
  HRESULT HVar2;
  void *pvVar3;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  FString local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  iVar1 = GlobalInitCount + 1;
  bVar5 = GlobalInitCount != 0;
  GlobalInitCount = iVar1;
  if (bVar5) goto LAB_148d14f43;
  bVar5 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
  if (bVar5) {
    pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"mf.dll");
    if (((pvVar3 != (void *)0x0) &&
        (pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"mfplat.dll"), pvVar3 != (void *)0x0)) &&
       (pvVar3 = FWindowsPlatformProcess::GetDllHandle(L"msmpeg2vdec.dll"), pvVar3 != (void *)0x0))
    {
      HVar2 = MFStartup(0x20070,0);
      if (HVar2 < 0) {
        if (1 < (byte)LogVideoDecoder._0_1_) {
          GetComErrorDescription(&local_18,HVar2);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoDecoder);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        bGlobalMFStartedUp = true;
      }
      goto LAB_148d14f43;
    }
    if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d14f43;
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogVideoDecoder._0_1_ < 2) goto LAB_148d14f43;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogVideoDecoder);
LAB_148d14f43:
  bVar5 = bGlobalMFStartedUp;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  return bVar5;
}

// StaticReleaseResources @ 148d14f70

void __cdecl AVEncoder::FVideoDecoderH264_WindowsImpl::StaticReleaseResources(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  GlobalInitCount = GlobalInitCount + -1;
  if ((GlobalInitCount == 0) && (bGlobalMFStartedUp != false)) {
    MFShutdown();
    bGlobalMFStartedUp = false;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d14faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalLock);
  return;
}

// StopWorkerThread @ 148d14fc0

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::StopWorkerThread(FVideoDecoderH264_WindowsImpl *this)

{
  FThread *this_00;
  
  this->bTerminateWorkerThread = true;
  (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x10))();
  ::FThread::Join((this->WorkerThread).Ptr);
  this_00 = (this->WorkerThread).Ptr;
  if (this_00 != (FThread *)0x0) {
    (this->WorkerThread).Ptr = (FThread *)0x0;
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  return;
}

// WorkerThreadFN @ 148d15ea0

void __thiscall
AVEncoder::FVideoDecoderH264_WindowsImpl::WorkerThreadFN(FVideoDecoderH264_WindowsImpl *this)

{
  FEvent *pFVar1;
  TNode *pTVar2;
  void *pvVar3;
  TNode *pTVar4;
  FInputToDecode *pFVar5;
  FScriptContainerElement *pFVar6;
  TNode *pTVar7;
  code *pcVar8;
  bool bVar9;
  FVideoDecoderOutputH264_Windows *pFVar10;
  TNode *pTVar11;
  TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
  *pTVar12;
  FVideoDecoderOutputH264_Windows *pFVar13;
  FVideoDecoderOutputH264_Windows *pFVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  if (this->bTerminateWorkerThread == false) {
    do {
      pFVar1 = (this->WorkerThreadSignalHaveWork).Event;
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
      (**(code **)(((this->WorkerThreadSignalHaveWork).Event)->_padding_ + 0x18))();
      pFVar13 = (FVideoDecoderOutputH264_Windows *)0x0;
      if (this->bTerminateWorkerThread != false) break;
      do {
        pTVar2 = ((this->InputQueue).Tail)->NextNode;
        pFVar14 = pFVar13;
        if (pTVar2 == (TNode *)0x0) break;
        pTVar12 = &pTVar2->Item;
        if ((TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
             *)&local_48 != pTVar12) {
          pFVar14 = (FVideoDecoderOutputH264_Windows *)pTVar12->Ptr;
          pTVar12->Ptr = (FInputToDecode *)0x0;
          if (pFVar13 != (FVideoDecoderOutputH264_Windows *)0x0) {
            pvVar3 = *(void **)&(pFVar13->Buffer).AllocatedSize;
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            ::operator_delete(pFVar13,0x28);
          }
        }
        pTVar4 = (this->InputQueue).Tail;
        (this->InputQueue).Tail = pTVar2;
        if (pTVar12 !=
            (TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
             *)&local_40) {
          pFVar5 = pTVar12->Ptr;
          pTVar12->Ptr = (FInputToDecode *)0x0;
          if (pFVar5 != (FInputToDecode *)0x0) {
            pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            ::operator_delete(pFVar5,0x28);
          }
        }
        if (pTVar4 != (TNode *)0x0) {
          pFVar5 = (pTVar4->Item).Ptr;
          if (pFVar5 != (FInputToDecode *)0x0) {
            pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            ::operator_delete(pFVar5,0x28);
          }
          ::operator_delete(pTVar4,0x10);
        }
        if (((((this->DecoderTransform).Reference == (IMFTransform *)0x0) &&
             ((char)(pFVar14->Buffer).AllocatedPlaneDesc[0].Height != '\0')) &&
            (bVar9 = CreateDecoderInstance(this), !bVar9)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bOk",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Decoders\\Windows\\VideoDecoderH264_Windows.cpp"
                               ,0x878,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (this->bTerminateWorkerThread != false) break;
        if (((this->DecoderTransform).Reference != (IMFTransform *)0x0) &&
           (bVar9 = ProcessDecoding(this,(FInputToDecode *)pFVar14), !bVar9)) {
          InternalDecoderDestroy(this);
          PurgeAllPendingOutput(this);
          while (pTVar2 = ((this->InputQueue).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
            pTVar4 = (this->InputQueue).Tail;
            (this->InputQueue).Tail = pTVar2;
            pTVar12 = &pTVar2->Item;
            if (pTVar12 !=
                (TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
                 *)local_38) {
              pFVar5 = pTVar12->Ptr;
              pTVar12->Ptr = (FInputToDecode *)0x0;
              if (pFVar5 != (FInputToDecode *)0x0) {
                pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                ::operator_delete(pFVar5,0x28);
              }
            }
            if (pTVar4 != (TNode *)0x0) {
              pFVar5 = (pTVar4->Item).Ptr;
              if (pFVar5 != (FInputToDecode *)0x0) {
                pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                ::operator_delete(pFVar5,0x28);
              }
              ::operator_delete(pTVar4,0x10);
            }
          }
          pFVar10 = ::operator_new(0x108);
          pFVar13 = (FVideoDecoderOutputH264_Windows *)0x0;
          if (pFVar10 != (FVideoDecoderOutputH264_Windows *)0x0) {
            pFVar10->_padding_ = (longlong)&___7FVideoDecoderOutputH264_Windows_AVEncoder__6B_;
            (pFVar10->Buffer).CallbackValue = (void *)0x0;
            (pFVar10->Buffer).AllocatedBuffer = (void *)0x0;
            (pFVar10->Buffer).AllocatedSize = 0;
            (pFVar10->Buffer).AllocatedPlanesNum = 0;
            (pFVar10->Buffer).AllocatedPlaneLayout = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].Width = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].Height = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].BytesPerPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetToFirstPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenPixels = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[0].ByteOffsetBetweenRows = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].Width = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].Height = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].BytesPerPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].ByteOffsetToFirstPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].ByteOffsetBetweenPixels = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[1].ByteOffsetBetweenRows = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].Width = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].Height = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].BytesPerPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].ByteOffsetToFirstPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].ByteOffsetBetweenPixels = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[2].ByteOffsetBetweenRows = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].Width = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].Height = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].BytesPerPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].ByteOffsetToFirstPixel = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].ByteOffsetBetweenPixels = 0;
            (pFVar10->Buffer).AllocatedPlaneDesc[3].ByteOffsetBetweenRows = 0;
            *(undefined8 *)&(pFVar10->Buffer).RetainCallback.field_0x10 = 0;
            *(undefined8 *)&(pFVar10->Buffer).RetainCallback = 0;
            *(undefined8 *)&(pFVar10->Buffer).RetainCallback.field_0x8 = 0;
            *(undefined8 *)&(pFVar10->Buffer).ReleaseCallback.field_0x10 = 0;
            *(undefined8 *)&(pFVar10->Buffer).ReleaseCallback = 0;
            *(undefined8 *)&(pFVar10->Buffer).ReleaseCallback.field_0x8 = 0;
            pFVar10->RefCount = 1;
            pFVar10->Width = 0;
            pFVar10->Height = 0;
            pFVar10->PTS = 0;
            pFVar10->CropLeft = 0;
            pFVar10->CropRight = 0;
            pFVar10->CropTop = 0;
            pFVar10->CropBottom = 0;
            pFVar10->AspectX = 1;
            pFVar10->AspectY = 1;
            pFVar10->PitchX = 0;
            pFVar10->PitchY = 0;
            pFVar10->ColorFormat = 0;
            pFVar10->NativeDecoderOutput = (FNativeVideoDecoderOutput *)0x0;
            pFVar13 = pFVar10;
          }
          pFVar13->bIsValid = false;
          pTVar11 = ::operator_new(0x10);
          if (pTVar11 != (TNode *)0x0) {
            pTVar11->NextNode = (TNode *)0x0;
            pTVar11->Item = pFVar13;
            pTVar7 = (this->OutputQueue).Head;
            (this->OutputQueue).Head = pTVar11;
            pTVar7->NextNode = pTVar11;
          }
        }
        pFVar13 = pFVar14;
      } while (this->bTerminateWorkerThread == false);
      if (pFVar14 != (FVideoDecoderOutputH264_Windows *)0x0) {
        pvVar3 = *(void **)&(pFVar14->Buffer).AllocatedSize;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        ::operator_delete(pFVar14,0x28);
      }
    } while (this->bTerminateWorkerThread == false);
  }
  InternalDecoderDestroy(this);
  PurgeAllPendingOutput(this);
  TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
  ::Empty(&this->InputQueue);
  this->bTerminateWorkerThread = false;
  return;
}

