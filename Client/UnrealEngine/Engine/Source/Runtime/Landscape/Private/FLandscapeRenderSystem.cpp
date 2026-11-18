// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 23

// FLandscapeRenderSystem @ 145f7a7a0

FLandscapeRenderSystem * __thiscall
FLandscapeRenderSystem::FLandscapeRenderSystem
          (FLandscapeRenderSystem *this,uint param_1,FSceneInterface *param_2)

{
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *this_01;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  FShaderParametersMetadata *pFVar13;
  FLandscapeRenderSystem *pFVar14;
  TRefCountPtr<FRHIUniformBuffer> TVar15;
  uint uVar16;
  undefined4 in_register_00000014;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FRHIResource *local_res8;
  int local_res10;
  undefined8 local_58 [2];
  undefined1 local_48 [32];
  
  (this->Min).field0_0x0._s_0.X = 0x7fffffff;
  *(undefined8 *)((longlong)&(this->Min).field0_0x0 + 4) = 0x7fffffff;
  (this->SectionLODBiases)._padding_ = (longlong)&___7__TResourceArray_M_0A___6B_;
  pTVar1 = &this->SectionLODUniformBuffer;
  uVar19 = 0;
  (this->Size).field0_0x0._s_0.Y = 0;
  (this->SectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionInfos).ArrayNum = 0;
  (this->SectionInfos).ArrayMax = 0;
  (this->SectionLODBiasBuffer).Reference = (FRHIBuffer *)0x0;
  (this->SectionLODBiases)._padding_ = 0;
  (this->SectionLODBiases)._padding_ = 0;
  (this->SectionLODBiases).bNeedsCPUAccess = false;
  (this->SectionLODBiasSRV).Reference = (FRHIShaderResourceView *)0x0;
  pTVar1->Reference = (FRHIUniformBuffer *)0x0;
  *(undefined8 *)&this->PerViewCachedSectionLODValues = 0;
  *(undefined8 *)&(this->PerViewCachedSectionLODValues).field_0x8 = 0;
  *(undefined8 *)&(this->PerViewCachedSectionLODValues).field_0x20 = 0;
  this->ReferenceCount = 0;
  this->RegisteredCount = 0;
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x28 = 0;
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x34 = 0;
  *(undefined8 *)&(this->PerViewCachedSectionLODValues).field_0x40 = 0;
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x48 = 0;
  *(undefined8 *)&this->PerViewStateCachedSectionLODValues = 0;
  *(undefined8 *)&(this->PerViewStateCachedSectionLODValues).field_0x8 = 0;
  *(undefined8 *)&(this->PerViewStateCachedSectionLODValues).field_0x20 = 0;
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x28 = 0;
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x34 = 0;
  *(undefined8 *)&(this->PerViewStateCachedSectionLODValues).field_0x40 = 0;
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x48 = 0;
  *(undefined8 *)&this->PerViewStateLastShadowInvalidationSectionLODValues = 0;
  *(undefined8 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x8 = 0;
  *(undefined8 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x20 = 0;
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x28 = 0;
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x34 = 0;
  *(undefined8 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x40 = 0;
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x48 = 0;
  *(undefined8 *)&this->ShadowInvalidationRequests = 0;
  *(undefined8 *)&(this->ShadowInvalidationRequests).field_0x8 = 0;
  *(undefined8 *)&(this->ShadowInvalidationRequests).field_0x20 = 0;
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x28 = 0;
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x34 = 0;
  *(undefined8 *)&(this->ShadowInvalidationRequests).field_0x40 = 0;
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x48 = 0;
  lVar3 = (this->SectionLODBiases)._padding_;
  this->ForcedLODOverride = -1;
  this->ComponentResolution = -1;
  dVar5 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (this->ComponentOrigin).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (this->ComponentOrigin).field0_0x0._s_0.Y = dVar5;
  (this->ComponentOrigin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (this->ComponentXVector).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (this->ComponentXVector).field0_0x0._s_0.Y = dVar5;
  (this->ComponentXVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&(this->ComponentYVector).field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(this->ComponentYVector).field0_0x0 + 4) = uVar6;
  *(undefined4 *)((longlong)&(this->ComponentYVector).field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&(this->ComponentYVector).field0_0x0 + 0xc) = uVar8;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Scene = param_2;
  pcVar4 = *(code **)(lVar3 + 0x38);
  (this->ComponentYVector).field0_0x0._s_0.Z = (double)uVar9;
  this->SectionsRemovedSinceLastCompact = 0;
  this->LandscapeKey = param_1;
  if (pcVar4 == TResourceArray<float,0>::SetAllowCPUAccess) {
    (this->SectionLODBiases).bNeedsCPUAccess = true;
  }
  else {
    (*pcVar4)(&this->SectionLODBiases,
              CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
  }
  pTVar20 = &LandscapeIndexAllocator;
  pTVar17 = &LandscapeIndexAllocator;
  if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)
              LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
  }
  FVar12 = (ForElementType<unsigned_int>)pTVar17;
  if (LandscapeIndexAllocator.NumBits + 0x1fU >> 5 == 0) {
LAB_145f7a9e4:
    iVar11 = -1;
LAB_145f7a9e9:
    this->LandscapeIndex = iVar11;
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&LandscapeIndexAllocator,1);
    if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)
                LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
    }
    uVar16 = iVar11 >> 0x1f & 0x1f;
    uVar18 = iVar11 + uVar16;
    uVar16 = (uVar18 & 0x1f) - uVar16;
    puVar2 = (uint *)((longlong)pTVar20 + (longlong)((int)uVar18 >> 5) * 4);
    *puVar2 = ~(1 << ((byte)uVar16 & 0x1f)) & *puVar2 | 1 << (uVar16 & 0x1f);
LAB_145f7aa39:
    this->LandscapeIndex = iVar11;
    local_48._16_4_ = 1;
    local_48._20_4_ = 1;
    local_48._24_8_ = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
    local_48._0_4_ = iVar11;
    pFVar13 = FLandscapeSectionLODUniformParameters::GetStructMetadata();
    if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FLandscapeRenderSystem *)(*pcVar4)();
      return pFVar14;
    }
    TVar15 = RHICreateUniformBuffer
                       (&local_res8,(FRHIUniformBufferLayout *)local_48,
                        (EUniformBufferUsage)(pFVar13->Layout).Reference,2);
    this_00 = (FRHIUniformBuffer *)(TVar15.Reference)->_padding_;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      pFVar13 = FLandscapeSectionLODUniformParameters::GetStructMetadata();
      if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FLandscapeRenderSystem *)(*pcVar4)();
        return pFVar14;
      }
      if ((pFVar13->Layout).Reference != (this_00->Layout).Reference) {
        pFVar13 = FLandscapeSectionLODUniformParameters::GetStructMetadata();
        if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x177,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FLandscapeRenderSystem *)(*pcVar4)();
          return pFVar14;
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x96,
                            L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                           );
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FLandscapeRenderSystem *)(*pcVar4)();
          return pFVar14;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == (TRefCountPtr<FRHIUniformBuffer> *)local_58) {
      if (this_00 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    else {
      this_01 = pTVar1->Reference;
      pTVar1->Reference = this_00;
      if (this_01 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
        return this;
      }
    }
    return this;
  }
LAB_145f7a9d1:
  if (*(int *)FVar12 == -1) goto code_r0x000145f7a9da;
  uVar18 = ~*(uint *)((longlong)pTVar17 + uVar19 * 4);
  local_res10 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> local_res10 & 1) == 0; local_res10 = local_res10 + 1) {
    }
  }
  iVar11 = 0x20;
  if (uVar18 != 0) {
    iVar11 = local_res10;
  }
  iVar11 = (int)uVar19 * 0x20 + iVar11;
  if (LandscapeIndexAllocator.NumBits <= iVar11) goto LAB_145f7a9e4;
  if (iVar11 != -1) {
    if (((iVar11 < 0) || (LandscapeIndexAllocator.NumBits <= iVar11)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FLandscapeRenderSystem *)(*pcVar4)();
      return pFVar14;
    }
    pTVar17 = &LandscapeIndexAllocator;
    if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)
                LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
    }
    puVar2 = (uint *)((longlong)pTVar17 +
                     (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&LandscapeIndexAllocator);
    goto LAB_145f7aa39;
  }
  goto LAB_145f7a9e9;
