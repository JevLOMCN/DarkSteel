// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// OnUpdateValuesRenderThread @ 14601d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread(FSlatePostBufferBlurProxy *this)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSlateRHIPostBufferProcessorProxy *pFVar6;
  code *pcVar7;
  bool bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TSharedRef<FSlateRHIPostBufferProcessorProxy,1> *pTVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  code **ppcVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  TSharedRef<FSlateRHIPostBufferProcessorProxy,1> local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar8 = FRenderCommandFence::IsFenceComplete(&this->ParamUpdateFence);
  if ((bVar8) &&
     (pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), pUVar9 != (UObject *)0x0)) {
    pUVar10 = USlatePostBufferBlur::StaticClass();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) {
      fVar2 = *(float *)(pUVar9 + 1);
      if (fVar2 != this->GaussianBlurStrength_RenderThread) {
        if (fVar2 == this->GaussianBlurStrengthPreDraw) {
          *(float *)(pUVar9 + 1) = this->GaussianBlurStrength_RenderThread;
          this->GaussianBlurStrengthPreDraw = this->GaussianBlurStrength_RenderThread;
        }
        else {
          this->GaussianBlurStrengthPreDraw = fVar2;
          pTVar11 = TSharedFromThis<FSlateRHIPostBufferProcessorProxy,1>::AsShared
                              ((TSharedFromThis<FSlateRHIPostBufferProcessorProxy,1> *)
                               &this->_padding_,&local_b8);
          pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
          pFVar6 = pTVar11->Object;
          if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b8.SharedReferenceCount.ReferenceController);
          }
          else {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b8.SharedReferenceCount.ReferenceController);
            LOCK();
            pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
            UNLOCK();
          }
          local_a8[0] = (code *)0x0;
          local_80 = FMemory::Malloc(0x20,8);
          *(float *)(local_80 + 3) = fVar2;
          local_80[1] = (code *)pFVar6;
          *local_80 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread'::`16'::<lambda_1>,1,1>
                               ::_vftable_;
          local_80[2] = (code *)pTVar5;
          if (local_80 != (code **)&DAT_fffffffffffffff8) {
            local_a8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                          ::Call;
          }
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread_::__l16::TSTR_FUpdateValuesRenderThreadFX_Blur64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_78._0_8_ = local_a8[0];
            local_a8[0] = (code *)0x0;
            local_50 = local_80;
            local_80 = (code **)0x0;
            local_78._16_8_ = local_98[0];
            local_78._24_8_ = local_98[1];
            local_78._32_8_ = local_98[2];
            local_48 = 2;
            pFVar12 = (FRenderCommandTag *)
                      TRenderCommandTag<`FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread'::__l16::TSTR_FUpdateValuesRenderThreadFX_Blur64>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_78,pFVar12);
            uVar14 = (ulonglong)local_48;
            if ((2 < uVar14) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar14] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_78._0_8_ != (code *)0x0) {
                ppcVar13 = (code **)(local_78 + 0x10);
                if (local_50 != (code **)0x0) {
                  ppcVar13 = local_50;
                }
                (**(code **)(*ppcVar13 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar14])(local_78);
            }
          }
          if (local_a8[0] != (code *)0x0) {
            ppcVar13 = local_a8 + 2;
            if (local_80 != (code **)0x0) {
              ppcVar13 = local_80;
            }
            (**(code **)(*ppcVar13 + 0x10))();
          }
          FRenderCommandFence::BeginFence(&this->ParamUpdateFence,RenderThread);
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
        }
      }
    }
  }
  return;
}

// PostProcess_Renderthread @ 14601d930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlatePostBufferBlurProxy::PostProcess_Renderthread
          (FSlatePostBufferBlurProxy *this,FRDGBuilder *param_1,FScreenPassTexture *param_2,
          FScreenPassTexture *param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FRDGScope *this_00;
  uint uVar6;
  float fVar7;
  undefined1 local_e8 [8];
  TIntRect<int>_u_0 local_e0;
  FScreenPassTexture local_d0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_b0;
  undefined1 local_a0;
  FSlatePostProcessBlurPassInputs local_98;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar3 = false;
  local_a0 = 0;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_d0.ViewRect.field0_0x0._8_4_ = 0;
        local_d0.ViewRect.field0_0x0._12_4_ = 0;
        ::Desc._12_8_ = ZEXT48((uint)local_d0.ViewRect.field0_0x0._4_4_);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_SlatePostBuffer;
        ::Desc._padding_ = (longlong)u_SlatePostBuffer;
        ::Desc._padding_._0_4_ = 0x10;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FSlatePostBufferBlurProxy::PostProcess_Renderthread'::__l7::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_e0._s_0.Min.field0_0x0 = (TIntPoint<int>)&::Desc;
    local_b0.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_b0.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,
               (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_> *
               )local_e8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar3 = true;
    local_a0 = 1;
  }
  fVar7 = this->GaussianBlurStrength_RenderThread;
  if (__real_322bcc77 <= fVar7) {
    local_98.InputTexture = param_2->Texture;
    local_98.InputRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_98.InputRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_98.OutputTexture = param_3->Texture;
    local_98.OutputRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_98.OutputRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    if (fVar7 <= __real_3f000000) {
      fVar7 = __real_3f000000;
    }
    local_98.Strength = fVar7;
    if ((0.0 < SlatePostBlurStrengthOverride) &&
       (local_98.Strength = SlatePostBlurStrengthOverride,
       SlatePostBlurStrengthOverride <= __real_3f000000)) {
      local_98.Strength = __real_3f000000;
    }
    local_98.DownsampleAmount = 0;
    iVar4 = (int)ROUND(local_98.Strength * __real_40c00000 + __real_3f000000);
    uVar5 = iVar4 >> 1;
    if (9 < (int)uVar5) {
      if ((int)uVar5 < 0x40) {
        local_98.DownsampleAmount = 2;
      }
      else {
        local_98.DownsampleAmount = (0x5f < (int)uVar5) + 3;
      }
      uVar5 = (uint)(CONCAT44(iVar4 >> 0x1f,uVar5) / (longlong)(int)local_98.DownsampleAmount);
    }
    uVar6 = uVar5 + 1;
    if ((uVar5 & 1) != 0) {
      uVar6 = uVar5;
    }
    if (local_98.DownsampleAmount != 0) {
      local_98.Strength = local_98.Strength / (float)local_98.DownsampleAmount;
    }
    local_98.SDRCompositeUITexture = (FRDGTexture *)0x0;
    local_98.OutputLoadAction = ELoad;
    uVar5 = 0xff;
    if ((int)uVar6 < 0xff) {
      uVar5 = uVar6;
    }
    local_98.KernelSize = 3;
    if (3 < (int)uVar5) {
      local_98.KernelSize = uVar5;
    }
    local_98.ClippingOp = (FSlateClippingOp *)0x0;
    local_98.ClippingStencilBinding = (FDepthStencilBinding *)0x0;
    local_98.ClippingElementsViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_98.ClippingElementsViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_98.CornerRadius.field0_0x0._0_8_ = 0;
    local_98.CornerRadius.field0_0x0._8_8_ = 0;
    AddSlatePostProcessBlurPass(param_1,&local_98);
  }
  else {
    local_e8 = (undefined1  [8])param_3->Texture;
    local_e0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_e0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_d0.Texture = param_2->Texture;
    uVar2 = *(undefined8 *)&(param_2->ViewRect).field0_0x0;
    local_d0.ViewRect.field0_0x0._0_4_ = (undefined4)uVar2;
    local_d0.ViewRect.field0_0x0._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar2 = *(undefined8 *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
    local_d0.ViewRect.field0_0x0._8_4_ = (undefined4)uVar2;
    local_d0.ViewRect.field0_0x0._12_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    AddSlatePostProcessCopy(param_1,&local_d0,(FScreenPassTexture *)local_e8);
  }
  if (bVar3) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_b0);
  }
  return;
}

