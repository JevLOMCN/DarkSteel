// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 36

// Call @ 145f09600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``ULandscapeHeightfieldCollisionComponent::DeferredDestroyCollision'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// Call @ 145f09610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeAsyncTextureReadback::CancelAndSelfDestruct'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)(*(longlong *)param_1 + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Readback->bCancel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)param_1 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Readback->PendingRenderThreadCommands == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(*(longlong *)param_1 + 5) == '\0') {
    if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3222009247696945306>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x9a,"!Readback->AsyncReadback.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (2 < (byte)LogLandscape._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
      TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::Reset
                ((TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *)
                 (*(longlong *)param_1 + 8),(FRHIGPUTextureReadback *)0x0);
    }
  }
  else {
    if (*(char *)(*(longlong *)param_1 + 6) == '\0') {
      FLandscapeAsyncTextureReadback::FinishReadback_RenderThread
                (*(FLandscapeAsyncTextureReadback **)param_1);
    }
    if (*(char *)(*(longlong *)param_1 + 6) == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Readback->bFinishedOnRenderThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                         ,0x95,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (*(FLandscapeAsyncTextureReadback **)param_1 != (FLandscapeAsyncTextureReadback *)0x0) {
    FLandscapeAsyncTextureReadback::_scalar_deleting_destructor_
              (*(FLandscapeAsyncTextureReadback **)param_1,1);
    return;
  }
  return;
}

// Call @ 145f09620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeAsyncTextureReadback::CheckAndUpdate'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FLandscapeAsyncTextureReadback *this;
  FRHIGPUTextureReadback *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  
  this = *(FLandscapeAsyncTextureReadback **)param_1;
  cVar5 = *(char *)((longlong)param_1 + 8);
  if (this->bStartedOnRenderThread == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bStartedOnRenderThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x1a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bFinishedOnRenderThread != (atomic<bool>)0x0) goto LAB_145f04c2e;
  if ((this->AsyncReadback).Ptr == (FRHIGPUTextureReadback *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncReadback.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0x20,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (cVar5 == '\0') {
    pFVar1 = (this->AsyncReadback).Ptr;
    lVar2 = pFVar1->_padding_;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) goto LAB_145f04c2e;
      cVar5 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      if (cVar5 == '\0') goto LAB_145f04c2e;
    }
  }
  FLandscapeAsyncTextureReadback::FinishReadback_RenderThread(this);
LAB_145f04c2e:
  LOCK();
  **(int **)param_1 = **(int **)param_1 + -1;
  UNLOCK();
  return;
}

// Call @ 145f09630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeHeightfieldCollisionComponent::FillHeightTile'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `ULandscapeHeightfieldCollisionComponent::FillHeightTile'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 145f09640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeInfo::GetCurrentLevelLandscapeProxy'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
::Call(void *param_1,ALandscapeProxy **param_2)

{
  ALandscapeProxy *this;
  USceneComponent *pUVar1;
  ULevel *pUVar2;
  UWorld *this_00;
  ULevel *pUVar3;
  
  this = *param_2;
  if ((*(char *)((longlong)param_1 + 8) == '\0') ||
     ((pUVar1 = (((TObjectPtr<USceneComponent> *)&this->_padding_)->field0_0x0).DebugPtr,
      pUVar1 != (USceneComponent *)0x0 && ((pUVar1->_padding_ & 1) != 0)))) {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      pUVar2 = (ULevel *)this->_padding_;
      pUVar3 = UWorld::GetCurrentLevel(this_00);
      if (pUVar3 == pUVar2) {
        **(undefined8 **)param_1 = this;
        return false;
      }
    }
  }
  return true;
}

// Call @ 145f096c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (**(int **)param_1 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Readback->PendingRenderThreadCommands == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.cpp"
                       ,0xbd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(FLandscapeAsyncTextureReadback **)param_1 != (FLandscapeAsyncTextureReadback *)0x0) {
    FLandscapeAsyncTextureReadback::_scalar_deleting_destructor_
              (*(FLandscapeAsyncTextureReadback **)param_1,1);
    return;
  }
  return;
}

// Call @ 145f09720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ALandscape::MarkAllLandscapeRenderStateDirty'::__l5::<lambda_1>,bool,ALandscapeProxy_*>
::Call(void *param_1,ALandscapeProxy **param_2)

{
  AActor::MarkComponentsRenderStateDirty((AActor *)*param_2);
  return true;
}

// Call @ 145f09740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ALandscape::SetLODGroupKey'::__l5::<lambda_1>,bool,ALandscapeProxy_*>::Call
          (void *param_1,ALandscapeProxy **param_2)

{
  ALandscapeProxy *this;
  
  this = *param_2;
  if (this->LODGroupKey != *(uint *)param_1) {
    this->LODGroupKey = *(uint *)param_1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
  }
  return true;
}