code_r0x000145f7a9da:
  uVar18 = (int)uVar19 + 1;
  uVar19 = (ulonglong)uVar18;
  FVar12 = (ForElementType<unsigned_int>)((longlong)FVar12 + 4);
  if ((int)(LandscapeIndexAllocator.NumBits + 0x1fU >> 5) <= (int)uVar18) goto LAB_145f7a9e4;
  goto LAB_145f7a9d1;
}

// ~FLandscapeRenderSystem @ 145f7db50

void __thiscall FLandscapeRenderSystem::~FLandscapeRenderSystem(FLandscapeRenderSystem *this)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  FRHIUniformBuffer *this_00;
  FRHIShaderResourceView *this_01;
  FRHIBuffer *this_02;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  ulonglong uVar10;
  
  uVar11 = this->LandscapeIndex;
  if ((((int)uVar11 < 0) || (LandscapeIndexAllocator.NumBits <= (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar12 = &LandscapeIndexAllocator;
  if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)
              LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
  }
  if (((*(uint *)((longlong)pTVar12 +
                 (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
        (uVar11 & 0x1f) & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeIndexAllocator[LandscapeIndex]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x2a0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = this->LandscapeIndex;
  if (((iVar2 < 0) || (LandscapeIndexAllocator.NumBits <= iVar2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar12 = &LandscapeIndexAllocator;
  if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)
              LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
  }
  iVar9 = 0;
  puVar1 = (uint *)((longlong)pTVar12 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  if (LandscapeIndexAllocator.NumBits != 0) {
    uVar11 = 0xffffffff >> (-(char)LandscapeIndexAllocator.NumBits & 0x1fU);
    pTVar12 = &LandscapeIndexAllocator;
    if (LandscapeIndexAllocator.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)
                LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
    }
    uVar8 = LandscapeIndexAllocator.NumBits + 0x1fU >> 5;
    uVar10 = (ulonglong)uVar8;
    while (uVar8 != 0) {
      uVar8 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar8;
      uVar11 = uVar11 & *(uint *)((longlong)pTVar12 + uVar10 * 4);
      if (uVar11 != 0) {
        uVar10 = (ulonglong)uVar11 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar9 = uVar8 * 0x20 + (int)lVar5;
        break;
      }
      uVar11 = 0xffffffff;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&LandscapeIndexAllocator,iVar9);
  *(undefined4 *)&(this->ShadowInvalidationRequests).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ShadowInvalidationRequests).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShadowInvalidationRequests);
  *(undefined4 *)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerViewStateLastShadowInvalidationSectionLODValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerViewStateLastShadowInvalidationSectionLODValues);
  *(undefined4 *)&(this->PerViewStateCachedSectionLODValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerViewStateCachedSectionLODValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerViewStateCachedSectionLODValues);
  *(undefined4 *)&(this->PerViewCachedSectionLODValues).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerViewCachedSectionLODValues).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FSceneView_const_*,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSceneView_const_*,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSceneView_const_*,TResourceArray<float,0>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerViewCachedSectionLODValues);
  this_00 = (this->SectionLODUniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SectionLODBiasSRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->SectionLODBiasBuffer).Reference;
  if (this_02 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  pFVar4 = (this->SectionInfos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->SectionLODBiases)._padding_);
  (this->SectionLODBiases)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// AnySectionsInRangeInclusive @ 145f81cf0

bool __thiscall
FLandscapeRenderSystem::AnySectionsInRangeInclusive
          (FLandscapeRenderSystem *this,TIntPoint<int> param_1,TIntPoint<int> param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iStackX_14;
  int iStackX_1c;
  
  iStackX_14 = param_1.field0_0x0._4_4_;
  iStackX_1c = param_2.field0_0x0._4_4_;
  iVar1 = (this->Min).field0_0x0._s_0.X;
  iStackX_14 = iStackX_14 - (this->Min).field0_0x0._s_0.Y;
  iVar2 = (this->Min).field0_0x0._s_0.X;
  iVar3 = (this->Min).field0_0x0._s_0.Y;
  do {
    iVar5 = param_1.field0_0x0._0_4_ - iVar1;
    if (iStackX_1c - iVar3 < iStackX_14) {
      return false;
    }
    for (; iVar5 <= param_2.field0_0x0._0_4_ - iVar2; iVar5 = iVar5 + 1) {
      uVar9 = iStackX_14 * (this->Size).field0_0x0._s_0.X + iVar5;
      uVar8 = 0;
      if ((int)uVar9 < (this->SectionInfos).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (*(longlong *)((this->SectionInfos).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) != 0
         ) {
        return true;
      }
    }
    iStackX_14 = iStackX_14 + 1;
  } while( true );
}

// CompactMap @ 145f85b00

void __thiscall FLandscapeRenderSystem::CompactMap(FLandscapeRenderSystem *this)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  TIntPoint<int>_u_0 TVar8;
  ulonglong uVar9;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_res10;
  
  TVar8 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->Min).field0_0x0._s_0;
  local_res8._s_0.X = ((this->Size).field0_0x0._s_0.X + TVar8._s_0.X) - 1;
  local_res8._s_0.Y = ((this->Size).field0_0x0._s_0.Y + TVar8._s_0.Y) - 1;
  uVar5 = (ulonglong)TVar8 & 0xffffffff;
  local_res10 = TVar8;
  if (TVar8._s_0.X < local_res8._s_0.X) {
    uVar9 = (ulonglong)(uint)local_res8._s_0.Y << 0x20;
    uVar4 = (ulonglong)TVar8 & 0xffffffff;
    uVar6 = (ulonglong)TVar8 & 0xffffffff00000000;
    uVar7 = (ulonglong)TVar8 & 0xffffffff;
    do {
      bVar1 = AnySectionsInRangeInclusive
                        (this,(TIntPoint<int>)(uVar6 | (ulonglong)TVar8 & 0xffffffff),
                         (TIntPoint<int>)(uVar9 | (ulonglong)TVar8 & 0xffffffff));
      if (bVar1) {
        uVar4 = (ulonglong)(uint)local_res8._s_0.X;
        if ((int)uVar7 < local_res8._s_0.X) goto LAB_145f85c00;
        goto LAB_145f85bb1;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar5 = (ulonglong)uVar2;
      TVar8._s_0.Y = 0;
      TVar8._s_0.X = uVar2;
      local_res10._s_0.X = uVar2;
      uVar7 = (ulonglong)uVar2;
    } while ((int)uVar2 < local_res8._s_0.X);
  }
  uVar4 = (ulonglong)(uint)local_res8._s_0.X;
  goto LAB_145f85bb1;
  while (uVar3 = uVar3 - 1, local_res10._s_0.Y < (int)uVar3) {
LAB_145f85c30:
    bVar1 = AnySectionsInRangeInclusive
                      (this,(TIntPoint<int>)(uVar5 | (ulonglong)(uint)uVar3 << 0x20),
                       (TIntPoint<int>)(uVar4 | (ulonglong)(uint)uVar3 << 0x20));
    if (bVar1) break;
  }
  local_res8._s_0.Y = uVar3;
  goto LAB_145f85c58;
  while( true ) {
    uVar2 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar2;
    local_res8._s_0.X = uVar2;
    if ((int)uVar2 <= (int)uVar5) break;
LAB_145f85c00:
    bVar1 = AnySectionsInRangeInclusive
                      (this,(TIntPoint<int>)(uVar4 | uVar6),(TIntPoint<int>)(uVar4 | uVar9));
    if (bVar1) break;
  }
LAB_145f85bb1:
  TVar8 = local_res10;
  while (local_res10._s_0.Y < (int)local_res8._4_4_) {
    bVar1 = AnySectionsInRangeInclusive
                      (this,(TIntPoint<int>)((ulonglong)(uint)local_res10._s_0.Y << 0x20 | uVar5),
                       (TIntPoint<int>)(uVar4 | (ulonglong)(uint)local_res10._s_0.Y << 0x20));
    if (bVar1) {
      uVar3 = local_res8._4_4_;
      if (local_res10._s_0.Y < (int)local_res8._4_4_) goto LAB_145f85c30;
      break;
    }
    local_res10._s_0.Y = local_res10._s_0.Y + 1;
    local_res10._0_4_ = TVar8._s_0.X;
    TVar8 = local_res10;
  }
LAB_145f85c58:
  ResizeAndMoveTo(this,(TIntPoint<int>)TVar8._s_0,(TIntPoint<int>)local_res8);
  return;
}

// ComputeLODFromScreenSize @ 145f862b0

float __cdecl
FLandscapeRenderSystem::ComputeLODFromScreenSize(LODSettingsComponent *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 < param_1->LastLODScreenSizeSquared || param_2 == param_1->LastLODScreenSizeSquared) {
    return (float)(int)param_1->LastLODIndex;
  }
  fVar1 = param_1->LOD1ScreenSizeSquared;
  if (fVar1 < param_2) {
    fVar2 = param_1->LOD0ScreenSizeSquared;
    fVar3 = fVar2;
    if (param_2 <= fVar2) {
      fVar3 = param_2;
    }
    return (fVar2 - fVar3) / (fVar2 - fVar1);
  }
  fVar1 = logf(fVar1 / param_2);
  fVar2 = logf(param_1->LODOnePlusDistributionScalarSquared);
  return fVar1 / fVar2 + __real_3f800000;
}

// ComputeSectionsLODForView @ 145f864a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TResourceArray<float,0> * __thiscall
FLandscapeRenderSystem::ComputeSectionsLODForView
          (FLandscapeRenderSystem *this,FSceneView *param_1,IShadowInvalidatingInstances *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  TIntPoint<int> TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TResourceArray<float,0> *pTVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
  *this_00;
  undefined4 *puVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  IShadowInvalidatingInstances *local_res18;
  char local_res20;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  float local_9c;
  undefined8 local_98;
  int local_90;
  uint local_8c;
  TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
  *local_88;
  TResourceArray<float,0> *local_80;
  FSceneView *local_78;
  FScriptContainerElement *local_70;
  longlong *local_68;
  float *local_60;
  
  local_res18 = param_2;
  if (CpuChannel->Enabled < 0) {
    local_res20 = '\0';
  }
  else {
    local_res20 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1027,"FLandscapeRenderSystem::ComputeSectionsLODForView",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0x403);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1027);
  }
  local_88 = (TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
              *)0x0;
  pTVar18 = (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = FSceneView::GetViewKey(param_1);
  if (local_a0 == 0) {
    uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    local_78 = param_1;
    pTVar9 = TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
             ::FindOrAddImpl<FSceneView_const_*>
                       ((TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
                         *)&this->PerViewCachedSectionLODValues,uVar12 >> 0x10 ^ uVar12,&local_78);
    local_80 = pTVar9;
  }
  else {
    pTVar9 = TMapBase<unsigned_int,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TResourceArray<float,0>,0>_>
             ::FindOrAddImpl<unsigned_int_const_&>
                       ((TMapBase<unsigned_int,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TResourceArray<float,0>,0>_>
                         *)&this->PerViewStateCachedSectionLODValues,local_a0,&local_a0);
    pTVar18 = (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_80 = pTVar9;
    if (local_res18 != (IShadowInvalidatingInstances *)0x0) {
      local_88 = (TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
                  *)TMapBase<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,0>_>
                    ::FindOrAddImpl<unsigned_int_const_&>
                              ((TMapBase<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,0>_>
                                *)&this->PerViewStateLastShadowInvalidationSectionLODValues,local_a0
                               ,&local_a0);
      uVar12 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res18 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      pTVar18 = TMapBase<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<UE::Renderer::Private::IShadowInvalidatingInstances_*_const_&>
                          ((TMapBase<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->ShadowInvalidationRequests,uVar12 >> 0x10 ^ uVar12,&local_res18
                          );
    }
  }
  uVar12 = (this->SectionInfos).ArrayNum;
  plVar1 = &pTVar9->_padding_;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  iVar8 = *(int *)((longlong)&pTVar9->_padding_ + 4);
  *(undefined4 *)&pTVar9->_padding_ = 0;
  if (iVar8 < (int)uVar12) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar12,(ForAnyElementType *)plVar1,0,(int *)((longlong)&pTVar9->_padding_ + 4));
  }
  local_8c = (this->SectionInfos).ArrayNum;
  uVar11 = (ulonglong)(int)local_8c;
  pFVar17 = (this->SectionInfos).AllocatorInstance.Data;
  local_70 = pFVar17 + uVar11 * 8;
  while( true ) {
    pFVar4 = local_70;
    if ((this->SectionInfos).ArrayNum != (int)uVar11) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FLandscapeSectionInfo_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a8);
    }
    if (pFVar17 == pFVar4) break;
    puVar10 = (undefined4 *)*plVar1;
    plVar2 = *(longlong **)pFVar17;
    local_a4 = 0;
    puVar14 = (undefined4 *)((longlong)plVar1 + ((longlong)puVar10 >> 0x18));
    if (((ulonglong)puVar10 & 1) == 0) {
      puVar14 = puVar10;
    }
    if (puVar14 <= &local_a4) {
      if (((ulonglong)puVar10 & 1) != 0) {
        puVar10 = (undefined4 *)((longlong)plVar1 + ((longlong)puVar10 >> 0x18));
      }
      if ((&local_a4 < puVar10 + *(int *)((longlong)&pTVar9->_padding_ + 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TResourceArray<float,0> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar8 = (int)pTVar9->_padding_;
    if (iVar8 == *(int *)((longlong)&pTVar9->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)plVar1,(int *)((longlong)&pTVar9->_padding_ + 4)
                        );
    }
    *(int *)&pTVar9->_padding_ = iVar8 + 1;
    uVar11 = *plVar1;
    if ((uVar11 & 1) != 0) {
      uVar11 = (longlong)plVar1 + ((longlong)uVar11 >> 0x18);
    }
    lVar16 = (longlong)iVar8;
    *(undefined4 *)(uVar11 + lVar16 * 4) = local_a4;
    if (plVar2 != (longlong *)0x0) {
      uVar19 = (**(code **)(*plVar2 + 8))(plVar2,param_1);
      *(undefined4 *)(uVar11 + lVar16 * 4) = uVar19;
      if ((local_res18 != (IShadowInvalidatingInstances *)0x0) &&
         (pTVar18 != (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *)0x0)) {
        fVar20 = GetSectionLODBias(this,(TIntPoint<int>)((TIntPoint<int>_u_0 *)(plVar2 + 4))->_s_0);
        this_00 = local_88;
        fVar21 = *(float *)(uVar11 + lVar16 * 4);
        TVar3.field0_0x0 =
             (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)(plVar2 + 4))->_s_0;
        if (fVar21 <= fVar20) {
          fVar21 = fVar20;
        }
        uVar15 = TVar3.field0_0x0._4_4_;
        uVar13 = TVar3.field0_0x0._0_4_ - uVar15 ^ uVar15 >> 0xd;
        uVar12 = (-0x61c88647 - uVar13) - uVar15 ^ uVar13 << 8;
        uVar15 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 0xd;
        uVar13 = (uVar13 - uVar15) - uVar12 ^ uVar15 >> 0xc;
        uVar12 = (uVar12 - uVar13) - uVar15 ^ uVar13 << 0x10;
        uVar15 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 5;
        uVar13 = (uVar13 - uVar15) - uVar12 ^ uVar15 >> 3;
        uVar12 = (uVar12 - uVar13) - uVar15 ^ uVar13 << 10;
        uVar12 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 0xf;
        local_9c = fVar21;
        iVar8 = TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
                ::FindIndexByHash<UE::Math::TIntPoint<int>_>
                          (local_88,uVar12,
                           (TIntPoint<int> *)&((TIntPoint<int>_u_0 *)(plVar2 + 4))->_s_0);
        if ((iVar8 == -1) ||
           (lVar16 = *(longlong *)&this_00->Elements + (longlong)iVar8 * 0x14, this_00 = local_88,
           lVar16 == 0)) {
          local_68 = plVar2 + 4;
          local_60 = &local_9c;
          TSet<TTuple<UE::Math::TIntPoint<int>,float>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TPairInitializer<UE::Math::TIntPoint<int>_const_&,float_const_&>_>
                    (this_00,(uint)&local_90,
                     (TPairInitializer<UE::Math::TIntPoint<int>_const_&,float_const_&> *)
                     (ulonglong)uVar12,(bool *)&local_68);
          lVar16 = *(longlong *)&this_00->Elements + (longlong)local_90 * 0x14;
          fVar21 = local_9c;
        }
        cVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,param_1,fVar21,*(undefined4 *)(lVar16 + 8));
        if (cVar7 != '\0') {
          *(float *)(lVar16 + 8) = local_9c;
          local_98 = (**(code **)(*plVar2 + 0x20))(plVar2);
          pFVar4 = (pTVar18->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)pTVar18->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TResourceArray<float,0> *)(*pcVar5)();
            return pTVar9;
          }
          iVar8 = pTVar18->ArrayNum;
          if (iVar8 == pTVar18->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
          }
          pTVar18->ArrayNum = iVar8 + 1;
          *(undefined8 *)((pTVar18->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98;
        }
      }
    }
    pFVar17 = pFVar17 + 8;
    uVar11 = (ulonglong)local_8c;
  }
  if (local_res20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_80;
}

// CreateResources @ 145f88580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FLandscapeRenderSystem::CreateResources(FRHICommandListBase *param_1,FLandscapeSectionInfo *param_2)

{
  FLandscapeRenderSystem **ppFVar1;
  FLandscapeRenderSystem *this;
  FLandscapeRenderSystem *this_00;
  
  ppFVar1 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                        *)&LandscapeRenderSystems,param_2->LandscapeKey,&param_2->LandscapeKey);
  this_00 = *ppFVar1;
  if (this_00 == (FLandscapeRenderSystem *)0x0) {
    this = ::operator_new(0x208);
    this_00 = (FLandscapeRenderSystem *)0x0;
    if (this != (FLandscapeRenderSystem *)0x0) {
      this_00 = FLandscapeRenderSystem(this,param_2->LandscapeKey,param_2->Scene);
    }
    *ppFVar1 = this_00;
  }
  CreateResources_Internal(this_00,param_1,param_2);
  return;
}

