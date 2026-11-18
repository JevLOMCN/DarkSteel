// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FMinimalSceneTextures @ 1447f47c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FMinimalSceneTextures * __thiscall
FMinimalSceneTextures::FMinimalSceneTextures
          (FMinimalSceneTextures *this,FMinimalSceneTextures *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<FUserSceneTextureEventData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ETextureCreateFlags EVar5;
  undefined8 uVar6;
  FRDGTexture *pFVar7;
  FRDGTextureSRV *pFVar8;
  EShadingPath EVar9;
  Type TVar10;
  EShaderPlatform EVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  EPixelFormat EVar15;
  undefined3 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  ERenderTargetLoadAction EVar22;
  ERenderTargetLoadAction EVar23;
  undefined5 uVar24;
  FSceneTexturesConfig *pFVar25;
  FSceneTexturesConfig *pFVar26;
  FSceneTexturesConfig *pFVar27;
  longlong lVar28;
  FSceneTexturesConfig *pFVar29;
  
  this->Owner = param_1->Owner;
  this->bIsSceneTexturesInitialized = param_1->bIsSceneTexturesInitialized;
  lVar28 = 2;
  pFVar25 = &param_1->Config;
  pFVar26 = &this->Config;
  do {
    pFVar29 = pFVar26;
    pFVar27 = pFVar25;
    pFVar26 = (FSceneTexturesConfig *)(pFVar29->GBufferParams + 1);
    EVar9 = pFVar27->ShadingPath;
    TVar10 = pFVar27->FeatureLevel;
    EVar11 = pFVar27->ShaderPlatform;
    uVar12 = *(undefined2 *)&pFVar27->field_0xe;
    pFVar25 = (FSceneTexturesConfig *)(pFVar27->GBufferParams + 1);
    pFVar29->Extracts = pFVar27->Extracts;
    pFVar29->ShadingPath = EVar9;
    pFVar29->FeatureLevel = TVar10;
    pFVar29->ShaderPlatform = EVar11;
    *(undefined2 *)&pFVar29->field_0xe = uVar12;
    uVar13 = pFVar27->SmallDepthDownsampleFactor;
    uVar14 = pFVar27->NumSamples;
    (pFVar29->Extent).field0_0x0 = (pFVar27->Extent).field0_0x0;
    pFVar29->SmallDepthDownsampleFactor = uVar13;
    pFVar29->NumSamples = uVar14;
    EVar15 = pFVar27->ColorFormat;
    uVar16 = *(undefined3 *)&pFVar27->field_0x25;
    EVar5 = pFVar27->ColorCreateFlags;
    pFVar29->EditorPrimitiveNumSamples = pFVar27->EditorPrimitiveNumSamples;
    pFVar29->ColorFormat = EVar15;
    *(undefined3 *)&pFVar29->field_0x25 = uVar16;
    pFVar29->ColorCreateFlags = EVar5;
    EVar5 = pFVar27->ExtraSceneColorCreateFlags;
    pFVar29->DepthCreateFlags = pFVar27->DepthCreateFlags;
    pFVar29->ExtraSceneColorCreateFlags = EVar5;
    uVar6 = *(undefined8 *)&pFVar27->ColorClearValue;
    pFVar29->ExtraSceneDepthCreateFlags = pFVar27->ExtraSceneDepthCreateFlags;
    *(undefined8 *)&pFVar29->ColorClearValue = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar27->ColorClearValue).Value + 0xc);
    *(undefined8 *)((longlong)&(pFVar29->ColorClearValue).Value + 4) =
         *(undefined8 *)((longlong)&(pFVar27->ColorClearValue).Value + 4);
    *(undefined8 *)((longlong)&(pFVar29->ColorClearValue).Value + 0xc) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar27->DepthClearValue).Value + 8);
    (pFVar29->DepthClearValue).Value.DSValue = (pFVar27->DepthClearValue).Value.DSValue;
    *(undefined8 *)((longlong)&(pFVar29->DepthClearValue).Value + 8) = uVar6;
    uVar12 = *(undefined2 *)&pFVar27->GBufferParams[0].field_0x2;
    iVar4 = pFVar27->GBufferParams[0].LegacyFormatIndex;
    bVar17 = pFVar27->GBufferParams[0].bHasVelocity;
    bVar18 = pFVar27->GBufferParams[0].bHasTangent;
    bVar19 = pFVar27->GBufferParams[0].bHasPrecShadowFactor;
    bVar20 = pFVar27->GBufferParams[0].bUsesVelocityDepth;
    bVar21 = pFVar27->GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight;
    uVar16 = *(undefined3 *)&pFVar27->GBufferParams[0].field_0xd;
    pFVar29->GBufferParams[0].ShaderPlatform = pFVar27->GBufferParams[0].ShaderPlatform;
    *(undefined2 *)&pFVar29->GBufferParams[0].field_0x2 = uVar12;
    pFVar29->GBufferParams[0].LegacyFormatIndex = iVar4;
    pFVar29->GBufferParams[0].bHasVelocity = bVar17;
    pFVar29->GBufferParams[0].bHasTangent = bVar18;
    pFVar29->GBufferParams[0].bHasPrecShadowFactor = bVar19;
    pFVar29->GBufferParams[0].bUsesVelocityDepth = bVar20;
    pFVar29->GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight = bVar21;
    *(undefined3 *)&pFVar29->GBufferParams[0].field_0xd = uVar16;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  EVar9 = pFVar25->ShadingPath;
  bVar17 = pFVar27->GBufferParams[1].bHasVelocity;
  bVar18 = pFVar27->GBufferParams[1].bHasTangent;
  bVar19 = pFVar27->GBufferParams[1].bHasPrecShadowFactor;
  bVar20 = pFVar27->GBufferParams[1].bUsesVelocityDepth;
  bVar21 = pFVar27->GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight;
  uVar16 = *(undefined3 *)&pFVar27->GBufferParams[1].field_0xd;
  this_00 = &this->UserSceneTextures;
  pFVar26->Extracts = pFVar25->Extracts;
  pFVar26->ShadingPath = EVar9;
  pFVar29->GBufferParams[1].bHasVelocity = bVar17;
  pFVar29->GBufferParams[1].bHasTangent = bVar18;
  pFVar29->GBufferParams[1].bHasPrecShadowFactor = bVar19;
  pFVar29->GBufferParams[1].bUsesVelocityDepth = bVar20;
  pFVar29->GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight = bVar21;
  *(undefined3 *)&pFVar29->GBufferParams[1].field_0xd = uVar16;
  EVar15 = pFVar27->GBufferBindings[0].GBufferA.Format;
  uVar16 = *(undefined3 *)&pFVar27->GBufferBindings[0].GBufferA.field_0x5;
  EVar5 = pFVar27->GBufferBindings[0].GBufferA.Flags;
  pFVar29->GBufferBindings[0].GBufferA.Index = pFVar27->GBufferBindings[0].GBufferA.Index;
  pFVar29->GBufferBindings[0].GBufferA.Format = EVar15;
  *(undefined3 *)&pFVar29->GBufferBindings[0].GBufferA.field_0x5 = uVar16;
  pFVar29->GBufferBindings[0].GBufferA.Flags = EVar5;
  EVar15 = pFVar27->GBufferBindings[0].GBufferB.Format;
  uVar16 = *(undefined3 *)&pFVar27->GBufferBindings[0].GBufferB.field_0x5;
  EVar5 = pFVar27->GBufferBindings[0].GBufferB.Flags;
  pFVar29->GBufferBindings[0].GBufferB.Index = pFVar27->GBufferBindings[0].GBufferB.Index;
  pFVar29->GBufferBindings[0].GBufferB.Format = EVar15;
  *(undefined3 *)&pFVar29->GBufferBindings[0].GBufferB.field_0x5 = uVar16;
  pFVar29->GBufferBindings[0].GBufferB.Flags = EVar5;
  EVar15 = pFVar27->GBufferBindings[0].GBufferC.Format;
  uVar16 = *(undefined3 *)&pFVar27->GBufferBindings[0].GBufferC.field_0x5;
  EVar5 = pFVar27->GBufferBindings[0].GBufferC.Flags;
  pFVar29->GBufferBindings[0].GBufferC.Index = pFVar27->GBufferBindings[0].GBufferC.Index;
  pFVar29->GBufferBindings[0].GBufferC.Format = EVar15;
  *(undefined3 *)&pFVar29->GBufferBindings[0].GBufferC.field_0x5 = uVar16;
  pFVar29->GBufferBindings[0].GBufferC.Flags = EVar5;
  EVar15 = pFVar27->GBufferBindings[0].GBufferD.Format;
  uVar16 = *(undefined3 *)&pFVar27->GBufferBindings[0].GBufferD.field_0x5;
  EVar5 = pFVar27->GBufferBindings[0].GBufferD.Flags;
  pFVar29->GBufferBindings[0].GBufferD.Index = pFVar27->GBufferBindings[0].GBufferD.Index;
  pFVar29->GBufferBindings[0].GBufferD.Format = EVar15;
  *(undefined3 *)&pFVar29->GBufferBindings[0].GBufferD.field_0x5 = uVar16;
  pFVar29->GBufferBindings[0].GBufferD.Flags = EVar5;
  EVar15 = pFVar27->GBufferBindings[0].GBufferE.Format;
  uVar16 = *(undefined3 *)&pFVar27->GBufferBindings[0].GBufferE.field_0x5;
  EVar5 = pFVar27->GBufferBindings[0].GBufferE.Flags;
  pFVar29->GBufferBindings[0].GBufferE.Index = pFVar27->GBufferBindings[0].GBufferE.Index;
  pFVar29->GBufferBindings[0].GBufferE.Format = EVar15;
  *(undefined3 *)&pFVar29->GBufferBindings[0].GBufferE.field_0x5 = uVar16;
  pFVar29->GBufferBindings[0].GBufferE.Flags = EVar5;
  this->UniformBuffer = param_1->UniformBuffer;
  this->MobileUniformBuffer = param_1->MobileUniformBuffer;
  this->SetupMode = param_1->SetupMode;
  this->MobileSetupMode = param_1->MobileSetupMode;
  pFVar7 = (param_1->Color).Resolve;
  (this->Color).Target = (param_1->Color).Target;
  (this->Color).Resolve = pFVar7;
  pFVar7 = (param_1->Depth).Resolve;
  (this->Depth).Target = (param_1->Depth).Target;
  (this->Depth).Resolve = pFVar7;
  this->Stencil = param_1->Stencil;
  pFVar7 = (param_1->PartialDepth).Resolve;
  (this->PartialDepth).Target = (param_1->PartialDepth).Target;
  (this->PartialDepth).Resolve = pFVar7;
  pFVar8 = (param_1->CustomDepth).Stencil;
  (this->CustomDepth).Depth = (param_1->CustomDepth).Depth;
  (this->CustomDepth).Stencil = pFVar8;
  EVar22 = (param_1->CustomDepth).DepthAction;
  EVar23 = (param_1->CustomDepth).StencilAction;
  uVar24 = *(undefined5 *)&(param_1->CustomDepth).field_0x13;
  puVar1 = &(this->UserSceneTextures).field_0x48;
  (this->CustomDepth).bSeparateStencilBuffer = (param_1->CustomDepth).bSeparateStencilBuffer;
  (this->CustomDepth).DepthAction = EVar22;
  (this->CustomDepth).StencilAction = EVar23;
  *(undefined5 *)&(this->CustomDepth).field_0x13 = uVar24;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UserSceneTextures).field_0x8 = 0;
  *(undefined8 *)&(this->UserSceneTextures).field_0x20 = 0;
  *(undefined4 *)&(this->UserSceneTextures).field_0x28 = 0;
  *(undefined4 *)&(this->UserSceneTextures).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserSceneTextures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserSceneTextures).field_0x34 = 0;
  *(undefined8 *)&(this->UserSceneTextures).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->UserSceneTextures) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->UserSceneTextures).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->UserSceneTextures).field_0x38,
               *(int *)&(param_1->UserSceneTextures).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->UserSceneTextures);
  }
  pTVar3 = &this->UserSceneTextureEvents;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UserSceneTextureEvents).ArrayMax;
  iVar4 = (param_1->UserSceneTextureEvents).ArrayNum;
  _Src = (param_1->UserSceneTextureEvents).AllocatorInstance.Data;
  (this->UserSceneTextureEvents).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
  }
  return this;
}

