// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149b61e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> *paVar1;
  longlong lVar2;
  longlong lVar3;
  atomic<int> aVar4;
  char cVar5;
  int iVar6;
  FPCGContext *pFVar7;
  longlong lVar8;
  longlong lVar9;
  IPooledRenderTarget *pIVar10;
  code *pcVar11;
  code *pcVar12;
  FRDGTexture *pFVar13;
  bool bVar14;
  uint uVar15;
  FRDGTexture *pFVar16;
  FRDGTextureSRV *pFVar17;
  FRDGTextureUAV *pFVar18;
  FRDGTextureUAV *pFVar19;
  undefined8 *puVar20;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar21;
  FName this_01;
  FRDGEventName *pFVar22;
  FShaderParametersMetadata *pFVar23;
  TRefCountPtr<IPooledRenderTarget> *pTVar24;
  FTSTicker *this_02;
  code **ppcVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  IPooledRenderTarget *pIVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_ae8 [32];
  FRDGTextureSRVDesc local_a98;
  int local_a80;
  int local_a7c;
  uint local_a78;
  uint local_a74;
  FLLMScope local_a70 [2];
  undefined8 *local_a68;
  int local_a60;
  undefined4 local_a58;
  undefined4 uStack_a54;
  int local_a50;
  int iStack_a4c;
  int local_a48;
  int iStack_a44;
  int local_a40;
  undefined4 uStack_a3c;
  int local_a38;
  int iStack_a34;
  TIntVector3<int>_u_0 local_a28;
  longlong local_a18;
  FRDGTexture *local_a10;
  FRDGTexture *local_a08;
  FMemScope local_a00;
  FName local_9f8;
  longlong local_9f0;
  FRDGEventName local_9e8;
  TWeakPtr<FPCGContextHandle,1> local_9d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_9b8;
  FSharedContext<FPCGGenerateLandscapeTexturesContext> local_9a8;
  FString local_998;
  TShaderRefBase<FPCGGrassMapUnpackerCS,FShaderMapPointerTable> local_988;
  TWeakPtr<FTSTicker::FElement,1> local_978;
  undefined1 local_968 [8];
  FRDGEventName local_960;
  undefined1 local_948 [64];
  void *local_908;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined1 local_8f8 [64];
  void *local_8b8;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined1 local_8a8 [64];
  void *local_868;
  undefined4 local_860;
  undefined4 local_85c;
  code *local_858 [2];
  code *local_848 [3];
  code **local_830;
  undefined1 local_828 [64];
  ForAnyElementType local_7e8;
  int local_7e0;
  int local_7dc [99];
  ForElementType<FRDGView_*> local_650;
  int local_648;
  int local_644 [327];
  FRDGUserValidation local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_ae8;
  FLLMScope::FLLMScope(local_a70,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_a00,&local_9f8,true);
  local_9d0.Object = *(FPCGContextHandle **)this;
  local_9d0.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_9d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_9d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGGenerateLandscapeTexturesContext>::
  FSharedContext<FPCGGenerateLandscapeTexturesContext>(&local_9a8,&local_9d0);
  if ((local_9a8.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     (pFVar7 = (local_9a8.SharedHandle.Object)->Context, pFVar7 != (FPCGContext *)0x0)) {
    local_9e8.EventFormat = L"";
    local_9e8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9e8.FormattedEventName.Data.ArrayNum = 0;
    local_9e8.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_828,param_1,&local_9e8,None,GMaxRHIShaderPlatform)
    ;
    local_8a8._8_8_ = 1;
    local_85c = 1;
    local_8a8._0_8_ = 9;
    local_8a8._36_8_ = *(undefined8 *)(pFVar7[1]._padding_ + 0x60);
    local_a58 = (undefined4)local_8a8._36_8_;
    uStack_a54 = SUB84(local_8a8._36_8_,4);
    local_8a8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_8a8._16_8_ = 0;
    local_8a8._24_4_ = 0;
    local_8a8._32_4_ = 0;
    local_8a8._44_4_ = 0x10001;
    local_8a8._48_4_ = 0x2000101;
    local_8a8._52_2_ = 0xff00;
    local_868 = (void *)0x0;
    local_860 = 0;
    pFVar16 = FRDGBuilder::CreateTexture
                        ((FRDGBuilder *)local_828,(FRDGTextureDesc *)local_8a8,
                         L"PCGLandscapeGrassMapRenderTarget",None);
    local_a98._padding_._0_2_ = 0;
    local_a98._padding_._3_1_ = 0;
    local_a98._padding_._2_1_ = (pFVar16->Desc).field_0x30;
    cVar5 = (pFVar16->Desc).field_0x32;
    local_a98._padding_._4_4_ = 0;
    local_a98._padding_._0_1_ = 0;
    local_a98._padding_._2_1_ = '\0';
    if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
      local_a98._padding_._4_4_ = (uint)*(ushort *)&(pFVar16->Desc).field_0x2e << 0x10;
    }
    local_a98.Texture = pFVar16;
    FRDGUserValidation::ValidateCreateSRV(&local_128,&local_a98);
    pFVar13 = local_a98.Texture;
    pFVar17 = FMemStackBase::Alloc((FMemStackBase *)(local_828 + 0x18),0x48,8);
    lVar8 = pFVar13->_padding_;
    *(byte *)&pFVar17->_padding_ = (byte)pFVar17->_padding_ & 0xfe;
    pFVar17->_padding_ = lVar8;
    pFVar17->_padding_ = 0;
    *(undefined1 *)&pFVar17->_padding_ = 1;
    *(undefined8 *)((longlong)&pFVar17->_padding_ + 4) = 0xffffffffffffffff;
    pFVar17->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
    *(undefined1 *)&(pFVar17->Desc)._padding_ = (undefined1)local_a98._padding_;
    *(undefined1 *)((longlong)&(pFVar17->Desc)._padding_ + 1) = local_a98._padding_._1_1_;
    *(undefined1 *)((longlong)&(pFVar17->Desc)._padding_ + 2) = local_a98._padding_._2_1_;
    *(undefined1 *)((longlong)&(pFVar17->Desc)._padding_ + 3) = local_a98._padding_._3_1_;
    *(undefined2 *)((longlong)&(pFVar17->Desc)._padding_ + 4) = local_a98._padding_._4_2_;
    *(undefined2 *)((longlong)&(pFVar17->Desc)._padding_ + 6) = local_a98._padding_._6_2_;
    *(undefined1 *)((longlong)&(pFVar17->Desc)._padding_ + 2) = 0;
    *(undefined1 *)&(pFVar17->Desc)._padding_ = (undefined1)local_a98._padding_;
    *(char *)((longlong)&(pFVar17->Desc)._padding_ + 2) = local_a98._padding_._2_1_;
    if (local_a98._padding_._2_1_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar17->Desc)._padding_ + 1) = local_a98._padding_._1_1_;
    }
    (pFVar17->Desc).Texture = local_a98.Texture;
    if (local_648 == local_644[0]) {
      local_648 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                            (0x808,&local_650,local_644);
    }
    local_650.Data[local_648] = (FRDGView *)pFVar17;
    *(int *)((longlong)&pFVar17->_padding_ + 4) = local_648;
    local_648 = local_648 + 1;
    FRDGUserValidation::ValidateCreateSRV(&local_128,pFVar17);
    FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread
              ((FLandscapeGrassWeightExporter_RenderThread *)pFVar7[1]._padding_,
               (FRDGBuilder *)local_828,pFVar16);
    dVar31 = __real_3ff0000000000000 / *(double *)((longlong)this + 0x10);
    iVar6 = *(int *)((longlong)this + 0x28);
    local_a60 = iVar6 + 1;
    local_a74 = pFVar7[1].OutputData.TaggedData.ArrayNum;
    dVar32 = *(double *)&pFVar7[1].bInputDataModified -
             (double)pFVar7[1].ExecutionSource.ObjectInstance.WeakPtr;
    dVar30 = (double)pFVar7[1].SourceComponent.WeakPtr -
             (double)pFVar7[1].OutputData.InactiveOutputPinBitmask;
    local_9f0 = (longlong)ROUND((dVar32 + dVar32) * dVar31 + __real_3fe0000000000000) >> 1;
    local_a18 = (longlong)ROUND((dVar30 + dVar30) * dVar31 + __real_3fe0000000000000) >> 1;
    iVar27 = (int)local_a18;
    local_a48 = iVar6 * iVar27 + 1;
    iStack_a44 = iVar6 * (int)local_9f0 + 1;
    local_a78 = 1;
    if (1 < local_a74) {
      local_a78 = local_a74;
    }
    local_a50 = local_a48;
    iStack_a4c = iStack_a44;
    if (*(char *)((longlong)this + 0x50) == '\0') {
      local_a50 = 1;
      iStack_a4c = 1;
    }
    local_8f8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_8f8._8_8_ = 1;
    local_8f8._40_4_ = iStack_a4c;
    local_8f8._36_4_ = local_a50;
    local_8f8._32_4_ = 0;
    local_8b8 = (void *)0x0;
    local_8b0 = 0;
    local_8ac = 1;
    local_8f8._0_8_ = 0x20008;
    local_8f8._16_8_ = 0;
    local_8f8._24_4_ = 0;
    local_8f8._44_4_ = 0x10001;
    local_8f8._48_4_ = 0xd000101;
    local_8f8._52_2_ = 0xff00;
    local_a80 = local_a48;
    local_a7c = iStack_a44;
    local_a10 = FRDGBuilder::CreateTexture
                          ((FRDGBuilder *)local_828,(FRDGTextureDesc *)local_8f8,
                           L"PCGLandscapeHeightMapUnpacked",None);
    pFVar18 = FRDGBuilder::CreateUAV((FRDGBuilder *)local_828,local_a10,None,PF_Unknown);
    local_948._8_8_ = 1;
    local_948._44_2_ = 1;
    local_948._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_948._32_4_ = 0;
    local_908 = (void *)0x0;
    local_900 = 0;
    local_8fc = 1;
    local_948._40_4_ = iStack_a44;
    local_948._36_4_ = local_a48;
    local_948._0_8_ = 0x20008;
    local_948._16_8_ = 0;
    local_948._24_4_ = 0;
    local_948._46_2_ = (undefined2)local_a78;
    local_948._48_4_ = 0x3010101;
    local_948._52_2_ = 0xff00;
    local_a08 = FRDGBuilder::CreateTexture
                          ((FRDGBuilder *)local_828,(FRDGTextureDesc *)local_948,
                           L"PCGLandscapeGrassMapUnpacked",None);
    pFVar19 = FRDGBuilder::CreateUAV((FRDGBuilder *)local_828,local_a08,None,PF_Unknown);
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)(local_828 + 0x18),0x460,0x10);
    if (puVar20 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      *puVar20 = &___7__TObject_VFParameters_FPCGGrassMapUnpackerCS___FRDGAllocator__6B_;
      puVar20[2] = 0;
      puVar20[3] = 0;
      puVar20[4] = 0;
    }
    local_a68 = puVar20;
    if (((local_7e8.Data <= (FScriptContainerElement *)&local_a68) &&
        ((FScriptContainerElement *)&local_a68 < local_7e8.Data + (longlong)local_7dc[0] * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (local_7e0 == local_7dc[0]) {
      local_7e0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_7e8,local_7dc);
    }
    lVar8 = local_a18;
    lVar26 = (longlong)local_7e0;
    local_7e0 = local_7e0 + 1;
    *(undefined8 **)(local_7e8.Data + lVar26 * 8) = local_a68;
    ((FParameters *)(puVar20 + 2))->InPackedGrassMaps = pFVar17;
    puVar20[4] = pFVar19;
    puVar20[3] = pFVar18;
    uStack_a3c = (undefined4)local_9f0;
    puVar20[0x86] = CONCAT44(uStack_a3c,iVar27);
    dVar30 = *(double *)((longlong)this + 0x38);
    dVar31 = *(double *)((longlong)this + 0x40);
    local_a38 = local_a80;
    iStack_a34 = local_a7c;
    *(float *)(puVar20 + 0x88) = (float)*(double *)((longlong)this + 0x30);
    *(float *)((longlong)puVar20 + 0x444) = (float)dVar30;
    *(float *)(puVar20 + 0x89) = (float)dVar31;
    dVar30 = *(double *)((longlong)this + 0x48);
    *(int *)(puVar20 + 0x87) = local_a60;
    puVar20[0x8a] = CONCAT44(local_a7c,local_a80);
    *(float *)((longlong)puVar20 + 0x44c) = (float)dVar30;
    *(uint *)(puVar20 + 0x8b) = (uint)(*(char *)((longlong)this + 0x50) != '\0');
    *(int *)((longlong)puVar20 + 0x43c) =
         (int)(local_a74 + 5 + ((int)(local_a74 + 5) >> 0x1f & 3U)) >> 2;
    *(undefined4 *)(puVar20 + 6) = 0xffffffff;
    *(undefined4 *)(puVar20 + 8) = 0xffffffff;
    *(undefined4 *)(puVar20 + 10) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0xe) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x12) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x16) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x1a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x20) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x22) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x26) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x28) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x2a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x2e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x30) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x32) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x36) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x38) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x3e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x40) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x42) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x46) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x4a) = 0xffffffff;
    uVar28 = 0;
    *(undefined4 *)(puVar20 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x4e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x50) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x52) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x54) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x58) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x5a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x5c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x5e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x60) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x62) = 0xffffffff;
    *(undefined4 *)(puVar20 + 100) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x66) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x68) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x6a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x6c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x6e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x70) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x74) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x76) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x78) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x7a) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x7c) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x7e) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x82) = 0xffffffff;
    *(undefined4 *)(puVar20 + 0x84) = 0xffffffff;
    local_a40 = iVar27;
    if (0 < *(int *)((longlong)this + 0x20)) {
      lVar26 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar28 < *(int *)((longlong)this + 0x20)) {
          uVar15 = ~uVar28 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar9 = *(longlong *)((longlong)this + 0x18);
        uVar15 = 0;
        if ((int)uVar28 < *(int *)((longlong)this + 0x20)) {
          uVar15 = ~uVar28 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar3 = lVar26 * 8;
        lVar2 = lVar26 * 8;
        lVar26 = lVar26 + 1;
        *(uint *)(puVar20 +
                 (ulonglong)
                 (uint)((int)lVar8 * *(int *)(lVar9 + 4 + lVar3) +
                       *(int *)(*(longlong *)((longlong)this + 0x18) + lVar2)) * 2 + 6) = uVar28;
        uVar28 = uVar28 + 1;
      } while ((int)uVar28 < *(int *)((longlong)this + 0x20));
    }
    iVar27 = local_a7c;
    iVar6 = local_a80;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar21 = (FShaderType *)FPCGGrassMapUnpackerCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_9b8,pFVar21,0);
    if (local_9b8.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_968);
      ::FName::ToString((FName *)this_01,&local_998);
      FPCGGrassMapUnpackerCS::GetStaticType();
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    FPCGGrassMapUnpackerCS::GetStaticType();
    local_988.ShaderContent = (FPCGGrassMapUnpackerCS *)local_9b8.ShaderContent;
    local_988.ShaderMap = local_9b8.ShaderMap;
    pFVar22 = FRDGEventName::FRDGEventName(&local_960,1,L"PCGUnpackGrassMap");
    pFVar23 = FPCGGrassMapUnpackerCS::FParameters::FTypeInfo::GetStructMetadata();
    local_a28._s_0.X = (int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3;
    local_a28._s_0.Y = (int)(iVar27 + 7 + (iVar27 + 7 >> 0x1f & 7U)) >> 3;
    local_a28._s_0.Z = local_a78;
    FComputeShaderUtils::AddPass<FPCGGrassMapUnpackerCS>
              ((FRDGBuilder *)local_828,pFVar22,Compute,&local_988,pFVar23,
               (FParameters *)(puVar20 + 2),(TIntVector3<int> *)&local_a28._s_0);
    if (local_960.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_960.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar16 = local_a10;
    pIVar29 = (IPooledRenderTarget *)0x0;
    if (*(char *)((longlong)this + 0x50) != '\0') {
      pTVar24 = FRDGBuilder::ConvertToExternalTexture((FRDGBuilder *)local_828,local_a10);
      pIVar10 = pTVar24->Reference;
      if (pIVar10 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar10->_padding_ + 0x30))();
        pIVar29 = pIVar10;
      }
      FRDGUserValidation::ValidateSetAccessFinal
                (&local_128,(FRDGViewableResource *)pFVar16,SRVCompute);
      *(undefined4 *)&pFVar16->_padding_ = 0x10;
    }
    pFVar16 = local_a08;
    pTVar24 = FRDGBuilder::ConvertToExternalTexture((FRDGBuilder *)local_828,local_a08);
    pIVar10 = pTVar24->Reference;
    if (pIVar10 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar10->_padding_ + 0x30))(pIVar10);
    }
    FRDGUserValidation::ValidateSetAccessFinal
              (&local_128,(FRDGViewableResource *)pFVar16,SRVCompute);
    *(undefined4 *)&pFVar16->_padding_ = 0x10;
    FRDGBuilder::Execute((FRDGBuilder *)local_828);
    pcVar12 = *(code **)((longlong)this + 8);
    pcVar11 = *(code **)this;
    if (pcVar12 != (code *)0x0) {
      LOCK();
      *(int *)(pcVar12 + 0xc) = *(int *)(pcVar12 + 0xc) + 1;
      UNLOCK();
    }
    if (pIVar29 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar29->_padding_ + 0x30))(pIVar29);
    }
    if (pIVar10 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar10->_padding_ + 0x30))(pIVar10);
    }
    this_02 = FTSTicker::GetCoreTicker();
    local_858[0] = (code *)0x0;
    local_830 = FMemory::Malloc(0x28,8);
    local_830[1] = pcVar11;
    local_830[2] = pcVar12;
    *local_830 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`200'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                          ::_vftable_;
    local_830[3] = (code *)pIVar29;
    local_830[4] = (code *)pIVar10;
    if (local_830 != (code **)&DAT_fffffffffffffff8) {
      local_858[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`ExecuteOnGameThread<``FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                     ::Call;
    }
    FTSTicker::AddTicker
              (this_02,&local_978,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp(664)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_858);
    if (local_978.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_978.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_978.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_978.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_858[0] != (code *)0x0) {
      ppcVar25 = local_858 + 2;
      if (local_830 != (code **)0x0) {
        ppcVar25 = local_830;
      }
      (**(code **)(*ppcVar25 + 0x10))();
    }
    if (pIVar10 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar10->_padding_ + 0x38))(pIVar10);
    }
    if (pIVar29 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar29->_padding_ + 0x38))(pIVar29);
    }
    if (local_908 != (void *)0x0) {
      FMemory::Free(local_908);
    }
    if (local_8b8 != (void *)0x0) {
      FMemory::Free(local_8b8);
    }
    if (local_868 != (void *)0x0) {
      FMemory::Free(local_868);
    }
    FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.SharedHandle.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_a00);
  FLLMScope::~FLLMScope(local_a70);
  return;
}