// CreateResources_Internal @ 145f88610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeRenderSystem::CreateResources_Internal
          (FLandscapeRenderSystem *this,FRHICommandListBase *param_1,FLandscapeSectionInfo *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TIntPoint<int>_u_0 TVar18;
  int iVar19;
  TIntPoint<int>_u_0 TVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  
  if ((param_2 == (FLandscapeSectionInfo *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SectionInfo != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x2c2,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->bRegistered != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SectionInfo->bRegistered",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x2c3,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->bResourcesCreated != false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SectionInfo->bResourcesCreated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x2c4,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar24 = param_2->LODGroupKey;
  (param_2->RenderCoord).field0_0x0 = (param_2->ComponentBase).field0_0x0;
  param_2->bResourcesCreated = true;
  if (uVar24 != 0) {
    (**(code **)(param_2->_padding_ + 0x38))(param_2,&local_e8,&local_118,&local_100);
    iVar15 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
    if (this->ComponentResolution < 0) {
      this->ComponentResolution = iVar15;
      (this->ComponentOrigin).field0_0x0._s_0.X = local_e8;
      (this->ComponentOrigin).field0_0x0._s_0.Y = dStack_e0;
      (this->ComponentOrigin).field0_0x0._s_0.Z = local_d8;
      (this->ComponentXVector).field0_0x0._s_0.X = local_118;
      (this->ComponentXVector).field0_0x0._s_0.Y = dStack_110;
      (this->ComponentXVector).field0_0x0._s_0.Z = local_108;
      (this->ComponentYVector).field0_0x0._s_0.X = local_100;
      (this->ComponentYVector).field0_0x0._s_0.Y = dStack_f8;
      (this->ComponentYVector).field0_0x0._s_0.Z = local_f0;
    }
    else {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = __real_3f1a36e2e0000000;
      dVar3 = (this->ComponentXVector).field0_0x0._s_0.Y;
      dVar4 = (this->ComponentXVector).field0_0x0._s_0.X;
      dVar27 = local_108 - (this->ComponentXVector).field0_0x0._s_0.Z;
      uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_118 - dVar4) >> 0x20) & uVar25,
                             SUB84(local_118 - dVar4,0) & uVar24)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)(dStack_110 - dVar3) >> 0x20) & uVar25,
                            SUB84(dStack_110 - dVar3,0) & uVar24))) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar25,SUB84(dVar27,0) & uVar24))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      dVar27 = (this->ComponentYVector).field0_0x0._s_0.X;
      dVar9 = (this->ComponentYVector).field0_0x0._s_0.Y;
      dVar1 = (this->ComponentYVector).field0_0x0._s_0.Z;
      auVar28._0_8_ = dStack_f8 - dVar9;
      auVar28._8_8_ = 0;
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_100 - dVar27) >> 0x20) & uVar25,
                             SUB84(local_100 - dVar27,0) & uVar24)) ||
          (auVar28._0_8_ =
                (double)CONCAT44((uint)((ulonglong)auVar28._0_8_ >> 0x20) & uVar25,
                                 SUB84(auVar28._0_8_,0) & uVar24), auVar28._8_8_ = 0,
          __real_3f1a36e2e0000000 < auVar28._0_8_)) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_f0 - dVar1) >> 0x20) & uVar25,
                           SUB84(local_f0 - dVar1,0) & uVar24))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((((this->ComponentResolution != iVar15) || (!bVar14)) || (!bVar13)) &&
         (2 < (byte)LogLandscape._0_1_)) {
        dVar2 = (this->ComponentXVector).field0_0x0._s_0.Z;
        auVar23._0_8_ = dVar2 * dVar2;
        auVar23._8_8_ = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_100 * local_100 + dStack_f8 * dStack_f8 + local_f0 * local_f0;
        sqrtpd(auVar28,auVar8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = dVar9 * dVar9 + dVar27 * dVar27 + dVar1 * dVar1;
        sqrtpd(auVar26,auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_118 * local_118 + dStack_110 * dStack_110 + local_108 * local_108;
        sqrtpd(___xmm_7fffffffffffffff7fffffffffffffff,auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar3 * dVar3 + dVar4 * dVar4 + auVar23._0_8_;
        sqrtpd(auVar23,auVar12);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
    }
    dVar3 = (this->ComponentXVector).field0_0x0._s_0.Z;
    dVar4 = (this->ComponentXVector).field0_0x0._s_0.X;
    dVar27 = (this->ComponentXVector).field0_0x0._s_0.Y;
    local_e8 = local_e8 - (this->ComponentOrigin).field0_0x0._s_0.X;
    dStack_e0 = dStack_e0 - (this->ComponentOrigin).field0_0x0._s_0.Y;
    local_d8 = local_d8 - (this->ComponentOrigin).field0_0x0._s_0.Z;
    dVar9 = dVar27 * dStack_e0 + dVar4 * local_e8 + dVar3 * local_d8;
    (param_2->RenderCoord).field0_0x0._s_0.X =
         (int)ROUND((dVar9 + dVar9) / (dVar27 * dVar27 + dVar4 * dVar4 + dVar3 * dVar3) +
                    __real_3fe0000000000000) >> 1;
    dVar3 = (this->ComponentYVector).field0_0x0._s_0.X;
    dVar4 = (this->ComponentYVector).field0_0x0._s_0.Y;
    dVar27 = (this->ComponentYVector).field0_0x0._s_0.Z;
    dVar9 = dVar4 * dStack_e0 + dVar3 * local_e8 + dVar27 * local_d8;
    (param_2->RenderCoord).field0_0x0._s_0.Y =
         (int)ROUND((dVar9 + dVar9) / (dVar4 * dVar4 + dVar3 * dVar3 + dVar27 * dVar27) +
                    __real_3fe0000000000000) >> 1;
  }
  (**(code **)(param_2->_padding_ + 0x48))(param_2,param_1);
  if (((param_2->RenderCoord).field0_0x0._s_0.X < -0x7fffffff) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SectionInfo->RenderCoord.X > (-2147483647i32 - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x2f1,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->SectionInfos).ArrayNum == 0) {
    TVar18 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_2->RenderCoord).field0_0x0._s_0;
    TVar20 = TVar18;
  }
  else {
    TVar6 = (this->Min).field0_0x0._s_0;
    iVar21 = (param_2->RenderCoord).field0_0x0._s_0.Y;
    iVar19 = TVar6.X;
    iVar22 = TVar6.Y;
    iVar17 = (this->Size).field0_0x0._s_0.X + iVar19 + -1;
    iVar15 = (this->Size).field0_0x0._s_0.Y + iVar22 + -1;
    iVar5 = (param_2->RenderCoord).field0_0x0._s_0.X;
    iVar16 = iVar5;
    if (iVar19 < iVar5) {
      iVar16 = iVar19;
    }
    iVar19 = iVar21;
    if (iVar22 < iVar21) {
      iVar19 = iVar22;
    }
    if (iVar5 < iVar17) {
      iVar5 = iVar17;
    }
    TVar18._s_0.Y = iVar19;
    TVar18._s_0.X = iVar16;
    if (iVar21 < iVar15) {
      iVar21 = iVar15;
    }
    TVar20._s_0.Y = iVar21;
    TVar20._s_0.X = iVar5;
  }
  ResizeAndMoveTo(this,(TIntPoint<int>)TVar18,(TIntPoint<int>)TVar20._s_0);
  this->ReferenceCount = this->ReferenceCount + 1;
  return;
}

