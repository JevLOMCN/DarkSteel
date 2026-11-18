// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 5

// AddPreOrPostProcess @ 14eaed2f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
UE::NNEDenoiser::Private::IOProcessBaseHelper::AddPreOrPostProcess
          (FRDGBuilder *param_1,FRDGTexture *param_2,EResourceName param_3,int param_4,
          FRDGTexture *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FRDGTextureUAV *pFVar9;
  FGlobalShaderMap *this;
  FShaderType *pFVar10;
  FName this_00;
  FRDGScope *this_01;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  undefined8 *puVar13;
  undefined8 *local_118;
  int local_110;
  int iStack_10c;
  FRDGTextureUAVDesc local_100;
  TIntVector3<int>_u_0 local_e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d8;
  undefined1 local_c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  FString local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_98;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS,FShaderMapPointerTable>
  local_88;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  FRDGEventName local_58;
  
  iVar3 = *(int *)&(param_2->Desc).field_0x28;
  iVar4 = *(int *)&(param_2->Desc).field_0x24;
  puVar13 = (undefined8 *)0x0;
  if ((((iVar4 != *(int *)&(param_5->Desc).field_0x24) ||
       (iVar3 != *(int *)&(param_5->Desc).field_0x28)) ||
      (*(short *)&(param_2->Desc).field_0x2c != *(short *)&(param_5->Desc).field_0x2c)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == OutputTexture->Desc.GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                         ,0x34,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar8[3] = 0;
    *puVar8 = &
              ___7__TObject_VFParameters_FDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar8[4] = 0;
    puVar13 = puVar8;
  }
  local_118 = puVar13;
  if ((((undefined8 **)param_1->_padding_ <= &local_118) &&
      (&local_118 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  local_100._padding_._1_1_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_118;
  puVar13[3] = param_2;
  ((FParameters *)(puVar13 + 2))->Width = iVar4;
  *(int *)((longlong)puVar13 + 0x14) = iVar3;
  local_100._padding_._0_1_ = (param_5->Desc).field_0x34;
  local_100._padding_._2_4_ = 0;
  local_100._padding_._6_1_ = 0;
  local_100._padding_._0_1_ = 0;
  local_100.Texture = param_5;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_100,None);
  puVar13[4] = pFVar9;
  if (param_3 != Color) {
    if (param_3 == Albedo) {
      iVar7 = 1;
      goto LAB_14eaed522;
    }
    if (param_3 == Normal) {
      iVar7 = 2;
      goto LAB_14eaed522;
    }
    if (param_3 == Flow) {
      iVar7 = 3;
      goto LAB_14eaed522;
    }
    if (param_3 == Output) {
      iVar7 = 4;
      goto LAB_14eaed522;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                       ,0x25,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = 0;
LAB_14eaed522:
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar10 = (FShaderType *)NNEDenoiserShaders::Internal::FDefaultIOProcessCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_b8,pFVar10,iVar7);
  if (local_b8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_110);
    ::FName::ToString((FName *)this_00,&local_a8);
    NNEDenoiserShaders::Internal::FDefaultIOProcessCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FDefaultIOProcessCS::GetStaticType();
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar6 = false;
  local_88.ShaderContent = (FDefaultIOProcessCS *)local_b8.ShaderContent;
  local_88.ShaderMap = local_b8.ShaderMap;
  local_c8 = 0;
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x47;
      local_68 = 0x54dc54f0;
      uStack_64 = 1;
      ::Desc._padding_._0_4_ = 0x54dc54f0;
      ::Desc._padding_._4_4_ = uStack_6c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Def;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Def;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddPreOrPostProcess'::__l14::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_98._Myfirst._Val = &::Desc;
    local_d8.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_d8.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_98);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar6 = true;
    local_c8 = 1;
  }
  local_110 = (int)((iVar4 + 0xf >> 0x1f & 0xfU) + iVar4 + 0xf) >> 4;
  iStack_10c = (int)((iVar3 + 0xf >> 0x1f & 0xfU) + iVar3 + 0xf) >> 4;
  pFVar11 = FRDGEventName::FRDGEventName(&local_58,1,L"NNEDenoiser.DefaultIOProcess");
  pFVar12 = NNEDenoiserShaders::Internal::FDefaultIOProcessCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_e8._0_8_ = CONCAT44(iStack_10c,local_110);
  local_e8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>
            (param_1,pFVar11,NeverCull|Compute,&local_88,pFVar12,(FParameters *)(puVar13 + 2),
             (TIntVector3<int> *)&local_e8._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d8);
  }
  return;
}

// AddReadInputPass @ 14eaed810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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
UE::NNEDenoiser::Private::IOProcessBaseHelper::AddReadInputPass
          (FRDGBuilder *param_1,FRDGTexture *param_2,FRDGBufferUAV *param_3,
          TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FParameters *pFVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  FGlobalShaderMap *this;
  FShaderType *pFVar14;
  FName this_00;
  FRDGScope *this_01;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *local_108;
  int local_100;
  int iStack_fc;
  TIntVector3<int>_u_0 local_e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d8;
  undefined1 local_c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  FString local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_> local_98;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS,FShaderMapPointerTable>
  local_88;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  FRDGEventName local_58;
  
  if (param_4->ArrayNum == 0) {
    if ((byte)LogNNEDenoiser._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    return;
  }
  if (3 < param_4->ArrayNum) {
    if ((byte)LogNNEDenoiser._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    return;
  }
  iVar11 = *(int *)&(param_2->Desc).field_0x28;
  iVar12 = *(int *)&(param_2->Desc).field_0x24;
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x70,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    *puVar13 = &
               ___7__TObject_VFParameters_FTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar13[3] = 0;
    puVar13[4] = 0;
  }
  local_108 = puVar13;
  if ((((undefined8 **)param_1->_padding_ <= &local_108) &&
      (&local_108 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FParameters *)(puVar13 + 2);
  *(int *)&param_1->_padding_ = iVar8 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_108;
  pFVar2->Width = iVar12;
  *(int *)((longlong)puVar13 + 0x14) = iVar11;
  uVar9 = 0;
  puVar13[3] = param_2;
  puVar13[4] = param_3;
  iVar8 = param_4->ArrayNum;
  if (0 < iVar8) {
    lVar19 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < iVar8) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar19);
      uVar10 = 0;
      if ((int)uVar9 < param_4->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = (ulonglong)uVar9;
      uVar9 = uVar9 + 1;
      uVar5 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar19 + 4);
      lVar19 = lVar19 + 8;
      *(undefined4 *)((pFVar2->OutputChannel_InputChannel_Unused_Unused).Elements + uVar17) = uVar4;
      *(undefined4 *)((longlong)puVar13 + uVar17 * 0x10 + 0x34) = uVar5;
      puVar13[uVar17 * 2 + 7] = 0;
      iVar8 = param_4->ArrayNum;
    } while ((int)uVar9 < iVar8);
  }
  cVar3 = (param_2->Desc).field_0x33;
  iVar8 = 3;
  if (cVar3 == '\x01') {
LAB_14eaedb26:
    iVar18 = 4;
  }
  else if (cVar3 == '\n') {
LAB_14eaedb21:
    iVar18 = 3;
  }
  else {
    if (cVar3 == '\r') goto LAB_14eaedb26;
    if (cVar3 == '\x15') goto LAB_14eaedb21;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                       ,0xa3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar18 = 0;
  }
  cVar3 = (char)(param_3->Desc)._padding_;
  if (cVar3 != '\x01') {
    if (cVar3 == '\n') goto LAB_14eaedb7a;
    if (cVar3 != '\r') {
      if (cVar3 != '\x15') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                           ,0xa3,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = 0;
      }
      goto LAB_14eaedb7a;
    }
  }
  iVar8 = 4;
LAB_14eaedb7a:
  iVar11 = iVar11 + 0xf;
  uVar9 = param_4->ArrayNum;
  iVar12 = iVar12 + 0xf;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  if ((4 < uVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (FShaderType *)NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::GetStaticType()
  ;
  FGlobalShaderMap::GetShader(this,&local_b8,pFVar14,(iVar8 + uVar9 * 5) * 5 + iVar18);
  if (local_b8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_100);
    ::FName::ToString((FName *)this_00,&local_a8);
    NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::GetStaticType();
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar7 = false;
  local_88.ShaderContent = (FTextureBufferMappedCopyCS *)local_b8.ShaderContent;
  local_88.ShaderMap = local_b8.ShaderMap;
  local_c8 = 0;
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x83;
      local_68 = 0x54dc5410;
      uStack_64 = 1;
      ::Desc._padding_._0_4_ = 0x54dc5410;
      ::Desc._padding_._4_4_ = uStack_6c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Rea;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Rea;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddReadInputPass'::__l51::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_98._Myfirst._Val = &::Desc;
    local_d8.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_d8.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_98);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar7 = true;
    local_c8 = 1;
  }
  local_100 = (int)((iVar12 >> 0x1f & 0xfU) + iVar12) >> 4;
  iStack_fc = (int)((iVar11 >> 0x1f & 0xfU) + iVar11) >> 4;
  pFVar15 = FRDGEventName::FRDGEventName(&local_58,1,L"NNEDenoiser.ReadInput");
  pFVar16 = NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_e8._0_8_ = CONCAT44(iStack_fc,local_100);
  local_e8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>
            (param_1,pFVar15,NeverCull|Compute,&local_88,pFVar16,pFVar2,
             (TIntVector3<int> *)&local_e8._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d8);
  }
  return;
}