// CanExecuteOnlyOnMainThread @ 149b67c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGenerateLandscapeTexturesElement::CanExecuteOnlyOnMainThread
          (FPCGGenerateLandscapeTexturesElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateContext @ 149b69dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGGenerateLandscapeTexturesElement::CreateContext(FPCGGenerateLandscapeTexturesElement *this)

{
  int *this_00;
  FPCGContext *this_01;
  undefined8 local_res10 [3];
  
  this_01 = ::operator_new(0x390);
  if (this_01 != (FPCGContext *)0x0) {
    memset(this_01,0,0x390);
    FPCGContext::FPCGContext(this_01);
    this_01->_padding_ = (longlong)&___7FPCGGenerateLandscapeTexturesContext__6B_;
    this_00 = &this_01[1].OutputData.TaggedData.ArrayMax;
    this_01[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[1].InputData.TaggedData.ArrayNum = 0;
    this_01[1].InputData.TaggedData.ArrayMax = 0;
    this_01[1].InputData.bCancelExecutionOnEmpty = false;
    this_01[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_01[1].InputData.field_0x12 = 0;
    this_01[1]._padding_ = 0;
    this_01[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[1].InputData.DataCrcs.ArrayNum = 0;
    this_01[1].InputData.DataCrcs.ArrayMax = 0;
    this_01[1].InputData.InactiveOutputPinBitmask = 0;
    this_01[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[1].OutputData.TaggedData.ArrayNum = 0;
    *(undefined8 *)this_00 = 0;
    local_res10[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)local_res10);
    this_01[1].OutputData.DataCrcs.ArrayNum = 0;
    this_01[1].OutputData.DataCrcs.ArrayMax = 0;
    this_01[1].OutputData.InactiveOutputPinBitmask = 0;
    this_01[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_01[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_01[1].bInputDataModified = 0;
    this_01[1].AsyncState.EndTime = 0.0;
    *(undefined1 *)&this_01[1].AsyncState.NumAvailableTasks = 0;
    *(undefined4 *)((longlong)&this_01[1].AsyncState.NumAvailableTasks + 1) = 0;
    *(undefined2 *)((longlong)&this_01[1].AsyncState.AsyncCurrentReadIndex + 1) = 0;
    *(undefined1 *)((longlong)&this_01[1].AsyncState.AsyncCurrentReadIndex + 3) = 0;
    *(undefined2 *)&this_01[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data = 0;
    *(undefined2 *)&this_01[1].AsyncState.CurrentChunkToCollapse = 0;
    *(undefined1 *)&this_01[1].TaskId = 0;
    *(undefined8 *)&this_01[1].AsyncState.AsyncCurrentWriteIndex = 0;
    this_01[1].AsyncState.TasksChunksStartEnd.ArrayNum = 0;
    this_01[1].AsyncState.TasksChunksStartEnd.ArrayMax = 0;
    this_01[1].AsyncState.bStarted = false;
    *(undefined3 *)&this_01[1].AsyncState.field_0x29 = 0;
    this_01[1].AsyncState.InitialNumIterations = 0;
    *(undefined8 *)&this_01[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
    return this_01;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149b83430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGGenerateLandscapeTexturesElement::ExecuteInternal
          (FPCGGenerateLandscapeTexturesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int *piVar3;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  int iVar6;
  atomic<int> aVar7;
  int iVar8;
  FWeakObjectPtr FVar9;
  IPCGGraphExecutionSource *pIVar10;
  code *pcVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  UPCGNode *this_00;
  FWeakObjectPtr *pFVar15;
  TObjectPtr<ULandscapeGrassType>_u_0 TVar16;
  UStreamableRenderAsset *this_01;
  FCommandList *pFVar17;
  UPCGData *pUVar18;
  code *pcVar19;
  FWeakObjectPtr FVar20;
  undefined1 auVar21 [16];
  FWeakObjectPtr FVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  code *pcVar28;
  code *pcVar29;
  double dVar30;
  TConsoleVariableData<bool> *pTVar31;
  undefined8 uVar32;
  undefined8 this_02;
  FPCGCrc FVar33;
  int iVar38;
  bool bVar36;
  int iVar39;
  bool bVar34;
  undefined1 uVar35;
  bool bVar37;
  UClass *pUVar40;
  UPCGSettings *pUVar41;
  UPCGGenerateLandscapeTexturesSettings *pUVar42;
  FText *pFVar43;
  longlong *plVar44;
  longlong lVar45;
  UWorld *this_03;
  UObject *pUVar46;
  UObject *pUVar47;
  TBox<double> *pTVar48;
  UMaterialInterface *pUVar49;
  UMaterialInterface *pUVar50;
  FString *pFVar51;
  FText *pFVar52;
  FText *pFVar53;
  FText *pFVar54;
  FTextFormat *pFVar55;
  ULandscapeComponent *pUVar56;
  UTexture2D *pUVar57;
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar58;
  FPCGModule *pFVar59;
  TWeakPtr<FPCGContextHandle,1> *pTVar60;
  ALandscapeProxy *pAVar61;
  FLandscapeGrassWeightExporter *this_04;
  FLandscapeGrassWeightExporter *pFVar62;
  FRenderCommandList *this_05;
  FRenderCommandTag *pFVar63;
  UPCGTextureData *pUVar64;
  code **ppcVar65;
  ulonglong uVar66;
  byte bVar67;
  uint uVar68;
  FObjectPtr_u_0 *pFVar69;
  ForAnyElementType FVar70;
  longlong *plVar71;
  FWeakObjectPtr *pFVar72;
  FPCGDataPtrWrapper *pFVar73;
  undefined8 *puVar74;
  FScriptContainerElement *pFVar75;
  FScriptContainerElement *pFVar76;
  longlong lVar77;
  FObjectPtr_u_0 FVar78;
  uint uVar79;
  FPCGTaggedData *pFVar80;
  undefined8 *puVar81;
  IPCGGraphExecutionSource *pIVar82;
  ulonglong uVar83;
  FPCGContext *pFVar84;
  FObjectPtr_u_0 *pFVar85;
  FPCGCrc FVar86;
  ulonglong uVar87;
  bool bVar88;
  double dVar89;
  undefined4 uVar90;
  uint uVar91;
  undefined4 uVar92;
  uint uVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined1 auStackY_8c8 [32];
  bool local_870;
  <lambda_1> local_86f [7];
  UPCGGenerateLandscapeTexturesSettings *local_868;
  undefined1 local_860;
  undefined1 local_85f;
  undefined1 local_85e;
  undefined1 local_85d;
  undefined1 local_85c;
  undefined1 local_85b;
  undefined1 local_85a;
  undefined1 local_859;
  undefined1 local_858;
  undefined1 local_857 [7];
  FPCGContext *local_850;
  ForAnyElementType local_848;
  undefined8 local_840;
  UObject *local_838;
  ForAnyElementType local_830;
  undefined8 local_828;
  ForAnyElementType local_820;
  undefined8 local_818;
  TArray<FString,TSizedDefaultAllocator<32>_> local_810;
  uint local_800 [2];
  IPCGGraphExecutionSource *local_7f8;
  uint local_7f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_7e8;
  FWeakObjectPtr local_7d8;
  undefined8 *local_7d0;
  UObject *local_7c8;
  FObjectPtr_u_0 local_7c0;
  UObject *local_7b8;
  int local_7b0;
  int iStack_7ac;
  UPCGTextureData *local_7a8;
  UTexture2D *local_7a0;
  undefined1 local_798 [16];
  longlong local_788;
  undefined1 local_780 [16];
  int local_770;
  int local_76c;
  uint local_768;
  FColor_u_0 local_764;
  FObjectPtr_u_0 local_760;
  FPCGCrc local_758;
  FPCGCrc local_750;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_748;
  TVector<double>_u_0 local_738;
  FWeakObjectPtr FStack_720;
  undefined1 local_718 [16];
  undefined1 local_708;
  undefined7 uStack_707;
  FWeakObjectPtr local_700;
  FString local_6f8;
  FString local_6e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6d8;
  TWeakPtr<FPCGContextHandle,1> local_6c8;
  FString local_6b8;
  FName local_6a8;
  FWeakObjectPtr local_6a0;
  FWeakObjectPtr local_698;
  FName local_690;
  UPCGTextureData *local_688;
  FScriptContainerElement *local_680;
  longlong *local_678;
  FName local_670;
  FName local_668;
  undefined1 local_660 [8];
  UObject *local_658;
  ULandscapeComponent *local_650;
  FName local_648;
  TObjectPtr<ULandscapeGrassType>_u_0 local_640;
  FString local_638;
  FName local_628 [2];
  FPCGAttributePropertySelector local_618;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FScriptContainerElement *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  FTextFormat local_598;
  FText local_588;
  FScriptContainerElement *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  TPersistentObjectPtr<FSoftObjectPath> local_568;
  FText local_540;
  FString local_530;
  FString local_520;
  FText local_510;
  FText local_500;
  TWeakPtr<FPCGContextHandle,1> local_4f0;
  TArrayView<ULandscapeComponent_*_const,int> local_4d8;
  FText local_4c8;
  FText local_4b8;
  TWeakPtr<FPCGContextHandle,1> local_4a8;
  FString local_498;
  FString local_488;
  FText local_478;
  FString local_468;
  FString local_458;
  FText local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FText local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  code *local_3e8;
  FText local_3e0;
  code *local_3c8 [2];
  undefined **local_3b8;
  FPCGContextHandle *local_3b0;
  TReferenceControllerBase<1> *local_3a8;
  undefined8 local_3a0;
  code *local_398 [2];
  undefined **local_388;
  FPCGContextHandle *local_380;
  TReferenceControllerBase<1> *local_378;
  undefined8 local_370;
  TArrayView<FString,int> local_368;
  FText local_358;
  undefined1 local_348 [48];
  int local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  FPCGCrc local_2b8;
  undefined8 uStack_2b0;
  FText local_2a8;
  FText local_298;
  FTextFormat local_288;
  FTextFormat local_278;
  FText local_268;
  FScopedCapture local_258;
  TBox<double> local_220;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  undefined1 local_1b8 [40];
  code **local_190;
  byte local_188;
  FFormatArgumentValue local_178;
  undefined4 local_158;
  longlong local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong *local_128;
  undefined4 local_120;
  FSyncScope local_118;
  TBox<double> local_100;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  bVar36 = false;
  bVar88 = -1 < CpuChannel->Enabled;
  local_850 = param_1;
  if (bVar88) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId197,"FPCGGenerateLandscapeTexturesElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
               ,0xc5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                          ,200,L""), bVar34)) {
    pcVar19 = (code *)swi(3);
    uVar35 = (*pcVar19)();
    return (bool)uVar35;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar41 = UPCGNode::GetSettings(this_00), pUVar41 == (UPCGSettings *)0x0)) {
      pFVar80 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenerateLandscapeTexturesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_86f[0]);
      if (pFVar80 != (FPCGTaggedData *)0x0) {
        local_868 = Cast<UPCGGenerateLandscapeTexturesSettings_const_>(&pFVar80->Data);
        goto LAB_149b83589;
      }
    }
    else {
      pUVar41 = UPCGNode::GetSettings(this_00);
      pUVar42 = (UPCGGenerateLandscapeTexturesSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar41);
      if (pUVar42 != (UPCGGenerateLandscapeTexturesSettings *)0x0) {
        local_868 = pUVar42;
        pUVar40 = UPCGGenerateLandscapeTexturesSettings::StaticClass();
        iVar38 = (int)pUVar40->_padding_;
        if ((iVar38 <= *(int *)(pUVar42->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar42->_padding_ + 0x30) + (longlong)iVar38 * 8) ==
            &pUVar40->_padding_)) goto LAB_149b83589;
      }
    }
    local_868 = (UPCGGenerateLandscapeTexturesSettings *)0x0;
  }
  else {
    pUVar40 = UPCGGenerateLandscapeTexturesSettings::StaticClass();
    bVar34 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar40);
    if (bVar34) {
      local_868 = (UPCGGenerateLandscapeTexturesSettings *)
                  (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_868 = (UPCGGenerateLandscapeTexturesSettings *)0x0;
    }
  }
LAB_149b83589:
  if ((local_868 == (UPCGGenerateLandscapeTexturesSettings *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                          ,0xcb,L""), bVar34)) {
    pcVar19 = (code *)swi(3);
    uVar35 = (*pcVar19)();
    return (bool)uVar35;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
      (bVar34 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar34)) &&
     (pIVar82 = (param_1->ExecutionSource).InterfaceInstance,
     pIVar82 != (IPCGGraphExecutionSource *)0x0)) {
    if (*(char *)&param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data == '\0') {
      iVar38 = (param_1->InputData).TaggedData.ArrayNum;
      pFVar69 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
      local_7c0.Handle = (UObject *)0x0;
      pFVar85 = pFVar69 + (longlong)iVar38 * 0xf;
      FVar78.Handle = (UObject *)0x0;
      local_7f8 = pIVar82;
      while( true ) {
        if ((param_1->InputData).TaggedData.ArrayNum != iVar38) {
          local_860 = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_860);
        }
        if (pFVar69 == pFVar85) break;
        local_760 = (FObjectPtr_u_0)pFVar69->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b836a8:
          if (local_760.Handle == (UObject *)0x0) goto LAB_149b8374c;
          pUVar40 = Z_Construct_UClass_UPCGLandscapeData_NoRegister();
          bVar34 = FObjectPtr::IsA((FObjectPtr *)&local_760,pUVar40);
          if ((!bVar34) || (local_760.Handle == (UObject *)0x0)) goto LAB_149b8374c;
          if (FVar78.Handle != (UObject *)0x0) {
            pFVar43 = FText::AsLocalizable_Advanced_LocText
                                (&local_3e0,L"PCGGenerateLanscapeTexturesElement",
                                 L"MultipleLandscapesNotSpported",
                                 L"Multiple landscape data inputs not currently supported, only first will be used."
                                );
            PCGLog::LogWarningOnGraph(pFVar43,param_1);
            if (local_3e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3e0.TextData.Reference + 0x10))();
            }
            goto LAB_149b8374c;
          }
          pFVar69 = pFVar69 + 0xf;
          FVar78 = local_760;
          local_7c0.Handle = local_760.Handle;
        }
        else {
          if (local_760.Handle != (UObject *)0x0) {
            UE::GC::MarkAsReachable(local_760.Handle);
            goto LAB_149b836a8;
          }
LAB_149b8374c:
          pFVar69 = pFVar69 + 0xf;
        }
      }
      if (local_7c0.Handle != (UObject *)0x0) {
        bVar34 = UE::Landscape::IsRuntimeGrassMapGenerationSupported();
        if (bVar34) {
LAB_149b837d0:
          pUVar42 = local_868;
          local_810.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_810.ArrayNum = 0;
          local_810.ArrayMax = 0;
          if (local_868->bOverrideFromInput == false) {
            TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                      (&local_810,&local_868->SelectedGrassTypes);
          }
          else {
            FPCGDataCollection::GetInputsByPin
                      (&param_1->InputData,&local_748,
                       &PCGGenerateLandscapeTextures::GrassTypeOverridesPinLabel);
            iVar38 = local_748.ArrayNum;
            pFVar84 = local_850;
            local_7e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar80 = (FPCGTaggedData *)
                      (local_748.AllocatorInstance.Data + (longlong)local_748.ArrayNum * 0x78);
            local_7e8.ArrayNum = 0;
            local_7e8.ArrayMax = 0;
            FVar70.Data = local_748.AllocatorInstance.Data;
            while( true ) {
              if (local_748.ArrayNum != iVar38) {
                local_85f = 0;
                `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_85f);
              }
              if ((FPCGTaggedData *)FVar70.Data == pFVar80) break;
              pUVar18 = (((FPCGTaggedData *)FVar70.Data)->Data).Data.field0_0x0.DebugPtr;
              if (pUVar18 != (UPCGData *)0x0) {
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          (&pUVar42->GrassTypesAttribute,
                           (FPCGAttributePropertyInputSelector *)local_348,pUVar18);
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)local_348,
                           (FPCGAttributePropertyInputSelector *)&local_618,pUVar18);
                PCGAttributeAccessorHelpers::CreateConstAccessor
                          ((UPCGData *)local_780,(FPCGAttributePropertySelector *)pUVar18,
                           SUB81(&local_618,0));
                PCGAttributeAccessorHelpers::CreateConstKeys
                          ((UPCGData *)local_798,(FPCGAttributePropertySelector *)pUVar18);
                this_02 = local_780._0_8_;
                uVar32 = local_798._0_8_;
                if (((IPCGAttributeAccessor *)local_780._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                   ((IPCGAttributeAccessorKeys *)local_798._0_8_ == (IPCGAttributeAccessorKeys *)0x0
                   )) {
                  PCGLog::Metadata::LogFailToCreateAccessorError(&local_618,pFVar84);
                  if ((IPCGAttributeAccessorKeys *)local_798._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_798._0_8_)(local_798._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_780._0_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_780._0_8_)(local_780._0_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_618.ExtraNames.AllocatorInstance.Data,
                             local_618.ExtraNames.ArrayNum);
                  if (local_618.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_618.ExtraNames.AllocatorInstance.Data);
                  }
LAB_149b83927:
                  pFVar43 = FText::AsLocalizable_Advanced_LocText
                                      (&local_358,L"PCGGenerateLanscapeTexturesElement",
                                       L"FailExtractGrassTypeOverrides",
                                       L"Failed to extract grass type overrides.");
                  PCGLog::LogWarningOnGraph(pFVar43,pFVar84);
                  if (local_358.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
                  }
                }
                else {
                  iVar39 = (**(code **)(*(longlong *)local_798._0_8_ + 0x10))(local_798._0_8_);
                  if (iVar39 < 1) {
                    bVar34 = true;
                  }
                  else {
                    iVar39 = (**(code **)(*(longlong *)uVar32 + 0x10))(uVar32);
                    TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_7e8,iVar39,Default);
                    iVar39 = local_7e8.ArrayNum;
                    local_578 = local_7e8.AllocatorInstance.Data;
                    if ((local_7e8.ArrayNum < 0) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar34)) {
                      pcVar19 = (code *)swi(3);
                      uVar35 = (*pcVar19)();
                      return (bool)uVar35;
                    }
                    iStack_570 = iVar39;
                    local_368._12_4_ = uStack_56c;
                    local_368.ArrayNum = iVar39;
                    local_368.DataPtr = (FString *)local_578;
                    bVar34 = IPCGAttributeAccessor::GetRange<FString>
                                       ((IPCGAttributeAccessor *)this_02,&local_368,0,
                                        (IPCGAttributeAccessorKeys *)uVar32,
                                        AllowBroadcastAndConstructible);
                    if (!bVar34) {
                      PCGLog::Metadata::LogFailToGetAttributeError(&local_618,pFVar84);
                    }
                  }
                  if ((IPCGAttributeAccessorKeys *)local_798._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_798._0_8_)(local_798._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_780._0_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_780._0_8_)(local_780._0_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_618.ExtraNames.AllocatorInstance.Data,
                             local_618.ExtraNames.ArrayNum);
                  if (local_618.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_618.ExtraNames.AllocatorInstance.Data);
                  }
                  if (bVar34 == false) goto LAB_149b83927;
                  DestructItems<FString,int>
                            ((FString *)local_810.AllocatorInstance.Data,local_810.ArrayNum);
                  if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_810.AllocatorInstance.Data);
                  }
                  local_810.AllocatorInstance.Data = local_7e8.AllocatorInstance.Data;
                  local_810.ArrayNum = local_7e8.ArrayNum;
                  local_810.ArrayMax = local_7e8.ArrayMax;
                  local_7e8.ArrayNum = 0;
                  local_7e8.ArrayMax = 0;
                  local_7e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                }
                DestructItems<FString,int>((FString *)local_348._40_8_,local_318);
                pUVar42 = local_868;
                if ((FString *)local_348._40_8_ != (FString *)0x0) {
                  FMemory::Free((void *)local_348._40_8_);
                  pUVar42 = local_868;
                }
              }
              FVar70.Data = FVar70.Data + 0x78;
            }
            DestructItems<FString,int>
                      ((FString *)local_7e8.AllocatorInstance.Data,local_7e8.ArrayNum);
            if (local_7e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7e8.AllocatorInstance.Data);
            }
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_748.AllocatorInstance.Data,local_748.ArrayNum);
            pIVar82 = local_7f8;
            param_1 = local_850;
            if ((FPCGTaggedData *)local_748.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
              FMemory::Free(local_748.AllocatorInstance.Data);
              pIVar82 = local_7f8;
              param_1 = local_850;
            }
          }
          plVar44 = (longlong *)(**(code **)((longlong)*pIVar82 + 0x18))(pIVar82);
          (**(code **)(*plVar44 + 0x40))(plVar44,&local_100);
          dVar95 = __real_3f1a36e2e0000000;
          uVar79 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar68 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          dVar30 = __real_3e45798ee2308c3a;
          local_830.Data = (FScriptContainerElement *)0x0;
          local_828 = 0;
          local_7f0 = *(uint *)&local_7c0.Handle[10].field_0x20;
          uVar66 = (ulonglong)(int)local_7f0;
          FVar86 = *(FPCGCrc *)&local_7c0.Handle[10].field_0x18;
          local_758 = (FPCGCrc)((longlong)FVar86 + uVar66 * 0x28);
          while( true ) {
            FVar33 = local_758;
            local_750 = FVar86;
            if (*(int *)&local_7c0.Handle[10].field_0x20 != (int)uVar66) {
              local_85e = 0;
              `TCheckedPointerIterator<TSoftObjectPtr<ALandscapeProxy>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_85e);
            }
            if (FVar86 == FVar33) break;
            local_568.WeakPtr = *(FWeakObjectPtr *)FVar86;
            FSoftObjectPath::FSoftObjectPath
                      (&local_568.ObjectID,(FSoftObjectPath *)((longlong)FVar86 + 8));
            pUVar46 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_568);
            local_838 = pUVar46;
            if (pUVar46 == (UObject *)0x0) {
LAB_149b843d7:
              if (local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data ==
                  (FScriptContainerElement *)0x0) goto LAB_149b843c3;
              FMemory::Free(local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data);
              uVar66 = (ulonglong)local_7f0;
              FVar86 = (FPCGCrc)((longlong)FVar86 + 0x28);
            }
            else {
              pUVar40 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
              iVar38 = (int)pUVar40->_padding_;
              if (((*(int *)(*(longlong *)&pUVar46->field_0x10 + 0x38) < iVar38) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar46->field_0x10 + 0x30) + (longlong)iVar38 * 8)
                   != &pUVar40->_padding_)) ||
                 (local_7f8 = pIVar82, lVar45 = (**(code **)(*(longlong *)pUVar46 + 0x780))(pUVar46)
                 , lVar45 == 0)) goto LAB_149b843d7;
              piVar3 = &param_1[1].OutputData.TaggedData.ArrayMax;
              pUVar47 = FWeakObjectPtr::Get((FWeakObjectPtr *)piVar3);
              if (pUVar47 == (UObject *)0x0) {
                local_658 = pUVar46;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar46);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)piVar3,(FObjectPtr)&local_658);
              }
              local_768 = *(uint *)&pUVar46[0x1e].field_0x8;
              uVar66 = (ulonglong)(int)local_768;
              puVar81 = *(undefined8 **)(pUVar46 + 0x1e);
              local_7d0 = puVar81 + uVar66;
              puVar74 = local_7d0;
