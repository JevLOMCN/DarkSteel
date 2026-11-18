// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// operator() @ 14d78e4c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>::operator()
          (void *this,FCaptureFrameArgs *param_1,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
          FRDGViewableResource *param_4)

{
  int iVar1;
  void *_Src;
  FOpenColorIOTransformResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType local_120;
  undefined8 local_118;
  FString local_110;
  TIntVector3<int>_u_0 local_100;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  longlong lStack_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_c0;
  FColorConversionPassArgs local_a8;
  TVector2<double> local_38;
  TVector2<double> local_28;
  
  if (param_3->Type != Texture) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputResource->Type == ERDGViewableResourceType::Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0x114,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_f4 = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_f0 = (undefined4)
              ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  lStack_e8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_cc = 0;
  local_100._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_ec = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_e0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uStack_d4 = 1;
  uStack_d0 = 0;
  local_c8 = 1;
  UE::MediaCapture::GetCopyInfo(param_1,(FRHICopyTextureInfo *)&local_100._s_0,&local_28,&local_38);
  local_a8._padding_ = CONCAT44(iStack_ec,uStack_f0);
  _Src = *(void **)((longlong)this + 8);
  local_a8.OCIOResources.TransformName.Data.ArrayNum = 0;
  local_a8.OCIOResources.TransformName.Data.ArrayMax = 0;
  local_a8._padding_ = CONCAT44(uStack_f4,local_100._s_0.Z);
  iVar1 = *(int *)((longlong)this + 0x10);
  local_a8._padding_._0_4_ = local_c8;
  pFVar2 = *(FOpenColorIOTransformResource **)this;
  local_a8.OCIOResources.TextureResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = CONCAT44(local_118._4_4_,iVar1);
  local_a8._padding_ = local_100._0_8_;
  local_a8._padding_ = CONCAT44(uStack_dc,local_e0);
  local_a8._padding_ = CONCAT44(uStack_d4,uStack_d8);
  local_a8._padding_ = lStack_e8;
  local_a8._padding_ = CONCAT44(uStack_cc,uStack_d0);
  local_a8._padding_ = (longlong)param_3;
  if (iVar1 == 0) {
    local_118 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,0,&local_120,iVar1,(int *)((longlong)&local_118 + 4));
    memcpy(local_120.Data,_Src,(longlong)iVar1 << 3);
  }
  ::FString::FString(&local_110,(FString *)((longlong)this + 0x18));
  local_a8.OCIOResources.ShaderResource = pFVar2;
  if (local_a8.OCIOResources.TextureResources.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.OCIOResources.TextureResources.AllocatorInstance.Data);
  }
  local_a8.OCIOResources.TextureResources.AllocatorInstance.Data = local_120.Data;
  local_a8.OCIOResources.TextureResources.ArrayNum = (int)local_118;
  local_a8.OCIOResources.TextureResources.ArrayMax = local_118._4_4_;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  if (local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data);
  }
  local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data =
       local_110.Data.AllocatorInstance.Data;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  local_c0.Object = param_2->Object;
  local_c0.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MediaCapture::FRenderPass::AddColorConversionPass(param_1,&local_c0,&local_a8,param_4);
  if (local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.OCIOResources.TransformName.Data.AllocatorInstance.Data);
  }
  if (local_a8.OCIOResources.TextureResources.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.OCIOResources.TextureResources.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14d78e720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>::operator()
          (void *this,FCaptureFrameArgs *param_1,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
          FRDGViewableResource *param_4)

{
  char cVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGScope *this_00;
  TIntVector3<int>_u_0 local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  FScreenPassTexture local_98;
  TRDGEventScopeGuard<FRDGScope_RHI> local_80;
  undefined1 local_70;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_> local_68;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  TVector2<double> local_38;
  TVector2<double> local_28;
  
  if (param_3->Type != Texture) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputResource->Type == ERDGViewableResourceType::Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0xfc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_d8._s_0.X = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  local_d8._s_0.Y = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  local_cc = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  local_c8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  local_c0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  local_bc = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  local_d8._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_c4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_b8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_b4 = 0;
  local_ac = 1;
  local_a4 = 0;
  local_a0 = 1;
  UE::MediaCapture::GetCopyInfo(param_1,(FRHICopyTextureInfo *)&local_d8._s_0,&local_28,&local_38);
  if (param_4->Type != Texture) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputTexture->Type == ERDGViewableResourceType::Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0x1e6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = false;
  local_70 = 0;
  cVar1 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_48 = 0x54d90600;
        uStack_44 = 1;
        ::Desc._padding_._0_4_ = 0x54d90600;
        ::Desc._padding_._4_4_ = uStack_4c;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        ::Desc._padding_._0_4_ = 0x1ea;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```UE::MediaCapture::FRenderPass::AddTextureResamplePass'::__l14::Desc::operator()<>'
               ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar2 = param_1->GraphBuilder;
    local_68._Myfirst._Val = &::Desc;
    local_80.State = (FRDGScopeState *)pFVar2;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar2->_padding_,(FRDGScope **)pFVar2);
    ((FState *)&pFVar2->_padding_)->Current = this_00;
    local_80.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar2,&local_68);
    if (*(bool *)((longlong)&pFVar2->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_);
    }
    bVar4 = true;
    local_70 = 1;
  }
  local_98.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)param_3[1].AccessModeState;
  local_98.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_98.Texture = (FRDGTexture *)param_3;
  UE::MediaCapture::Resample::AddResamplePass
            (param_1->GraphBuilder,&local_98,(FRDGTexture *)param_4);
  if (bVar4) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_80);
  }
  return;
}

// operator() @ 14d790e40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>::operator()
          (void *this,FCaptureFrameArgs *param_1,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
          FRDGViewableResource *param_4)

{
  UMediaCapture *pUVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  FMediaCaptureUserData **ppFVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TIntVector3<int>_u_0 local_d8;
  undefined8 local_cc;
  int local_c4;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  FMediaCaptureUserData *local_98;
  TReferenceControllerBase<1> *local_90;
  TVector2<double> local_88;
  TVector2<double> local_78;
  FMediaCaptureUserData *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar5 = &local_48;
  if (param_3->Type != Texture) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputResource->Type == ERDGViewableResourceType::Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0x140,L"");
    if (bVar3) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_d8._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_c4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_b8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_b4 = 0;
  local_a4 = 0;
  local_d8._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_cc = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_c0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_ac = 1;
  local_a0 = 1;
  UE::MediaCapture::GetCopyInfo(param_1,(FRHICopyTextureInfo *)&local_d8._s_0,&local_78,&local_88);
  if (param_2->Object == (FCaptureFrame *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  cVar4 = (**(code **)(param_2->Object->_padding_ + 0x20))();
  pUVar1 = (param_1->MediaCapture).field0_0x0.DebugPtr;
  lVar2 = pUVar1->_padding_;
  local_e8 = SUB84(local_78.field0_0x0._s_0.X,0);
  uStack_e4 = (undefined4)((ulonglong)local_78.field0_0x0._0_8_ >> 0x20);
  uStack_e0 = SUB84(local_78.field0_0x0._s_0.Y,0);
  uStack_dc = (undefined4)((ulonglong)local_78.field0_0x0._8_8_ >> 0x20);
  local_f8 = SUB84(local_88.field0_0x0._s_0.X,0);
  uStack_f4 = (undefined4)((ulonglong)local_88.field0_0x0._0_8_ >> 0x20);
  uStack_f0 = SUB84(local_88.field0_0x0._s_0.Y,0);
  uStack_ec = (undefined4)((ulonglong)local_88.field0_0x0._8_8_ >> 0x20);
  if (cVar4 == '\0') {
    pcVar7 = *(code **)(lVar2 + 0x3d8);
    if (param_2->Object == (FCaptureFrame *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_68 = (param_2->Object->UserData).Object;
    local_60 = (param_2->Object->UserData).SharedReferenceCount.ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_2->Object == (FCaptureFrame *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar8 = &local_38;
    ppFVar6 = &local_68;
    local_38 = local_f8;
    uStack_34 = uStack_f4;
    uStack_30 = uStack_f0;
    uStack_2c = uStack_ec;
    puVar5 = &local_28;
    local_28 = local_e8;
    uStack_24 = uStack_e4;
    uStack_20 = uStack_e0;
    uStack_1c = uStack_dc;
  }
  else {
    pcVar7 = *(code **)(lVar2 + 0x3e0);
    if (param_2->Object == (FCaptureFrame *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_98 = (param_2->Object->UserData).Object;
    local_90 = (param_2->Object->UserData).SharedReferenceCount.ReferenceController;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_2->Object == (FCaptureFrame *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar8 = &local_58;
    ppFVar6 = &local_98;
    local_58 = local_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    local_48 = local_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
  }
  (*pcVar7)(pUVar1,param_1->GraphBuilder,&param_2->Object->CaptureBaseData,ppFVar6,param_3,param_4,
            &local_d8,puVar5,puVar8);
  return;
}

// operator() @ 14d7910f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>::operator()
          (void *this,FCaptureFrameArgs *param_1,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
          FRDGViewableResource *param_4)

{
  EPixelFormat EVar1;
  char cVar2;
  FRDGBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  EPixelFormat EVar6;
  longlong lVar7;
  FRDGScope *this_00;
  bool bVar8;
  TIntVector3<int>_u_0 local_148;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  longlong lStack_130;
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  TRDGEventScopeGuard<FRDGScope_RHI> local_108;
  undefined1 local_f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_f0;
  TVector2<double>_u_0 local_e0;
  TVector2<double>_u_0 local_d0;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  FConversionPassArgs local_98;
  
  if ((param_3->Type != Texture) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputResource->Type == ERDGViewableResourceType::Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                         ,0x15a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_148._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_13c = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_138 = (undefined4)
               ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  lStack_130 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_114 = 0;
  local_148._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_134 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_128 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uStack_11c = 1;
  uStack_118 = 0;
  local_110 = 1;
  UE::MediaCapture::GetCopyInfo
            (param_1,(FRHICopyTextureInfo *)&local_148._s_0,(TVector2<double> *)&local_e0._s_0,
             (TVector2<double> *)&local_d0._s_0);
  EVar1 = ((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredPixelFormat;
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    lVar7 = (**(code **)(((param_1->ResourceToCapture).Reference)->_padding_ + 0x20))();
    EVar6 = *(EPixelFormat *)(lVar7 + 0x33);
  }
  else {
    EVar6 = (param_1->RDGResourceToCapture->Desc).field_0x33;
  }
  bVar5 = false;
  local_f8 = 0;
  cVar2 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_b0 = 0x54d906e0;
      uStack_ac = 1;
      ::Desc._padding_._0_4_ = 0x54d906e0;
      ::Desc._padding_._4_4_ = uStack_b4;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_MediaCapture_Co;
      ::Desc._padding_ = (longlong)u_MediaCapture_Co;
      ::Desc._padding_._0_4_ = 0x164;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(````UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>::
             operator()'::__l14::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar3 = param_1->GraphBuilder;
    local_f0._Myfirst._Val = &::Desc;
    local_108.State = (FRDGScopeState *)pFVar3;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar3->_padding_,(FRDGScope **)pFVar3);
    ((FState *)&pFVar3->_padding_)->Current = this_00;
    local_108.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar3,&local_f0);
    if (*(bool *)((longlong)&pFVar3->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar3->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar3->_padding_);
    }
    bVar5 = true;
    local_f8 = 1;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId358,"UMediaCapture::FormatConversion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
               ,0x166);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId358);
  }
  local_98._padding_ = CONCAT44(uStack_13c,local_148._s_0.Z);
  local_98._padding_ = CONCAT44(iStack_134,uStack_138);
  local_98._padding_ = local_148._0_8_;
  local_98._padding_ = CONCAT44(uStack_124,local_128);
  local_98._padding_ = CONCAT44(uStack_11c,uStack_120);
  local_98._padding_._0_4_ = local_110;
  local_98._padding_ = lStack_130;
  local_98._padding_ = CONCAT44(uStack_114,uStack_118);
  local_98.SizeU.field0_0x0._s_0.X = local_e0._s_0.X;
  local_98.SizeU.field0_0x0._s_0.Y = local_e0._s_0.Y;
  local_98.SizeV.field0_0x0._s_0.X = local_d0._s_0.X;
  local_98.SizeV.field0_0x0._s_0.Y = local_d0._s_0.Y;
  local_98._padding_ = (longlong)param_3;
  local_98.bRequiresFormatConversion = EVar1 != EVar6;
  UE::MediaCapture::FRenderPass::AddConversionPass(param_1,&local_98,param_4);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_108);
  }
  return;
}

// AddColorConversionPass @ 14d794700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MediaCapture::FRenderPass::AddColorConversionPass
          (FCaptureFrameArgs *param_1,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,
          FColorConversionPassArgs *param_3,FRDGViewableResource *param_4)

{
  int *piVar1;
  EMediaCapturePhase EVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FRDGBuilder *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  Type TVar13;
  bool bVar14;
  bool bVar15;
  ConstructionValues *pCVar16;
  FRDGScope *this;
  float fVar17;
  float fVar18;
  undefined1 auStackY_728 [32];
  undefined4 uStack_6cc;
  TRDGEventScopeGuard<FRDGScope_RHI> local_6c8;
  undefined1 local_6b8;
  FScreenPassRenderTarget local_6b0;
  FScreenPassTexture local_690;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_678;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_668;
  FScreenPassViewInfo local_658;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  double local_628;
  double dStack_620;
  double local_618;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  FSceneViewFamily *local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  FSceneViewOwner local_4b8;
  undefined4 local_4a8;
  undefined8 local_4a0;
  FLinearColor_u_0 local_498;
  FLinearColor_u_0 local_488;
  FLinearColor_u_0 local_478;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  ForAnyElementType local_428;
  undefined8 local_420;
  TBitArray<FDefaultBitArrayAllocator> local_418;
  undefined4 local_3f8;
  undefined4 local_3f4;
  void *local_3e8;
  undefined4 local_3e0;
  ForAnyElementType local_3d8;
  undefined4 local_3d0;
  int local_3cc;
  TBitArray<FDefaultBitArrayAllocator> local_3c8;
  undefined4 local_3a8;
  undefined4 local_3a4;
  void *local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined2 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined5 uStack_350;
  undefined3 uStack_34b;
  undefined4 local_348;
  undefined2 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  FEngineShowFlags local_318;
  ConstructionValues local_2d8;
  FSceneViewFamily local_238;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_728;
  bVar14 = FOpenColorIOColorConversionSettings::IsValid
                     (&(((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredCaptureOptions).
                       ColorConversionSettings);
  if ((!bVar14) &&
     (bVar14 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_253123326359109448>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                          ,0xb8,
                          "Args.MediaCapture->GetDesiredCaptureOptions().ColorConversionSettings.IsValid()"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_4->Type != Texture) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputResource->Type == FRDGTexture::StaticType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                          ,0xbb,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  piVar1 = (int *)((longlong)&param_3->_padding_ + 4);
  iVar4 = *piVar1;
  lVar9 = param_3->_padding_;
  uVar8 = *(undefined8 *)piVar1;
  lVar10 = param_3->_padding_;
  iVar5 = *(int *)((longlong)&param_3->_padding_ + 4);
  local_678.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_678.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_318.CustomShowFlags.NumBits = 0;
  local_318.CustomShowFlags.MaxBits = 0x80;
  local_318._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_318._8_8_ = _UNK_15060db28;
  local_318._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_318._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&local_318,ESFIM_Game);
  local_318.Pivot = 0;
  local_318.LightInfluences = 0;
  local_318.HitProxies = 0;
  local_318.Bounds = 0;
  local_318.ModeWidgets = 0;
  local_318.EditingLevelInstance = 0;
  local_318.Selection = 0;
  local_318.Splines = 0;
  local_318.Cover = 0;
  local_318.MeshEdges = 0;
  local_318.Snap = 0;
  local_318.Grid = 0;
  local_318.LargeVertices = 0;
  local_318.Editor = 0;
  local_318.Brushes = 0;
  local_318.BSPSplit = 0;
  local_318.AudioRadius = 0;
  local_318.CameraFrustums = 0;
  local_318.MassProperties = 0;
  local_318.Constraints = 0;
  local_318.StreamingBounds = 0;
  local_318.LightMapDensity = 0;
  local_318.StationaryLightOverlap = 0;
  local_318.ShaderComplexity = 0;
  local_318.LightComplexity = 0;
  local_318.VisualizeInstanceUpdates = 0;
  local_318.HISMCClusterTree = 0;
  local_318.HISMCOcclusionBounds = 0;
  local_318.Navigation = 0;
  local_318.DebugAI = 0;
  local_318.VisualizeSSS = 0;
  local_318.SelectionOutline = 0;
  local_318.DisableOcclusionQueries = 0;
  local_318.VisualizeInstanceOcclusionQueries = 0;
  local_318.OcclusionMeshes = 0;
  local_318.VREditing = 0;
  local_318.ServerDrawDebug = 0;
  local_318.Bones = 0;
  local_318.VisualizeVirtualTexture = 0;
  local_318.RequiredTextureResolution = 0;
  local_318.OutputMaterialTextureScales = 0;
  local_318.MaterialTextureScaleAccuracy = 0;
  local_318.MeshUVDensityAccuracy = 0;
  local_318.PrimitiveDistanceAccuracy = 0;
  local_318.ShaderComplexityWithQuadOverdraw = 0;
  local_318.QuadOverdraw = 0;
  local_318.HLODColoration = 0;
  local_318.LODColoration = 0;
  local_318.VisualizeShadingModels = 0;
  local_318.VisualizeSSR = 0;
  local_318.VisualizeLightingOnProbes = 0;
  local_318.VisualizeGlobalDistanceField = 0;
  local_318.PhysicsField = 0;
  local_318.VisualizeMeshDistanceFields = 0;
  local_318.VisualizeDistanceFieldAO = 0;
  local_318.VolumeLightingSamples = 0;
  local_318.VisualizeVolumetricLightmap = 0;
  local_318.PrecomputedVisibilityCells = 0;
  local_318.VisualizeLightCulling = 0;
  local_318.DistanceCulledPrimitives = 0;
  local_318.StereoRendering = 0;
  local_318.HMDDistortion = 0;
  local_318.HighResScreenshotMask = 0;
  local_318.CameraSafeFrames = 0;
  local_318.CameraAspectRatioBars = 0;
  local_318.CollisionPawn = 0;
  local_318.CollisionVisibility = 0;
  local_318.Collision = 0;
  local_318.ActorColoration = 0;
  local_318.Game = 1;
  local_318.Volumes = 0;
  local_318.LightRadius = 0;
  local_318.Wireframe = 0;
  local_318.ShadowFrustums = 0;
  local_318.VisualizeOutOfBoundsPixels = 0;
  local_318.VisualizeTSR = 0;
  local_318.VisualizeTemporalUpscaler = 0;
  local_318.VisualizeReprojection = 0;
  local_318.VisualizeMotionVectors = 0;
  local_318.VisualizeMotionBlur = 0;
  local_318.ScreenPercentage = 1;
  local_318.PhysicalMaterialMasks = 0;
  local_318.VertexColors = 0;
  local_318.VisualizeDOF = 0;
  local_318.TestImage = 0;
  local_318.OpaqueCompositeEditorPrimitives = 0;
  local_318.CompositeEditorPrimitives = 0;
  local_318.CompositeDebugPrimitives = 1;
  local_318.MotionBlur = 1;
  local_318.GBufferHints = 0;
  local_318.VectorFields = 0;
  local_318.VisualizeVirtualShadowMap = 0;
  local_318.VisualizeGroom = 0;
  local_318.VisualizeSubstrate = 0;
  local_318.VisualizeLumen = 0;
  local_318.VisualizeNanite = 0;
  local_318.VisualizeBuffer = 0;
  local_318.MaterialAmbientOcclusion = 1;
  local_318.MaterialNormal = 1;
  local_318.ReflectionOverride = 0;
  local_318.LightingOnlyOverride = 0;
  local_318.OverrideDiffuseAndSpecular = 0;
  local_318.VisualizeLocalExposure = 0;
  local_318.VisualizeLocalFogVolumes = 0;
  local_318.VisualizeSkyLightIlluminance = 0;
  local_318.VisualizeHDR = 0;
  local_318.RandomColor = 0;
  local_318.FrontBackFace = 0;
  local_318.Zebra = 0;
  local_318.Clay = 0;
  local_318.StereoMotionVectors = 0;
  local_318.AlphaInvert = 0;
  local_318.SceneCaptureCopySceneDepth = 1;
  local_318.VisualizeShadowCasters = 0;
  local_318.VisualizeLWCComplexity = 0;
  local_318.VisualizeGPUSkinCache = 0;
  local_318.LumenShortRangeAmbientOcclusion = 1;
  local_318.LumenSecondaryBounces = 1;
  local_318.LumenFarFieldTraces = 1;
  local_318.LumenGlobalTraces = 1;
  local_318.LumenDetailTraces = 1;
  local_318.LumenScreenTraces = 1;
  local_318.DebugDrawDistantVirtualSMLights = 0;
  local_318.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_318.VisualizeVolumetricCloudConservativeDensity = 0;
  local_318.VirtualTexturePrimitives = 0;
  local_318.VisualizePostProcessStack = 0;
  local_318.VisualizeCalibrationCustom = 0;
  local_318.VisualizeCalibrationGrayscale = 0;
  local_318.VisualizeCalibrationColor = 0;
  local_318.VisualizeLightFunctionAtlas = 0;
  local_318.VisualizeSkyAtmosphere = 0;
  local_318.RayTracingDebug = 0;
  local_318.PathTracing = 0;
  pCVar16 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_2d8,(FRenderTarget *)0x0,(FSceneInterface *)0x0,&local_318,&local_678)
  ;
  (pCVar16->Time).RealTimeSeconds = 0.0;
  (pCVar16->Time).WorldTimeSeconds = 0.0;
  (pCVar16->Time).DeltaRealTimeSeconds = 0.0;
  (pCVar16->Time).DeltaWorldTimeSeconds = 0.0;
  pCVar16->bTimesSet = 1;
  FSceneViewFamily::FSceneViewFamily(&local_238,pCVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_2d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_318.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_318.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  local_4e0 = 0;
  local_598 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_590 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_518 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_510 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_508 = 0;
  uStack_500 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_628 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_620 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_618 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_608 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_600 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_5f8 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_5f0 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_5e8 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_5e0 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_5d8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_5d0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_5c8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_5c0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_5b8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_5b0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_5a8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_5a0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_588 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_580 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_578 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_570 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_568 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_560 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_558 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_550 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_548 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_540 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_538 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_530 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_528 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_520 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_4f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4d8 = 0;
  local_4d0 = (FSceneViewFamily *)0x0;
  FSceneViewOwner::FSceneViewOwner(&local_4b8,(AActor *)0x0);
  local_4a8 = 0xffffffff;
  local_4a0 = 0;
  local_498 = FLinearColor::Transparent.field0_0x0;
  local_488 = FLinearColor::Transparent.field0_0x0;
  local_468 = 0;
  local_368 = 0;
  local_478 = FLinearColor::White.field0_0x0;
  local_458 = 0;
  uStack_450 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_464 = 0xffffffff;
  local_460 = 0x42c80000;
  local_428.Data = (FScriptContainerElement *)0x0;
  local_420 = 0;
  local_418.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_418.NumBits = 0;
  local_418.MaxBits = 0x80;
  local_3f8 = 0xffffffff;
  local_3f4 = 0;
  local_3e8 = (void *)0x0;
  local_3e0 = 0;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = 0;
  local_3cc = -1;
  local_3c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3c8.NumBits = 0;
  local_3c8.MaxBits = 0x80;
  local_3a8 = 0xffffffff;
  local_3a4 = 0;
  local_398 = (void *)0x0;
  local_390 = 0;
  local_388 = 0xffffffffffffffff;
  local_380 = 0x3f800000;
  local_37c = 0xbf800000;
  local_360 = 0x100;
  local_35c = 0x42b40000;
  local_4d0 = &local_238;
  local_328 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_320 = _UNK_15076b1f8;
  uStack_500 = CONCAT44(iVar5 + (int)lVar9,iVar4 + (int)lVar10);
  local_628 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_620 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_618 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_598 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_590 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_518 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_510 = UE::Math::TMatrix<double>::Identity.M[3][3];
  _local_358 = CONCAT44(0x3f800000,(int)___xmm_00000000000000000000000042b40000);
  _uStack_350 = CONCAT35((int3)((ulonglong)_UNK_150ee30d8 >> 0x28),0x3f800000);
  local_348 = 0;
  local_344 = 0;
  local_340 = 0xbf800000;
  local_33c = 0x3f800000;
  local_338 = 0x3f800000;
  local_608 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_600 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_5f8 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_5f0 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_5e8 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_5e0 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_5d8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_5d0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_5c8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_5c0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_5b8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_5b0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_5a8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_5a0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_588 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_580 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_578 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_570 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_568 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_560 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_558 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_550 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_548 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_540 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_538 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_530 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_528 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_520 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_508 = uVar8;
  local_4e0 = uVar8;
  local_4d8 = uStack_500;
  if ((GEngine->DisplayGamma == 0.0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine->DisplayGamma != 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                          ,0xcd,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar12 = __real_400ccccd;
  fVar17 = __real_400ccccd / GEngine->DisplayGamma;
  EVar2 = (((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredCaptureOptions).CapturePhase;
  fVar18 = fVar12;
  if (((((EVar2 != BeforePostProcessing) && (EVar2 != AfterMotionBlur)) &&
       (fVar18 = fVar17, EVar2 != AfterToneMap)) && ((EVar2 != AfterFXAA && (EVar2 != EndFrame))))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                             ,0xe2,L""), fVar18 = fVar12, bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar14 = false;
  local_6b8 = 0;
  cVar3 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_638 = 0x54d90670;
      uStack_634 = 1;
      ::Desc._padding_._0_4_ = 0x54d90670;
      ::Desc._padding_._4_4_ = uStack_63c;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_MediaCapture_Co;
      ::Desc._padding_ = (longlong)u_MediaCapture_Co;
      ::Desc._padding_._0_4_ = 0xe6;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::MediaCapture::FRenderPass::AddColorConversionPass'::__l30::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar6 = param_1->GraphBuilder;
    local_668._Myfirst._Val = &::Desc;
    local_6c8.State = (FRDGScopeState *)pFVar6;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&pFVar6->_padding_,(FRDGScope **)pFVar6);
    ((FState *)&pFVar6->_padding_)->Current = this;
    local_6c8.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)pFVar6,&local_668);
    if (*(bool *)((longlong)&pFVar6->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)pFVar6->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)pFVar6->_padding_);
    }
    bVar14 = true;
    local_6b8 = 1;
  }
  TVar13 = GMaxRHIFeatureLevel;
  local_6b0._padding_ = *(longlong *)&param_4[1].AccessModeState;
  local_690.Texture = (FRDGTexture *)param_3->_padding_;
  local_6b0._padding_ = 0;
  local_6b0.LoadAction = EClear;
  local_690.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_690.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  if (local_690.Texture != (FRDGTexture *)0x0) {
    local_690.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(undefined8 *)&((local_690.Texture)->Desc).field_0x24;
  }
  local_6b0._padding_ = (longlong)param_4;
  bVar15 = IsHMDHiddenAreaMaskActive();
  uStack_6cc = CONCAT31(uStack_6cc._1_3_,bVar15);
  local_658.StereoViewIndex = -1;
  local_658.FeatureLevel = TVar13;
  local_658._12_4_ = uStack_6cc;
  local_658.InstanceCount = 1;
  FOpenColorIORendering::AddPass_RenderThread
            (param_1->GraphBuilder,&local_658,TVar13,&local_690,&local_6b0,&param_3->OCIOResources,
             fVar18,None);
  if (bVar14) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6c8);
  }
  if (local_3cc != -1) {
    local_390 = 0;
    if (local_398 != (void *)0x0) {
      FMemory::Free(local_398);
    }
    local_3d0 = 0;
    if (local_3cc != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_3d8,0,&local_3cc);
    }
    local_3a8 = 0xffffffff;
    local_3a4 = 0;
    local_3c8.NumBits = 0;
    if (0x80 < (uint)local_3c8.MaxBits) {
      local_3c8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3c8,0);
    }
    if (local_3c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_3c8.AllocatorInstance.SecondaryData);
    }
    if (local_3d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data);
    }
  }
  local_3e0 = 0;
  if (local_3e8 != (void *)0x0) {
    FMemory::Free(local_3e8);
  }
  uVar11 = local_420 >> 0x20;
  local_420 = local_420 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_428,0,(int *)((longlong)&local_420 + 4));
  }
  local_3f8 = 0xffffffff;
  local_3f4 = 0;
  local_418.NumBits = 0;
  if (0x80 < (uint)local_418.MaxBits) {
    local_418.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_418,0);
  }
  if (local_418.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_418.AllocatorInstance.SecondaryData);
  }
  if (local_428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data);
  }
  FSceneViewFamily::~FSceneViewFamily(&local_238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddConversionPass @ 14d7950f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::MediaCapture::FRenderPass::AddConversionPass
          (FCaptureFrameArgs *param_1,FConversionPassArgs *param_2,FRDGViewableResource *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UMediaCapture *pUVar4;
  longlong lVar5;
  FAccessModeState FVar6;
  undefined8 uVar7;
  FAccessModeState FVar8;
  undefined8 uVar9;
  FRDGBuilder *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  Type TVar13;
  TRefCountPtr<FRHIBlendState> TVar14;
  TRefCountPtr<FRHIDepthStencilState> TVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FGlobalShaderMap *this;
  FShaderType *pFVar20;
  FName FVar21;
  TMatrix<double> *pTVar22;
  FParameters *pFVar23;
  FParameters *pFVar24;
  FParameters *pFVar25;
  FRDGEventName *pFVar26;
  FShaderParametersMetadata *pFVar27;
  int iVar28;
  int iVar29;
  EMediaCaptureConversionOperation EVar30;
  uint7 uStack_3ff;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_390;
  Type local_380 [3];
  undefined1 local_374;
  undefined2 local_373;
  undefined1 local_371;
  FAccessModeState local_370;
  undefined8 local_368;
  FAccessModeState local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  FShader *local_340;
  FShaderMapBase *pFStack_338;
  FShader *local_330;
  FShaderMapBase *pFStack_328;
  FRHIBlendState *local_320;
  FRHIDepthStencilState *pFStack_318;
  undefined8 local_310;
  longlong lStack_308;
  FShader *local_300;
  FShaderMapBase *local_2f8;
  FParameters *local_2f0;
  undefined1 local_2e8;
  Type local_2e0 [3];
  undefined1 local_2d4;
  undefined2 local_2d3;
  undefined1 local_2d1;
  FAccessModeState local_2d0;
  undefined8 local_2c8;
  FAccessModeState local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  FShader *local_2a0;
  FShaderMapBase *pFStack_298;
  FShader *local_290;
  FShaderMapBase *pFStack_288;
  FRHIBlendState *local_280;
  FRHIDepthStencilState *pFStack_278;
  undefined8 local_270;
  longlong lStack_268;
  FShader *local_260;
  FShaderMapBase *local_258;
  FParameters *local_250;
  undefined1 local_248;
  Type local_240 [3];
  undefined1 local_234;
  undefined2 local_233;
  undefined1 local_231;
  FAccessModeState local_230;
  undefined8 local_228;
  FAccessModeState local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  FShader *local_200;
  FShaderMapBase *pFStack_1f8;
  FShader *local_1f0;
  FShaderMapBase *pFStack_1e8;
  FRHIBlendState *local_1e0;
  FRHIDepthStencilState *pFStack_1d8;
  undefined8 local_1d0;
  longlong lStack_1c8;
  FShader *local_1c0;
  FShaderMapBase *local_1b8;
  FParameters *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [21];
  undefined2 local_17b;
  undefined1 local_179;
  FString local_178;
  initializer_list<FRDGResource_*> local_168;
  undefined2 local_14b;
  undefined1 local_149;
  FString local_148;
  initializer_list<FRDGResource_*> local_138;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined1 local_d0 [8];
  FString local_c8;
  initializer_list<FRDGResource_*> local_b8;
  FString local_a8;
  FRDGEventName local_98;
  FRDGEventName local_80;
  FRDGEventName local_68;
  
  if (param_3->Type == Buffer) {
    return;
  }
  if ((param_3->Type != Texture) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputResource->Type == FRDGTexture::StaticType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                          ,0x199,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar2 = (int)param_2->_padding_;
  piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
  iVar3 = *piVar1;
  uVar12 = *(undefined8 *)piVar1;
  uVar7 = *(undefined8 *)piVar1;
  uVar9 = *(undefined8 *)piVar1;
  pUVar4 = (param_1->MediaCapture).field0_0x0.DebugPtr;
  bVar16 = param_2->bRequiresFormatConversion;
  iVar29 = (int)param_2->_padding_ + iVar3;
  iVar28 = iVar2 + *(int *)((longlong)&param_2->_padding_ + 4);
  if ((pUVar4->ConversionOperation == NONE) && (bVar16 == false)) {
    AddCopyTexturePass(param_1->GraphBuilder,(FRDGTexture *)param_2->_padding_,
                       (FRDGTexture *)param_3,(FRHICopyTextureInfo *)&param_2->_padding_);
    return;
  }
  bVar18 = (pUVar4->DesiredCaptureOptions).bApplyLinearToSRGBConversion;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar20 = (FShaderType *)FScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_3f0,pFVar20,0);
  if (local_3f0.ShaderContent == (FShader *)0x0) {
    FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1a0);
    ::FName::ToString((FName *)FVar21,&local_a8);
    FScreenPassVS::GetStaticType();
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FScreenPassVS::GetStaticType();
  pTVar22 = (TMatrix<double> *)
            (**(code **)(((param_1->MediaCapture).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  EVar30 = ((param_1->MediaCapture).field0_0x0.DebugPtr)->ConversionOperation;
  if (EVar30 != NONE) {
    if (EVar30 != RGBA8_TO_YUV_8BIT) {
      if (EVar30 != RGB10_TO_YUVv210_10BIT) {
        if (((EVar30 != INVERT_ALPHA) && (EVar30 != SET_ALPHA_ONE)) && (bVar16 == false)) {
          return;
        }
        goto LAB_14d7952df;
      }
      lVar5 = param_2->_padding_;
      if (lVar5 == 0) {
LAB_14d795420:
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTexture.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                            ,0xab,L"");
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else {
        iVar19 = iVar29;
        if (iVar29 < *(int *)(lVar5 + 0x150)) {
          iVar19 = *(int *)(lVar5 + 0x150);
        }
        *(int *)(lVar5 + 0x150) = iVar19;
        iVar19 = iVar28;
        if (iVar28 < *(int *)(lVar5 + 0x154)) {
          iVar19 = *(int *)(lVar5 + 0x154);
        }
        *(int *)(lVar5 + 0x154) = iVar19;
        if ((iVar29 == iVar3) && (iVar28 == iVar2)) goto LAB_14d795420;
      }
      FVar6 = param_3[1].AccessModeState;
      uVar9 = *(undefined8 *)(lVar5 + 0xa4);
      local_110 = 0;
      if (((FVar6.Access == None) && (FVar6._4_4_ == 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InTexture.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                              ,0xab,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar8 = param_3[1].AccessModeState;
      pFVar20 = (FShaderType *)FRGB10toYUVv210ConvertPS::GetStaticType();
      FGlobalShaderMap::GetShader(this,&local_3e0,pFVar20,0);
      if (local_3e0.ShaderContent == (FShader *)0x0) {
        FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_198);
        ::FName::ToString((FName *)FVar21,&local_c8);
        FRGB10toYUVv210ConvertPS::GetStaticType();
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FRGB10toYUVv210ConvertPS::GetStaticType();
      pFVar23 = FRGB10toYUVv210ConvertPS::AllocateAndSetParameters
                          ((FRGB10toYUVv210ConvertPS *)local_3e0.ShaderContent,param_1->GraphBuilder
                           ,(FRDGTexture *)param_2->_padding_,pTVar22,&MediaShaders::YUVOffset10bits
                           ,bVar18,(FRDGTexture *)param_3);
      TVar13 = GMaxRHIFeatureLevel;
      bVar16 = IsHMDHiddenAreaMaskActive();
      pFVar26 = FRDGEventName::FRDGEventName(&local_98,1,L"RGBToYUVv210");
      TVar15 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI;
      TVar14 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI;
      pFVar10 = param_1->GraphBuilder;
      if ((local_3f0.ShaderContent == (FShader *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("VertexShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x206,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((local_3e0.ShaderContent == (FShader *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x207,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((pFVar23 == (FParameters *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShaderParameters",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x208,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar27 = FRGB10toYUVv210ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
      local_3b0.ShaderContent = local_3e0.ShaderContent;
      local_3b0.ShaderMap = local_3e0.ShaderMap;
      ValidateShaderParameters(&local_3b0,pFVar27,pFVar23);
      local_b8._First = (FRDGResource **)0x0;
      local_b8._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&(local_3e0.ShaderContent)->Bindings,pFVar27,pFVar23,&local_b8);
      local_2e0[0] = TVar13;
      local_2d3 = local_17b;
      local_2d1 = local_179;
      local_2c8 = local_110;
      local_2a0 = local_3f0.ShaderContent;
      pFStack_298 = local_3f0.ShaderMap;
      local_290 = local_3e0.ShaderContent;
      pFStack_288 = local_3e0.ShaderMap;
      lStack_268 = (ulonglong)uStack_3ff << 8;
      local_2e0[1] = 0xffffffff;
      local_2e0[2] = 1;
      local_280 = TVar14.Reference;
      pFStack_278 = TVar15.Reference;
      local_260 = local_3e0.ShaderContent;
      local_270 = GFilterVertexDeclaration._32_8_;
      local_258 = local_3e0.ShaderMap;
      local_248 = 0;
      local_2d4 = bVar16;
      local_2d0 = FVar8;
      local_2c0 = FVar6;
      local_2b8 = uVar9;
      local_2b0 = uVar7;
      local_2a8 = CONCAT44(iVar28,iVar29);
      local_250 = pFVar23;
      pFVar27 = FRGB10toYUVv210ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGBuilder::
      AddPassInternal<FRGB10toYUVv210ConvertPS::FParameters,_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>_>
                (pFVar10,pFVar26,pFVar27,pFVar23,Raster,(<lambda_1> *)local_2e0);
      local_68.FormattedEventName.Data.AllocatorInstance.Data =
           local_98.FormattedEventName.Data.AllocatorInstance.Data;
      goto LAB_14d795f60;
    }
    lVar5 = param_2->_padding_;
    if (lVar5 == 0) {
LAB_14d795841:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L"");
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else {
      iVar19 = iVar29;
      if (iVar29 < *(int *)(lVar5 + 0x150)) {
        iVar19 = *(int *)(lVar5 + 0x150);
      }
      *(int *)(lVar5 + 0x150) = iVar19;
      iVar19 = iVar28;
      if (iVar28 < *(int *)(lVar5 + 0x154)) {
        iVar19 = *(int *)(lVar5 + 0x154);
      }
      *(int *)(lVar5 + 0x154) = iVar19;
      if ((iVar29 == iVar3) && (iVar28 == iVar2)) goto LAB_14d795841;
    }
    FVar6 = param_3[1].AccessModeState;
    uVar9 = *(undefined8 *)(lVar5 + 0xa4);
    local_f8 = 0;
    if (((FVar6.Access == None) && (FVar6._4_4_ == 0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTexture.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                            ,0xab,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar8 = param_3[1].AccessModeState;
    pFVar20 = (FShaderType *)FRGB8toUYVY8ConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_3d0,pFVar20,0);
    if (local_3d0.ShaderContent == (FShader *)0x0) {
      FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_190);
      ::FName::ToString((FName *)FVar21,&local_178);
      FRGB8toUYVY8ConvertPS::GetStaticType();
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FRGB8toUYVY8ConvertPS::GetStaticType();
    pFVar24 = FRGB8toUYVY8ConvertPS::AllocateAndSetParameters
                        ((FRGB8toUYVY8ConvertPS *)local_3d0.ShaderContent,param_1->GraphBuilder,
                         (FRDGTexture *)param_2->_padding_,pTVar22,&MediaShaders::YUVOffset8bits,
                         bVar18,(FRDGTexture *)param_3);
    TVar13 = GMaxRHIFeatureLevel;
    bVar16 = IsHMDHiddenAreaMaskActive();
    pFVar26 = FRDGEventName::FRDGEventName(&local_80,1,L"RGBToUYVY 8 bit");
    TVar15 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI;
    TVar14 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI;
    pFVar10 = param_1->GraphBuilder;
    if ((local_3f0.ShaderContent == (FShader *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x206,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((local_3d0.ShaderContent == (FShader *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x207,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pFVar24 == (FParameters *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShaderParameters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x208,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar27 = FRGB8toUYVY8ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
    local_3a0.ShaderContent = local_3d0.ShaderContent;
    local_3a0.ShaderMap = local_3d0.ShaderMap;
    ValidateShaderParameters(&local_3a0,pFVar27,pFVar24);
    local_168._First = (FRDGResource **)0x0;
    local_168._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_3d0.ShaderContent)->Bindings,pFVar27,pFVar24,&local_168);
    local_240[0] = TVar13;
    local_233 = local_14b;
    local_231 = local_149;
    local_228 = local_f8;
    local_200 = local_3f0.ShaderContent;
    pFStack_1f8 = local_3f0.ShaderMap;
    local_1f0 = local_3d0.ShaderContent;
    pFStack_1e8 = local_3d0.ShaderMap;
    lStack_1c8 = (ulonglong)uStack_3ff << 8;
    local_240[1] = 0xffffffff;
    local_240[2] = 1;
    local_1e0 = TVar14.Reference;
    pFStack_1d8 = TVar15.Reference;
    local_1c0 = local_3d0.ShaderContent;
    local_1d0 = GFilterVertexDeclaration._32_8_;
    local_1b8 = local_3d0.ShaderMap;
    local_1a8 = 0;
    local_234 = bVar16;
    local_230 = FVar8;
    local_220 = FVar6;
    local_218 = uVar9;
    local_210 = uVar12;
    local_208 = CONCAT44(iVar28,iVar29);
    local_1b0 = pFVar24;
    pFVar27 = FRGB8toUYVY8ConvertPS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGBuilder::
    AddPassInternal<FRGB8toUYVY8ConvertPS::FParameters,_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>_>
              (pFVar10,pFVar26,pFVar27,pFVar24,Raster,(<lambda_1> *)local_240);
    local_68.FormattedEventName.Data.AllocatorInstance.Data =
         local_80.FormattedEventName.Data.AllocatorInstance.Data;
    goto LAB_14d795f60;
  }
LAB_14d7952df:
  lVar5 = param_2->_padding_;
  if (lVar5 == 0) {
LAB_14d795332:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                        ,0xab,L"");
    if (bVar16) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    iVar19 = iVar29;
    if (iVar29 < *(int *)(lVar5 + 0x150)) {
      iVar19 = *(int *)(lVar5 + 0x150);
    }
    *(int *)(lVar5 + 0x150) = iVar19;
    iVar19 = iVar28;
    if (iVar28 < *(int *)(lVar5 + 0x154)) {
      iVar19 = *(int *)(lVar5 + 0x154);
    }
    *(int *)(lVar5 + 0x154) = iVar19;
    if ((iVar29 == iVar3) && (iVar28 == iVar2)) goto LAB_14d795332;
  }
  FVar6 = param_3[1].AccessModeState;
  uVar7 = *(undefined8 *)(lVar5 + 0xa4);
  local_e0 = 0;
  if (((FVar6.Access == None) && (FVar6._4_4_ == 0)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar8 = param_3[1].AccessModeState;
  pUVar4 = (param_1->MediaCapture).field0_0x0.DebugPtr;
  if ((pUVar4->DesiredCaptureOptions).bForceAlphaToOneOnConversion == false) {
    EVar30 = pUVar4->ConversionOperation;
    if ((('\x04' < (char)EVar30) || ((char)EVar30 < '\0')) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("PermutationId < PermutationCount && PermutationId >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                            ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    EVar30 = SET_ALPHA_ONE;
  }
  pFVar20 = (FShaderType *)FModifyAlphaSwizzleRgbaPS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_3c0,pFVar20,(int)(char)EVar30);
  if (local_3c0.ShaderContent == (FShader *)0x0) {
    FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
    ::FName::ToString((FName *)FVar21,&local_148);
    FModifyAlphaSwizzleRgbaPS::GetStaticType();
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (bVar16) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FModifyAlphaSwizzleRgbaPS::GetStaticType();
  pFVar25 = FModifyAlphaSwizzleRgbaPS::AllocateAndSetParameters
                      ((FModifyAlphaSwizzleRgbaPS *)local_3c0.ShaderContent,param_1->GraphBuilder,
                       (FRDGTexture *)param_2->_padding_,(FRDGTexture *)param_3);
  TVar13 = GMaxRHIFeatureLevel;
  bVar16 = IsHMDHiddenAreaMaskActive();
  pFVar26 = FRDGEventName::FRDGEventName(&local_68,1,L"MediaCaptureSwizzle");
  TVar15 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
  TVar14 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
  pFVar10 = param_1->GraphBuilder;
  if ((local_3f0.ShaderContent == (FShader *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x206,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((local_3c0.ShaderContent == (FShader *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x207,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((pFVar25 == (FParameters *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShaderParameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x208,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar27 = FModifyAlphaSwizzleRgbaPS::FParameters::FTypeInfo::GetStructMetadata();
  local_390.ShaderContent = local_3c0.ShaderContent;
  local_390.ShaderMap = local_3c0.ShaderMap;
  ValidateShaderParameters(&local_390,pFVar27,pFVar25);
  local_138._First = (FRDGResource **)0x0;
  local_138._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_3c0.ShaderContent)->Bindings,pFVar27,pFVar25,&local_138);
  local_380[0] = TVar13;
  local_373 = local_11b;
  local_371 = local_119;
  local_368 = local_e0;
  local_340 = local_3f0.ShaderContent;
  pFStack_338 = local_3f0.ShaderMap;
  local_330 = local_3c0.ShaderContent;
  pFStack_328 = local_3c0.ShaderMap;
  lStack_308 = (ulonglong)uStack_3ff << 8;
  local_380[1] = 0xffffffff;
  local_380[2] = 1;
  local_320 = TVar14.Reference;
  pFStack_318 = TVar15.Reference;
  local_300 = local_3c0.ShaderContent;
  local_310 = GFilterVertexDeclaration._32_8_;
  local_2f8 = local_3c0.ShaderMap;
  local_2e8 = 0;
  local_374 = bVar16;
  local_370 = FVar8;
  local_360 = FVar6;
  local_358 = uVar7;
  local_350 = uVar9;
  local_348 = CONCAT44(iVar28,iVar29);
  local_2f0 = pFVar25;
  pFVar27 = FModifyAlphaSwizzleRgbaPS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FModifyAlphaSwizzleRgbaPS::FParameters,_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>_>
            (pFVar10,pFVar26,pFVar27,pFVar25,Raster,(<lambda_1> *)local_380);
LAB_14d795f60:
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// AddTextureResamplePass @ 14d796900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::MediaCapture::FRenderPass::AddTextureResamplePass
          (FCaptureFrameArgs *param_1,FBaseRenderPassArgs *param_2,FRDGViewableResource *param_3)

{
  char cVar1;
  FRDGBuilder *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGScope *this;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_> local_68;
  TRDGEventScopeGuard<FRDGScope_RHI> local_58;
  undefined1 local_48;
  FScreenPassTexture local_40;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_3->Type != Texture) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputTexture->Type == ERDGViewableResourceType::Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0x1e6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = false;
  local_48 = 0;
  cVar1 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_18 = 0x54d90600;
        uStack_14 = 1;
        ::Desc._padding_._0_4_ = 0x54d90600;
        ::Desc._padding_._4_4_ = uStack_1c;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        ::Desc._padding_._0_4_ = 0x1ea;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```UE::MediaCapture::FRenderPass::AddTextureResamplePass'::__l14::Desc::operator()<>'
               ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar2 = param_1->GraphBuilder;
    local_68._Myfirst._Val = &::Desc;
    local_58.State = (FRDGScopeState *)pFVar2;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&pFVar2->_padding_,(FRDGScope **)pFVar2);
    ((FState *)&pFVar2->_padding_)->Current = this;
    local_58.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)pFVar2,&local_68);
    if (*(bool *)((longlong)&pFVar2->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)pFVar2->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)pFVar2->_padding_);
    }
    bVar4 = true;
    local_48 = 1;
  }
  local_40.Texture = param_2->SourceRGBTexture;
  local_40.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_40.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  if (local_40.Texture != (FRDGTexture *)0x0) {
    local_40.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(undefined8 *)&((local_40.Texture)->Desc).field_0x24;
  }
  Resample::AddResamplePass(param_1->GraphBuilder,&local_40,(FRDGTexture *)param_3);
  if (bVar4) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_58);
  }
  return;
}

