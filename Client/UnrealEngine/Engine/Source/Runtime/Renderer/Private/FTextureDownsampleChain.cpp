// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetTexture @ 1451ddc00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FTextureDownsampleChain::GetTexture
          (FTextureDownsampleChain *this,FScreenPassTextureSlice *__return_storage_ptr__,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScreenPassTextureSlice *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1;
  uVar4 = 0;
  if ((int)param_1 < (this->Textures).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FScreenPassTextureSlice *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  __return_storage_ptr__->TextureSRV = *(FRDGTextureSRV **)(pFVar1 + lVar6 * 0x18);
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       *(TIntPoint<int>_u_0 *)(pFVar1 + lVar6 * 0x18 + 8);
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       *(TIntPoint<int>_u_0 *)(pFVar1 + lVar6 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// Init @ 1451ddf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureDownsampleChain::Init
          (FTextureDownsampleChain *this,FRDGBuilder *param_1,FViewInfo *param_2,
          FEyeAdaptationParameters *param_3,FScreenPassTextureSlice *param_4,
          EDownsampleQuality param_5,uint param_6,bool param_7,wchar_t *param_8,uint param_9)

{
  char cVar1;
  longlong lVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  FRDGScope *this_00;
  FString *pFVar9;
  longlong lVar10;
  FScreenPassTexture *pFVar11;
  FScreenPassTextureSlice *pFVar12;
  int iVar13;
  uint uVar14;
  wchar_t *pwVar15;
  FRDGTexture *pFVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  FScreenPassTexture local_150;
  FString local_138;
  TRDGEventScopeGuard<FRDGScope_RHI> local_128;
  char local_118;
  FDownsamplePassInputs local_110;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_e0;
  uint uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  FScreenPassTexture local_b0;
  FScreenPassTextureSlice local_98;
  FScreenPassTexture local_80;
  FScreenPassTextureSlice local_68;
  
  if (((param_4->TextureSRV == (FRDGTextureSRV *)0x0) ||
      ((*(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 8) ==
        *(int *)&(param_4->ViewRect).field0_0x0 &&
       (*(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 4))))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessDownsample.cpp"
                         ,0xce,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  uVar20 = (ulonglong)_tls_index;
  local_118 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_c0 = 0;
      uStack_bc = 0;
      ::Desc._12_8_ = ZEXT48(uStack_c4);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_TextureDownsamp;
      ::Desc._padding_ = (longlong)u_TextureDownsamp;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0xd0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FTextureDownsampleChain::Init'::__l14::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_e0._Myfirst._Val = &::Desc;
    local_128.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_128.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_e0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_118 = '\x01';
  }
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessDownsample.cpp"
                         ,0xd3,L"Potential race condition accessing DebugNames?"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FTextureDownsampleChain::Init'::__l2::_dynamic_atexit_destructor_for__DebugNames__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar13 = (this->Textures).ArrayNum;
  piVar17 = &(this->Textures).ArrayNum;
  uVar20 = (ulonglong)(int)param_6;
  if (iVar13 < (int)param_6) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_6 - iVar13,(ForAnyElementType *)this,piVar17,
                       &(this->Textures).ArrayMax);
    DefaultConstructItems<FScreenPassTextureSlice,int>
              ((this->Textures).AllocatorInstance.Data + (longlong)iVar6 * 0x18,param_6 - iVar13);
  }
  else {
    if ((int)param_6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_6);
    }
    if ((int)param_6 < iVar13) {
      uVar21 = iVar13 - param_6;
      if (((int)(uVar21 | param_6) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar21 != 0) {
        pFVar18 = (this->Textures).AllocatorInstance.Data + uVar20 * 0x18;
        iVar13 = (*piVar17 - uVar21) - param_6;
        if (iVar13 != 0) {
          memmove(pFVar18,pFVar18 + (longlong)(int)uVar21 * 0x18,(longlong)iVar13 * 0x18);
        }
        *piVar17 = *piVar17 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)this,*piVar17,&(this->Textures).ArrayMax);
      }
    }
  }
  if ((*piVar17 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar21 = 1;
  pFVar18 = (this->Textures).AllocatorInstance.Data;
  *(FRDGTextureSRV **)pFVar18 = param_4->TextureSRV;
  *(TIntPoint<int>_u_0 *)(pFVar18 + 8) = (param_4->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(pFVar18 + 0x10) = (param_4->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  if (1 < param_6) {
    do {
      piVar17 = &(this->Textures).ArrayNum;
      ::FString::PrintfImpl(&local_138,L"%s(1/%u)");
      if (local_138.Data.ArrayNum == 0) {
        pwVar15 = L"";
        iVar13 = 0;
      }
      else {
        iVar13 = local_138.Data.ArrayNum + -1;
        pwVar15 = (wchar_t *)local_138.Data.AllocatorInstance.Data;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar15);
      pFVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindOrAddByHash<FString_const_&>(&DebugNames,uVar7,&local_138,(bool *)0x0);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_110.Name = L"";
      }
      else {
        local_110.Name = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_110.UserSuppliedOutput = (IPooledRenderTarget *)0x0;
      local_110.Flags = None;
      local_110.FormatOverride = PF_Unknown;
      uVar7 = 0;
      if ((int)(uVar21 - 1) < *piVar17) {
        uVar7 = ~(uVar21 - 1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = (longlong)(int)uVar21;
      pFVar18 = (this->Textures).AllocatorInstance.Data;
      local_110.SceneColor.TextureSRV = *(FRDGTextureSRV **)(pFVar18 + lVar10 * 0x18 + -0x18);
      local_110.SceneColor.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 * 0x18 + -0x10);
      local_110.SceneColor.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 * 0x18 + -8);
      local_110.Quality = param_5;
      pFVar11 = AddDownsamplePass(&local_b0,param_1,param_2,&local_110);
      pFVar12 = FScreenPassTextureSlice::CreateFromScreenPassTexture(&local_98,param_1,pFVar11);
      uVar14 = ~uVar21 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar21 < *piVar17) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar18 = (this->Textures).AllocatorInstance.Data;
      lVar10 = (longlong)(int)uVar21 * 0x18;
      *(FRDGTextureSRV **)(pFVar18 + lVar10) = pFVar12->TextureSRV;
      *(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 + 8) =
           (pFVar12->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      *(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 + 0x10) =
           (pFVar12->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      if (param_7 != false) {
        param_7 = false;
        uVar7 = 0;
        if ((int)uVar21 < *piVar17) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = (this->Textures).AllocatorInstance.Data + lVar10;
        lVar2 = *(longlong *)pFVar18;
        local_150.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(pFVar18 + 8);
        TVar3 = (TIntPoint<int>_u_0)
                *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)(pFVar18 + 0x10))->_s_0;
        local_150.ViewRect.field0_0x0._8_8_ = TVar3;
        if (lVar2 == 0) {
          pFVar16 = (FRDGTexture *)0x0;
          local_150.Texture = (FRDGTexture *)0x0;
LAB_1451de52e:
          if (pFVar16 != (FRDGTexture *)0x0) {
            iVar13 = (pFVar16->VisualizeTextureExtent).field0_0x0._s_0.X;
            iVar6 = (pFVar16->VisualizeTextureExtent).field0_0x0._s_0.Y;
            iVar19 = TVar3._s_0.X;
            if (TVar3._s_0.X < iVar13) {
              iVar19 = iVar13;
            }
            (pFVar16->VisualizeTextureExtent).field0_0x0._s_0.X = iVar19;
            uVar8 = local_150.ViewRect.field0_0x0._12_4_;
            if ((int)local_150.ViewRect.field0_0x0._12_4_ < iVar6) {
              uVar8 = iVar6;
            }
            (pFVar16->VisualizeTextureExtent).field0_0x0._s_0.Y = uVar8;
          }
        }
        else {
          pFVar16 = *(FRDGTexture **)(lVar2 + 0x40);
          local_150.Texture = pFVar16;
          if (pFVar16 != (FRDGTexture *)0x0) {
            cVar1 = (pFVar16->Desc).field_0x32;
            if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
              if ((*(short *)(lVar2 + 0x34) != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ScreenTexture.TextureSRV->Desc.FirstArraySlice == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                                     ,0x6b,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((*(short *)(*(longlong *)pFVar18 + 0x36) != 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ScreenTexture.TextureSRV->Desc.NumArraySlices == 1",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                                     ,0x6c,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            goto LAB_1451de52e;
          }
        }
        pFVar11 = AddBasicEyeAdaptationSetupPass(&local_80,param_1,param_2,param_3,&local_150);
        pFVar12 = FScreenPassTextureSlice::CreateFromScreenPassTexture(&local_68,param_1,pFVar11);
        uVar7 = 0;
        if ((int)uVar21 < (this->Textures).ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = (this->Textures).AllocatorInstance.Data;
        uVar20 = (ulonglong)param_6;
        *(FRDGTextureSRV **)(pFVar18 + lVar10) = pFVar12->TextureSRV;
        *(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 + 8) =
             (pFVar12->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        *(TIntPoint<int>_u_0 *)(pFVar18 + lVar10 + 0x10) =
             (pFVar12->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < (uint)uVar20);
  }
  this->bInitialized = true;
  if (local_118 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_128);
  }
  return;
}

