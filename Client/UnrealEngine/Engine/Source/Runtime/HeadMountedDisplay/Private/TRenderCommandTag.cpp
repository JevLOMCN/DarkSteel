// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 3

// Get @ 1459525d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>
* __cdecl TRenderCommandTag<`FMotionDelayClient::BeginRenderViewFamily'::__l2::TSTR_MotionDelayClientSetup482>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MotionDelayClientSetup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MotionDelayClientSetup",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"MotionDelayClientSetup");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FMotionDelayClient::BeginRenderViewFamily(FSceneViewFamily_&)_::_2_::TSTR_MotionDelayClientSetup482>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"MotionDelayClientSetup",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_MotionDelayClie;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145952780

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>
* __cdecl TRenderCommandTag<`FLateUpdateManager::Setup'::__l2::TSTR_UpdateLateUpdateStatesRendering26>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLateUpdateStatesRendering");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateLateUpdateStatesRendering",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLateUpdateStatesRendering");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLateUpdateManager::Setup(UE::Math::TTransform<double>_const_&,USceneComponent_*,bool)_::_2_::TSTR_UpdateLateUpdateStatesRendering26>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateLateUpdateStatesRendering","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateLateUpdat;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145952930

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>
* __cdecl TRenderCommandTag<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::TSTR_UpdateRTRelativeTransformCommand152>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateRTRelativeTransformCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateRTRelativeTransformCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateRTRelativeTransformCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UMotionControllerComponent::SendRenderTransform_Concurrent(void)_::_2_::TSTR_UpdateRTRelativeTransformCommand152>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateRTRelativeTransformCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateRTRelativ;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