// Call @ 145f09770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ALandscape::RenderMergedTextureInternal'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FParameters *pFVar1;
  char cVar2;
  code *pcVar3;
  TRHIGlobal<int> TVar4;
  short sVar5;
  ForElementType<EPixelFormat> FVar6;
  EShaderPlatform EVar7;
  short sVar8;
  undefined4 uVar9;
  bool bVar10;
  FRDGEventName *pFVar11;
  longlong lVar12;
  longlong lVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FRDGTexture *pFVar15;
  FRDGTextureSRV *pFVar16;
  undefined8 *puVar17;
  FRDGScope *this;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar18;
  ForElementType<FRDGTexture_*> FVar19;
  undefined8 *puVar20;
  FRDGTexture *pFVar21;
  FGlobalShaderMap *pFVar22;
  FShaderType *pFVar23;
  FName FVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 auStackY_d08 [32];
  uint uStack_ca8;
  uint uStack_ca4;
  wchar_t *pwStack_ca0;
  wchar_t *pwStack_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  uint uStack_c88;
  uint uStack_c84;
  FRDGTexture *pFStack_c80;
  int iStack_c78;
  undefined8 *puStack_c70;
  FRDGTextureSRVDesc FStack_c68;
  FRDGTextureSRVDesc FStack_c50;
  uint uStack_c38;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  longlong lStack_c28;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  FRDGTexture *pFStack_c18;
  uint uStack_c10;
  uint uStack_c08;
  FRenderTargetBinding FStack_c00;
  FRenderTargetBinding FStack_be8;
  FRenderTargetBinding FStack_bd0;
  FRenderTargetBinding FStack_bb8;
  TRDGEventScopeGuard<FRDGScope_RHI> TStack_ba0;
  char cStack_b90;
  longlong *plStack_b88;
  void *pvStack_b80;
  ForElementType<EPixelFormat> FStack_b78;
  TIntRect<int>_u_0 TStack_b70;
  TIntRect<int>_u_0 TStack_b60;
  undefined1 auStack_b50 [16];
  FRHICopyTextureInfo FStack_b40;
  wchar_t **ppwStack_b00;
  FRHITextureDesc *pFStack_af8;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_ae8;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_ad8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>_const_*,std::tuple<int_&>_>
  tStack_ac8;
  wchar_t **ppwStack_ab8;
  FRHITextureDesc *pFStack_ab0;
  wchar_t **ppwStack_aa8;
  FRHITextureDesc *pFStack_aa0;
  wchar_t **ppwStack_a98;
  FRHITextureDesc *pFStack_a90;
  wchar_t **ppwStack_a88;
  FRHITextureDesc *pFStack_a80;
  wchar_t **ppwStack_a78;
  FRHITextureDesc *pFStack_a70;
  wchar_t **appwStack_a68 [2];
  wchar_t **ppwStack_a58;
  FRHITextureDesc *pFStack_a50;
  FString FStack_a48;
  TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable> TStack_a38;
  FString FStack_a28;
  TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable> TStack_a18;
  uint uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  FRDGEventName FStack_9e8;
  FRDGEventName FStack_9d0;
  FRDGEventName FStack_9b8;
  FRDGEventName FStack_9a0;
  ForElementType<FRDGTexture_*> FStack_988;
  int iStack_960;
  int iStack_95c;
  FRHITextureDesc FStack_958;
  FRHITextureDesc FStack_908;
  FRHITextureDesc FStack_8b8;
  FRHITextureDesc FStack_868;
  undefined1 auStack_818 [22];
  ERDGScopeMode EStack_802;
  FRDGAllocator aFStack_800 [3];
  FRHIComputeCommandList *pFStack_758;
  ForElementType<FRDGTexture_*> FStack_660;
  uint uStack_658;
  uint auStack_654 [5];
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> aTStack_640 [75];
  FRDGTrace FStack_188;
  FRDGUserValidation FStack_118;
  ulonglong uStack_48;
  
  EVar7 = GMaxRHIShaderPlatform;
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_d08;
  puVar30 = (undefined8 *)0x0;
  iStack_c78 = 0;
  plStack_b88 = param_1;
  pFVar11 = FRDGEventName::FRDGEventName(&FStack_9e8,1,L"RenderMergedTexture");
  pFVar11 = FRDGEventName::FRDGEventName(&FStack_9a0,pFVar11);
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)auStack_818,param_2,pFVar11,None,EVar7);
  if (FStack_9e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  lVar12 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0xa0))();
  lVar13 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0xa8))
                     (*(longlong **)((longlong)param_1 + 0x10));
  lStack_c28 = lVar13;
  if (((lVar12 == 0) && (lVar13 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(OutputRenderTarget2DResource != nullptr) || (OutputRenderTarget2DArrayResource != nullptr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                          ,0xf17,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar14 = CreateRenderTarget((FRHITexture *)auStack_b50,
                              *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20));
  pFVar15 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)auStack_818,
                       (TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
  pFStack_c18 = pFVar15;
  if ((longlong *)auStack_b50._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_b50._0_8_ + 0x38))();
  }
  iVar29 = *(int *)((longlong)param_1 + 8);
  iStack_c78 = iVar29;
  if (iVar29 == 1) {
    FStack_bd0.ResolveTexture = (FRDGTexture *)0x0;
    FStack_bd0.LoadAction = ENoAction;
    FStack_bd0.MipIndex = '\0';
    FStack_bd0.ArraySlice = (lVar13 != 0) - 1;
    FStack_bd0.Texture = pFVar15;
    bVar10 = FRenderTargetBinding::Validate(&FStack_bd0);
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((longlong)param_1 + 8) < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture
              (*(FRenderInfo **)param_1,(FRDGBuilder *)auStack_818,&FStack_bd0);
  }
  else {
    uVar27 = GPixelFormats[*(byte *)((longlong)param_1 + 0x19)].NumComponents;
    uStack_c84 = uVar27;
    if (((int)(iVar29 + -1 + uVar27) / (int)uVar27 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumChannelPackingOperations > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf29,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((lVar13 == 0) && ((int)uVar27 < iVar29)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(OutputRenderTarget2DArrayResource != nullptr) || (NumTargetLayers <= NumChannels)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf2a,
                            L"Trying to merge %i weightmaps onto a 2D texture of %i channels only"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(char *)((longlong)param_1 + 0x18) != '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsHeightmap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                            ,0xf2b,
                            L"We should only be able to merge multiple textures in the case of weightmaps"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FStack_c50.Texture =
         FSystemTextures::GetBlackDummy
                   ((FSystemTextures *)&GSystemTextures,(FRDGBuilder *)auStack_818);
    FStack_c50._padding_._0_2_ = 0;
    FStack_c50._padding_._3_1_ = 0;
    FStack_c50._padding_._4_4_ = 0;
    FStack_c50._padding_._0_1_ = 0;
    FStack_c50._padding_._2_1_ = 0;
    FStack_c50._padding_._2_1_ = ((FStack_c50.Texture)->Desc).field_0x30;
    cVar2 = ((FStack_c50.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      FStack_c50._padding_._4_4_ = (uint)*(ushort *)&((FStack_c50.Texture)->Desc).field_0x2e << 0x10
      ;
    }
    FRDGUserValidation::ValidateCreateSRV(&FStack_118,&FStack_c50);
    pFVar21 = FStack_c50.Texture;
    pFVar16 = FMemStackBase::Alloc(&aFStack_800[0].MemStack,0x48,8);
    pFVar16 = FRDGTextureSRV::FRDGTextureSRV(pFVar16,(wchar_t *)pFVar21->_padding_,&FStack_c50);
    auStack_b50._8_8_ = pFVar16;
    TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(aTStack_640,(FRDGView *)pFVar16)
    ;
    FRDGUserValidation::ValidateCreateSRV(&FStack_118,pFVar16);
    uStack_c8c = *(undefined4 *)&(pFVar15->Desc).field_0x28;
    uStack_c90 = *(undefined4 *)&(pFVar15->Desc).field_0x24;
    FStack_908.Extent.field0_0x0._0_4_ = *(int *)&(pFVar15->Desc).field_0x24;
    FStack_908.Extent.field0_0x0._4_4_ = *(int *)&(pFVar15->Desc).field_0x28;
    FStack_908.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    FStack_908.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    FStack_908.Flags = ShaderResource|RenderTargetable;
    FStack_908.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
    FStack_908.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    FStack_908.ExtData = 0;
    FStack_908.Depth = 1;
    FStack_908.ArraySize = 1;
    FStack_908.NumMips = '\x01';
    FStack_908.NumSamples = '\x01';
    FStack_908.Dimension = Texture2D;
    FStack_908.Format = PF_G8;
    FStack_908.UAVFormat = PF_Unknown;
    FStack_908.FastVRAMPercentage = 0xff;
    FStack_908.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    FStack_908.AliasableFormats.ArrayNum = 0;
    FStack_908.AliasableFormats.ArrayMax = 1;
    uStack_ca4 = 0;
    if (lStack_c28 == 0) {
      uStack_c88 = 1;
    }
    else {
      uStack_c88 = (uint)*(ushort *)&(pFVar15->Desc).field_0x2e;
    }
    uStack_ca8 = 0;
    puVar17 = puVar30;
    puVar20 = puVar30;
    puVar28 = puVar30;
    uStack_c30 = uStack_c90;
    uStack_c2c = uStack_c8c;
    if (uStack_c88 != 0) {
      do {
        uStack_c10 = (uint)puVar20;
        cStack_b90 = '\0';
        uVar31 = (uint)puVar17;
        uStack_c08 = uStack_c10;
        if ((EStack_802 != Disabled) &&
           ((EStack_802 != TopLevelOnly || ((auStack_818[0x10] & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            uStack_9f8 = 0;
            uStack_9f4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_9fc);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_._0_4_ = 0xf35;
            ::Desc._padding_ = (longlong)u_RenderMergedTex;
            ::Desc._padding_ = (longlong)u_RenderMergedTex;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(````ALandscape::RenderMergedTextureInternal'::__l2::<lambda_2>::operator()'::
                   __l47::Desc::operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          tStack_ac8._padding_ = (longlong)&uStack_ca8;
          tStack_ac8._Myfirst._Val = &::Desc;
          TStack_ba0.State = (FRDGScopeState *)auStack_818;
          this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                           (aFStack_800,(FRDGScope **)auStack_818);
          uVar32 = (ulonglong)(this->Impl).Impl.TypeIndex;
          TStack_ba0.Scope = this;
          auStack_818._0_8_ = this;
          if ((3 < uVar32) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar32])(&this->Impl);
          this_00 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)auStack_818);
          pFVar18 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>,int_&>
                              (this_00,&tStack_ac8);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&this->Impl,(FRDGScopeState *)auStack_818,pFVar18);
          (this->Impl).Impl.TypeIndex = '\x02';
          if ((bool)auStack_818[0x14] != false) {
            FRDGScope::BeginCPU(this,pFStack_758,false);
            FRDGScope::BeginGPU(this,pFStack_758);
          }
          puVar28 = (undefined8 *)(ulonglong)uStack_ca4;
          cStack_b90 = '\x01';
          uVar27 = uStack_c84;
          uVar31 = uStack_ca8;
        }
        uVar31 = iVar29 - uVar31 * uVar27;
        if ((int)uVar27 < (int)uVar31) {
          uVar31 = uVar27;
        }
        uVar32 = (ulonglong)uVar31;
        uStack_c38 = uVar31;
        if ((((int)uVar31 < 0) || ((int)uVar27 < (int)uVar31)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(NumEffectiveChannels >= 0) && (NumEffectiveChannels <= NumChannels)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                ,0xf39,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FStack_988.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
        iStack_960 = 0;
        iStack_95c = 4;
        uVar27 = uStack_ca4;
        if (0 < (int)uVar31) {
          do {
            pwStack_ca0 = L"LandscapeMergedTextureTargetLayer";
            FRHITextureDesc::FRHITextureDesc(&FStack_8b8,&FStack_908);
            if (FStack_8b8.Extent.field0_0x0._s_0.X < 1) {
              ppwStack_ab8 = &pwStack_ca0;
              pFStack_ab0 = &FStack_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&ppwStack_ab8);
            }
            if (FStack_8b8.Extent.field0_0x0._s_0.Y < 1) {
              ppwStack_aa8 = &pwStack_ca0;
              pFStack_aa0 = &FStack_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&ppwStack_aa8);
            }
            if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
                (uint)FStack_8b8.Extent.field0_0x0._s_0.X) {
              ppwStack_a98 = &pwStack_ca0;
              pFStack_a90 = &FStack_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&ppwStack_a98);
            }
            if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
                (uint)FStack_8b8.Extent.field0_0x0._s_0.Y) {
              ppwStack_a88 = &pwStack_ca0;
              pFStack_a80 = &FStack_8b8;
              `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&ppwStack_a88);
            }
            uVar25 = GRHIGlobals.MaxTextureDimensions.Value;
            if (FStack_8b8.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
              uVar25 = FStack_8b8.Extent.field0_0x0._s_0.X;
            }
            FStack_8b8.Extent.field0_0x0._s_0.X = 1;
            if (1 < (int)uVar25) {
              FStack_8b8.Extent.field0_0x0._s_0.X = uVar25;
            }
            TVar4.Value = GRHIGlobals.MaxTextureDimensions.Value;
            if (FStack_8b8.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
              TVar4.Value = FStack_8b8.Extent.field0_0x0._s_0.Y;
            }
            FStack_8b8.Extent.field0_0x0._s_0.Y = 1;
            if (1 < TVar4.Value) {
              FStack_8b8.Extent.field0_0x0._s_0.Y = TVar4.Value;
            }
            FRDGUserValidation::ValidateCreateTexture
                      (&FStack_118,(FRDGTextureDesc *)&FStack_8b8,pwStack_ca0,None);
            pFVar15 = FMemStackBase::Alloc(&aFStack_800[0].MemStack,0x158,8);
            pFVar15 = FRDGTexture::FRDGTexture
                                (pFVar15,pwStack_ca0,(FRDGTextureDesc *)&FStack_8b8,None);
            if (uStack_658 == auStack_654[0]) {
              uStack_658 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                                     (0x808,&FStack_660,(int *)auStack_654);
            }
            FStack_660.Data[(int)uStack_658] = pFVar15;
            (pFVar15->Handle).Index = uStack_658;
            uStack_658 = uStack_658 + 1;
            FRDGUserValidation::ValidateCreateTexture(&FStack_118,pFVar15);
            FRDGTrace::AddResource(&FStack_188,(FRDGViewableResource *)pFVar15);
            if (FStack_8b8.AliasableFormats.AllocatorInstance.SecondaryData !=
                (ForElementType<EPixelFormat>)0x0) {
              FMemory::Free((void *)FStack_8b8.AliasableFormats.AllocatorInstance.SecondaryData);
            }
            FVar19 = (ForElementType<FRDGTexture_*>)&FStack_988;
            if (FStack_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = FStack_988.SecondaryData;
            }
            pFStack_c80 = pFVar15;
            if ((ulonglong)FVar19 <= &pFStack_c80) {
              FVar19 = (ForElementType<FRDGTexture_*>)&FStack_988;
              if (FStack_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
                FVar19 = FStack_988.SecondaryData;
              }
              if ((&pFStack_c80 < (FRDGTexture **)((longlong)FVar19 + (longlong)iStack_95c * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (iStack_960 == iStack_95c) {
              iStack_960 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                                     (0x808,&FStack_988,&iStack_95c);
            }
            lVar12 = (longlong)iStack_960;
            FVar19 = (ForElementType<FRDGTexture_*>)&FStack_988;
            if (FStack_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = FStack_988.SecondaryData;
            }
            iStack_960 = iStack_960 + 1;
            *(FRDGTexture **)((longlong)FVar19 + lVar12 * 8) = pFStack_c80;
            FStack_bb8.Texture = pFStack_c80;
            FStack_bb8.ResolveTexture = (FRDGTexture *)0x0;
            FStack_bb8.LoadAction = ENoAction;
            FStack_bb8.MipIndex = '\0';
            FStack_bb8.ArraySlice = -1;
            bVar10 = FRenderTargetBinding::Validate(&FStack_bb8);
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Validate()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                    ,0x216,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar27 = (uint)puVar28;
            uVar31 = 0;
            if ((int)uVar27 < (int)*(longlong *)((longlong)param_1 + 8)) {
              uVar31 = ~uVar27 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture
                      ((FRenderInfo *)((longlong)(int)uVar27 * 0xf0 + *(longlong *)param_1),
                       (FRDGBuilder *)auStack_818,&FStack_bb8);
            uVar27 = uVar27 + 1;
            puVar28 = (undefined8 *)(ulonglong)uVar27;
            if ((iVar29 < (int)uVar27) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TargetLayerIndex <= NumTargetLayers",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                    ,0xf44,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar32 = uVar32 - 1;
            uVar31 = uStack_c38;
          } while (uVar32 != 0);
        }
        uStack_ca4 = uVar27;
        puVar20 = FMemStackBase::Alloc(&aFStack_800[0].MemStack,0x140,0x10);
        if (puVar20 == (undefined8 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          puVar20 = puVar30;
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *puVar20 = &___7__TObject_VFParameters_FLandscapePackRGBAChannelsPS___FRDGAllocator__6B_;
          puVar20[3] = 0;
          puVar20[4] = 0;
          puVar20[5] = 0;
          puVar20[6] = 0;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar20 + 8));
        }
        puStack_c70 = puVar20;
        if (((aFStack_800[0].Objects.AllocatorInstance.Data <=
              (FScriptContainerElement *)&puStack_c70) &&
            ((FScriptContainerElement *)&puStack_c70 <
             aFStack_800[0].Objects.AllocatorInstance.Data +
             (longlong)aFStack_800[0].Objects.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (aFStack_800[0].Objects.ArrayNum == aFStack_800[0].Objects.ArrayMax) {
          aFStack_800[0].Objects.ArrayNum =
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&aFStack_800[0].Objects.AllocatorInstance,
                          &aFStack_800[0].Objects.ArrayMax);
        }
        lVar12 = (longlong)aFStack_800[0].Objects.ArrayNum;
        pFVar1 = (FParameters *)(puVar20 + 2);
        aFStack_800[0].Objects.ArrayNum = aFStack_800[0].Objects.ArrayNum + 1;
        *(undefined8 **)(aFStack_800[0].Objects.AllocatorInstance.Data + lVar12 * 8) = puStack_c70;
        pFVar1->InNumChannels = uVar31;
        puVar17 = puVar30;
        puVar28 = puVar30;
        do {
          iVar29 = (int)puVar28;
          pFVar16 = (FRDGTextureSRV *)auStack_b50._8_8_;
          if (iVar29 < (int)uVar31) {
            if ((iStack_960 <= iVar29) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar19 = (ForElementType<FRDGTexture_*>)&FStack_988;
            if (FStack_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
              FVar19 = FStack_988.SecondaryData;
            }
            FStack_c68.Texture = *(FRDGTexture **)((longlong)puVar17 + (longlong)FVar19);
            FStack_c68._padding_._0_2_ = 0;
            FStack_c68._padding_._6_2_ = 0;
            FStack_c68._padding_._0_1_ = 0;
            FStack_c68._padding_._2_1_ = 0;
            FStack_c68._padding_._2_4_ = (uint)(byte)((FStack_c68.Texture)->Desc).field_0x30;
            cVar2 = ((FStack_c68.Texture)->Desc).field_0x32;
            if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
              FStack_c68._padding_._6_2_ = *(undefined2 *)&((FStack_c68.Texture)->Desc).field_0x2e;
            }
            FRDGUserValidation::ValidateCreateSRV(&FStack_118,&FStack_c68);
            pFVar15 = FStack_c68.Texture;
            pFVar16 = FMemStackBase::Alloc(&aFStack_800[0].MemStack,0x48,8);
            pFVar16 = FRDGTextureSRV::FRDGTextureSRV
                                (pFVar16,(wchar_t *)pFVar15->_padding_,&FStack_c68);
            if (aTStack_640[0].Array.ArrayNum == aTStack_640[0].Array.ArrayMax) {
              aTStack_640[0].Array.ArrayNum =
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)aTStack_640,
                              &aTStack_640[0].Array.ArrayMax);
            }
            aTStack_640[0].Array.AllocatorInstance.Data[aTStack_640[0].Array.ArrayNum] =
                 (FRDGView *)pFVar16;
            *(int *)((longlong)&pFVar16->_padding_ + 4) = aTStack_640[0].Array.ArrayNum;
            aTStack_640[0].Array.ArrayNum = aTStack_640[0].Array.ArrayNum + 1;
            FRDGUserValidation::ValidateCreateSRV(&FStack_118,pFVar16);
          }
          pFVar15 = pFStack_c18;
          uVar9 = uStack_c8c;
          uVar25 = uStack_c90;
          *(FRDGTextureSRV **)((longlong)(puVar17 + 1) + (longlong)pFVar1) = pFVar16;
          puVar28 = (undefined8 *)(ulonglong)(iVar29 + 1U);
          puVar17 = puVar17 + 1;
        } while ((int)(iVar29 + 1U) < 4);
        sVar8 = (short)uStack_ca8;
        sVar5 = -1;
        if ((lStack_c28 == 0) ||
           (sVar5 = (short)uStack_ca8, (*(uint *)&pFStack_c18->Desc >> 0x18 & 1) != 0)) {
          FStack_be8.Texture = pFStack_c18;
          FStack_be8.ResolveTexture = (FRDGTexture *)0x0;
          FStack_be8.LoadAction = ENoAction;
          FStack_be8.MipIndex = '\0';
          FStack_be8.ArraySlice = sVar5;
          bVar10 = FRenderTargetBinding::Validate(&FStack_be8);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Validate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x216,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar20[8] = FStack_be8.Texture;
          puVar20[9] = FStack_be8.ResolveTexture;
          puVar20[10] = CONCAT44(FStack_be8._20_4_,CONCAT22(FStack_be8.ArraySlice,FStack_be8._16_2_)
                                );
          TStack_b60._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
          TStack_b60._8_4_ = uStack_c90;
          TStack_b60._12_4_ = uStack_c8c;
          pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                       [(int)GMaxRHIFeatureLevel]);
          pFVar23 = (FShaderType *)FLandscapePackRGBAChannelsPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar22,&TStack_ad8,pFVar23,0);
          if (TStack_ad8.ShaderContent == (FShader *)0x0) {
            FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&FStack_b78);
            ::FName::ToString((FName *)FVar24,&FStack_a28);
            FLandscapePackRGBAChannelsPS::GetStaticType();
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (FStack_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_a28.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FLandscapePackRGBAChannelsPS::GetStaticType();
          TStack_a18.ShaderContent = (FLandscapePackRGBAChannelsPS *)TStack_ad8.ShaderContent;
          TStack_a18.ShaderMap = TStack_ad8.ShaderMap;
          pFVar11 = FRDGEventName::FRDGEventName(&FStack_9b8,1,L"PackRGBAChannels");
          FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>
                    ((FRDGBuilder *)auStack_818,pFVar22,pFVar11,&TStack_a18,pFVar1,
                     (TIntRect<int> *)&TStack_b60._s_0,(FRHIBlendState *)0x0,
                     (FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
          uVar27 = uStack_c08;
          puVar20 = (undefined8 *)(ulonglong)(uStack_c08 & 0xfffffff7);
          if (FStack_9b8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_9b8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if ((uVar27 & 4) != 0) {
            puVar20 = (undefined8 *)(ulonglong)(uVar27 & 0xfffffff3);
            FVar6 = FStack_b78;
            goto joined_r0x000145f07710;
          }
        }
        else {
          FStack_958.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
          FStack_958.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
          uStack_c20 = uStack_c90;
          uStack_c1c = uStack_c8c;
          FStack_958.Extent.field0_0x0._s_0.Y = uStack_c8c;
          FStack_958.Extent.field0_0x0._s_0.X = uStack_c90;
          FStack_958.Format = (pFStack_c18->Desc).field_0x33;
          pwStack_c98 = L"PackedRGBASlice";
          FStack_958.Flags = RenderTargetable;
          FStack_958.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
          FStack_958.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
          FStack_958.ExtData = 0;
          FStack_958.Depth = 1;
          FStack_958.ArraySize = 1;
          FStack_958.NumMips = '\x01';
          FStack_958.NumSamples = '\x01';
          FStack_958.Dimension = Texture2D;
          FStack_958.UAVFormat = PF_Unknown;
          FStack_958.FastVRAMPercentage = 0xff;
          FStack_958.AliasableFormats.AllocatorInstance.SecondaryData =
               (ForElementType<EPixelFormat>)0x0;
          FStack_958.AliasableFormats.ArrayNum = 0;
          FStack_958.AliasableFormats.ArrayMax = 1;
          FRHITextureDesc::FRHITextureDesc(&FStack_868,&FStack_958);
          if (FStack_868.Extent.field0_0x0._s_0.X < 1) {
            ppwStack_a78 = &pwStack_c98;
            pFStack_a70 = &FStack_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&ppwStack_a78);
          }
          if (FStack_868.Extent.field0_0x0._s_0.Y < 1) {
            appwStack_a68[0] = &pwStack_c98;
            appwStack_a68[1] = (wchar_t **)&FStack_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(appwStack_a68);
          }
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
              (uint)FStack_868.Extent.field0_0x0._s_0.X) {
            ppwStack_a58 = &pwStack_c98;
            pFStack_a50 = &FStack_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&ppwStack_a58);
          }
          if ((uint)GRHIGlobals.MaxTextureDimensions.Value <
              (uint)FStack_868.Extent.field0_0x0._s_0.Y) {
            ppwStack_b00 = &pwStack_c98;
            pFStack_af8 = &FStack_868;
            `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&ppwStack_b00);
          }
          uVar26 = GRHIGlobals.MaxTextureDimensions.Value;
          if (FStack_868.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
            uVar26 = FStack_868.Extent.field0_0x0._s_0.X;
          }
          FStack_868.Extent.field0_0x0._s_0.X = 1;
          if (1 < (int)uVar26) {
            FStack_868.Extent.field0_0x0._s_0.X = uVar26;
          }
          TVar4.Value = GRHIGlobals.MaxTextureDimensions.Value;
          if (FStack_868.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
            TVar4.Value = FStack_868.Extent.field0_0x0._s_0.Y;
          }
          FStack_868.Extent.field0_0x0._s_0.Y = 1;
          if (1 < TVar4.Value) {
            FStack_868.Extent.field0_0x0._s_0.Y = TVar4.Value;
          }
          FRDGUserValidation::ValidateCreateTexture
                    (&FStack_118,(FRDGTextureDesc *)&FStack_868,pwStack_c98,None);
          pFVar21 = FMemStackBase::Alloc(&aFStack_800[0].MemStack,0x158,8);
          pFVar21 = FRDGTexture::FRDGTexture
                              (pFVar21,pwStack_c98,(FRDGTextureDesc *)&FStack_868,None);
          if (uStack_658 == auStack_654[0]) {
            uStack_658 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                                   (0x808,&FStack_660,(int *)auStack_654);
          }
          FStack_660.Data[(int)uStack_658] = pFVar21;
          (pFVar21->Handle).Index = uStack_658;
          uStack_658 = uStack_658 + 1;
          FRDGUserValidation::ValidateCreateTexture(&FStack_118,pFVar21);
          FRDGTrace::AddResource(&FStack_188,(FRDGViewableResource *)pFVar21);
          if (FStack_868.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)FStack_868.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          FStack_c00.ResolveTexture = (FRDGTexture *)0x0;
          FStack_c00.LoadAction = ENoAction;
          FStack_c00.MipIndex = '\0';
          FStack_c00.ArraySlice = -1;
          FStack_c00.Texture = pFVar21;
          bVar10 = FRenderTargetBinding::Validate(&FStack_c00);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Validate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x216,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TStack_b70._8_4_ = uVar25;
          puVar20[8] = FStack_c00.Texture;
          puVar20[9] = FStack_c00.ResolveTexture;
          TStack_b70._12_4_ = uVar9;
          puVar20[10] = CONCAT44(FStack_c00._20_4_,FStack_c00._16_4_);
          TStack_b70._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
          pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                       [(int)GMaxRHIFeatureLevel]);
          pFVar23 = (FShaderType *)FLandscapePackRGBAChannelsPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar22,&TStack_ae8,pFVar23,0);
          if (TStack_ae8.ShaderContent == (FShader *)0x0) {
            FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&pvStack_b80);
            ::FName::ToString((FName *)FVar24,&FStack_a48);
            FLandscapePackRGBAChannelsPS::GetStaticType();
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (FStack_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_a48.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FLandscapePackRGBAChannelsPS::GetStaticType();
          TStack_a38.ShaderContent = (FLandscapePackRGBAChannelsPS *)TStack_ae8.ShaderContent;
          TStack_a38.ShaderMap = TStack_ae8.ShaderMap;
          pFVar11 = FRDGEventName::FRDGEventName(&FStack_9d0,1,L"PackRGBAChannels");
          FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>
                    ((FRDGBuilder *)auStack_818,pFVar22,pFVar11,&TStack_a38,pFVar1,
                     (TIntRect<int> *)&TStack_b70._s_0,(FRHIBlendState *)0x0,
                     (FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
          uVar27 = uStack_c10;
          puVar20 = (undefined8 *)(ulonglong)(uStack_c10 & 0xffffffdf);
          if (FStack_9d0.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_9d0.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar27 & 0x10) != 0) &&
             (puVar20 = (undefined8 *)(ulonglong)(uVar27 & 0xffffffcf), pvStack_b80 != (void *)0x0))
          {
            FMemory::Free(pvStack_b80);
          }
          FStack_b40.Size.field0_0x0._s_0.Z =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          FStack_b40.SourcePosition.field0_0x0._s_0.Z =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          FStack_b40.DestPosition.field0_0x0._s_0.Z =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          FStack_b40.NumSlices = 1;
          FStack_b40.SourceMipIndex = 0;
          FStack_b40.NumMips = 1;
          FStack_b40.DestSliceIndex = (uint)sVar8;
          FStack_b40.Size.field0_0x0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          FStack_b40.SourcePosition.field0_0x0._0_8_ =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          FStack_b40.DestPosition.field0_0x0._0_8_ =
               UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          FStack_b40.SourceSliceIndex = 0;
          FStack_b40.DestMipIndex = 0;
          AddCopyTexturePass((FRDGBuilder *)auStack_818,pFVar21,pFVar15,&FStack_b40);
          FVar6 = FStack_958.AliasableFormats.AllocatorInstance.SecondaryData;
joined_r0x000145f07710:
          if (FVar6 != (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)FVar6);
          }
        }
        if (FStack_988.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
          FMemory::Free((void *)FStack_988.SecondaryData);
        }
        if (cStack_b90 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&TStack_ba0);
        }
        uStack_ca8 = uStack_ca8 + 1;
        puVar17 = (undefined8 *)(ulonglong)uStack_ca8;
        puVar28 = (undefined8 *)(ulonglong)uStack_ca4;
        param_1 = plStack_b88;
        iVar29 = iStack_c78;
        uVar27 = uStack_c84;
      } while ((int)uStack_ca8 < (int)uStack_c88);
    }
    if (FStack_908.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_908.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
  return;
}

