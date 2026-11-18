// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// GetEmptyRDGUAVFromPool @ 1492a2090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FNiagaraEmptyUAVPool::GetEmptyRDGUAVFromPool
          (FNiagaraEmptyUAVPool *this,FRDGBuilder *param_1,EPixelFormat param_2)

{
  TArray<FRDGBufferUAV_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRDGUserValidation *this_00;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  EPixelFormat EVar7;
  bool bVar8;
  int iVar9;
  FRDGBufferUAV *pFVar10;
  FBufferRDGUAVPool *pFVar11;
  FRDGBuffer *pFVar12;
  uint uVar13;
  EPixelFormat local_res18 [8];
  FMemStackBase *local_res20;
  FRDGBufferUAV *local_88;
  FRDGBufferUAVDesc local_80;
  FRDGBufferDesc local_70;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_res18[0] = param_2;
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0xb0,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferUAV *)(*pcVar6)();
      return pFVar10;
    }
  }
  if (this->RDGUAVAccessCounter == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RDGUAVAccessCounter != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0xb1,
                       L"Accessing Niagara\'s RDG UAV Pool while not within a scope, this could result in a memory leak!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferUAV *)(*pcVar6)();
      return pFVar10;
    }
  }
  if ((GPixelFormats[local_res18[0]].Capabilities & TypedUAVStore) == None) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::PixelFormat::HasCapabilities(Format, EPixelFormatCapabilities::TypedUAVStore)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0xb2,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferUAV *)(*pcVar6)();
      return pFVar10;
    }
  }
  pFVar11 = TMapBase<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
            ::FindOrAddImpl<enum_EPixelFormat_const_&>
                      (&this->BufferRDGUAVPool,(uint)local_res18[0],local_res18);
  EVar7 = local_res18[0];
  pTVar1 = &pFVar11->UAVs;
  if (pFVar11->NextFreeIndex == (pFVar11->UAVs).ArrayNum) {
    uStack_50 = 0x4109;
    uStack_54 = 1;
    local_48 = 0;
    this_00 = &param_1->UserValidation;
    local_70.Metadata = (FShaderParametersMetadata *)0x0;
    local_58 = GPixelFormats[local_res18[0]].BlockBytes;
    local_70.NumElements = 1;
    local_70._12_4_ = uStack_4c;
    local_70.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    local_70.BytesPerElement = local_58;
    FRDGUserValidation::ValidateCreateBuffer(this_00,&local_70,L"ENiagaraEmptyUAVType::Buffer",None)
    ;
    if (local_70.BytesPerElement == 0) {
      local_70.BytesPerElement = 1;
    }
    if (local_70.NumElements == 0) {
      local_70.NumElements = 1;
    }
    local_res20 = (FMemStackBase *)&param_1->_padding_;
    pFVar12 = FMemStackBase::Alloc(local_res20,0x130,8);
    pFVar12 = FRDGBuffer::FRDGBuffer(pFVar12,L"ENiagaraEmptyUAVType::Buffer",&local_70,None);
    piVar2 = &(param_1->Buffers).Array.ArrayMax;
    iVar9 = (param_1->Buffers).Array.ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                        (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar2);
    }
    (param_1->Buffers).Array.ArrayNum = iVar9 + 1;
    (param_1->Buffers).Array.AllocatorInstance.Data[iVar9] = pFVar12;
    (pFVar12->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
    FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar12);
    FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar12);
    local_80._padding_._0_1_ = EVar7;
    local_80._padding_._1_2_ = 0;
    local_80.Buffer = pFVar12;
    FRDGUserValidation::ValidateCreateUAV(this_00,&local_80);
    pFVar12 = local_80.Buffer;
    pFVar10 = FMemStackBase::Alloc(local_res20,0x48,8);
    lVar4 = pFVar12->_padding_;
    piVar2 = &(param_1->Views).Array.ArrayMax;
    *(byte *)&pFVar10->_padding_ = (byte)pFVar10->_padding_ & 0xfe;
    *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0xffffffffffffffff;
    pFVar10->_padding_ = lVar4;
    pFVar10->_padding_ = 0;
    *(undefined1 *)&pFVar10->_padding_ = 2;
    *(undefined1 *)&pFVar10->_padding_ = 1;
    pFVar10->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
    (pFVar10->Desc)._padding_ =
         CONCAT53(local_80._padding_._3_5_,
                  CONCAT21(local_80._padding_._1_2_,(EPixelFormat)local_80._padding_));
    (pFVar10->Desc).Buffer = local_80.Buffer;
    iVar9 = (param_1->Views).Array.ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar2);
    }
    (param_1->Views).Array.ArrayNum = iVar9 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar10;
    *(int *)((longlong)&pFVar10->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(this_00,pFVar10);
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    local_88 = pFVar10;
    if ((pFVar5 <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)(pFVar11->UAVs).ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FRDGBufferUAV *)(*pcVar6)();
        return pFVar10;
      }
    }
    iVar9 = (pFVar11->UAVs).ArrayNum;
    piVar2 = &(pFVar11->UAVs).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (pFVar11->UAVs).ArrayNum = iVar9 + 1;
    *(FRDGBufferUAV **)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
  }
  uVar3 = pFVar11->NextFreeIndex;
  pFVar11->NextFreeIndex = uVar3 + 1;
  uVar13 = 0;
  if ((int)uVar3 < (pFVar11->UAVs).ArrayNum) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBufferUAV *)(*pcVar6)();
      return pFVar10;
    }
  }
  return *(FRDGBufferUAV **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8);
}

// GetEmptyRDGUAVFromPool @ 1492a2460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTextureUAV * __thiscall
FNiagaraEmptyUAVPool::GetEmptyRDGUAVFromPool
          (FNiagaraEmptyUAVPool *this,FRDGBuilder *param_1,EPixelFormat param_2,
          ETextureDimension param_3)

