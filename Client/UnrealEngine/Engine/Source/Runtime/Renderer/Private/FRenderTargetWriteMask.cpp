// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// operator() @ 14540b180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FRenderTargetWriteMask::Decode'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  int iVar1;
  int iVar2;
  FRDGResource *this_00;
  FRHIResource *pFVar3;
  FParameters *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FRHIComputeShader *pFVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uStack_60;
  undefined1 auStack_58 [48];
  uint local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  puVar10 = auStack_58;
  local_18 = __security_cookie.value ^ (ulonglong)local_28;
  this_00 = (FRDGResource *)**(undefined8 **)((longlong)this + 0x10);
  uStack_60 = 0x14540b1ba;
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = this_00->ResourceRHI;
  local_20 = 0;
  local_28[0] = 0;
  uStack_60 = 0x14540b1d8;
  (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,&local_20,local_28);
  if (local_28[0] == 0) {
    uStack_60 = 0x14540b1fe;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlatformDataSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererUtils.cpp"
                       ,0xb2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_20 == 0) {
    uVar9 = (ulonglong)local_28[0] + 0xf;
    if (uVar9 <= local_28[0]) {
      uVar9 = 0xffffffffffffff0;
    }
    uStack_60 = 0x14540b22d;
    lVar6 = -(uVar9 & 0xfffffffffffffff0);
    puVar10 = auStack_58 + lVar6;
    local_20 = (longlong)local_28 + lVar6;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x50);
    *(undefined8 *)(auStack_58 + lVar6 + -8) = 0x14540b24a;
    (*pcVar5)(pFVar3,&local_20,local_28);
  }
  *(undefined8 *)(puVar10 + -8) = 0x14540b252;
  pFVar8 = TShaderRefBase<FRTWriteMaskDecodeCS,FShaderMapPointerTable>::GetComputeShader(this);
  *(undefined8 *)(puVar10 + -8) = 0x14540b25d;
  SetComputePipelineState(param_2,pFVar8);
  pFVar4 = *(FParameters **)((longlong)this + 0x10);
  *(undefined8 *)(puVar10 + -8) = 0x14540b269;
  pFVar8 = TShaderRefBase<FRTWriteMaskDecodeCS,FShaderMapPointerTable>::GetComputeShader(this);
  *(uint **)(puVar10 + 0x28) = local_28;
  *(longlong **)(puVar10 + 0x20) = &local_20;
  *(undefined8 *)(puVar10 + -8) = 0x14540b28c;
  SetShaderParametersMixed<FRHIComputeCommandList,FRTWriteMaskDecodeCS,FRHIComputeShader,void_*_&,unsigned_int_&>
            (param_2,this,pFVar8,pFVar4,*(void ***)(puVar10 + 0x20),*(uint **)(puVar10 + 0x28));
  iVar1 = *(int *)((longlong)this + 0x24);
  iVar2 = *(int *)((longlong)this + 0x20);
  *(undefined8 *)(puVar10 + -8) = 0x14540b2af;
  FRHIComputeCommandList::DispatchComputeShader(param_2,iVar2 + 7U >> 3,iVar1 + 7U >> 3,1);
  *(undefined8 *)(puVar10 + -8) = 0x14540b2bb;
  return;
}

