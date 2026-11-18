// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 11

// ~FVideoPlayer @ 14f128520

void __thiscall FVideoPlayer::~FVideoPlayer(FVideoPlayer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FVideoPlayer__6B_;
  if (this->MediaSession != (IMFMediaSession *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MediaSession == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.h"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Shutdown(this);
  pFVar1 = (this->HMDAudioOutputDevice).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddRef @ 14f128830

ulong __thiscall FVideoPlayer::AddRef(FVideoPlayer *this)

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

// AddStreamToTopology @ 14f128850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIntPoint<int> __thiscall
FVideoPlayer::AddStreamToTopology
          (FVideoPlayer *this,IMFTopology *param_1,IMFPresentationDescriptor *param_2,
          IMFStreamDescriptor *param_3,FSampleGrabberCallback *param_4,bool param_5)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  HRESULT HVar8;
  uint uVar9;
  TIntPoint<int> TVar10;
  IModularFeatures *pIVar11;
  IHeadMountedDisplayModule *pIVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  IMFTopology IVar16;
  IMFTopology IVar17;
  undefined4 uVar18;
  undefined7 in_stack_00000031;
  char in_stack_00000038;
  undefined1 auStack_108 [32];
  IMFMediaType *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  IMFTopology local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  IMFTopology local_98;
  FSampleGrabberCallback *local_90;
  IMFStreamDescriptor *local_88;
  void *local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_108;
  IVar16 = (IMFTopology)0x0;
  local_90 = param_4;
  local_b8 = (IMFTopology)0x0;
  local_c0 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_88 = param_3;
  iVar7 = (**(code **)(param_4->_padding_ + 0x110))(param_4,&local_d0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,600,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_d0 + 0x40))(local_d0,local_60);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x25c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = memcmp(local_60,&MFMediaType_Audio,0x10);
  if (iVar7 == 0) {
    if (in_stack_00000038 == '\0') {
      IVar17 = IVar16;
      if (local_d0 != (longlong *)0x0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
      goto LAB_14f1291c4;
    }
    iVar7 = MFCreateAudioRendererActivate(&local_c0);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(((HRESULT)(HResult)) >= 0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                           ,0x267,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
      return (TIntPoint<int>)TVar10.field0_0x0;
    }
    bVar6 = IsInGameThread();
    if (bVar6) {
      bVar6 = IsInGameThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                             ,0x5a,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      pIVar11 = IModularFeatures::Get();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                        ::__l2::HMDFeatureName,L"HMD");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      this_00 = &this->HMDAudioOutputDevice;
      iVar7 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
      if (iVar7 < 1) {
        ::FString::Reset(this_00,0);
      }
      else {
        pIVar12 = IHeadMountedDisplayModule::Get();
        puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x70))(pIVar12,local_80);
        if (this_00 != (FString *)puVar13) {
          pFVar1 = (this_00->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar13;
          *puVar13 = 0;
          (this->HMDAudioOutputDevice).Data.ArrayNum = *(int *)(puVar13 + 1);
          (this->HMDAudioOutputDevice).Data.ArrayMax = *(int *)((longlong)puVar13 + 0xc);
          puVar13[1] = 0;
        }
        if (local_80[0] != (void *)0x0) {
          FMemory::Free(local_80[0]);
        }
      }
    }
    IVar17 = local_b8;
    if (((1 < (this->HMDAudioOutputDevice).Data.ArrayNum) &&
        (iVar7 = (**(code **)(*local_c0 + 200))
                           (local_c0,&MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ID,
                            (this->HMDAudioOutputDevice).Data.AllocatorInstance.Data),
        IVar17 = local_b8, iVar7 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(((HRESULT)(HResult)) >= 0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                           ,0x279,L""), IVar17 = local_b8, bVar6)) {
      pcVar3 = (code *)swi(3);
      TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
      return (TIntPoint<int>)TVar10.field0_0x0;
    }
  }
  else {
    iVar7 = memcmp(local_60,&MFMediaType_Video,0x10);
    IVar17 = local_b8;
    if (iVar7 == 0) {
      local_c8 = (longlong *)0x0;
      iVar7 = (**(code **)(*local_d0 + 0x38))(local_d0,&local_c8);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x281,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      local_e8 = (IMFMediaType *)0x0;
      HVar8 = MFCreateMediaType(&local_e8);
      if ((HVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x285,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      iVar7 = (**(code **)(*local_c8 + 0x40))(local_c8,&MF_MT_FRAME_SIZE,&local_98);
      if (iVar7 < 0) {
        uVar14 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(((HRESULT)(HResult)) >= 0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                           ,0x288,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
          return (TIntPoint<int>)TVar10.field0_0x0;
        }
      }
      else {
        uVar14 = local_98._4_4_;
        IVar16 = local_98;
      }
      iVar7 = (**(code **)(*local_c8 + 0x50))(local_c8,&MF_MT_SUBTYPE,local_70);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x28c,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      HVar8 = (*local_e8->lpVtbl->SetGUID)
                        (local_e8,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Video);
      if ((HVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x28f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      uVar18 = IVar16._0_4_;
      TVar4._s_0.Y = uVar18;
      TVar4._s_0.X = uVar14;
      (this->VideoTrackFormat).OutputDim.field0_0x0 = TVar4;
      local_b0 = uVar14;
      uStack_ac = uVar18;
      iVar7 = memcmp(local_70,&MFVideoFormat_RGB555,0x10);
      if ((((iVar7 == 0) || (iVar7 = memcmp(local_70,&MFVideoFormat_RGB565,0x10), iVar7 == 0)) ||
          (iVar7 = memcmp(local_70,&MFVideoFormat_RGB24,0x10), iVar7 == 0)) ||
         ((iVar7 = memcmp(local_70,&MFVideoFormat_RGB32,0x10), iVar7 == 0 ||
          (iVar7 = memcmp(local_70,&MFVideoFormat_ARGB32,0x10), iVar7 == 0)))) {
        HVar8 = (*local_e8->lpVtbl->SetGUID)
                          (local_e8,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFVideoFormat_RGB32);
        if ((HVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(((HRESULT)(HResult)) >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                               ,0x29e,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
          return (TIntPoint<int>)TVar10.field0_0x0;
        }
        TVar2 = (this->VideoTrackFormat).OutputDim.field0_0x0._s_0;
        (this->VideoTrackFormat).BufferDim.field0_0x0._s_0 = TVar2;
        (this->VideoTrackFormat).SampleFormat = CharBMP;
        uVar9 = TVar2.X * 4;
      }
      else {
        HVar8 = (*local_e8->lpVtbl->SetGUID)
                          (local_e8,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFVideoFormat_YUY2);
        if ((HVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(((HRESULT)(HResult)) >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                               ,0x2a7,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
          return (TIntPoint<int>)TVar10.field0_0x0;
        }
        uVar15 = (this->VideoTrackFormat).OutputDim.field0_0x0._s_0.X;
        (this->VideoTrackFormat).SampleFormat = CharYUY2;
        iVar7 = memcmp(local_70,&MFVideoFormat_H264,0x10);
        if ((iVar7 == 0) || (iVar7 = memcmp(local_70,&MFVideoFormat_H264_ES,0x10), iVar7 == 0)) {
          uVar15 = uVar15 + 0xf & 0xfffffff0;
        }
        local_a8 = (int)uVar15 / 2;
        iStack_a4 = (this->VideoTrackFormat).OutputDim.field0_0x0._s_0.Y;
        TVar5._s_0.Y = iStack_a4;
        TVar5._s_0.X = local_a8;
        (this->VideoTrackFormat).BufferDim.field0_0x0 = TVar5;
        uVar9 = uVar15 * -2;
        if ((int)(uVar15 * -2) < 0) {
          uVar9 = uVar15 * 2;
        }
      }
      (this->VideoTrackFormat).BufferStride = uVar9;
      HVar8 = (*local_e8->lpVtbl->SetUINT32)(local_e8,(GUID *)&MF_MT_ALL_SAMPLES_INDEPENDENT,1);
      if ((HVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x2bf,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      iVar7 = MFCreateSampleGrabberSinkActivate
                        (local_e8,CONCAT71(in_stack_00000031,param_5),&local_c0);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x2c2,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar10.field0_0x0;
      }
      if (local_e8 != (IMFMediaType *)0x0) {
        (*local_e8->lpVtbl->Release)(local_e8);
        local_e8 = (IMFMediaType *)0x0;
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
        local_c8 = (longlong *)0x0;
      }
      IVar17._4_4_ = uVar18;
      IVar17._0_4_ = uVar14;
      param_4 = local_90;
      local_a0 = uVar14;
      uStack_9c = uVar18;
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
    local_d0 = (longlong *)0x0;
  }
  local_e0 = (longlong *)0x0;
  iVar7 = MFCreateTopologyNode(1,&local_e0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2d0,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_e0 + 0xd8))(local_e0,&MF_TOPONODE_SOURCE,this->MediaSource);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2d2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_e0 + 0xd8))(local_e0,&MF_TOPONODE_PRESENTATION_DESCRIPTOR,local_88);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2d4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_e0 + 0xd8))(local_e0,&MF_TOPONODE_STREAM_DESCRIPTOR,param_4);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2d6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_e0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2d8,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  local_d8 = (longlong *)0x0;
  iVar7 = MFCreateTopologyNode(0,&local_d8);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2de,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_d8 + 0x108))(local_d8,local_c0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2e0,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_d8 + 0xa8))(local_d8,&MF_TOPONODE_STREAMID,0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2e2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_d8 + 0xa8))(local_d8,&MF_TOPONODE_NOSHUTDOWN_ON_REMOVE,0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2e4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_d8);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2e6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  iVar7 = (**(code **)(*local_e0 + 0x140))(local_e0,0,local_d8,0);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x2ea,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
    return (TIntPoint<int>)TVar10.field0_0x0;
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
    local_e0 = (longlong *)0x0;
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
    local_d8 = (longlong *)0x0;
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
LAB_14f1291c4:
  *param_1 = IVar17;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetParameters @ 14f12ab30

undefined4 __thiscall FVideoPlayer::GetParameters(FVideoPlayer *this,ulong *param_1,ulong *param_2)

{
  return 0x80004001;
}

// Invoke @ 14f12ae50

undefined4 __thiscall FVideoPlayer::Invoke(FVideoPlayer *this,IMFAsyncResult *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int local_res8 [2];
  int local_res18 [2];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  iVar3 = (**(code **)((longlong)*this->MediaSession + 0x28))
                    (this->MediaSession,param_1,&local_res20);
  if (iVar3 < 0) goto LAB_14f12af8a;
  local_res8[0] = 0;
  if ((local_res20 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar3 = (**(code **)(*local_res20 + 0x108))(local_res20,local_res8);
  if (iVar3 < 0) goto LAB_14f12af8a;
  local_res18[0] = 1;
  if ((local_res20 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar3 = (**(code **)(*local_res20 + 0x118))(local_res20,local_res18);
  if (iVar3 < 0) goto LAB_14f12af8a;
  bVar2 = false;
  if (local_res8[0] == 1) {
    if ((this->MovieIsFinished).Counter == 0) goto LAB_14f12af82;
LAB_14f12af6a:
    if (!bVar2) {
LAB_14f12af6e:
      iVar3 = (**(code **)((longlong)*this->MediaSession + 0x20))(this->MediaSession,this,0);
      if (-1 < iVar3) goto LAB_14f12af8a;
    }
  }
  else {
    if (local_res8[0] == 0x65) {
      if (local_res18[0] < 0) {
        if (local_res18[0] == -0x3ff2c906) {
          this->bFailedToCreateMediaSink = true;
        }
        bVar2 = true;
      }
      goto LAB_14f12af6a;
    }
    if (local_res8[0] != 0x6a) {
      if (local_res8[0] != 0xd3) {
        if (local_res8[0] != 0x138) goto LAB_14f12af6a;
        goto LAB_14f12af82;
      }
      if ((this->MovieIsFinished).Counter == 0) {
        LOCK();
        (this->MovieIsFinished).Counter = 1;
        UNLOCK();
      }
      goto LAB_14f12af6e;
    }
  }
LAB_14f12af82:
  LOCK();
  (this->MovieIsFinished).Counter = 1;
  UNLOCK();
  LOCK();
  (this->CloseIsPosted).Counter = 1;
  UNLOCK();
LAB_14f12af8a:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  return 0;
}

// OpenFile @ 14f12b250

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __thiscall
FVideoPlayer::OpenFile
          (FVideoPlayer *this,FString *param_1,FSampleGrabberCallback *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TIntPoint<int> TVar4;
  ForAnyElementType FVar5;
  undefined4 local_res8 [2];
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined1 local_58 [8];
  FString local_50;
  
  (param_1->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  iVar3 = MFCreateMediaSession(0,&this->MediaSession);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x1d4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
  iVar3 = (**(code **)((longlong)*this->MediaSession + 0x20))(this->MediaSession,this,0);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x1d7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
  local_res10 = (longlong *)0x0;
  local_res18[0] = (longlong *)0x0;
  iVar3 = MFCreateSourceResolver(&local_res10);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x1de,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
  ::FString::PrintfImpl(&local_50,L"%s.%s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar5.Data = local_50.Data.AllocatorInstance.Data;
  }
  local_res8[0] = 2;
  iVar3 = (**(code **)(*local_res10 + 0x18))(local_res10,FVar5.Data,1,0,local_res8,local_res18);
  (**(code **)(*local_res10 + 0x10))();
  if (iVar3 < 0) {
    if (4 < (byte)LogWindowsMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsMoviePlayer);
    }
    LOCK();
    (this->MovieIsFinished).Counter = 1;
    UNLOCK();
  }
  else {
    (**(code **)*local_res18[0])
              (local_res18[0],&_GUID_279a808d_aec7_40c8_9c6b_a6b492c78a66,&this->MediaSource);
    (**(code **)(*local_res18[0] + 0x10))();
    TVar4 = SetPlaybackTopology(this,(FSampleGrabberCallback *)local_58,param_3);
    (param_1->Data).AllocatorInstance.Data = *(FScriptContainerElement **)TVar4.field0_0x0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// QueryInterface @ 14f12bb10

HRESULT __thiscall FVideoPlayer::QueryInterface(FVideoPlayer *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// Release @ 14f12bb70

ulong __thiscall FVideoPlayer::Release(FVideoPlayer *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FVideoPlayer *)0x0)) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  return iVar2 - 1U;
}

// SetPlaybackTopology @ 14f12bbc0

TIntPoint<int> __thiscall
FVideoPlayer::SetPlaybackTopology(FVideoPlayer *this,FSampleGrabberCallback *param_1,bool param_2)

{
  IMFMediaSource *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIntPoint<int> TVar5;
  uint uVar6;
  uint local_res8 [2];
  int local_res10 [2];
  IMFStreamDescriptor *local_48;
  IMFPresentationDescriptor *local_40;
  FSampleGrabberCallback *local_38;
  IMFTopology local_30;
  
  uVar6 = 0;
  pIVar1 = this->MediaSource;
  local_48 = (IMFStreamDescriptor *)0x0;
  param_1->_padding_ = 0;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&local_48);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x228,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
  local_40 = (IMFPresentationDescriptor *)0x0;
  iVar4 = MFCreateTopology(&local_40);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x22c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
  local_res8[0] = 0;
  iVar4 = (**(code **)((longlong)*local_48 + 0x108))(local_48,local_res8);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x230,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
  if (local_res8[0] != 0) {
    do {
      local_res10[0] = 0;
      local_38 = (FSampleGrabberCallback *)0x0;
      iVar4 = (**(code **)((longlong)*local_48 + 0x110))(local_48,uVar6,local_res10,&local_38);
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(((HRESULT)(HResult)) >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                             ,0x237,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
        return (TIntPoint<int>)TVar5.field0_0x0;
      }
      if (local_res10[0] != 0) {
        AddStreamToTopology(this,&local_30,local_40,local_48,local_38,param_2);
        if ((local_30._0_4_ != 0) || (local_30._4_4_ != 0)) {
          param_1->_padding_ = CONCAT44(local_30._4_4_,local_30._0_4_);
        }
      }
      (**(code **)(local_38->_padding_ + 0x10))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  iVar4 = (**(code **)((longlong)*this->MediaSession + 0x38))(this->MediaSession,0,local_40);
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(HResult)) >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                         ,0x246,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
  (**(code **)((longlong)*local_40 + 0x10))();
  (**(code **)((longlong)*local_48 + 0x10))();
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// Shutdown @ 14f12bdc0

void __thiscall FVideoPlayer::Shutdown(FVideoPlayer *this)

{
  float fVar1;
  int iVar2;
  
  if ((this->MediaSession != (IMFMediaSession *)0x0) &&
     (iVar2 = (**(code **)((longlong)*this->MediaSession + 0x60))(), fVar1 = __real_3c23d70a,
     -1 < iVar2)) {
    iVar2 = (this->CloseIsPosted).Counter;
    while (iVar2 == 0) {
      FWindowsPlatformProcess::Sleep(fVar1);
      iVar2 = (this->CloseIsPosted).Counter;
    }
  }
  if (this->MediaSource != (IMFMediaSource *)0x0) {
    (**(code **)((longlong)*this->MediaSource + 0x60))();
    (**(code **)((longlong)*this->MediaSource + 0x10))();
    this->MediaSource = (IMFMediaSource *)0x0;
  }
  if (this->MediaSession != (IMFMediaSession *)0x0) {
    (**(code **)((longlong)*this->MediaSession + 0x68))();
    (**(code **)((longlong)*this->MediaSession + 0x10))();
    this->MediaSession = (IMFMediaSession *)0x0;
  }
  return;
}

// StartPlayback @ 14f12be60

void __thiscall FVideoPlayer::StartPlayback(FVideoPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (this->MediaSession == (IMFMediaSession *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MediaSession != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                       ,0x1fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  iVar3 = (**(code **)((longlong)*this->MediaSession + 0x48))
                    (this->MediaSession,&GUID_NULL,&local_28);
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(HResult)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMovieStreamer.cpp"
                       ,0x200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PropVariantClear((PROPVARIANT *)&local_28);
  return;
}