// DestroyResources @ 145f8a3a0

void __cdecl FLandscapeRenderSystem::DestroyResources(FLandscapeSectionInfo *param_1)

{
  FLandscapeRenderSystem *this;
  code *pcVar1;
  bool bVar2;
  FLandscapeRenderSystem **ppFVar3;
  uint local_res8 [2];
  
  ppFVar3 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                           *)&LandscapeRenderSystems,param_1->LandscapeKey);
  this = *ppFVar3;
  if (param_1->bRegistered != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SectionInfo->bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x2fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bResourcesCreated == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SectionInfo->bResourcesCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x2fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ReferenceCount = this->ReferenceCount + -1;
  param_1->bResourcesCreated = false;
  this->SectionsRemovedSinceLastCompact = this->SectionsRemovedSinceLastCompact + 1;
  if ((0x7f < this->SectionsRemovedSinceLastCompact) &&
     (this->ReferenceCount == this->RegisteredCount)) {
    if (0x7f < (this->Size).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.X -
               this->ReferenceCount) {
      CompactMap(this);
    }
    this->SectionsRemovedSinceLastCompact = 0;
  }
  if (this->ReferenceCount == 0) {
    if (this->RegisteredCount != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeRenderSystem->RegisteredCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x2ba,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this != (FLandscapeRenderSystem *)0x0) {
      ~FLandscapeRenderSystem(this);
      ::operator_delete(this,0x208);
    }
    local_res8[0] = param_1->LandscapeKey;
    if (LandscapeRenderSystems._8_4_ != LandscapeRenderSystems._52_4_) {
      TSet<TTuple<unsigned_int,FLandscapeRenderSystem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FLandscapeRenderSystem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>,FDefaultSetAllocator>
                  *)&LandscapeRenderSystems,local_res8[0],local_res8);
    }
  }
  return;
}