// AddReadInputPassForKind @ 14eaedea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::NNEDenoiser::Private::IOProcessBaseHelper::AddReadInputPassForKind
          (FRDGBuilder *param_1,IResourceAccess *param_2,EResourceName param_3,
          FResourceMapping *param_4,FRDGBufferUAV *param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  FRDGBuilder *pFVar3;
  longlong *plVar4;
  bool bVar5;
  FRDGTexture *pFVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  FRDGBuilder *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_1;
  FResourceMapping::GetChannelMappingPerFrame
            (param_4,(TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                      *)local_a8,param_3);
  uVar11 = local_80;
  iStack_118 = 0;
  local_100 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  if (local_80 != 0) {
    puVar12 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar13 = *puVar12;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_14eaedf61;
      uVar13 = puVar12[lVar8 + 1];
    }
    uStack_114 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_f0 = (int)lVar8;
    uStack_104 = local_100 + -1 + local_f0;
    if ((int)local_80 < (int)uStack_104) {
      uStack_104 = local_80;
    }
  }
LAB_14eaedf61:
  local_120 = (longlong *)local_a8;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar13 = local_80 & 0xffffffe0;
  iStack_f8 = local_a8._8_4_ - local_74;
  uStack_108 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_104;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar9 = (int)local_80 >> 5;
  TStack_d8._28_4_ = uStack_104;
  TStack_d8.BaseBitIndex = local_100;
  uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
  bVar7 = (byte)local_80;
  uStack_fc = uStack_104;
  local_e0 = local_120;
  TStack_d8.Array = local_110;
  if (((int)local_80 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar3 = local_e8;
  if (uVar11 != local_80) {
    puVar12 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar11 = -1 << (bVar7 & 0x1f) & puVar12[iVar9];
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14eaee06c;
      uVar11 = puVar12[lVar8 + 1];
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar13;
    if ((int)local_80 < (int)uVar11) {
      uVar11 = local_80;
    }
  }
LAB_14eaee06c:
  while( true ) {
    plVar4 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_d8.CurrentBitIndex == uVar11) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar4 == (longlong *)local_a8)) break;
    piVar10 = (int *)(*plVar4 + (longlong)TStack_d8.CurrentBitIndex * 0x20);
    pFVar6 = (FRDGTexture *)(**(code **)*param_2)(param_2,param_3,-*piVar10);
    AddReadInputPass(pFVar3,pFVar6,param_5,
                     (TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>
                      *)(piVar10 + 2));
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// AddWriteOutputPass @ 14eaeecb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
UE::NNEDenoiser::Private::IOProcessBaseHelper::AddWriteOutputPass
          (FRDGBuilder *param_1,FRDGBuffer *param_2,EPixelFormat param_3,FRDGTexture *param_4,
          EDataType param_5,
          TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  FParameters *pFVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  FRDGBufferSRV *pFVar13;
  FRDGTextureUAV *pFVar14;
  FGlobalShaderMap *this;
  FShaderType *pFVar15;
  FName this_00;
  FRDGScope *this_01;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar21;
  longlong lVar22;
  undefined8 *local_150;
  int local_148;
  int iStack_144;
  FRDGTextureUAVDesc local_138;
  TIntVector3<int>_u_0 local_118;
  TRDGEventScopeGuard<FRDGScope_RHI> local_108;
  undefined1 local_f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FRDGBufferSRVDesc local_d8;
  FString local_b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_a8;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS,FShaderMapPointerTable>
  local_98;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  FRDGEventName local_68;
  ulonglong uVar20;
  
  iVar10 = *(int *)&(param_4->Desc).field_0x28;
  iVar11 = *(int *)&(param_4->Desc).field_0x24;
  puVar19 = (undefined8 *)0x0;
  puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x70,0x10);
  if (puVar12 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    puVar12[3] = 0;
    *puVar12 = &
               ___7__TObject_VFParameters_FBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar12[4] = 0;
    puVar19 = puVar12;
  }
  local_150 = puVar19;
  if ((((undefined8 **)param_1->_padding_ <= &local_150) &&
      (&local_150 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FParameters *)(puVar19 + 2);
  *(int *)&param_1->_padding_ = iVar8 + 1;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_150;
  pFVar2->Width = iVar11;
  *(int *)((longlong)puVar19 + 0x14) = iVar10;
  local_d8._padding_._0_1_ = param_3;
  local_d8.Buffer = param_2;
  pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_d8);
  puVar19[3] = pFVar13;
  local_138._padding_._0_1_ = (param_4->Desc).field_0x34;
  local_138._padding_._1_1_ = 0;
  local_138._padding_._2_4_ = 0;
  local_138._padding_._6_1_ = 0;
  local_138._padding_._0_1_ = 0;
  local_138.Texture = param_4;
  pFVar14 = FRDGBuilder::CreateUAV(param_1,&local_138,None);
  puVar19[4] = pFVar14;
  iVar8 = param_6->ArrayNum;
  if (0 < iVar8) {
    lVar22 = 0;
    uVar20 = 0;
    do {
      uVar18 = (uint)uVar20;
      uVar9 = 0;
      if ((int)uVar18 < iVar8) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(undefined4 *)((param_6->AllocatorInstance).Data + lVar22 + 4);
      uVar9 = 0;
      if ((int)uVar18 < param_6->ArrayNum) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(undefined4 *)((param_6->AllocatorInstance).Data + lVar22);
      lVar22 = lVar22 + 8;
      *(undefined4 *)((pFVar2->OutputChannel_InputChannel_Unused_Unused).Elements + uVar20) = uVar4;
      *(undefined4 *)((longlong)puVar19 + uVar20 * 0x10 + 0x34) = uVar5;
      puVar19[uVar20 * 2 + 7] = 0;
      iVar8 = param_6->ArrayNum;
      uVar20 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < iVar8);
  }
  iVar8 = 3;
  if (param_3 == PF_A32B32G32R32F) {
LAB_14eaeefb1:
    iVar21 = 4;
  }
  else if (param_3 == PF_FloatRGBA) {
LAB_14eaeefad:
    iVar21 = 3;
  }
  else {
    if (param_3 == PF_R32_FLOAT) goto LAB_14eaeefb1;
    if (param_3 == PF_R16F) goto LAB_14eaeefad;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                       ,0xa3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = 0;
  }
  cVar3 = (param_4->Desc).field_0x33;
  if (cVar3 != '\x01') {
    if (cVar3 == '\n') goto LAB_14eaef007;
    if (cVar3 != '\r') {
      if (cVar3 != '\x15') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                           ,0xa3,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = 0;
      }
      goto LAB_14eaef007;
    }
  }
  iVar8 = 4;
