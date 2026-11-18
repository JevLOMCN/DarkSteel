// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// operator() @ 149217a80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  FParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar5;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar6;
  FName this_01;
  FShaderParametersMetadata *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  TIntVector3<int>_u_0 local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  FString local_78;
  TShaderRefBase<FNiagaraDispatchIndirectArgsGenCS,FShaderMapPointerTable> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  TArrayView<FRHITransitionInfo_const_,int> local_38;
  
  if (*(longlong *)((longlong)this + 8) != 0) {
    pTVar5 = TArrayView<FRHITransitionInfo_const_,int>::
             TArrayView<FRHITransitionInfo_const_,int><TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       (&local_48,
                        (TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)((longlong)this + 0x20));
    local_88.DataPtr = pTVar5->DataPtr;
    local_88.ArrayNum = pTVar5->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar6 = (FShaderType *)FNiagaraDispatchIndirectArgsGenCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_a8,pFVar6,0);
    if (local_a8.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
      ::FName::ToString((FName *)this_01,&local_78);
      FNiagaraDispatchIndirectArgsGenCS::GetStaticType();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNiagaraDispatchIndirectArgsGenCS::GetStaticType();
    pFVar2 = *(FParameters **)((longlong)this + 8);
    local_68.ShaderContent = (FNiagaraDispatchIndirectArgsGenCS *)local_a8.ShaderContent;
    local_68.ShaderMap = local_a8.ShaderMap;
    pFVar7 = FNiagaraDispatchIndirectArgsGenCS::FParameters::FTypeInfo::GetStructMetadata();
    local_b8._s_0.X = 1;
    local_b8._s_0.Y = 1;
    local_b8._s_0.Z = 1;
    FComputeShaderUtils::Dispatch<FNiagaraDispatchIndirectArgsGenCS>
              ((FRHIComputeCommandList *)param_1,&local_68,pFVar7,pFVar2,
               (TIntVector3<int> *)&local_b8._s_0);
    pTVar5 = TArrayView<FRHITransitionInfo_const_,int>::
             TArrayView<FRHITransitionInfo_const_,int><TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                       (&local_38,
                        (TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)((longlong)this + 0x60));
    local_58.DataPtr = pTVar5->DataPtr;
    local_58.ArrayNum = pTVar5->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_58,None);
  }
  iVar1 = *(int *)((longlong)this + 0x18);
  puVar11 = *(undefined8 **)((longlong)this + 0x10);
  puVar10 = puVar11 + (longlong)iVar1 * 8;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) != iVar1) {
      `TCheckedPointerIterator<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar10) break;
    local_res18[0] = *(undefined4 *)(puVar11 + 7);
    local_res20 = puVar11[6];
    UE::Core::Private::Function::CheckCallable((void *)*puVar11);
    pcVar3 = (code *)*puVar11;
    plVar9 = puVar11 + 2;
    if ((longlong *)puVar11[5] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar11[5];
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar8,param_1,&local_res20,local_res18);
    puVar11 = puVar11 + 8;
  }
  return;
}

// AddBufferAccess @ 14921c8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::AddBufferAccess
          (FNDIGpuComputeDispatchArgsGenContext *this,FRDGBuffer *param_1,ERHIAccess param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNDIGpuComputeDispatchArgsGenParameters *pFVar6;
  
  pFVar6 = GetPassParameters(this);
  iVar5 = *(int *)&(pFVar6->BufferAccessArray).field_0x8;
  puVar1 = &(pFVar6->BufferAccessArray).field_0xc;
  if (iVar5 == *(int *)puVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                      (0x810,(ForElementType<FRDGBufferAccess> *)&pFVar6->BufferAccessArray,
                       (int *)puVar1);
  }
  *(int *)&(pFVar6->BufferAccessArray).field_0x8 = iVar5 + 1;
  lVar2 = *(longlong *)&pFVar6->BufferAccessArray;
  *(FRDGBuffer **)(lVar2 + (longlong)iVar5 * 0x10) = param_1;
  *(ERHIAccess *)(lVar2 + (longlong)iVar5 * 0x10 + 8) = param_2;
  if ((((param_2 & ReadOnlyExclusiveMask) != None) && ((param_2 & WritableMask) != None)) ||
     (((param_2 & WriteOnlyExclusiveMask) != None && ((param_2 & ReadableMask) != None)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAccess(InAccess)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x176,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// AddTextureAccess @ 14921c9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::AddTextureAccess
          (FNDIGpuComputeDispatchArgsGenContext *this,FRDGTexture *param_1,ERHIAccess param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FNDIGpuComputeDispatchArgsGenParameters *pFVar3;
  
  pFVar3 = GetPassParameters(this);
  iVar2 = *(int *)&(pFVar3->TextureAccessArray).field_0x8;
  puVar1 = &(pFVar3->TextureAccessArray).field_0xc;
  if (iVar2 == *(int *)puVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_>
                      (0x818,(ForElementType<FRDGTextureAccess> *)&pFVar3->TextureAccessArray,
                       (int *)puVar1);
  }
  *(int *)&(pFVar3->TextureAccessArray).field_0x8 = iVar2 + 1;
  FRDGTextureAccess::FRDGTextureAccess
            ((FRDGTextureAccess *)
             (*(longlong *)&pFVar3->TextureAccessArray + (longlong)iVar2 * 0x18),param_1,param_2);
  return;
}

// CreateIndirect @ 14922a640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TTuple<FRDGBuffer_*,unsigned_int> * __thiscall
FNDIGpuComputeDispatchArgsGenContext::CreateIndirect
          (FNDIGpuComputeDispatchArgsGenContext *this,
          TTuple<FRDGBuffer_*,unsigned_int> *__return_storage_ptr__,
          TIntVector3<unsigned_int> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FSimulationStageMetaData *pFVar4;
  FNiagaraDispatchIndirectInfoCS *pFVar5;
  uint uVar6;
  FNiagaraDispatchIndirectInfoCS *pFVar7;
  FRDGBuffer *pFVar8;
  FRDGBufferDesc local_40;
  
  pFVar8 = this->IndirectBuffer;
  if (pFVar8 == (FRDGBuffer *)0x0) {
    pFVar7 = FMemStackBase::Alloc((FMemStackBase *)(this->_padding_ + 0x18),0x380,4);
    local_40.BytesPerElement = 0x20;
    local_40.NumElements = 0x20;
    local_40.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    this->IndirectCounterGenArgs = pFVar7;
    this->NumIndirectCounterGenArgs = 0;
    local_40.Metadata._0_4_ = 0;
    local_40.Metadata._4_4_ = 0;
    pFVar8 = FRDGBuilder::CreateBuffer
                       ((FRDGBuilder *)this->_padding_,&local_40,L"NiagaraIndirectBuffer",None);
    this->IndirectBuffer = pFVar8;
  }
  (this->SimStageData->DispatchArgs).IndirectBuffer = pFVar8;
  (this->SimStageData->DispatchArgs).IndirectOffset = this->NumIndirectCounterGenArgs << 5;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(FRDGBuffer **)__return_storage_ptr__ = this->IndirectBuffer;
  uVar2 = this->NumIndirectCounterGenArgs;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar2;
  local_40.Usage = (param_1->field0_0x0)._s_0.Z;
  uVar6 = (param_1->field0_0x0)._s_0.Y;
  pFVar4 = this->SimStageData->StageMetaData;
  uVar1 = *(undefined8 *)&(pFVar4->GpuDispatchNumThreads).field0_0x0;
  local_40.Metadata._4_4_ = (pFVar4->GpuDispatchNumThreads).field0_0x0._s_0.Z;
  iVar3 = this->NumIndirectCounterGenArgs;
  local_40._12_4_ = SUB84(uVar1,0);
  local_40.Metadata._0_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  pFVar5 = this->IndirectCounterGenArgs;
  pFVar7 = pFVar5 + iVar3;
  (pFVar7->CounterOffsets).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (pFVar7->CounterOffsets).field0_0x0._s_0.Y = uVar6;
  (pFVar7->CounterOffsets).field0_0x0._s_0.Z = local_40.Usage;
  (pFVar7->ThreadGroupSize).field0_0x0._s_0.X = local_40._12_4_;
  *(ulonglong *)((longlong)&pFVar5[iVar3].ThreadGroupSize.field0_0x0 + 4) =
       CONCAT44(local_40.Metadata._4_4_,local_40.Metadata._0_4_);
  pFVar5[iVar3].IndirectArgsOffset = uVar2;
  this->NumIndirectCounterGenArgs = this->NumIndirectCounterGenArgs + 1;
  if (this->NumIndirectCounterGenArgs == 0x20) {
    FlushPass(this);
  }
  return __return_storage_ptr__;
}

// FlushPass @ 149230940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::FlushPass(FNDIGpuComputeDispatchArgsGenContext *this)

{
  byte *pbVar1;
  int *piVar2;
  uchar *puVar3;
  longlong lVar4;
  FNiagaraDispatchIndirectInfoCS *pFVar5;
  undefined8 uVar6;
  longlong lVar7;
  FRDGBuilder *this_00;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  FNDIGpuComputeDispatchArgsGenParameters *pFVar13;
  FRDGBuffer *pFVar14;
  FRDGBufferSRV *pFVar15;
  FRDGBufferUAV *pFVar16;
  FRDGEventName *pFVar17;
  longlong lVar18;
  ForElementType<FRHITransitionInfo> FVar19;
  ForElementType<FRHITransitionInfo> FVar20;
  uint uVar21;
  undefined1 auStackY_228 [32];
  FRDGBufferUAVDesc local_1e8;
  undefined8 local_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  FRDGBufferSRVDesc local_1c0;
  undefined8 local_198;
  undefined1 local_188 [16];
  FShaderParametersMetadata *local_178;
  FRDGEventName local_170;
  ForElementType<FRHITransitionInfo> local_158;
  int local_120;
  int local_11c;
  ForElementType<FRHITransitionInfo> local_118;
  int local_e0;
  int local_dc;
  <lambda_1> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((this->NumIndirectCounterGenArgs != 0) || ((this->IndirectCallbacks).ArrayNum != 0)) {
    pFVar13 = GetPassParameters(this);
    local_118.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
    local_e0 = 0;
    local_dc = 1;
    local_158.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
    local_120 = 0;
    local_11c = 1;
    if (0 < this->NumIndirectCounterGenArgs) {
      uVar21 = this->NumIndirectCounterGenArgs * 0x1c;
      local_1e8.Buffer =
           (FRDGBuffer *)
           CONCAT44(local_1e8.Buffer._4_4_,VertexBuffer|ShaderResource|UnorderedAccess|Static);
      local_1e8._padding_._0_2_ = 4;
      local_1e8._padding_._2_1_ = 0;
      local_1e8._padding_._3_1_ = 0;
      local_1d8 = 0;
      local_178 = (FShaderParametersMetadata *)0x0;
      local_1e8._padding_._4_4_ = uVar21 >> 2;
      local_188._4_4_ = local_1e8._padding_._4_4_;
      local_188._0_4_ = 4;
      local_188._8_8_ = local_1e8.Buffer;
      pFVar14 = FRDGBuilder::CreateBuffer
                          ((FRDGBuilder *)this->_padding_,(FRDGBufferDesc *)local_188,
                           L"NiagaraIndirectGenArgs",None);
      lVar4 = this->_padding_;
      pFVar5 = this->IndirectCounterGenArgs;
      FRDGUserValidation::ValidateUploadBuffer
                ((FRDGUserValidation *)(lVar4 + 0x700),pFVar14,pFVar5,(ulonglong)uVar21);
      iVar12 = *(int *)(lVar4 + 0x5c0);
      if (iVar12 == *(int *)(lVar4 + 0x5c4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                           (0x10e0,(ForElementType<FRDGBuilder::FUploadedBuffer> *)(lVar4 + 0x5b8),
                            (int *)(lVar4 + 0x5c4));
      }
      *(int *)(lVar4 + 0x5c0) = iVar12 + 1;
      lVar18 = (longlong)iVar12 * 0xe0;
      lVar4 = *(longlong *)(lVar4 + 0x5b8);
      *(undefined2 *)(lVar18 + lVar4) = 0;
      *(FRDGBuffer **)(lVar18 + 8 + lVar4) = pFVar14;
      *(FNiagaraDispatchIndirectInfoCS **)(lVar18 + 0x10 + lVar4) = pFVar5;
      *(ulonglong *)(lVar18 + 0x18 + lVar4) = (ulonglong)uVar21;
      *(undefined8 *)(lVar18 + 0x20 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0x48 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0x50 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0x78 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0x80 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0xa8 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0xb0 + lVar4) = 0;
      *(undefined8 *)(lVar18 + 0xd8 + lVar4) = 0;
      pbVar1 = (byte *)((longlong)&pFVar14->_padding_ + 1);
      *pbVar1 = *pbVar1 | 0x80;
      lVar4 = this->_padding_;
      bVar11 = IsInParallelRenderingThread();
      if (!bVar11) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(int *)(lVar4 + 0x54) < *(int *)(lVar4 + 0x50)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,&local_118,&local_dc);
      }
      lVar18 = (longlong)local_e0;
      FVar20 = (ForElementType<FRHITransitionInfo>)&local_118;
      if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar20 = local_118.SecondaryData;
      }
      uVar6 = *(undefined8 *)(lVar4 + 0x68);
      local_e0 = local_e0 + 1;
      *(undefined4 *)((longlong)FVar20 + lVar18 * 0x30) = 0xffffffff;
      ((uchar *)((longlong)FVar20 + 4) + lVar18 * 0x30)[0] = 0xff;
      ((uchar *)((longlong)FVar20 + 4) + lVar18 * 0x30)[1] = 0xff;
      *(undefined8 *)((uchar *)((longlong)FVar20 + 8) + lVar18 * 0x30) = uVar6;
      ((uchar *)((longlong)FVar20 + 0x10))[lVar18 * 0x30] = '\x02';
      puVar3 = (uchar *)((longlong)FVar20 + 0x14) + lVar18 * 0x30;
      puVar3[0] = '\0';
      puVar3[1] = '\x04';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      puVar3 = (uchar *)((longlong)FVar20 + 0x18) + lVar18 * 0x30;
      puVar3[0] = '\x10';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      ((uchar *)((longlong)FVar20 + 0x1c))[lVar18 * 0x30] = '\0';
      ((uchar *)((longlong)FVar20 + 0x28))[lVar18 * 0x30] = '\0';
      if (local_120 == local_11c) {
        local_120 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                              (0x830,&local_158,&local_11c);
      }
      local_1c0._padding_._0_4_ = CONCAT31(local_1c0._padding_._1_3_,0x1c);
      lVar18 = (longlong)local_120;
      local_1c0._padding_._0_4_ = 0xffffffff;
      FVar20 = (ForElementType<FRHITransitionInfo>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar20 = local_158.SecondaryData;
      }
      local_120 = local_120 + 1;
      *(undefined8 *)((uchar *)((longlong)FVar20 + 8) + lVar18 * 0x30) =
           *(undefined8 *)(lVar4 + 0x68);
      *(undefined4 *)((longlong)FVar20 + lVar18 * 0x30) = 0xffffffff;
      ((uchar *)((longlong)FVar20 + 4) + lVar18 * 0x30)[0] = 0xff;
      ((uchar *)((longlong)FVar20 + 4) + lVar18 * 0x30)[1] = 0xff;
      ((uchar *)((longlong)FVar20 + 0x10))[lVar18 * 0x30] = '\x02';
      puVar3 = (uchar *)((longlong)FVar20 + 0x14) + lVar18 * 0x30;
      puVar3[0] = '\x10';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      puVar3 = (uchar *)((longlong)FVar20 + 0x18) + lVar18 * 0x30;
      puVar3[0] = '\0';
      puVar3[1] = '\x04';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      ((uchar *)((longlong)FVar20 + 0x1c))[lVar18 * 0x30] = '\0';
      ((uchar *)((longlong)FVar20 + 0x28))[lVar18 * 0x30] = '\0';
      lVar18 = this->_padding_;
      local_1c0._padding_._4_4_ = 0;
      local_1c0._padding_ = 0;
      local_1c0.Buffer = pFVar14;
      FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)(lVar18 + 0x700),&local_1c0);
      pFVar14 = local_1c0.Buffer;
      pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(lVar18 + 0x18),0x50,8);
      lVar7 = pFVar14->_padding_;
      *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
      pFVar15->_padding_ = lVar7;
      pFVar15->_padding_ = 0;
      *(undefined1 *)&pFVar15->_padding_ = 3;
      pFVar15->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar15->Desc)._padding_ =
           CONCAT44(local_1c0._padding_._4_4_,(undefined4)local_1c0._padding_);
      (pFVar15->Desc)._padding_ =
           CONCAT44(local_1c0._padding_._4_4_,(undefined4)local_1c0._padding_);
      (pFVar15->Desc)._padding_ = local_1c0._padding_;
      (pFVar15->Desc).Buffer = local_1c0.Buffer;
      iVar12 = *(int *)(lVar18 + 0x1e0);
      if (iVar12 == *(int *)(lVar18 + 0x1e4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)(lVar18 + 0x1d8),
                            (int *)(lVar18 + 0x1e4));
      }
      *(int *)(lVar18 + 0x1e0) = iVar12 + 1;
      ((ForElementType<FRDGView_*> *)(lVar18 + 0x1d8))->Data[iVar12] = (FRDGView *)pFVar15;
      *(int *)((longlong)&pFVar15->_padding_ + 4) = *(int *)(lVar18 + 0x1e0) + -1;
      FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)(lVar18 + 0x700),pFVar15);
      (pFVar13->IndirectArgsGenParameters).DispatchInfos = pFVar15;
      (pFVar13->IndirectArgsGenParameters).NumDispatchInfos = this->NumIndirectCounterGenArgs;
      uVar9 = GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z;
      local_1d0 = GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X;
      local_198 = CONCAT44(GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y,
                           GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X);
      if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar10 = local_198._4_4_;
      if (local_198 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uStack_1cc = uVar10;
      if ((int)uVar9 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(ulonglong *)&(pFVar13->IndirectArgsGenParameters).MaxGroupsPerDimension.field0_0x0 =
           CONCAT44(uStack_1cc,local_1d0);
      (pFVar13->IndirectArgsGenParameters).MaxGroupsPerDimension.field0_0x0._s_0.Z = uVar9;
      (pFVar13->IndirectArgsGenParameters).InstanceCounts =
           *(FRHIShaderResourceView **)(lVar4 + 0x78);
      local_1e8.Buffer = this->IndirectBuffer;
      local_1c8 = uVar9;
      lVar4 = this->_padding_;
      local_1e8._padding_._0_2_ = 0x1c;
      local_1e8._padding_._2_1_ = 0;
      FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar4 + 0x700),&local_1e8);
      pFVar14 = local_1e8.Buffer;
      pFVar16 = FMemStackBase::Alloc((FMemStackBase *)(lVar4 + 0x18),0x48,8);
      lVar18 = pFVar14->_padding_;
      *(byte *)&pFVar16->_padding_ = (byte)pFVar16->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffffffffffff;
      pFVar16->_padding_ = lVar18;
      pFVar16->_padding_ = 0;
      *(undefined1 *)&pFVar16->_padding_ = 2;
      *(undefined1 *)&pFVar16->_padding_ = 0;
      pFVar16->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      (pFVar16->Desc)._padding_ =
           CONCAT44(local_1e8._padding_._4_4_,
                    CONCAT13(local_1e8._padding_._3_1_,
                             CONCAT12(local_1e8._padding_._2_1_,(undefined2)local_1e8._padding_)));
      (pFVar16->Desc).Buffer = local_1e8.Buffer;
      iVar12 = *(int *)(lVar4 + 0x1e0);
      if (iVar12 == *(int *)(lVar4 + 0x1e4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)(lVar4 + 0x1d8),
                            (int *)(lVar4 + 0x1e4));
      }
      *(int *)(lVar4 + 0x1e0) = iVar12 + 1;
      ((ForElementType<FRDGView_*> *)(lVar4 + 0x1d8))->Data[iVar12] = (FRDGView *)pFVar16;
      *(int *)((longlong)&pFVar16->_padding_ + 4) = *(int *)(lVar4 + 0x1e0) + -1;
      FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar4 + 0x700),pFVar16);
      (pFVar13->IndirectArgsGenParameters).RWDispatchIndirectArgs = pFVar16;
    }
    lVar4 = this->_padding_;
    bVar11 = IsInParallelRenderingThread();
    if (!bVar11) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (*(int *)(lVar4 + 0x54) < *(int *)(lVar4 + 0x50)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    this_00 = (FRDGBuilder *)this->_padding_;
    local_d8.PassParameters = GetPassParameters(this);
    iVar12 = local_e0;
    piVar2 = &(this->IndirectCallbacks).ArrayMax;
    local_d8.CreateCallbacks.AllocatorInstance.Data =
         (this->IndirectCallbacks).AllocatorInstance.Data;
    (this->IndirectCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.CreateCallbacks.ArrayNum = (this->IndirectCallbacks).ArrayNum;
    local_d8.CreateCallbacks.ArrayMax = *piVar2;
    FVar20 = (ForElementType<FRHITransitionInfo>)&local_118;
    if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FVar20 = local_118.SecondaryData;
    }
    (this->IndirectCallbacks).ArrayNum = 0;
    *piVar2 = 0;
    local_d8.TransitionsBefore.AllocatorInstance.SecondaryData =
         (ForElementType<FRHITransitionInfo>)0x0;
    local_d8.TransitionsBefore.ArrayNum = local_e0;
    local_d8.IndirectArgsGenParameters = &pFVar13->IndirectArgsGenParameters;
    if (local_e0 == 0) {
      local_d8.TransitionsBefore.ArrayMax = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,local_e0,0,&local_d8.TransitionsBefore.AllocatorInstance,local_e0,
                 &local_d8.TransitionsBefore.ArrayMax);
      FVar19 = (ForElementType<FRHITransitionInfo>)&local_d8.TransitionsBefore;
      if (local_d8.TransitionsBefore.AllocatorInstance.SecondaryData !=
          (ForElementType<FRHITransitionInfo>)0x0) {
        FVar19 = local_d8.TransitionsBefore.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>
                ((void *)FVar19,(FRHITransitionInfo *)FVar20,iVar12);
    }
    iVar12 = local_120;
    local_d8.TransitionsAfter.AllocatorInstance.SecondaryData =
         (ForElementType<FRHITransitionInfo>)0x0;
    FVar20 = (ForElementType<FRHITransitionInfo>)&local_158;
    if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FVar20 = local_158.SecondaryData;
    }
    local_d8.TransitionsAfter.ArrayNum = local_120;
    if (local_120 == 0) {
      local_d8.TransitionsAfter.ArrayMax = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,local_120,0,&local_d8.TransitionsAfter.AllocatorInstance,local_120,
                 &local_d8.TransitionsAfter.ArrayMax);
      FVar19 = (ForElementType<FRHITransitionInfo>)&local_d8.TransitionsAfter;
      if (local_d8.TransitionsAfter.AllocatorInstance.SecondaryData !=
          (ForElementType<FRHITransitionInfo>)0x0) {
        FVar19 = local_d8.TransitionsAfter.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>
                ((void *)FVar19,(FRHITransitionInfo *)FVar20,iVar12);
    }
    pFVar13 = GetPassParameters(this);
    pFVar17 = FRDGEventName::FRDGEventName(&local_170,1,L"Niagara::ExecuteTicks::DispatchGroupPre");
    FRDGBuilder::
    AddPass<FNDIGpuComputeDispatchArgsGenParameters,_FNDIGpuComputeDispatchArgsGenContext::FlushPass_::__l2::<lambda_1>_>
              (this_00,pFVar17,pFVar13,NeverCull|Compute,&local_d8);
    if (local_170.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_170.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_d8.TransitionsAfter.AllocatorInstance.SecondaryData !=
        (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_d8.TransitionsAfter.AllocatorInstance.SecondaryData);
    }
    if (local_d8.TransitionsBefore.AllocatorInstance.SecondaryData !=
        (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_d8.TransitionsBefore.AllocatorInstance.SecondaryData);
    }
    DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
              ((TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
                *)local_d8.CreateCallbacks.AllocatorInstance.Data,local_d8.CreateCallbacks.ArrayNum)
    ;
    if ((TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
         *)local_d8.CreateCallbacks.AllocatorInstance.Data !=
        (TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
         *)0x0) {
      FMemory::Free(local_d8.CreateCallbacks.AllocatorInstance.Data);
    }
    this->IndirectBuffer = (FRDGBuffer *)0x0;
    this->IndirectCounterGenArgs = (FNiagaraDispatchIndirectInfoCS *)0x0;
    this->NumIndirectCounterGenArgs = 0;
    DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
              ((TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
                *)(this->IndirectCallbacks).AllocatorInstance.Data,
               (this->IndirectCallbacks).ArrayNum);
    (this->IndirectCallbacks).ArrayNum = 0;
    if ((this->IndirectCallbacks).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->IndirectCallbacks).AllocatorInstance,0,piVar2);
    }
    this->PassParameters = (FNDIGpuComputeDispatchArgsGenParameters *)0x0;
    if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_158.SecondaryData);
    }
    if (local_118.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_118.SecondaryData);
    }
  }
  return;
}

// GetPassParameters @ 149236a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNDIGpuComputeDispatchArgsGenParameters * __thiscall
FNDIGpuComputeDispatchArgsGenContext::GetPassParameters(FNDIGpuComputeDispatchArgsGenContext *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNDIGpuComputeDispatchArgsGenParameters *pFVar6;
  undefined8 *local_18 [2];
  
  pFVar6 = this->PassParameters;
  if (pFVar6 == (FNDIGpuComputeDispatchArgsGenParameters *)0x0) {
    lVar1 = this->_padding_;
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)(lVar1 + 0x18),0x60,0x10);
    if (puVar5 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FNDIGpuComputeDispatchArgsGenParameters *)(*pcVar2)();
        return pFVar6;
      }
    }
    else {
      *puVar5 = &___7__TObject_VFNDIGpuComputeDispatchArgsGenParameters___FRDGAllocator__6B_;
      puVar5[2] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
    }
    local_18[0] = puVar5;
    if ((*(undefined8 ***)(lVar1 + 0x40) <= local_18) &&
       (local_18 < *(undefined8 ***)(lVar1 + 0x40) + *(int *)(lVar1 + 0x4c))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FNDIGpuComputeDispatchArgsGenParameters *)(*pcVar2)();
        return pFVar6;
      }
    }
    iVar4 = *(int *)(lVar1 + 0x48);
    if (iVar4 == *(int *)(lVar1 + 0x4c)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar1 + 0x40),(int *)(lVar1 + 0x4c));
    }
    *(int *)(lVar1 + 0x48) = iVar4 + 1;
    *(undefined8 **)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar4 * 8) = local_18[0];
    pFVar6 = (FNDIGpuComputeDispatchArgsGenParameters *)(puVar5 + 2);
    this->PassParameters = pFVar6;
  }
  return pFVar6;
}

// SetDirect @ 14924d220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::SetDirect
          (FNDIGpuComputeDispatchArgsGenContext *this,TIntVector3<int> *param_1,uint param_2)

{
  FNiagaraSimStageData *pFVar1;
  
  pFVar1 = this->SimStageData;
  *(undefined8 *)&(pFVar1->DispatchArgs).ElementCount.field0_0x0 =
       *(undefined8 *)&param_1->field0_0x0;
  (pFVar1->DispatchArgs).ElementCount.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->SimStageData->DispatchArgs).GpuElementCountOffset = param_2;
  return;
}

// SetIndirect @ 14924d390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::SetIndirect
          (FNDIGpuComputeDispatchArgsGenContext *this,FRDGBuffer *param_1,uint param_2,
          TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)> *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  (this->SimStageData->DispatchArgs).IndirectBuffer = param_1;
  (this->SimStageData->DispatchArgs).IndirectOffset = param_2;
  piVar1 = &(this->IndirectCallbacks).ArrayMax;
  iVar10 = (this->IndirectCallbacks).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1040,&(this->IndirectCallbacks).AllocatorInstance,piVar1);
  }
  (this->IndirectCallbacks).ArrayNum = iVar10 + 1;
  pFVar13 = (this->IndirectCallbacks).AllocatorInstance.Data + (longlong)iVar10 * 0x40;
  DefaultConstructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
            (pFVar13,1);
  local_58 = *(longlong *)param_3;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar11 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar11)(puVar11,&local_48);
  }
  lVar8 = *(longlong *)pFVar13;
  lVar9 = *(longlong *)(pFVar13 + 8);
  uVar2 = *(undefined4 *)(pFVar13 + 0x10);
  uVar3 = *(undefined4 *)(pFVar13 + 0x14);
  uVar4 = *(undefined4 *)(pFVar13 + 0x18);
  uVar5 = *(undefined4 *)(pFVar13 + 0x1c);
  lVar6 = *(longlong *)(pFVar13 + 0x20);
  plVar7 = *(longlong **)(pFVar13 + 0x28);
  *(longlong *)pFVar13 = local_58;
  *(longlong *)(pFVar13 + 8) = lStack_50;
  *(undefined4 *)(pFVar13 + 0x10) = (undefined4)local_48;
  *(undefined4 *)(pFVar13 + 0x14) = local_48._4_4_;
  *(undefined4 *)(pFVar13 + 0x18) = uStack_40;
  *(undefined4 *)(pFVar13 + 0x1c) = uStack_3c;
  *(undefined4 *)(pFVar13 + 0x20) = (undefined4)local_38;
  *(undefined4 *)(pFVar13 + 0x24) = local_38._4_4_;
  *(undefined4 *)(pFVar13 + 0x28) = (undefined4)uStack_30;
  *(undefined4 *)(pFVar13 + 0x2c) = uStack_30._4_4_;
  local_48._0_4_ = uVar2;
  local_48._4_4_ = uVar3;
  uStack_40 = uVar4;
  uStack_3c = uVar5;
  local_38 = lVar6;
  uStack_30 = plVar7;
  if (lVar8 != 0) {
    plVar12 = &local_48;
    if (plVar7 != (longlong *)0x0) {
      plVar12 = plVar7;
    }
    local_58 = lVar8;
    lStack_50 = lVar9;
    (**(code **)(*plVar12 + 0x10))();
  }
  *(uint *)(pFVar13 + 0x38) = param_2;
  *(FRDGBuffer **)(pFVar13 + 0x30) = param_1;
  return;
}

// SetIndirect @ 14924d4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIGpuComputeDispatchArgsGenContext::SetIndirect
          (FNDIGpuComputeDispatchArgsGenContext *this,FRDGBuffer *param_1,uint param_2)

{
  (this->SimStageData->DispatchArgs).IndirectBuffer = param_1;
  (this->SimStageData->DispatchArgs).IndirectOffset = param_2;
  return;
}