// DestroyResources_Internal @ 145f8a4e0

void __thiscall
FLandscapeRenderSystem::DestroyResources_Internal
          (FLandscapeRenderSystem *this,FLandscapeSectionInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FLandscapeSectionInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SectionInfo != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bRegistered != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SectionInfo->bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x2fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bResourcesCreated == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SectionInfo->bResourcesCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x2fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ReferenceCount = this->ReferenceCount + -1;
  param_1->bResourcesCreated = false;
  this->SectionsRemovedSinceLastCompact = this->SectionsRemovedSinceLastCompact + 1;
  if ((0x7f < this->SectionsRemovedSinceLastCompact) &&
     (this->ReferenceCount == this->RegisteredCount)) {
    if (0x7f < (this->Size).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.X -
               this->ReferenceCount) {
      CompactMap(this);
    }
    this->SectionsRemovedSinceLastCompact = 0;
  }
  return;
}

// FetchHeightmapLODBiases @ 145f8c260

void __thiscall FLandscapeRenderSystem::FetchHeightmapLODBiases(FLandscapeRenderSystem *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1092,"FLandscapeRenderSystem::FetchHeightmapLODBiases",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0x444);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1092);
  }
  uVar6 = 0;
  if (0 < (this->SectionInfos).ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->SectionInfos).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->SectionInfos).AllocatorInstance.Data + lVar7);
      if (plVar1 == (longlong *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar1 + 0x10))();
      }
      uVar4 = 0;
      if ((int)uVar6 < (int)(this->SectionLODBiases)._padding_) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (this->SectionLODBiases)._padding_;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)&(this->SectionLODBiases)._padding_ + ((longlong)uVar5 >> 0x18);
      }
      *(undefined4 *)(lVar8 + uVar5) = uVar10;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->SectionInfos).ArrayNum);
  }
  if (!bVar9) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// GetCachedSectionLODValues @ 145f8e7b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TResourceArray<float,0> * __thiscall
FLandscapeRenderSystem::GetCachedSectionLODValues(FLandscapeRenderSystem *this,FSceneView *param_1)

{
  FSceneView *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TResourceArray<float,0> *pTVar6;
  TResourceArray<float,0> *pTVar7;
  undefined1 *puVar8;
  TResourceArray<float,0> *pTVar9;
  
  uVar4 = FSceneView::GetViewKey(param_1);
  if (uVar4 == 0) {
    pTVar7 = TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
             ::Find((TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
                     *)&this->PerViewCachedSectionLODValues,param_1);
  }
  else {
    pTVar9 = (TResourceArray<float,0> *)0x0;
    pTVar6 = pTVar9;
    if (*(int *)&(this->PerViewStateCachedSectionLODValues).field_0x8 !=
        *(int *)&(this->PerViewStateCachedSectionLODValues).field_0x34) {
      puVar8 = *(undefined1 **)&(this->PerViewStateCachedSectionLODValues).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->PerViewStateCachedSectionLODValues).field_0x38;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->PerViewStateCachedSectionLODValues).field_0x48 - 1U
                                & uVar4) * 4);
      if (iVar5 != -1) {
        do {
          pTVar6 = (TResourceArray<float,0> *)
                   ((longlong)iVar5 * 0x30 + *(longlong *)&this->PerViewStateCachedSectionLODValues)
          ;
          if ((uint)pTVar6->_padding_ == uVar4) break;
          iVar5 = (int)pTVar6[1]._padding_;
          pTVar6 = pTVar9;
        } while (iVar5 != -1);
      }
    }
    pTVar7 = (TResourceArray<float,0> *)&pTVar6->_padding_;
    if (pTVar6 == (TResourceArray<float,0> *)0x0) {
      pTVar7 = pTVar9;
    }
  }
  if (pTVar7 != (TResourceArray<float,0> *)0x0) {
    return pTVar7;
  }
  pFVar1 = param_1->SnapshotOriginView;
  if (pFVar1 != (FSceneView *)0x0) {
    if ((pFVar1 == param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SnapshotOriginView != &InView",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x3f5,L"Infinite loop will happen if the view originates from itself!"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TResourceArray<float,0> *)(*pcVar2)();
      return pTVar7;
    }
    pTVar7 = GetCachedSectionLODValues(this,pFVar1);
    if (pTVar7 != (TResourceArray<float,0> *)0x0) {
      return pTVar7;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CachedSectionLODValues != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                     ,0x3f8,
                     L"No section LOD value cached for this view. Make sure FLandscapeRenderSystem::ComputeSectionsLODForView (FLandscapeSceneViewExtension::PreRenderView_RenderThread) was called"
                    );
  if (!bVar3) {
    return (TResourceArray<float,0> *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pTVar7 = (TResourceArray<float,0> *)(*pcVar2)();
  return pTVar7;
}

// GetSectionInfo @ 145f94190

FLandscapeSectionInfo * __thiscall
FLandscapeRenderSystem::GetSectionInfo(FLandscapeRenderSystem *this,TIntPoint<int> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLandscapeSectionInfo *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = (this->Min).field0_0x0._s_0.X;
  iVar6 = param_1.field0_0x0._0_4_;
  if ((iVar9 <= iVar6) && (iVar9 = (this->Size).field0_0x0._s_0.X + iVar9, iVar6 < iVar9)) {
    iVar1 = (this->Min).field0_0x0._s_0.Y;
    iVar7 = param_1.field0_0x0._4_4_;
    if ((iVar1 <= iVar7) && (iVar7 < iVar1 + (this->Size).field0_0x0._s_0.Y)) {
      if (iVar9 <= iVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidCoord(InRenderCoord)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                           ,0x227,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FLandscapeSectionInfo *)(*pcVar2)();
          return pFVar5;
        }
      }
      uVar8 = iVar6 + ((iVar7 - (this->Min).field0_0x0._s_0.Y) * (this->Size).field0_0x0._s_0.X -
                      (this->Min).field0_0x0._s_0.X);
      uVar4 = 0;
      if ((int)uVar8 < (this->SectionInfos).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FLandscapeSectionInfo *)(*pcVar2)();
          return pFVar5;
        }
      }
      return *(FLandscapeSectionInfo **)
              ((this->SectionInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
    }
  }
  return (FLandscapeSectionInfo *)0x0;
}

// GetSectionLODBias @ 145f94290

float __thiscall
FLandscapeRenderSystem::GetSectionLODBias(FLandscapeRenderSystem *this,TIntPoint<int> param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  
  plVar1 = &(this->SectionLODBiases)._padding_;
  uVar4 = GetSectionLinearIndex(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (int)(this->SectionLODBiases)._padding_) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  uVar5 = *plVar1;
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)plVar1;
  }
  return *(float *)(uVar5 + (longlong)(int)uVar4 * 4);
}