LAB_149b83c90:
              while( true ) {
                if (*(int *)&pUVar46[0x1e].field_0x8 != (int)uVar66) {
                  local_85d = 0;
                  `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(&local_85d);
                }
                if (puVar81 == puVar74) goto LAB_149b843aa;
                pUVar56 = (ULandscapeComponent *)*puVar81;
                if (pUVar56 != (ULandscapeComponent *)0x0) break;
                bVar34 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_6308572896373505758>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                    ,0x122,"LandscapeComponent");
                if (bVar34) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
LAB_149b841ca:
                uVar66 = (ulonglong)local_768;
                puVar81 = puVar81 + 1;
              }
              FVar22 = (FWeakObjectPtr)((double)pUVar56->_padding_ - (double)pUVar56->_padding_);
              dVar94 = (double)pUVar56->_padding_ - (double)pUVar56->_padding_;
              pIVar82 = (IPCGGraphExecutionSource *)
                        ((double)pUVar56->_padding_ - (double)pUVar56->_padding_);
              FVar20 = (FWeakObjectPtr)((double)pUVar56->_padding_ + (double)pUVar56->_padding_);
              local_708 = 1;
              dVar96 = (double)pUVar56->_padding_ + (double)pUVar56->_padding_;
              dVar27 = (double)pUVar56->_padding_ + (double)pUVar56->_padding_;
              uVar90 = (undefined4)((ulonglong)dVar27 >> 0x20);
              local_718._8_4_ = SUB84(dVar27,0);
              local_718._0_8_ = dVar96;
              local_718._12_4_ = uVar90;
              local_738._s_0.X = dVar94;
              local_738._s_0.Y = (double)FVar22;
              local_738._s_0.Z = (double)pIVar82;
              FStack_720 = FVar20;
              pTVar48 = UE::Math::TBox<double>::Overlap
                                  ((TBox<double> *)&local_738._s_0,&local_220,&local_100);
              puVar74 = local_7d0;
              if (((pTVar48->Max).field0_0x0._s_0.Y - (pTVar48->Min).field0_0x0._s_0.Y) *
                  ((pTVar48->Max).field0_0x0._s_0.X - (pTVar48->Min).field0_0x0._s_0.X) *
                  ((pTVar48->Max).field0_0x0._s_0.Z - (pTVar48->Min).field0_0x0._s_0.Z) <= dVar95)
              goto LAB_149b841ca;
              if ((uint)param_1[1].OutputData.DataCrcs.ArrayNum < 0x40) {
                ULandscapeComponent::UpdateGrassTypes(pUVar56,false);
                pTVar4 = &param_1[1].OutputData.DataCrcs;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar56);
                }
                local_7d8.ObjectIndex = 0;
                local_7d8.ObjectSerialNumber = 0;
                local_650 = pUVar56;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar56);
                }
                FWeakObjectPtr::operator=(&local_7d8,(FObjectPtr)&local_650);
                pFVar15 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
                if (((pFVar15 <= &local_7d8) &&
                    (&local_7d8 < pFVar15 + param_1[1].OutputData.DataCrcs.ArrayMax)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                iVar38 = param_1[1].OutputData.DataCrcs.ArrayNum;
                piVar3 = &param_1[1].OutputData.DataCrcs.ArrayMax;
                if (iVar38 == *piVar3) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,&pTVar4->AllocatorInstance,piVar3);
                }
                param_1[1].OutputData.DataCrcs.ArrayNum = iVar38 + 1;
                *(FWeakObjectPtr *)((pTVar4->AllocatorInstance).Data + (longlong)iVar38 * 8) =
                     local_7d8;
                if (param_1[1].OutputData.DataCrcs.ArrayNum == 1) {
                  if ((TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *)
                      &local_830 != &pUVar56->GrassTypes) {
                    iVar38 = (pUVar56->GrassTypes).ArrayNum;
                    pFVar75 = (pUVar56->GrassTypes).AllocatorInstance.Data;
                    local_828 = CONCAT44(local_828._4_4_,iVar38);
                    if ((iVar38 == 0) && (local_828._4_4_ == 0)) {
                      local_828 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,iVar38,local_828._4_4_,&local_830,iVar38,
                                 (int *)((longlong)&local_828 + 4));
                      ConstructItems<TObjectPtr<ULandscapeGrassType>,TObjectPtr<ULandscapeGrassType>,int>
                                (local_830.Data,(TObjectPtr<ULandscapeGrassType> *)pFVar75,iVar38);
                    }
                  }
                  param_1[1].OutputData.TaggedData.ArrayNum = (int)local_828;
                  local_798._8_8_ = (FScriptContainerElement *)0x0;
                  local_788 = 0;
                  ::FString::Reserve((FString *)(local_798 + 8),0x100);
                  pUVar42 = local_868;
                  local_800[0] = 0;
                  if (0 < (int)local_828) {
                    do {
                      uVar91 = local_800[0];
                      uVar93 = 0;
                      if ((int)local_800[0] < (int)local_828) {
                        uVar93 = ~local_800[0] >> 0x1f;
                      }
                      if ((uVar93 == 0) &&
                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar34)) {
                        pcVar19 = (code *)swi(3);
                        uVar35 = (*pcVar19)();
                        return (bool)uVar35;
                      }
                      TVar16 = (TObjectPtr<ULandscapeGrassType>_u_0)
                               ((TObjectPtr<ULandscapeGrassType>_u_0 *)
                               (local_830.Data + (longlong)(int)uVar91 * 8))->DebugPtr;
                      local_640 = TVar16;
                      if (UE::GC::GIsIncrementalReachabilityPending == false) {
                        if (TVar16.DebugPtr != (ULandscapeGrassType *)0x0) goto LAB_149b84027;
                      }
                      else if (TVar16.DebugPtr != (ULandscapeGrassType *)0x0) {
                        UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
LAB_149b84027:
                        local_648 = (FName)(TVar16.DebugPtr)->_padding_;
                        ::FName::ToString(&local_648,(FString *)(local_798 + 8));
                        pFVar75 = local_810.AllocatorInstance.Data +
                                  (longlong)local_810.ArrayNum * 0x10;
                        if (local_810.AllocatorInstance.Data != pFVar75) {
                          FVar70.Data = local_810.AllocatorInstance.Data;
                          iVar38 = (int)local_788;
                          do {
                            iVar39 = *(int *)(FVar70.Data + 8);
                            if (iVar39 == iVar38) {
                              if (1 < iVar39) {
                                iVar38 = FGenericPlatformStricmp::Stricmp
                                                   (*(wchar_t **)FVar70.Data,
                                                    (wchar_t *)local_798._8_8_);
                                bVar34 = iVar38 == 0;
                                iVar38 = (int)local_788;
                                goto LAB_149b84088;
                              }
LAB_149b841d6:
                              bVar34 = true;
                              goto LAB_149b8409e;
                            }
                            bVar34 = iVar39 + iVar38 == 1;
LAB_149b84088:
                            if (bVar34) goto LAB_149b841d6;
                            FVar70.Data = FVar70.Data + 0x10;
                          } while (FVar70.Data != pFVar75);
                        }
                        bVar34 = false;
LAB_149b8409e:
                        if (bVar34 != pUVar42->bExcludeSelectedGrassTypes) {
                          iVar38 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
                          piVar3 = (int *)((longlong)
                                           &param_1[1].OutputData.TaggedData.AllocatorInstance.Data
                                          + 4);
                          if (iVar38 == *piVar3) {
                            iVar38 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x40c,(ForAnyElementType *)
                                                      &param_1[1].InputData.InactiveOutputPinBitmask
                                                ,piVar3);
                          }
                          *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data =
                               iVar38 + 1;
                          TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int>::
                          TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int><TObjectPtr<ULandscapeGrassType>_&,int_&>
                                    ((TTuple<TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>,int>
                                      *)(param_1[1].InputData.InactiveOutputPinBitmask +
                                        (longlong)iVar38 * 0xc),
                                     (TObjectPtr<ULandscapeGrassType> *)&local_640.ObjectPtr,
                                     (int *)local_800);
                        }
                      }
                      local_800[0] = uVar91 + 1;
                    } while ((int)local_800[0] < (int)local_828);
                    dVar96 = (double)local_718._0_8_;
                    dVar27 = (double)local_718._8_8_;
                  }
                  pUVar46 = local_838;
                  param_1[1].OutputData.InactiveOutputPinBitmask = (ulong64)local_738._s_0.X;
                  param_1[1].ExecutionSource.ObjectInstance.WeakPtr =
                       (FWeakObjectPtr)local_738._s_0.Y;
                  param_1[1].ExecutionSource.InterfaceInstance =
                       (IPCGGraphExecutionSource *)local_738._s_0.Z;
                  param_1[1].SourceComponent.WeakPtr = FStack_720;
                  auVar23._8_4_ = SUB84(dVar27,0);
                  auVar23._0_8_ = dVar96;
                  auVar23._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                  param_1[1].bInputDataModified = (bool)SUB81(dVar96,0);
                  *(int7 *)&param_1[1].field_0x81 = (int7)((ulonglong)dVar96 >> 8);
                  param_1[1].AsyncState.EndTime = (double)auVar23._8_8_;
                  param_1[1].AsyncState.NumAvailableTasks = (int)CONCAT71(uStack_707,local_708);
                  param_1[1].AsyncState.AsyncCurrentReadIndex = (int)((uint7)uStack_707 >> 0x18);
                  dVar96 = (double)pUVar56->_padding_ + (double)pUVar56->_padding_;
                  *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex = dVar96;
                  *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap =
                       dVar96 / (double)*(int *)&local_838[0x2f].field_0x18;
                  dVar94 = (double)pUVar56->_padding_ - (double)pUVar56->_padding_;
                  if (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar94 >> 0x20) & uVar79,
                                                SUB84(dVar94,0) & uVar68)) {
                    bVar36 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_6308572896373505711>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x151,
                                        "FMath::IsNearlyEqual(LandscapeComponent->Bounds.BoxExtent.X, LandscapeComponent->Bounds.BoxExtent.Y)"
                                       );
                    FVar70.Data = (FScriptContainerElement *)local_798._8_8_;
                    if (bVar36) {
code_r0x000149b8445c:
                      pcVar19 = (code *)swi(3);
                      uVar35 = (*pcVar19)();
                      return (bool)uVar35;
                    }
                  }
                  else {
                    if (0.0 < dVar96) {
                      puVar74 = local_7d0;
                      if ((FScriptContainerElement *)local_798._8_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_798._8_8_);
                        puVar74 = local_7d0;
                      }
                      goto LAB_149b841ca;
                    }
                    bVar36 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_6308572896373505706>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x156,"Context->LandscapeComponentExtent > 0.0");
                    FVar70.Data = (FScriptContainerElement *)local_798._8_8_;
                    if (bVar36) goto code_r0x000149b8445c;
                  }
LAB_149b846a3:
                  if (FVar70.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar70.Data);
                  }
                  if (local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                  }
                  goto LAB_149b846be;
                }
                if ((char)param_1[1].AsyncState.NumAvailableTasks == '\0') {
                  param_1[1].OutputData.InactiveOutputPinBitmask = (ulong64)local_738._s_0.X;
                  param_1[1].ExecutionSource.ObjectInstance.WeakPtr =
                       (FWeakObjectPtr)local_738._s_0.Y;
                  param_1[1].ExecutionSource.InterfaceInstance =
                       (IPCGGraphExecutionSource *)local_738._s_0.Z;
                  param_1[1].SourceComponent.WeakPtr = FStack_720;
                  auVar24._8_4_ = SUB84(dVar27,0);
                  auVar24._0_8_ = dVar96;
                  auVar24._12_4_ = uVar90;
                  param_1[1].bInputDataModified = (bool)SUB81(dVar96,0);
                  *(int7 *)&param_1[1].field_0x81 = (int7)((ulonglong)dVar96 >> 8);
                  param_1[1].AsyncState.EndTime = (double)auVar24._8_8_;
                  param_1[1].AsyncState.NumAvailableTasks = (int)CONCAT71(uStack_707,local_708);
                  param_1[1].AsyncState.AsyncCurrentReadIndex = (int)((uint7)uStack_707 >> 0x18);
                }
                else {
                  uVar90 = local_718._8_4_;
                  uVar92 = local_718._12_4_;
                  dVar96 = (double)local_718._0_8_;
                  if ((double)local_718._0_8_ <= *(double *)&param_1[1].bInputDataModified) {
                    dVar96 = *(double *)&param_1[1].bInputDataModified;
                  }
                  dVar27 = param_1[1].AsyncState.EndTime;
                  if ((double)local_718._8_8_ <= dVar27) {
                    uVar90 = SUB84(dVar27,0);
                    uVar92 = (undefined4)((ulonglong)dVar27 >> 0x20);
                  }
                  dVar27 = (double)param_1[1].OutputData.InactiveOutputPinBitmask;
                  if (dVar27 <= dVar94) {
                    dVar94 = dVar27;
                  }
                  FVar9 = param_1[1].ExecutionSource.ObjectInstance.WeakPtr;
                  if ((double)FVar9 <= (double)FVar22) {
                    FVar22 = FVar9;
                  }
                  pIVar10 = param_1[1].ExecutionSource.InterfaceInstance;
                  if ((double)pIVar10 <= (double)pIVar82) {
                    pIVar82 = pIVar10;
                  }
                  FVar9 = param_1[1].SourceComponent.WeakPtr;
                  if ((double)FVar20 <= (double)FVar9) {
                    FVar20 = FVar9;
                  }
                  *(double *)&param_1[1].bInputDataModified = dVar96;
                  param_1[1].AsyncState.EndTime = (double)CONCAT44(uVar92,uVar90);
                  param_1[1].OutputData.InactiveOutputPinBitmask = (ulong64)dVar94;
                  param_1[1].ExecutionSource.ObjectInstance.WeakPtr = FVar22;
                  param_1[1].ExecutionSource.InterfaceInstance = pIVar82;
                  param_1[1].SourceComponent.WeakPtr = FVar20;
                }
                pUVar46 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              &param_1[1].OutputData.TaggedData.ArrayMax);
                pUVar49 = (UMaterialInterface *)
                          (**(code **)(*(longlong *)pUVar46 + 0x780))(pUVar46,0xff);
                pUVar50 = ULandscapeComponent::GetLandscapeMaterial(pUVar56,-1);
                if ((pUVar50 != pUVar49) &&
                   (((int)local_828 != (pUVar56->GrassTypes).ArrayNum ||
                    (bVar34 = CompareItems<TObjectPtr<ULandscapeGrassType>,int>
                                        ((TObjectPtr<ULandscapeGrassType> *)local_830.Data,
                                         (TObjectPtr<ULandscapeGrassType> *)
                                         (pUVar56->GrassTypes).AllocatorInstance.Data,(int)local_828
                                        ), !bVar34)))) {
                  bVar36 = pUVar49 == (UMaterialInterface *)0x0;
                  if (bVar36) {
                    pFVar51 = ::FString::FString(&local_530,L"MISSINGMATERIAL");
                  }
                  else {
                    local_628[0] = (FName)pUVar49->_padding_;
                    ::FName::ToString(local_628,&local_5d8);
                    pFVar51 = &local_5d8;
                  }
                  local_6e8.Data.AllocatorInstance.Data = (pFVar51->Data).AllocatorInstance.Data;
                  (pFVar51->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_6e8.Data.ArrayNum = (pFVar51->Data).ArrayNum;
                  local_6e8.Data.ArrayMax = (pFVar51->Data).ArrayMax;
                  (pFVar51->Data).ArrayNum = 0;
                  (pFVar51->Data).ArrayMax = 0;
                  if ((bVar36) &&
                     (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_530.Data.AllocatorInstance.Data);
                  }
                  if ((!bVar36) &&
                     (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
                  }
                  bVar36 = pUVar50 == (UMaterialInterface *)0x0;
                  if (bVar36) {
                    pFVar51 = ::FString::FString(&local_520,L"MISSINGMATERIAL");
                  }
                  else {
                    local_6a8 = (FName)pUVar50->_padding_;
                    ::FName::ToString(&local_6a8,&local_5c8);
                    pFVar51 = &local_5c8;
                  }
                  local_6f8.Data.AllocatorInstance.Data = (pFVar51->Data).AllocatorInstance.Data;
                  (pFVar51->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_6f8.Data.ArrayNum = (pFVar51->Data).ArrayNum;
                  local_6f8.Data.ArrayMax = (pFVar51->Data).ArrayMax;
                  (pFVar51->Data).ArrayNum = 0;
                  (pFVar51->Data).ArrayMax = 0;
                  if ((bVar36) &&
                     (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_520.Data.AllocatorInstance.Data);
                  }
                  if ((!bVar36) &&
                     (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
                  }
                  pFVar43 = FText::FromString(&local_268,&local_6e8);
                  pFVar52 = FText::FromString(&local_2a8,&local_6f8);
                  local_668 = (FName)pUVar56->_padding_;
                  ::FName::ToString(&local_668,&local_5b8);
                  pFVar53 = FText::FromString(&local_298,&local_5b8);
                  pFVar54 = FText::AsLocalizable_Advanced_LocText
                                      (&local_500,L"PCGGenerateLanscapeTexturesElement",
                                       L"LandscapeComponentGrassTypeMismatch",
                                       L"Encountered landscape component \'{0}\' with material \'{1}\' that does not match the grass types on material \'{2}\'. All landscape materials must have the same grass types at this time."
                                      );
                  pFVar55 = FTextFormat::FTextFormat(&local_288,pFVar54,Default);
                  pFVar43 = FText::Format<FText,FText,FText>
                                      (&local_510,pFVar55,pFVar53,pFVar52,pFVar43);
                  PCGLog::LogErrorOnGraph(pFVar43,param_1);
                  if (local_510.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_510.TextData.Reference + 0x10))();
                  }
                  if (local_500.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
                  }
                  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                  }
                  FVar70.Data = local_6e8.Data.AllocatorInstance.Data;
                  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
                    FVar70.Data = local_6e8.Data.AllocatorInstance.Data;
                  }
                  goto LAB_149b846a3;
                }
                dVar94 = *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex -
                         ((double)pUVar56->_padding_ + (double)pUVar56->_padding_);
                uVar91 = SUB84(dVar94,0) & uVar68;
                uVar93 = (uint)((ulonglong)dVar94 >> 0x20) & uVar79;
                if ((dVar30 <= (double)CONCAT44(uVar93,uVar91) &&
                     (double)CONCAT44(uVar93,uVar91) != dVar30) &&
                   (bVar34 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_6308572896373505674>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x176,
                                        "FMath::IsNearlyEqual(Context->LandscapeComponentExtent, LandscapeComponent->Bounds.BoxExtent.X * 2.0)"
                                       ), bVar34)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                puVar81 = puVar81 + 1;
                uVar66 = (ulonglong)local_768;
                pUVar46 = local_838;
                puVar74 = local_7d0;
                goto LAB_149b83c90;
              }
              pFVar43 = FText::AsLocalizable_Advanced_LocText
                                  (&local_540,L"PCGGenerateLanscapeTexturesElement",
                                   L"MaxLandscapeComponentsExceeded",
                                   L"Too many landscape components overlap the generation domain. Consider partitioning the component onto a smaller grid size."
                                  );
              PCGLog::LogWarningOnGraph(pFVar43,param_1);
              if (local_540.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_540.TextData.Reference + 0x10))();
              }
LAB_149b843aa:
              pIVar82 = local_7f8;
              FVar86 = local_750;
              if (local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_568.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                pIVar82 = local_7f8;
                FVar86 = local_750;
              }
LAB_149b843c3:
              uVar66 = (ulonglong)local_7f0;
              FVar86 = (FPCGCrc)((longlong)FVar86 + 0x28);
            }
          }
          pUVar46 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].OutputData.TaggedData.ArrayMax
                                       );
          if (((pUVar46 != (UObject *)0x0) && (param_1[1].OutputData.DataCrcs.ArrayNum != 0)) &&
             ((*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != 0 ||
              (local_868->bGenerateHeightMap != false)))) {
            *(undefined1 *)&param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data = 1;
            if (local_830.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_830.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_810.AllocatorInstance.Data,local_810.ArrayNum);
            if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_810.AllocatorInstance.Data);
            }
            goto LAB_149b84752;
          }
LAB_149b846be:
          if (local_830.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_830.Data);
          }
          DestructItems<FString,int>((FString *)local_810.AllocatorInstance.Data,local_810.ArrayNum)
          ;
          if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_810.AllocatorInstance.Data);
          }
        }
        else {
          plVar44 = (longlong *)(**(code **)((longlong)*pIVar82 + 0x18))(pIVar82);
          lVar45 = (**(code **)(*plVar44 + 0x20))(plVar44);
          if (lVar45 != 0) {
            plVar44 = (longlong *)(**(code **)((longlong)*pIVar82 + 0x18))(pIVar82);
            this_03 = (UWorld *)(**(code **)(*plVar44 + 0x20))(plVar44);
            bVar34 = UWorld::IsGameWorld(this_03);
            if (!bVar34) goto LAB_149b837d0;
          }
          if (2 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
        }
      }
    }
    else {
LAB_149b84752:
      if ((char)param_1[1].AsyncState.CurrentChunkToCollapse == '\0') {
        plVar44 = (longlong *)(**(code **)((longlong)*pIVar82 + 0x18))(pIVar82);
        FVar86 = (FPCGCrc)(**(code **)(*plVar44 + 0x20))(plVar44);
        local_758 = FVar86;
        if (FVar86 != (FPCGCrc)0x0) {
          pUVar46 = (UObject *)param_1[1].OutputData.DataCrcs.AllocatorInstance.Data;
          local_7f0 = local_850[1].OutputData.DataCrcs.ArrayNum;
          uVar66 = (ulonglong)(int)local_7f0;
          pUVar47 = (UObject *)((longlong)&pUVar46->field_0x0 + uVar66 * 8);
          pFVar84 = local_850;
          local_838 = pUVar47;
          while( true ) {
            if (pFVar84[1].OutputData.DataCrcs.ArrayNum != (int)uVar66) {
              local_857[0] = 0;
              `TCheckedPointerIterator<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_857);
            }
            param_1 = local_850;
            if (pUVar46 == pUVar47) break;
            local_6a0.ObjectIndex = *(int *)&pUVar46->field_0x0;
            local_6a0.ObjectSerialNumber = *(int *)&pUVar46->field_0x4;
            pUVar56 = (ULandscapeComponent *)FWeakObjectPtr::Get(&local_6a0);
            if (pUVar56 != (ULandscapeComponent *)0x0) {
              pUVar57 = ULandscapeComponent::GetHeightmap(pUVar56,false);
              if (pUVar57 != (UTexture2D *)0x0) {
                piVar3 = &pFVar84[1].AsyncState.TasksChunksStartEnd.ArrayNum;
                local_7a0 = pUVar57;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar57);
                }
                if (((*(UTexture2D ***)piVar3 <= &local_7a0) &&
                    (&local_7a0 <
                     *(UTexture2D ***)piVar3 + pFVar84[1].AsyncState.InitialNumIterations)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                iVar38 = *(int *)&pFVar84[1].AsyncState.bStarted;
                piVar1 = &pFVar84[1].AsyncState.InitialNumIterations;
                if (iVar38 == *piVar1) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)piVar3,piVar1);
                }
                *(int *)&pFVar84[1].AsyncState.bStarted = iVar38 + 1;
                *(UTexture2D **)(*(longlong *)piVar3 + (longlong)iVar38 * 8) = local_7a0;
                pUVar47 = local_838;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_7a0 != (UTexture2D *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_7a0);
                  pUVar47 = local_838;
                }
              }
              if (0 < pFVar84[1].OutputData.TaggedData.ArrayNum) {
                pTVar58 = ULandscapeComponent::GetRenderedWeightmapTexturesForFeatureLevel
                                    (pUVar56,(uint)*(byte *)((longlong)FVar86 + 0x188));
                pFVar84 = local_850;
                pFVar76 = (pTVar58->AllocatorInstance).Data;
                iVar38 = pTVar58->ArrayNum;
                pFVar75 = pFVar76 + (longlong)iVar38 * 8;
                while( true ) {
                  if (pTVar58->ArrayNum != iVar38) {
                    local_85c = 0;
                    `TCheckedPointerIterator<UTexture2D_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_85c);
                  }
                  if (pFVar76 == pFVar75) break;
                  pUVar47 = *(UObject **)pFVar76;
                  if (pUVar47 != (UObject *)0x0) {
                    piVar3 = &pFVar84[1].AsyncState.TasksChunksStartEnd.ArrayNum;
                    local_7b8 = pUVar47;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar47);
                    }
                    if (((*(UObject ***)piVar3 <= &local_7b8) &&
                        (&local_7b8 <
                         *(UObject ***)piVar3 + pFVar84[1].AsyncState.InitialNumIterations)) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar34)) {
                      pcVar19 = (code *)swi(3);
                      uVar35 = (*pcVar19)();
                      return (bool)uVar35;
                    }
                    iVar39 = *(int *)&pFVar84[1].AsyncState.bStarted;
                    piVar1 = &pFVar84[1].AsyncState.InitialNumIterations;
                    if (iVar39 == *piVar1) {
                      iVar39 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,(ForAnyElementType *)piVar3,piVar1);
                    }
                    *(int *)&pFVar84[1].AsyncState.bStarted = iVar39 + 1;
                    *(UObject **)(*(longlong *)piVar3 + (longlong)iVar39 * 8) = local_7b8;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_7b8 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(local_7b8);
                    }
                  }
                  pFVar76 = pFVar76 + 8;
                }
                uVar66 = (ulonglong)local_7f0;
                pUVar47 = local_838;
                FVar86 = local_758;
                pFVar84 = local_850;
              }
            }
            pUVar46 = (UObject *)&pUVar46->field_0x8;
          }
          plVar71 = *(longlong **)&local_850[1].AsyncState.TasksChunksStartEnd.ArrayNum;
          iVar38 = *(int *)&local_850[1].AsyncState.bStarted;
          plVar44 = plVar71 + iVar38;
          while( true ) {
            if (*(int *)&param_1[1].AsyncState.bStarted != iVar38) {
              local_85b = 0;
              `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_85b);
            }
            if (plVar71 == plVar44) break;
            *(byte *)(*plVar71 + 0xd0) = *(byte *)(*plVar71 + 0xd0) | 8;
            plVar71 = plVar71 + 1;
          }
        }
        *(undefined1 *)&param_1[1].AsyncState.CurrentChunkToCollapse = 1;
      }
      if (*(char *)((longlong)&param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data + 1)
          == '\0') {
        pFVar72 = (FWeakObjectPtr *)param_1[1].OutputData.DataCrcs.AllocatorInstance.Data;
        bVar67 = 1;
        iVar38 = param_1[1].OutputData.DataCrcs.ArrayNum;
        pFVar15 = pFVar72 + iVar38;
        while( true ) {
          if (param_1[1].OutputData.DataCrcs.ArrayNum != iVar38) {
            local_85a = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_85a);
          }
          if (pFVar72 == pFVar15) {
            if (bVar67 == 0) goto LAB_149b84bb3;
            puVar74 = *(undefined8 **)&param_1[1].AsyncState.TasksChunksStartEnd.ArrayNum;
            iVar38 = *(int *)&param_1[1].AsyncState.bStarted;
            puVar81 = puVar74 + iVar38;
            goto LAB_149b84b06;
          }
          local_698 = *pFVar72;
          pUVar56 = (ULandscapeComponent *)FWeakObjectPtr::Get(&local_698);
          if (pUVar56 == (ULandscapeComponent *)0x0) break;
          bVar34 = UE::Landscape::CanRenderGrassMap(pUVar56);
          bVar67 = bVar67 & bVar34;
          pFVar72 = pFVar72 + 1;
        }
        PCGLog::LogErrorOnGraph(&PCGGenerateLandscapeTextures::LandscapeComponentLostError,param_1);
      }
      else {
LAB_149b84c9f:
        pUVar42 = local_868;
        if (*(char *)((longlong)&param_1[1].AsyncState.CurrentChunkToCollapse + 1) == '\0') {
          bVar34 = FWeakObjectPtr::IsValid
                             ((FWeakObjectPtr *)&param_1[1].OutputData.TaggedData.ArrayMax);
          if ((bVar34) &&
             (pAVar61 = (ALandscapeProxy *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            &param_1[1].OutputData.TaggedData.ArrayMax),
             pFVar84 = local_850, param_1 = local_850, pAVar61 != (ALandscapeProxy *)0x0)) {
            lVar45 = pAVar61->_padding_;
            pFVar62 = (FLandscapeGrassWeightExporter *)0x0;
            local_840._4_4_ = 0;
            local_3f8 = *(undefined8 *)(lVar45 + 0x148);
            uStack_3f0 = *(undefined8 *)(lVar45 + 0x150);
            uVar68 = local_850[1].OutputData.DataCrcs.ArrayNum;
            local_3e8 = *(code **)(lVar45 + 0x158);
            pcVar19 = *(code **)(lVar45 + 0x188);
            pcVar28 = *(code **)(lVar45 + 0x178);
            pcVar29 = *(code **)(lVar45 + 0x180);
            local_820.Data = (FScriptContainerElement *)0x0;
            local_818 = 0;
            local_848.Data = (FScriptContainerElement *)0x0;
            local_840 = 0;
            if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
            }
            local_840._0_4_ = local_840._4_4_;
            if (0 < (int)uVar68) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar68,&local_820,0,(int *)((longlong)&local_818 + 4));
            }
            uVar68 = pFVar84[1].OutputData.DataCrcs.ArrayNum;
            if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
            }
            if (local_840._4_4_ < (int)uVar68) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar68,&local_848,(int)local_840,(int *)((longlong)&local_840 + 4));
            }
            dVar30 = __real_3ff0000000000000;
            pFVar72 = (FWeakObjectPtr *)pFVar84[1].OutputData.DataCrcs.AllocatorInstance.Data;
            iVar38 = pFVar84[1].OutputData.DataCrcs.ArrayNum;
            pFVar15 = pFVar72 + iVar38;
            while( true ) {
              if (pFVar84[1].OutputData.DataCrcs.ArrayNum != iVar38) {
                local_858 = 0;
                `TCheckedPointerIterator<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_858);
              }
              if (pFVar72 == pFVar15) break;
              local_700 = *pFVar72;
              bVar34 = FWeakObjectPtr::IsValid(&local_700);
              if (!bVar34) {
                local_7c8 = (UObject *)0x0;
LAB_149b84fa9:
                PCGLog::LogErrorOnGraph
                          (&PCGGenerateLandscapeTextures::LandscapeComponentLostError,pFVar84);
LAB_149b8559e:
                bVar36 = true;
                goto LAB_149b855a0;
              }
              local_7c8 = FWeakObjectPtr::Get(&local_700);
              if (local_7c8 == (UObject *)0x0) goto LAB_149b84fa9;
              if (((local_820.Data <= (FScriptContainerElement *)&local_7c8) &&
                  ((FScriptContainerElement *)&local_7c8 <
                   local_820.Data + (longlong)local_818._4_4_ * 8)) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar34)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              iVar39 = (int)local_818;
              if ((int)local_818 == local_818._4_4_) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_820,(int *)((longlong)&local_818 + 4));
              }
              local_818 = CONCAT44(local_818._4_4_,iVar39 + 1);
              *(UObject **)(local_820.Data + (longlong)iVar39 * 8) = local_7c8;
              dVar95 = dVar30 / *(double *)&pFVar84[1].AsyncState.AsyncCurrentWriteIndex;
              local_7b0 = (int)((*(double *)&local_7c8[6].field_0x20 -
                                (double)pFVar84[1].OutputData.InactiveOutputPinBitmask) * dVar95);
              iStack_7ac = (int)((*(double *)(local_7c8 + 7) -
                                 (double)pFVar84[1].ExecutionSource.ObjectInstance.WeakPtr) * dVar95
                                );
              if (((local_848.Data <= (FScriptContainerElement *)&local_7b0) &&
                  ((FScriptContainerElement *)&local_7b0 <
                   local_848.Data + (longlong)local_840._4_4_ * 8)) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar34)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              iVar39 = (int)local_840;
              if ((int)local_840 == local_840._4_4_) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_848,(int *)((longlong)&local_840 + 4));
              }
              pFVar72 = pFVar72 + 1;
              local_840 = CONCAT44(local_840._4_4_,iVar39 + 1);
              *(ulonglong *)(local_848.Data + (longlong)iVar39 * 8) = CONCAT44(iStack_7ac,local_7b0)
              ;
            }
            this_04 = ::operator_new(0x1d0);
            if (this_04 != (FLandscapeGrassWeightExporter *)0x0) {
              iVar38 = pFVar84[1].OutputData.TaggedData.ArrayNum;
              iVar39 = (int)local_818;
              local_6d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              bVar34 = local_868->bGenerateHeightMap;
              local_6d8.ArrayNum = 0;
              local_6d8.ArrayMax = 0;
              bVar36 = true;
              local_5a8 = local_820.Data;
              if (((int)local_818 < 0) &&
                 (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar37)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              iStack_5a0 = iVar39;
              local_4d8._12_4_ = uStack_59c;
              local_4d8.ArrayNum = iVar39;
              local_4d8.DataPtr = (ULandscapeComponent **)local_5a8;
              pFVar62 = FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter
                                  (this_04,pAVar61,&local_4d8,0 < iVar38,bVar34,&local_6d8,false,
                                   false);
            }
            pFVar84[1]._padding_ = (longlong)pFVar62;
            if ((bVar36) && (local_6d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_6d8.AllocatorInstance.Data);
            }
            lVar45 = pFVar84[1]._padding_;
            lVar77 = (longlong)GRHIGlobals.MaxTextureDimensions.Value;
            iVar38 = *(int *)(lVar45 + 0x60);
            if ((((iVar38 < 1) || (GRHIGlobals.MaxTextureDimensions.Value < iVar38)) ||
                (*(int *)(lVar45 + 100) < 1)) ||
               (GRHIGlobals.MaxTextureDimensions.Value < *(int *)(lVar45 + 100))) {
              iVar39 = *(int *)(lVar45 + 100);
              pFVar43 = FText::AsLocalizable_Advanced_LocText
                                  (&local_4c8,L"PCGGenerateLanscapeTexturesElement",
                                   L"InvalidTextureSize",
                                   L"Invalid output texture size ({0}, {1}), cannot exceed ({2}, {2}). Consider partitioning the component onto a smaller grid size."
                                  );
              pFVar55 = FTextFormat::FTextFormat(&local_278,pFVar43,Default);
              local_178.Type = Int;
              local_178.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_178.TextValue.field0_0x0.TypedValue.Flags = 0;
              local_158 = 0;
              local_148 = (longlong *)0x0;
              local_140 = 0;
              local_138 = 0;
              local_128 = (longlong *)0x0;
              local_120 = 0;
              local_780._8_8_ = (FFormatArgumentValue *)0x0;
              local_770 = 3;
              local_178.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar38;
              local_150 = (longlong)iVar39;
              local_130 = lVar77;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,3,0,(ForAnyElementType *)(local_780 + 8),3,&local_76c);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        ((void *)local_780._8_8_,&local_178,3);
              local_598.TextFormatData.Object = (pFVar55->TextFormatData).Object;
              local_598.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar55->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_598.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_598.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_598.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FText::Format(&local_588,&local_598,
                            (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *)
                            (local_780 + 8));
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_780._8_8_,local_770);
              if ((FFormatArgumentValue *)local_780._8_8_ != (FFormatArgumentValue *)0x0) {
                FMemory::Free((void *)local_780._8_8_);
              }
              if (local_128 != (longlong *)0x0) {
                (**(code **)(*local_128 + 0x10))();
              }
              if (local_148 != (longlong *)0x0) {
                (**(code **)(*local_148 + 0x10))();
              }
              if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_178.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar55->TextFormatData).SharedReferenceCount.ReferenceController);
              PCGLog::LogErrorOnGraph(&local_588,pFVar84);
              if (local_588.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_588.TextData.Reference + 0x10))();
              }
              if (local_4c8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
              }
              goto LAB_149b8559e;
            }
            UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_118);
            RenderCaptureInterface::FScopedCapture::FScopedCapture
                      (&local_258,0 < PCGGenerateLandscapeTextures::GTriggerGPUCaptureDispatches,
                       L"PCGLandscapeGrassmapCapture",(wchar_t *)0x0);
            iVar38 = PCGGenerateLandscapeTextures::GTriggerGPUCaptureDispatches + -1;
            PCGGenerateLandscapeTextures::GTriggerGPUCaptureDispatches = 0;
            if (0 < iVar38) {
              PCGGenerateLandscapeTextures::GTriggerGPUCaptureDispatches = iVar38;
            }
            FPCGContext::GetOrCreateHandle(pFVar84,&local_6c8);
            FVar70.Data = local_848.Data;
            iVar38 = pAVar61->ComponentSizeQuads;
            bVar36 = local_868->bGenerateHeightMap;
            pcVar11 = *(code **)&local_850[1].AsyncState.AsyncCurrentWriteIndex;
            if (local_6c8.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_6c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)
                   ((int)(local_6c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
              ;
              UNLOCK();
            }
            uVar90 = (int)local_840;
            uVar92 = local_840._4_4_;
            local_848.Data = (FScriptContainerElement *)0x0;
            local_840 = 0;
            local_1e8[0] = (code *)0x0;
            local_1c0 = FMemory::Malloc(0x60,8);
            local_1c0[2] = (code *)local_6c8.WeakReferenceCount.ReferenceController;
            *local_1c0 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`200'::<lambda_2>,1,1>
                                  ::_vftable_;
            local_1c0[1] = (code *)local_6c8.Object;
            local_1c0[3] = pcVar11;
            local_1c0[4] = (code *)FVar70.Data;
            *(undefined4 *)(local_1c0 + 5) = uVar90;
            *(undefined4 *)((longlong)local_1c0 + 0x2c) = uVar92;
            local_1c0[7] = pcVar28;
            local_1c0[8] = pcVar29;
            *(int *)(local_1c0 + 6) = iVar38;
            local_1c0[9] = pcVar19;
            local_1c0[10] = local_3e8;
            *(bool *)(local_1c0 + 0xb) = bVar36;
            if (local_1c0 + 1 != (code **)0x0) {
              local_1e8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>,void,FRHICommandListImmediate_&>
                             ::Call;
            }
            this_05 = FRenderCommandList::GetInstanceTLS();
            if (this_05 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_FPCGGenerateLandscapeTexturesElement::ExecuteInternal_::__l200::TSTR_GenerateGrassMaps560>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1e8);
            }
            else {
              if (this_05->bInitialized == 0) {
                FRenderCommandList::Init(this_05);
              }
              iVar38 = (this_05->CommandLists).ArrayNum;
              uVar79 = iVar38 - 1;
              uVar68 = 0;
              if ((int)uVar79 < iVar38) {
                uVar68 = ~uVar79 >> 0x1f;
              }
              if ((uVar68 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              iVar38 = (this_05->CommandLists).ArrayNum;
              local_1b8._0_8_ = local_1e8[0];
              local_1e8[0] = (code *)0x0;
              local_1b8._16_8_ = local_1d8[0];
              local_1b8._24_8_ = local_1d8[1];
              local_1b8._32_8_ = local_1d8[2];
              local_188 = 2;
              pFVar17 = (this_05->CommandLists).AllocatorInstance.Data;
              local_190 = local_1c0;
              local_1c0 = (code **)0x0;
              pFVar63 = (FRenderCommandTag *)
                        TRenderCommandTag<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::TSTR_GenerateGrassMaps560>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (pFVar17 + (iVar38 + -1),
                         (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_1b8,pFVar63);
              uVar66 = (ulonglong)local_188;
              if ((2 < uVar66) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar36)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar66] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_1b8._0_8_ != (code *)0x0) {
                  ppcVar65 = (code **)(local_1b8 + 0x10);
                  if (local_190 != (code **)0x0) {
                    ppcVar65 = local_190;
                  }
                  (**(code **)(*ppcVar65 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar66])(local_1b8);
              }
            }
            if (local_1e8[0] != (code *)0x0) {
              ppcVar65 = local_1e8 + 2;
              if (local_1c0 != (code **)0x0) {
                ppcVar65 = local_1c0;
              }
              (**(code **)(*ppcVar65 + 0x10))();
            }
            bVar36 = false;
            *(undefined1 *)((longlong)&local_850[1].AsyncState.CurrentChunkToCollapse + 1) = 1;
            local_850->bIsPaused = true;
            if (local_6c8.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_6c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar7 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar7 == (atomic<int>)0x1) {
                (**(code **)((local_6c8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_6c8.WeakReferenceCount.ReferenceController,1);
              }
            }
            RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_258);
            UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_118);
LAB_149b855a0:
            if (local_848.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_848.Data);
            }
            if (local_820.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_820.Data);
            }
            goto LAB_149b861fa;
          }
          pFVar43 = FText::AsLocalizable_Advanced_LocText
                              (&local_4b8,L"PCGGenerateLanscapeTexturesElement",
                               L"LandscapeProxyLost",
                               L"Reference to landscape proxy actor lost, grass maps will not be generated."
                              );
          PCGLog::LogErrorOnGraph(pFVar43,param_1);
          if (local_4b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
          }
        }
        else {
          if ((local_868->bGenerateHeightMap != false) &&
             (param_1[1].InputData.TaggedData.AllocatorInstance.Data ==
              (FScriptContainerElement *)0x0)) {
            pUVar64 = FPCGContext::NewObject_AnyThread<UPCGTextureData>(param_1);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar64 != (UPCGTextureData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar64);
            }
            param_1[1].InputData.TaggedData.AllocatorInstance.Data =
                 (FScriptContainerElement *)pUVar64;
          }
          iVar38._0_1_ = param_1[1].InputData.bCancelExecutionOnEmpty;
          iVar38._1_1_ = param_1[1].InputData.bCancelExecution;
          iVar38._2_2_ = *(undefined2 *)&param_1[1].InputData.field_0x12;
          if ((iVar38 == 0) &&
             (iVar38 = 0, 0 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data)) {
            piVar3 = &param_1[1].InputData.TaggedData.ArrayNum;
            do {
              bVar36 = IsInGameThread();
              if (bVar36) {
                pUVar46 = GetTransientPackageAsObject();
                pUVar64 = NewObject<UPCGTextureData>(pUVar46);
              }
              else {
                if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
                   (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4331830188552749348>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_86f);
                pUVar46 = GetTransientPackageAsObject();
                pUVar64 = NewObject<UPCGTextureData>(pUVar46);
                FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_86f);
                if ((pUVar64 == (UPCGTextureData *)0x0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x12a,L""), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                local_688 = pUVar64;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar64 != (UPCGTextureData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar64);
                }
                TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                ::Emplace<TObjectPtr<UObject>_>
                          (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_660,
                           (bool *)&local_688);
              }
              local_7a8 = pUVar64;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar64 != (UPCGTextureData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar64);
              }
              if (((*(UPCGTextureData ***)piVar3 <= &local_7a8) &&
                  (&local_7a8 <
                   *(UPCGTextureData ***)piVar3 + *(int *)&param_1[1].InputData.field_0x14)) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar36)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              iVar39._0_1_ = param_1[1].InputData.bCancelExecutionOnEmpty;
              iVar39._1_1_ = param_1[1].InputData.bCancelExecution;
              iVar39._2_2_ = *(undefined2 *)&param_1[1].InputData.field_0x12;
              if (iVar39 == *(int *)&param_1[1].InputData.field_0x14) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)piVar3,
                                    (int *)&param_1[1].InputData.field_0x14);
              }
              *(int *)&param_1[1].InputData.bCancelExecutionOnEmpty = iVar39 + 1;
              *(UPCGTextureData **)(*(longlong *)piVar3 + (longlong)iVar39 * 8) = local_7a8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_7a8 != (UPCGTextureData *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_7a8);
              }
              iVar38 = iVar38 + 1;
              pUVar42 = local_868;
            } while (iVar38 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data);
          }
          dVar94 = UE::Math::TQuat<double>::Identity.W;
          dVar95 = UE::Math::TQuat<double>::Identity.Z;
          dVar30 = UE::Math::TQuat<double>::Identity.Y;
          lVar45._0_4_ = param_1[1].InputData.DataCrcs.ArrayNum;
          lVar45._4_4_ = param_1[1].InputData.DataCrcs.ArrayMax;
          if ((lVar45 != 0) ||
             (param_1[1].InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            if ((char)param_1[1].TaskId == '\0') {
              puVar5 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
              FVar20 = param_1[1].SourceComponent.WeakPtr;
              dVar96 = param_1[1].AsyncState.EndTime;
              FVar22 = param_1[1].ExecutionSource.ObjectInstance.WeakPtr;
              dVar27 = (double)param_1[1].OutputData.InactiveOutputPinBitmask;
              pIVar82 = param_1[1].ExecutionSource.InterfaceInstance;
              dVar12 = *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap;
              dVar89 = (*(double *)&param_1[1].bInputDataModified + (double)FVar22) *
                       __real_3fe0000000000000;
              local_308 = UE::Math::TQuat<double>::Identity.X;
              dStack_300 = UE::Math::TQuat<double>::Identity.Y;
              dVar26 = ((double)FVar20 + dVar27) * __real_3fe0000000000000;
              local_2d8 = (dVar96 + (double)pIVar82) * __real_3fe0000000000000;
              local_2b8 = (FPCGCrc)((dVar96 - (double)pIVar82) * __real_3fe0000000000000);
              uVar97 = SUB84(dVar89,0);
              uVar98 = (undefined4)((ulonglong)dVar89 >> 0x20);
              dVar96 = ((*(double *)&param_1[1].bInputDataModified - (double)FVar22) + dVar12) *
                       __real_3fe0000000000000;
              uVar90 = SUB84(dVar96,0);
              uVar92 = (undefined4)((ulonglong)dVar96 >> 0x20);
              dVar96 = (((double)FVar20 - dVar27) + dVar12) * __real_3fe0000000000000;
              local_2f8 = UE::Math::TQuat<double>::Identity.Z;
              dStack_2f0 = UE::Math::TQuat<double>::Identity.W;
              local_2e8._8_4_ = uVar97;
              local_2e8._0_8_ = dVar26;
              local_2e8._12_4_ = uVar98;
              uStack_2d0 = 0;
              uStack_2b0 = 0;
              local_2c8._8_4_ = uVar90;
              local_2c8._0_8_ = dVar96;
              local_2c8._12_4_ = uVar92;
              if (&local_308 != (double *)puVar5) {
                *(double *)puVar5 = UE::Math::TQuat<double>::Identity.X;
                *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 = dVar30;
                *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x18 = dVar95;
                *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x20 = dVar94;
                auVar25._8_4_ = uVar97;
                auVar25._0_8_ = dVar26;
                auVar25._12_4_ = uVar98;
                *(undefined1 (*) [16])&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28
                     = auVar25;
                *(double *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x38 =
                     local_2d8;
                *(undefined8 *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40 = 0;
                auVar21._8_4_ = uVar90;
                auVar21._0_8_ = dVar96;
                auVar21._12_4_ = uVar92;
                *(undefined1 (*) [16])&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48
                     = auVar21;
                param_1[1].DependenciesCrc = local_2b8;
                param_1[1].Node = (UPCGNode *)0x0;
                *(undefined1 *)&param_1[1].TaskId = 1;
              }
            }
            local_870 = true;
            if (param_1[1].InputData.DataCrcs.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              if ((param_1[1].InputData.TaggedData.AllocatorInstance.Data ==
                   (FScriptContainerElement *)0x0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Context->HeightTextureData",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                      ,0x2d2,L""), bVar36)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              pUVar64 = (UPCGTextureData *)param_1[1].InputData.TaggedData.AllocatorInstance.Data;
              bVar36 = pUVar42->bSkipReadbackToCPU;
              if (((char)param_1[1].TaskId == '\0') &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar34)) {
                pcVar19 = (code *)swi(3);
                uVar35 = (*pcVar19)();
                return (bool)uVar35;
              }
              local_680 = param_1[1].InputData.DataCrcs.AllocatorInstance.Data;
              if (local_680 != (FScriptContainerElement *)0x0) {
                (**(code **)(*(longlong *)local_680 + 0x30))();
              }
              local_870 = UPCGTextureData::Initialize
                                    (pUVar64,(IPooledRenderTarget *)&local_680,0,
                                     (TTransform<double> *)
                                     &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8,
                                     bVar36);
            }
            uVar66 = 0;
            lVar77._0_4_ = param_1[1].InputData.DataCrcs.ArrayNum;
            lVar77._4_4_ = param_1[1].InputData.DataCrcs.ArrayMax;
            pFVar84 = param_1;
            if ((lVar77 != 0) &&
               (0 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data)) {
              uVar83 = uVar66;
              uVar87 = uVar66;
              do {
                pFVar84 = local_850;
                uVar68 = (uint)uVar66;
                if ((((int)uVar68 < 0) ||
                    (iVar6._0_1_ = local_850[1].InputData.bCancelExecutionOnEmpty,
                    iVar6._1_1_ = local_850[1].InputData.bCancelExecution,
                    iVar6._2_2_ = *(undefined2 *)&local_850[1].InputData.field_0x12,
                    iVar6 <= (int)uVar68)) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Context->GrassMapTextureDatas.IsValidIndex(DataIndex)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x2da,L""), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                iVar13._0_1_ = pFVar84[1].InputData.bCancelExecutionOnEmpty;
                iVar13._1_1_ = pFVar84[1].InputData.bCancelExecution;
                iVar13._2_2_ = *(undefined2 *)&pFVar84[1].InputData.field_0x12;
                uVar79 = 0;
                if ((int)uVar68 < iVar13) {
                  uVar79 = ~uVar68 >> 0x1f;
                }
                if ((uVar79 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                pUVar64 = *(UPCGTextureData **)
                           (uVar87 + *(longlong *)&pFVar84[1].InputData.TaggedData.ArrayNum);
                if ((pUVar64 == (UPCGTextureData *)0x0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TextureData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x2dc,L""), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                bVar36 = pUVar42->bSkipReadbackToCPU;
                if (((char)param_1[1].TaskId == '\0') &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar34)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                uVar79 = 0;
                if ((int)uVar68 < *(int *)&pFVar84[1].OutputData.TaggedData.AllocatorInstance.Data)
                {
                  uVar79 = ~uVar68 >> 0x1f;
                }
                if ((uVar79 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                uVar79 = *(uint *)(pFVar84[1].InputData.InactiveOutputPinBitmask + 8 + uVar83);
                local_678 = *(longlong **)&local_850[1].InputData.DataCrcs.ArrayNum;
                if (local_678 != (longlong *)0x0) {
                  (**(code **)(*local_678 + 0x30))();
                }
                bVar36 = UPCGTextureData::Initialize
                                   (pUVar64,(IPooledRenderTarget *)&local_678,uVar79,
                                    (TTransform<double> *)
                                    &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8,
                                    bVar36);
                uVar66 = (ulonglong)(uVar68 + 1);
                local_870 = (bool)(local_870 & bVar36);
                uVar87 = uVar87 + 8;
                uVar83 = uVar83 + 0xc;
                pUVar42 = local_868;
                pFVar84 = local_850;
              } while ((int)(uVar68 + 1) <
                       *(int *)&local_850[1].OutputData.TaggedData.AllocatorInstance.Data);
            }
            if (local_870 == false) {
              pFVar84->bIsPaused = true;
              pFVar59 = FPCGModule::GetPCGModuleChecked();
              pTVar60 = FPCGContext::GetOrCreateHandle(pFVar84,&local_4a8);
              local_380 = pTVar60->Object;
              local_378 = (pTVar60->WeakReferenceCount).ReferenceController;
              (pTVar60->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              pTVar60->Object = (FPCGContextHandle *)0x0;
              local_388 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`259'::<lambda_3>,0,0>
                           ::_vftable_;
              local_398[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l259::<lambda_3>,void>
                             ::Call;
              local_370 = 0;
              FPCGModule::ExecuteNextTick(pFVar59,(TFunction<void___cdecl(void)> *)local_398);
              local_4f0.WeakReferenceCount.ReferenceController =
                   local_4a8.WeakReferenceCount.ReferenceController;
              goto LAB_149b85cb1;
            }
            pFVar75 = pFVar84[1].InputData.TaggedData.AllocatorInstance.Data;
            if (pFVar75 != (FScriptContainerElement *)0x0) {
              if (pFVar75[0x26c] == (FScriptContainerElement)0x0) {
                if (2 < (byte)LogPCG._0_1_) {
                  pFVar43 = FText::AsLocalizable_Advanced_LocText
                                      (&local_478,L"PCGGenerateLanscapeTexturesElement",
                                       L"HeightTextureInitFailed",
                                       L"Data could not be retrieved for height texture, initialization failed."
                                      );
                  FText::ToString(pFVar43);
                  FPCGContext::GetTaskName(pFVar84,&local_488);
                  FPCGContext::GetExecutionSourceName(pFVar84,&local_498);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_498.Data.AllocatorInstance.Data);
                  }
                  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_488.Data.AllocatorInstance.Data);
                  }
                  if (local_478.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
                  }
                }
              }
              else {
                iVar38 = (pFVar84->OutputData).TaggedData.ArrayNum;
                piVar3 = &(pFVar84->OutputData).TaggedData.ArrayMax;
                if (iVar38 == *piVar3) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x878,(ForAnyElementType *)&pFVar84->OutputData,piVar3);
                }
                pFVar75 = (pFVar84->OutputData).TaggedData.AllocatorInstance.Data;
                (pFVar84->OutputData).TaggedData.ArrayNum = iVar38 + 1;
                pFVar73 = (FPCGDataPtrWrapper *)(pFVar75 + (longlong)iVar38 * 0x78);
                pFVar73[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar73[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar73[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar73[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar73[6].WeakData.WeakPtr.ObjectIndex = 0x100;
                (pFVar73->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
                (pFVar73->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
                pFVar73[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar73[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar73[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar73[3].WeakData.WeakPtr.ObjectIndex = 0;
                pFVar73[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
                *(undefined4 *)&pFVar73[4].Data.field0_0x0 = 0xffffffff;
                *(undefined4 *)((longlong)&pFVar73[4].Data.field0_0x0 + 4) = 0;
                pFVar73[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar73[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                *(undefined8 *)&pFVar73[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
                *(undefined4 *)((longlong)&pFVar73[7].Data.field0_0x0 + 4) = 0xffffffff;
                FPCGDataPtrWrapper::operator=
                          (pFVar73,(UPCGData *)
                                   pFVar84[1].InputData.TaggedData.AllocatorInstance.Data);
                pFVar73[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
                     (FObjectPtr_u_0)PCGGenerateLandscapeTextures::OutputHeightPinLabel;
              }
            }
            uVar83 = 0;
            uVar66 = uVar83;
            if (0 < *(int *)&pFVar84[1].OutputData.TaggedData.AllocatorInstance.Data) {
              do {
                uVar68 = (uint)uVar83;
                if ((((int)uVar68 < 0) ||
                    (iVar8._0_1_ = pFVar84[1].InputData.bCancelExecutionOnEmpty,
                    iVar8._1_1_ = pFVar84[1].InputData.bCancelExecution,
                    iVar8._2_2_ = *(undefined2 *)&pFVar84[1].InputData.field_0x12,
                    iVar8 <= (int)uVar68)) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Context->GrassMapTextureDatas.IsValidIndex(DataIndex)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x313,L""), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                iVar14._0_1_ = pFVar84[1].InputData.bCancelExecutionOnEmpty;
                iVar14._1_1_ = pFVar84[1].InputData.bCancelExecution;
                iVar14._2_2_ = *(undefined2 *)&pFVar84[1].InputData.field_0x12;
                uVar79 = 0;
                if ((int)uVar68 < iVar14) {
                  uVar79 = ~uVar68 >> 0x1f;
                }
                if ((uVar79 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                pUVar18 = *(UPCGData **)
                           (uVar66 + *(longlong *)&pFVar84[1].InputData.TaggedData.ArrayNum);
                if ((pUVar18 == (UPCGData *)0x0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TextureData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGenerateLandscapeTextures.cpp"
                                        ,0x315,L""), bVar36)) {
                  pcVar19 = (code *)swi(3);
                  uVar35 = (*pcVar19)();
                  return (bool)uVar35;
                }
                if (*(char *)((longlong)&pUVar18[8].UID + 4) == '\0') {
                  if (2 < (byte)LogPCG._0_1_) {
                    pFVar43 = FText::AsLocalizable_Advanced_LocText
                                        (&local_448,L"PCGGenerateLanscapeTexturesElement",
                                         L"TextureInitFailed",
                                         L"Data could not be retrieved for this texture, initialization failed."
                                        );
                    FText::ToString(pFVar43);
                    FPCGContext::GetTaskName(pFVar84,&local_458);
                    FPCGContext::GetExecutionSourceName(pFVar84,&local_468);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_468.Data.AllocatorInstance.Data);
                    }
                    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_458.Data.AllocatorInstance.Data);
                    }
                    if (local_448.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
                    }
                  }
                }
                else {
                  iVar38 = (pFVar84->OutputData).TaggedData.ArrayNum;
                  piVar3 = &(pFVar84->OutputData).TaggedData.ArrayMax;
                  if (iVar38 == *piVar3) {
                    iVar38 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x878,(ForAnyElementType *)&pFVar84->OutputData,piVar3);
                  }
                  (pFVar84->OutputData).TaggedData.ArrayNum = iVar38 + 1;
                  pFVar73 = (FPCGDataPtrWrapper *)
                            ((pFVar84->OutputData).TaggedData.AllocatorInstance.Data +
                            (longlong)iVar38 * 0x78);
                  pFVar73[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                  pFVar73[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                  pFVar73[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                  pFVar73[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
                  *(undefined2 *)((longlong)&pFVar73[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
                  (pFVar73->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
                  (pFVar73->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
                  *(undefined8 *)
                   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar73 + 1))
                    ->Elements = 0;
                  pFVar73[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                  pFVar73[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                  pFVar73[3].WeakData.WeakPtr.ObjectIndex = 0;
                  pFVar73[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
                  *(undefined4 *)&pFVar73[4].Data.field0_0x0 = 0xffffffff;
                  *(undefined4 *)((longlong)&pFVar73[4].Data.field0_0x0 + 4) = 0;
                  pFVar73[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                  pFVar73[5].WeakData.WeakPtr.ObjectIndex = 0;
                  pFVar73[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                  *(undefined2 *)&pFVar73[6].WeakData.WeakPtr.ObjectIndex = 0x100;
                  *(undefined8 *)&pFVar73[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
                  *(undefined4 *)((longlong)&pFVar73[7].Data.field0_0x0 + 4) = 0xffffffff;
                  pFVar73[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
                       (FObjectPtr_u_0)PCGGenerateLandscapeTextures::OutputGrassMapsPinLabel;
                  FPCGDataPtrWrapper::operator=(pFVar73,pUVar18);
                  ::FString::FString(&local_6b8,L"");
                  uVar79 = 0;
                  if ((int)uVar68 < *(int *)&pFVar84[1].OutputData.TaggedData.AllocatorInstance.Data
                     ) {
                    uVar79 = ~uVar68 >> 0x1f;
                  }
                  if ((uVar79 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar19 = (code *)swi(3);
                    uVar35 = (*pcVar19)();
                    return (bool)uVar35;
                  }
                  pUVar46 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                                (pFVar84[1].InputData.InactiveOutputPinBitmask +
                                                (longlong)(int)uVar68 * 0xc));
                  if (pUVar46 != (UObject *)0x0) {
                    local_670.ComparisonIndex.Value = *(uint *)&pUVar46->field_0x18;
                    local_670.Number = *(uint *)&pUVar46->field_0x1c;
                    ::FName::ToString(&local_670,&local_6b8);
                  }
                  if (local_6b8.Data.ArrayNum < 2) {
                    if (2 < (byte)LogPCG._0_1_) {
                      pFVar43 = FText::AsLocalizable_Advanced_LocText
                                          (&local_408,L"PCGGenerateLanscapeTexturesElement",
                                           L"MissingGrassName",
                                           L"Grass type name was missing, data could not be labeled. Make sure all GrassTypes in your landscape material have an asset associated."
                                          );
                      FText::ToString(pFVar43);
                      FPCGContext::GetTaskName(pFVar84,&local_418);
                      FPCGContext::GetExecutionSourceName(pFVar84,&local_428);
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_428.Data.AllocatorInstance.Data);
                      }
                      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_418.Data.AllocatorInstance.Data);
                      }
                      if (local_408.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
                      }
                    }
                  }
                  else {
                    pFVar51 = PCGComputeHelpers::GetPrefixedDataLabel(&local_438,&local_6b8);
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               (pFVar73 + 1),(FString *)(local_660 + 4),(bool *)pFVar51);
                    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_438.Data.AllocatorInstance.Data);
                    }
                  }
                  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                  }
                }
                uVar83 = (ulonglong)(uVar68 + 1);
                uVar66 = uVar66 + 8;
              } while ((int)(uVar68 + 1) <
                       *(int *)&pFVar84[1].OutputData.TaggedData.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  bVar36 = true;
  goto LAB_149b861fa;
LAB_149b84b06:
  if (*(int *)&param_1[1].AsyncState.bStarted != iVar38) {
    local_859 = 0;
    `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_859);
  }
  if (puVar74 == puVar81) {
    if (bVar67 == 0) goto LAB_149b84bb3;
    *(undefined1 *)((longlong)&param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data + 1)
         = 1;
    goto LAB_149b84c9f;
  }
  this_01 = (UStreamableRenderAsset *)*puVar74;
  if (((this_01 == (UStreamableRenderAsset *)0x0) ||
      (bVar34 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_01,true), bVar34)) ||
     (bVar34 = UStreamableRenderAsset::IsFullyStreamedIn(this_01), !bVar34)) goto LAB_149b84b52;
  puVar74 = puVar74 + 1;
  goto LAB_149b84b06;
LAB_149b84b52:
  if (5 < (byte)LogPCG._0_1_) {
    local_690 = (FName)this_01->_padding_;
    ::FName::ToString(&local_690,&local_638);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
LAB_149b84bb3:
  pTVar31 = PCGSystemSwitches::CVarPCGDebugDrawGeneratedCells.Ref;
  bVar36 = IsInParallelGameThread();
  if (((!bVar36) && (bVar36 = IsInGameThread(), !bVar36)) &&
     (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar36)) {
    pcVar19 = (code *)swi(3);
    uVar35 = (*pcVar19)();
    return (bool)uVar35;
  }
  if (pTVar31->ShadowedValue[0] != false) {
    local_764 = FColor::Yellow.field0_0x0;
    PCGHelpers::DebugDrawGenerationVolume(param_1,(FColor *)&local_764._s_0);
  }
  param_1->bIsPaused = true;
  pFVar59 = FPCGModule::GetPCGModuleChecked();
  pTVar60 = FPCGContext::GetOrCreateHandle(param_1,&local_4f0);
  local_3b0 = pTVar60->Object;
  local_3a8 = (pTVar60->WeakReferenceCount).ReferenceController;
  (pTVar60->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar60->Object = (FPCGContextHandle *)0x0;
  local_3b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`194'::<lambda_1>,0,0>
               ::_vftable_;
  local_3c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l194::<lambda_1>,void>
                 ::Call;
  local_3a0 = 0;
  FPCGModule::ExecuteNextTick(pFVar59,(TFunction<void___cdecl(void)> *)local_3c8);
LAB_149b85cb1:
  if (local_4f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_4f0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar7 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar7 == (atomic<int>)0x1) &&
       (local_4f0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((local_4f0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_4f0.WeakReferenceCount.ReferenceController,1);
    }
  }
  bVar36 = false;
LAB_149b861fa:
  if (bVar88) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar36;
}

// GetDependenciesCrc @ 149b8edd0

void __thiscall
FPCGGenerateLandscapeTexturesElement::GetDependenciesCrc
          (FPCGGenerateLandscapeTexturesElement *this,FPCGGetDependenciesCrcParams *param_1,
          FPCGCrc *param_2)

{
  longlong *plVar1;
  UPCGData *this_00;
  FPCGCrc FVar2;
  FPCGCrc local_res10;
  undefined1 local_res18 [16];
  
  local_res10.Value = 0;
  local_res10._4_4_ = local_res10._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res10);
  if (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) {
    plVar1 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
    this_00 = (UPCGData *)(**(code **)(*plVar1 + 8))(plVar1);
    if (this_00 != (UPCGData *)0x0) {
      FVar2 = UPCGData::GetOrComputeCrc(this_00,SUB81(local_res18,0));
      local_res10.Value =
           local_res10.Value ^
           *(int *)FVar2 + local_res10.Value * 0x40 + (local_res10.Value >> 2) + -0x61c88647;
    }
  }
  FVar2.bValid = local_res10.bValid;
  FVar2._5_3_ = local_res10._5_3_;
  FVar2.Value = local_res10.Value;
  *param_2 = FVar2;
  return;
}