{
  FRDGTextureUAV **ppFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTexture *pFVar6;
  byte bVar7;
  void *pvVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  TMap<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>_>
  *this_00;
  uint uVar12;
  undefined1 auStack_298 [32];
  FRDGTextureUAV **local_278;
  FRDGTextureUAV **local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  EPixelFormat local_248;
  ETextureDimension local_247;
  FRDGTextureUAV *local_240;
  FRDGTextureUAV *local_238;
  FRDGTextureUAV *local_230;
  FRDGTextureUAV *local_228;
  FRDGTextureUAV *local_220;
  int local_218 [2];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  EPixelFormat *local_1e8 [2];
  undefined1 local_1d8 [24];
  float local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined1 *local_1b4;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  EPixelFormat local_1a5;
  undefined2 local_1a4;
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [24];
  float local_170;
  int local_16c;
  undefined4 local_168;
  undefined1 *local_164;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_156;
  EPixelFormat local_155;
  undefined2 local_154;
  void *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [24];
  float local_120;
  int local_11c;
  undefined4 local_118;
  undefined1 *local_114;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  EPixelFormat local_105;
  undefined2 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [24];
  float local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  EPixelFormat local_b5;
  undefined2 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  EPixelFormat local_65;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,200,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
    return pFVar5;
  }
  if ((this->RDGUAVAccessCounter == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RDGUAVAccessCounter != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,0xc9,
                         L"Accessing Niagara\'s RDG UAV Pool while not within a scope, this could result in a memory leak!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
    return pFVar5;
  }
  if (((GPixelFormats[param_2].Capabilities & TypedUAVStore) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UE::PixelFormat::HasCapabilities(Format, EPixelFormatCapabilities::TypedUAVStore)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,0xca,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
    return pFVar5;
  }
  this_00 = &this->TextureRDGUAVPool;
  uVar12 = (uint)param_3;
  uVar11 = (uint)param_2 * 0x40 + uVar12 + (param_2 >> 2) + 0x9e3779b9 ^ (uint)param_2;
  local_248 = param_2;
  local_247 = param_3;
  if (*(int *)&(this->TextureRDGUAVPool).field_0x8 != *(int *)&(this->TextureRDGUAVPool).field_0x34)
  {
    puVar9 = *(undefined1 **)&(this->TextureRDGUAVPool).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TextureRDGUAVPool).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->TextureRDGUAVPool).field_0x48 - 1U & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        lVar10 = *(longlong *)this_00 + (longlong)iVar4 * 0x28;
        if ((*(EPixelFormat *)(*(longlong *)this_00 + (longlong)iVar4 * 0x28) == param_2) &&
           (*(ETextureDimension *)(lVar10 + 1) == param_3)) {
          if ((iVar4 != -1) && (lVar10 != 0)) goto LAB_1492a25fe;
          break;
        }
        iVar4 = *(int *)(lVar10 + 0x20);
      } while (iVar4 != -1);
    }
  }
  local_1e8[0] = &local_248;
  local_278 = (FRDGTextureUAV **)0x0;
  TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TTuple<enum_EPixelFormat,enum_ETextureDimension>_&&>_>
            (this_00,(uint)local_218,
             (TKeyInitializer<TTuple<EPixelFormat,ETextureDimension>_&&> *)(ulonglong)uVar11,
             (bool *)local_1e8);
  lVar10 = *(longlong *)this_00 + (longlong)local_218[0] * 0x28;