// CreateColorConversionPass @ 14d79ec40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRenderPass * __cdecl
UE::MediaCapture::FRenderPass::CreateColorConversionPass
          (FRenderPass *__return_storage_ptr__,UMediaCapture *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FOpenColorIORenderPassResources *pFVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  undefined1 local_80 [24];
  ForAnyElementType local_68;
  FOpenColorIORenderPassResources local_58;
  
  *(undefined8 *)&__return_storage_ptr__->InitializePassOutputDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->ExecutePassDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->OutputType = Texture;
  ::FName::FName(&local_res8,"ColorConversion");
  __return_storage_ptr__->Name = local_res8;
  __return_storage_ptr__->OutputType = Texture;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  local_68.Data = (FScriptContainerElement *)&local_90;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_90);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = InitializeColorConversionPassOutputTexture;
  }
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  iVar4 = local_90.DelegateSize;
  FVar3 = local_90.DelegateAllocator;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)local_80);
  if ((*(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 != 0) &&
     (puVar6 = *(undefined8 **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,
     puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
  }
  pvVar2 = *(void **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)
   &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = FVar3;
  *(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = iVar4;
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  local_58.TextureResources.ArrayNum = 0;
  local_58.TextureResources.ArrayMax = 0;
  local_58.TransformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.TransformName.Data.ArrayNum = 0;
  local_58.TransformName.Data.ArrayMax = 0;
  local_58.ShaderResource = (FOpenColorIOTransformResource *)0x0;
  local_58.TextureResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (param_1 != (UMediaCapture *)0x0) {
    bVar5 = FOpenColorIOColorConversionSettings::IsValid
                      (&(param_1->DesiredCaptureOptions).ColorConversionSettings);
    if (bVar5) {
      pFVar8 = FOpenColorIORendering::GetRenderPassResources
                         ((FOpenColorIORenderPassResources *)local_80,
                          &(param_1->DesiredCaptureOptions).ColorConversionSettings,
                          GMaxRHIFeatureLevel);
      FOpenColorIORenderPassResources::operator=(&local_58,pFVar8);
      if ((FDelegateAllocation *)local_68.Data != (FDelegateAllocation *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if ((FScriptContainerElement *)local_80._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_80._8_8_);
      }
    }
  }
  FVar10.Data = local_58.TransformName.Data.AllocatorInstance.Data;
  FVar9.Data = local_58.TextureResources.AllocatorInstance.Data;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  local_68.Data = (FScriptContainerElement *)&local_90;
  puVar6 = Core::Private::DelegateAllocate(0x40,&local_90);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[4] = FVar9.Data;
    puVar6[3] = local_58.ShaderResource;
    *(int *)(puVar6 + 5) = local_58.TextureResources.ArrayNum;
    *(int *)((longlong)puVar6 + 0x2c) = local_58.TextureResources.ArrayMax;
    puVar6[6] = FVar10.Data;
    *(int *)(puVar6 + 7) = local_58.TransformName.Data.ArrayNum;
    *(int *)((longlong)puVar6 + 0x3c) = local_58.TransformName.Data.ArrayMax;
    FVar9.Data = (FScriptContainerElement *)0x0;
    FVar10.Data = (FScriptContainerElement *)0x0;
  }
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  iVar4 = local_90.DelegateSize;
  FVar3 = local_90.DelegateAllocator;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->ExecutePassDelegate,(FWriteAccessScope *)local_80);
  puVar1 = &(__return_storage_ptr__->ExecutePassDelegate).field_0x8;
  if ((*(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8,0,0,
               0x10);
    *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar3;
  *(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = iVar4;
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_80);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_80[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_80._8_8_,(FDestructionSentinel *)local_80);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return __return_storage_ptr__;
}

// CreateFormatConversionPass @ 14d7a0830

FRenderPass * __cdecl
UE::MediaCapture::FRenderPass::CreateFormatConversionPass
          (FRenderPass *__return_storage_ptr__,UMediaCapture *param_1)

{
  undefined1 *puVar1;
  EMediaCaptureResourceType EVar2;
  void *pvVar3;
  ForElementType<TAlignedBytes<16,16>_> FVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  __return_storage_ptr__->OutputType = Texture;
  *(undefined8 *)&__return_storage_ptr__->InitializePassOutputDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->ExecutePassDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  EVar2 = param_1->DesiredOutputResourceType;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  __return_storage_ptr__->OutputType = EVar2 != Texture;
  if (EVar2 == Texture) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`5'::<lambda_1>_>
                 ::_vftable_;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar5 = local_60.DelegateSize;
    FVar4 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_50);
    if ((*(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 != 0) &&
       (puVar6 = *(undefined8 **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,
       puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)
                 &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,0,0,0x10);
      *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
    }
    pvVar3 = *(void **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)
     &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = FVar4;
    *(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = iVar5;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`7'::<lambda_2>_>
                 ::_vftable_;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar5 = local_60.DelegateSize;
    FVar4 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_50);
    if ((*(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 != 0) &&
       (puVar6 = *(undefined8 **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,
       puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)
                 &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,0,0,0x10);
      *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
    }
    pvVar3 = *(void **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)
     &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = FVar4;
    *(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = iVar5;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
  }
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  if (param_1->ConversionOperation == CUSTOM) {
    ::FName::FName(&local_res8,"CustomConversion");
    __return_storage_ptr__->Name = local_res8;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`10'::<lambda_3>_>
                 ::_vftable_;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar5 = local_60.DelegateSize;
    FVar4 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->ExecutePassDelegate,(FWriteAccessScope *)&local_50);
    puVar1 = &(__return_storage_ptr__->ExecutePassDelegate).field_0x8;
    if ((*(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 != 0) &&
       (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8,0,0,
                 0x10);
      *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
    }
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar4;
    *(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = iVar5;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
  }
  else {
    ::FName::FName(&local_res8,"Conversion");
    __return_storage_ptr__->Name = local_res8;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`12'::<lambda_4>_>
                 ::_vftable_;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    iVar5 = local_60.DelegateSize;
    FVar4 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->ExecutePassDelegate,(FWriteAccessScope *)&local_50);
    puVar1 = &(__return_storage_ptr__->ExecutePassDelegate).field_0x8;
    if ((*(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 != 0) &&
       (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8,0,0,
                 0x10);
      *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
    }
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar4;
    *(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = iVar5;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
  }
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return __return_storage_ptr__;
}

// CreateRenderPasses @ 14d7a1070

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> * __cdecl
UE::MediaCapture::FRenderPass::CreateRenderPasses
          (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,UMediaCapture *param_1)

{
  FScriptContainerElement *_Src;
  FRenderPass *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FRenderPass *pFVar6;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar9;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FRenderPass local_c8;
  FRenderPass local_88;
  FRenderPass local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->DesiredCaptureOptions).ResizeMethod == ResizeInRenderPass) {
    if ((param_1->DesiredCaptureOptions).Crop == None) {
      pFVar6 = CreateResamplePass(&local_c8);
      pFVar1 = (FRenderPass *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pTVar9 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (pTVar9,(TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar6);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (pTVar9 + 1,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->ExecutePassDelegate);
      uVar3 = (pFVar6->Name).Number;
      *(uint *)&pTVar9[2].field_0x0 = (pFVar6->Name).ComparisonIndex.Value;
      *(uint *)&pTVar9[2].field_0x4 = uVar3;
      pTVar9[2].field_0x8 = pFVar6->OutputType;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c8.ExecutePassDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c8);
    }
    else if (2 < (byte)LogMediaIOCore._0_1_) {
      local_d0 = (param_1->MediaOutputName).Data.ArrayNum;
      lVar8 = (longlong)local_d0;
      _Src = (param_1->MediaOutputName).Data.AllocatorInstance.Data;
      local_d8.Data = (FScriptContainerElement *)0x0;
      if (local_d0 == 0) {
        local_cc = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
        memcpy(local_d8.Data,_Src,lVar8 * 2);
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
    }
  }
  bVar4 = FOpenColorIOColorConversionSettings::IsValid
                    (&(param_1->DesiredCaptureOptions).ColorConversionSettings);
  if (bVar4) {
    pFVar6 = CreateColorConversionPass(&local_88,param_1);
    pFVar1 = (FRenderPass *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pTVar9 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (pTVar9,(TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar6);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (pTVar9 + 1,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->ExecutePassDelegate)
    ;
    uVar3 = (pFVar6->Name).Number;
    *(uint *)&pTVar9[2].field_0x0 = (pFVar6->Name).ComparisonIndex.Value;
    *(uint *)&pTVar9[2].field_0x4 = uVar3;
    pTVar9[2].field_0x8 = pFVar6->OutputType;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88.ExecutePassDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
  }
  pFVar6 = CreateFormatConversionPass(&local_48,param_1);
  pFVar1 = (FRenderPass *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar7;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pTVar9 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (pTVar9,(TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (pTVar9 + 1,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->ExecutePassDelegate);
  uVar3 = (pFVar6->Name).Number;
  *(uint *)&pTVar9[2].field_0x0 = (pFVar6->Name).ComparisonIndex.Value;
  *(uint *)&pTVar9[2].field_0x4 = uVar3;
  pTVar9[2].field_0x8 = pFVar6->OutputType;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_48.ExecutePassDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_48);
  return __return_storage_ptr__;
}

// CreateResamplePass @ 14d7a1430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRenderPass * __cdecl
UE::MediaCapture::FRenderPass::CreateResamplePass(FRenderPass *__return_storage_ptr__)

{
  undefined1 *puVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  *(undefined8 *)&__return_storage_ptr__->InitializePassOutputDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->ExecutePassDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->OutputType = Texture;
  ::FName::FName(&local_res8,"Resample");
  __return_storage_ptr__->Name = local_res8;
  __return_storage_ptr__->OutputType = Texture;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = InitializeResamplePassOutputTexture;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  iVar4 = local_60.DelegateSize;
  FVar3 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_50);
  if ((*(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 != 0) &&
     (puVar5 = *(undefined8 **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = 0;
  }
  pvVar2 = *(void **)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)
   &(__return_storage_ptr__->InitializePassOutputDelegate).field_0x8 = FVar3;
  *(int *)&(__return_storage_ptr__->InitializePassOutputDelegate).field_0x10 = iVar4;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  iVar4 = local_60.DelegateSize;
  FVar3 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->ExecutePassDelegate,(FWriteAccessScope *)&local_50);
  puVar1 = &(__return_storage_ptr__->ExecutePassDelegate).field_0x8;
  if ((*(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x8,0,0,
               0x10);
    *(undefined4 *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar3;
  *(int *)&(__return_storage_ptr__->ExecutePassDelegate).field_0x10 = iVar4;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return __return_storage_ptr__;
}