// Decode @ 145427f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
FRenderTargetWriteMask::Decode
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,
          TArrayView<FRDGTexture_*_const,int> *param_3,FRDGTexture **param_4,
          ETextureCreateFlags param_5,wchar_t *param_6)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  FRDGBuilder *pFVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FRDGTexture *pFVar11;
  undefined8 *puVar12;
  FRDGTextureUAV *pFVar13;
  FRDGTextureSRV *pFVar14;
  FShaderType *pFVar15;
  FName this;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar16;
  wchar_t *pwVar17;
  FRDGPass *this_01;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStackY_1c8 [32];
  FRDGTextureSRVDesc local_170;
  FRDGTexture *local_158;
  undefined8 *local_150;
  int local_148;
  int iStack_144;
  longlong *local_140;
  int local_138;
  int iStack_134;
  FGlobalShaderMap *local_130;
  FRDGBuilder *local_128;
  FMemStackBase *local_120;
  FRDGTextureUAVDesc local_118;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_100;
  FRDGParameterStruct local_f0;
  undefined1 local_d8 [8];
  FString local_d0;
  FRDGEventName local_c0;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar3 = param_3->ArrayNum;
  uVar19 = (ulonglong)GMaxRHIShaderPlatform;
  local_130 = param_2;
  local_128 = param_1;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x160,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].bSupportsRenderTargetWriteMask == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHISupportsRenderTargetWriteMask(GMaxRHIShaderPlatform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererUtils.cpp"
                         ,0x87,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((uVar3 - 1 & 0xfffffffd) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FRTWriteMaskDecodeCS::IsSupported(NumRenderTargets)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererUtils.cpp"
                         ,0x88,
                         L"FRenderTargetWriteMask::Decode does not currently support decoding %d render targets."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_7c = 0x10001;
  local_78 = 0x101;
  local_158 = *param_3->DataPtr;
  local_a8._8_8_ = FClearValueBinding::None._0_8_;
  local_a8._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_74 = 0xff00;
  iVar8 = *(int *)&(local_158->Desc).field_0x24 + 7;
  iVar9 = *(int *)&(local_158->Desc).field_0x28 + 7;
  local_148 = (int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3;
  local_88 = 0;
  iStack_144 = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
  pFVar18 = (FScriptContainerElement *)CONCAT44(iStack_144,local_148);
  local_76 = 0;
  local_a8._0_8_ = param_5 | (UAV|ShaderResource|RenderTargetable);
  local_68 = (void *)0x0;
  local_90 = FClearValueBinding::None.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_60 = 0;
  local_84._4_4_ = iStack_144;
  local_84._0_4_ = local_148;
  local_75 = 0x20;
  if (uVar3 < 3) {
    local_75 = 0x39;
  }
  local_5c = 1;
  local_138 = local_148;
  iStack_134 = iStack_144;
  pFVar11 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_a8,param_6,None);
  local_120 = (FMemStackBase *)&param_1->_padding_;
  *param_4 = pFVar11;
  puVar12 = FMemStackBase::Alloc(local_120,0x40,0x10);
  if (puVar12 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    *puVar12 = &___7__TObject_VFParameters_FRTWriteMaskDecodeCS___FRDGAllocator__6B_;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
  }
  local_150 = puVar12;
  if ((((undefined8 **)param_1->_padding_ <= &local_150) &&
      (&local_150 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  local_140 = puVar12 + 2;
  *(int *)&param_1->_padding_ = iVar8 + 1;
  local_118._padding_._1_1_ = 0;
  local_118._padding_._2_4_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_150;
  *local_140 = (longlong)local_158;
  local_118.Texture = *param_4;
  local_118._padding_._6_1_ = 0;
  local_118._padding_._0_1_ = 0;
  local_118._padding_._0_1_ = ((local_118.Texture)->Desc).field_0x34;
  pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_118,None);
  puVar12[7] = pFVar13;
  uVar20 = 0;
  if (uVar3 != 0) {
    local_158 = (FRDGTexture *)&param_1->UserValidation;
    puVar12 = puVar12 + 3;
    do {
      uVar10 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_170.Texture = param_3->DataPtr[(int)uVar20];
      local_170._padding_._0_2_ = 0;
      local_170._padding_._6_2_ = 0;
      local_170._padding_._2_1_ = '\0';
      local_170._padding_._2_4_ = (uint)(byte)((local_170.Texture)->Desc).field_0x30;
      cVar2 = ((local_170.Texture)->Desc).field_0x32;
      if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
        local_170._padding_._6_2_ = *(undefined2 *)&((local_170.Texture)->Desc).field_0x2e;
      }
      local_170._padding_._0_1_ = 6;
      FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)local_158,&local_170);
      pFVar11 = local_170.Texture;
      pFVar14 = FMemStackBase::Alloc(local_120,0x48,8);
      pFVar14->_padding_ = pFVar11->_padding_;
      *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
      *(undefined1 *)&pFVar14->_padding_ = 1;
      *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_170._padding_;
      *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_170._padding_._1_1_;
      *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_170._padding_._2_1_;
      *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 3) = local_170._padding_._3_1_;
      *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 4) = local_170._padding_._4_2_;
      *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 6) = local_170._padding_._6_2_;
      *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = 0;
      *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_170._padding_;
      *(char *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_170._padding_._2_1_;
      if (local_170._padding_._2_1_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_170._padding_._1_1_;
      }
      (pFVar14->Desc).Texture = local_170.Texture;
      iVar8 = (param_1->Views).Array.ArrayNum;
      if (iVar8 == (param_1->Views).Array.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                          (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                           &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar8 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar14;
      *(int *)((longlong)&pFVar14->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)local_158,pFVar14);
      uVar20 = uVar20 + 1;
      *puVar12 = pFVar14;
      puVar12 = puVar12 + 1;
    } while (uVar20 < uVar3);
    pFVar18 = (FScriptContainerElement *)CONCAT44(iStack_144,local_148);
  }
  iVar8 = uVar3 - 1;
  if (((3 < iVar8) || (iVar8 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar15 = (FShaderType *)FRTWriteMaskDecodeCS::GetStaticType();
  FGlobalShaderMap::GetShader(local_130,&local_100,pFVar15,iVar8);
  if (local_100.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d8);
    ::FName::ToString((FName *)this,&local_d0);
    FRTWriteMaskDecodeCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FRTWriteMaskDecodeCS::GetStaticType();
  this_00 = FRDGEventName::FRDGEventName(&local_c0,L"DecodeWriteMask[%d]");
  pFVar16 = FRTWriteMaskDecodeCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar5 = local_128;
  FRDGUserValidation::ValidateAddPass(&local_128->UserValidation,local_140,pFVar16,this_00,Compute);
  FRDGBuilder::FlushAccessModeQueue(pFVar5);
  pwVar17 = FRDGEventName::GetTCHAR(this_00);
  EVar7 = FRDGBuilder::OverridePassFlags(pFVar5,pwVar17,Compute);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&pFVar5->_padding_,0x1b0,8);
  local_f0.Contents = (uchar *)local_140;
  if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_f0.Layout.Reference = (pFVar16->Layout).Reference;
  if (local_f0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f0.Layout.Reference);
  }
  local_f0.Metadata = pFVar16;
  FRDGPass::FRDGPass(this_01,this_00,&local_f0,EVar7,Async);
  pFVar5 = local_128;
  this_01->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRTWriteMaskDecodeCS::FParameters,`FRenderTargetWriteMask::Decode'::`2'::<lambda_1>_>
        ::_vftable_;
  this_01[1]._padding_ = (longlong)local_100.ShaderContent;
  this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_100.ShaderMap;
  *(longlong **)&this_01[1].FullPathIfDebug.Data.ArrayNum = local_140;
  this_01[1].Name.EventFormat = (wchar_t *)local_130;
  this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar18;
  *(longlong **)&this_01[1].Name.FormattedEventName.Data.ArrayNum = local_140;
  FRDGBuilder::ClobberPassOutputs(local_128,this_01);
  iVar8 = (pFVar5->Passes).Array.ArrayNum;
  piVar1 = &(pFVar5->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&pFVar5->Passes,piVar1);
  }
  (pFVar5->Passes).Array.ArrayNum = iVar8 + 1;
  (pFVar5->Passes).Array.AllocatorInstance.Data[iVar8] = this_01;
  (this_01->Handle).Index = (pFVar5->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(pFVar5,this_01);
  if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// Decode @ 145428730

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
FRenderTargetWriteMask::Decode
          (FRHICommandListImmediate *param_1,FGlobalShaderMap *param_2,
          TArrayView<IPooledRenderTarget_*_const,int> *param_3,
          TRefCountPtr<IPooledRenderTarget> *param_4,ETextureCreateFlags param_5,wchar_t *param_6)

{
  IPooledRenderTarget **ppIVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FLowLevelMemTracker *this;
  FPageAllocator *this_00;
  IPooledRenderTarget **ppIVar7;
  ForElementType<FRDGTexture_*> FVar8;
  FRDGTexture **ppFVar9;
  int *piVar10;
  undefined1 auStackY_8d8 [32];
  ForElementType<FRDGTexture_*> local_888;
  int local_880;
  int local_87c;
  FRDGTexture *local_878;
  TRefCountPtr<IPooledRenderTarget> local_870;
  FRDGTexture *local_868;
  FRDGEventName local_860;
  FRDGTexture **local_848;
  int iStack_840;
  undefined4 uStack_83c;
  TArrayView<FRDGTexture_*_const,int> local_838;
  FRDGBuilder local_828;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  local_860.EventFormat = L"";
  local_860.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_860.FormattedEventName.Data.ArrayNum = 0;
  local_860.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_828,param_1,&local_860,None,GMaxRHIShaderPlatform);
  local_888.Data = (FRDGTexture **)0x0;
  local_87c = 0;
  uVar2 = param_3->ArrayNum;
  local_880 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
              (8,8,uVar2,&local_888,0,&local_87c);
  }
  ppIVar7 = param_3->DataPtr;
  ppIVar1 = ppIVar7 + (int)uVar2;
  FVar8.Data = local_888.Data;
  iVar5 = local_880;
  while( true ) {
    if (ppIVar7 == ppIVar1) {
      local_868 = (FRDGTexture *)0x0;
      local_848 = FVar8.Data;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_838._12_4_ = uStack_83c;
      local_838.ArrayNum = iVar5;
      local_838.DataPtr = local_848;
      iStack_840 = iVar5;
      Decode(&local_828,param_2,&local_838,&local_868,param_5,param_6);
      FRDGBuilder::QueueTextureExtraction(&local_828,local_868,param_4,None);
      FRDGBuilder::Execute(&local_828);
      if (FVar8.Data != (FRDGTexture **)0x0) {
        ppFVar9 = FVar8.Data + -1;
        MemoryTrace_Free((ulong64)ppFVar9,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this,Default,ppFVar9,FMalloc,true);
        }
        piVar10 = (int *)((longlong)ppFVar9 - (ulonglong)*(uint *)ppFVar9);
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          lVar6 = *(longlong *)(piVar10 + 0x10);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar10,0,0);
          if (lVar6 - (longlong)piVar10 == 0x10000) {
            this_00 = FPageAllocator::Get();
            FPageAllocator::Free(this_00,piVar10);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar10);
          }
        }
      }
      FRDGBuilder::~FRDGBuilder(&local_828);
      return;
    }
    local_870.Reference = *ppIVar7;
    if (local_870.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_870.Reference)->_padding_ + 0x30))();
    }
    local_878 = FRDGBuilder::RegisterExternalTexture(&local_828,&local_870,None);
    if (((FVar8.Data <= &local_878) && (&local_878 < FVar8.Data + local_87c)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    if (iVar5 == local_87c) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
                        (0x808,&local_888,&local_87c);
      FVar8.Data = local_888.Data;
    }
    lVar6 = (longlong)iVar5;
    iVar5 = iVar5 + 1;
    FVar8.Data[lVar6] = local_878;
    local_880 = iVar5;
    if (local_870.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_870.Reference)->_padding_ + 0x38))();
    }
    ppIVar7 = ppIVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

