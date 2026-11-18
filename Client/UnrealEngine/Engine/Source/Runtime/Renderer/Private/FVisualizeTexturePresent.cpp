// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 14585b320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FVisualizeTexturePresent::PresentContent'::__l2::<lambda_2>::operator()
          (void *this,FCanvas *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UFont *pUVar12;
  size_t sVar13;
  FLinearColor_u_0 *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  TStringView<wchar_t> *pTVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FScriptContainerElement *local_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  FScriptContainerElement *local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  FString local_288;
  FScriptContainerElement *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  FString local_268;
  FScriptContainerElement *local_258;
  uint uStack_250;
  undefined4 uStack_24c;
  FString local_248;
  FScriptContainerElement *local_238;
  uint uStack_230;
  undefined4 uStack_22c;
  FString local_228;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FLinearColor_u_0 local_1c8;
  TStringView<wchar_t> local_1b8;
  FLinearColor_u_0 local_1a8;
  TStringView<wchar_t> local_198;
  FString local_188;
  FLinearColor_u_0 local_178;
  TStringView<wchar_t> local_168;
  FLinearColor_u_0 local_158;
  TStringView<wchar_t> local_148;
  FLinearColor_u_0 local_138;
  TStringView<wchar_t> local_128;
  FLinearColor_u_0 local_118;
  TStringView<wchar_t> local_108;
  FLinearColor_u_0 local_f8;
  TStringView<wchar_t> local_e8;
  FLinearColor_u_0 local_d8;
  TStringView<wchar_t> local_c8;
  FLinearColor_u_0 local_b8;
  TStringView<wchar_t> local_a8;
  FLinearColor_u_0 local_98;
  TStringView<wchar_t> local_88 [6];
  
  iVar8 = *(int *)(*(longlong *)((longlong)this + 0x70) + 0x390) + 100;
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x70) + 0x394);
  fVar20 = (float)iVar8;
  uVar9 = FVisualizeTexture::GetVersionCount
                    ((FVisualizeTexture *)&GVisualizeTexture,*(wchar_t **)(*(longlong *)this + 8));
  if (uVar9 == 0) {
    ::FString::PrintfImpl(&local_2c8,L"%s");
    FVar16.Data = local_2c8.Data.AllocatorInstance.Data;
    local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = 0;
    local_2c8.Data.ArrayMax = 0;
  }
  else {
    ::FString::PrintfImpl(&local_2d8,L"%s@%d @0..%d");
    FVar16.Data = local_2d8.Data.AllocatorInstance.Data;
    local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data.ArrayNum = 0;
    local_2d8.Data.ArrayMax = 0;
  }
  uVar9 = 0;
  ::FString::FString(&local_2e8,L"RGB");
  if (GVisualizeTexture._40_4_ == 0) {
    pwVar15 = L"R";
LAB_14585b463:
    ::FString::operator=(&local_2e8,pwVar15);
  }
  else {
    if (GVisualizeTexture._40_4_ == 1) {
      pwVar15 = L"G";
      goto LAB_14585b463;
    }
    if (GVisualizeTexture._40_4_ == 2) {
      pwVar15 = L"B";
      goto LAB_14585b463;
    }
    if (GVisualizeTexture._40_4_ == 3) {
      pwVar15 = L"A";
      goto LAB_14585b463;
    }
  }
  ::FString::PrintfImpl(&local_2a8,L"VisualizeTexture: \"%s\" %s*%g UV%d");
  uVar5 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  local_1c8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_1c8._8_8_ = _UNK_15076b1f8;
  pUVar12 = GetStatsFont();
  uVar10 = 0;
  if (local_2a8.Data.ArrayNum == 0) {
    local_2b8 = (FScriptContainerElement *)0x15060d16c;
LAB_14585b502:
    sVar13 = wcslen((wchar_t *)local_2b8);
    uStack_2b0 = (uint)sVar13;
  }
  else {
    local_2b8 = local_2a8.Data.AllocatorInstance.Data;
    uStack_2b0 = uVar10;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14585b502;
  }
  fVar6 = __real_41600000;
  fVar18 = (float)(iVar1 + 0xa0) + __real_41600000;
  local_1b8._12_4_ = uStack_2ac;
  local_1b8.Size = uStack_2b0;
  dVar3 = (double)iVar8;
  local_1b8.DataPtr = (wchar_t *)local_2b8;
  FCanvas::DrawShadowedString
            (param_1,dVar3,(double)fVar18,&local_1b8,pUVar12,(FLinearColor *)&local_1c8._s_0,
             &FLinearColor::Black);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  ::FString::PrintfImpl(&local_288,L"View ID %d: \"%s\"");
  local_1a8._0_8_ = uVar4;
  local_1a8._8_8_ = uVar5;
  pUVar12 = GetStatsFont();
  if (local_288.Data.ArrayNum == 0) {
    local_298 = (FScriptContainerElement *)0x15060d16c;
LAB_14585b5df:
    sVar13 = wcslen((wchar_t *)local_298);
    uStack_290 = (uint)sVar13;
  }
  else {
    local_298 = local_288.Data.AllocatorInstance.Data;
    uStack_290 = uVar10;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14585b5df;
  }
  fVar18 = fVar18 + fVar6;
  local_198._12_4_ = uStack_28c;
  local_198.Size = uStack_290;
  local_198.DataPtr = (wchar_t *)local_298;
  FCanvas::DrawShadowedString
            (param_1,dVar3,(double)fVar18,&local_198,pUVar12,(FLinearColor *)&local_1a8._s_0,
             &FLinearColor::Black);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  FPooledRenderTargetDesc::GenerateInfoString
            ((FPooledRenderTargetDesc *)((longlong)this + 0x10),&local_188);
  ::FString::PrintfImpl(&local_268,L"  TextureInfo: %s");
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  local_178._0_8_ = uVar4;
  local_178._8_8_ = uVar5;
  pUVar12 = GetStatsFont();
  if (local_268.Data.ArrayNum == 0) {
    local_278 = (FScriptContainerElement *)0x15060d16c;
LAB_14585b6a6:
    sVar13 = wcslen((wchar_t *)local_278);
    uStack_270 = (uint)sVar13;
  }
  else {
    local_278 = local_268.Data.AllocatorInstance.Data;
    uStack_270 = uVar10;
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14585b6a6;
  }
  local_168._12_4_ = uStack_26c;
  local_168.Size = uStack_270;
  fVar18 = fVar18 + fVar6;
  local_168.DataPtr = (wchar_t *)local_278;
  dVar3 = (double)(fVar20 + __real_41200000);
  FCanvas::DrawShadowedString
            (param_1,dVar3,(double)fVar18,&local_168,pUVar12,(FLinearColor *)&local_178._s_0,
             &FLinearColor::Black);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_248,L"  ViewportSize:(%d,%d)");
  local_158._0_8_ = uVar4;
  local_158._8_8_ = uVar5;
  pUVar12 = GetStatsFont();
  if (local_248.Data.ArrayNum == 0) {
    local_258 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_258 = local_248.Data.AllocatorInstance.Data;
    uStack_250 = uVar10;
    if (local_248.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14585b756;
  }
  sVar13 = wcslen((wchar_t *)local_258);
  uStack_250 = (uint)sVar13;
LAB_14585b756:
  fVar18 = fVar18 + fVar6;
  local_148._12_4_ = uStack_24c;
  local_148.Size = uStack_250;
  local_148.DataPtr = (wchar_t *)local_258;
  FCanvas::DrawShadowedString
            (param_1,dVar3,(double)fVar18,&local_148,pUVar12,(FLinearColor *)&local_158._s_0,
             &FLinearColor::Black);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (0 < *(int *)((longlong)this + 0xa0)) {
    do {
      uVar11 = uVar10;
      if ((int)uVar9 < *(int *)((longlong)this + 0xa0)) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      ::FString::PrintfImpl(&local_228,L"   View #%d: (%d,%d)-(%d,%d)");
      local_138._0_8_ = uVar4;
      local_138._8_8_ = uVar5;
      pUVar12 = GetStatsFont();
      if (local_228.Data.ArrayNum == 0) {
        local_238 = (FScriptContainerElement *)0x15060d16c;
LAB_14585b87b:
        sVar13 = wcslen((wchar_t *)local_238);
        uVar11 = (uint)sVar13;
      }
      else {
        local_238 = local_228.Data.AllocatorInstance.Data;
        uVar11 = uVar10;
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14585b87b;
      }
      fVar18 = fVar18 + fVar6;
      local_128._12_4_ = uStack_22c;
      local_128.Size = uVar11;
      local_128.DataPtr = (wchar_t *)local_238;
      uStack_230 = uVar11;
      FCanvas::DrawShadowedString
                (param_1,dVar3,(double)fVar18,&local_128,pUVar12,(FLinearColor *)&local_138._s_0,
                 &FLinearColor::Black);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
    } while ((int)uVar9 < *(int *)((longlong)this + 0xa0));
  }
  fVar18 = fVar18 + fVar6;
  dVar3 = (double)(fVar20 + __real_42200000);
  dVar19 = (double)fVar18;
  if ((*(uint *)((longlong)this + 0x30) >> 0x13 & 1) == 0) {
    local_f8._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_f8._8_8_ = _UNK_15076b188;
    pUVar12 = GetStatsFont();
    local_208 = L"Blinking Red: <0";
    uStack_200 = 0x10;
    local_e8._12_4_ = uStack_1fc;
    local_e8.Size = 0x10;
    local_e8.DataPtr = L"Blinking Red: <0";
    FCanvas::DrawShadowedString
              (param_1,dVar3,dVar19,&local_e8,pUVar12,(FLinearColor *)&local_f8._s_0,
               &FLinearColor::Black);
    local_d8._0_8_ = ___xmm_3f8000003f8000000000000000000000;
    local_d8._8_8_ = _UNK_15076b1e8;
    pUVar12 = GetStatsFont();
    uStack_1f0 = 0x19;
    local_1f8 = L"Blinking Blue: NAN or Inf";
    local_c8._12_4_ = uStack_1ec;
    local_c8.Size = 0x19;
    local_c8.DataPtr = L"Blinking Blue: NAN or Inf";
    FCanvas::DrawShadowedString
              (param_1,dVar3,(double)(fVar18 + fVar6),&local_c8,pUVar12,
               (FLinearColor *)&local_d8._s_0,&FLinearColor::Black);
    if (*(int *)((longlong)this + 0x7c) == 2) {
      local_b8._0_8_ = ___xmm_3f8000003f0888893eeaeaeb3e58d8d9;
      local_b8._8_8_ = _UNK_1510400a8;
      pUVar12 = GetStatsFont();
      uStack_1e0 = 0x32;
      local_1e8 = L"Color Key: Linear with white near and teal distant";
      pTVar17 = &local_a8;
      local_a8._12_4_ = uStack_1dc;
      local_a8.Size = 0x32;
      pFVar14 = &local_b8;
      local_a8.DataPtr = L"Color Key: Linear with white near and teal distant";
    }
    else {
      if (*(int *)((longlong)this + 0x7c) != 1) {
        return;
      }
      local_98._0_8_ = ___xmm_3f80000000000000000000003f000000;
      local_98._8_8_ = _UNK_151040088;
      pUVar12 = GetStatsFont();
      uStack_1d0 = 0x27;
      local_1d8 = L"Color Key: Nonlinear with white distant";
      pTVar17 = local_88;
      local_88[0]._12_4_ = uStack_1cc;
      local_88[0].Size = 0x27;
      pFVar14 = &local_98;
      local_88[0].DataPtr = L"Color Key: Nonlinear with white distant";
    }
    dVar19 = (double)(fVar18 + __real_41e00000);
  }
  else {
    local_118._0_8_ = ___xmm_3f800000000000003f8000003f800000;
    local_118._8_8_ = _UNK_150a07f68;
    pUVar12 = GetStatsFont();
    uStack_210 = 0x3f;
    local_218 = L"Content cannot be visualized on the GPU (TexCreate_CPUReadback)";
    pTVar17 = &local_108;
    local_108._12_4_ = uStack_20c;
    local_108.Size = 0x3f;
    pFVar14 = &local_118;
    local_108.DataPtr = L"Content cannot be visualized on the GPU (TexCreate_CPUReadback)";
  }
  FCanvas::DrawShadowedString
            (param_1,dVar3,dVar19,pTVar17,pUVar12,(FLinearColor *)&pFVar14->_s_0,
             &FLinearColor::Black);
  return;
}

