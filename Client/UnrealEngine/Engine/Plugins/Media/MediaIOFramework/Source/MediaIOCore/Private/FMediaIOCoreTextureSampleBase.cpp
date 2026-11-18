// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 45

// FMediaIOCoreTextureSampleBase @ 14d78a5c0

FMediaIOCoreTextureSampleBase * __thiscall
FMediaIOCoreTextureSampleBase::FMediaIOCoreTextureSampleBase(FMediaIOCoreTextureSampleBase *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Texture).Reference = (FRHITexture *)0x0;
  *(undefined8 *)&this->DestructionCallback = 0;
  *(undefined8 *)&(this->DestructionCallback).field_0x28 = 0;
  (this->Duration).Ticks = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaTextureSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTextureSampleColorConverter__;
  (this->Time).Ticks = 0;
  this->SampleFormat = Undefined;
  (this->Timecode).bIsSet = false;
  this->FrameNumber = (atomic<unsigned___int64>)0x0;
  this->Stride = 0;
  this->Width = 0;
  this->Height = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  this->ExternalBuffer = (void *)0x0;
  this->Encoding = Linear;
  this->ColorSpaceType = sRGB;
  UE::Color::FColorSpace::FColorSpace(&this->ColorSpaceStruct,sRGB);
  (this->Player).Object = (FMediaIOCorePlayerBase *)0x0;
  (this->Player).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Converter).Object = (FMediaIOCoreTextureSampleConverter *)0x0;
  (this->Converter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OriginalSample).Object = (FMediaIOCoreTextureSampleBase *)0x0;
  (this->OriginalSample).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsAwaitingForGPUTransfer = (atomic<bool>)0x0;
  this->EvaluationOffsetInSeconds = 0.0;
  (this->ColorConversionSettings).Object = (FOpenColorIOColorConversionSettings *)0x0;
  (this->ColorConversionSettings).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedOCIOResources).Object = (FOpenColorIORenderPassResources *)0x0;
  (this->CachedOCIOResources).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FMediaIOCoreTextureSampleBase @ 14d78cbe0

void __thiscall
FMediaIOCoreTextureSampleBase::~FMediaIOCoreTextureSampleBase(FMediaIOCoreTextureSampleBase *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  FRHITexture *this_00;
  longlong *plVar8;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedOCIOResources).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ColorConversionSettings).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalSample).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Converter).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->Player).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar6 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (*(longlong *)&this->DestructionCallback != 0) {
    plVar7 = *(longlong **)&(this->DestructionCallback).field_0x28;
    plVar8 = (longlong *)&(this->DestructionCallback).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  this_00 = (this->Texture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  this->_padding_ = (longlong)&___7IMediaTextureSampleColorConverter__6B_;
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaTextureSample__6B_;
  return;
}

// ApplyColorConversion @ 14d797090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

bool __thiscall
FMediaIOCoreTextureSampleBase::ApplyColorConversion
          (FMediaIOCoreTextureSampleBase *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> *param_2,TRefCountPtr<FRHITexture> *param_3)

{
  FOpenColorIOColorConversionSettings *pFVar1;
  code *pcVar2;
  Type TVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FRDGScope *this_00;
  TRefCountPtr<IPooledRenderTarget> TVar7;
  FRDGTexture *pFVar8;
  FRDGTexture *pFVar9;
  undefined1 auStackY_938 [32];
  undefined4 uStack_8ec;
  undefined1 local_8e8 [16];
  TRDGEventScopeGuard<FRDGScope_RHI> local_8d8;
  undefined1 local_8c8;
  FRDGEventName local_8c0;
  FScreenPassTexture local_8a8;
  FScreenPassRenderTarget local_890;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_870;
  FScreenPassViewInfo local_858;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined1 local_828 [22];
  ERDGScopeMode local_812;
  FRDGAllocator local_810 [3];
  FRHIComputeCommandList *local_768;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_938;
  if ((this->ColorConversionSettings).Object == (FOpenColorIOColorConversionSettings *)0x0) {
    bVar6 = false;
  }
  else {
    local_8c0.EventFormat = L"";
    local_8c0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8c0.FormattedEventName.Data.ArrayNum = 0;
    local_8c0.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_828,param_1,&local_8c0,None,GMaxRHIShaderPlatform)
    ;
    bVar6 = false;
    local_8c8 = 0;
    if ((local_812 != Disabled) && ((local_812 != TopLevelOnly || ((local_828[0x10] & 4) == 0)))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::Desc._padding_._0_4_ = 0x10e;
          local_838 = 0x54d918f0;
          uStack_834 = 1;
          ::Desc._padding_._0_4_ = 0x54d918f0;
          ::Desc._padding_._4_4_ = uStack_83c;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_ = (longlong)u_MediaIO_ColorCo;
          ::Desc._padding_ = (longlong)u_MediaIO_ColorCo;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FMediaIOCoreTextureSampleBase::ApplyColorConversion'::__l11::Desc::operator()<>'
                 ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_870._Myfirst._Val = &::Desc;
      local_8d8.State = (FRDGScopeState *)local_828;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>(local_810,(FRDGScope **)local_828);
      local_8d8.Scope = this_00;
      local_828._0_8_ = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)local_828,&local_870);
      if (local_828[0x14] != false) {
        FRDGScope::BeginCPU(this_00,local_768,false);
        FRDGScope::BeginGPU(this_00,local_768);
      }
      bVar6 = true;
      local_8c8 = 1;
    }
    TVar7 = CreateRenderTarget((FRHITexture *)local_8e8,(wchar_t *)param_2->Reference);
    pFVar8 = FRDGBuilder::RegisterExternalTexture
                       ((FRDGBuilder *)local_828,
                        (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
    if ((longlong *)local_8e8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_8e8._0_8_ + 0x38))();
    }
    TVar7 = CreateRenderTarget((FRHITexture *)(local_8e8 + 8),(wchar_t *)param_3->Reference);
    pFVar9 = FRDGBuilder::RegisterExternalTexture
                       ((FRDGBuilder *)local_828,
                        (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
    if ((longlong *)local_8e8._8_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_8e8._8_8_ + 0x38))();
    }
    if ((this->ColorConversionSettings).Object == (FOpenColorIOColorConversionSettings *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    TVar3 = GMaxRHIFeatureLevel;
    pFVar1 = (this->ColorConversionSettings).Object;
    local_890._padding_ = 0;
    local_890._padding_ = 0;
    if (pFVar9 != (FRDGTexture *)0x0) {
      local_890._padding_ = *(longlong *)&(pFVar9->Desc).field_0x24;
    }
    local_890.LoadAction = EClear;
    local_8a8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_8a8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    if (pFVar8 != (FRDGTexture *)0x0) {
      local_8a8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)*(undefined8 *)&(pFVar8->Desc).field_0x24;
    }
    local_8a8.Texture = pFVar8;
    local_890._padding_ = (longlong)pFVar9;
    bVar4 = IsHMDHiddenAreaMaskActive();
    uStack_8ec = CONCAT31(uStack_8ec._1_3_,bVar4);
    local_858._0_8_ = CONCAT44(0xffffffff,TVar3);
    local_858._8_8_ = CONCAT44(uStack_8ec,1);
    FOpenColorIORendering::AddPass_RenderThread
              ((FRDGBuilder *)local_828,&local_858,TVar3,&local_8a8,&local_890,
               (FOpenColorIORenderPassResources *)pFVar1,__real_3f800000,None);
    if (bVar6) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_8d8);
    }
    FRDGBuilder::Execute((FRDGBuilder *)local_828);
    FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_828);
    bVar6 = true;
  }
  return bVar6;
}