// GetSectionLODValue @ 145f94310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FLandscapeRenderSystem::GetSectionLODValue
          (FLandscapeRenderSystem *this,FSceneView *param_1,TIntPoint<int> param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TResourceArray<float,0> *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  
  pTVar4 = GetCachedSectionLODValues(this,param_1);
  uVar3 = GetSectionLinearIndex(this,param_2);
  uVar6 = 0;
  if ((int)uVar3 < (int)pTVar4->_padding_) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar7 = (float)(*pcVar1)();
      return fVar7;
    }
  }
  uVar5 = pTVar4->_padding_;
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)&pTVar4->_padding_;
  }
  return *(float *)(uVar5 + (longlong)(int)uVar3 * 4);
}

// GetSectionLinearIndex @ 145f943b0

int __thiscall
FLandscapeRenderSystem::GetSectionLinearIndex(FLandscapeRenderSystem *this,TIntPoint<int> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (this->Min).field0_0x0._s_0.X;
  iVar4 = param_1.field0_0x0._0_4_;
  iVar5 = param_1.field0_0x0._4_4_;
  if ((iVar3 <= iVar4) && (iVar4 < (this->Size).field0_0x0._s_0.X + iVar3)) {
    iVar3 = (this->Min).field0_0x0._s_0.Y;
    if ((iVar3 <= iVar5) && (iVar5 < iVar3 + (this->Size).field0_0x0._s_0.Y)) goto LAB_145f94410;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidCoord(InRenderCoord)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                     ,0x227,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
LAB_145f94410:
  return ((iVar5 - (this->Min).field0_0x0._s_0.Y) * (this->Size).field0_0x0._s_0.X -
         (this->Min).field0_0x0._s_0.X) + iVar4;
}

// PerformShadowInvalidations @ 145f9b650

void __thiscall
FLandscapeRenderSystem::PerformShadowInvalidations
          (FLandscapeRenderSystem *this,IShadowInvalidatingInstances *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  IShadowInvalidatingInstances *local_res10;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x437,
                         L"Using IShadowInvalidatingInstances is only allowed from the rendering thread!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->ShadowInvalidationRequests).field_0x8 !=
      *(int *)&(this->ShadowInvalidationRequests).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ShadowInvalidationRequests).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ShadowInvalidationRequests).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ShadowInvalidationRequests).field_0x48 - 1U & uVar6)
                              * 4);
    if (iVar5 != -1) {
      while (plVar7 = (longlong *)
                      ((longlong)iVar5 * 0x20 +
                      *(longlong *)&(this->ShadowInvalidationRequests).field_0x0),
            (IShadowInvalidatingInstances *)*plVar7 != param_1) {
        iVar5 = (int)plVar7[3];
        if (iVar5 == -1) {
          return;
        }
      }
      plVar10 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      if (plVar10 != (longlong *)0x0) {
        puVar9 = (undefined8 *)*plVar10;
        lVar3 = plVar10[1];
        puVar1 = puVar9 + (int)lVar3;
        while( true ) {
          if ((int)plVar10[1] != (int)lVar3) {
            `TCheckedPointerIterator<FPrimitiveSceneInfo_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (puVar9 == puVar1) break;
          (**(code **)((longlong)*param_1 + 8))(param_1,*puVar9);
          puVar9 = puVar9 + 1;
        }
        if (*(int *)&(this->ShadowInvalidationRequests).field_0x8 !=
            *(int *)&(this->ShadowInvalidationRequests).field_0x34) {
          local_res10 = param_1;
          TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UE::Renderer::Private::IShadowInvalidatingInstances_const_*>
                    ((TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ShadowInvalidationRequests,uVar6,&local_res10);
        }
      }
    }
  }
  return;
}

// RegisterSection @ 145f9d960

void __cdecl FLandscapeRenderSystem::RegisterSection(FLandscapeSectionInfo *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FLandscapeRenderSystem **ppFVar7;
  FLandscapeSectionInfo *pFVar8;
  FLandscapeSectionInfo *pFVar9;
  FLandscapeSectionInfo *pFVar10;
  
  if ((param_1 == (FLandscapeSectionInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SectionInfo != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x315,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->bResourcesCreated == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SectionInfo->bResourcesCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x316,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->bRegistered != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SectionInfo->bRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x317,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppFVar7 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                           *)&LandscapeRenderSystems,param_1->LandscapeKey);
  if (((param_1->RenderCoord).field0_0x0._s_0.X < -0x7fffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SectionInfo->RenderCoord.X > (-2147483647i32 - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x321,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = GetSectionInfo(*ppFVar7,(TIntPoint<int>)(param_1->RenderCoord).field0_0x0._s_0);
  pFVar10 = pFVar8;
  if (pFVar8 == (FLandscapeSectionInfo *)0x0) {
    SetSectionInfo(*ppFVar7,(TIntPoint<int>)(param_1->RenderCoord).field0_0x0._s_0,param_1);
  }
  else {
    do {
      pcVar3 = *(code **)(param_1->_padding_ + 0x18);
      iVar5 = (**(code **)(pFVar10->_padding_ + 0x18))(pFVar10);
      iVar6 = (*pcVar3)(param_1);
      if (iVar6 < iVar5) {
        plVar1 = &param_1->_padding_;
        param_1->_padding_ = pFVar10->_padding_;
        pFVar10->_padding_ = (longlong)plVar1;
        *plVar1 = (longlong)pFVar10;
        if ((undefined8 *)param_1->_padding_ != (undefined8 *)0x0) {
          pFVar9 = param_1;
          if (plVar1 == (longlong *)0x0) {
            pFVar9 = (FLandscapeSectionInfo *)0x0;
          }
          *(undefined8 *)param_1->_padding_ = pFVar9;
        }
        if (pFVar10 == pFVar8) {
          SetSectionInfo(*ppFVar7,(TIntPoint<int>)(param_1->RenderCoord).field0_0x0._s_0,param_1);
        }
        goto LAB_145f9db23;
      }
      plVar1 = &pFVar10->_padding_;
      plVar2 = &pFVar10->_padding_;
      pFVar10 = (FLandscapeSectionInfo *)*plVar2;
    } while ((FLandscapeSectionInfo *)*plVar2 != (FLandscapeSectionInfo *)0x0);
    plVar2 = &param_1->_padding_;
    param_1->_padding_ = (longlong)plVar1;
    pFVar10 = param_1;
    if (plVar2 == (longlong *)0x0) {
      pFVar10 = (FLandscapeSectionInfo *)0x0;
    }
    *plVar2 = *plVar1;
    *plVar1 = (longlong)pFVar10;
    if (*plVar2 != 0) {
      *(longlong **)(*plVar2 + 0x10) = plVar2;
    }
  }
LAB_145f9db23:
  param_1->bRegistered = true;
  (*ppFVar7)->RegisteredCount = (*ppFVar7)->RegisteredCount + 1;
  return;
}

// ResizeAndMoveTo @ 145fa1420

void __thiscall
FLandscapeRenderSystem::ResizeAndMoveTo
          (FLandscapeRenderSystem *this,TIntPoint<int> param_1,TIntPoint<int> param_2)

{
  longlong *this_00;
  undefined4 uVar1;
  FRHIBuffer *this_01;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar11;
  int iVar12;
  int iVar13;
  TArray<FLandscapeSectionInfo_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TIntPoint<int> TVar15;
  ulonglong uVar16;
  uint uVar17;
  TIntPoint<int>_u_0 *pTVar18;
  uint uVar19;
  longlong lVar20;
  int local_res8;
  TIntPoint<int>_u_0_s_0 local_res10;
  undefined8 local_res18;
  ForAnyElementType local_d8;
  int local_d0 [2];
  undefined **local_c8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c0;
  int local_b8 [2];
  bool local_b0;
  longlong local_a8;
  TIntPoint<int>_u_0 *local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  TIntPoint<int>_u_0 local_78;
  undefined8 local_70;
  TIntPoint<int>_u_0 local_68;
  
  local_res18._4_4_ = param_2.field0_0x0._4_4_;
  local_res18._0_4_ = param_2.field0_0x0._0_4_;
  local_res10.Y = param_1.field0_0x0._4_4_;
  local_res10.X = param_1.field0_0x0._0_4_;
  uVar9 = (int)local_res18 + 4;
  uVar19 = local_res10.Y & 0xfffffffc;
  local_res18 = CONCAT44(local_res18._4_4_ + 4,uVar9) & 0xfffffffcfffffffc;
  uVar17 = local_res10.X & 0xfffffffc;
  local_90 = local_res18;
  uVar8 = local_90;
  uVar10 = (uVar9 & 0xfffffffc) - uVar17;
  local_90._4_4_ = (int)(local_res18 >> 0x20);
  uVar9 = local_90._4_4_ - uVar19;
  uVar16 = (ulonglong)uVar10;
  local_88 = (ulonglong)uVar9;
  local_68._s_0.Y = uVar9;
  local_68._s_0.X = uVar10;
  local_res10 = (TIntPoint<int>_u_0_s_0)((ulonglong)param_1.field0_0x0 & 0xfffffffcfffffffc);
  if ((((uVar17 != (this->Min).field0_0x0._s_0.X) || (uVar19 != (this->Min).field0_0x0._s_0.Y)) ||
      ((this->Size).field0_0x0._s_0.X != uVar10)) || ((this->Size).field0_0x0._s_0.Y != uVar9)) {
    pTVar18 = &(this->Size).field0_0x0;
    local_a0 = pTVar18;
    local_90 = uVar8;
    local_80 = uVar16;
    if (((*(byte *)&((TIntPoint<int> *)pTVar18)->field0_0x0 & 3) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Size.X & (SectionMapChunkSize-1)) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x36d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(byte *)((longlong)&(this->Size).field0_0x0 + 4) & 3) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Size.Y & (SectionMapChunkSize-1)) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x36e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->SectionLODBiasBuffer).Reference;
    if (this_01 != (FRHIBuffer *)0x0) {
      (this->SectionLODBiasBuffer).Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    local_c0.Packed = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b0 = false;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_c8 = &___7__TResourceArray_M_0A___6B_;
    iVar13 = uVar10 * uVar9;
    iVar6 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,iVar13,(ForAnyElementType *)&local_c0.Frozen,local_b8,local_b8 + 1);
    TVar11 = local_c0;
    if ((local_c0.Packed & 1) != 0) {
      TVar11.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_c0 + ((longlong)local_c0.Packed >> 0x18));
    }
    memset(TVar11.UnfrozenPtr + (longlong)iVar6 * 4,0,(longlong)iVar13 * 4);
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar13,&local_d8,local_d0,local_d0 + 1);
    memset(local_d8.Data + (longlong)iVar6 * 8,0,(longlong)iVar13 * 8);
    local_res8 = 0;
    if (0 < (this->Size).field0_0x0._s_0.Y) {
      do {
        iVar6 = ((this->Min).field0_0x0._s_0.Y - uVar19) + local_res8;
        if ((-1 < iVar6) && (iVar6 < (int)local_88)) {
          iVar13 = (int)uVar16;
          uVar9 = (pTVar18->_s_0).X * local_res8;
          if (0 < (pTVar18->_s_0).X) {
            lVar20 = (longlong)(int)uVar9 * 8;
            local_a8 = (longlong)(int)uVar9 * 4;
            iVar7 = -uVar9;
            do {
              iVar12 = (iVar7 - uVar17) + uVar9 + (this->Min).field0_0x0._s_0.X;
              local_98 = lVar20;
              if ((-1 < iVar12) && (iVar12 < (int)uVar16)) {
                uVar19 = iVar12 + iVar13 * iVar6;
                uVar10 = ~uVar9 >> 0x1f;
                uVar17 = 0;
                if ((int)uVar9 < (int)(this->SectionLODBiases)._padding_) {
                  uVar17 = uVar10;
                }
                if ((uVar17 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar8 = (this->SectionLODBiases)._padding_;
                if ((uVar8 & 1) != 0) {
                  uVar8 = (longlong)&(this->SectionLODBiases)._padding_ + ((longlong)uVar8 >> 0x18);
                }
                uVar1 = *(undefined4 *)(local_a8 + uVar8);
                uVar17 = 0;
                if ((int)uVar19 < local_b8[0]) {
                  uVar17 = ~uVar19 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TVar11 = local_c0;
                if ((local_c0.Packed & 1) != 0) {
                  TVar11.UnfrozenPtr =
                       (FScriptContainerElement *)
                       ((longlong)&local_c0 + ((longlong)local_c0.Packed >> 0x18));
                }
                *(undefined4 *)(TVar11.UnfrozenPtr + (longlong)(int)uVar19 * 4) = uVar1;
                uVar17 = 0;
                if ((int)uVar9 < (this->SectionInfos).ArrayNum) {
                  uVar17 = uVar10;
                }
                if ((uVar17 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar2 = *(undefined8 *)((this->SectionInfos).AllocatorInstance.Data + lVar20);
                uVar17 = 0;
                if ((int)uVar19 < local_d0[0]) {
                  uVar17 = ~uVar19 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined8 *)(local_d8.Data + (longlong)(int)uVar19 * 8) = uVar2;
                uVar19 = 0;
                if ((int)uVar9 < (this->SectionInfos).ArrayNum) {
                  uVar19 = uVar10;
                }
                if ((uVar19 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined8 *)((this->SectionInfos).AllocatorInstance.Data + local_98) = 0;
                uVar16 = local_80;
                pTVar18 = local_a0;
                uVar17 = local_res10.X;
              }
              uVar9 = uVar9 + 1;
              local_a8 = local_a8 + 4;
              lVar20 = local_98 + 8;
            } while ((int)(iVar7 + uVar9) < (pTVar18->_s_0).X);
            uVar19 = local_res10.Y;
            local_98 = lVar20;
          }
        }
        local_res8 = local_res8 + 1;
      } while (local_res8 < (this->Size).field0_0x0._s_0.Y);
    }
    local_78 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->Min).field0_0x0._s_0;
    iVar13 = (pTVar18->_s_0).X + local_78._0_4_;
    iVar6 = (pTVar18->_s_0).Y + local_78._4_4_;
    local_70 = CONCAT44(iVar6,iVar13);
    TVar15.field0_0x0._s_0.Y = iVar6 + -1;
    TVar15.field0_0x0._s_0.X = iVar13 + -1;
    bVar5 = AnySectionsInRangeInclusive(this,(TIntPoint<int>)local_78,TVar15);
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AnySectionsInRangeInclusive(Min, Min + Size - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x393,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->Min).field0_0x0._s_0 = local_res10;
    this_00 = &(this->SectionLODBiases)._padding_;
    *pTVar18 = local_68;
    if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)this_00 != &local_c0) {
      FMemoryImageAllocatorBase::MoveToEmpty
                ((FMemoryImageAllocatorBase *)this_00,(FMemoryImageAllocatorBase *)&local_c0.Frozen)
      ;
      *(int *)&(this->SectionLODBiases)._padding_ = local_b8[0];
      *(int *)((longlong)&(this->SectionLODBiases)._padding_ + 4) = local_b8[1];
      local_b8[0] = 0;
      local_b8[1] = 0;
    }
    pTVar14 = &this->SectionInfos;
    (this->SectionLODBiases).bNeedsCPUAccess = local_b0;
    if (pTVar14 != (TArray<FLandscapeSectionInfo_*,TSizedDefaultAllocator<32>_> *)&local_d8) {
      pFVar3 = (pTVar14->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar14->AllocatorInstance).Data = local_d8.Data;
      (this->SectionInfos).ArrayNum = local_d0[0];
      (this->SectionInfos).ArrayMax = local_d0[1];
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_d8.Data = (FScriptContainerElement *)0x0;
    }
    (**(code **)((this->SectionLODBiases)._padding_ + 0x38))(&this->SectionLODBiases,1);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_c0.Frozen);
  }
  return;
}

// ResizeToInclude @ 145fa19f0

void __thiscall
FLandscapeRenderSystem::ResizeToInclude(FLandscapeRenderSystem *this,TIntPoint<int> *param_1)

{
  int iVar1;
  int iVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  TIntPoint<int> TVar4;
  TIntPoint<int> TVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((this->SectionInfos).ArrayNum != 0) {
    TVar3 = (this->Min).field0_0x0._s_0;
    iVar9 = TVar3.X;
    iVar7 = (param_1->field0_0x0)._s_0.Y;
    iVar10 = TVar3.Y;
    iVar8 = (this->Size).field0_0x0._s_0.X + iVar9 + -1;
    iVar1 = (this->Size).field0_0x0._s_0.Y + iVar10 + -1;
    iVar2 = (param_1->field0_0x0)._s_0.X;
    iVar6 = iVar2;
    if (iVar9 < iVar2) {
      iVar6 = iVar9;
    }
    iVar9 = iVar7;
    if (iVar10 < iVar7) {
      iVar9 = iVar10;
    }
    if (iVar2 < iVar8) {
      iVar2 = iVar8;
    }
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    TVar4.field0_0x0._s_0.Y = iVar7;
    TVar4.field0_0x0._s_0.X = iVar2;
    TVar5.field0_0x0._s_0.Y = iVar9;
    TVar5.field0_0x0._s_0.X = iVar6;
    ResizeAndMoveTo(this,TVar5,TVar4);
    return;
  }
  ResizeAndMoveTo(this,(TIntPoint<int>)(param_1->field0_0x0)._s_0,
                  (TIntPoint<int>)(param_1->field0_0x0)._s_0);
  return;
}

// SetSectionInfo @ 145fa2330

void __thiscall
FLandscapeRenderSystem::SetSectionInfo
          (FLandscapeRenderSystem *this,TIntPoint<int> param_1,FLandscapeSectionInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = (this->Min).field0_0x0._s_0.X;
  iVar5 = param_1.field0_0x0._0_4_;
  if ((iVar8 <= iVar5) && (iVar8 = (this->Size).field0_0x0._s_0.X + iVar8, iVar5 < iVar8)) {
    iVar1 = (this->Min).field0_0x0._s_0.Y;
    iVar6 = param_1.field0_0x0._4_4_;
    if ((iVar1 <= iVar6) && (iVar6 < iVar1 + (this->Size).field0_0x0._s_0.Y)) {
      if (iVar8 <= iVar5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidCoord(InRenderCoord)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                           ,0x227,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar7 = iVar5 + ((iVar6 - (this->Min).field0_0x0._s_0.Y) * (this->Size).field0_0x0._s_0.X -
                      (this->Min).field0_0x0._s_0.X);
      uVar4 = 0;
      if ((int)uVar7 < (this->SectionInfos).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(FLandscapeSectionInfo **)
       ((this->SectionInfos).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = param_2;
    }
  }
  return;
}

// UnregisterSection @ 145fa7900

void __cdecl FLandscapeRenderSystem::UnregisterSection(FLandscapeSectionInfo *param_1)

{
  FLandscapeRenderSystem *this;
  code *pcVar1;
  bool bVar2;
  FLandscapeRenderSystem **ppFVar3;
  FLandscapeSectionInfo *pFVar4;
  
  if (param_1 == (FLandscapeSectionInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SectionInfo != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x349,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bResourcesCreated == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SectionInfo->bResourcesCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x34a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bRegistered != false) {
    ppFVar3 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
              ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                             *)&LandscapeRenderSystems,param_1->LandscapeKey);
    this = *ppFVar3;
    pFVar4 = GetSectionInfo(this,(TIntPoint<int>)(param_1->RenderCoord).field0_0x0._s_0);
    if (pFVar4 == param_1) {
      SetSectionInfo(this,(TIntPoint<int>)(param_1->RenderCoord).field0_0x0._s_0,
                     (FLandscapeSectionInfo *)param_1->_padding_);
    }
    if (param_1->_padding_ != 0) {
      *(longlong *)(param_1->_padding_ + 0x10) = param_1->_padding_;
    }
    if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
      *(longlong *)param_1->_padding_ = param_1->_padding_;
    }
    param_1->_padding_ = 0;
    param_1->_padding_ = 0;
    param_1->bRegistered = false;
    this->RegisteredCount = this->RegisteredCount + -1;
  }
  return;
}

// UpdateBuffers @ 145fa7a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeRenderSystem::UpdateBuffers(FLandscapeRenderSystem *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  undefined1 *puVar3;
  ERHIPipeline EVar4;
  code *pcVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *this_00;
  FRHIUniformBuffer *pFVar7;
  bool bVar8;
  uint uVar9;
  ERHIAccess EVar10;
  undefined4 uVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  TRefCountPtr<FRHIShaderResourceView> TVar13;
  void *_Dst;
  byte bVar14;
  void *_Src;
  bool bVar15;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  int local_98 [2];
  TIntPoint<int>_u_0 local_90;
  TIntPoint<int>_u_0 local_88;
  FRHIShaderResourceView *local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  TResourceArray<float,0> *pTStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1105,"FLandscapeRenderSystem::UpdateBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0x451);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1105);
  }
  if (((this->Size).field0_0x0._s_0.X != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
     ((this->Size).field0_0x0._s_0.Y != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    pTVar1 = &this->SectionLODBiasBuffer;
    pcVar5 = *(code **)((this->SectionLODBiases)._padding_ + 0x10);
    if ((this->SectionLODBiasBuffer).Reference == (FRHIBuffer *)0x0) {
      uVar9 = (*pcVar5)();
      bVar14 = (byte)GNumExplicitGPUsForRendering;
      FLazyName::Resolve(&::ClassName);
      EVar10 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
      local_78 = (ulonglong)uVar9;
      uStack_70 = CONCAT44((1 << (bVar14 & 0x1f)) + -1,0x4102);
      local_58 = CONCAT44(2,EVar10);
      local_68 = L"SectionLODBiasBuffer";
      local_48 = 0;
      pTStack_60 = &this->SectionLODBiases;
      TVar12 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
      if ((FRHIBuffer *)pTVar1 != TVar12.Reference) {
        pFVar6 = pTVar1->Reference;
        pTVar1->Reference = (FRHIBuffer *)(TVar12.Reference)->_padding_;
        (TVar12.Reference)->_padding_ = 0;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      if (local_res18 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res18);
      }
      TVar13 = FRHICommandListBase::CreateShaderResourceView
                         (param_1,(FRHIBuffer *)&local_res20,(FInitializer *)pTVar1->Reference);
      pTVar2 = &this->SectionLODBiasSRV;
      if ((FRHIShaderResourceView *)pTVar2 != TVar13.Reference) {
        this_00 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar2->Reference = *TVar13.Reference;
        *(undefined8 *)TVar13.Reference = 0;
        if (this_00 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      if (local_res20 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res20);
      }
      local_98[0] = this->LandscapeIndex;
      local_90 = (this->Min).field0_0x0;
      local_88 = (this->Size).field0_0x0;
      pFVar7 = (this->SectionLODUniformBuffer).Reference;
      local_80 = pTVar2->Reference;
      EVar4 = param_1->ActivePipelines;
      if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (param_1->ActivePipelines == None) {
        FRHICommandListBase::SwitchPipeline(param_1,Graphics);
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,pFVar7,local_98);
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_1,pFVar7,local_98);
      }
    }
    else {
      uVar11 = (*pcVar5)(&this->SectionLODBiases);
      pFVar6 = pTVar1->Reference;
      if ((((GRHICommandList.bLatchedBypass == false) ||
           ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
         (((GRHICommandList.bLatchedBypass == false ||
           ((param_1->PersistentState).bImmediate == '\0')) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsTopOfPipe() || Bypass()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x2ed,
                              L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                             ), bVar8)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar4 = param_1->ActivePipelines;
      if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar8 = param_1->ActivePipelines == None;
      if (bVar8) {
        FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      }
      _Dst = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                               (GDynamicRHI,param_1,pFVar6,0,uVar11,1);
      if (bVar8) {
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      uVar9 = (**(code **)((this->SectionLODBiases)._padding_ + 0x10))(&this->SectionLODBiases);
      _Src = (void *)(this->SectionLODBiases)._padding_;
      if (((ulonglong)_Src & 1) != 0) {
        _Src = (void *)((longlong)&(this->SectionLODBiases)._padding_ + ((longlong)_Src >> 0x18));
      }
      memcpy(_Dst,_Src,(ulonglong)uVar9);
      pFVar6 = (this->SectionLODBiasBuffer).Reference;
      if (((((GRHICommandList.bLatchedBypass == false) ||
            ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting != false)) &&
          ((GRHICommandList.bLatchedBypass == false ||
           ((param_1->PersistentState).bImmediate == '\0')))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsTopOfPipe() || Bypass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2f5,
                             L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar4 = param_1->ActivePipelines;
      if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2a5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (param_1->ActivePipelines == None) {
        FRHICommandListBase::SwitchPipeline(param_1,Graphics);
        (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar6);
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar6);
      }
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

