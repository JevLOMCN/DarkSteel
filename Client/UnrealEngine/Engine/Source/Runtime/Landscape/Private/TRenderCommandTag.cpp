// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 20

// Get @ 145f0e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>
* __cdecl TRenderCommandTag<`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::__l2::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_CancelAndSelfDestruct");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FLandscapeAsyncTextureReadback_CancelAndSelfDestruct",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_CancelAndSelfDestruct");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::CancelAndSelfDestruct(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CancelAndSelfDestruct135>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeAsyncTextureReadback_CancelAndSelfDestruct",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeAsync;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f0e290

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>
* __cdecl TRenderCommandTag<`FLandscapeAsyncTextureReadback::CheckAndUpdate'::__l2::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_CheckAndUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FLandscapeAsyncTextureReadback_CheckAndUpdate","STATGROUP_RenderThreadCommands"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_CheckAndUpdate");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FLandscapeAsyncTextureReadback::CheckAndUpdate(bool_&,bool)_::_2_::TSTR_FLandscapeAsyncTextureReadback_CheckAndUpdate116>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeAsyncTextureReadback_CheckAndUpdate",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeAsync;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f0e440

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>
* __cdecl TRenderCommandTag<`FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread'::__l2::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_QueueDeletion");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FLandscapeAsyncTextureReadback_QueueDeletion","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeAsyncTextureReadback_QueueDeletion");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(void)_::_2_::TSTR_FLandscapeAsyncTextureReadback_QueueDeletion185>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeAsyncTextureReadback_QueueDeletion",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeAsync;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f0e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>
* __cdecl TRenderCommandTag<`ALandscape::RenderMergedTextureInternal'::__l2::TSTR_RenderMergedTexture3857>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RenderMergedTexture");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RenderMergedTexture",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RenderMergedTexture");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>_const_&___cdecl_TRenderCommandTag<_private:_bool___cdecl_ALandscape::RenderMergedTextureInternal(UE::Math::TTransform<double>_const_&,UE::Math::TBox2<double>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UTextureRenderTarget_*)_::_2_::TSTR_RenderMergedTexture3857>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RenderMergedTexture",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RenderMergedTex;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f2da30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>
* __cdecl TRenderCommandTag<`FLandscapeTileVertexFactory::Copy'::__l2::TSTR_FLandscapeTileVertexFactoryCopyData102>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeTileVertexFactoryCopyData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FLandscapeTileVertexFactoryCopyData","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeTileVertexFactoryCopyData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeTileVertexFactory::Copy(FLandscapeTileVertexFactory_const_&)_::_2_::TSTR_FLandscapeTileVertexFactoryCopyData102>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeTileVertexFactoryCopyData","STATGROUP_RenderThreadCommands"
                             ,"STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeTileV;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f2dbe0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>
* __cdecl TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::TSTR_UpdateLandscapeHeightmapCorner1215>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLandscapeHeightmapCorner");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateLandscapeHeightmapCorner",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLandscapeHeightmapCorner");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal(UE::Landscape::EDirectionIndex,UE::Landscape::FHeightmapTexel)_::_2_::TSTR_UpdateLandscapeHeightmapCorner1215>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateLandscapeHeightmapCorner","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateLandscape;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f2dd90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>
* __cdecl TRenderCommandTag<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::TSTR_UpdateLandscapeHeightmapEdge1133>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLandscapeHeightmapEdge");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"UpdateLandscapeHeightmapEdge",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"UpdateLandscapeHeightmapEdge");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal(UE::Landscape::EDirectionIndex)_::_14_::TSTR_UpdateLandscapeHeightmapEdge1133>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"UpdateLandscapeHeightmapEdge","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_UpdateLandscape;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f528f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>
* __cdecl TRenderCommandTag<`FLandscapeEditLayerReadback::Flush'::__l2::TSTR_FLandscapeEditLayerReadback_Flush378>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Flush"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Flush");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Flush(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Flush378>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeEditLayerReadback_Flush","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeEditL;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f52aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)_::_2_::TSTR_FLandscapeEditLayerReadback_FlushAll299>
* __cdecl TRenderCommandTag<`FLandscapeEditReadbackTaskPool::FlushAll'::__l2::TSTR_FLandscapeEditLayerReadback_FlushAll299>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_FlushAll");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_FlushAll",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_FlushAll");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_FlushAll",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FLandscapeEditLayerReadback_FlushAll";
    _DAT_155199f28 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)_::_2_::TSTR_FLandscapeEditLayerReadback_FlushAll299>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_FlushAll299>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145f52c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)_::_2_::TSTR_FLandscapeEditLayerReadback_Free245>
* __cdecl TRenderCommandTag<`FLandscapeEditReadbackTaskPool::Free'::__l2::TSTR_FLandscapeEditLayerReadback_Free245>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Free");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Free",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Free");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Free",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FLandscapeEditLayerReadback_Free";
    _DAT_155199f88 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)_::_2_::TSTR_FLandscapeEditLayerReadback_Free245>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::Free(int)___ptr64'::`2'::TSTR_FLandscapeEditLayerReadback_Free245>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145f52e20

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>
* __cdecl TRenderCommandTag<`FLandscapeEditLayerReadback::Enqueue'::__l5::TSTR_FLandscapeEditLayerReadback_Queue347>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Queue");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Queue"
                   ,"STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Queue");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Enqueue(UTexture2D_const_*,TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>_&&)_::_5_::TSTR_FLandscapeEditLayerReadback_Queue347>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeEditLayerReadback_Queue","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeEditL;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f52fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)_::_34_::TSTR_FLandscapeEditLayerReadback_Release283>
* __cdecl TRenderCommandTag<`FLandscapeEditReadbackTaskPool::GarbageCollect'::__l34::TSTR_FLandscapeEditLayerReadback_Release283>
          ::Get(void)