LAB_1492a25fe:
  if (*(int *)(lVar10 + 8) == *(int *)(lVar10 + 0x18)) {
    bVar7 = (byte)GNumExplicitGPUsForRendering;
    if (param_3 == Texture2D) {
      local_80 = FClearValueBinding::Black.Value.Color[3];
      local_1f0 = 1;
      local_7c = (1 << (bVar7 & 0x1f)) + -1;
      uStack_1ec = 1;
      local_74 = &DAT_100000001;
      local_4c = 1;
      local_98._0_8_ = 0x20008;
      local_98._8_8_ = FClearValueBinding::Black._0_8_;
      local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_78 = 0;
      local_6c = 0x10001;
      local_68 = 0x101;
      local_66 = 0;
      local_64 = 0xff00;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_65 = param_2;
      pFVar6 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_98,L"NiagaraEmptyTextureUAV::Texture2D",
                          None);
      local_220 = FRDGBuilder::CreateUAV(param_1,pFVar6,SkipBarrier,PF_Unknown);
      ppFVar1 = *(FRDGTextureUAV ***)(lVar10 + 0x10);
      if ((ppFVar1 <= &local_220) && (&local_220 < ppFVar1 + *(int *)(lVar10 + 0x1c))) {
        local_260 = (longlong)*(int *)(lVar10 + 0x18);
        local_258 = 8;
        local_278 = &local_220;
        local_270 = ppFVar1;
        local_268 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 == *(int *)(lVar10 + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar4 + 1;
      *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8) = local_220;
      pvVar8 = local_58;
    }
    else if (uVar12 == 1) {
      local_d0 = FClearValueBinding::Black.Value.Color[3];
      local_1f8 = 1;
      local_cc = (1 << (bVar7 & 0x1f)) + -1;
      uStack_1f4 = 1;
      local_c4 = &DAT_100000001;
      local_b6 = 1;
      local_9c = 1;
      local_e8._0_8_ = 0x20008;
      local_e8._8_8_ = FClearValueBinding::Black._0_8_;
      local_e8._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_c8 = 0;
      local_bc = 0x10001;
      local_b8 = 0x101;
      local_b4 = 0xff00;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_b5 = param_2;
      pFVar6 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_e8,
                          L"NiagaraEmptyTextureUAV::Texture2DArray",None);
      local_228 = FRDGBuilder::CreateUAV(param_1,pFVar6,SkipBarrier,PF_Unknown);
      ppFVar1 = *(FRDGTextureUAV ***)(lVar10 + 0x10);
      if ((ppFVar1 <= &local_228) && (&local_228 < ppFVar1 + *(int *)(lVar10 + 0x1c))) {
        local_260 = (longlong)*(int *)(lVar10 + 0x18);
        local_258 = 8;
        local_278 = &local_228;
        local_270 = ppFVar1;
        local_268 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 == *(int *)(lVar10 + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar4 + 1;
      *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8) = local_228;
      pvVar8 = local_a8;
    }
    else if (uVar12 == 2) {
      local_120 = FClearValueBinding::Black.Value.Color[3];
      local_200 = 1;
      local_11c = (1 << (bVar7 & 0x1f)) + -1;
      uStack_1fc = 1;
      local_114 = &DAT_100000001;
      local_ec = 1;
      local_138._0_8_ = 0x20008;
      local_138._8_8_ = FClearValueBinding::Black._0_8_;
      local_138._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_118 = 0;
      local_10c = 0x10001;
      local_108 = 0x101;
      local_106 = 2;
      local_104 = 0xff00;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_105 = param_2;
      pFVar6 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_138,L"NiagaraEmptyTextureUAV::Texture3D",
                          None);
      local_230 = FRDGBuilder::CreateUAV(param_1,pFVar6,SkipBarrier,PF_Unknown);
      ppFVar1 = *(FRDGTextureUAV ***)(lVar10 + 0x10);
      if ((ppFVar1 <= &local_230) && (&local_230 < ppFVar1 + *(int *)(lVar10 + 0x1c))) {
        local_260 = (longlong)*(int *)(lVar10 + 0x18);
        local_258 = 8;
        local_278 = &local_230;
        local_270 = ppFVar1;
        local_268 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 == *(int *)(lVar10 + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar4 + 1;
      *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8) = local_230;
      pvVar8 = local_f8;
    }
    else if (uVar12 == 3) {
      local_170 = FClearValueBinding::Black.Value.Color[3];
      local_208 = 1;
      local_16c = (1 << (bVar7 & 0x1f)) + -1;
      uStack_204 = 1;
      local_164 = &DAT_100000001;
      local_13c = 1;
      local_188._0_8_ = 0x20008;
      local_188._8_8_ = FClearValueBinding::Black._0_8_;
      local_188._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_168 = 0;
      local_15c = 0x10001;
      local_158 = 0x101;
      local_156 = 3;
      local_154 = 0xff00;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_155 = param_2;
      pFVar6 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_188,
                          L"NiagaraEmptyTextureUAV::TextureCube",None);
      local_238 = FRDGBuilder::CreateUAV(param_1,pFVar6,SkipBarrier,PF_Unknown);
      ppFVar1 = *(FRDGTextureUAV ***)(lVar10 + 0x10);
      if ((ppFVar1 <= &local_238) && (&local_238 < ppFVar1 + *(int *)(lVar10 + 0x1c))) {
        local_260 = (longlong)*(int *)(lVar10 + 0x18);
        local_258 = 8;
        local_278 = &local_238;
        local_270 = ppFVar1;
        local_268 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 == *(int *)(lVar10 + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar4 + 1;
      *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8) = local_238;
      pvVar8 = local_148;
    }
    else {
      if (uVar12 != 4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                           ,0x10e,L"");
        if (!bVar3) {
          return (FRDGTextureUAV *)0x0;
        }
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
        return pFVar5;
      }
      local_1c0 = FClearValueBinding::Black.Value.Color[3];
      local_210 = 1;
      local_1bc = (1 << (bVar7 & 0x1f)) + -1;
      uStack_20c = 1;
      local_1b4 = &DAT_100000001;
      local_18c = 1;
      local_1d8._0_8_ = 0x20008;
      local_1d8._8_8_ = FClearValueBinding::Black._0_8_;
      local_1d8._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_1b8 = 0;
      local_1ac = 0x10001;
      local_1a8 = 0x101;
      local_1a6 = 4;
      local_1a4 = 0xff00;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_1a5 = param_2;
      pFVar6 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_1d8,
                          L"NiagaraEmptyTextureUAV::TextureCubeArray",None);
      local_240 = FRDGBuilder::CreateUAV(param_1,pFVar6,SkipBarrier,PF_Unknown);
      ppFVar1 = *(FRDGTextureUAV ***)(lVar10 + 0x10);
      if ((ppFVar1 <= &local_240) && (&local_240 < ppFVar1 + *(int *)(lVar10 + 0x1c))) {
        local_260 = (longlong)*(int *)(lVar10 + 0x18);
        local_258 = 8;
        local_278 = &local_240;
        local_270 = ppFVar1;
        local_268 = (longlong)*(int *)(lVar10 + 0x1c);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 == *(int *)(lVar10 + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
      }
      *(int *)(lVar10 + 0x18) = iVar4 + 1;
      *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8) = local_240;
      pvVar8 = local_198;
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  uVar11 = *(uint *)(lVar10 + 8);
  *(uint *)(lVar10 + 8) = uVar11 + 1;
  local_270 = (FRDGTextureUAV **)(longlong)*(int *)(lVar10 + 0x18);
  uVar12 = 0;
  if ((int)uVar11 < *(int *)(lVar10 + 0x18)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_278 = (FRDGTextureUAV **)(longlong)(int)uVar11,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRDGTextureUAV *)(*pcVar2)();
    return pFVar5;
  }
  return *(FRDGTextureUAV **)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar11 * 8);
}

// GetEmptyUAVFromPool @ 1492a2d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIUnorderedAccessView * __thiscall
FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
          (FNiagaraEmptyUAVPool *this,FRHICommandList *param_1,EPixelFormat param_2,
          ENiagaraEmptyUAVType param_3)