// Call @ 145f09780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_2>,void>
::Call(void *param_1)

{
  undefined8 uVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(char *)((longlong)param_1 + 0x18) == '\0') {
    pFVar2 = `ULandscapeHeightfieldCollisionComponent::OnCreatePhysicsState'::__l8::<lambda_1>::
             operator()(*(void **)((longlong)param_1 + 8));
  }
  else {
    pFVar2 = (FSingleParticlePhysicsProxy *)**(undefined8 **)param_1;
  }
  **(undefined8 **)param_1 = pFVar2;
  uVar1 = **(undefined8 **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_18.ArrayNum = 1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&TStack_18.AllocatorInstance,1,&TStack_18.ArrayMax);
  *(undefined8 *)TStack_18.AllocatorInstance.Data = uVar1;
  FChaosScene::AddActorsToScene_AssumesLocked
            (*(FChaosScene **)((longlong)param_1 + 0x10),&TStack_18,true);
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return;
}

// Call @ 145f28fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeTileVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  uVar3 = puVar1[1];
  *(undefined8 *)(lVar2 + 0x150) = *puVar1;
  *(undefined8 *)(lVar2 + 0x158) = uVar3;
  uVar3 = puVar1[3];
  *(undefined8 *)(lVar2 + 0x160) = puVar1[2];
  *(undefined8 *)(lVar2 + 0x168) = uVar3;
  return;
}

// Call @ 145f28ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureCorner_Internal'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  byte bVar2;
  FRHITexture *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  FUpdateTextureRegion2D FStack_38;
  
  this = *(FRHITexture **)(*(longlong *)param_1 + 0x20);
  if (this != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this);
  }
  lVar6 = (**(code **)(this->_padding_ + 0x20))(this);
  iVar5 = *(int *)((longlong)param_1 + 0x10);
  bVar1 = *(byte *)(lVar6 + 0x30);
  if ((iVar5 != *(int *)(lVar6 + 0x24)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstResidentMipSize == Desc.GetSize().X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                         ,0x4cb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = 0;
  if (bVar1 != 0) {
    do {
      if (iVar5 < 2) break;
      bVar2 = *(byte *)((longlong)param_1 + 0xc);
      if ((7 < bVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                             ,0x9f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_38.SrcX = 0;
      FStack_38.SrcY = 0;
      FStack_38.Width = 1;
      FStack_38.Height = 1;
      FStack_38.DestX = iVar5 - 1;
      if (2 < (bVar2 - 1 & 7)) {
        FStack_38.DestX = 0;
      }
      FStack_38.DestY = iVar5 - 1;
      if (2 < (bVar2 - 3 & 7)) {
        FStack_38.DestY = 0;
      }
      FRHICommandListBase::UpdateTexture2D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,this,uVar7,&FStack_38,
                 4,(uchar *)((longlong)param_1 + 8));
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 / 2;
    } while ((int)uVar7 < (int)(uint)bVar1);
  }
  FRHIResource::Release((FRHIResource *)this);
  return;
}

// Call @ 145f29000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdge_Internal'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  FRHITexture *this;
  code *pcVar2;
  bool bVar3;
  FHeightmapTexel *pFVar4;
  longlong lVar5;
  uint uVar6;
  FUpdateTextureRegion2D FStack_28;
  
  pFVar4 = TStridedView<UE::Landscape::FHeightmapTexel,int>::GetElementPtr
                     ((TStridedView<UE::Landscape::FHeightmapTexel,int> *)((longlong)param_1 + 8),0)
  ;
  this = *(FRHITexture **)(*(longlong *)param_1 + 0x20);
  if (this != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this);
  }
  lVar5 = (**(code **)(this->_padding_ + 0x20))(this);
  if (*(uint *)((longlong)param_1 + 0x28) != (uint)*(byte *)(lVar5 + 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResidentMips == Desc.NumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x477,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(int *)((longlong)param_1 + 0x20) - *(int *)((longlong)param_1 + 0x24);
  lVar5 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((int)uVar6 < (int)(uint)*(byte *)(lVar5 + 0x30)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x18);
    if ((bVar1 & 3) == 0) {
      FStack_28.DestX = 1;
      if (bVar1 == 0) {
        FStack_28.DestY = 0;
        FStack_28.Width = *(int *)((longlong)param_1 + 0x1c) - 2;
        FStack_28.Height = 1;
      }
      else {
        FStack_28.Height = 1;
        FStack_28.DestY = *(int *)((longlong)param_1 + 0x1c) - 1;
        FStack_28.Width = *(int *)((longlong)param_1 + 0x1c) - 2;
      }
    }
    else {
      if (bVar1 == 6) {
        FStack_28.DestX = 0;
      }
      else {
        FStack_28.DestX = *(int *)((longlong)param_1 + 0x1c) - 1;
      }
      FStack_28.DestY = 1;
      FStack_28.Width = 1;
      FStack_28.Height = *(int *)((longlong)param_1 + 0x1c) - 2;
    }
    FStack_28.SrcX = 0;
    FStack_28.SrcY = 0;
    FRHICommandListBase::UpdateTexture2D
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,this,uVar6,&FStack_28,
               FStack_28.Width * 4,(uchar *)pFVar4);
  }
  else if (1 < (byte)LogLandscape._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
  }
  ::operator_delete(pFVar4,1);
  FRHIResource::Release((FRHIResource *)this);
  return;
}

// Call @ 145f4da40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeScratchRenderTarget::Clear'::__l2::<lambda_1>,void,FRDGBuilder_&>::
Call(void *param_1,FRDGBuilder *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  FRDGTexture *pFVar5;
  longlong *plStackX_8;
  TIntRect<int>_u_0 aTStack_48 [2];
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  TVar4 = CreateRenderTarget((FRHITexture *)&plStackX_8,*(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (param_2,(TRefCountPtr<IPooledRenderTarget> *)TVar4.Reference,None);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  aTStack_48[0]._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  aTStack_48[0]._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  uStack_20 = 1;
  uStack_18 = 1;
  cVar1 = (pFVar5->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    if ((int)(uint)*(ushort *)&(pFVar5->Desc).field_0x2e < *(int *)((longlong)param_1 + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EffectiveNumSlices <= TextureRef->Desc.ArraySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,199,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,*(undefined4 *)((longlong)param_1 + 8));
  }
  AddClearRenderTargetPass(param_2,pFVar5,(FRDGTextureClearInfo *)&aTStack_48[0]._s_0);
  return;
}

// Call @ 145f4da50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand'::__l2::<lambda_1>,void,FRDGBuilder_&>
::Call(void *param_1,FRDGBuilder *param_2)

{
  TRefCountPtr<IPooledRenderTarget> TVar1;
  FRDGTexture *pFVar2;
  FRDGTexture *pFVar3;
  longlong *plStackX_8;
  longlong *plStackX_18;
  
  TVar1 = CreateRenderTarget((FRHITexture *)&plStackX_8,*(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar2 = FRDGBuilder::RegisterExternalTexture
                     (param_2,(TRefCountPtr<IPooledRenderTarget> *)TVar1.Reference,None);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  TVar1 = CreateRenderTarget((FRHITexture *)&plStackX_18,
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
  pFVar3 = FRDGBuilder::RegisterExternalTexture
                     (param_2,(TRefCountPtr<IPooledRenderTarget> *)TVar1.Reference,None);
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  AddCopyTexturePass(param_2,pFVar2,pFVar3,(FRHICopyTextureInfo *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 145f4da60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditLayerReadback::Flush'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStackX_8 [8];
  
  piVar8 = *(int **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (piVar8 == piVar1) break;
    iVar3 = *piVar8;
    uVar5 = iVar3 / 0xaa;
    uVar7 = 0;
    if ((int)uVar5 < GReadbackTaskPool._40_4_) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = UpdateTask_RenderThread
                      (param_2,(FLandscapeEditReadbackTaskImpl *)
                               ((ulonglong)(uint)(iVar3 % 0xaa) * 0x60 +
                               *(longlong *)(GReadbackTaskPool._32_8_ + (longlong)(int)uVar5 * 8)),
                       true);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bTaskComplete",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0x17f,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}

// Call @ 145f4da70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::FlushAll'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  uVar6 = 0;
  uVar4 = *(uint *)(*(longlong *)param_1 + 0x30);
  plVar8 = *(longlong **)(*(longlong *)param_1 + 0x20);
  if (uVar4 != 0) {
    uVar7 = (ulonglong)uVar4;
    do {
      pFVar5 = (FLandscapeEditReadbackTaskImpl *)(uVar6 * 0x60 + *plVar8);
      if (((pFVar5->TextureResource != (FTextureResource *)0x0) &&
          (bVar3 = UpdateTask_RenderThread(param_2,pFVar5,true), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bTaskComplete",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                             ,0x134,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = 0;
      plVar2 = plVar8 + 1;
      if (uVar4 < 0xaa) {
        uVar6 = (ulonglong)uVar4;
        plVar2 = plVar8;
      }
      plVar8 = plVar2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// Call @ 145f4da80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::Free'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  **(undefined8 **)param_1 = 0;
  return;
}

// Call @ 145f4daa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditLayerReadback::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStackX_8 [8];
  
  piVar8 = *(int **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (piVar8 == piVar1) {
      return;
    }
    iVar3 = *piVar8;
    uVar5 = iVar3 / 0xaa;
    uVar7 = 0;
    if ((int)uVar5 < GReadbackTaskPool._40_4_) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    bVar6 = UpdateTask_RenderThread
                      (param_2,(FLandscapeEditReadbackTaskImpl *)
                               ((ulonglong)(uint)(iVar3 % 0xaa) * 0x60 +
                               *(longlong *)(GReadbackTaskPool._32_8_ + (longlong)(int)uVar5 * 8)),
                       false);
    if (!bVar6) {
      return;
    }
    piVar8 = piVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Call @ 145f4dab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditLayerReadback::Enqueue'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FLandscapeEditReadbackTaskImpl *pFVar1;
  
  pFVar1 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,*(int *)param_1);
  InitTask_RenderThread(param_2,pFVar1);
  pFVar1 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,*(int *)param_1);
  KickTask_RenderThread(param_2,pFVar1);
  return;
}

// Call @ 145f4db10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_1f8 [32];
  <lambda_1> <Stack_1d8;
  ForElementType<FRHITransitionInfo> FStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TArrayView<FRHITransitionInfo_const_,int> TStack_1b8;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> TStack_1a8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  TStack_1a8.AllocatorInstance.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
  TStack_1a8.ArrayNum = 0;
  TStack_1a8.ArrayMax = 8;
  Algo::
  Transform<TArray<ULandscapeScratchRenderTarget::FTransitionInfo,TSizedDefaultAllocator<32>_>,TArray<FRHITransitionInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,__ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope_::__l8::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_1,&TStack_1a8,<Stack_1d8);
  iStack_1c0 = TStack_1a8.ArrayNum;
  FStack_1c8 = (ForElementType<FRHITransitionInfo>)&TStack_1a8;
  if (TStack_1a8.AllocatorInstance.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    FStack_1c8 = TStack_1a8.AllocatorInstance.SecondaryData;
  }
  if (TStack_1a8.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_1b8._12_4_ = uStack_1bc;
  TStack_1b8.ArrayNum = iStack_1c0;
  TStack_1b8.DataPtr = (FRHITransitionInfo *)FStack_1c8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_1b8,None);
  if (TStack_1a8.AllocatorInstance.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    FMemory::Free((void *)TStack_1a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// Call @ 145f4db20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::GarbageCollect'::__l34::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FRHIResource *this;
  
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0x3c) < 0) {
    DestructItems<TRefCountPtr<FRHITexture>,int>
              (*(TRefCountPtr<FRHITexture> **)(lVar1 + 0x30),*(int *)(lVar1 + 0x38));
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if (*(int *)(lVar1 + 0x3c) != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
    }
  }
  else {
    DestructItems<TRefCountPtr<FRHITexture>,int>
              (*(TRefCountPtr<FRHITexture> **)(lVar1 + 0x30),*(int *)(lVar1 + 0x38));
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  this = *(FRHIResource **)(*(longlong *)param_1 + 0x40);
  if (this != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x40) = 0;
    FRHIResource::Release(this);
  }
  return;
}

// Call @ 145f83e50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::
          __l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 145f83e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145f83e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 145f83e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeVertexFactory::Copy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = (*(undefined8 **)((longlong)param_1 + 8))[1];
  *(undefined8 *)(lVar1 + 0x140) = **(undefined8 **)((longlong)param_1 + 8);
  *(undefined8 *)(lVar1 + 0x148) = uVar2;
  return;
}

// Call @ 145f83ea0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindAnyInRadius'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2)

{
  return false;
}

// Call @ 145f83eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHICommandListImmediate::ImmediateFlush(param_2,FlushRHIThreadFlushResources,None);
  FRHICommandListImmediate::FlushResources(param_2);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  if (*(longlong *)param_1 != 0) {
    if (*(char *)((longlong)param_1 + 8) != '\0') {
      FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
    }
    (**(code **)(**(longlong **)param_1 + 0x10))();
  }
  return;
}

// Call @ 145f83f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread
            (*(FLandscapeGrassWeightExporter_RenderThread **)param_1,param_2,
             *(FLandscapeAsyncTextureReadback **)((longlong)param_1 + 8));
  FRHICommandListImmediate::ImmediateFlush(param_2,FlushRHIThreadFlushResources,None);
  return;
}

// Call @ 145f83f40

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeGrassMapsBuilder::StartPrioritizedGrassMapGeneration'::__l29::<lambda_1>,double,UE::Math::TVector<double>_const_&>
::Call(void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - *(double *)((longlong)param_1 + 8);
  dVar3 = (param_2->field0_0x0)._s_0.X - *(double *)param_1;
  dVar2 = (param_2->field0_0x0)._s_0.Z - *(double *)((longlong)param_1 + 0x10);
  return dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
}

// Call @ 145f83f80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindInRadiusHelper<1>'::__l2::<lambda_2>,bool,UE::Geometry::FVector3i_const_&>
::Call(void *param_1,FVector3i *param_2)

{
  int *piVar1;
  bool bVar2;
  FVector3i_u_0 local_18 [2];
  
  piVar1 = *(int **)param_1;
  if ((((param_2->field0_0x0)._s_0.X == *piVar1) && ((param_2->field0_0x0)._s_0.Y == piVar1[1])) &&
     ((param_2->field0_0x0)._s_0.Z == piVar1[2])) {
    return true;
  }
  local_18[0]._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_18[0]._8_4_ = (param_2->field0_0x0)._s_0.Z;
  bVar2 = `UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindInRadiusHelper<1>'::
          __l2::<lambda_1>::operator()
                    (*(void **)((longlong)param_1 + 8),(FVector3i *)&local_18[0]._s_0);
  return !bVar2;
}

