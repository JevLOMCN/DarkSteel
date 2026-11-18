// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// Get @ 14d6d1110

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>
* __cdecl TRenderCommandTag<`DistortionRenderingUtils::UndistortImagePoints'::__l2::TSTR_DistortionRenderingUtils_UndistortImagePoints78>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DistortionRenderingUtils_UndistortImagePoints");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"DistortionRenderingUtils_UndistortImagePoints","STATGROUP_RenderThreadCommands"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"DistortionRenderingUtils_UndistortImagePoints");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>_const_&___cdecl_TRenderCommandTag<_void___cdecl_DistortionRenderingUtils::UndistortImagePoints(UTextureRenderTarget2D_*,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_DistortionRenderingUtils_UndistortImagePoints78>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"DistortionRenderingUtils_UndistortImagePoints",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_DistortionRende;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d12c0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>
* __cdecl TRenderCommandTag<`FCalibratedMapProcessor::ExecuteJob'::__l10::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCalibratedMapProcessor_ComputeDerivedDistortionData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FCalibratedMapProcessor_ComputeDerivedDistortionData",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCalibratedMapProcessor_ComputeDerivedDistortionData");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>_const_&___cdecl_TRenderCommandTag<_private:_void___cdecl_FCalibratedMapProcessor::ExecuteJob(TSharedPtr<FDerivedDistortionDataJob,1>)_::_10_::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FCalibratedMapProcessor_ComputeDerivedDistortionData",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FCalibratedMapP;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d1470

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>
* __cdecl TRenderCommandTag<`FCalibratedMapProcessor::Update'::__l2::TSTR_FCalibratedMapProcessor_Update_RenderThread112>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCalibratedMapProcessor_Update_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FCalibratedMapProcessor_Update_RenderThread","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FCalibratedMapProcessor_Update_RenderThread");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>_const_&___cdecl_TRenderCommandTag<_public:_virtual_void___cdecl_FCalibratedMapProcessor::Update(void)_::_2_::TSTR_FCalibratedMapProcessor_Update_RenderThread112>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FCalibratedMapProcessor_Update_RenderThread",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FCalibratedMapP;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d1620

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>
* __cdecl TRenderCommandTag<`LensFileUtils::CreateDisplacementMapRenderTarget'::__l2::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>_const_&___cdecl_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>_const_&___cdecl_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushRHIThreadToUpdateTextureRenderTargetReference");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"FlushRHIThreadToUpdateTextureRenderTargetReference",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>_const_&___cdecl_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"FlushRHIThreadToUpdateTextureRenderTargetReference");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>_const_&___cdecl_TRenderCommandTag<,UTextureRenderTarget2D_*___cdecl_LensFileUtils::CreateDisplacementMapRenderTarget(UObject_*,UE::Math::TIntPoint<int>)_::_2_::TSTR_FlushRHIThreadToUpdateTextureRenderTargetReference47>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"FlushRHIThreadToUpdateTextureRenderTargetReference",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_FlushRHIThreadT;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d17d0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>
* __cdecl TRenderCommandTag<`LensFileRendering::ClearDisplacementMap'::__l5::TSTR_LensFileRendering_ClearDisplacementMap61>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LensFileRendering_ClearDisplacementMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"LensFileRendering_ClearDisplacementMap","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LensFileRendering_ClearDisplacementMap");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>_const_&___cdecl_TRenderCommandTag<_void___cdecl_LensFileRendering::ClearDisplacementMap(UTextureRenderTarget2D_*)_::_5_::TSTR_LensFileRendering_ClearDisplacementMap61>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"LensFileRendering_ClearDisplacementMap",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LensFileRenderi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d1980

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>
* __cdecl TRenderCommandTag<`LensFileRendering::DrawBlendedDisplacementMap'::__l2::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LensFileRendering_DrawBlendedDisplacementMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                   L"LensFileRendering_DrawBlendedDisplacementMap","STATGROUP_RenderThreadCommands",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"LensFileRendering_DrawBlendedDisplacementMap");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_LensFileRendering::DrawBlendedDisplacementMap(UTextureRenderTarget2D_*,FDisplacementMapBlendingParams_const_&,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*,UTextureRenderTarget2D_*)_::_2_::TSTR_LensFileRendering_DrawBlendedDisplacementMap122>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"LensFileRendering_DrawBlendedDisplacementMap",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_LensFileRenderi;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14d6d1b30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>
* __cdecl TRenderCommandTag<`OverlayRendering::DrawCrosshairOverlay'::__l2::TSTR_OverlayRendering_CrosshairOverlay53>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OverlayRendering_CrosshairOverlay");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"OverlayRendering_CrosshairOverlay"
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"OverlayRendering_CrosshairOverlay");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>_const_&___cdecl_TRenderCommandTag<_bool___cdecl_OverlayRendering::DrawCrosshairOverlay(UTextureRenderTarget2D_*,FCrosshairOverlayParams_const_&)_::_2_::TSTR_OverlayRendering_CrosshairOverlay53>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,
                             L"OverlayRendering_CrosshairOverlay","STATGROUP_RenderThreadCommands",
                             "STATCAT_Advanced",L"Render Thread Commands",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_OverlayRenderin;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