{
  FRHIBuffer *pFVar1;
  uint uVar2;
  FRHIResource *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRHIUnorderedAccessView *pFVar8;
  FEmptyUAVPool *pFVar9;
  TRefCountPtr<FRHIBuffer> TVar10;
  TRefCountPtr<FRHITexture> TVar11;
  TRefCountPtr<FRHIUnorderedAccessView> TVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar17;
  uint uVar18;
  undefined1 auStackY_a58 [32];
  EPixelFormat local_9f8 [8];
  FLLMScope local_9f0 [2];
  FRHIResource *local_9e8;
  undefined4 local_9e0;
  undefined4 uStack_9dc;
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  longlong local_9b8 [2];
  undefined4 *local_9a8;
  undefined4 uStack_9a0;
  FRHIGPUMask FStack_99c;
  undefined8 local_998;
  undefined8 uStack_990;
  EClearBinding local_988;
  int iStack_984;
  undefined4 uStack_980;
  int iStack_97c;
  wchar_t *local_978;
  double dStack_970;
  ERHIAccess local_968;
  int iStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  int iStack_958;
  int iStack_954;
  undefined1 local_950 [24];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  undefined1 local_8f8 [24];
  longlong lStack_8e0;
  undefined1 *local_8d8;
  longlong lStack_8d0;
  undefined1 *local_8c8;
  longlong lStack_8c0;
  undefined1 *local_8b8;
  longlong lStack_8b0;
  undefined1 *local_8a8;
  longlong lStack_8a0;
  FStatMessage local_898;
  undefined4 local_888;
  undefined2 local_884;
  longlong local_880;
  undefined1 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined1 local_86c;
  undefined1 local_860;
  undefined8 local_858;
  EClearBinding EStack_850;
  ClearValueType CStack_84c;
  undefined1 auStack_83c [12];
  longlong lStack_830;
  undefined4 local_828;
  TIntPoint<int>_u_0 TStack_824;
  undefined1 auStack_81c [12];
  undefined1 local_810 [24];
  FLastRenderTimeContainer FStack_7f8;
  ForElementType<EPixelFormat> local_7f0;
  undefined1 local_7e0 [16];
  undefined8 local_7d0;
  FLastRenderTimeContainer local_7c8;
  undefined4 local_7c0;
  int local_7bc;
  undefined4 local_7b8;
  undefined1 *local_7b4;
  undefined4 local_7ac;
  undefined2 local_7a8;
  undefined1 local_7a6;
  EPixelFormat local_7a5;
  undefined2 local_7a4;
  void *local_798;
  undefined4 local_790;
  undefined4 local_78c;
  wchar_t *local_788;
  undefined8 local_780;
  FResourceBulkDataInterface *local_778;
  FName local_770;
  FName local_768;
  FRHITextureDesc local_758;
  wchar_t *local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  FRHITextureDesc local_6d8;
  wchar_t *local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  FRHITextureDesc local_658;
  wchar_t *local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  FRHITextureDesc local_5d8;
  wchar_t *local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  FRHITextureDesc local_558;
  wchar_t *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  FRHITextureDesc local_4d8;
  wchar_t *local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  FRHITextureDesc local_458;
  wchar_t *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  FRHITextureDesc local_3d8;
  wchar_t *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  FRHITextureCreateDesc local_358;
  FRHITextureDesc local_2d8;
  wchar_t *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  FRHITextureDesc local_258;
  wchar_t *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FRHITextureDesc local_1d8;
  wchar_t *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  FRHITextureDesc local_158;
  wchar_t *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  local_9f8[0] = param_2;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,0x38,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
    return pFVar8;
  }
  if ((this->UAVAccessCounter == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAVAccessCounter != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,0x39,
                         L"Accessing Niagara\'s UAV Pool while not within a scope, this could result in a memory leak!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = TMapBase<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
           ::FindOrAddImpl<enum_EPixelFormat_const_&>
                     (this->UAVPools + (int)param_3,(uint)local_9f8[0],local_9f8);
  iVar7 = (pFVar9->UAVs).ArrayNum;
  if (pFVar9->NextFreeIndex != iVar7) goto LAB_1492a3df2;
  if (iVar7 == (pFVar9->UAVs).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar9->UAVs).AllocatorInstance,&(pFVar9->UAVs).ArrayMax);
    (pFVar9->UAVs).ArrayNum = iVar7;
  }
  (pFVar9->UAVs).ArrayNum = iVar7 + 1;
  pFVar1 = (FRHIBuffer *)((pFVar9->UAVs).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
  DefaultConstructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int>(pFVar1,1);
  bVar17 = (byte)GNumExplicitGPUsForRendering;
  switch(param_3) {
  case Buffer:
    iStack_984 = 0;
    dStack_970 = 0.0;
    iStack_964 = 0;
    uStack_960 = 0;
    uStack_95c = 0;
    iStack_958 = 0;
    iStack_954 = 0;
    uStack_980 = 0x4108;
    local_988 = GPixelFormats[local_9f8[0]].BlockBytes;
    iStack_97c = (1 << (bVar17 & 0x1f)) + -1;
    local_978 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_968 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess,false);
    local_810._4_4_ = iStack_984;
    local_810._0_4_ = local_988;
    local_810._8_8_ = CONCAT44(iStack_97c,uStack_980);
    local_7f0._padding_ = iStack_964;
    local_7f0._0_4_ = local_968;
    local_7f0.SecondaryData = (ForElementType<EPixelFormat>)CONCAT44(uStack_95c,uStack_960);
    local_810._16_8_ = local_978;
    FStack_7f8.LastRenderTime = dStack_970;
    local_7e0._4_4_ = iStack_954;
    local_7e0._0_4_ = iStack_958;
    TVar10 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_950);
    if (pFVar1 != TVar10.Reference) {
      pFVar3 = (FRHIResource *)pFVar1->_padding_;
      pFVar1->_padding_ = (TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    if ((FRHIResource *)local_950._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_950._0_8_);
    }
    lVar4 = pFVar1->_padding_;
    uStack_990 = 0;
    local_998 = CONCAT71((uint7)local_9f8[0],1);
    local_998 = (ulonglong)CONCAT12(1,(undefined2)local_998);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_9f0,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              ((FMemScope *)(local_950 + 8),
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_9e8,param_1,lVar4);
    FMemScope::~FMemScope((FMemScope *)(local_950 + 8));
    FLLMScope::~FLLMScope(local_9f0);
    plVar13 = &pFVar1->_padding_;
    if ((FRHIResource **)plVar13 == &local_9e8) {
LAB_1492a3060:
      if (local_9e8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_9e8);
      }
    }
    else {
      pFVar3 = (FRHIResource *)*plVar13;
      *plVar13 = (longlong)local_9e8;
      local_9e8 = (FRHIResource *)0x0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
        goto LAB_1492a3060;
      }
    }
    goto LAB_1492a3b3c;
  case Texture2D:
    local_9e0 = 1;
    local_7bc = (1 << (bVar17 & 0x1f)) + -1;
    uStack_9dc = 1;
    local_788 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_7b4 = &DAT_100000001;
    local_7a5 = local_9f8[0];
    local_7e0._8_8_ = 0.0;
    local_7d0._0_4_ = 1;
    local_7d0._4_4_ = 0;
    local_7c8.LastRenderTime = 0.0;
    local_7c0 = 0;
    local_7b8 = 0;
    local_7ac = 0x10001;
    local_7a8 = 0x101;
    local_7a6 = 0;
    local_7a4 = 0xff00;
    local_798 = (void *)0x0;
    local_790 = 0;
    local_78c = 1;
    local_780 = 0;
    local_778 = (FResourceBulkDataInterface *)0x0;
    local_770.ComparisonIndex.Value = 0;
    local_770.Number = 0;
    local_768.ComparisonIndex.Value = 0;
    local_768.Number = 0;
    FRHITextureDesc::FRHITextureDesc
              ((FRHITextureDesc *)&local_358,(FRHITextureDesc *)(local_7e0 + 8));
    local_358.DebugName = local_788;
    local_358.InitialState = (ERHIAccess)local_780;
    local_358.InitAction = local_780._4_4_;
    local_358.BulkData = local_778;
    local_358.ClassName = local_770;
    local_358.OwnerName = local_768;
    if (local_798 != (void *)0x0) {
      FMemory::Free(local_798);
    }
    local_358._padding_ = 0x20008;
    FRHITextureCreateDesc::FRHITextureCreateDesc(&local_d8,&local_358);
    if ((void *)local_358._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_358._padding_);
    }
    plVar13 = &pFVar1->_padding_;
    TVar11 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_950 + 0x10));
    TRefCountPtr<FRHITexture>::operator=
              ((TRefCountPtr<FRHITexture> *)plVar13,(TRefCountPtr<FRHITexture> *)TVar11.Reference);
    if ((FRHIResource *)local_950._16_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_950._16_8_);
    }
    lStack_8e0 = 0;
    local_8f8._16_8_ = &DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)(local_8f8 + 0x10),(FRHITexture *)*plVar13);
    TVar12 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)param_1,(FRHITexture *)local_938,
                        (FInitializer *)*plVar13);
    TRefCountPtr<FRHIUnorderedAccessView>::operator=
              ((TRefCountPtr<FRHIUnorderedAccessView> *)&pFVar1->_padding_,
               (TRefCountPtr<FRHIUnorderedAccessView> *)TVar12.Reference);
    local_158.AliasableFormats.AllocatorInstance.SecondaryData =
         (ForElementType<EPixelFormat>)local_d8._padding_;
    if ((FRHIResource *)local_938._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_938._0_8_);
      local_158.AliasableFormats.AllocatorInstance.SecondaryData =
           (ForElementType<EPixelFormat>)local_d8._padding_;
    }
    break;
  case Texture2DArray:
    local_9d8 = 1;
    local_758.GPUMask.GPUMask = (1 << (bVar17 & 0x1f)) - 1;
    uStack_9d4 = 1;
    local_708 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_758.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_758.Format = local_9f8[0];
    local_758.Flags = None;
    local_758.ClearValue._0_8_ = 1;
    local_758.ClearValue.Value._4_8_ = 0;
    local_758.ClearValue.Value.Color[3] = 0.0;
    local_758.ExtData = 0;
    local_758.Depth = 1;
    local_758.ArraySize = 1;
    local_758.NumMips = '\x01';
    local_758.NumSamples = '\x01';
    local_758.Dimension = Texture2DArray;
    local_758.UAVFormat = PF_Unknown;
    local_758.FastVRAMPercentage = 0xff;
    local_758.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_758.AliasableFormats.ArrayNum = 0;
    local_758.AliasableFormats.ArrayMax = 1;
    local_700 = 0;
    local_6f8 = 0;
    local_6f0 = 0;
    local_6e8 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_558,&local_758);
    local_508 = local_708;
    local_500 = (undefined4)local_700;
    local_4fc = local_700._4_4_;
    local_4f8 = local_6f8;
    local_4f0 = local_6f0;
    local_4e8 = local_6e8;
    if (local_758.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_758.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_558.Flags = UAV|ShaderResource;
    FRHITextureDesc::FRHITextureDesc(&local_2d8,&local_558);
    local_288 = local_508;
    local_280 = local_500;
    local_27c = local_4fc;
    local_278 = local_4f8;
    local_270 = local_4f0;
    local_268 = local_4e8;
    if (local_558.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_558.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    plVar13 = &pFVar1->_padding_;
    TVar11 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_938 + 8));
    TRefCountPtr<FRHITexture>::operator=
              ((TRefCountPtr<FRHITexture> *)plVar13,(TRefCountPtr<FRHITexture> *)TVar11.Reference);
    if ((FRHIResource *)local_938._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_938._8_8_);
    }
    lStack_8d0 = 0;
    local_8d8 = &DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)&local_8d8,(FRHITexture *)*plVar13);
    TVar12 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)param_1,(FRHITexture *)local_928,
                        (FInitializer *)*plVar13);
    TRefCountPtr<FRHIUnorderedAccessView>::operator=
              ((TRefCountPtr<FRHIUnorderedAccessView> *)&pFVar1->_padding_,
               (TRefCountPtr<FRHIUnorderedAccessView> *)TVar12.Reference);
    local_158.AliasableFormats.AllocatorInstance.SecondaryData =
         local_2d8.AliasableFormats.AllocatorInstance.SecondaryData;
    if ((FName)local_928._0_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_928._0_8_);
      local_158.AliasableFormats.AllocatorInstance.SecondaryData =
           local_2d8.AliasableFormats.AllocatorInstance.SecondaryData;
    }
    break;
  case Texture3D:
    local_9d0 = 1;
    local_6d8.GPUMask.GPUMask = (1 << (bVar17 & 0x1f)) - 1;
    uStack_9cc = 1;
    local_688 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_6d8.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_6d8.Format = local_9f8[0];
    local_6d8.Flags = None;
    local_6d8.ClearValue._0_8_ = 1;
    local_6d8.ClearValue.Value._4_8_ = 0;
    local_6d8.ClearValue.Value.Color[3] = 0.0;
    local_6d8.ExtData = 0;
    local_6d8.Depth = 1;
    local_6d8.ArraySize = 1;
    local_6d8.NumMips = '\x01';
    local_6d8.NumSamples = '\x01';
    local_6d8.Dimension = Texture3D;
    local_6d8.UAVFormat = PF_Unknown;
    local_6d8.FastVRAMPercentage = 0xff;
    local_6d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_6d8.AliasableFormats.ArrayNum = 0;
    local_6d8.AliasableFormats.ArrayMax = 1;
    local_680 = 0;
    local_678 = 0;
    local_670 = 0;
    local_668 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_4d8,&local_6d8);
    local_488 = local_688;
    local_480 = (undefined4)local_680;
    local_47c = local_680._4_4_;
    local_478 = local_678;
    local_470 = local_670;
    local_468 = local_668;
    if (local_6d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_6d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_4d8.Flags = UAV|ShaderResource;
    FRHITextureDesc::FRHITextureDesc(&local_258,&local_4d8);
    local_208 = local_488;
    local_200 = local_480;
    local_1fc = local_47c;
    local_1f8 = local_478;
    local_1f0 = local_470;
    local_1e8 = local_468;
    if (local_4d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_4d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    plVar13 = &pFVar1->_padding_;
    TVar11 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_928 + 8));
    TRefCountPtr<FRHITexture>::operator=
              ((TRefCountPtr<FRHITexture> *)plVar13,(TRefCountPtr<FRHITexture> *)TVar11.Reference);
    if ((FName)local_928._8_8_ != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)local_928._8_8_);
    }
    lStack_8c0 = 0;
    local_8c8 = &DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)&local_8c8,(FRHITexture *)*plVar13);
    TVar12 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)param_1,(FRHITexture *)local_918,
                        (FInitializer *)*plVar13);
    TRefCountPtr<FRHIUnorderedAccessView>::operator=
              ((TRefCountPtr<FRHIUnorderedAccessView> *)&pFVar1->_padding_,
               (TRefCountPtr<FRHIUnorderedAccessView> *)TVar12.Reference);
    local_158.AliasableFormats.AllocatorInstance.SecondaryData =
         local_258.AliasableFormats.AllocatorInstance.SecondaryData;
    if ((FRHIResource *)local_918._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_918._0_8_);
      local_158.AliasableFormats.AllocatorInstance.SecondaryData =
           local_258.AliasableFormats.AllocatorInstance.SecondaryData;
    }
    break;
  case TextureCube:
    local_9c8 = 1;
    local_658.GPUMask.GPUMask = (1 << (bVar17 & 0x1f)) - 1;
    uStack_9c4 = 1;
    local_608 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_658.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_658.Format = local_9f8[0];
    local_658.Flags = None;
    local_658.ClearValue._0_8_ = 1;
    local_658.ClearValue.Value._4_8_ = 0;
    local_658.ClearValue.Value.Color[3] = 0.0;
    local_658.ExtData = 0;
    local_658.Depth = 1;
    local_658.ArraySize = 1;
    local_658.NumMips = '\x01';
    local_658.NumSamples = '\x01';
    local_658.Dimension = TextureCube;
    local_658.UAVFormat = PF_Unknown;
    local_658.FastVRAMPercentage = 0xff;
    local_658.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_658.AliasableFormats.ArrayNum = 0;
    local_658.AliasableFormats.ArrayMax = 1;
    local_600 = 0;
    local_5f8 = 0;
    local_5f0 = 0;
    local_5e8 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_458,&local_658);
    local_408 = local_608;
    local_400 = (undefined4)local_600;
    local_3fc = local_600._4_4_;
    local_3f8 = local_5f8;
    local_3f0 = local_5f0;
    local_3e8 = local_5e8;
    if (local_658.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_658.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_458.Flags = UAV|ShaderResource;
    FRHITextureDesc::FRHITextureDesc(&local_1d8,&local_458);
    local_188 = local_408;
    local_180 = local_400;
    local_17c = local_3fc;
    local_178 = local_3f8;
    local_170 = local_3f0;
    local_168 = local_3e8;
    if (local_458.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_458.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    plVar13 = &pFVar1->_padding_;
    TVar11 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_918 + 8));
    TRefCountPtr<FRHITexture>::operator=
              ((TRefCountPtr<FRHITexture> *)plVar13,(TRefCountPtr<FRHITexture> *)TVar11.Reference);
    if ((FRHIResource *)local_918._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_918._8_8_);
    }
    lStack_8b0 = 0;
    local_8b8 = &DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)&local_8b8,(FRHITexture *)*plVar13);
    TVar12 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)param_1,(FRHITexture *)local_908,
                        (FInitializer *)*plVar13);
    TRefCountPtr<FRHIUnorderedAccessView>::operator=
              ((TRefCountPtr<FRHIUnorderedAccessView> *)&pFVar1->_padding_,
               (TRefCountPtr<FRHIUnorderedAccessView> *)TVar12.Reference);
    local_158.AliasableFormats.AllocatorInstance.SecondaryData =
         local_1d8.AliasableFormats.AllocatorInstance.SecondaryData;
    if ((FRHIResource *)local_908._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_908._0_8_);
      local_158.AliasableFormats.AllocatorInstance.SecondaryData =
           local_1d8.AliasableFormats.AllocatorInstance.SecondaryData;
    }
    break;
  case TextureCubeArray:
    local_9c0 = 1;
    local_5d8.GPUMask.GPUMask = (1 << (bVar17 & 0x1f)) - 1;
    uStack_9bc = 1;
    local_588 = L"FNiagaraGpuComputeDispatch::EmptyUAV";
    local_5d8.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_5d8.Format = local_9f8[0];
    local_5d8.Flags = None;
    local_5d8.ClearValue._0_8_ = 1;
    local_5d8.ClearValue.Value._4_8_ = 0;
    local_5d8.ClearValue.Value.Color[3] = 0.0;
    local_5d8.ExtData = 0;
    local_5d8.Depth = 1;
    local_5d8.ArraySize = 1;
    local_5d8.NumMips = '\x01';
    local_5d8.NumSamples = '\x01';
    local_5d8.Dimension = TextureCubeArray;
    local_5d8.UAVFormat = PF_Unknown;
    local_5d8.FastVRAMPercentage = 0xff;
    local_5d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_5d8.AliasableFormats.ArrayNum = 0;
    local_5d8.AliasableFormats.ArrayMax = 1;
    local_580 = 0;
    local_578 = 0;
    local_570 = 0;
    local_568 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_3d8,&local_5d8);
    local_388 = local_588;
    local_380 = (undefined4)local_580;
    local_37c = local_580._4_4_;
    local_378 = local_578;
    local_370 = local_570;
    local_368 = local_568;
    if (local_5d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_5d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_3d8.Flags = UAV|ShaderResource;
    FRHITextureDesc::FRHITextureDesc(&local_158,&local_3d8);
    local_108 = local_388;
    local_100 = local_380;
    local_fc = local_37c;
    local_f8 = local_378;
    local_f0 = local_370;
    local_e8 = local_368;
    if (local_3d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_3d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    plVar13 = &pFVar1->_padding_;
    TVar11 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)(local_908 + 8));
    TRefCountPtr<FRHITexture>::operator=
              ((TRefCountPtr<FRHITexture> *)plVar13,(TRefCountPtr<FRHITexture> *)TVar11.Reference);
    if ((FRHIResource *)local_908._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_908._8_8_);
    }
    lStack_8a0 = 0;
    local_8a8 = &DAT_100000003;
    FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
              ((FInitializer *)&local_8a8,(FRHITexture *)*plVar13);
    TVar12 = FRHICommandListBase::CreateUnorderedAccessView
                       ((FRHICommandListBase *)param_1,(FRHITexture *)local_8f8,
                        (FInitializer *)*plVar13);
    TRefCountPtr<FRHIUnorderedAccessView>::operator=
              ((TRefCountPtr<FRHIUnorderedAccessView> *)&pFVar1->_padding_,
               (TRefCountPtr<FRHIUnorderedAccessView> *)TVar12.Reference);
    if ((FRHIResource *)local_8f8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_8f8._0_8_);
    }
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0x90,L"");
    if (!bVar6) {
      return (FRHIUnorderedAccessView *)0x0;
    }
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
    return pFVar8;
  }
  if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
  }