// Call @ 145fba770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
::Call(void *param_1,ALandscapeProxy **param_2)

{
  bool bVar1;
  
  bVar1 = ``UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()'::__l2
          ::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 145fba780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  bVar1 = *param_2;
  LOCK();
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + -1;
  UNLOCK();
  if (bVar1 != false) {
    *(undefined1 *)(*(longlong *)param_1 + 0x48d) = 1;
  }
  if (**(int **)((longlong)param_1 + 8) == 0) {
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar2 = *(code **)((longlong)param_1 + 0x10);
    plVar4 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3);
  }
  return;
}

// Call @ 145fba7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>,void,FRDGBuilder_&>
::Call(void *param_1,FRDGBuilder *param_2)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this;
  TRDGEmptyLambdaPass<_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>
  *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  FRDGEventName FStack_60;
  undefined1 auStack_48 [40];
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  auStack_48._0_8_ = *(undefined8 *)param_1;
  plStack_20 = (longlong *)0x0;
  if (auStack_48._0_8_ != 0) {
    puVar5 = (undefined8 *)((longlong)param_1 + 0x10);
    if (*(undefined8 **)((longlong)param_1 + 0x28) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)((longlong)param_1 + 0x28);
    }
    (**(code **)*puVar5)(puVar5,auStack_48 + 0x10);
  }
  pFVar3 = FRDGEventName::FRDGEventName(&FStack_60,1,L"RDGRecordedRenderCommand");
  FRDGUserValidation::ValidateAddPass(&param_2->UserValidation,pFVar3,NeverCull);
  FRDGBuilder::FlushAccessModeQueue(param_2);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x1c0,0x10);
  pTVar4 = TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                     (this,pFVar3,NeverCull,(<lambda_1> *)auStack_48);
  piVar1 = &(param_2->Passes).Array.ArrayMax;
  iVar2 = (param_2->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_2->Passes,piVar1);
  }
  (param_2->Passes).Array.ArrayNum = iVar2 + 1;
  (param_2->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
  *(int *)&pTVar4->field_0x4c = (param_2->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_2,(FRDGPass *)pTVar4);
  if (FStack_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (auStack_48._0_8_ != 0) {
    plVar6 = (longlong *)(auStack_48 + 0x10);
    if (plStack_20 != (longlong *)0x0) {
      plVar6 = plStack_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// Call @ 145fba800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  EShaderPlatform EVar7;
  ERHIAccess EVar8;
  bool bVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  FRHIBreadcrumbAllocator *this;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar12;
  undefined8 uVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FRDGTexture *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined1 auStackY_938 [32];
  undefined1 uStack_908;
  undefined1 auStack_907 [7];
  longlong *plStack_900;
  int iStack_8f8;
  uint uStack_8f4;
  uint *puStack_8f0;
  undefined4 uStack_8e8;
  int iStack_8e4;
  int iStack_8e0;
  int iStack_8dc;
  int iStack_8d8;
  undefined4 uStack_8d4;
  int iStack_8d0;
  int iStack_8cc;
  undefined1 auStack_8c8 [20];
  uint uStack_8b4;
  uint *puStack_8b0;
  undefined8 uStack_8a8;
  longlong lStack_8a0;
  longlong lStack_898;
  FRHIBreadcrumbScope FStack_890;
  char cStack_880;
  FString FStack_878;
  longlong lStack_868;
  longlong lStack_860;
  FRDGEventName FStack_858;
  uint uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  FRDGBuilder FStack_818;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pwVar10 = FRDGEventName::GetTCHAR((FRDGEventName *)((longlong)param_1 + 0x60));
  pFVar11 = ::FString::FString(&FStack_878,pwVar10);
  iVar19 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_830 = 0;
    uStack_82c = 0;
    ::Desc._12_8_ = ZEXT48(uStack_834);
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_FRDGBuilderReco;
    ::Desc._padding_ = (longlong)u__s;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x86;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::Desc::operator()'::__l7::<lambda_1>
           ::operator()<FString>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  this = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
  pTVar12 = FRHIBreadcrumbAllocator::
            Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&>
                      (this,this,&::Desc,pFVar11);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            (&FStack_890,(FRHIComputeCommandList *)param_2,(FRHIBreadcrumbNode *)pTVar12);
  cStack_880 = '\x01';
  if (FStack_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_878.Data.AllocatorInstance.Data);
  }
  EVar7 = GMaxRHIShaderPlatform;
  FStack_858.EventFormat = *(wchar_t **)((longlong)param_1 + 0x60);
  ::FString::FString(&FStack_858.FormattedEventName,(FString *)((longlong)param_1 + 0x68));
  FRDGBuilder::FRDGBuilder(&FStack_818,param_2,&FStack_858,None,EVar7);
  iVar4 = *(int *)((longlong)param_1 + 8);
  puVar22 = *(undefined8 **)param_1;
  puVar24 = puVar22 + (longlong)iVar4 * 6;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar4) {
      uStack_908 = 0;
      `TCheckedPointerIterator<TFunction<void___cdecl(FRDGBuilder_&)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&uStack_908);
    }
    if (puVar22 == puVar24) break;
    CheckCallable((void *)*puVar22);
    pcVar6 = (code *)*puVar22;
    plVar16 = puVar22 + 2;
    if ((longlong *)puVar22[5] != (longlong *)0x0) {
      plVar16 = (longlong *)puVar22[5];
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(uVar13,&FStack_818);
    puVar22 = puVar22 + 6;
  }
  iVar4 = *(int *)((longlong)param_1 + 0x38);
  puVar1 = (uint *)((longlong)param_1 + 0x20);
  plVar16 = (longlong *)((longlong)param_1 + 0x10);
  uStack_8f4 = 1;
  iStack_8e0 = 0;
  iStack_8e4 = iVar19;
  if (iVar4 != 0) {
    puVar23 = *(uint **)((longlong)param_1 + 0x30);
    if (*(uint **)((longlong)param_1 + 0x30) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = *puVar23;
    iStack_8e0 = 0;
    iVar19 = 0;
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar19;
      iStack_8e0 = iStack_8e0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_8e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_145fb7c2e;
      uVar21 = puVar23[lVar17 + 1];
    }
    uStack_8f4 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_8f4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iStack_8d0 = (int)lVar17;
    iStack_8e4 = iStack_8e0 + -1 + iStack_8d0;
    if (iVar4 < iStack_8e4) {
      iStack_8e4 = iVar4;
    }
  }
LAB_145fb7c2e:
  uVar21 = *(uint *)((longlong)param_1 + 0x38);
  uVar20 = uVar21 & 0xffffffe0;
  iStack_8d8 = *(int *)((longlong)param_1 + 0x18) - *(int *)((longlong)param_1 + 0x44);
  uStack_8e8 = 0xffffffff;
  unique0x1000039b = CONCAT44(uStack_8f4,iVar19);
  uStack_8a8 = CONCAT44(iStack_8e4,0xffffffff);
  iVar18 = (int)uVar21 >> 5;
  lStack_8a0 = CONCAT44(iStack_8e4,iStack_8e0);
  lStack_898 = CONCAT44(uStack_8d4,iStack_8d8);
  plStack_900 = plVar16;
  iStack_8f8 = iVar19;
  puStack_8f0 = puVar1;
  iStack_8dc = iStack_8e4;
  auStack_8c8._8_8_ = plVar16;
  puStack_8b0 = puVar1;
  if ((((int)uVar21 < 0) || (iVar4 < (int)uVar21)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x38);
  if (uVar21 != uVar5) {
    puVar23 = *(uint **)((longlong)param_1 + 0x30);
    if (*(uint **)((longlong)param_1 + 0x30) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & puVar23[iVar18];
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145fb7d40;
      uVar21 = puVar23[lVar17 + 1];
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iStack_8cc = (int)lVar17;
    uVar21 = iStack_8cc + -1 + uVar20;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_145fb7d40:
  while( true ) {
    uVar13 = auStack_8c8._8_8_;
    if ((int)*(longlong *)(auStack_8c8._8_8_ + 8) - *(int *)(auStack_8c8._8_8_ + 0x34) !=
        (int)lStack_898) {
      auStack_907[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_907);
    }
    if (((uStack_8a8._4_4_ == uVar21) && (puStack_8b0 == puVar1)) && ((longlong *)uVar13 == plVar16)
       ) break;
    plVar2 = (longlong *)(*(longlong *)uVar13 + (longlong)(int)uStack_8a8._4_4_ * 0x18);
    lStack_868 = *plVar2;
    lStack_860 = plVar2[1];
    TVar14 = CreateRenderTarget((FRHITexture *)auStack_8c8,*(wchar_t **)(lStack_868 + 0x20));
    pFVar15 = FRDGBuilder::RegisterExternalTexture
                        (&FStack_818,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
    if ((longlong *)auStack_8c8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)auStack_8c8._0_8_ + 0x38))();
    }
    if ((pFVar15 == (FRDGTexture *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureRef != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                           ,0x92,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar8 = (ERHIAccess)lStack_860;
    FRDGUserValidation::ValidateSetAccessFinal
              (&FStack_818.UserValidation,(FRDGViewableResource *)pFVar15,(ERHIAccess)lStack_860);
    *(ERHIAccess *)&pFVar15->_padding_ = EVar8;
    uStack_8a8 = CONCAT44(uStack_8a8._4_4_,(uint)uStack_8a8 & ~uStack_8b4);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_8c8 + 0x10));
  }
  FRDGBuilder::Execute(&FStack_818);
  FRDGBuilder::~FRDGBuilder(&FStack_818);
  if (cStack_880 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_890);
  }
  return;
}

// Call @ 145fba810

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>,bool,ULandscapeInfo_*>
::Call(void *param_1,ULandscapeInfo **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 145fba820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  ERHIAccess EVar2;
  code *pcVar3;
  EShaderPlatform EVar4;
  bool bVar5;
  FRDGEventName *pFVar6;
  undefined8 uVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRDGTexture *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStackY_878 [32];
  undefined1 auStack_848 [8];
  undefined1 auStack_840 [16];
  FString FStack_830;
  FRDGEventName FStack_820;
  FRDGBuilder FStack_808;
  ulonglong uStack_38;
  
  EVar4 = GMaxRHIShaderPlatform;
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pFVar6 = FRDGEventName::FRDGEventName(&FStack_820,1,L"RDGImmediateRDGCommand");
  auStack_840._8_8_ = pFVar6->EventFormat;
  ::FString::FString(&FStack_830,&pFVar6->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&FStack_808,param_2,(FRDGEventName *)(auStack_840 + 8),None,EVar4);
  if (FStack_820.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_820.FormattedEventName.Data.AllocatorInstance.Data);
  }
  CheckCallable(*(void **)param_1);
  pcVar3 = *(code **)param_1;
  plVar10 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar10 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  (*pcVar3)(uVar7,&FStack_808);
  iVar1 = *(int *)((longlong)param_1 + 0x38);
  plVar10 = *(longlong **)((longlong)param_1 + 0x30);
  plVar11 = plVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x38) != iVar1) {
      auStack_848[0] = 0;
      `TCheckedPointerIterator<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStack_848);
    }
    if (plVar10 == plVar11) break;
    TVar8 = CreateRenderTarget((FRHITexture *)auStack_840,*(wchar_t **)(*plVar10 + 0x20));
    pFVar9 = FRDGBuilder::RegisterExternalTexture
                       (&FStack_808,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
    if ((longlong *)auStack_840._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)auStack_840._0_8_ + 0x38))();
    }
    if (pFVar9 == (FRDGTexture *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureRef != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                         ,0xb4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar2 = *(ERHIAccess *)(plVar10 + 1);
    FRDGUserValidation::ValidateSetAccessFinal
              (&FStack_808.UserValidation,(FRDGViewableResource *)pFVar9,EVar2);
    plVar10 = plVar10 + 2;
    *(ERHIAccess *)&pFVar9->_padding_ = EVar2;
  }
  FRDGBuilder::Execute(&FStack_808);
  FRDGBuilder::~FRDGBuilder(&FStack_808);
  return;
}

