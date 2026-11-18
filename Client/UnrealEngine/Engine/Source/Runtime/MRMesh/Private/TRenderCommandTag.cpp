// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 5

// Get @ 146c6a3e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>
* __cdecl TRenderCommandTag<`UMRMeshComponent::ClearAllBrickData_Internal'::__l2::TSTR_FClearAllBricksLambda813>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FClearAllBricksLambda");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FClearAllBricksLambda",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FClearAllBricksLambda");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::ClearAllBrickData_Internal(void)_::_2_::TSTR_FClearAllBricksLambda813>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FClearAllBricksLambda",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FClearAllBricks;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c6a590

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>
* __cdecl TRenderCommandTag<`UMRMeshComponent::SendBrickData_Internal'::__l84::TSTR_FSendBrickDataLambda764>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSendBrickDataLambda");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSendBrickDataLambda",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSendBrickDataLambda");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_UMRMeshComponent::SendBrickData_Internal(IMRMesh::FSendBrickDataArgs)_::_84_::TSTR_FSendBrickDataLambda764>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSendBrickDataLambda",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSendBrickDataL;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c6a740

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>
* __cdecl TRenderCommandTag<`UMRMeshComponent::SetEnableMeshOcclusion'::__l5::TSTR_FSetEnableMeshOcclusionLambda1078>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetEnableMeshOcclusionLambda");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetEnableMeshOcclusionLambda",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetEnableMeshOcclusionLambda");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UMRMeshComponent::SetEnableMeshOcclusion(bool)_::_5_::TSTR_FSetEnableMeshOcclusionLambda1078>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FSetEnableMeshOcclusionLambda","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetEnableMeshO;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c6a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>
* __cdecl TRenderCommandTag<`UMRMeshComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSetMaterialLambda863>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetMaterialLambda");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetMaterialLambda",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FSetMaterialLambda");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>_const_&___cdecl_TRenderCommandTag<_private:_virtual_void___cdecl_UMRMeshComponent::SendRenderDynamicData_Concurrent(void)_::_5_::TSTR_FSetMaterialLambda863>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FSetMaterialLambda",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FSetMaterialLam;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 146c6aaa0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>
* __cdecl TRenderCommandTag<`InitVertexFactory'::__l2::TSTR_InitMrMeshVertexFactory134>::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitMrMeshVertexFactory");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitMrMeshVertexFactory",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"InitMrMeshVertexFactory");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>_const_&___cdecl_TRenderCommandTag<_void___cdecl_InitVertexFactory(FLocalVertexFactory_*,FMRMeshProxySection_const_&)_::_2_::TSTR_InitMrMeshVertexFactory134>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"InitMrMeshVertexFactory"
                             ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_InitMrMeshVerte;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