LAB_1492a3b3c:
  uStack_9a0 = 1;
  local_884 = 0xffff;
  local_880 = pFVar1->_padding_;
  local_9a8 = &local_888;
  local_888 = 0xffffffff;
  lStack_830 = CONCAT44(FStack_99c.GPUMask,EColorBound);
  local_878 = 3;
  local_874 = 0;
  local_870 = 0x400;
  local_86c = 0;
  local_860 = 0;
  auStack_83c._4_8_ = local_9a8;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)(auStack_83c + 4),None);
  local_9b8[0] = pFVar1->_padding_;
  local_858 = local_9b8;
  EStack_850 = EColorBound;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    plVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
    *plVar13 = local_9b8[0];
    puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    CStack_84c.Color[3] = 1.4013e-45;
    **(undefined8 **)&param_1->field_0x30 = puVar14;
    *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
    puVar14[2] = plVar13;
    puVar14[3] = CONCAT44(auStack_83c._0_4_,1);
    CStack_84c._4_8_ = plVar13;
  }
  else {
    bVar17 = param_1->field_0x6a;
    if (((bVar17 == 0) || ((bVar17 & bVar17 - 1) != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b7,
                           L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
      return pFVar8;
    }
    if ((*(longlong *)&param_1->field_0x40 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b8,
                           L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
      return pFVar8;
    }
    local_828 = (float)local_858;
    TStack_824._s_0.X = local_858._4_4_;
    TStack_824._s_0.Y = EStack_850;
    auStack_81c._0_4_ = CStack_84c.Color[0];
    (**(code **)(**(longlong **)&param_1->field_0x40 + 0x80))
              (*(longlong **)&param_1->field_0x40,&local_828);
  }
  FVar16 = StatPtr_STAT_NiagaraEmptyUAVPool;
  if (StatPtr_STAT_NiagaraEmptyUAVPool == (FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool>)0x0
     ) {
    pFVar15 = ::FName::FName((FName *)(auStack_81c + 4),"STAT_NiagaraEmptyUAVPool");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmptyUAVPool,*pFVar15,
                        L"# EmptyUAVs","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  lVar4 = *(longlong *)FVar16;
  local_9a8 = (undefined4 *)lVar4;
  if (((lVar4 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_898.NameAndInfo.Number = (uint)((ulonglong)lVar4 >> 0x20) & 0xffffafff | 0xa000;
    local_898.StatData.Pad[0] = '\x01';
    local_898.StatData.Pad[1] = '\0';
    local_898.StatData.Pad[2] = '\0';
    local_898.StatData.Pad[3] = '\0';
    local_898.StatData.Pad[4] = '\0';
    local_898.StatData.Pad[5] = '\0';
    local_898.StatData.Pad[6] = '\0';
    local_898.StatData.Pad[7] = '\0';
    local_8f8._8_8_ = lVar4;
    local_898.NameAndInfo.Index.Value = (uint)lVar4;
    FThreadStats::AddStatMessage(this_00,&local_898);
    FStatsTrace::Add((FName *)(local_8f8 + 8),1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
LAB_1492a3df2:
  uVar2 = pFVar9->NextFreeIndex;
  uVar18 = 0;
  if ((int)uVar2 < (pFVar9->UAVs).ArrayNum) {
    uVar18 = ~uVar2 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIUnorderedAccessView *)(*pcVar5)();
    return pFVar8;
  }
  pFVar8 = *(FRHIUnorderedAccessView **)
            ((pFVar9->UAVs).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x18 + 0x10);
  pFVar9->NextFreeIndex = pFVar9->NextFreeIndex + 1;
  return pFVar8;
}

// ResetEmptyRDGUAVPools @ 1492b44e0

void __thiscall FNiagaraEmptyUAVPool::ResetEmptyRDGUAVPools(FNiagaraEmptyUAVPool *this)

{
  TMap<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  TMap<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
  *local_18;
  undefined2 local_10;
  
  pTVar1 = &this->BufferRDGUAVPool;
  TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_78,
             (TSet<TTuple<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_10 = 0;
  iVar5 = 1;
  stack0xffffffffffffffc8 = local_68;
  local_48 = local_78;
  auStack_40._0_8_ = lStack_70;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uVar4 = local_68._8_8_ >> 0x20;
  local_18 = pTVar1;
  if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
    do {
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      *(undefined4 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x28) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)(&local_18->field_0x0 + 8) - *(int *)(&local_18->field_0x0 + 0x34);
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&local_18->field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&local_18->field_0x48)) {
        *(int *)&local_18->field_0x48 = iVar3;
        TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_78,
             (TSet<TTuple<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
              *)&this->TextureRDGUAVPool);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_68;
  local_48 = local_78;
  auStack_40._0_8_ = lStack_70;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uVar4 = local_68._8_8_ >> 0x20;
  local_18 = (TMap<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
              *)&this->TextureRDGUAVPool;
  if (local_68._12_4_ < *(int *)(local_68._0_8_ + 0x18)) {
    do {
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      *(undefined4 *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x28) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)(&local_18->field_0x0 + 8) - *(int *)(&local_18->field_0x0 + 0x34);
      if (3 < uVar6) {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&local_18->field_0x48 < iVar5)) ||
         (iVar5 < *(int *)&local_18->field_0x48)) {
        *(int *)&local_18->field_0x48 = iVar5;
        TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// ResetEmptyUAVPools @ 1492b46f0

void __thiscall FNiagaraEmptyUAVPool::ResetEmptyUAVPools(FNiagaraEmptyUAVPool *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_res18 = 0;
  puVar12 = (undefined8 *)&this->UAVPools[0].field_0x20;
  do {
    uVar8 = *(uint *)(puVar12 + 1);
    iVar6 = 0;
    iVar9 = 0;
    uVar4 = 1;
    uVar5 = 0;
    if (uVar8 != 0) {
      puVar11 = (uint *)*puVar12;
      if ((uint *)*puVar12 == (uint *)0x0) {
        puVar11 = (uint *)(puVar12 + -2);
      }
      uVar5 = *puVar11;
      while (uVar5 == 0) {
        lVar7 = (longlong)iVar6;
        iVar9 = iVar9 + 0x20;
        iVar6 = iVar6 + 1;
        uVar5 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_1492b479b;
        uVar5 = puVar11[lVar7 + 1];
      }
      uVar4 = -uVar5 & uVar5;
      uVar1 = (ulonglong)uVar4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      uVar5 = local_res20 + -1 + iVar9;
      if ((int)uVar8 < (int)uVar5) {
        uVar5 = uVar8;
      }
    }
LAB_1492b479b:
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)(puVar12 + -2);
    uVar13 = uVar8 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar4,iVar6);
    TStack_88.CurrentBitIndex = uVar5;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar6 = (int)uVar8 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = iVar9;
    uStack_68 = CONCAT44(uStack_94,*(int *)(puVar12 + -3) - *(int *)((longlong)puVar12 + 0x14));
    if (((int)uVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(uint *)(puVar12 + 1);
    if (uVar8 != uVar5) {
      pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar12;
      if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar12 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar12 + -2);
      }
      uVar8 = -1 << ((byte)uVar8 & 0x1f) &
              *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
      while (uVar8 == 0) {
        lVar7 = (longlong)iVar6;
        uVar13 = uVar13 + 0x20;
        iVar6 = iVar6 + 1;
        uVar8 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_1492b48a0;
        uVar8 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar8 = (int)lVar7 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar8) {
        uVar8 = uVar5;
      }
    }
LAB_1492b48a0:
    while( true ) {
      if (*(int *)(puVar12 + -3) - *(int *)((longlong)puVar12 + 0x14) != (int)uStack_68) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_88.CurrentBitIndex == uVar8) &&
         (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)(puVar12 + -2))) break;
      *(undefined4 *)(puVar12[-4] + 8 + (longlong)TStack_88.CurrentBitIndex * 0x28) = 0;
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    puVar12 = puVar12 + 10;
    local_res18 = local_res18 + 1;
    if (5 < local_res18) {
      return;
    }
  } while( true );
}

// Tick @ 1492bbb00

void __thiscall FNiagaraEmptyUAVPool::Tick(FNiagaraEmptyUAVPool *this)

{
  undefined1 *puVar1;
  TMap<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>_>
  *this_00;
  TMap<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>_>
  *this_01;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                         ,0x31,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this->BufferRDGUAVPool;
  bVar4 = 1 < *(int *)&(this->BufferRDGUAVPool).field_0x48;
  if (!bVar4) {
    TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->BufferRDGUAVPool).field_0x8);
  puVar1 = &(this->BufferRDGUAVPool).field_0xc;
  *(undefined4 *)&(this->BufferRDGUAVPool).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BufferRDGUAVPool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BufferRDGUAVPool).field_0x34 = 0;
  iVar2 = *(int *)&(this->BufferRDGUAVPool).field_0x2c;
  *(undefined4 *)&(this->BufferRDGUAVPool).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->BufferRDGUAVPool).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BufferRDGUAVPool).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->BufferRDGUAVPool).field_0x48 = 1;
    TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  this_01 = &this->TextureRDGUAVPool;
  bVar4 = 1 < *(int *)&(this->TextureRDGUAVPool).field_0x48;
  if (!bVar4) {
    TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_01,0,*(int *)&(this->TextureRDGUAVPool).field_0x8);
  puVar1 = &(this->TextureRDGUAVPool).field_0xc;
  *(undefined4 *)&(this->TextureRDGUAVPool).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TextureRDGUAVPool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureRDGUAVPool).field_0x34 = 0;
  iVar2 = *(int *)&(this->TextureRDGUAVPool).field_0x2c;
  *(undefined4 *)&(this->TextureRDGUAVPool).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TextureRDGUAVPool).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureRDGUAVPool).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TextureRDGUAVPool).field_0x48 = 1;
    TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  return;
}