// CacheColorCoversionSettings_GameThread @ 14d797ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMediaIOCoreTextureSampleBase::CacheColorCoversionSettings_GameThread
          (FMediaIOCoreTextureSampleBase *this)

{
  int *piVar1;
  TSharedPtr<FOpenColorIORenderPassResources,1> *pTVar2;
  FOpenColorIOColorConversionSettings *this_00;
  code *pcVar3;
  Type TVar4;
  ForAnyElementType _Src;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  FOpenColorIORenderPassResources *pFVar8;
  FOpenColorIORenderPassResources *local_48;
  FSharedReferencer<1> FStack_40;
  FOpenColorIORenderPassResources local_38;
  
  this_00 = (this->ColorConversionSettings).Object;
  if (this_00 != (FOpenColorIOColorConversionSettings *)0x0) {
    bVar5 = FOpenColorIOColorConversionSettings::IsValid(this_00);
    if (bVar5) {
      FStack_40.ReferenceController = ::operator_new(0x38);
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_48 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FOpenColorIORenderPassResources *)&DAT_00000010;
        FStack_40.ReferenceController = _UNK_150651568;
      }
      else {
        (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pFVar8 = (FOpenColorIORenderPassResources *)(FStack_40.ReferenceController + 1);
        (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FStack_40.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOpenColorIORenderPassResources___00_SharedPointerInternals__6B_
        ;
        FStack_40.ReferenceController[1]._padding_ = 0;
        FStack_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        FStack_40.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        FStack_40.ReferenceController[2]._padding_ = 0;
        FStack_40.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        FStack_40.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        FStack_40.ReferenceController[3]._padding_ = 0;
        if (pFVar8 == (FOpenColorIORenderPassResources *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        (FStack_40.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar6 = FStack_40.ReferenceController;
        local_48 = pFVar8;
      }
      pTVar2 = &this->CachedOCIOResources;
      if (pTVar2 != (TSharedPtr<FOpenColorIORenderPassResources,1> *)&local_48) {
        pTVar2->Object = pFVar8;
        local_48 = (FOpenColorIORenderPassResources *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedOCIOResources).SharedReferenceCount,&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      TVar4 = GMaxRHIFeatureLevel;
      if ((this->ColorConversionSettings).Object == (FOpenColorIOColorConversionSettings *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FOpenColorIORendering::GetRenderPassResources
                (&local_38,(this->ColorConversionSettings).Object,TVar4);
      if (pTVar2->Object == (FOpenColorIORenderPassResources *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2->Object->ShaderResource = local_38.ShaderResource;
      if (pTVar2->Object == (FOpenColorIORenderPassResources *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Src.Data = local_38.TextureResources.AllocatorInstance.Data;
      pFVar8 = pTVar2->Object;
      pTVar7 = &pFVar8->TextureResources;
      if (pTVar7 != &local_38.TextureResources) {
        piVar1 = &(pFVar8->TextureResources).ArrayMax;
        (pFVar8->TextureResources).ArrayNum = local_38.TextureResources.ArrayNum;
        if ((local_38.TextureResources.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_38.TextureResources.ArrayNum,*piVar1,&pTVar7->AllocatorInstance,
                     local_38.TextureResources.ArrayNum,piVar1);
          if (local_38.TextureResources.ArrayNum != 0) {
            memcpy((pTVar7->AllocatorInstance).Data,_Src.Data,
                   (longlong)local_38.TextureResources.ArrayNum << 3);
          }
        }
      }
      if (local_38.TransformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.TransformName.Data.AllocatorInstance.Data);
      }
      if (local_38.TextureResources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.TextureResources.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CopyConfiguration @ 14d79d6e0

void __thiscall
FMediaIOCoreTextureSampleBase::CopyConfiguration
          (FMediaIOCoreTextureSampleBase *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  TOptional<FTimecode> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FMediaIOCoreTextureSampleBase *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOpenColorIOColorConversionSettings *pFVar6;
  FOpenColorIORenderPassResources *pFVar7;
  FMediaIOCorePlayerBase *pFVar8;
  FMediaIOCoreTextureSampleConverter *pFVar9;
  FRHITexture *this_00;
  FRHITexture *this_01;
  code *pcVar10;
  double dVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined3 uVar16;
  FColorSpace *pFVar17;
  FColorSpace *pFVar18;
  bool bVar19;
  FColorSpace *pFVar20;
  TOptional<FTimecode> *pTVar21;
  FColorSpace *pFVar22;
  longlong lVar23;
  
  if (param_1->Object != (FMediaIOCoreTextureSampleBase *)0x0) {
    this->Stride = param_1->Object->Stride;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->Width = param_1->Object->Width;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->Height = param_1->Object->Height;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->SampleFormat = param_1->Object->SampleFormat;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    (this->Time).Ticks = (param_1->Object->Time).Ticks;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar4 = param_1->Object;
    pTVar1 = &this->Timecode;
    pTVar21 = &pFVar4->Timecode;
    if (pTVar21 != pTVar1) {
      if ((pFVar4->Timecode).bIsSet == false) {
        if ((this->Timecode).bIsSet != false) {
          (this->Timecode).bIsSet = false;
        }
      }
      else {
        iVar13 = (pTVar21->TypedValue).Minutes;
        iVar14 = (pFVar4->Timecode).TypedValue.Seconds;
        iVar15 = (pFVar4->Timecode).TypedValue.Frames;
        (pTVar1->TypedValue).Hours = (pTVar21->TypedValue).Hours;
        (pTVar1->TypedValue).Minutes = iVar13;
        (this->Timecode).TypedValue.Seconds = iVar14;
        (this->Timecode).TypedValue.Frames = iVar15;
        bVar19 = (pFVar4->Timecode).TypedValue.bDropFrameFormat;
        uVar16 = *(undefined3 *)&(pFVar4->Timecode).TypedValue.field_0x15;
        (this->Timecode).TypedValue.Subframe = (pFVar4->Timecode).TypedValue.Subframe;
        (this->Timecode).TypedValue.bDropFrameFormat = bVar19;
        *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar16;
        (this->Timecode).bIsSet = true;
      }
    }
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->Encoding = param_1->Object->Encoding;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->ColorSpaceType = param_1->Object->ColorSpaceType;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar23 = 2;
    pFVar17 = &param_1->Object->ColorSpaceStruct;
    pFVar18 = &this->ColorSpaceStruct;
    do {
      pFVar22 = pFVar18;
      pFVar20 = pFVar17;
      pFVar18 = (FColorSpace *)((pFVar22->RgbToXYZ).M + 2);
      dVar11 = (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar17 = (FColorSpace *)((pFVar20->RgbToXYZ).M + 2);
      (pFVar22->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar22->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar11;
      dVar11 = (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pFVar22->Chromaticities).Elements[1].field0_0x0._s_0.X =
           (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pFVar22->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar11;
      dVar11 = (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pFVar22->Chromaticities).Elements[2].field0_0x0._s_0.X =
           (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pFVar22->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar11;
      dVar11 = (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pFVar22->Chromaticities).Elements[3].field0_0x0._s_0.X =
           (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pFVar22->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar11;
      dVar11 = (pFVar20->RgbToXYZ).M[0][1];
      (pFVar22->RgbToXYZ).M[0][0] = (pFVar20->RgbToXYZ).M[0][0];
      (pFVar22->RgbToXYZ).M[0][1] = dVar11;
      dVar11 = (pFVar20->RgbToXYZ).M[0][3];
      (pFVar22->RgbToXYZ).M[0][2] = (pFVar20->RgbToXYZ).M[0][2];
      (pFVar22->RgbToXYZ).M[0][3] = dVar11;
      dVar11 = (pFVar20->RgbToXYZ).M[1][1];
      (pFVar22->RgbToXYZ).M[1][0] = (pFVar20->RgbToXYZ).M[1][0];
      (pFVar22->RgbToXYZ).M[1][1] = dVar11;
      dVar11 = (pFVar20->RgbToXYZ).M[1][3];
      (pFVar22->RgbToXYZ).M[1][2] = (pFVar20->RgbToXYZ).M[1][2];
      (pFVar22->RgbToXYZ).M[1][3] = dVar11;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar11 = (pFVar20->RgbToXYZ).M[2][1];
    (pFVar18->Chromaticities).Elements[0].field0_0x0._s_0.X =
         (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X;
    (pFVar22->RgbToXYZ).M[2][1] = dVar11;
    dVar11 = (pFVar20->RgbToXYZ).M[2][3];
    (pFVar22->RgbToXYZ).M[2][2] = (pFVar20->RgbToXYZ).M[2][2];
    (pFVar22->RgbToXYZ).M[2][3] = dVar11;
    dVar11 = (pFVar20->RgbToXYZ).M[3][1];
    (pFVar22->RgbToXYZ).M[3][0] = (pFVar20->RgbToXYZ).M[3][0];
    (pFVar22->RgbToXYZ).M[3][1] = dVar11;
    dVar11 = (pFVar20->RgbToXYZ).M[3][3];
    (pFVar22->RgbToXYZ).M[3][2] = (pFVar20->RgbToXYZ).M[3][2];
    (pFVar22->RgbToXYZ).M[3][3] = dVar11;
    dVar11 = (pFVar20->XYZToRgb).M[0][1];
    (pFVar22->XYZToRgb).M[0][0] = (pFVar20->XYZToRgb).M[0][0];
    (pFVar22->XYZToRgb).M[0][1] = dVar11;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar5 = (param_1->Object->ColorConversionSettings).SharedReferenceCount.ReferenceController;
    pFVar6 = (param_1->Object->ColorConversionSettings).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->ColorConversionSettings).SharedReferenceCount.ReferenceController;
    (this->ColorConversionSettings).Object = pFVar6;
    (this->ColorConversionSettings).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar5 = (param_1->Object->CachedOCIOResources).SharedReferenceCount.ReferenceController;
    pFVar7 = (param_1->Object->CachedOCIOResources).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->CachedOCIOResources).SharedReferenceCount.ReferenceController;
    (this->CachedOCIOResources).Object = pFVar7;
    (this->CachedOCIOResources).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar5 = (param_1->Object->Player).WeakReferenceCount.ReferenceController;
    pFVar8 = (param_1->Object->Player).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->Player).WeakReferenceCount.ReferenceController;
    (this->Player).Object = pFVar8;
    (this->Player).WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar12->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
      }
    }
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar5 = (param_1->Object->Converter).SharedReferenceCount.ReferenceController;
    pFVar9 = (param_1->Object->Converter).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->Converter).SharedReferenceCount.ReferenceController;
    (this->Converter).Object = pFVar9;
    (this->Converter).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    this->FrameNumber = param_1->Object->FrameNumber;
    UNLOCK();
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    (this->Duration).Ticks = (param_1->Object->Duration).Ticks;
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this_00 = (this->Texture).Reference;
    this_01 = (param_1->Object->Texture).Reference;
    if (this_00 != this_01) {
      (this->Texture).Reference = this_01;
      if (this_01 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (param_1->Object == (FMediaIOCoreTextureSampleBase *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->EvaluationOffsetInSeconds = param_1->Object->EvaluationOffsetInSeconds;
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->OriginalSample).SharedReferenceCount.ReferenceController;
    (this->OriginalSample).Object = pFVar4;
    (this->OriginalSample).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return;
}

// FreeSample @ 14d7a7e30

void __thiscall FMediaIOCoreTextureSampleBase::FreeSample(FMediaIOCoreTextureSampleBase *this)

{
  FRHITexture *this_00;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
              (1,1,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  this->ExternalBuffer = (void *)0x0;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedOCIOResources != (TSharedPtr<FOpenColorIORenderPassResources,1> *)&local_28) {
    (this->CachedOCIOResources).Object = (FOpenColorIORenderPassResources *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedOCIOResources).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  this_00 = (this->Texture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->Texture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OriginalSample != (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)&local_18) {
    (this->OriginalSample).Object = (FMediaIOCoreTextureSampleBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalSample).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GetBuffer @ 14d7a9340

void * __thiscall FMediaIOCoreTextureSampleBase::GetBuffer(FMediaIOCoreTextureSampleBase *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->Texture).Reference != (FRHITexture *)0x0) {
    return (void *)0x0;
  }
  pFVar1 = this->ExternalBuffer;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    pFVar1 = (this->Buffer).AllocatorInstance.Data;
  }
  return pFVar1;
}

// GetColorSpaceType @ 14d7a9850

EColorSpace __thiscall
FMediaIOCoreTextureSampleBase::GetColorSpaceType(FMediaIOCoreTextureSampleBase *this)

{
  FOpenColorIOColorConversionSettings *this_00;
  bool bVar1;
  
  this_00 = (this->ColorConversionSettings).Object;
  if (this_00 != (FOpenColorIOColorConversionSettings *)0x0) {
    bVar1 = FOpenColorIOColorConversionSettings::IsValid(this_00);
    if (bVar1) {
      return None;
    }
  }
  return this->ColorSpaceType;
}

// GetDim @ 14d7aa080

TIntPoint<int> __thiscall FMediaIOCoreTextureSampleBase::GetDim(FMediaIOCoreTextureSampleBase *this)

{
  undefined4 uVar1;
  uint uVar2;
  TIntPoint<int>_u_0 in_RDX;
  
  uVar1 = (**(code **)(this->_padding_ + 0x28))();
  switch(uVar1) {
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
    uVar2 = this->Width >> 1;
    break;
  default:
    uVar2 = this->Width;
    break;
  case 0xe:
    *(uint *)in_RDX =
         (uint)((ulonglong)(((this->Width + 0x2f) / 0x30) * 0x30) * 0xaaaaaaab >> 0x20) & 0xfffffffc
    ;
    goto LAB_14d7aa0ed;
  }
  *(uint *)in_RDX = uVar2;
LAB_14d7aa0ed:
  *(uint *)((longlong)in_RDX + 4) = this->Height;
  return (TIntPoint<int>)in_RDX;
}

// GetDuration @ 14d7aa4c0

FTimespan __thiscall FMediaIOCoreTextureSampleBase::GetDuration(FMediaIOCoreTextureSampleBase *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetEncodingType @ 14d7aa4e0

EEncoding __thiscall
FMediaIOCoreTextureSampleBase::GetEncodingType(FMediaIOCoreTextureSampleBase *this)

{
  FOpenColorIOColorConversionSettings *this_00;
  bool bVar1;
  
  this_00 = (this->ColorConversionSettings).Object;
  if ((this_00 != (FOpenColorIOColorConversionSettings *)0x0) &&
     (bVar1 = FOpenColorIOColorConversionSettings::IsValid(this_00), bVar1)) {
    return Linear;
  }
  return this->Encoding;
}

// GetFormat @ 14d7aa840

EMediaTextureSampleFormat __thiscall
FMediaIOCoreTextureSampleBase::GetFormat(FMediaIOCoreTextureSampleBase *this)

{
  return this->SampleFormat;
}

// GetFrameNumber @ 14d7aa990

ulong64 __thiscall
FMediaIOCoreTextureSampleBase::GetFrameNumber(FMediaIOCoreTextureSampleBase *this)

{
  return (ulong64)this->FrameNumber;
}

// GetHDRNitsNormalizationFactor @ 14d7aadc0

float __thiscall
FMediaIOCoreTextureSampleBase::GetHDRNitsNormalizationFactor(FMediaIOCoreTextureSampleBase *this)

{
  FOpenColorIOColorConversionSettings *this_00;
  bool bVar1;
  char cVar2;
  
  this_00 = (this->ColorConversionSettings).Object;
  if ((this_00 != (FOpenColorIOColorConversionSettings *)0x0) &&
     (bVar1 = FOpenColorIOColorConversionSettings::IsValid(this_00), bVar1)) {
    return __real_3f800000;
  }
  cVar2 = (**(code **)(this->_padding_ + 0x100))(this);
  if ((cVar2 != '\x02') && (cVar2 = (**(code **)(this->_padding_ + 0x100))(this), cVar2 != '\x01'))
  {
    return __real_3c23d70a;
  }
  return __real_3f800000;
}

// GetMediaTextureSampleColorConverter @ 14d7abc30

IMediaTextureSampleColorConverter * __thiscall
FMediaIOCoreTextureSampleBase::GetMediaTextureSampleColorConverter
          (FMediaIOCoreTextureSampleBase *this)

{
  FOpenColorIOColorConversionSettings *this_00;
  bool bVar1;
  IMediaTextureSampleColorConverter *pIVar2;
  
  this_00 = (this->ColorConversionSettings).Object;
  if (this_00 != (FOpenColorIOColorConversionSettings *)0x0) {
    bVar1 = FOpenColorIOColorConversionSettings::IsValid(this_00);
    if (bVar1) {
      pIVar2 = (IMediaTextureSampleColorConverter *)&this->_padding_;
      if (this == (FMediaIOCoreTextureSampleBase *)0x0) {
        pIVar2 = (IMediaTextureSampleColorConverter *)0x0;
      }
      return pIVar2;
    }
  }
  return (IMediaTextureSampleColorConverter *)0x0;
}

// GetMediaTextureSampleConverter @ 14d7abc80

IMediaTextureSampleConverter * __thiscall
FMediaIOCoreTextureSampleBase::GetMediaTextureSampleConverter(FMediaIOCoreTextureSampleBase *this)

{
  return (IMediaTextureSampleConverter *)(this->Converter).Object;
}

// GetOrRequestBuffer @ 14d7ac810

void * __thiscall
FMediaIOCoreTextureSampleBase::GetOrRequestBuffer(FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  if ((this->Buffer).ArrayNum != param_1) {
    (**(code **)(this->_padding_ + 0x140))();
    return (this->Buffer).AllocatorInstance.Data;
  }
  return (this->Buffer).AllocatorInstance.Data;
}

// GetOutputDim @ 14d7ac8c0

TIntPoint<int> __thiscall
FMediaIOCoreTextureSampleBase::GetOutputDim(FMediaIOCoreTextureSampleBase *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(uint *)in_RDX = this->Width;
  *(uint *)((longlong)in_RDX + 4) = this->Height;
  return (TIntPoint<int>)in_RDX;
}

// GetPixelFormat @ 14d7acb10

EPixelFormat __thiscall
FMediaIOCoreTextureSampleBase::GetPixelFormat(FMediaIOCoreTextureSampleBase *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(this->_padding_ + 0x28))();
  if (iVar2 == 4) {
    cVar1 = (**(code **)(this->_padding_ + 0x100))(this);
    return (cVar1 == '\x01') + PF_FloatRGB;
  }
  if (iVar2 != 0xd) {
    return PF_B8G8R8A8;
  }
  return PF_FloatRGBA;
}

// GetPlayer @ 14d7acbe0

TSharedPtr<FMediaIOCorePlayerBase,1> * __thiscall
FMediaIOCoreTextureSampleBase::GetPlayer
          (FMediaIOCoreTextureSampleBase *this,
          TSharedPtr<FMediaIOCorePlayerBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FMediaIOCorePlayerBase *)0x0;
  pTVar1 = (this->Player).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->Player).Object;
  }
  return __return_storage_ptr__;
}

// GetSourceColorSpace @ 14d7add30

FColorSpace * __thiscall
FMediaIOCoreTextureSampleBase::GetSourceColorSpace(FMediaIOCoreTextureSampleBase *this)

{
  return &this->ColorSpaceStruct;
}

// GetStride @ 14d7ae270

uint __thiscall FMediaIOCoreTextureSampleBase::GetStride(FMediaIOCoreTextureSampleBase *this)

{
  return this->Stride;
}

// GetTexture @ 14d7ae570

FRHITexture * __thiscall
FMediaIOCoreTextureSampleBase::GetTexture(FMediaIOCoreTextureSampleBase *this)

{
  return (this->Texture).Reference;
}

// GetTime @ 14d7ae690

FMediaTimeStamp * __thiscall
FMediaIOCoreTextureSampleBase::GetTime
          (FMediaIOCoreTextureSampleBase *this,FMediaTimeStamp *__return_storage_ptr__)

{
  (__return_storage_ptr__->Time).Ticks = (this->Time).Ticks;
  __return_storage_ptr__->SequenceIndex = 0;
  __return_storage_ptr__->LoopIndex = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14d7ae710

TOptional<FTimecode> * __thiscall
FMediaIOCoreTextureSampleBase::GetTimecode
          (FMediaIOCoreTextureSampleBase *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  
  __return_storage_ptr__->bIsSet = false;
  bVar1 = (this->Timecode).bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    iVar2 = (this->Timecode).TypedValue.Minutes;
    iVar3 = (this->Timecode).TypedValue.Seconds;
    iVar4 = (this->Timecode).TypedValue.Frames;
    (__return_storage_ptr__->TypedValue).Hours = (this->Timecode).TypedValue.Hours;
    (__return_storage_ptr__->TypedValue).Minutes = iVar2;
    (__return_storage_ptr__->TypedValue).Seconds = iVar3;
    (__return_storage_ptr__->TypedValue).Frames = iVar4;
    bVar1 = (this->Timecode).TypedValue.bDropFrameFormat;
    uVar5 = *(undefined3 *)&(this->Timecode).TypedValue.field_0x15;
    (__return_storage_ptr__->TypedValue).Subframe = (this->Timecode).TypedValue.Subframe;
    (__return_storage_ptr__->TypedValue).bDropFrameFormat = bVar1;
    *(undefined3 *)&(__return_storage_ptr__->TypedValue).field_0x15 = uVar5;
  }
  return __return_storage_ptr__;
}

// GetYUVToRGBMatrix @ 14d7aecf0

TMatrix<double> * __thiscall
FMediaIOCoreTextureSampleBase::GetYUVToRGBMatrix(FMediaIOCoreTextureSampleBase *this)

{
  TMatrix<double> *pTVar1;
  
  if ((this->ColorSpaceType == sRGB) ||
     (pTVar1 = &MediaShaders::YuvToRgbRec2020Scaled, this->ColorSpaceType != Rec2020)) {
    pTVar1 = &MediaShaders::YuvToRgbRec709Scaled;
  }
  return pTVar1;
}

// Initialize @ 14d7af6b0

bool __thiscall
FMediaIOCoreTextureSampleBase::Initialize
          (FMediaIOCoreTextureSampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,uint param_2,uint param_3,
          uint param_4,EMediaTextureSampleFormat param_5,FTimespan param_6,FFrameRate *param_7,
          TOptional<FTimecode> *param_8,FColorFormatArgs *param_9)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  
  (**(code **)(this->_padding_ + 0x180))();
  bVar3 = SetProperties(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  bVar4 = false;
  if (bVar3) {
    iVar2 = param_1->ArrayNum;
    bVar4 = iVar2 != 0;
    if (bVar4) {
      _Src = (param_1->AllocatorInstance).Data;
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = iVar2;
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                (1,1,iVar2,*piVar1,&(this->Buffer).AllocatorInstance,iVar2,piVar1);
      memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar2);
    }
  }
  return bVar4;
}

// Initialize @ 14d7af7b0

bool __thiscall
FMediaIOCoreTextureSampleBase::Initialize
          (FMediaIOCoreTextureSampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,uint param_2,uint param_3,
          uint param_4,EMediaTextureSampleFormat param_5,FTimespan param_6,FFrameRate *param_7,
          TOptional<FTimecode> *param_8,FColorFormatArgs *param_9)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  
  (**(code **)(this->_padding_ + 0x180))();
  bVar3 = SetProperties(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  bVar4 = false;
  if (bVar3) {
    iVar2 = param_1->ArrayNum;
    bVar4 = iVar2 != 0;
    if (bVar4) {
      _Src = (param_1->AllocatorInstance).Data;
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = iVar2;
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                (1,1,iVar2,*piVar1,&(this->Buffer).AllocatorInstance,iVar2,piVar1);
      memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar2);
    }
  }
  return bVar4;
}

// Initialize @ 14d7af8b0

bool __thiscall
FMediaIOCoreTextureSampleBase::Initialize
          (FMediaIOCoreTextureSampleBase *this,void *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,EMediaTextureSampleFormat param_6,FTimespan param_7,FFrameRate *param_8,
          TOptional<FTimecode> *param_9,FColorFormatArgs *param_10)

{
  int *piVar1;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar2;
  bool bVar3;
  int iVar4;
  
  (**(code **)(this->_padding_ + 0x180))();
  bVar3 = SetProperties(this,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if ((bVar3) && (param_1 != (void *)0x0)) {
    pTVar2 = &this->Buffer;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    piVar1 = &(this->Buffer).ArrayMax;
    (this->Buffer).ArrayNum = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                (1,1,param_2,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                      (1,1,param_2,&pTVar2->AllocatorInstance,&(this->Buffer).ArrayNum,piVar1);
    if (param_2 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data + iVar4,param_1,(longlong)(int)param_2);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// InitializeJITR @ 14d7aff20

bool __thiscall
FMediaIOCoreTextureSampleBase::InitializeJITR
          (FMediaIOCoreTextureSampleBase *this,FMediaIOCoreSampleJITRConfigurationArgs *param_1)

{
  FTimecode *pFVar1;
  TOptional<FTimecode> *pTVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMediaIOCoreTextureSampleConverter *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined3 uVar12;
  atomic<unsigned___int64> aVar13;
  
  if (((param_1->Player).Object != (FMediaIOCorePlayerBase *)0x0) &&
     ((param_1->Converter).Object != (FMediaIOCoreTextureSampleConverter *)0x0)) {
    this->Width = param_1->Width;
    this->Height = param_1->Height;
    (this->Time).Ticks = (param_1->Time).Ticks;
    pFVar1 = &param_1->Timecode;
    pTVar2 = &this->Timecode;
    if ((TOptional<FTimecode> *)pFVar1 != pTVar2) {
      iVar8 = pFVar1->Minutes;
      iVar9 = (param_1->Timecode).Seconds;
      iVar10 = (param_1->Timecode).Frames;
      (pTVar2->TypedValue).Hours = pFVar1->Hours;
      (pTVar2->TypedValue).Minutes = iVar8;
      (this->Timecode).TypedValue.Seconds = iVar9;
      (this->Timecode).TypedValue.Frames = iVar10;
      bVar11 = (param_1->Timecode).bDropFrameFormat;
      uVar12 = *(undefined3 *)&(param_1->Timecode).field_0x15;
      (this->Timecode).TypedValue.Subframe = (param_1->Timecode).Subframe;
      (this->Timecode).TypedValue.bDropFrameFormat = bVar11;
      *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar12;
      (this->Timecode).bIsSet = true;
    }
    aVar13._4_4_ = 0;
    aVar13._0_4_ = GFrameNumber;
    LOCK();
    this->FrameNumber = aVar13;
    UNLOCK();
    (this->Duration).Ticks =
         (longlong)
         (((double)(param_1->FrameRate).Denominator / (double)(param_1->FrameRate).Numerator) *
         __real_416312d000000000);
    (this->Player).Object = (param_1->Player).Object;
    pTVar5 = (param_1->Player).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (this->Player).WeakReferenceCount.ReferenceController) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this->Player).WeakReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      (this->Player).WeakReferenceCount.ReferenceController = pTVar5;
    }
    pTVar5 = (param_1->Converter).SharedReferenceCount.ReferenceController;
    pFVar7 = (param_1->Converter).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->Converter).SharedReferenceCount.ReferenceController;
    (this->Converter).Object = pFVar7;
    (this->Converter).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    this->EvaluationOffsetInSeconds = param_1->EvaluationOffsetInSeconds;
    return true;
  }
  return false;
}

// InitializeWithEvenOddLine @ 14d7b1040

bool __thiscall
FMediaIOCoreTextureSampleBase::InitializeWithEvenOddLine
          (FMediaIOCoreTextureSampleBase *this,bool param_1,void *param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,EMediaTextureSampleFormat param_7,FTimespan param_8,
          FFrameRate *param_9,TOptional<FTimecode> *param_10,FColorFormatArgs *param_11)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  void *_Src;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar9;
  
  (**(code **)(this->_padding_ + 0x180))();
  bVar4 = SetProperties(this,param_4,param_5,param_6 >> 1,param_7,param_8,param_9,param_10,param_11)
  ;
  bVar5 = false;
  if (bVar4) {
    pTVar9 = &this->Buffer;
    piVar1 = &(this->Buffer).ArrayMax;
    piVar2 = &(this->Buffer).ArrayNum;
    *piVar2 = 0;
    if ((this->Buffer).ArrayMax < (int)(param_3 >> 1)) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                (1,1,param_3 >> 1,&pTVar9->AllocatorInstance,0,piVar1);
    }
    for (uVar8 = param_1 ^ 1; uVar8 < param_6; uVar8 = uVar8 + 2) {
      _Src = (void *)((ulonglong)(uVar8 * param_4) + (longlong)param_2);
      if (((_Src == (void *)0x0) && (param_4 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                        (1,1,param_4,&pTVar9->AllocatorInstance,piVar2,piVar1);
      if (param_4 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data + iVar7,_Src,(longlong)(int)param_4);
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// IsCacheable @ 14d7b1610

bool __thiscall FMediaIOCoreTextureSampleBase::IsCacheable(FMediaIOCoreTextureSampleBase *this)

{
  return true;
}

// IsOutputSrgb @ 14d7b1700

bool __thiscall FMediaIOCoreTextureSampleBase::IsOutputSrgb(FMediaIOCoreTextureSampleBase *this)

{
  FOpenColorIOColorConversionSettings *this_00;
  bool bVar1;
  
  this_00 = (this->ColorConversionSettings).Object;
  if (this_00 != (FOpenColorIOColorConversionSettings *)0x0) {
    bVar1 = FOpenColorIOColorConversionSettings::IsValid(this_00);
    if (bVar1) {
      return false;
    }
  }
  return this->Encoding == sRGB;
}

// RequestBuffer @ 14d7bae20

void * __thiscall
FMediaIOCoreTextureSampleBase::RequestBuffer(FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  int *piVar1;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  pTVar2 = &this->Buffer;
  (**(code **)(this->_padding_ + 0x180))();
  iVar5 = (this->Buffer).ArrayNum;
  piVar1 = &(this->Buffer).ArrayNum;
  if (iVar5 < (int)param_1) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
              (1,1,param_1 - iVar5,&pTVar2->AllocatorInstance,piVar1,&(this->Buffer).ArrayMax);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar6 = (void *)(*pcVar3)();
          return pvVar6;
        }
      }
      if (uVar7 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (int)param_1;
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,*piVar1,&(this->Buffer).ArrayMax);
      }
    }
  }
  return (pTVar2->AllocatorInstance).Data;
}

// SetBuffer @ 14d7bbbf0

bool __thiscall
FMediaIOCoreTextureSampleBase::SetBuffer
          (FMediaIOCoreTextureSampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    return false;
  }
  _Src = (param_1->AllocatorInstance).Data;
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = iVar2;
  UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
            (1,1,iVar2,*piVar1,&(this->Buffer).AllocatorInstance,iVar2,piVar1);
  memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar2);
  return true;
}

// SetBuffer @ 14d7bbc70

bool __thiscall
FMediaIOCoreTextureSampleBase::SetBuffer
          (FMediaIOCoreTextureSampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    return false;
  }
  _Src = (param_1->AllocatorInstance).Data;
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = iVar2;
  UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
            (1,1,iVar2,*piVar1,&(this->Buffer).AllocatorInstance,iVar2,piVar1);
  memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar2);
  return true;
}

// SetBuffer @ 14d7bbcf0

bool __thiscall
FMediaIOCoreTextureSampleBase::SetBuffer
          (FMediaIOCoreTextureSampleBase *this,void *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar3;
  int iVar4;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  pTVar3 = &this->Buffer;
  if (-1 < (int)param_2) {
    piVar1 = &(this->Buffer).ArrayMax;
    piVar2 = &(this->Buffer).ArrayNum;
    *piVar2 = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                (1,1,param_2,&pTVar3->AllocatorInstance,0,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                      (1,1,param_2,&pTVar3->AllocatorInstance,piVar2,piVar1);
    if (param_2 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data + iVar4,param_1,(longlong)(int)param_2);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
}

// SetBufferWithEvenOddLine @ 14d7bbf00

bool __thiscall
FMediaIOCoreTextureSampleBase::SetBufferWithEvenOddLine
          (FMediaIOCoreTextureSampleBase *this,bool param_1,void *param_2,uint param_3,uint param_4,
          uint param_5)

{
  int *piVar1;
  TArray<unsigned_char,TAlignedHeapAllocator<4096>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  void *_Src;
  
  pTVar2 = &this->Buffer;
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < (int)(param_3 >> 1)) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
              (1,1,param_3 >> 1,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar7 = param_1 ^ 1;
  while( true ) {
    if (param_5 <= uVar7) {
      return true;
    }
    _Src = (void *)((ulonglong)(uVar7 * param_4) + (longlong)param_2);
    if (((_Src == (void *)0x0) && (param_4 != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) break;
    iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
                      (1,1,param_4,&pTVar2->AllocatorInstance,&(this->Buffer).ArrayNum,piVar1);
    if (param_4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data + iVar6,_Src,(longlong)(int)param_4);
    }
    uVar7 = uVar7 + 2;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// SetColorConversionSettings @ 14d7bc0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaIOCoreTextureSampleBase::SetColorConversionSettings
          (FMediaIOCoreTextureSampleBase *this,
          TSharedPtr<FOpenColorIOColorConversionSettings,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FOpenColorIOColorConversionSettings *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined8 local_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->ColorConversionSettings).SharedReferenceCount.ReferenceController;
  (this->ColorConversionSettings).Object = pFVar2;
  (this->ColorConversionSettings).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar7 = IsInGameThread();
  if (bVar7) {
    CacheColorCoversionSettings_GameThread(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  puVar3 = (undefined1 *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
    aVar6 = pTVar1->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14d7bc17e;
      }
      LOCK();
      aVar8 = pTVar1->SharedReferenceCount;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
  }
  puVar10 = puVar3;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  puVar9 = puVar10 + 0x18;
  if (puVar10 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x0;
  }
  if ((longlong *)puVar9 != &this->_padding_) {
LAB_14d7bc17e:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::`7'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,void>
                ::Call;
  local_30 = puVar3;
  local_28 = pTVar1;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDestructionCallback @ 14d7bc4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMediaIOCoreTextureSampleBase::SetDestructionCallback
          (FMediaIOCoreTextureSampleBase *this,
          TFunction<void___cdecl(TRefCountPtr<FRHITexture>)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->DestructionCallback;
  uVar7 = *(undefined8 *)&(this->DestructionCallback).field_0x8;
  uVar1 = *(undefined4 *)&(this->DestructionCallback).field_0x10;
  uVar2 = *(undefined4 *)&(this->DestructionCallback).field_0x14;
  uVar3 = *(undefined4 *)&(this->DestructionCallback).field_0x18;
  uVar4 = *(undefined4 *)&(this->DestructionCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(this->DestructionCallback).field_0x20;
  plVar10 = *(longlong **)&(this->DestructionCallback).field_0x28;
  *(longlong *)&this->DestructionCallback = local_58;
  *(undefined8 *)&(this->DestructionCallback).field_0x8 = uStack_50;
  *(undefined4 *)&(this->DestructionCallback).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->DestructionCallback).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->DestructionCallback).field_0x18 = uStack_40;
  *(undefined4 *)&(this->DestructionCallback).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->DestructionCallback).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->DestructionCallback).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->DestructionCallback).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->DestructionCallback).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetFrameNumber @ 14d7bc790

void __thiscall
FMediaIOCoreTextureSampleBase::SetFrameNumber(FMediaIOCoreTextureSampleBase *this,uint param_1)

{
  atomic<unsigned___int64> aVar1;
  
  aVar1._4_4_ = 0;
  aVar1._0_4_ = param_1;
  LOCK();
  this->FrameNumber = aVar1;
  UNLOCK();
  return;
}

// SetProperties @ 14d7bcfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMediaIOCoreTextureSampleBase::SetProperties
          (FMediaIOCoreTextureSampleBase *this,uint param_1,uint param_2,uint param_3,
          EMediaTextureSampleFormat param_4,FTimespan param_5,FFrameRate *param_6,
          TOptional<FTimecode> *param_7,FColorFormatArgs *param_8)

{
  TOptional<FTimecode> *pTVar1;
  EColorSpace EVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined3 uVar7;
  FColorSpace *pFVar8;
  bool bVar9;
  FColorSpace *pFVar10;
  FColorSpace *pFVar11;
  FColorSpace *pFVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  FColorSpace local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar9 = false;
  if (param_4 != Undefined) {
    this->SampleFormat = param_4;
    (this->Time).Ticks = param_5.Ticks;
    this->Stride = param_1;
    this->Width = param_2;
    this->Height = param_3;
    (this->Duration).Ticks =
         (longlong)
         (((double)param_6->Denominator / (double)param_6->Numerator) * __real_416312d000000000);
    pTVar1 = &this->Timecode;
    if (param_7 != pTVar1) {
      if (param_7->bIsSet == false) {
        if ((this->Timecode).bIsSet != false) {
          (this->Timecode).bIsSet = false;
        }
      }
      else {
        iVar4 = (param_7->TypedValue).Minutes;
        iVar5 = (param_7->TypedValue).Seconds;
        iVar6 = (param_7->TypedValue).Frames;
        (pTVar1->TypedValue).Hours = (param_7->TypedValue).Hours;
        (pTVar1->TypedValue).Minutes = iVar4;
        (this->Timecode).TypedValue.Seconds = iVar5;
        (this->Timecode).TypedValue.Frames = iVar6;
        bVar9 = (param_7->TypedValue).bDropFrameFormat;
        uVar7 = *(undefined3 *)&(param_7->TypedValue).field_0x15;
        (this->Timecode).TypedValue.Subframe = (param_7->TypedValue).Subframe;
        (this->Timecode).TypedValue.bDropFrameFormat = bVar9;
        *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar7;
        (this->Timecode).bIsSet = true;
      }
    }
    this->Encoding = param_8->Encoding;
    EVar2 = param_8->ColorSpaceType;
    this->ColorSpaceType = EVar2;
    pFVar10 = UE::Color::FColorSpace::FColorSpace(&local_168,EVar2);
    lVar13 = 2;
    pFVar8 = &this->ColorSpaceStruct;
    do {
      pFVar12 = pFVar8;
      pFVar11 = pFVar10;
      pFVar8 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
      dVar3 = (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar10 = (FColorSpace *)((pFVar11->RgbToXYZ).M + 2);
      (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar3;
      dVar3 = (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar3;
      dVar3 = (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar3;
      dVar3 = (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar3;
      dVar3 = (pFVar11->RgbToXYZ).M[0][1];
      (pFVar12->RgbToXYZ).M[0][0] = (pFVar11->RgbToXYZ).M[0][0];
      (pFVar12->RgbToXYZ).M[0][1] = dVar3;
      dVar3 = (pFVar11->RgbToXYZ).M[0][3];
      (pFVar12->RgbToXYZ).M[0][2] = (pFVar11->RgbToXYZ).M[0][2];
      (pFVar12->RgbToXYZ).M[0][3] = dVar3;
      dVar3 = (pFVar11->RgbToXYZ).M[1][1];
      (pFVar12->RgbToXYZ).M[1][0] = (pFVar11->RgbToXYZ).M[1][0];
      (pFVar12->RgbToXYZ).M[1][1] = dVar3;
      dVar3 = (pFVar11->RgbToXYZ).M[1][3];
      (pFVar12->RgbToXYZ).M[1][2] = (pFVar11->RgbToXYZ).M[1][2];
      (pFVar12->RgbToXYZ).M[1][3] = dVar3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar3 = (pFVar11->RgbToXYZ).M[2][1];
    (pFVar8->Chromaticities).Elements[0].field0_0x0._s_0.X =
         (pFVar10->Chromaticities).Elements[0].field0_0x0._s_0.X;
    (pFVar12->RgbToXYZ).M[2][1] = dVar3;
    dVar3 = (pFVar11->RgbToXYZ).M[2][3];
    (pFVar12->RgbToXYZ).M[2][2] = (pFVar11->RgbToXYZ).M[2][2];
    (pFVar12->RgbToXYZ).M[2][3] = dVar3;
    dVar3 = (pFVar11->RgbToXYZ).M[3][1];
    (pFVar12->RgbToXYZ).M[3][0] = (pFVar11->RgbToXYZ).M[3][0];
    (pFVar12->RgbToXYZ).M[3][1] = dVar3;
    dVar3 = (pFVar11->RgbToXYZ).M[3][3];
    (pFVar12->RgbToXYZ).M[3][2] = (pFVar11->RgbToXYZ).M[3][2];
    (pFVar12->RgbToXYZ).M[3][3] = dVar3;
    dVar3 = (pFVar11->XYZToRgb).M[0][1];
    bVar9 = true;
    (pFVar12->XYZToRgb).M[0][0] = (pFVar11->XYZToRgb).M[0][0];
    (pFVar12->XYZToRgb).M[0][1] = dVar3;
  }
  return bVar9;
}

// SetTexture @ 14d7bd2a0

void __thiscall
FMediaIOCoreTextureSampleBase::SetTexture
          (FMediaIOCoreTextureSampleBase *this,TRefCountPtr<FRHITexture> param_1)

{
  FRHITexture *this_00;
  TRefCountPtr<FRHITexture> *pTVar1;
  
  pTVar1 = &this->Texture;
  if ((FRHITexture *)pTVar1 != param_1.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(param_1.Reference)->_padding_;
    (param_1.Reference)->_padding_ = 0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
    return;
  }
  return;
}

// SetTime @ 14d7bd2f0

void __thiscall
FMediaIOCoreTextureSampleBase::SetTime(FMediaIOCoreTextureSampleBase *this,FTimespan *param_1)

{
  (this->Time).Ticks = param_1->Ticks;
  return;
}

// ShutdownPoolable @ 14d7bd5a0

void __thiscall FMediaIOCoreTextureSampleBase::ShutdownPoolable(FMediaIOCoreTextureSampleBase *this)

{
  longlong *plVar1;
  FRHITexture *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FRHIResource *local_res8;
  
  if ((this->Texture).Reference != (FRHITexture *)0x0) {
    local_res8 = (FRHIResource *)this->_padding_;
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_res8);
    }
    UE::Core::Private::Function::CheckCallable((this->Texture).Reference);
    plVar1 = *(longlong **)&(this->DestructionCallback).field_0x20;
    pFVar2 = (this->Texture).Reference;
    plVar4 = (longlong *)&(this->DestructionCallback).field_0x8;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*(code *)pFVar2)(uVar3,&local_res8);
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7bd61e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this[-1].CachedOCIOResources.SharedReferenceCount.ReferenceController[0x18]._padding_)
            (&this[-1].CachedOCIOResources.SharedReferenceCount);
  return;
}

