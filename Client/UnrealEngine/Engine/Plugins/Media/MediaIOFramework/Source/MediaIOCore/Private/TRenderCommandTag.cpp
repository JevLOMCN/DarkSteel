// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 9

// Get @ 14d7a7f10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>
* __cdecl TRenderCommandTag<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::TSTR_FMediaOutputCaptureFrameCreateTexture1139>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FMediaOutputCaptureFrameCreateTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FMediaOutputCaptureFrameCreateTexture","STATGROUP_RenderThreadCommands",
                   "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FMediaOutputCaptureFrameCreateTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::PrepareAndDispatchCapture_GameThread(TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>_const_&)_::_6_::TSTR_FMediaOutputCaptureFrameCreateTexture1139>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FMediaOutputCaptureFrameCreateTexture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FMediaOutputCap;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a80c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)_::_2_::TSTR_MediaCaptureFrameManagerCleaning82>
* __cdecl TRenderCommandTag<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::TSTR_MediaCaptureFrameManagerCleaning82>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"MediaCaptureFrameManagerCleaning");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                ::__l2::Stat,*pFVar1,L"MediaCaptureFrameManagerCleaning",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"MediaCaptureFrameManagerCleaning");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"MediaCaptureFrameManagerCleaning",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"MediaCaptureFrameManagerCleaning";
    _DAT_15536bd88 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)_::_2_::TSTR_MediaCaptureFrameManagerCleaning82>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>_const&___ptr64___cdecl_TRenderCommandTag<`public:___cdecl_UE::MediaCaptureData::FFrameManager::~FFrameManager(void)___ptr64'::`2'::TSTR_MediaCaptureFrameManagerCleaning82>::Get(void)'
             ::__l2::Tag;
}

// Get @ 14d7a8280

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>
* __cdecl TRenderCommandTag<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::TSTR_MediaIOCorePlayerCreateTextures732>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Stat = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>::Get(void)_::_2_::FStatData>
              )0x0;
    pFVar1 = ::FName::FName(&local_res8,"MediaIOCorePlayerCreateTextures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MediaIOCorePlayerCreateTextures",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FVar2 = ::Stat;
    if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>::Get(void)_::_2_::FStatData>
                   )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"MediaIOCorePlayerCreateTextures");
      FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::CreateAndRegisterTextures(void)_::_2_::TSTR_MediaIOCorePlayerCreateTextures732>::Get(void)_::_2_::FStatData>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                           L"MediaIOCorePlayerCreateTextures","STATGROUP_RenderThreadCommands",
                           "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    ::Tag._0_8_ = u_MediaIOCorePlay;
    ::Tag._8_8_ = FVar2;
    _Init_thread_footer(&::_TSS1);
  }
  return &::Tag;
}

// Get @ 14d7a8440

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>
* __cdecl TRenderCommandTag<`UMediaCapture::InitializeOutputResources'::__l2::TSTR_MediaOutputCaptureFrameCreateResources1227>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaOutputCaptureFrameCreateResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"MediaOutputCaptureFrameCreateResources","STATGROUP_RenderThreadCommands",
                   "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaOutputCaptureFrameCreateResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMediaCapture::InitializeOutputResources(int)_::_2_::TSTR_MediaOutputCaptureFrameCreateResources1227>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"MediaOutputCaptureFrameCreateResources",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MediaOutputCapt;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a85f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>
* __cdecl TRenderCommandTag<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::TSTR_MediaOutputCaptureReadbackComplete112>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaOutputCaptureReadbackComplete");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"MediaOutputCaptureReadbackComplete","STATGROUP_RenderThreadCommands",
                   "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MediaOutputCaptureReadbackComplete");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture(UE::MediaCaptureData::FPendingCaptureData_const_&)_::_31_::TSTR_MediaOutputCaptureReadbackComplete112>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"MediaOutputCaptureReadbackComplete","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MediaOutputCapt;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a87a0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>
* __cdecl TRenderCommandTag<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::TSTR_RegisterSampleBuffers660>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterSampleBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RegisterSampleBuffers",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RegisterSampleBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::RegisterSampleBuffer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_5_::TSTR_RegisterSampleBuffers660>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RegisterSampleBuffers",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RegisterSampleB;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a8950

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>
* __cdecl TRenderCommandTag<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::TSTR_StartGPUTextureTransferCopy912>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"StartGPUTextureTransferCopy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"StartGPUTextureTransferCopy",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"StartGPUTextureTransferCopy");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::ExecuteGPUTransfer(TSharedPtr<FMediaIOCoreTextureSampleBase,1>_const_&)_::_2_::TSTR_StartGPUTextureTransferCopy912>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"StartGPUTextureTransferCopy","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_StartGPUTexture;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a8b00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>
* __cdecl TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::TSTR_UnregisterSampleBuffers702>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterSampleBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterSampleBuffers",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterSampleBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterSampleBuffers(void)_::_2_::TSTR_UnregisterSampleBuffers702>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterSampleBuffers"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UnregisterSampl;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d7a8cb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>
* __cdecl TRenderCommandTag<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::TSTR_UnregisterSampleBuffers822>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterSampleBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterSampleBuffers",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UnregisterSampleBuffers");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FMediaIOCorePlayerBase::UnregisterTextures(void)_::_2_::TSTR_UnregisterSampleBuffers822>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UnregisterSampleBuffers"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UnregisterSampl;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

