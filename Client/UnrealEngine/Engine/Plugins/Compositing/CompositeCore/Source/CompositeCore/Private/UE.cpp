// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 12

// DereferenceIfNecessary<FCompositeCoreSceneViewExtension,FCompositeCoreSceneViewExtension_*_&> @ 14ea73720

FCompositeCoreSceneViewExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FCompositeCoreSceneViewExtension,FCompositeCoreSceneViewExtension_*_&>
          (FCompositeCoreSceneViewExtension **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_> @ 14ea75820

/* WARNING: Removing unreachable block (ram,0x00014ea75867) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_>
          (ushort param_1,ForElementType<FRDGViewableResource_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRDGViewableResource_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_> @ 14ea758b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGViewableResource_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGViewableResource_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRDGViewableResource_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_>_> @ 14ea758e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_> *param_4,
          int param_5,int *param_6)

{
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *_Src;
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].WeakPtr.ObjectSerialNumber, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// AddDilatePass @ 14ea79c60

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
UE::CompositeCore::Private::AddDilatePass
          (FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3,Type param_4,
          FDilateInputs *param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  FRDGTexture *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FRDGScope *this;
  FGlobalShaderMap *this_00;
  undefined8 *puVar10;
  FRDGTextureUAV *pFVar11;
  FShaderType *pFVar12;
  FName this_01;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  undefined8 *puVar15;
  ERDGPassFlags EVar16;
  FRDGTextureUAVDesc local_128;
  undefined8 *local_110;
  TIntVector3<int>_u_0 local_108;
  undefined8 local_f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_f0;
  char local_e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  undefined1 local_c8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_c0;
  FString local_b0;
  TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> local_98;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  FRDGEventName local_68;
  
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  puVar15 = (undefined8 *)0x0;
  local_e0 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x2e;
      local_78 = 0x54dc40d0;
      uStack_74 = 1;
      ::Desc._padding_._0_4_ = 0x54dc40d0;
      ::Desc._padding_._4_4_ = uStack_7c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_CompositeCore_D;
      ::Desc._padding_ = (longlong)u_CompositeCore_D;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::CompositeCore::Private::AddDilatePass'::__l7::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c0._Myfirst._Val = &::Desc;
    local_f0.State = (FRDGScopeState *)param_1;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this;
    local_f0.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_c0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_e0 = '\x01';
  }
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_4]);
  uVar3 = *(undefined8 *)&(param_2->Desc).field_0x24;
  local_f8 = uVar3;
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar10[2] = 0;
    *puVar10 = &___7__TObject_VFParameters_FCompositeCoreDilateShader___FRDGAllocator__6B_;
    puVar10[3] = 0;
    puVar15 = puVar10;
  }
  local_110 = puVar15;
  if ((((undefined8 **)param_1->_padding_ <= &local_110) &&
      (&local_110 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar8 + 1;
  local_128._padding_._1_1_ = 0;
  local_128._padding_._2_4_ = 0;
  local_128._padding_._6_1_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_110;
  ((FParameters *)(puVar15 + 2))->InputTexture = param_2;
  local_128._padding_._0_1_ = (param_3->Desc).field_0x34;
  local_128._padding_._0_1_ = '\0';
  local_128.Texture = param_3;
  FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_128);
  pFVar6 = local_128.Texture;
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  lVar4 = pFVar6->_padding_;
  *(byte *)&pFVar11->_padding_ = (byte)pFVar11->_padding_ & 0xfe;
  pFVar11->_padding_ = lVar4;
  pFVar11->_padding_ = 0;
  *(undefined1 *)&pFVar11->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar11->_padding_ = 0;
  pFVar11->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar11->Desc)._padding_ = (undefined1)local_128._padding_;
  *(undefined1 *)((longlong)&(pFVar11->Desc)._padding_ + 1) = local_128._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar11->Desc)._padding_ + 2) = local_128._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar11->Desc)._padding_ + 4) = local_128._padding_._4_2_;
  *(undefined1 *)&(pFVar11->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar11->Desc)._padding_ + 6) = local_128._padding_._6_1_;
  *(char *)&(pFVar11->Desc)._padding_ = (char)local_128._padding_;
  if ((char)local_128._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar11->Desc)._padding_ + 7) = local_128._padding_._7_1_;
  }
  piVar1 = &(param_1->Views).Array.ArrayMax;
  (pFVar11->Desc).Texture = local_128.Texture;
  iVar8 = (param_1->Views).Array.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                      (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
  }
  (param_1->Views).Array.ArrayNum = iVar8 + 1;
  (param_1->Views).Array.AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar11;
  *(int *)((longlong)&pFVar11->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar11);
  EVar16 = Compute;
  puVar15[3] = pFVar11;
  puVar15[4] = uVar3;
  *(uint *)(puVar15 + 5) = (uint)param_5->bOpacifyOutput;
  iVar8 = 2;
  if (param_5->DilationSize < 2) {
    iVar8 = param_5->DilationSize;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    iVar9 = iVar8;
  }
  if (((2 < iVar9) || (iVar9 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = (FShaderType *)FCompositeCoreDilateShader::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_d8,pFVar12,iVar9);
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
    ::FName::ToString((FName *)this_01,&local_b0);
    FCompositeCoreDilateShader::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCompositeCoreDilateShader::GetStaticType();
  bVar7 = GRHIGlobals.SupportsEfficientAsyncCompute;
  iVar8 = local_f8._4_4_;
  local_98.ShaderContent = (FCompositeCoreDilateShader *)local_d8.ShaderContent;
  local_98.ShaderMap = local_d8.ShaderMap;
  pFVar13 = FRDGEventName::FRDGEventName(&local_68,L"CompositeCore.Dilate (%dx%d)");
  pFVar14 = FCompositeCoreDilateShader::FParameters::FTypeInfo::GetStructMetadata();
  local_108._s_0.Z = 1;
  iVar9 = (int)uVar3 + 0xf;
  local_108._s_0.X = (int)(iVar9 + (iVar9 >> 0x1f & 0xfU)) >> 4;
  local_108._s_0.Y = (int)(iVar8 + 0xf + (iVar8 + 0xf >> 0x1f & 0xfU)) >> 4;
  if (bVar7 != false) {
    EVar16 = AsyncCompute;
  }
  FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>
            (param_1,pFVar13,EVar16,&local_98,pFVar14,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_108._s_0);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_e0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_f0);
  }
  return;
}

// AddDisplayTransformPass @ 14ea7a1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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

FScreenPassTexture * __cdecl
UE::CompositeCore::Private::AddDisplayTransformPass
          (FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
          FScreenPassViewInfo *param_2,FScreenPassTexture *param_3,FScreenPassRenderTarget *param_4,
          bool param_5,float param_6)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FRDGScope *this;
  FRDGTexture *pFVar7;
  FScreenPassTexture *pFVar8;
  undefined8 *puVar9;
  FShaderType *pFVar10;
  FName this_00;
  FRDGEventName *pFVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStackY_228 [32];
  ERenderTargetLoadAction local_1d8;
  undefined8 *local_1d0;
  FGlobalShaderMap *local_1c8;
  FRenderTargetBinding local_1c0;
  TIntPoint<int>_u_0 local_1a8;
  longlong local_1a0;
  longlong local_198;
  FScreenPassTexture *local_190;
  FScreenPassViewInfo *local_188;
  TRDGEventScopeGuard<FRDGScope_RHI> local_180;
  char local_170;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  undefined1 local_158 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_150;
  FString local_140;
  TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> local_128;
  FScreenPassViewInfo local_118;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  FRDGEventName local_c8;
  FRHITextureDesc local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_170 = '\0';
  local_190 = param_3;
  local_188 = param_2;
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x28;
      local_f8 = 0x54dc4210;
      uStack_f4 = 1;
      ::Desc._padding_._0_4_ = 0x54dc4210;
      ::Desc._padding_._4_4_ = uStack_fc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_CompositeCore_D;
      ::Desc._padding_ = (longlong)u_CompositeCore_D;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::CompositeCore::Private::AddDisplayTransformPass'::__l7::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_150._Myfirst._Val = &::Desc;
    local_180.State = (FRDGScopeState *)param_1;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this;
    local_180.Scope = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_150);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_170 = '\x01';
  }
  local_1c8 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [(int)param_2->FeatureLevel]);
  pFVar7 = (FRDGTexture *)param_4->_padding_;
  local_1d8 = param_4->LoadAction;
  lVar13 = param_4->_padding_;
  lVar12 = param_4->_padding_;
  if ((pFVar7 == (FRDGTexture *)0x0) ||
     (((int)lVar12 == (int)lVar13 &&
      ((int)((ulonglong)lVar12 >> 0x20) == (int)((ulonglong)lVar13 >> 0x20))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    FRHITextureDesc::FRHITextureDesc(&local_a8,(FRHITextureDesc *)&param_3->Texture->Desc);
    local_a8.Format = FSceneTexturesConfig::GlobalInstance.ColorFormat;
    local_a8.Flags = local_a8.Flags | RenderTargetable;
    pFVar7 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)&local_a8,L"FXAACompositePass",None);
    local_e0 = 0;
    uStack_d8 = 0;
    if (pFVar7 == (FRDGTexture *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)&(pFVar7->Desc).field_0x24;
    }
    lVar13 = 0;
    local_1d8 = ENoAction;
    if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  if (((pFVar7 == (FRDGTexture *)0x0) ||
      (((int)lVar12 == (int)lVar13 &&
       ((int)((ulonglong)lVar12 >> 0x20) == (int)((ulonglong)lVar13 >> 0x20))))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0xab,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FScreenPassTexture *)(*pcVar3)();
    return pFVar8;
  }
  local_1a8 = *(TIntPoint<int>_u_0 *)&(pFVar7->Desc).field_0x24;
  local_1a0 = lVar13;
  local_198 = lVar12;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x140,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FScreenPassTexture *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    *puVar9 = &___7__TObject_VFParameters_FCompositeCoreDisplayTransformShader___FRDGAllocator__6B_;
    puVar9[2] = 0;
    puVar9[3] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar9 + 8));
  }
  local_1d0 = puVar9;
  if ((((undefined8 **)param_1->_padding_ <= &local_1d0) &&
      (&local_1d0 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FScreenPassTexture *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  fVar4 = __real_3f800000;
  *(int *)&param_1->_padding_ = iVar6 + 1;
  local_1c0.ResolveTexture = (FRDGTexture *)0x0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_1d0;
  local_1c0.MipIndex = '\0';
  ((FParameters *)(puVar9 + 2))->InputTexture = local_190->Texture;
  puVar9[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  *(uint *)(puVar9 + 5) = (uint)param_5;
  local_1c0.LoadAction = local_1d8;
  local_1c0.ArraySlice = -1;
  *(float *)((longlong)puVar9 + 0x2c) = param_6;
  *(float *)(puVar9 + 6) = fVar4 / param_6;
  local_1c0.Texture = pFVar7;
  bVar5 = FRenderTargetBinding::Validate(&local_1c0);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FScreenPassTexture *)(*pcVar3)();
    return pFVar8;
  }
  puVar9[8] = local_1c0.Texture;
  puVar9[9] = local_1c0.ResolveTexture;
  puVar9[10] = CONCAT44(local_1c0._20_4_,
                        CONCAT22(local_1c0.ArraySlice,
                                 CONCAT11(local_1c0.MipIndex,local_1c0.LoadAction)));
  pFVar10 = (FShaderType *)FCompositeCoreDisplayTransformShader::GetStaticType();
  FGlobalShaderMap::GetShader(local_1c8,&local_168,pFVar10,0);
  if (local_168.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
    ::FName::ToString((FName *)this_00,&local_140);
    FCompositeCoreDisplayTransformShader::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FScreenPassTexture *)(*pcVar3)();
      return pFVar8;
    }
  }
  FCompositeCoreDisplayTransformShader::GetStaticType();
  local_128.ShaderContent = (FCompositeCoreDisplayTransformShader *)local_168.ShaderContent;
  local_128.ShaderMap = local_168.ShaderMap;
  pFVar11 = FRDGEventName::FRDGEventName(&local_c8,L"Composite.DisplayTransform (%dx%d)");
  local_118.FeatureLevel = local_188->FeatureLevel;
  local_118.StereoViewIndex = local_188->StereoViewIndex;
  local_118.InstanceCount = local_188->InstanceCount;
  local_118.bHMDHiddenAreaMaskActive = local_188->bHMDHiddenAreaMaskActive;
  local_118._13_3_ = *(undefined3 *)&local_188->field_0xd;
  AddDrawScreenPass<FCompositeCoreDisplayTransformShader>
            (param_1,pFVar11,&local_118,(FScreenPassTextureViewport *)&local_1a8._s_0,
             (FScreenPassTextureViewport *)&local_1a8._s_0,&local_128,(FParameters *)(puVar9 + 2),
             None);
  if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Texture = pFVar7;
  *(longlong *)&(__return_storage_ptr__->ViewRect).field0_0x0 = lVar13;
  *(longlong *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 8) = lVar12;
  if (local_170 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_180);
  }
  return __return_storage_ptr__;
}

// FindPrimitiveComponents @ 14ea7e2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::CompositeCore::Private::FindPrimitiveComponents
          (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          USceneComponent *param_1)

{
  UCompositeCorePluginSettings *this;
  FScriptContainerElement *pFVar1;
  UPrimitiveComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  UPrimitiveComponent *local_48;
  UPrimitiveComponent *local_40;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar8 = UCompositeCorePluginSettings::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  this = (UCompositeCorePluginSettings *)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this == (UCompositeCorePluginSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PluginSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\HoldoutCompositeComponent.cpp"
                       ,0x20,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1 != (USceneComponent *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar6) ||
       (local_48 = (UPrimitiveComponent *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
       != &pUVar8->_padding_)) {
      local_48 = (UPrimitiveComponent *)0x0;
    }
    bVar5 = UCompositeCorePluginSettings::IsAllowedPrimitiveClass(this,local_48);
    if (bVar5) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UPrimitiveComponent **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
    }
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    USceneComponent::GetChildrenComponents(param_1,true,&local_38);
    iVar6 = local_38.ArrayNum;
    uVar10 = (ulonglong)local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + uVar10 * 8;
    FVar11.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      pUVar2 = *(UPrimitiveComponent **)FVar11.Data;
      if (pUVar2 == (UPrimitiveComponent *)0x0) {
LAB_14ea7e4b2:
        local_40 = (UPrimitiveComponent *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar7) ||
           (local_40 = pUVar2,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
           &pUVar8->_padding_)) goto LAB_14ea7e4b2;
      }
      bVar5 = UCompositeCorePluginSettings::IsAllowedPrimitiveClass(this,local_40);
      if (bVar5) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_40) &&
           ((FScriptContainerElement *)&local_40 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(UPrimitiveComponent **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_40;
      }
      uVar10 = local_38._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultInputDeclArray @ 14ea7eb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
* __cdecl UE::CompositeCore::GetDefaultInputDeclArray
                    (TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__)

{
  undefined1 auStackY_68 [32];
  TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
  local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_28._padding_ = local_28._padding_ & 0xffffff0000000000;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_28.TypeIndex = '\0';
  __return_storage_ptr__->ArrayNum = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_28,1);
  return __return_storage_ptr__;
}

// GetMergePassPassName @ 14ea7ebc0

FName * __cdecl UE::CompositeCore::GetMergePassPassName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FMergePassProxy");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
          ::__l2::Name;
}

// GetPassTextureParameters @ 14ea7ebe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FInputPassTextureParameters * __cdecl
UE::CompositeCore::GetPassTextureParameters
          (FInputPassTextureParameters *__return_storage_ptr__,FPassTexture *param_1,
          FResourceMetadata *param_2,FPassContext *param_3,FSceneViewFamily *param_4,bool param_5,
          float param_6)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FInputPassTextureParameters *pFVar4;
  
  pTVar2 = CVarCompositeCoreApplyPreExposure.Ref;
  __return_storage_ptr__->Texture = (param_1->Texture).Texture;
  __return_storage_ptr__->Sampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  __return_storage_ptr__->bInvertedAlpha = (uint)(param_1->Metadata).bInvertedAlpha;
  __return_storage_ptr__->SourceEncoding = (param_1->Metadata).Encoding;
  __return_storage_ptr__->Exposure = 1.0;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputPassTextureParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (((pTVar2->ShadowedValue[1] != 0) && (param_3->bOutputSceneColor != false)) &&
     ((param_1->Metadata).bPreExposed == false)) {
    __return_storage_ptr__->Exposure = param_6;
  }
  __return_storage_ptr__->DistortionUV = 0;
  if ((param_5) && (bVar3 = (param_1->Metadata).bDistorted, bVar3 != param_2->bDistorted)) {
    __return_storage_ptr__->DistortionUV = 2 - (bVar3 != false);
  }
  return __return_storage_ptr__;
}

// GetPostProcessingDesc @ 14ea7ecd0

FRDGTextureDesc * __cdecl
UE::CompositeCore::Private::GetPostProcessingDesc
          (FRDGTextureDesc *__return_storage_ptr__,FRDGTextureDesc *param_1,EPixelFormat param_2)

{
  FLinearColor FVar1;
  
  FRHITextureDesc::FRHITextureDesc
            ((FRHITextureDesc *)__return_storage_ptr__,(FRHITextureDesc *)param_1);
  *(undefined2 *)&__return_storage_ptr__->field_0x31 = 1;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = 1;
  *(ulonglong *)__return_storage_ptr__ =
       *(ulonglong *)__return_storage_ptr__ & 0xfffffffff7fdeffd | 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (*(int *)&__return_storage_ptr__->field_0x4c != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,(ForElementType<EPixelFormat> *)&__return_storage_ptr__->field_0x38,0,
               (int *)&__return_storage_ptr__->field_0x4c);
  }
  if (param_2 != PF_Unknown) {
    __return_storage_ptr__->field_0x33 = param_2;
  }
  FVar1.field0_0x0 = FLinearColor::Black.field0_0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 1;
  *(FLinearColor_u_0 *)&__return_storage_ptr__->field_0xc = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(ulonglong *)__return_storage_ptr__ = *(ulonglong *)__return_storage_ptr__ & 0xffffffffffdfffff;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  return __return_storage_ptr__;
}

// IsRegisterPrimitivesOnTickEnabled @ 14ea80d00

bool __cdecl UE::CompositeCore::IsRegisterPrimitivesOnTickEnabled(void)

{
  return GRegisterPrimitivesOnTick;
}

