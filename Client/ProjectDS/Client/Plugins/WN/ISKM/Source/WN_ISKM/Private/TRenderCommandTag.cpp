// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 4

// Get @ 14a8497e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>
* __cdecl TRenderCommandTag<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::TSTR_ISKM_SendRenderDynamicData435>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ISKM_SendRenderDynamicData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ISKM_SendRenderDynamicData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ISKM_SendRenderDynamicData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(void)_::_2_::TSTR_ISKM_SendRenderDynamicData435>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"ISKM_SendRenderDynamicData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ISKM_SendRender;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14a849990

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>
* __cdecl TRenderCommandTag<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::TSTR_InitRenderResources157>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitRenderResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitRenderResources",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitRenderResources");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_2_::TSTR_InitRenderResources157>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitRenderResources",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitRenderResou;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14a849b40

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>
* __cdecl TRenderCommandTag<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::TSTR_ReleaseResoruces108>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseResoruces");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseResoruces",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseResoruces");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UWN_ISKM_Profile::__InitRenderDatas(void)_::_11_::TSTR_ReleaseResoruces108>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseResoruces",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseResoruce;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14a849cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>
* __cdecl TRenderCommandTag<`UWN_ISKM_Profile::BeginDestroy'::__l8::TSTR_ReleaseResoruces246>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseResoruces");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseResoruces",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReleaseResoruces");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UWN_ISKM_Profile::BeginDestroy(void)_::_8_::TSTR_ReleaseResoruces246>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReleaseResoruces",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReleaseResoruce;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