// PresentContent @ 14587f330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
FVisualizeTexturePresent::PresentContent
          (FRDGBuilder *param_1,FViewInfo *param_2,FScreenPassRenderTarget *param_3)

{
  char cVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FRDGTexture *pFVar8;
  FRDGScope *this;
  FString *pFVar9;
  FCanvas *this_00;
  int iVar10;
  ForElementType<EPixelFormat> _Dst;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  size_t _Size;
  void *_Src_01;
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  int local_220;
  int local_21c [5];
  Type local_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  TIntRect<int> *local_1e8;
  undefined8 local_1e0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1d8;
  undefined1 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FRDGTexture *local_1a0 [10];
  ForElementType<EPixelFormat> local_150;
  undefined4 local_140;
  int local_13c [3];
  FViewInfo *local_130;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  FRDGTexture *local_f8;
  TIntRect<int>_u_0 local_f0;
  ERenderTargetLoadAction local_e0;
  FScreenPassTexture local_d8;
  FScreenPassRenderTarget local_c0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_> local_a0;
  FScreenPassViewInfo local_88;
  undefined8 local_70;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if ((param_3->_padding_ == 0) ||
     (((int)param_3->_padding_ == (int)param_3->_padding_ &&
      (*(int *)((longlong)&param_3->_padding_ + 4) == *(int *)((longlong)&param_3->_padding_ + 4))))
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VisualizeTexturePresent.cpp"
                       ,0xe,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((GVisualizeTexture._168_8_ != 0) || (GVisualizeTexture._176_8_ != 0)) {
    GVisualizeTexture._48_4_ = GVisualizeTexture._48_4_ & 0xfffffffc;
    pFVar8 = (FRDGTexture *)GVisualizeTexture._176_8_;
    if (GVisualizeTexture._168_8_ != 0) {
      GVisualizeTexture._176_8_ = 0;
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GVisualizeTexture.field_0xa8
                          ,(wchar_t *)GVisualizeTexture._184_8_,None);
    }
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar5 = false;
    local_1c8 = 0;
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          local_50 = 0;
          uStack_4c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_54);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)::u_VisualizeTextur;
          ::Desc._padding_ = (longlong)::u_VisualizeTextur;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._0_4_ = 0x2a;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVisualizeTexturePresent::PresentContent'::__l21::Desc::operator()<>'::__l3::
                 <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_a0._Myfirst._Val = &::Desc;
      local_1d8.State = (FRDGScopeState *)param_1;
      this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                       ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this;
      local_1d8.Scope = this;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>_>
                (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_a0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar5 = true;
      local_1c8 = 1;
    }
    uVar3 = GVisualizeTexture._280_4_;
    cVar1 = (pFVar8->Desc).field_0x32;
    if ((cVar1 == '\0') || (iVar11 = 1, cVar1 == '\x01')) {
      iVar11 = GVisualizeTexture._52_4_;
    }
    local_d8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(undefined8 *)&(pFVar8->Desc).field_0x24;
    local_1b8 = param_3->_padding_;
    local_1b0 = param_3->_padding_;
    local_c0._padding_ = param_3->_padding_;
    local_70 = 0;
    if (iVar11 == 0) {
      local_c0._padding_ = param_2->_padding_;
      local_c0._padding_ = param_2->_padding_;
    }
    else {
      iVar10 = local_d8.ViewRect.field0_0x0._8_4_;
      iVar13 = local_d8.ViewRect.field0_0x0._12_4_;
      if (iVar11 == 2) {
        iVar7 = ((int)param_2->_padding_ - (int)param_2->_padding_) / 2;
        iVar12 = (*(int *)((longlong)&param_2->_padding_ + 4) -
                 *(int *)((longlong)&param_2->_padding_ + 4)) / 2;
        local_1f8 = CONCAT44(iVar12,iVar7);
        local_c0._padding_ = CONCAT44(iVar12 - iVar13 / 2,iVar7 - iVar10 / 2);
        local_c0._padding_ = CONCAT44((iVar12 - iVar13 / 2) + iVar13,iVar10 + (iVar7 - iVar10 / 2));
        local_1f0 = local_1f8;
      }
      else {
        local_c0._padding_ = local_1b0;
        local_c0._padding_ = local_1b8;
        if (iVar11 == 3) {
          iVar7 = *(int *)((longlong)&param_2->_padding_ + 4);
          iVar12 = (int)param_2->_padding_ + 100;
          iVar15 = (int)((float)(iVar7 - *(int *)((longlong)&param_2->_padding_ + 4)) *
                        __real_3e99999a);
          local_1b0 = CONCAT44(iVar7 + -100,
                               (int)(((float)iVar10 / (float)iVar13) * (float)iVar15) + iVar12);
          local_1b8 = CONCAT44((iVar7 - iVar15) + -100,iVar12);
          local_c0._padding_ = local_1b0;
          local_c0._padding_ = local_1b8;
        }
      }
    }
    local_c0.LoadAction = param_3->LoadAction;
    local_d8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_208 = (Type)param_2->_padding_;
    iStack_204 = *(int *)((longlong)&param_2->_padding_ + 4);
    iStack_200 = *(int *)((longlong)&param_2->_padding_ + 4);
    uStack_1fc = CONCAT31(uStack_1fc._1_3_,*(undefined1 *)((longlong)&param_2->_padding_ + 6));
    local_88.StereoViewIndex = iStack_204;
    local_88.FeatureLevel = local_208;
    local_88._12_4_ = uStack_1fc;
    local_88.InstanceCount = iStack_200;
    local_d8.Texture = pFVar8;
    AddDrawTexturePass(param_1,&local_88,&local_d8,&local_c0,1);
    param_3->LoadAction = ELoad;
    local_1e0 = GVisualizeTexture._288_8_;
    pFVar9 = TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
             ::FindChecked((TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                            *)&GVisualizeTexture.field_0x140,GVisualizeTexture._284_4_);
    local_228.Data = (FScriptContainerElement *)0x0;
    local_220 = (pFVar9->Data).ArrayNum;
    lVar14 = (longlong)local_220;
    _Src = (pFVar9->Data).AllocatorInstance.Data;
    if (local_220 == 0) {
      local_21c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_220,0,&local_228,local_220,local_21c);
      memcpy(local_228.Data,_Src,lVar14 * 2);
    }
    uVar4 = GVisualizeTexture._304_4_;
    local_21c[1] = GVisualizeTexture._284_4_;
    local_1e8 = (TIntRect<int> *)GVisualizeTexture._296_8_;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = CONCAT44(local_230._4_4_,GVisualizeTexture._304_4_);
    if (GVisualizeTexture._304_4_ == 0) {
      local_230 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,GVisualizeTexture._304_4_,0,&local_238,GVisualizeTexture._304_4_,
                 (int *)((longlong)&local_230 + 4));
      ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
                (local_238.Data,local_1e8,uVar4);
    }
    _Size = (size_t)(int)GVisualizeTexture._264_4_;
    local_1a0[1] = (FRDGTexture *)local_1e0;
    local_1a0[2] = (FRDGTexture *)GVisualizeTexture._184_8_;
    local_1a0[5]._0_4_ = GVisualizeTexture._208_4_;
    local_1a0[6] = (FRDGTexture *)GVisualizeTexture._216_8_;
    local_1a0[7]._0_1_ = GVisualizeTexture._224_1_;
    local_1a0[7]._1_1_ = GVisualizeTexture._225_1_;
    local_1a0._60_8_ = GVisualizeTexture._228_8_;
    local_1a0[8]._4_2_ = GVisualizeTexture._236_2_;
    local_1a0[8]._6_2_ = GVisualizeTexture._238_2_;
    local_1a0[9]._0_1_ = GVisualizeTexture._240_1_;
    local_1a0[9]._1_1_ = GVisualizeTexture._241_1_;
    local_1a0[9]._2_1_ = GVisualizeTexture._242_1_;
    local_150.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_1a0[3] = (FRDGTexture *)GVisualizeTexture._192_8_;
    local_1a0[4] = (FRDGTexture *)GVisualizeTexture._200_8_;
    _Src_01 = &GVisualizeTexture.field_0xf8;
    if (GVisualizeTexture._256_8_ != 0) {
      _Src_01 = (void *)GVisualizeTexture._256_8_;
    }
    local_140 = GVisualizeTexture._264_4_;
    local_1a0[0] = pFVar8;
    if (GVisualizeTexture._264_4_ == 0) {
      local_13c[0] = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,GVisualizeTexture._264_4_,0,&local_150,GVisualizeTexture._264_4_,local_13c);
      _Dst = (ForElementType<EPixelFormat>)&local_150;
      if (local_150.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        _Dst = local_150.SecondaryData;
      }
      memcpy((void *)_Dst,_Src_01,_Size);
    }
    iVar10 = local_220;
    _Src_00.Data = local_228.Data;
    local_13c[1]._0_1_ = GVisualizeTexture._272_1_;
    local_124 = uVar3;
    local_120 = local_21c[1];
    local_118.Data = (FScriptContainerElement *)0x0;
    local_130 = param_2;
    local_128 = iVar11;
    local_110 = local_220;
    if (local_220 == 0) {
      local_10c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_220,0,&local_118,local_220,&local_10c);
      memcpy(local_118.Data,_Src_00.Data,(longlong)iVar10 * 2);
    }
    local_f0._s_0.Min.field0_0x0 = (TIntPoint<int>)param_3->_padding_;
    local_f0._s_0.Max.field0_0x0 = (TIntPoint<int>)param_3->_padding_;
    local_108 = local_238.Data;
    local_100 = (undefined4)local_230;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_f8 = (FRDGTexture *)param_3->_padding_;
    local_fc = local_230._4_4_;
    local_e0 = param_3->LoadAction;
    local_230 = 0;
    if ((local_f8 == (FRDGTexture *)0x0) ||
       ((local_f0._8_4_ == local_f0._0_4_ && (local_f0._12_4_ == local_f0._4_4_)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Output.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x2dd,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = FCanvas::Create(param_1,local_f8,(FHitProxyConsumer *)0x0,
                              (FGameTime *)(param_2->_padding_ + 0x88),(Type)param_2->_padding_,
                              *(float *)(param_2->_padding_ + 0xd8));
    FCanvas::SetRenderTargetRect(this_00,(TIntRect<int> *)&local_f0._s_0);
    `FVisualizeTexturePresent::PresentContent'::__l2::<lambda_2>::operator()(local_1a0,this_00);
    FCanvas::Flush_RenderThread(this_00,param_1,false);
    if (local_108 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_150.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_150.SecondaryData);
    }
    if (local_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data);
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data);
    }
    if (bVar5) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1d8);
    }
  }
  return;
}