LAB_14eaef007:
  iVar10 = iVar10 + 0xf;
  uVar9 = param_6->ArrayNum;
  iVar11 = iVar11 + 0xf;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  if ((4 < uVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = (FShaderType *)NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::GetStaticType()
  ;
  FGlobalShaderMap::GetShader(this,&local_e8,pFVar15,(iVar8 + uVar9 * 5) * 5 + iVar21);
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_148);
    ::FName::ToString((FName *)this_00,&local_b8);
    NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::GetStaticType();
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar7 = false;
  local_98.ShaderContent = (FBufferTextureMappedCopyCS *)local_e8.ShaderContent;
  local_98.ShaderMap = local_e8.ShaderMap;
  local_f8 = 0;
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xb5;
      local_78 = 0x54dc5480;
      uStack_74 = 1;
      ::Desc._padding_._0_4_ = 0x54dc5480;
      ::Desc._padding_._4_4_ = uStack_7c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Wri;
      ::Desc._padding_ = (longlong)u_NNEDenoiser_Wri;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddWriteOutputPass'::__l9::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_a8._Myfirst._Val = &::Desc;
    local_108.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_108.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_a8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar7 = true;
    local_f8 = 1;
  }
  local_148 = (int)((iVar11 >> 0x1f & 0xfU) + iVar11) >> 4;
  iStack_144 = (int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4;
  pFVar16 = FRDGEventName::FRDGEventName(&local_68,1,L"NNEDenoiser.WriteOutput");
  pFVar17 = NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_118._0_8_ = CONCAT44(iStack_144,local_148);
  local_118._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>
            (param_1,pFVar16,NeverCull|Compute,&local_98,pFVar17,pFVar2,
             (TIntVector3<int> *)&local_118._s_0);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_108);
  }
  return;
}

// GetInputKind @ 14eaf9220

EDefaultIOProcessInputKind __cdecl
UE::NNEDenoiser::Private::IOProcessBaseHelper::GetInputKind(EResourceName param_1)

{
  code *pcVar1;
  bool bVar2;
  EDefaultIOProcessInputKind EVar3;
  
  if (param_1 != Color) {
    if (param_1 == Albedo) {
      return Albedo;
    }
    if (param_1 == Normal) {
      return Normal;
    }
    if (param_1 == Flow) {
      return Flow;
    }
    if (param_1 == Output) {
      return Output;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Color;
}