{
  FName *pFVar1;
  TStatIdData *pTVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Stat = (TStatIdData *)0x0;
    pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Release");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Release",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pTVar2 = _Stat;
    if (_Stat == (TStatIdData *)0x0) {
      pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Release");
      pTVar2 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                           ::__l2::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Release",
                          "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                          L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Tag = L"FLandscapeEditLayerReadback_Release";
    _DAT_155199f58 = pTVar2;
    _Init_thread_footer(&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return (TRenderCommandTag<_public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)_::_34_::TSTR_FLandscapeEditLayerReadback_Release283>
          *)&`public:_static_class_TRenderCommandTag<struct_`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>_const&___ptr64___cdecl_TRenderCommandTag<`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'::`34'::TSTR_FLandscapeEditLayerReadback_Release283>::Get(void)'
             ::__l2::Tag;
}

// Get @ 145f53190

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>
* __cdecl TRenderCommandTag<`FLandscapeEditLayerReadback::Tick'::__l2::TSTR_FLandscapeEditLayerReadback_Tick359>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLandscapeEditLayerReadback_Tick",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeEditLayerReadback_Tick");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeEditLayerReadback::Tick(void)_::_2_::TSTR_FLandscapeEditLayerReadback_Tick359>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeEditLayerReadback_Tick","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeEditL;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f8dc50

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>
* __cdecl TRenderCommandTag<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::TSTR_FCancelAndDestructCommand699>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCancelAndDestructCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FCancelAndDestructCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCancelAndDestructCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FLandscapeGrassWeightExporter::CancelAndSelfDestruct(void)_::_2_::TSTR_FCancelAndDestructCommand699>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FCancelAndDestructCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FCancelAndDestr;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f8de00

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>
* __cdecl TRenderCommandTag<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::TSTR_FDrawSceneCommand562>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDrawSceneCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FDrawSceneCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FDrawSceneCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter(ALandscapeProxy_*,TArrayView<ULandscapeComponent_*_const,int>,bool,bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool,bool)_::_20_::TSTR_FDrawSceneCommand562>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FDrawSceneCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FDrawSceneComma;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f8dfb0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>
* __cdecl TRenderCommandTag<`UE::Landscape::SubmitGPUCommands'::__l2::TSTR_FFlushResourcesCommand293>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FFlushResourcesCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FFlushResourcesCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FFlushResourcesCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>_const_&___cdecl_TRenderCommandTag<_void___cdecl_UE::Landscape::SubmitGPUCommands(bool,bool)_::_2_::TSTR_FFlushResourcesCommand293>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FFlushResourcesCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FFlushResources;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145f8e160

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>
* __cdecl TRenderCommandTag<`FLandscapeVertexFactory::Copy'::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeVertexFactoryCopyData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FLandscapeVertexFactoryCopyData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FLandscapeVertexFactoryCopyData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_FLandscapeVertexFactory::Copy(FLandscapeVertexFactory_const_&)_::_2_::TSTR_FLandscapeVertexFactoryCopyData3760>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FLandscapeVertexFactoryCopyData","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FLandscapeVerte;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145fc0f90

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>
* __cdecl TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::TSTR_FRDGBuilderRecorder_Flush131>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRDGBuilderRecorder_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRDGBuilderRecorder_Flush",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRDGBuilderRecorder_Flush");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::Flush(FRDGEventName_&&)_::_5_::TSTR_FRDGBuilderRecorder_Flush131>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRDGBuilderRecorder_Flush","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRDGBuilderReco;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145fc1140

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>
* __cdecl TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRDGBuilderRecorder_RDGCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"FRDGBuilderRecorder_RDGCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FRDGBuilderRecorder_RDGCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand(TFunction<void___cdecl(FRDGBuilder_&)>,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>)_::_11_::TSTR_FRDGBuilderRecorder_RDGCommand171>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FRDGBuilderRecorder_RDGCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FRDGBuilderReco;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 145fc12f0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>
* __cdecl TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l7::TSTR_RDGImmediateRenderCommand201>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RDGImmediateRenderCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"RDGImmediateRenderCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"RDGImmediateRenderCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>_const_&___cdecl_TRenderCommandTag<_public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_7_::TSTR_RDGImmediateRenderCommand201>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"RDGImmediateRenderCommand","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_RDGImmediateRen;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

