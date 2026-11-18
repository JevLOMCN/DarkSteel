// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 6

// Get @ 14e998d10

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>
* __cdecl TRenderCommandTag<`FNDIGeometryCollectionData::Release'::__l5::TSTR_DeleteResource107>::
          Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResource");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResource",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DeleteResource");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FNDIGeometryCollectionData::Release(void)_::_5_::TSTR_DeleteResource107>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"DeleteResource",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DeleteResource;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e998ec0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData'::__l28::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraChaosDestructionDICreateRTInstance");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FNiagaraChaosDestructionDICreateRTInstance","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraChaosDestructionDICreateRTInstance");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>_const_&___cdecl_TRenderCommandTag<_public:_virtual_bool___cdecl_UNiagaraDataInterfaceChaosDestruction::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_28_::TSTR_FNiagaraChaosDestructionDICreateRTInstance658>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraChaosDestructionDICreateRTInstance",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraChaosDe;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e999070

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData'::__l19::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIChaosDestructionDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FNiagaraDIChaosDestructionDestroyInstanceData","STATGROUP_RenderThreadCommands"
                   ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIChaosDestructionDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_19_::TSTR_FNiagaraDIChaosDestructionDestroyInstanceData678>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIChaosDestructionDestroyInstanceData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIChaos;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e999220

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData170>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FNiagaraDIDestroyInstanceData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData170>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIDestroyInstanceData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e9993d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData459>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FNiagaraDIDestroyInstanceData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FNiagaraDIDestroyInstanceData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_2_::TSTR_FNiagaraDIDestroyInstanceData459>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FNiagaraDIDestroyInstanceData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FNiagaraDIDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14e999580

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>
* __cdecl TRenderCommandTag<`UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl'::__l2::TSTR_FPushDIChaosDestructionToRT3451>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FPushDIChaosDestructionToRT");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FPushDIChaosDestructionToRT",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FPushDIChaosDestructionToRT");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_void___cdecl_UNiagaraDataInterfaceChaosDestruction::PushToRenderThreadImpl(void)_::_2_::TSTR_FPushDIChaosDestructionToRT3451>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FPushDIChaosDestructionToRT","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FPushDIChaosDes;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

