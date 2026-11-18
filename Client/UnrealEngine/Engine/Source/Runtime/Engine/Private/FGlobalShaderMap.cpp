// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetShader<Nanite::FTranscodePageToGPU_CS> @ 147f9cf60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>
          (FGlobalShaderMap *this,
          TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>
          *__return_storage_ptr__,
          TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *pTVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
  local_48;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  iVar6 = 1;
  if (param_1->DimensionValue == 0) {
    iVar7 = 1;
  }
  else {
    if ((param_1->DimensionValue != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
    iVar7 = 0;
  }
  iVar1 = (param_1->Tail).DimensionValue;
  if (iVar1 == 4) {
    iVar6 = 5;
  }
  else if (iVar1 == 8) {
    iVar6 = 4;
  }
  else if (iVar1 == 0x10) {
    iVar6 = 3;
  }
  else if (iVar1 == 0x20) {
    iVar6 = 2;
  }
  else if (iVar1 != 0x40) {
    if ((iVar1 != 0x80) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
    iVar6 = 0;
  }
  iVar7 = iVar7 + iVar6 * 2;
  pFVar4 = (FShaderType *)Nanite::FTranscodePageToGPU_CS::GetStaticType();
  GetShader(this,&local_38,pFVar4,iVar7);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_28);
    Nanite::FTranscodePageToGPU_CS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *)(*pcVar2)();
      return pTVar5;
    }
  }
  Nanite::FTranscodePageToGPU_CS::GetStaticType();
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
  ::
  TShaderPermutationDomain<Nanite::FTranscodePageToGPU_CS::FTranscodePassDim,Nanite::FTranscodePageToGPU_CS::FGroupSizeDim>
            (&local_48,iVar7);
  if ((local_48.Tail.DimensionValue != 0) &&
     ((local_48.Tail.DimensionValue < GRHIGlobals.MinimumWaveSize ||
      (GRHIGlobals.MaximumWaveSize < local_48.Tail.DimensionValue)))) {
    `FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  __return_storage_ptr__->ShaderContent = (FTranscodePageToGPU_CS *)local_38.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_38.ShaderMap;
  return __return_storage_ptr__;
}

// GetFirstSection @ 14852a8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderMapSection * __thiscall FGlobalShaderMap::GetFirstSection(FGlobalShaderMap *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  iVar2 = *(int *)&(this->SectionMap).field_0x28;
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = iVar5;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->SectionMap).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)&(this->SectionMap).field_0x10;
    }
    uVar3 = *puVar8;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      iVar7 = iVar7 + 0x20;
      iVar5 = iVar5 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_14852a93b;
      uVar3 = puVar8[lVar4 + 1];
    }
    uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar6 = (int)lVar4 + -1 + iVar7;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_14852a93b:
  if (iVar6 < iVar2) {
    return *(FGlobalShaderMapSection **)
            (*(longlong *)&this->SectionMap + 8 + (longlong)iVar6 * 0x18);
  }
  return (FGlobalShaderMapSection *)0x0;
}

// operator() @ 15051a510

bool __thiscall
`FGlobalShaderMap::GetShader<FInitDynamicMeshBoundsCS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FInitDynamicMeshBoundsCS::GetStaticType();
    FInitDynamicMeshBoundsCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FInitDynamicMeshBoundsCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15051e210

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FClearStreamingRequestCount_CS::GetStaticType();
    Nanite::FClearStreamingRequestCount_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FClearStreamingRequestCount_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15051e270

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FScatterUpdates_CS::GetStaticType();
    Nanite::FScatterUpdates_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FScatterUpdates_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15051e2d0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885884>);
  if (bVar2) {
    Nanite::FTranscodePageToGPU_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885884>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FTranscodePageToGPU_CS>(int)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15052aba0

bool __thiscall
`FGlobalShaderMap::GetShader<Nanite::FMemcpy_CS>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    Nanite::FMemcpy_CS::GetStaticType();
    Nanite::FMemcpy_CS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<Nanite::FMemcpy_CS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15052fb70

bool __thiscall
`FGlobalShaderMap::GetShader<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
    FSparseVolumeTextureUpdatePageTableCS::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FSparseVolumeTextureUpdatePageTableCS>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