// FindOrAddUserSceneTexture @ 1454eed70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001454ef171) */
/* WARNING: Removing unreachable block (ram,0x0001454ef17e) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FMinimalSceneTextures::FindOrAddUserSceneTexture
          (FMinimalSceneTextures *this,FRDGBuilder *param_1,int param_2,FName param_3,
          TIntPoint<int> param_4,bool *param_5,UMaterialInterface *param_6,TIntRect<int> *param_7)

{
  byte *pbVar1;
  int *piVar2;
  TArray<FUserSceneTextureEventData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FRDGTexture *pFVar15;
  TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *pTVar16;
  ulong64 uVar17;
  wchar_t *_Dest;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  FName local_res20;
  undefined1 auStack_1a8 [32];
  FRDGTexture **local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  TKeyInitializer<FName_const_&> local_158;
  FRDGTexture *local_150;
  TIntPoint<int>_u_0 TStack_148;
  short local_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  FString local_138;
  int local_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  bool *local_118;
  FString local_110;
  undefined8 local_100;
  uint uStack_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  UMaterialInterface *local_f0;
  int iStack_e8;
  int iStack_e4;
  FName *local_e0;
  FRDGBuilder *local_d8;
  UMaterialInterface *local_d0;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [28];
  int local_8c;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  undefined4 local_7c;
  undefined2 local_78;
  bool local_76;
  EPixelFormat local_75;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_118 = param_5;
  local_d0 = param_6;
  local_158.Key._0_4_ = 0;
  iVar14 = param_4.field0_0x0._0_4_;
  local_res20 = param_3;
  local_158.Key._4_4_ = param_2;
  local_d8 = param_1;
  if (((iVar14 < 1) || (param_4.field0_0x0._s_0.Y < 1)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResolutionDivisor.X >= 1 && ResolutionDivisor.Y >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                          ,0x21b,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FRDGTexture *)(*pcVar6)();
    return pFVar15;
  }
  pTVar16 = TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->UserSceneTextures,local_res20);
  if (pTVar16 == (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0) {
    local_e0 = &local_res20;
    TSet<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->UserSceneTextures,&local_158,(bool *)&local_e0);
    pTVar16 = (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)
              (*(longlong *)&this->UserSceneTextures + (longlong)(int)local_158.Key * 0x20 + 8);
  }
  else {
    if (pTVar16->ArrayNum < 1) {
      local_188 = (FRDGTexture **)0x0;
      local_180 = (FScriptContainerElement *)(longlong)pTVar16->ArrayNum;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FRDGTexture *)(*pcVar6)();
        return pFVar15;
      }
    }
    pFVar19 = (pTVar16->AllocatorInstance).Data;
    if ((*(int *)(pFVar19 + 8) == iVar14) && (*(int *)(pFVar19 + 0xc) == param_4.field0_0x0._s_0.Y))
    {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    iVar18 = pTVar16->ArrayNum;
    uVar20 = 1;
    if (1 < iVar18) {
      lVar21 = 0x18;
      do {
        uVar13 = 0;
        if ((int)uVar20 < iVar18) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_180 = (FScriptContainerElement *)(longlong)iVar18;
          local_188 = (FRDGTexture **)(longlong)(int)uVar20;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FRDGTexture *)(*pcVar6)();
            return pFVar15;
          }
        }
        pFVar19 = (pTVar16->AllocatorInstance).Data;
        if ((*(int *)(pFVar19 + lVar21 + 8) == iVar14) &&
           (*(int *)(pFVar19 + lVar21 + 0xc) == param_4.field0_0x0._s_0.Y)) {
          if (((int)uVar20 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0xce6,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FRDGTexture *)(*pcVar6)();
            return pFVar15;
          }
          if (((pTVar16->ArrayNum < 1) || (pTVar16->ArrayNum <= (int)uVar20)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0xce7,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FRDGTexture *)(*pcVar6)();
            return pFVar15;
          }
          if (uVar20 != 0) {
            pFVar19 = (pTVar16->AllocatorInstance).Data;
            lVar21 = (longlong)(int)uVar20;
            uVar8 = *(undefined8 *)pFVar19;
            uVar9 = *(undefined8 *)(pFVar19 + 8);
            uVar4 = *(undefined8 *)(pFVar19 + 0x10);
            uVar10 = *(undefined8 *)(pFVar19 + lVar21 * 0x18 + 8);
            *(undefined8 *)pFVar19 = *(undefined8 *)(pFVar19 + lVar21 * 0x18);
            *(undefined8 *)(pFVar19 + 8) = uVar10;
            *(undefined8 *)(pFVar19 + 0x10) = *(undefined8 *)(pFVar19 + (lVar21 * 3 + 2) * 8);
            *(undefined8 *)(pFVar19 + lVar21 * 0x18) = uVar8;
            *(undefined8 *)(pFVar19 + lVar21 * 0x18 + 8) = uVar9;
            *(undefined8 *)(pFVar19 + (lVar21 * 3 + 2) * 8) = uVar4;
          }
          goto LAB_1454ef382;
        }
        iVar18 = pTVar16->ArrayNum;
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x18;
      } while ((int)uVar20 < iVar18);
    }
    if (bVar11) goto LAB_1454ef382;
  }
  local_a8._8_8_ = *(undefined8 *)&(this->Config).ColorClearValue;
  local_a8._16_8_ = *(undefined8 *)((longlong)&(this->Config).ColorClearValue.Value + 4);
  local_140 = (short)pTVar16->ArrayNum;
  local_a8._0_8_ = (this->Config).ColorCreateFlags;
  local_84 = *(int *)((longlong)&param_7->field0_0x0 + 8) - *(int *)&param_7->field0_0x0;
  iStack_80 = *(int *)((longlong)&param_7->field0_0x0 + 0xc) -
              *(int *)((longlong)&param_7->field0_0x0 + 4);
  local_76 = (this->Config).bRequireMultiView == 0;
  local_75 = (this->Config).ColorFormat;
  uStack_13e = 0;
  uStack_13c = 0;
  local_88 = 0;
  local_78 = 0x101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  if (local_76) {
    local_a8._24_4_ = (this->Config).ColorClearValue.Value.Color[3];
    local_7c = 0x10001;
    local_120 = local_84;
    iStack_11c = iStack_80;
  }
  else {
    local_a8._24_4_ = (this->Config).ColorClearValue.Value.Color[3];
    local_7c._2_2_ = (short)(this->Config).MobileMultiViewRenderTargetNumLayers;
    local_7c._0_2_ = 1;
    local_128 = local_84;
    iStack_124 = iStack_80;
  }
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_76 = !local_76;
  TStack_148._s_0 = param_4.field0_0x0._s_0;
  if (local_140 == 0) {
    ::FName::ToString(&local_res20,&local_b8);
    ::FString::PrintfImpl(&local_138,L"UST.%s");
    iVar14 = local_138.Data.ArrayNum;
    FVar22.Data = local_138.Data.AllocatorInstance.Data;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    bVar11 = true;
  }
  else {
    ::FName::ToString(&local_res20,&local_c8);
    ::FString::PrintfImpl(&local_110,L"UST.%s[%d]");
    iVar14 = local_110.Data.ArrayNum;
    FVar22.Data = local_110.Data.AllocatorInstance.Data;
    bVar11 = false;
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar11) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar18 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar18 = 0;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (longlong)iVar18 + 1;
  uVar17 = SUB168(ZEXT816(2) * auVar7,0);
  if (SUB168(ZEXT816(2) * auVar7,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  _Dest = operator_new__(uVar17);
  iVar18 = iVar14 + -1;
  pFVar19 = FVar22.Data;
  if (iVar14 == 0) {
    iVar18 = 0;
    pFVar19 = (FScriptContainerElement *)L"";
  }
  wcsncpy(_Dest,(wchar_t *)pFVar19,(longlong)iVar18);
  _Dest[iVar18] = L'\0';
  local_150 = FRDGBuilder::CreateTexture(local_d8,(FRDGTextureDesc *)local_a8,_Dest,None);
  pbVar1 = (byte *)((longlong)&local_150->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pFVar19 = (pTVar16->AllocatorInstance).Data;
  if ((pFVar19 <= (FScriptContainerElement *)&local_150) &&
     ((FScriptContainerElement *)&local_150 < pFVar19 + (longlong)pTVar16->ArrayMax * 0x18)) {
    local_170 = (longlong)pTVar16->ArrayNum;
    local_168 = 0x18;
    local_188 = &local_150;
    local_180 = pFVar19;
    local_178 = (longlong)pTVar16->ArrayMax;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  iVar14 = pTVar16->ArrayNum;
  if (iVar14 == pTVar16->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
  }
  pTVar16->ArrayNum = iVar14 + 1;
  pFVar5 = (pTVar16->AllocatorInstance).Data;
  pFVar19 = pFVar5 + (longlong)iVar14 * 0x18;
  *(FRDGTexture **)pFVar19 = local_150;
  *(TIntPoint<int>_u_0 *)(pFVar19 + 8) = TStack_148;
  *(ulonglong *)(pFVar5 + (longlong)iVar14 * 0x18 + 0x10) =
       CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT12(uStack_13e,local_140)));
  iVar14 = pTVar16->ArrayNum;
  lVar21 = (longlong)iVar14;
  if (1 < iVar14) {
    if ((iVar14 + -1 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
    if (((pTVar16->ArrayNum < 1) || (pTVar16->ArrayNum <= iVar14 + -1)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
    if (iVar14 != 1) {
      pFVar19 = (pTVar16->AllocatorInstance).Data;
      uVar8 = *(undefined8 *)(pFVar19 + (lVar21 * 3 + -3) * 8 + 8);
      uVar9 = *(undefined8 *)pFVar19;
      uVar10 = *(undefined8 *)(pFVar19 + 8);
      uVar4 = *(undefined8 *)(pFVar19 + 0x10);
      *(undefined8 *)pFVar19 = *(undefined8 *)(pFVar19 + (lVar21 * 3 + -3) * 8);
      *(undefined8 *)(pFVar19 + 8) = uVar8;
      *(undefined8 *)(pFVar19 + 0x10) = *(undefined8 *)(pFVar19 + (lVar21 * 3 + -1) * 8);
      *(undefined8 *)(pFVar19 + (lVar21 * 3 + -3) * 8) = uVar9;
      *(undefined8 *)(pFVar19 + (lVar21 * 3 + -3) * 8 + 8) = uVar10;
      *(undefined8 *)(pFVar19 + (lVar21 * 3 + -1) * 8) = uVar4;
    }
  }
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
LAB_1454ef382:
  pTVar3 = &this->UserSceneTextureEvents;
  local_100._4_4_ = local_res20.ComparisonIndex.Value;
  uStack_f8 = local_res20.Number;
  local_100._0_4_ = 3;
  if (pTVar16->ArrayNum < 1) {
    local_188 = (FRDGTexture **)0x0;
    local_180 = (FScriptContainerElement *)(longlong)pTVar16->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  uVar20 = local_158.Key._4_4_;
  pFVar19 = (pTVar3->AllocatorInstance).Data;
  uStack_f4 = *(undefined2 *)((pTVar16->AllocatorInstance).Data + 0x10);
  local_f0 = local_d0;
  iStack_e8 = *(int *)((longlong)&param_7->field0_0x0 + 8) - *(int *)&param_7->field0_0x0;
  iStack_e4 = *(int *)((longlong)&param_7->field0_0x0 + 0xc) -
              *(int *)((longlong)&param_7->field0_0x0 + 4);
  uStack_f2 = (undefined2)local_158.Key._4_4_;
  if ((pFVar19 <= (FScriptContainerElement *)&local_100) &&
     (lVar21 = (longlong)(this->UserSceneTextureEvents).ArrayMax,
     (FScriptContainerElement *)&local_100 < pFVar19 + lVar21 * 0x20)) {
    local_170 = (longlong)(this->UserSceneTextureEvents).ArrayNum;
    local_168 = 0x20;
    local_188 = (FRDGTexture **)&local_100;
    local_180 = pFVar19;
    local_178 = lVar21;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  iVar14 = (this->UserSceneTextureEvents).ArrayNum;
  piVar2 = &(this->UserSceneTextureEvents).ArrayMax;
  if (iVar14 == *piVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->UserSceneTextureEvents).ArrayNum = iVar14 + 1;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  pFVar19 = pFVar5 + (longlong)iVar14 * 0x20;
  *(ulonglong *)pFVar19 = CONCAT44(local_100._4_4_,(undefined4)local_100);
  *(ulonglong *)(pFVar19 + 8) = CONCAT26(uStack_f2,CONCAT24(uStack_f4,uStack_f8));
  pFVar5 = pFVar5 + (longlong)iVar14 * 0x20 + 0x10;
  *(UMaterialInterface **)pFVar5 = local_f0;
  *(ulonglong *)(pFVar5 + 8) = CONCAT44(iStack_e4,iStack_e8);
  if ((int)uVar20 < 0x20) {
    local_180 = (FScriptContainerElement *)(longlong)pTVar16->ArrayNum;
    if (pTVar16->ArrayNum < 1) {
      local_188 = (FRDGTexture **)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FRDGTexture *)(*pcVar6)();
        return pFVar15;
      }
    }
    *local_118 = (*(uint *)((pTVar16->AllocatorInstance).Data + 0x14) >> (uVar20 & 0x1f) & 1) == 0;
    local_180 = (FScriptContainerElement *)(longlong)pTVar16->ArrayNum;
    if (pTVar16->ArrayNum < 1) {
      local_188 = (FRDGTexture **)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FRDGTexture *)(*pcVar6)();
        return pFVar15;
      }
    }
    pFVar19 = (pTVar16->AllocatorInstance).Data;
    *(uint *)(pFVar19 + 0x14) = *(uint *)(pFVar19 + 0x14) | 1 << (uVar20 & 0x1f);
  }
  else {
    *local_118 = true;
  }
  local_180 = (FScriptContainerElement *)(longlong)pTVar16->ArrayNum;
  if (pTVar16->ArrayNum < 1) {
    local_188 = (FRDGTexture **)0x0;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FRDGTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  return *(FRDGTexture **)(pTVar16->AllocatorInstance).Data;
}

// FindUserSceneTextureByEvent @ 1454ef780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FTransientUserSceneTexture * __thiscall
FMinimalSceneTextures::FindUserSceneTextureByEvent
          (FMinimalSceneTextures *this,FUserSceneTextureEventData *param_1)

{
  FTransientUserSceneTexture *pFVar1;
  int iVar2;
  TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *pTVar3;
  FTransientUserSceneTexture *pFVar4;
  undefined1 local_res8 [8];
  
  pTVar3 = TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->UserSceneTextures,param_1->Name);
  if (pTVar3 == (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_1454ef7e9:
    pFVar4 = (FTransientUserSceneTexture *)0x0;
  }
  else {
    iVar2 = pTVar3->ArrayNum;
    pFVar4 = (FTransientUserSceneTexture *)(pTVar3->AllocatorInstance).Data;
    pFVar1 = pFVar4 + iVar2;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTransientUserSceneTexture_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) goto LAB_1454ef7e9;
      if (pFVar4->AllocationOrder == param_1->AllocationOrder) break;
      pFVar4 = pFVar4 + 1;
    }
  }
  return pFVar4;
}

// GetSceneTextureShaderParameters @ 1454f8ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FSceneTextureShaderParameters * __thiscall
FMinimalSceneTextures::GetSceneTextureShaderParameters
          (FMinimalSceneTextures *this,FSceneTextureShaderParameters *__return_storage_ptr__,
          Type param_1)

{
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar1;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar2;
  EUniformBufferBindingFlags EVar3;
  FShaderParametersMetadata *pFVar4;
  undefined7 uStack_f;
  
  (__return_storage_ptr__->SceneTextures).field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->SceneTextures = 0;
  *(undefined8 *)&__return_storage_ptr__->MobileSceneTextures = 0;
  (__return_storage_ptr__->MobileSceneTextures).field_0x8 = 1;
  if (2 < (int)param_1) {
    pTVar1 = this->UniformBuffer;
    pFVar4 = FSceneTextureUniformParameters::GetStructMetadata();
    EVar3 = Static;
    if (pFVar4->BindingFlags != StaticAndShader) {
      EVar3 = pFVar4->BindingFlags;
    }
    *(TRDGUniformBuffer<FSceneTextureUniformParameters> **)&__return_storage_ptr__->SceneTextures =
         pTVar1;
    *(ulonglong *)&(__return_storage_ptr__->SceneTextures).field_0x8 = CONCAT71(uStack_f,EVar3);
    return __return_storage_ptr__;
  }
  pTVar2 = this->MobileUniformBuffer;
  pFVar4 = FMobileSceneTextureUniformParameters::GetStructMetadata();
  EVar3 = Static;
  if (pFVar4->BindingFlags != StaticAndShader) {
    EVar3 = pFVar4->BindingFlags;
  }
  *(TRDGUniformBuffer<FMobileSceneTextureUniformParameters> **)
   &__return_storage_ptr__->MobileSceneTextures = pTVar2;
  *(ulonglong *)&(__return_storage_ptr__->MobileSceneTextures).field_0x8 = CONCAT71(uStack_f,EVar3);
  return __return_storage_ptr__;
}

// GetUserSceneTexture @ 1454fa130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FMinimalSceneTextures::GetUserSceneTexture
          (FMinimalSceneTextures *this,FScreenPassTextureSlice *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,int param_3,FName param_4,
          UMaterialInterface *param_5)

{
  int *piVar1;
  TArray<FUserSceneTextureEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *pTVar11;
  FScreenPassTextureSlice *pFVar12;
  TIntRect<int> *pTVar13;
  FRDGTextureSRV *pFVar14;
  FRDGTextureSRVDesc local_c8;
  undefined4 local_b0;
  FNameEntryId FStack_ac;
  uint uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  UMaterialInterface *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  uint uStack_8c;
  uint uStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  UMaterialInterface *local_80;
  undefined8 uStack_78;
  TIntPoint<int>_u_0 local_70;
  TIntRect<int>_u_0 local_68;
  TIntRect<int> local_58;
  TIntRect<int> local_48;
  
  pTVar11 = TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->UserSceneTextures,param_4);
  FStack_ac = param_4.ComparisonIndex.Value;
  uStack_a8 = param_4.Number;
  if (pTVar11 == (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = &this->UserSceneTextureEvents;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    uStack_82 = (undefined2)param_3;
    local_80 = param_5;
    uStack_78 = 0;
    local_90 = 0;
    uStack_84 = 0;
    uStack_8c = FStack_ac.Value;
    uStack_88 = uStack_a8;
    if ((pFVar6 <= (FScriptContainerElement *)&local_90) &&
       ((FScriptContainerElement *)&local_90 <
        pFVar6 + (longlong)(this->UserSceneTextureEvents).ArrayMax * 0x20)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    iVar10 = (this->UserSceneTextureEvents).ArrayNum;
    piVar1 = &(this->UserSceneTextureEvents).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->UserSceneTextureEvents).ArrayNum = iVar10 + 1;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar10 * 0x20;
    *(ulonglong *)pFVar6 = CONCAT44(uStack_8c,local_90);
    *(ulonglong *)(pFVar6 + 8) = CONCAT26(uStack_82,CONCAT24(uStack_84,uStack_88));
    pFVar7 = pFVar7 + (longlong)iVar10 * 0x20 + 0x10;
    *(UMaterialInterface **)pFVar7 = local_80;
    *(undefined8 *)(pFVar7 + 8) = uStack_78;
    __return_storage_ptr__->TextureSRV = (FRDGTextureSRV *)0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    if (pTVar11->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    TVar4 = ((TIntPoint<int>_u_0 *)((pTVar11->AllocatorInstance).Data + 8))->_s_0;
    pTVar13 = FViewInfo::GetFamilyViewRect(param_2,&local_58);
    local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)param_2->_padding_;
    local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)param_2->_padding_;
    pTVar13 = GetDownscaledViewRect
                        (&local_48,(TIntRect<int> *)&local_68._s_0,
                         (TIntPoint<int>)(pTVar13->field0_0x0)._s_0.Max.field0_0x0._s_0,
                         (TIntPoint<int>)TVar4);
    if (pTVar11->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    local_c8.Texture = *(FRDGTexture **)(pTVar11->AllocatorInstance).Data;
    local_c8._padding_._0_2_ = 0;
    local_c8._padding_._3_1_ = 0;
    local_c8._padding_._4_4_ = 0;
    local_c8._padding_._0_1_ = 0;
    local_c8._padding_._2_1_ = 0;
    local_c8._padding_._2_1_ = ((local_c8.Texture)->Desc).field_0x30;
    cVar3 = ((local_c8.Texture)->Desc).field_0x32;
    if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
      local_c8._padding_._4_4_ = (uint)*(ushort *)&((local_c8.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_c8);
    TVar5 = (pTVar13->field0_0x0)._s_0.Min.field0_0x0;
    local_70 = (pTVar13->field0_0x0)._s_0.Max.field0_0x0;
    if ((pFVar14 != (FRDGTextureSRV *)0x0) &&
       (((cVar3 = (((pFVar14->Desc).Texture)->Desc).field_0x32, cVar3 == '\x01' || (cVar3 == '\x04')
         ) && (*(short *)((longlong)&(pFVar14->Desc)._padding_ + 6) == 0)))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureSRV->Desc.NumArraySlices > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0x87,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    if (pTVar11->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    pTVar2 = &this->UserSceneTextureEvents;
    local_b0 = 2;
    (pTVar11->AllocatorInstance).Data[0x12] = (FScriptContainerElement)0x1;
    if (pTVar11->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    uStack_a4 = *(undefined2 *)((pTVar11->AllocatorInstance).Data + 0x10);
    uStack_a2 = (undefined2)param_3;
    local_a0 = param_5;
    uStack_98 = 0;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 <
        pFVar6 + (longlong)(this->UserSceneTextureEvents).ArrayMax * 0x20)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FScreenPassTextureSlice *)(*pcVar8)();
        return pFVar12;
      }
    }
    iVar10 = (this->UserSceneTextureEvents).ArrayNum;
    piVar1 = &(this->UserSceneTextureEvents).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->UserSceneTextureEvents).ArrayNum = iVar10 + 1;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar10 * 0x20;
    *(ulonglong *)pFVar6 = CONCAT44(FStack_ac.Value,local_b0);
    *(ulonglong *)(pFVar6 + 8) = CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
    pFVar7 = pFVar7 + (longlong)iVar10 * 0x20 + 0x10;
    *(UMaterialInterface **)pFVar7 = local_a0;
    *(undefined8 *)(pFVar7 + 8) = uStack_98;
    __return_storage_ptr__->TextureSRV = pFVar14;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar5;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 = local_70;
  }
  return __return_storage_ptr__;
}

// GetUserSceneTextureDivisor @ 1454fa540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

TIntPoint<int> __thiscall
FMinimalSceneTextures::GetUserSceneTextureDivisor(FMinimalSceneTextures *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *pTVar3;
  TIntPoint<int> TVar4;
  FName in_R8;
  
  pTVar3 = TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->UserSceneTextures,in_R8);
  if (pTVar3 == (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0) {
    *(undefined4 *)param_1 = 1;
    *(undefined4 *)((longlong)param_1 + 4) = 1;
    return (TIntPoint<int>)param_1;
  }
  if (pTVar3->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar4.field0_0x0;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)((pTVar3->AllocatorInstance).Data + 8);
  return (TIntPoint<int>)param_1;
}

// InitializeViewFamily @ 1454fb4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FMinimalSceneTextures::InitializeViewFamily(FRDGBuilder *param_1,FViewFamilyInfo *param_2)

{
  char cVar1;
  FSceneTextures *pFVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  FSceneTexturesConfig *pFVar6;
  bool bVar7;
  longlong *plVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FRDGTexture *pFVar10;
  TRefCountPtr<IPooledRenderTarget> TVar11;
  FRDGTextureSRV *pFVar12;
  FRDGTextureMSAA *pFVar13;
  FCustomDepthTextures *pFVar14;
  ETextureCreateFlags EVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  undefined4 uVar18;
  FSceneTexturesConfig *pFVar19;
  longlong lVar20;
  TIntPoint<int> TVar21;
  ForElementType<EPixelFormat> FVar22;
  TIntPoint<int> TVar23;
  ETextureCreateFlags EVar24;
  ETextureCreateFlags EVar25;
  bool bVar26;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  FRDGTextureSRVDesc local_180;
  FRDGTextureSRVDesc local_168;
  undefined4 local_150;
  undefined4 uStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  FRHIResource *local_138;
  undefined1 local_130 [24];
  longlong local_118;
  longlong lStack_110;
  float local_108;
  int local_104;
  undefined4 local_100;
  TIntPoint<int>_u_0_s_0 local_fc;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  EPixelFormat local_ed;
  undefined2 local_ec;
  ForElementType<EPixelFormat> local_e8;
  undefined4 local_d8;
  int local_d4;
  undefined8 *local_d0;
  undefined1 *local_c8;
  FRDGTextureMSAA local_c0;
  FCustomDepthTextures local_b0;
  undefined1 local_98 [28];
  int local_7c;
  undefined4 local_78;
  longlong local_74;
  undefined4 local_6c;
  undefined1 local_68;
  byte local_67;
  undefined4 local_66;
  ForElementType<EPixelFormat> local_60;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  EVar24 = None;
  bVar26 = false;
  local_188 = 0;
  if (((FViewFamilyInfo *)param_2->SceneTextures->_padding_ != param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewFamily.SceneTextures->Owner == &ViewFamily",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                         ,0x1cb,
                         L"Scene Textures should only be initialized by their owning view family -- possible duplicate initialization"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->SceneTextures;
  if (((param_2->SceneTexturesConfig).ShadingPath == Num) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Config.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                         ,0x1d0,L"Attempted to create scene textures with an empty config."), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar20 = 2;
  plVar17 = &pFVar2->_padding_;
  pFVar6 = &param_2->SceneTexturesConfig;
  do {
    pFVar19 = pFVar6;
    plVar8 = plVar17;
    lVar4 = *(longlong *)&pFVar19->FeatureLevel;
    *plVar8 = *(longlong *)pFVar19;
    plVar8[1] = lVar4;
    lVar4 = *(longlong *)&pFVar19->SmallDepthDownsampleFactor;
    *(TIntPoint<int>_u_0 *)(plVar8 + 2) = (pFVar19->Extent).field0_0x0;
    plVar8[3] = lVar4;
    EVar25 = pFVar19->ColorCreateFlags;
    plVar8[4] = *(longlong *)&pFVar19->EditorPrimitiveNumSamples;
    plVar8[5] = EVar25;
    EVar25 = pFVar19->ExtraSceneColorCreateFlags;
    plVar8[6] = pFVar19->DepthCreateFlags;
    plVar8[7] = EVar25;
    lVar4 = *(longlong *)&pFVar19->ColorClearValue;
    plVar8[8] = pFVar19->ExtraSceneDepthCreateFlags;
    plVar8[9] = lVar4;
    lVar4 = *(longlong *)((longlong)&(pFVar19->ColorClearValue).Value + 0xc);
    plVar8[10] = *(longlong *)((longlong)&(pFVar19->ColorClearValue).Value + 4);
    plVar8[0xb] = lVar4;
    lVar4 = *(longlong *)((longlong)&(pFVar19->DepthClearValue).Value + 8);
    *(DSVAlue *)(plVar8 + 0xc) = (pFVar19->DepthClearValue).Value.DSValue;
    plVar8[0xd] = lVar4;
    lVar4 = *(longlong *)&pFVar19->GBufferParams[0].bHasVelocity;
    plVar8[0xe] = *(longlong *)pFVar19->GBufferParams;
    plVar8[0xf] = lVar4;
    lVar20 = lVar20 + -1;
    plVar17 = plVar8 + 0x10;
    pFVar6 = (FSceneTexturesConfig *)(pFVar19->GBufferParams + 1);
  } while (lVar20 != 0);
  lVar20 = *(longlong *)&pFVar19->GBufferParams[1].bHasVelocity;
  plVar8[0x10] = *(longlong *)(pFVar19->GBufferParams + 1);
  plVar8[0x11] = lVar20;
  EVar25 = pFVar19->GBufferBindings[0].GBufferA.Flags;
  plVar8[0x12] = *(longlong *)&pFVar19->GBufferBindings[0].GBufferA;
  plVar8[0x13] = EVar25;
  EVar25 = pFVar19->GBufferBindings[0].GBufferB.Flags;
  plVar8[0x14] = *(longlong *)&pFVar19->GBufferBindings[0].GBufferB;
  plVar8[0x15] = EVar25;
  EVar25 = pFVar19->GBufferBindings[0].GBufferC.Flags;
  plVar8[0x16] = *(longlong *)&pFVar19->GBufferBindings[0].GBufferC;
  plVar8[0x17] = EVar25;
  EVar25 = pFVar19->GBufferBindings[0].GBufferD.Flags;
  plVar8[0x18] = *(longlong *)&pFVar19->GBufferBindings[0].GBufferD;
  plVar8[0x19] = EVar25;
  EVar25 = pFVar19->GBufferBindings[0].GBufferE.Flags;
  plVar8[0x1a] = *(longlong *)&pFVar19->GBufferBindings[0].GBufferE;
  plVar8[0x1b] = EVar25;
  local_198._8_8_ = (ForElementType<EPixelFormat>)0x0;
  if ((param_2->SceneTexturesConfig).NumSamples == 1) {
LAB_1454fb62e:
    TVar21.field0_0x0._0_4_ = (param_2->SceneTexturesConfig).bSupportsXRTargetManagerDepthAlloc;
    TVar21.field0_0x0._s_0.Y = 0;
    TVar9 = FindStereoDepthTexture
                      ((uint)&local_138,TVar21,
                       (ETextureCreateFlags)(param_2->SceneTexturesConfig).Extent.field0_0x0,'\0');
    uVar5 = local_198._8_8_;
    if ((FRHITexture *)(local_198 + 8) != TVar9.Reference) {
      FVar22 = (ForElementType<EPixelFormat>)(TVar9.Reference)->_padding_;
      (TVar9.Reference)->_padding_ = 0;
      bVar26 = (ForElementType<EPixelFormat>)local_198._8_8_ != (ForElementType<EPixelFormat>)0x0;
      local_198._8_8_ = FVar22;
      if (bVar26) {
        FRHIResource::Release((FRHIResource *)uVar5);
      }
    }
    bVar26 = true;
    if ((ForElementType<EPixelFormat>)local_198._8_8_ == (ForElementType<EPixelFormat>)0x0)
    goto LAB_1454fb689;
    bVar7 = true;
LAB_1454fb695:
    if (local_138 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_138);
    }
    uVar5 = local_198._8_8_;
    if (!bVar7) goto LAB_1454fb76f;
    pFVar10 = FRDGBuilder::FindExternalTexture(param_1,(FRHITexture *)local_198._8_8_);
    if (pFVar10 == (FRDGTexture *)0x0) {
      TVar11 = CreateRenderTarget((FRHITexture *)local_130,(wchar_t *)uVar5);
      pFVar10 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar11.Reference,None);
      if ((longlong *)local_130._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_130._0_8_ + 0x38))();
      }
    }
    pFVar2->_padding_ = (longlong)pFVar10;
    pFVar2->_padding_ = (longlong)pFVar10;
    local_180.Texture = (FRDGTexture *)pFVar2->_padding_;
    local_180._padding_._1_1_ = 0;
    local_180._padding_._3_1_ = 0;
    local_180._padding_._4_4_ = 0;
    local_180._padding_._0_1_ = 0;
    local_180._padding_._2_1_ = 0;
    local_180._padding_._2_1_ = ((local_180.Texture)->Desc).field_0x30;
    cVar1 = ((local_180.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_180._padding_._4_4_ = (uint)*(ushort *)&((local_180.Texture)->Desc).field_0x2e << 0x10;
    }
    local_180._padding_._0_1_ = 0x2c;
    pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_180);
    pFVar2->_padding_ = (longlong)pFVar12;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar16 = IConsoleManager::Get();
      plVar17 = (longlong *)
                (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.Mobile.XRMSAAMode",1);
      EVar25 = EVar24;
      if (plVar17 != (longlong *)0x0) {
        EVar25 = (**(code **)(*plVar17 + 0x68))(plVar17);
      }
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_1454fbcc1:
        EVar15 = EVar24;
      }
      else {
        bVar7 = IsInGameThread();
        EVar15 = DepthStencilTargetable;
        if (bVar7) goto LAB_1454fbcc1;
      }
      Mode = *(int *)(EVar25 + EVar15);
      _Init_thread_footer(&::_TSS0);
    }
    if (Mode == 2) goto LAB_1454fb62e;
LAB_1454fb689:
    bVar7 = false;
    if (bVar26) goto LAB_1454fb695;
LAB_1454fb76f:
    local_74 = pFVar2->_padding_;
    local_98._8_8_ = *(undefined8 *)&(param_2->SceneTexturesConfig).DepthClearValue;
    local_98._16_8_ =
         *(longlong *)((longlong)&(param_2->SceneTexturesConfig).DepthClearValue.Value + 4);
    local_98._0_8_ = (param_2->SceneTexturesConfig).DepthCreateFlags;
    local_78 = 0;
    local_68 = 1;
    local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_50 = None;
    local_4c = RenderTargetable;
    uVar18 = (undefined4)((ulonglong)local_74 >> 0x20);
    if ((param_2->SceneTexturesConfig).bRequireMultiView == 0) {
      local_98._24_4_ = (param_2->SceneTexturesConfig).DepthClearValue.Value.Color[3];
      local_6c = 0x10001;
      local_66 = 0xff000b00;
      local_150 = (int)local_74;
      uStack_14c = uVar18;
    }
    else {
      local_98._24_4_ = (param_2->SceneTexturesConfig).DepthClearValue.Value.Color[3];
      local_6c._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers;
      local_6c._0_2_ = 1;
      local_66 = 0xff000b01;
      local_188 = (int)local_74;
      uStack_184 = uVar18;
    }
    local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_67 = (byte)(param_2->SceneTexturesConfig).NumSamples;
    local_198[0] = ',';
    if (((&local_60 <= (ForElementType<EPixelFormat> *)local_198) &&
        (local_198 < &local_60.field_0x1)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar26)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                           (0x101,&local_60,&local_4c);
    }
    FVar22 = (ForElementType<EPixelFormat>)&local_60;
    if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
      FVar22 = local_60.SecondaryData;
    }
    lVar20 = (longlong)(int)local_50;
    local_50 = local_50 + RenderTargetable;
    *(uchar *)(lVar20 + (longlong)FVar22) = local_198[0];
    pFVar10 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_98,L"SceneDepthZ",None);
    pFVar2->_padding_ = (longlong)pFVar10;
    pFVar2->_padding_ = (longlong)pFVar10;
    if (1 < local_67) {
      TVar23.field0_0x0._0_4_ = (param_2->SceneTexturesConfig).bSupportsXRTargetManagerDepthAlloc;
      TVar23.field0_0x0._s_0.Y = 0;
      local_67 = 1;
      TVar9 = FindStereoDepthTexture
                        ((int)local_130 + 8,TVar23,
                         (ETextureCreateFlags)(param_2->SceneTexturesConfig).Extent.field0_0x0,'\0')
      ;
      uVar5 = local_198._8_8_;
      if ((FRHITexture *)(local_198 + 8) != TVar9.Reference) {
        FVar22 = (ForElementType<EPixelFormat>)(TVar9.Reference)->_padding_;
        (TVar9.Reference)->_padding_ = 0;
        bVar26 = (ForElementType<EPixelFormat>)local_198._8_8_ != (ForElementType<EPixelFormat>)0x0;
        local_198._8_8_ = FVar22;
        if (bVar26) {
          FRHIResource::Release((FRHIResource *)uVar5);
        }
      }
      uVar5 = local_198._8_8_;
      if ((FRHIResource *)local_130._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_130._8_8_);
      }
      if ((ForElementType<EPixelFormat>)uVar5 == (ForElementType<EPixelFormat>)0x0) {
        if ((param_2->SceneTexturesConfig).bKeepDepthContent == 0) goto LAB_1454fba02;
        pFVar10 = FRDGBuilder::CreateTexture
                            (param_1,(FRDGTextureDesc *)local_98,L"SceneDepthZ",None);
      }
      else {
        lVar20 = (**(code **)(*(longlong *)local_198._8_8_ + 0x20))();
        if (local_6c._2_2_ != *(short *)(lVar20 + 0x2e)) {
          local_d0 = (undefined8 *)local_98;
          local_c8 = local_198 + 8;
          `FMinimalSceneTextures::InitializeViewFamily'::__l31::<lambda_1>::operator()(&local_d0);
        }
        pFVar10 = RegisterExternalTexture(param_1,(FRHITexture *)local_198._8_8_,L"SceneDepthZ");
      }
      pFVar2->_padding_ = (longlong)pFVar10;
    }
LAB_1454fba02:
    local_168.Texture = (FRDGTexture *)pFVar2->_padding_;
    local_168._padding_._1_1_ = 0;
    local_168._padding_._3_1_ = 0;
    local_168._padding_._4_4_ = 0;
    local_168._padding_._0_1_ = 0;
    local_168._padding_._2_1_ = 0;
    local_168._padding_._2_1_ = ((local_168.Texture)->Desc).field_0x30;
    cVar1 = ((local_168.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_168._padding_._4_4_ = (uint)*(ushort *)&((local_168.Texture)->Desc).field_0x2e << 0x10;
    }
    local_168._padding_._0_1_ = 0x2c;
    pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_168);
    pFVar2->_padding_ = (longlong)pFVar12;
    if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
  }
  if ((param_2->SceneTexturesConfig).ShadingPath == Mobile) {
    bVar26 = IsMobileColorsRGB();
    EVar25 = SRGB;
    if (bVar26) goto LAB_1454fba8e;
  }
  EVar25 = EVar24;
LAB_1454fba8e:
  local_fc = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
  local_130._16_8_ = (param_2->SceneTexturesConfig).ColorCreateFlags;
  local_ed = (param_2->SceneTexturesConfig).ColorFormat;
  bVar26 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
  if (bVar26) {
    local_f2 = 1;
    local_140 = local_fc.X;
    iStack_13c = local_fc.Y;
  }
  else {
    local_f2 = (undefined2)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers;
    local_148 = local_fc.X;
    iStack_144 = local_fc.Y;
  }
  local_104 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_ee = !bVar26;
  local_118 = *(longlong *)&(param_2->SceneTexturesConfig).ColorClearValue;
  lStack_110 = *(longlong *)((longlong)&(param_2->SceneTexturesConfig).ColorClearValue.Value + 4);
  EVar25 = EVar25 | GFastVRamConfig.SceneColor;
  local_ef = (undefined1)(param_2->SceneTexturesConfig).NumSamples;
  local_108 = (param_2->SceneTexturesConfig).ColorClearValue.Value.Color[3];
  local_e8.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_d4 = 1;
  local_ec = 0xff00;
  local_f4 = 1;
  local_f0 = 1;
  local_100 = 0;
  local_d8 = 0;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
            (1,1,0,1,&local_e8,0,&local_d4);
  pFVar13 = CreateTextureMSAA(&local_c0,param_1,(FRDGTextureDesc *)(local_130 + 0x10),
                              L"SceneColorMS",L"SceneColor",EVar25);
  pFVar10 = pFVar13->Resolve;
  pFVar2->_padding_ = (longlong)pFVar13->Target;
  pFVar2->_padding_ = (longlong)pFVar10;
  pFVar14 = FCustomDepthTextures::Create
                      (&local_b0,param_1,
                       (TIntPoint<int>)(param_2->SceneTexturesConfig).Extent.field0_0x0._s_0,
                       (param_2->SceneTexturesConfig).ShaderPlatform,
                       (param_2->SceneTexturesConfig).bRequireMultiView,
                       (ushort)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers);
  pFVar12 = pFVar14->Stencil;
  lVar20 = *(longlong *)&pFVar14->bSeparateStencilBuffer;
  pFVar2->_padding_ = (longlong)pFVar14->Depth;
  pFVar2->_padding_ = (longlong)pFVar12;
  *(undefined1 *)&pFVar2->_padding_ = 1;
  pFVar2->_padding_ = lVar20;
  if ((ForElementType<EPixelFormat>)local_198._8_8_ != (ForElementType<EPixelFormat>)0x0) {
    FRHIResource::Release((FRHIResource *)local_198._8_8_);
  }
  return;
}

// operator() @ 1504cfa50

bool __thiscall
`FMinimalSceneTextures::InitializeViewFamily'::__l31::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8203414688143244818>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x20))();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8203414688143244818>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

