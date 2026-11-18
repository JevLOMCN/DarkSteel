// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 44

// FWmfMediaStreamSink @ 14ea95820

/* WARNING: Enum "Type": Some values do not have unique names */

FWmfMediaStreamSink * __thiscall
FWmfMediaStreamSink::FWmfMediaStreamSink(FWmfMediaStreamSink *this,_GUID *param_1,ulong param_2)

{
  _GUID *p_Var1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  FString local_18;
  
  *(undefined ***)this = &_vftable__for__IMFGetService__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__IMFMediaTypeHandler__;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IMFStreamSink__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->EventQueue).RawPointer = (IMFMediaEventQueue *)0x0;
  (this->CurrentMediaType).RawPointer = (IMFMediaType *)0x0;
  (this->Owner).RawPointer = (FWmfMediaSink *)0x0;
  (this->Decoder).RawPointer = (WmfMediaDecoder *)0x0;
  this->RefCount = 0;
  this->StreamId = param_2;
  p_Var1 = &this->StreamType;
  uVar3 = param_1->Data2;
  uVar4 = param_1->Data3;
  uVar2 = *(undefined8 *)param_1->Data4;
  p_Var1->Data1 = param_1->Data1;
  p_Var1->Data2 = uVar3;
  p_Var1->Data3 = uVar4;
  *(undefined8 *)(this->StreamType).Data4 = uVar2;
  this->ClockRate = -1.0;
  (this->VideoSamplePool).Object = (FWmfMediaHardwareVideoDecodingTextureSamplePool *)0x0;
  (this->VideoSamplePool).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->VideoSampleQueue =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  this->NumRequestsInFlight = 0;
  this->NumRequestsInFlightWithSystem = 0;
  *(undefined8 *)&this->OnIdleAction = 0;
  *(undefined8 *)&(this->OnIdleAction).field_0x28 = 0;
  this->bSeekInProgress = false;
  this->bScrubbingInProgress = false;
  this->bSystemIsScrubbing = false;
  this->bSegmentEnded = true;
  *(undefined8 *)&this->AdjustTimeStamp = 0;
  *(undefined8 *)&(this->AdjustTimeStamp).field_0x28 = 0;
  *(undefined8 *)&this->IsSampleStillDesired = 0;
  *(undefined8 *)&(this->IsSampleStillDesired).field_0x28 = 0;
  this->bShowSubTypeErrorMessage = true;
  if (5 < (byte)LogWmfMedia._0_1_) {
    WmfMedia::MajorTypeToString(&local_18,p_Var1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FWmfMediaStreamSink @ 14ea97bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaStreamSink::~FWmfMediaStreamSink(FWmfMediaStreamSink *this)

{
  longlong *plVar1;
  WmfMediaDecoder *pWVar2;
  FWmfMediaSink *pFVar3;
  IMFMediaType *pIVar4;
  IMFMediaEventQueue *pIVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  
  *(undefined ***)this = &_vftable__for__IMFGetService__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__IMFMediaTypeHandler__;
  *(undefined ***)&this->field_0x10 = &_vftable__for__IMFStreamSink__;
  if (this->RefCount != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaStreamSink.cpp"
                       ,0x42,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if (*(longlong *)&this->IsSampleStillDesired != 0) {
    plVar1 = *(longlong **)&(this->IsSampleStillDesired).field_0x28;
    plVar8 = (longlong *)&(this->IsSampleStillDesired).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->AdjustTimeStamp != 0) {
    plVar1 = *(longlong **)&(this->AdjustTimeStamp).field_0x28;
    plVar8 = (longlong *)&(this->AdjustTimeStamp).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->OnIdleAction != 0) {
    plVar1 = *(longlong **)&(this->OnIdleAction).field_0x28;
    plVar8 = (longlong *)&(this->OnIdleAction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VideoSamplePool).SharedReferenceCount.ReferenceController);
  pWVar2 = (this->Decoder).RawPointer;
  if (pWVar2 != (WmfMediaDecoder *)0x0) {
    (**(code **)(pWVar2->_padding_ + 0x10))();
  }
  pFVar3 = (this->Owner).RawPointer;
  if (pFVar3 != (FWmfMediaSink *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))();
  }
  pIVar4 = (this->CurrentMediaType).RawPointer;
  if (pIVar4 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->EventQueue).RawPointer;
  if (pIVar5 != (IMFMediaEventQueue *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014ea97d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// AddRef @ 14ea9b460

ulong __thiscall FWmfMediaStreamSink::AddRef(FWmfMediaStreamSink *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// AddRef`adjustor{8}' @ 14ea9b474

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaStreamSink::AddRef`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaStreamSink::AddRef_adjustor_8__(FWmfMediaStreamSink *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaStreamSink *)&this[-1].field_0x158);
  return uVar1;
}

// AddRef`adjustor{16}' @ 14ea9b484

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaStreamSink::AddRef`adjustor{16}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaStreamSink::AddRef_adjustor_16__(FWmfMediaStreamSink *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage);
  return uVar1;
}

// BeginGetEvent @ 14eaa09f0

undefined4 __thiscall
FWmfMediaStreamSink::BeginGetEvent
          (FWmfMediaStreamSink *this,IMFAsyncCallback *param_1,IUnknown *param_2)

{
  undefined1 *lpCriticalSection;
  longlong *plVar1;
  undefined4 uVar2;
  
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    plVar1 = (this->CriticalSection).CriticalSection.Opaque3[1];
    if (plVar1 == (longlong *)0x0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CopyTextureAndEnqueueSample @ 14eaa4750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014eaa4add) */
/* WARNING: Removing unreachable block (ram,0x00014eaa4ae9) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWmfMediaStreamSink::CopyTextureAndEnqueueSample(FWmfMediaStreamSink *this,IMFSample *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar4;
  ID3D11DeviceContext *pIVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  uint uVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  undefined8 uVar18;
  IMFMediaType *pIVar19;
  FWmfMediaHardwareVideoDecodingTextureSamplePool *pFVar20;
  FWmfMediaHardwareVideoDecodingTextureSample *this_00;
  WmfMediaDecoder *pWVar21;
  FWmfMediaSink *pFVar22;
  ID3D11Texture2D *pIVar23;
  longlong *plVar24;
  longlong *plVar25;
  size_t _Size;
  EPixelFormat EVar26;
  longlong lVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,TSizedDefaultAllocator<32>_> *pTVar30;
  EMediaTextureSampleFormat EVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar38 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auStackY_2b8 [32];
  bool local_268;
  EPixelFormat local_267;
  longlong *local_260;
  uint local_258 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_250;
  uint local_248 [4];
  FWmfMediaHardwareVideoDecodingTextureSample *local_238;
  TReferenceControllerBase<1> *pTStack_230;
  longlong *local_228;
  undefined4 local_220 [2];
  ulonglong local_218;
  longlong *local_210;
  void *local_208;
  int local_200 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1f8;
  longlong local_1e8;
  undefined4 local_1e0 [2];
  undefined4 local_1d8 [2];
  longlong *local_1d0;
  void *local_1c8;
  FWindowsRecursiveMutex *local_1c0;
  void *local_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  uint uStack_19c;
  int local_198;
  uint uStack_194;
  TReferenceControllerBase<1> *local_190;
  TIntPoint<int>_u_0 local_188;
  TRefCountPtr<ID3D11Device> local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  FWmfMediaHardwareVideoDecodingTextureSample *local_158;
  longlong local_150;
  longlong *local_148;
  FWmfMediaHardwareVideoDecodingTextureSample *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  FWmfMediaHardwareVideoDecodingTextureSample *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FWmfMediaHardwareVideoDecodingTextureSample *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined8 local_108;
  undefined8 local_100;
  long64 local_f8 [2];
  FMediaTimeStamp local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_02;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((this->CurrentMediaType).RawPointer == (IMFMediaType *)0x0) {
    return;
  }
  if (6 < (byte)LogWmfMedia._0_1_) {
    (**(code **)(this->VideoSampleQueue->_padding_ + 8))();
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->IsSampleStillDesired);
  pcVar2 = *(code **)&this->IsSampleStillDesired;
  plVar25 = *(longlong **)&(this->IsSampleStillDesired).field_0x28;
  plVar24 = (longlong *)&(this->IsSampleStillDesired).field_0x10;
  if (plVar25 != (longlong *)0x0) {
    plVar24 = plVar25;
  }
  uVar18 = (**(code **)(*plVar24 + 8))();
  cVar15 = (*pcVar2)(uVar18);
  if (cVar15 == '\0') {
    if ((byte)LogWmfMedia._0_1_ < 7) {
      return;
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    return;
  }
  iVar17 = (**(code **)(this->VideoSampleQueue->_padding_ + 8))();
  if (5 < iVar17 + this->NumRequestsInFlight) {
    if ((byte)LogWmfMedia._0_1_ < 7) {
      return;
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    return;
  }
  local_200[0] = 0;
  local_260 = (longlong *)0x0;
  local_228 = (longlong *)0x0;
  local_220[0] = 0;
  local_1d0 = (longlong *)0x0;
  iVar17 = (**(code **)((longlong)*param_1 + 0x138))(param_1,local_200);
  if ((iVar17 < 0) ||
     ((local_200[0] == 1 &&
      (iVar17 = (**(code **)((longlong)*param_1 + 0x140))(param_1,0,&local_260), iVar17 < 0))))
  goto LAB_14eaa57a8;
  pIVar19 = (this->CurrentMediaType).RawPointer;
  iVar17 = (**(code **)((longlong)*pIVar19 + 0x40))(pIVar19,&MF_MT_FRAME_SIZE,&local_170);
  if (iVar17 < 0) {
    uVar33 = (ulonglong)local_248[0];
    uVar29 = (ulonglong)local_248[0];
  }
  else {
    uVar29 = local_170 >> 0x20;
    uVar33 = local_170;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_218 = uVar29;
  pIVar19 = TComPtr<IMFMediaType>::operator->(&this->CurrentMediaType);
  iVar17 = (**(code **)((longlong)*pIVar19 + 0x78))
                     (pIVar19,&MF_MT_MINIMUM_DISPLAY_APERTURE,&local_b8,0x10);
  uVar28 = (undefined4)uVar29;
  uVar32 = (uint)uVar33;
  if (iVar17 < 0) {
    pIVar19 = TComPtr<IMFMediaType>::operator->(&this->CurrentMediaType);
    iVar17 = (**(code **)((longlong)*pIVar19 + 0x78))
                       (pIVar19,&MF_MT_GEOMETRIC_APERTURE,&local_b8,0x10);
    if (iVar17 < 0) {
      local_b8 = 0;
      uStack_b0 = CONCAT44(uVar32,uVar28);
    }
  }
  local_208 = (void *)0x0;
  local_1e8 = 0;
  (**(code **)((longlong)*param_1 + 0x118))(param_1,&local_208);
  (**(code **)((longlong)*param_1 + 0x128))(param_1,&local_1e8);
  pIVar19 = TComPtr<IMFMediaType>::operator->(&this->CurrentMediaType);
  iVar17 = (**(code **)((longlong)*pIVar19 + 0x50))(pIVar19,&MF_MT_SUBTYPE,&local_a8);
  if (iVar17 < 0) {
    if (this->bShowSubTypeErrorMessage != false) {
      if (4 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      this->bShowSubTypeErrorMessage = false;
    }
    goto LAB_14eaa57a8;
  }
  pFVar20 = TSharedPtr<FWmfMediaHardwareVideoDecodingTextureSamplePool,1>::operator->
                      (&this->VideoSamplePool);
  this_00 = TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
            ::TStorage::Acquire(*(TStorage **)pFVar20,true);
  if ((this_00 == (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaObjectPool.h"
                          ,0x139,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar27 = *(longlong *)pFVar20;
  plVar25 = *(longlong **)&pFVar20->field_0x8;
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar25 + 0xc) = *(int *)((longlong)plVar25 + 0xc) + 1;
    UNLOCK();
  }
  local_100 = 0;
  local_108 = 0;
  local_238 = this_00;
  local_158 = this_00;
  local_150 = lVar27;
  local_148 = plVar25;
  pTStack_230 = ::operator_new(0x28);
  if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
    pTStack_230[1]._padding_ = lVar27;
    *(longlong **)&pTStack_230[1].SharedReferenceCount = plVar25;
    plVar25 = (longlong *)0x0;
    local_148 = (longlong *)0x0;
    local_150 = 0;
    pTStack_230->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_230->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_230->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWmfMediaHardwareVideoDecodingTextureSample__VTDeleter___TMediaObjectPool_VFWmfMediaHardwareVideoDecodingTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaHardwareVideoDecodingTextureSample_______00_SharedPointerInternals__6B_
    ;
    pTStack_230[2]._padding_ = (longlong)this_00;
  }
  local_190 = pTStack_230;
  if ((this_00 == (FWmfMediaHardwareVideoDecodingTextureSample *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawPtrProxy.Object != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x115,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar25 + 0xc);
    iVar17 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)(*plVar25 + 8))(plVar25,1);
    }
  }
  pIVar19 = TComPtr<IMFMediaType>::operator->(&this->CurrentMediaType);
  iVar17 = (**(code **)((longlong)*pIVar19 + 0x50))(pIVar19,&UE_WMF_PrivateFormatGUID,&local_78);
  if (-1 < iVar17) {
    local_a8 = local_78;
    uStack_a0 = uStack_70;
  }
  local_267 = PF_Unknown;
  local_268 = false;
  iVar17 = memcmp(&local_a8,&MFVideoFormat_NV12,0x10);
  if (iVar17 == 0) {
    lVar27 = 0x43;
    EVar31 = CharNV12;
  }
  else {
    iVar17 = memcmp(&local_a8,&MFVideoFormat_ARGB32,0x10);
    if (iVar17 == 0) {
      lVar27 = 2;
      EVar31 = CharBGRA;
    }
    else {
      iVar17 = memcmp(&local_a8,&MFVideoFormat_L8,0x10);
      if (iVar17 == 0) {
        EVar31 = DXT1;
        lVar27 = 5;
        local_268 = true;
      }
      else {
        iVar17 = memcmp(&local_a8,&MFVideoFormat_L16,0x10);
        if (iVar17 == 0) {
          EVar31 = DXT5;
          lVar27 = 7;
          local_268 = true;
        }
        else {
          iVar17 = memcmp(&local_a8,&MFVideoFormat_RGB8,0x10);
          if (iVar17 == 0) {
            EVar31 = YCoCg_DXT5;
            lVar27 = 7;
          }
          else {
            iVar17 = memcmp(&local_a8,&MFVideoFormat_D16,0x10);
            if (iVar17 == 0) {
              EVar31 = YCoCg_DXT5_Alpha_BC4;
              lVar27 = 7;
              local_267 = PF_BC4;
            }
            else {
              lVar27 = 0x13;
              EVar31 = Y416;
            }
          }
        }
      }
    }
  }
  EVar26 = (EPixelFormat)lVar27;
  if (((this->Decoder).RawPointer == (WmfMediaDecoder *)0x0) ||
     (pWVar21 = TComPtr<WmfMediaDecoder>::operator->(&this->Decoder),
     pWVar21->bIsExternalBufferEnabled == false)) {
    iVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if (iVar17 == 2) {
      if ((local_260 == (longlong *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar17 = (**(code **)*local_260)
                         (local_260,&_GUID_e7174cfa_1c9e_48b1_8866_626226bfc258,&local_228);
      if (-1 < iVar17) {
        if ((local_228 == (longlong *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar16)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar17 = (**(code **)(*local_228 + 0x18))
                           (local_228,&_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,&local_1d0);
        if (-1 < iVar17) {
          if ((local_228 == (longlong *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar16)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar17 = (**(code **)(*local_228 + 0x20))(local_228,local_220);
          dVar13 = __real_4024000000000000;
          auVar37._8_8_ = extraout_XMM0_Qb_01;
          auVar37._0_8_ = extraout_XMM0_Qa_01;
          if (-1 < iVar17) {
            local_188._s_0.X = (int)uStack_b0;
            local_188._s_0.Y = uStack_b0._4_4_;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (double)(local_1e8 / 10) * __real_4024000000000000 +
                           __real_3fe0000000000000;
            auVar35 = roundpd(auVar37,auVar9,1);
            local_1d8[0] = 6;
            auVar10._8_8_ = 0;
            auVar10._0_8_ =
                 (double)((longlong)local_208 / 10) * __real_4024000000000000 +
                 __real_3fe0000000000000;
            auVar38 = roundpd(auVar35,auVar10,1);
            local_160 = (longlong)auVar38._0_8_;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->AdjustTimeStamp);
            pcVar2 = *(code **)&this->AdjustTimeStamp;
            plVar25 = *(longlong **)&(this->AdjustTimeStamp).field_0x28;
            plVar24 = (longlong *)&(this->AdjustTimeStamp).field_0x10;
            if (plVar25 != (longlong *)0x0) {
              plVar24 = plVar25;
            }
            uVar18 = (**(code **)(*plVar24 + 8))();
            (*pcVar2)(local_f8,uVar18,&local_160,local_1d8);
            pFVar22 = TComPtr<FWmfMediaSink>::operator->(&this->Owner);
            local_180.Reference = (pFVar22->D3D11Device).RawPointer;
            if (local_180.Reference != (ID3D11Device *)0x0) {
              (**(code **)((longlong)*local_180.Reference + 8))();
            }
            local_e8.Time.Ticks = local_f8[0];
            local_e8.SequenceIndex = (undefined4)local_f8[1];
            local_e8.LoopIndex = local_f8[1]._4_4_;
            pIVar23 = FWmfMediaHardwareVideoDecodingTextureSample::InitializeSourceTexture
                                (this_00,&local_180,&local_e8,(FTimespan)(longlong)auVar35._0_8_,
                                 (TIntPoint<int> *)&local_188._s_0,EVar26,EVar31);
            auVar39 = extraout_XMM0_02;
            if (local_180.Reference != (ID3D11Device *)0x0) {
              auVar39._0_8_ = (**(code **)((longlong)*local_180.Reference + 0x10))();
              auVar39._8_8_ = extraout_XMM0_Qb_02;
            }
            if (pIVar23 != (ID3D11Texture2D *)0x0) {
              local_98 = 0;
              local_90 = 0;
              local_8c = (int)uStack_b0;
              local_88 = uStack_b0._4_4_;
              local_84 = 1;
              if (6 < (byte)LogWmfMedia._0_1_) {
                auVar11._8_8_ = 0;
                auVar11._0_8_ =
                     (double)((longlong)local_208 / 10) * dVar13 + __real_3fe0000000000000;
                roundpd(auVar39,auVar11,1);
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
              }
              local_210 = (longlong *)0x0;
              (**(code **)*pIVar23)(pIVar23,&_GUID_9d8e1289_d7b3_465f_8126_250e349af85d,&local_210);
              if ((local_210 != (longlong *)0x0) &&
                 (iVar17 = (**(code **)(*local_210 + 0x40))(local_210,0,0), iVar17 == 0)) {
                pFVar22 = TComPtr<FWmfMediaSink>::operator->(&this->Owner);
                pIVar5 = (pFVar22->D3DImmediateContext).RawPointer;
                (**(code **)((longlong)*pIVar5 + 0x170))(pIVar5,pIVar23,0,0);
                if ((local_210 == (longlong *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("RawPointer != 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                        ,0x9f,L""), bVar16)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (**(code **)(*local_210 + 0x48))(local_210,1);
                pTVar4 = this->VideoSampleQueue;
                pcVar2 = *(code **)pTVar4->_padding_;
                local_128 = local_238;
                pTStack_120 = pTStack_230;
                if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTStack_230->SharedReferenceCount =
                       (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
                  UNLOCK();
                }
                (*pcVar2)(pTVar4,&local_128);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_120);
                if (6 < (byte)LogWmfMedia._0_1_) {
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                }
              }
              if (local_210 != (longlong *)0x0) {
                (**(code **)(*local_210 + 0x10))();
              }
              goto LAB_14eaa576d;
            }
          }
        }
      }
    }
    else {
      local_258[0] = 0;
      if ((local_260 == (longlong *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar17 = (**(code **)(*local_260 + 0x28))(local_260,local_258);
      if (iVar17 == 0) {
        local_1b8 = (void *)0x0;
        if ((local_260 == (longlong *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar16)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar17 = (**(code **)(*local_260 + 0x18))(local_260,&local_1b8,0,0);
        auVar35._8_8_ = extraout_XMM0_Qb_03;
        auVar35._0_8_ = extraout_XMM0_Qa_02;
        if (iVar17 == 0) {
          if (EVar26 == PF_NV12) {
            uVar32 = uVar32 * 3 >> 1;
          }
          local_218 = CONCAT44(local_218._4_4_,
                               (int)(uVar29 / (uint)GPixelFormats[lVar27].BlockSizeX) *
                               GPixelFormats[lVar27].BlockBytes);
          auVar38._8_8_ = 0;
          auVar38._0_8_ =
               (double)(local_1e8 / 10) * __real_4024000000000000 + __real_3fe0000000000000;
          auVar35 = roundpd(auVar35,auVar38,1);
          local_190 = (TReferenceControllerBase<1> *)(longlong)auVar35._0_8_;
          local_248[0] = 6;
          auVar12._8_8_ = 0;
          auVar12._0_8_ =
               (double)((longlong)local_208 / 10) * __real_4024000000000000 +
               __real_3fe0000000000000;
          auVar35 = roundpd(auVar35,auVar12,1);
          local_178 = (longlong)auVar35._0_8_;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->AdjustTimeStamp);
          pcVar2 = *(code **)&this->AdjustTimeStamp;
          plVar25 = *(longlong **)&(this->AdjustTimeStamp).field_0x28;
          plVar24 = (longlong *)&(this->AdjustTimeStamp).field_0x10;
          if (plVar25 != (longlong *)0x0) {
            plVar24 = plVar25;
          }
          uVar18 = (**(code **)(*plVar24 + 8))();
          (*pcVar2)(&local_d8,uVar18,&local_178,local_248);
          uVar14 = local_258[0];
          local_1a8 = (int)uStack_b0;
          uStack_1a4 = uStack_b0._4_4_;
          _Size = (size_t)(int)local_258[0];
          local_1c8 = local_1b8;
          local_1b0 = uVar28;
          uStack_1ac = uVar32;
          if ((((local_1b8 != (void *)0x0) && (local_258[0] != 0)) && ((int)local_218 != 0)) &&
             ((int)local_218 * uVar32 <= local_258[0])) {
            if ((int)local_258[0] < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)local_258[0]);
            }
            piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
            iVar17 = *piVar1;
            *(undefined4 *)&this_00->_padding_ = 0;
            if (iVar17 < (int)local_258[0]) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_258[0],(ForAnyElementType *)&this_00->_padding_,0,piVar1);
            }
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,uVar14,(ForAnyElementType *)&this_00->_padding_,
                                (int *)&this_00->_padding_,piVar1);
            memcpy((void *)((longlong)iVar17 + this_00->_padding_),local_1c8,_Size);
            local_238->_padding_ = (longlong)local_190;
            local_238->_padding_ = CONCAT44(uStack_1ac,local_1b0);
            local_238->_padding_ = CONCAT44(uStack_1a4,local_1a8);
            *(EMediaTextureSampleFormat *)&local_238->_padding_ = EVar31;
            *(int *)&local_238->_padding_ = (int)local_218;
            local_238->_padding_ = local_d8;
            local_238->_padding_ = lStack_d0;
            this_00 = local_238;
          }
          if ((local_260 == (longlong *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar16)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(*local_260 + 0x20))();
          this_00->Format = EVar26;
          pTVar4 = this->VideoSampleQueue;
          pcVar2 = *(code **)pTVar4->_padding_;
          local_118 = local_238;
          pTStack_110 = pTStack_230;
          if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_230->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar2)(pTVar4,&local_118);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_110);
          if (6 < (byte)LogWmfMedia._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          }
        }
        goto LAB_14eaa576d;
      }
    }
  }
  else {
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    pWVar21 = TComPtr<WmfMediaDecoder>::operator->(&this->Decoder);
    local_1c8 = local_208;
    lpCriticalSection = &pWVar21->BufferCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_1c0 = lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_250 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
    TMap<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>_>
    ::RemoveAndCopyValue(&pWVar21->MapTimeStampToExternalBuffer,(ulong64)local_1c8,&local_250);
    if (local_250 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
      if (&local_1f8 != local_250) {
        local_1f8.AllocatorInstance.Data = (local_250->AllocatorInstance).Data;
        (local_250->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_1f8.ArrayNum = local_250->ArrayNum;
        local_1f8.ArrayMax = local_250->ArrayMax;
        local_250->ArrayNum = 0;
        local_250->ArrayMax = 0;
      }
      pTVar30 = &pWVar21->ExternalBufferPool;
      pFVar3 = (pTVar30->AllocatorInstance).Data;
      auVar34 = extraout_XMM0;
      if (((pFVar3 <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 <
           pFVar3 + (longlong)(pWVar21->ExternalBufferPool).ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), auVar34 = extraout_XMM0_00, bVar16)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = &(pWVar21->ExternalBufferPool).ArrayMax;
      iVar17 = (pWVar21->ExternalBufferPool).ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar30->AllocatorInstance,piVar1);
        auVar34 = extraout_XMM0_01;
      }
      (pWVar21->ExternalBufferPool).ArrayNum = iVar17 + 1;
      *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
       ((pTVar30->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_250;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        auVar34._8_8_ = extraout_XMM0_Qb;
        auVar34._0_8_ = extraout_XMM0_Qa;
      }
      iVar17 = (int)local_218;
      if (EVar31 == DXT1) {
        local_258[0] = iVar17 * 2;
      }
      else if (((EVar31 - DXT5 & 0xfffffffc) == 0) && (EVar31 != BC4)) {
        local_258[0] = iVar17 * 4;
      }
      else {
        local_258[0] = (uint)((local_1f8._8_8_ & 0xffffffff) / (uVar33 & 0xffffffff));
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (double)(local_1e8 / 10) * __real_4024000000000000 + __real_3fe0000000000000;
      auVar35 = roundpd(auVar34,auVar6,1);
      local_1c0 = (FWindowsRecursiveMutex *)(longlong)auVar35._0_8_;
      local_1e0[0] = 6;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (double)((longlong)local_208 / 10) * __real_4024000000000000 +
                     __real_3fe0000000000000;
      auVar35 = roundpd(auVar35,auVar7,1);
      local_168 = (longlong)auVar35._0_8_;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->AdjustTimeStamp);
      pcVar2 = *(code **)&this->AdjustTimeStamp;
      plVar25 = *(longlong **)&(this->AdjustTimeStamp).field_0x28;
      plVar24 = (longlong *)&(this->AdjustTimeStamp).field_0x10;
      if (plVar25 != (longlong *)0x0) {
        plVar24 = plVar25;
      }
      uVar18 = (**(code **)(*plVar24 + 8))();
      (*pcVar2)(&local_c8,uVar18,&local_168,local_1e0);
      uVar14 = local_258[0];
      local_1a0 = iVar17;
      uStack_19c = uVar32;
      local_198 = iVar17;
      uStack_194 = uVar32;
      if ((local_1f8.ArrayNum != 0) && (local_258[0] != 0)) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,
                   &local_1f8);
        this_00->_padding_ = (longlong)local_1c0;
        this_00->_padding_ = CONCAT44(uStack_19c,local_1a0);
        this_00->_padding_ = CONCAT44(uStack_194,local_198);
        *(EMediaTextureSampleFormat *)&this_00->_padding_ = EVar31;
        *(uint *)&this_00->_padding_ = uVar14;
        this_00->_padding_ = local_c8;
        this_00->_padding_ = lStack_c0;
        *(undefined1 *)&this_00->_padding_ = 1;
      }
      this_00->Format = EVar26;
      this_00->bIsDestinationTextureSRGB = local_268;
      this_00->AlphaFormat = local_267;
      pTVar4 = this->VideoSampleQueue;
      pcVar2 = *(code **)pTVar4->_padding_;
      local_138 = local_238;
      pTStack_130 = pTStack_230;
      if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_230->SharedReferenceCount =
             (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pTVar4,&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
      if (6 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
LAB_14eaa576d:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_230);
      goto LAB_14eaa57a8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    auVar36._8_8_ = extraout_XMM0_Qb_00;
    auVar36._0_8_ = extraout_XMM0_Qa_00;
    if (1 < (byte)LogWmfMedia._0_1_) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (double)((longlong)local_208 / 10) * __real_4024000000000000 +
                     __real_3fe0000000000000;
      roundpd(auVar36,auVar8,1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_230);
LAB_14eaa57a8:
  if (local_1d0 != (longlong *)0x0) {
    (**(code **)(*local_1d0 + 0x10))();
  }
  if (local_228 != (longlong *)0x0) {
    (**(code **)(*local_228 + 0x10))();
  }
  if (local_260 != (longlong *)0x0) {
    (**(code **)(*local_260 + 0x10))();
  }
  return;
}

// Create @ 14eaa5830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWmfMediaStreamSink::Create(_GUID *param_1,TComPtr<FWmfMediaStreamSink> *param_2)

{
  _GUID *p_Var1;
  code *pcVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  FWmfMediaStreamSink *pFVar8;
  FWmfMediaSink *pFVar9;
  FWmfMediaSink *this;
  FWmfMediaStreamSink *local_res18;
  FWmfMediaStreamSink *local_res20;
  FString local_30;
  
  pFVar8 = ::operator_new(0x160);
  local_res18 = pFVar8;
  if (pFVar8 == (FWmfMediaStreamSink *)0x0) {
    pFVar8 = (FWmfMediaStreamSink *)0x0;
  }
  else {
    *(undefined ***)pFVar8 = &_vftable__for__IMFGetService__;
    *(undefined ***)&pFVar8->field_0x8 = &_vftable__for__IMFMediaTypeHandler__;
    *(undefined ***)&pFVar8->field_0x10 = &_vftable__for__IMFStreamSink__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar8->CriticalSection,4000);
    (pFVar8->EventQueue).RawPointer = (IMFMediaEventQueue *)0x0;
    (pFVar8->CurrentMediaType).RawPointer = (IMFMediaType *)0x0;
    (pFVar8->Owner).RawPointer = (FWmfMediaSink *)0x0;
    (pFVar8->Decoder).RawPointer = (WmfMediaDecoder *)0x0;
    pFVar8->RefCount = 0;
    pFVar8->StreamId = 1;
    p_Var1 = &pFVar8->StreamType;
    uVar4 = param_1->Data2;
    uVar5 = param_1->Data3;
    uVar3 = *(undefined8 *)param_1->Data4;
    p_Var1->Data1 = param_1->Data1;
    p_Var1->Data2 = uVar4;
    p_Var1->Data3 = uVar5;
    *(undefined8 *)(pFVar8->StreamType).Data4 = uVar3;
    pFVar8->ClockRate = -1.0;
    (pFVar8->VideoSamplePool).Object = (FWmfMediaHardwareVideoDecodingTextureSamplePool *)0x0;
    (pFVar8->VideoSamplePool).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar8->VideoSampleQueue =
         (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    pFVar8->NumRequestsInFlight = 0;
    pFVar8->NumRequestsInFlightWithSystem = 0;
    *(undefined8 *)&pFVar8->OnIdleAction = 0;
    *(undefined8 *)&(pFVar8->OnIdleAction).field_0x28 = 0;
    pFVar8->bSeekInProgress = false;
    pFVar8->bScrubbingInProgress = false;
    pFVar8->bSystemIsScrubbing = false;
    pFVar8->bSegmentEnded = true;
    *(undefined8 *)&pFVar8->AdjustTimeStamp = 0;
    *(undefined8 *)&(pFVar8->AdjustTimeStamp).field_0x28 = 0;
    *(undefined8 *)&pFVar8->IsSampleStillDesired = 0;
    *(undefined8 *)&(pFVar8->IsSampleStillDesired).field_0x28 = 0;
    pFVar8->bShowSubTypeErrorMessage = true;
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::MajorTypeToString(&local_30,p_Var1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  this = (FWmfMediaSink *)0x0;
  local_res20 = pFVar8;
  if (pFVar8 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar8 + 8))(pFVar8);
  }
  pFVar9 = ::operator_new(0x78);
  local_res18 = (FWmfMediaStreamSink *)pFVar9;
  if (pFVar9 != (FWmfMediaSink *)0x0) {
    pFVar9->_padding_ = (longlong)&FWmfMediaSink::_vftable__for__IMFClockStateSink__;
    pFVar9->_padding_ = (longlong)&FWmfMediaSink::_vftable__for__IMFGetService__;
    pFVar9->_padding_ = (longlong)&FWmfMediaSink::_vftable__for__IMFMediaSink__;
    pFVar9->_padding_ = (longlong)&FWmfMediaSink::_vftable__for__IMFRateSupport__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar9->CriticalSection,4000);
    pFVar9->RefCount = 0;
    (pFVar9->PresentationClock).RawPointer = (IMFPresentationClock *)0x0;
    (pFVar9->StreamSink).RawPointer = (FWmfMediaStreamSink *)0x0;
    (pFVar9->DXGIManager).RawPointer = (IMFDXGIDeviceManager *)0x0;
    (pFVar9->D3D11Device).RawPointer = (ID3D11Device *)0x0;
    (pFVar9->D3DImmediateContext).RawPointer = (ID3D11DeviceContext *)0x0;
    this = pFVar9;
  }
  if (this == (FWmfMediaSink *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  else {
    (**(code **)(this->_padding_ + 8))(this);
  }
  local_res18 = pFVar8;
  if (pFVar8 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar8 + 8))(pFVar8);
  }
  bVar6 = FWmfMediaSink::Initialize(this,(FWmfMediaStreamSink *)&local_res18);
  if (bVar6) {
    if (param_2->RawPointer != pFVar8) {
      if (pFVar8 != (FWmfMediaStreamSink *)0x0) {
        (**(code **)(*(longlong *)pFVar8 + 8))(pFVar8);
      }
      if (param_2->RawPointer != (FWmfMediaStreamSink *)0x0) {
        (**(code **)(*(longlong *)param_2->RawPointer + 0x10))();
      }
      param_2->RawPointer = pFVar8;
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (this != (FWmfMediaSink *)0x0) {
    (**(code **)(this->_padding_ + 0x10))(this);
  }
  if (pFVar8 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar8 + 0x10))(pFVar8);
  }
  return bVar6;
}

// EndGetEvent @ 14eaa96c0

int __thiscall
FWmfMediaStreamSink::EndGetEvent
          (FWmfMediaStreamSink *this,IMFAsyncResult *param_1,IMFMediaEvent **param_2)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int local_res8 [2];
  
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    plVar2 = (this->CriticalSection).CriticalSection.Opaque3[1];
    if (plVar2 == (longlong *)0x0) {
      iVar3 = -0x3ff2c17b;
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
      if (iVar3 == 0) {
        (**(code **)((longlong)**param_2 + 0x108))(*param_2,local_res8);
        if (local_res8[0] == 0x131) {
          piVar1 = (int *)((longlong)
                           &(this->VideoSamplePool).SharedReferenceCount.ReferenceController + 4);
          *piVar1 = *piVar1 + 1;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ExecuteOnceNoPendingRequests @ 14eaaaae0

bool __thiscall
FWmfMediaStreamSink::ExecuteOnceNoPendingRequests
          (FWmfMediaStreamSink *this,TFunction<void___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->NumRequestsInFlight == 0) {
      bVar11 = false;
    }
    else {
      if (*(longlong *)&this->OnIdleAction == 0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        uVar5 = *(undefined8 *)&this->OnIdleAction;
        uVar6 = *(undefined8 *)&(this->OnIdleAction).field_0x8;
        uVar7 = *(undefined8 *)&(this->OnIdleAction).field_0x10;
        uVar8 = *(undefined8 *)&(this->OnIdleAction).field_0x18;
        uVar9 = *(undefined8 *)&(this->OnIdleAction).field_0x20;
        uVar10 = *(undefined8 *)&(this->OnIdleAction).field_0x28;
        *(undefined8 *)&this->OnIdleAction = *(undefined8 *)param_1;
        *(undefined8 *)&(this->OnIdleAction).field_0x8 = uVar4;
        uVar4 = *(undefined8 *)&param_1->field_0x18;
        *(undefined8 *)&(this->OnIdleAction).field_0x10 = *(undefined8 *)&param_1->field_0x10;
        *(undefined8 *)&(this->OnIdleAction).field_0x18 = uVar4;
        uVar1 = *(undefined4 *)&param_1->field_0x24;
        uVar2 = *(undefined4 *)&param_1->field_0x28;
        uVar3 = *(undefined4 *)&param_1->field_0x2c;
        *(undefined4 *)&(this->OnIdleAction).field_0x20 = *(undefined4 *)&param_1->field_0x20;
        *(undefined4 *)&(this->OnIdleAction).field_0x24 = uVar1;
        *(undefined4 *)&(this->OnIdleAction).field_0x28 = uVar2;
        *(undefined4 *)&(this->OnIdleAction).field_0x2c = uVar3;
        *(undefined8 *)param_1 = uVar5;
        *(undefined8 *)&param_1->field_0x8 = uVar6;
        *(undefined8 *)&param_1->field_0x10 = uVar7;
        *(undefined8 *)&param_1->field_0x18 = uVar8;
        *(undefined8 *)&param_1->field_0x20 = uVar9;
        *(undefined8 *)&param_1->field_0x28 = uVar10;
      }
      bVar11 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Flush @ 14eaac000

undefined4 __thiscall FWmfMediaStreamSink::Flush(FWmfMediaStreamSink *this)

{
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    return 0xc00d3e85;
  }
  (**(code **)(*(longlong *)(this->VideoSamplePool).Object + 0x18))();
  return 0;
}

// GetCurrentMediaType @ 14eaaceb0

undefined4 __thiscall
FWmfMediaStreamSink::GetCurrentMediaType(FWmfMediaStreamSink *this,IMFMediaType **param_1)

{
  undefined1 *lpCriticalSection;
  IMFMediaEventQueue *pIVar1;
  undefined4 uVar2;
  
  lpCriticalSection = &this->field_0x10;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 == (IMFMediaType **)0x0) {
      uVar2 = 0x80004003;
    }
    else if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      pIVar1 = (this->EventQueue).RawPointer;
      if (pIVar1 == (IMFMediaEventQueue *)0x0) {
        uVar2 = 0xc00d36b6;
      }
      else {
        *param_1 = (IMFMediaType *)pIVar1;
        (**(code **)((longlong)*pIVar1 + 8))();
        uVar2 = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetEvent @ 14eaad170

int __thiscall
FWmfMediaStreamSink::GetEvent(FWmfMediaStreamSink *this,ulong param_1,IMFMediaEvent **param_2)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  plVar7 = (longlong *)0x0;
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  plVar2 = (this->CriticalSection).CriticalSection.Opaque3[1];
  if (plVar2 == (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar6 = -0x3ff2c17b;
  }
  else {
    (**(code **)(*plVar2 + 8))();
    plVar7 = (this->CriticalSection).CriticalSection.Opaque3[1];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (plVar7 == (longlong *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,param_1,param_2);
    if (iVar6 == 0) {
      (**(code **)((longlong)**param_2 + 0x108))(*param_2,local_res8);
      if (local_res8[0] == 0x131) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        piVar1 = (int *)((longlong)&(this->VideoSamplePool).SharedReferenceCount.ReferenceController
                        + 4);
        *piVar1 = *piVar1 + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return iVar6;
}

// GetIdentifier @ 14eaad770

undefined4 __thiscall FWmfMediaStreamSink::GetIdentifier(FWmfMediaStreamSink *this,ulong *param_1)

{
  if (param_1 == (ulong *)0x0) {
    return 0x80004003;
  }
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    return 0xc00d3e85;
  }
  *param_1 = *(ulong *)((longlong)&(this->Owner).RawPointer + 4);
  return 0;
}

// GetMajorType @ 14eaada10

undefined4 __thiscall FWmfMediaStreamSink::GetMajorType(FWmfMediaStreamSink *this,_GUID *param_1)

{
  undefined1 *lpCriticalSection;
  undefined4 uVar1;
  IMFMediaType *pIVar2;
  
  if (param_1 == (_GUID *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->field_0x10;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      uVar1 = 0xc00d3e85;
    }
    else if ((this->EventQueue).RawPointer == (IMFMediaEventQueue *)0x0) {
      uVar1 = 0xc00d36b6;
    }
    else {
      pIVar2 = TComPtr<IMFMediaType>::operator->((TComPtr<IMFMediaType> *)&this->EventQueue);
      uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,&MF_MT_MAJOR_TYPE,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetMediaSink @ 14eaadbd0

undefined4 __thiscall
FWmfMediaStreamSink::GetMediaSink(FWmfMediaStreamSink *this,IMFMediaSink **param_1)

{
  IMFMediaEventQueue *pIVar1;
  IMFMediaEventQueue *pIVar2;
  
  if (param_1 == (IMFMediaSink **)0x0) {
    return 0x80004003;
  }
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    return 0xc00d3e85;
  }
  pIVar1 = (this->EventQueue).RawPointer;
  pIVar2 = pIVar1 + 2;
  if (pIVar1 == (IMFMediaEventQueue *)0x0) {
    pIVar2 = (IMFMediaEventQueue *)0x0;
  }
  *param_1 = (IMFMediaSink *)pIVar2;
  (**(code **)((longlong)*pIVar2 + 8))();
  return 0;
}

// GetMediaTypeByIndex @ 14eaadc80

HRESULT __thiscall
FWmfMediaStreamSink::GetMediaTypeByIndex
          (FWmfMediaStreamSink *this,ulong param_1,IMFMediaType **param_2)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  HRESULT HVar8;
  TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_> *pTVar9;
  IMFMediaType *local_res18;
  undefined1 *local_res20;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  if (param_2 == (IMFMediaType **)0x0) {
    HVar8 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = &this->field_0x10;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_res20 = lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      HVar8 = -0x3ff2c17b;
    }
    else {
      pTVar9 = WmfMedia::GetSupportedMediaTypes((_GUID *)&this->RefCount);
      local_40.Data = (FScriptContainerElement *)0x0;
      iVar1 = pTVar9->ArrayNum;
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_38 = iVar1;
      if (iVar1 == 0) {
        local_34[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&local_40,iVar1,local_34);
        ConstructItems<TComPtr<IMFMediaType>,TComPtr<IMFMediaType>,int>
                  (local_40.Data,(TComPtr<IMFMediaType> *)pFVar2,iVar1);
      }
      if (((int)param_1 < 0) || (local_38 <= (int)param_1)) {
        HVar8 = -0x3ff2c947;
      }
      else {
        uVar6 = 0;
        if ((int)param_1 < local_38) {
          uVar6 = ~param_1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        plVar3 = *(longlong **)(local_40.Data + (longlong)(int)param_1 * 8);
        if (plVar3 == (longlong *)0x0) {
          HVar8 = -0x3ff2c94c;
        }
        else {
          (**(code **)(*plVar3 + 8))(plVar3);
          local_res18 = (IMFMediaType *)0x0;
          HVar8 = MFCreateMediaType((IMFMediaType **)&local_res18);
          if ((-1 < HVar8) &&
             (HVar8 = (**(code **)(*plVar3 + 0x100))(plVar3,local_res18), -1 < HVar8)) {
            *param_2 = local_res18;
            (**(code **)((longlong)*local_res18 + 8))();
            HVar8 = 0;
          }
          if (local_res18 != (IMFMediaType *)0x0) {
            (**(code **)((longlong)*local_res18 + 0x10))();
          }
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      DestructItems<TComPtr<IMFMediaType>,int>((TComPtr<IMFMediaType> *)local_40.Data,local_38);
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
    if (lpCriticalSection != (undefined1 *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return HVar8;
}

// GetMediaTypeCount @ 14eaade90

undefined4 __thiscall
FWmfMediaStreamSink::GetMediaTypeCount(FWmfMediaStreamSink *this,ulong *param_1)

{
  undefined1 *lpCriticalSection;
  TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = &this->field_0x10;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      pTVar1 = WmfMedia::GetSupportedMediaTypes((_GUID *)&this->RefCount);
      *param_1 = pTVar1->ArrayNum;
      uVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetMediaTypeHandler @ 14eaadf20

undefined4 __thiscall
FWmfMediaStreamSink::GetMediaTypeHandler(FWmfMediaStreamSink *this,IMFMediaTypeHandler **param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (IMFMediaTypeHandler **)0x0) {
    return 0x80004003;
  }
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    return 0xc00d3e85;
  }
                    /* WARNING: Could not recover jumptable at 0x00014eaadf49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)&this[-1].bShowSubTypeErrorMessage)
                    (&this[-1].bShowSubTypeErrorMessage,&IID_IMFMediaTypeHandler,param_1);
  return uVar1;
}

// GetService @ 14eaaf1e0

undefined4 __thiscall
FWmfMediaStreamSink::GetService
          (FWmfMediaStreamSink *this,_GUID *param_1,_GUID *param_2,void **param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  if ((this->Owner).RawPointer == (FWmfMediaSink *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = &((this->Owner).RawPointer)->_padding_;
                    /* WARNING: Could not recover jumptable at 0x00014eaaf255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1,param_2,param_3);
  return uVar3;
}

// Initialize @ 14eab39e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaStreamSink::Initialize(FWmfMediaStreamSink *this,FWmfMediaSink *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaSink *pFVar1;
  HRESULT HVar2;
  bool bVar3;
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    HVar2 = MFCreateEventQueue((IMFMediaEventQueue **)&this->EventQueue);
    if (HVar2 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_18,HVar2);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = false;
    }
    else {
      if ((this->Owner).RawPointer != param_1) {
        if (param_1 != (FWmfMediaSink *)0x0) {
          (**(code **)(param_1->_padding_ + 8))(param_1);
        }
        pFVar1 = (this->Owner).RawPointer;
        if (pFVar1 != (FWmfMediaSink *)0x0) {
          (**(code **)(pFVar1->_padding_ + 0x10))();
        }
        (this->Owner).RawPointer = param_1;
      }
      bVar3 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsMediaTypeSupported @ 14eab6260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWmfMediaStreamSink::IsMediaTypeSupported
          (FWmfMediaStreamSink *this,IMFMediaType *param_1,IMFMediaType **param_2)

{
  undefined1 *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  TArray<TComPtr<IMFMediaType>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined1 *local_80;
  FString local_78;
  FString local_68;
  _GUID local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar8 = 0;
  if (param_2 != (IMFMediaType **)0x0) {
    *param_2 = (IMFMediaType *)0x0;
  }
  if (param_1 == (IMFMediaType *)0x0) {
    return 0x80004003;
  }
  if (6 < (byte)LogWmfMedia._0_1_) {
    WmfMedia::DumpAttributes(&local_68,(IMFAttributes *)param_1);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  lpCriticalSection = &this->field_0x10;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_80 = &this[-1].field_0x158;
  if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
    iVar4 = -0x3ff2c17b;
  }
  else {
    iVar4 = (**(code **)((longlong)*param_1 + 0x50))(param_1,&MF_MT_MAJOR_TYPE,&local_58);
    if (-1 < iVar4) {
      lVar2._0_4_ = this->RefCount;
      lVar2._4_4_ = this->StreamId;
      if ((local_58._0_8_ == lVar2) && (local_58.Data4 == *(uchar (*) [8])&this->StreamType)) {
        pTVar6 = WmfMedia::GetSupportedMediaTypes((_GUID *)&this->RefCount);
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        iVar4 = pTVar6->ArrayNum;
        pFVar1 = pFVar7 + (longlong)iVar4 * 8;
        do {
          if (pTVar6->ArrayNum != iVar4) {
            `TCheckedPointerIterator<TComPtr<IMFMediaType>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_88);
          }
          if (pFVar7 == pFVar1) {
            if (6 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            iVar4 = -0x3ff2c94c;
            goto LAB_14eab64ab;
          }
          plVar3 = *(longlong **)pFVar7;
          if (plVar3 != (longlong *)0x0) {
            local_84 = 0;
            iVar5 = (**(code **)(*plVar3 + 0x118))(plVar3,param_1,&local_84);
            if ((-1 < iVar5) && (((byte)local_84 & 7) == 7 || ((byte)local_84 & 0xb) == 0xb))
            goto LAB_14eab63dd;
          }
          pFVar7 = pFVar7 + 8;
        } while( true );
      }
      if (6 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::MajorTypeToString(&local_78,(_GUID *)&this->RefCount);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = -0x3ff2c94c;
    }
  }
LAB_14eab64ab:
  if (lpCriticalSection != (undefined1 *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar4;
LAB_14eab63dd:
  iVar4 = iVar8;
  if (6 < (byte)LogWmfMedia._0_1_) {
    WmfMedia::MajorTypeToString(&local_78,&local_58);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_14eab64ab;
}

// IsVideoSampleQueueFull @ 14eab6630

bool __thiscall FWmfMediaStreamSink::IsVideoSampleQueueFull(FWmfMediaStreamSink *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->VideoSampleQueue->_padding_ + 8))();
  return 5 < iVar1 + this->NumRequestsInFlight;
}

// OnRequestMoreData @ 14eab8230

void __thiscall FWmfMediaStreamSink::OnRequestMoreData(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((*(longlong *)&this->OnIdleAction == 0) &&
        ((this->EventQueue).RawPointer != (IMFMediaEventQueue *)0x0)) &&
       (this->bSegmentEnded == false)) {
      iVar1 = (**(code **)(this->VideoSampleQueue->_padding_ + 8))();
      if ((iVar1 + this->NumRequestsInFlight < 6) &&
         ((this->bSystemIsScrubbing == false ||
          ((this->bScrubbingInProgress != false && (this->NumRequestsInFlight == 0)))))) {
        (**(code **)(*(longlong *)&this->field_0x10 + 0x30))(&this->field_0x10,0x131,&GUID_NULL,0,0)
        ;
        this->NumRequestsInFlight = this->NumRequestsInFlight + 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014eab82d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnSeekStarted @ 14eab82f0

void __thiscall FWmfMediaStreamSink::OnSeekStarted(FWmfMediaStreamSink *this)

{
  this->bSeekInProgress = true;
  return;
}

// OnSessionEnded @ 14eab8300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWmfMediaStreamSink::OnSessionEnded(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [48];
  code *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &this->NumRequestsInFlight;
    *piVar1 = *piVar1 - this->NumRequestsInFlightWithSystem;
    this->NumRequestsInFlightWithSystem = 0;
    if ((*piVar1 == 0) && (*(longlong *)&this->OnIdleAction != 0)) {
      uVar5 = CONCAT44(uStack_24,local_28);
      pcVar2 = *(code **)&this->OnIdleAction;
      uVar6 = *(undefined8 *)&(this->OnIdleAction).field_0x8;
      lVar3 = *(longlong *)&(this->OnIdleAction).field_0x10;
      uVar4 = *(undefined8 *)&(this->OnIdleAction).field_0x18;
      local_28 = *(undefined4 *)&(this->OnIdleAction).field_0x20;
      uStack_24 = *(undefined4 *)&(this->OnIdleAction).field_0x24;
      plVar7 = *(longlong **)&(this->OnIdleAction).field_0x28;
      *(code **)&this->OnIdleAction = local_48;
      *(undefined8 *)&(this->OnIdleAction).field_0x8 = uStack_40;
      *(longlong *)&(this->OnIdleAction).field_0x10 = local_38;
      *(undefined8 *)&(this->OnIdleAction).field_0x18 = uStack_30;
      *(undefined8 *)&(this->OnIdleAction).field_0x20 = uVar5;
      *(longlong **)&(this->OnIdleAction).field_0x28 = plStack_20;
      local_48 = pcVar2;
      uStack_40 = uVar6;
      local_38 = lVar3;
      uStack_30 = uVar4;
      plStack_20 = plVar7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar2 = local_48;
      plVar7 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar6);
    }
    if (local_48 != (code *)0x0) {
      plVar7 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Pause @ 14eab8690

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FWmfMediaStreamSink::Pause(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    uVar1 = (**(code **)(*(longlong *)&this->field_0x10 + 0x30))
                      (&this->field_0x10,0x12f,&GUID_NULL,0,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PlaceMarker @ 14eab88f0

/* WARNING: Enum "Type": Some values do not have unique names */

HRESULT __thiscall
FWmfMediaStreamSink::PlaceMarker
          (FWmfMediaStreamSink *this,_MFSTREAMSINK_MARKER_TYPE param_1,tagPROPVARIANT *param_2,
          tagPROPVARIANT *param_3)

{
  undefined1 *lpCriticalSection;
  HRESULT HVar1;
  PROPVARIANT *pvarDest;
  FString local_28;
  
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    HVar1 = -0x3ff2c17b;
  }
  else {
    if (param_1 == MFSTREAMSINK_MARKER_ENDOFSEGMENT) {
      (this->OnIdleAction).field_0x23 = 1;
    }
    pvarDest = ::operator_new(0x18);
    if ((param_3 == (tagPROPVARIANT *)0x0) ||
       (HVar1 = PropVariantCopy(pvarDest,(PROPVARIANT *)param_3), -1 < HVar1)) {
      (**(code **)(*(longlong *)this + 0x30))(this,0x132,&GUID_NULL,0,pvarDest);
      PropVariantClear(pvarDest);
      ::operator_delete(pvarDest,0x18);
      HVar1 = 0;
    }
    else {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_28,HVar1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ::operator_delete(pvarDest,0x18);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return HVar1;
}

// ProcessSample @ 14eab8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FWmfMediaStreamSink::ProcessSample(FWmfMediaStreamSink *this,IMFSample *param_1)

{
  undefined1 *lpCriticalSection;
  FSharedReferencer<1> *pFVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined1 *local_80;
  FString local_78;
  code *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  undefined1 auVar15 [16];
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if (param_1 == (IMFSample *)0x0) {
    return 0x80004003;
  }
  iVar14 = 0;
  local_68 = (code *)0x0;
  plStack_40 = (longlong *)0x0;
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_80 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque3[1] == (void *)0x0) {
    iVar14 = -0x3ff2c17b;
  }
  else {
    iVar9 = *(int *)&(this->VideoSamplePool).SharedReferenceCount.ReferenceController + -1;
    iVar10 = 0;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    *(int *)&(this->VideoSamplePool).SharedReferenceCount.ReferenceController = iVar10;
    iVar12 = *(int *)((longlong)&(this->VideoSamplePool).SharedReferenceCount.ReferenceController +
                     4) + -1;
    iVar9 = 0;
    if (0 < iVar12) {
      iVar9 = iVar12;
    }
    *(int *)((longlong)&(this->VideoSamplePool).SharedReferenceCount.ReferenceController + 4) =
         iVar9;
    lVar2._0_4_ = this->NumRequestsInFlight;
    lVar2._4_4_ = this->NumRequestsInFlightWithSystem;
    if ((lVar2 != 0) && (iVar10 == 0)) {
      pcVar4 = *(code **)&this->NumRequestsInFlight;
      uVar11 = *(undefined8 *)&this->field_0xa8;
      lVar5 = *(longlong *)&this->OnIdleAction;
      uVar6 = *(undefined8 *)&(this->OnIdleAction).field_0x8;
      uVar7 = *(undefined8 *)&(this->OnIdleAction).field_0x10;
      plVar13 = *(longlong **)&(this->OnIdleAction).field_0x18;
      *(code **)&this->NumRequestsInFlight = local_68;
      *(undefined8 *)&this->field_0xa8 = uStack_60;
      *(longlong *)&this->OnIdleAction = local_58;
      *(undefined8 *)&(this->OnIdleAction).field_0x8 = uStack_50;
      *(undefined8 *)&(this->OnIdleAction).field_0x10 = local_48;
      *(longlong **)&(this->OnIdleAction).field_0x18 = plStack_40;
      local_68 = pcVar4;
      uStack_60 = uVar11;
      local_58 = lVar5;
      uStack_50 = uVar6;
      local_48 = uVar7;
      plStack_40 = plVar13;
    }
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      if (6 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      iVar14 = -0x3ff2c94c;
    }
    else {
      local_88 = 0;
      iVar10 = (**(code **)((longlong)*param_1 + 0x118))(param_1,&local_88);
      auVar15._8_8_ = extraout_XMM0_Qb;
      auVar15._0_8_ = extraout_XMM0_Qa;
      if (-1 < iVar10) {
        if (6 < (byte)LogWmfMedia._0_1_) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (double)(local_88 / 10) * __real_4024000000000000 + __real_3fe0000000000000
          ;
          roundpd(auVar15,auVar3,1);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        if ((this->OnIdleAction).field_0x20 == '\0') {
          if ((this->OnIdleAction).field_0x21 != '\0') {
            (this->OnIdleAction).field_0x21 = 0;
            local_98 = 0;
            (**(code **)(*(longlong *)this + 0x30))(this,0x134,&GUID_NULL,0);
          }
          bVar8 = IsVideoSampleQueueFull((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage);
          if (bVar8) {
            iVar14 = -0x3ff2c17e;
            goto LAB_14eab8f9c;
          }
          CopyTextureAndEnqueueSample
                    ((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage,param_1);
          if (((lVar2 == 0) &&
              (bVar8 = IsVideoSampleQueueFull
                                 ((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage), !bVar8
              )) && ((float)(this->StreamType).Data1 != 0.0)) {
            if (6 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            local_98 = 0;
            (**(code **)(*(longlong *)this + 0x30))(this,0x131,&GUID_NULL,0);
            pFVar1 = &(this->VideoSamplePool).SharedReferenceCount;
            *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (local_68 != (code *)0x0) {
          UE::Core::Private::Function::CheckCallable(local_68);
          pcVar4 = local_68;
          plVar13 = &local_58;
          if (plStack_40 != (longlong *)0x0) {
            plVar13 = plStack_40;
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          (*pcVar4)(uVar11);
        }
        goto LAB_14eab9059;
      }
      iVar14 = iVar10;
      if (6 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_78,iVar10);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14eab8f9c:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14eab9059:
  if (local_68 != (code *)0x0) {
    plVar13 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar13 = plStack_40;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return iVar14;
}

// QueryInterface @ 14eab9320

HRESULT __thiscall
FWmfMediaStreamSink::QueryInterface(FWmfMediaStreamSink *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// QueryInterface`adjustor{8}' @ 14eab9338

/* [thunk]:public: virtual long __cdecl FWmfMediaStreamSink::QueryInterface`adjustor{8}' (struct
   _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaStreamSink::QueryInterface_adjustor_8__
          (FWmfMediaStreamSink *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaStreamSink *)&this[-1].field_0x158,(_GUID *)param_1,param_2);
  return lVar1;
}

// QueryInterface`adjustor{16}' @ 14eab9348

/* [thunk]:public: virtual long __cdecl FWmfMediaStreamSink::QueryInterface`adjustor{16}' (struct
   _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWmfMediaStreamSink::QueryInterface_adjustor_16__
          (FWmfMediaStreamSink *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage,(_GUID *)param_1,
                         param_2);
  return lVar1;
}

// QueueEvent @ 14eab9360

undefined4 __thiscall
FWmfMediaStreamSink::QueueEvent
          (FWmfMediaStreamSink *this,ulong param_1,_GUID *param_2,undefined4 param_3,
          tagPROPVARIANT *param_4)

{
  undefined1 *lpCriticalSection;
  longlong *plVar1;
  undefined4 uVar2;
  
  lpCriticalSection = &this->field_0x8;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    plVar1 = (this->CriticalSection).CriticalSection.Opaque3[1];
    if (plVar1 == (longlong *)0x0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,param_3,param_4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Release @ 14eab9ba0

ulong __thiscall FWmfMediaStreamSink::Release(FWmfMediaStreamSink *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaStreamSink *)0x0)) {
    (**(code **)(*(longlong *)this + 0x20))(this,1);
  }
  return iVar2 - 1U;
}

// Release`adjustor{8}' @ 14eab9bd8

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaStreamSink::Release`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaStreamSink::Release_adjustor_8__(FWmfMediaStreamSink *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaStreamSink *)&this[-1].field_0x158);
  return uVar1;
}

// Release`adjustor{16}' @ 14eab9be8

/* [thunk]:public: virtual unsigned long __cdecl FWmfMediaStreamSink::Release`adjustor{16}' (void)
   __ptr64 */

ulong __thiscall FWmfMediaStreamSink::Release_adjustor_16__(FWmfMediaStreamSink *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWmfMediaStreamSink *)&this[-1].bShowSubTypeErrorMessage);
  return uVar1;
}

// Restart @ 14eabba60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FWmfMediaStreamSink::Restart(FWmfMediaStreamSink *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)&this->field_0x10 + 0x30))
                    (&this->field_0x10,0x12d,&GUID_NULL,0,0);
  if (-1 < iVar1) {
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    iVar1 = 0;
  }
  return iVar1;
}

// SetClockRate @ 14eabc9b0

void __thiscall FWmfMediaStreamSink::SetClockRate(FWmfMediaStreamSink *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->ClockRate = param_1;
    if (param_1 != 0.0) {
      this->bScrubbingInProgress = false;
      this->bSystemIsScrubbing = false;
    }
    (**(code **)(*(longlong *)&this->field_0x10 + 0x30))(&this->field_0x10,0x130,&GUID_NULL,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014eabca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetCurrentMediaType @ 14eabca40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWmfMediaStreamSink::SetCurrentMediaType(FWmfMediaStreamSink *this,IMFMediaType *param_1)

{
  undefined1 *lpCriticalSection;
  IMFMediaEventQueue *pIVar1;
  int iVar2;
  FString local_28;
  
  if (param_1 == (IMFMediaType *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    if (6 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::DumpAttributes(&local_28,(IMFAttributes *)param_1);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    lpCriticalSection = &this->field_0x10;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CriticalSection).CriticalSection.Opaque3[2] == (void *)0x0) {
      iVar2 = -0x3ff2c17b;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)this + 0x18))(this,param_1,0);
      if (iVar2 < 0) {
        if (6 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
      }
      else {
        if (6 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        if ((this->EventQueue).RawPointer != (IMFMediaEventQueue *)param_1) {
          (**(code **)((longlong)*param_1 + 8))(param_1);
          pIVar1 = (this->EventQueue).RawPointer;
          if (pIVar1 != (IMFMediaEventQueue *)0x0) {
            (**(code **)((longlong)*pIVar1 + 0x10))();
          }
          (this->EventQueue).RawPointer = (IMFMediaEventQueue *)param_1;
        }
        iVar2 = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar2;
}

// SetDecoder @ 14eabcc20

void __thiscall FWmfMediaStreamSink::SetDecoder(FWmfMediaStreamSink *this,WmfMediaDecoder *param_1)

{
  WmfMediaDecoder *pWVar1;
  
  if ((this->Decoder).RawPointer != param_1) {
    if (param_1 != (WmfMediaDecoder *)0x0) {
      (**(code **)(param_1->_padding_ + 8))(param_1);
    }
    pWVar1 = (this->Decoder).RawPointer;
    if (pWVar1 != (WmfMediaDecoder *)0x0) {
      (**(code **)(pWVar1->_padding_ + 0x10))();
    }
    (this->Decoder).RawPointer = param_1;
  }
  return;
}

// SetMediaSamplePoolAndQueue @ 14eabceb0

void __thiscall
FWmfMediaStreamSink::SetMediaSamplePoolAndQueue
          (FWmfMediaStreamSink *this,
          TSharedPtr<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> *param_1,
          TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *param_2,
          TFunction<FMediaTimeStamp___cdecl(FTimespan,EMediaTrackType)> *param_3,
          TFunction<bool___cdecl(void)> *param_4)

{
  FWmfMediaHardwareVideoDecodingTextureSamplePool *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar14 = (this->VideoSamplePool).SharedReferenceCount.ReferenceController;
    (this->VideoSamplePool).Object = pFVar1;
    (this->VideoSamplePool).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    this->VideoSampleQueue = param_2;
    uVar15 = *(undefined8 *)&this->AdjustTimeStamp;
    uVar16 = *(undefined8 *)&(this->AdjustTimeStamp).field_0x8;
    uVar17 = *(undefined8 *)&(this->AdjustTimeStamp).field_0x10;
    uVar18 = *(undefined8 *)&(this->AdjustTimeStamp).field_0x18;
    uVar19 = *(undefined8 *)&(this->AdjustTimeStamp).field_0x20;
    uVar20 = *(undefined8 *)&(this->AdjustTimeStamp).field_0x28;
    uVar21 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)&this->AdjustTimeStamp = *(undefined8 *)param_3;
    *(undefined8 *)&(this->AdjustTimeStamp).field_0x8 = uVar21;
    uVar21 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)&(this->AdjustTimeStamp).field_0x10 = *(undefined8 *)&param_3->field_0x10;
    *(undefined8 *)&(this->AdjustTimeStamp).field_0x18 = uVar21;
    uVar21 = *(undefined8 *)&param_3->field_0x28;
    *(undefined8 *)&(this->AdjustTimeStamp).field_0x20 = *(undefined8 *)&param_3->field_0x20;
    *(undefined8 *)&(this->AdjustTimeStamp).field_0x28 = uVar21;
    *(undefined8 *)param_3 = uVar15;
    *(undefined8 *)&param_3->field_0x8 = uVar16;
    *(undefined8 *)&param_3->field_0x10 = uVar17;
    *(undefined8 *)&param_3->field_0x18 = uVar18;
    *(undefined8 *)&param_3->field_0x20 = uVar19;
    *(undefined8 *)&param_3->field_0x28 = uVar20;
    uVar3 = *(undefined4 *)&this->IsSampleStillDesired;
    uVar4 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x4;
    uVar5 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x8;
    uVar6 = *(undefined4 *)&(this->IsSampleStillDesired).field_0xc;
    uVar7 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x10;
    uVar8 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x14;
    uVar9 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x18;
    uVar10 = *(undefined4 *)&(this->IsSampleStillDesired).field_0x1c;
    uVar15 = *(undefined8 *)&(this->IsSampleStillDesired).field_0x20;
    uVar16 = *(undefined8 *)&(this->IsSampleStillDesired).field_0x28;
    uVar17 = *(undefined8 *)&param_4->field_0x8;
    *(undefined8 *)&this->IsSampleStillDesired = *(undefined8 *)param_4;
    *(undefined8 *)&(this->IsSampleStillDesired).field_0x8 = uVar17;
    uVar11 = *(undefined4 *)&param_4->field_0x14;
    uVar12 = *(undefined4 *)&param_4->field_0x18;
    uVar13 = *(undefined4 *)&param_4->field_0x1c;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x10 = *(undefined4 *)&param_4->field_0x10;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x14 = uVar11;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x18 = uVar12;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x1c = uVar13;
    uVar11 = *(undefined4 *)&param_4->field_0x24;
    uVar12 = *(undefined4 *)&param_4->field_0x28;
    uVar13 = *(undefined4 *)&param_4->field_0x2c;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x20 = *(undefined4 *)&param_4->field_0x20;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x24 = uVar11;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x28 = uVar12;
    *(undefined4 *)&(this->IsSampleStillDesired).field_0x2c = uVar13;
    *(undefined4 *)param_4 = uVar3;
    *(undefined4 *)&param_4->field_0x4 = uVar4;
    *(undefined4 *)&param_4->field_0x8 = uVar5;
    *(undefined4 *)&param_4->field_0xc = uVar6;
    *(undefined4 *)&param_4->field_0x10 = uVar7;
    *(undefined4 *)&param_4->field_0x14 = uVar8;
    *(undefined4 *)&param_4->field_0x18 = uVar9;
    *(undefined4 *)&param_4->field_0x1c = uVar10;
    *(undefined8 *)&param_4->field_0x20 = uVar15;
    *(undefined8 *)&param_4->field_0x28 = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00014eabcfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Shutdown @ 14eabe4b0

void __thiscall FWmfMediaStreamSink::Shutdown(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMFMediaEventQueue *pIVar1;
  IMFMediaType *pIVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (this->EventQueue).RawPointer;
    if (pIVar1 != (IMFMediaEventQueue *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x48))();
      pIVar1 = (this->EventQueue).RawPointer;
      if (pIVar1 != (IMFMediaEventQueue *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
        (this->EventQueue).RawPointer = (IMFMediaEventQueue *)0x0;
      }
    }
    pIVar2 = (this->CurrentMediaType).RawPointer;
    if (pIVar2 != (IMFMediaType *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (this->CurrentMediaType).RawPointer = (IMFMediaType *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014eabe51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Start @ 14eabeb80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FWmfMediaStreamSink::Start(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->ClockRate == 0.0;
    this->bScrubbingInProgress = bVar1;
    this->bSystemIsScrubbing = bVar1;
    iVar2 = (**(code **)(*(longlong *)&this->field_0x10 + 0x30))
                      (&this->field_0x10,0x12d,&GUID_NULL,0,0);
    if (-1 < iVar2) {
      if (6 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      this->bSegmentEnded = false;
      this->bSeekInProgress = false;
      iVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Stop @ 14eabf4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FWmfMediaStreamSink::Stop(FWmfMediaStreamSink *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  FWindowsRecursiveMutex *local_58;
  code *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    local_58 = lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->NumRequestsInFlight = this->NumRequestsInFlight - this->NumRequestsInFlightWithSystem;
    this->NumRequestsInFlightWithSystem = 0;
    local_68 = 0;
    uVar5 = (**(code **)(*(longlong *)&this->field_0x10 + 0x30))
                      (&this->field_0x10,0x12e,&GUID_NULL,0);
    if ((this->NumRequestsInFlight == 0) && (*(longlong *)&this->OnIdleAction != 0)) {
      uVar4 = CONCAT44(uStack_24,local_28);
      pcVar1 = *(code **)&this->OnIdleAction;
      uVar6 = *(undefined8 *)&(this->OnIdleAction).field_0x8;
      lVar2 = *(longlong *)&(this->OnIdleAction).field_0x10;
      uVar3 = *(undefined8 *)&(this->OnIdleAction).field_0x18;
      local_28 = *(undefined4 *)&(this->OnIdleAction).field_0x20;
      uStack_24 = *(undefined4 *)&(this->OnIdleAction).field_0x24;
      plVar7 = *(longlong **)&(this->OnIdleAction).field_0x28;
      *(code **)&this->OnIdleAction = local_48;
      *(undefined8 *)&(this->OnIdleAction).field_0x8 = uStack_40;
      *(longlong *)&(this->OnIdleAction).field_0x10 = local_38;
      *(undefined8 *)&(this->OnIdleAction).field_0x18 = uStack_30;
      *(undefined8 *)&(this->OnIdleAction).field_0x20 = uVar4;
      *(longlong **)&(this->OnIdleAction).field_0x28 = plStack_20;
      local_48 = pcVar1;
      uStack_40 = uVar6;
      local_38 = lVar2;
      uStack_30 = uVar3;
      plStack_20 = plVar7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar1 = local_48;
      plVar7 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar1)(uVar6);
    }
    if (local_48 != (code *)0x0) {
      plVar7 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar7 = plStack_20;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

