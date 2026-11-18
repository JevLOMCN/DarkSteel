// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetElementShaderBindings @ 1481fa8a0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticleSpriteVertexFactoryShaderParametersVS::GetElementShaderBindings
          (FParticleSpriteVertexFactoryShaderParametersVS *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  FShaderResourceParameter FVar1;
  FRHIUniformBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FVertexFactory *pFVar5;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FShaderParametersMetadata *pFVar9;
  FHashedName FVar10;
  FShaderUniformBufferParameter *pFVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 local_res8;
  ushort local_resc;
  FHashedName local_38;
  FHashedName local_30;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_28;
  
  pFVar5 = param_6;
  pFVar2 = (FRHIUniformBuffer *)param_6[1]._padding_;
  pFVar9 = FParticleSpriteUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_38,&pFVar9->ShaderVariableHashedName);
  FVar10.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_38);
  pFVar11 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar10);
  this_00 = param_8;
  if (pFVar11->BaseIndex != 0xffff) {
    if (pFVar2 == (FRHIUniformBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pFVar11->BaseIndex == 0xffff) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,pFVar2,(uint)pFVar11->BaseIndex);
  }
  param_6._0_4_ = (undefined4)pFVar5[1]._padding_;
  local_res8._0_2_ = (this->NumCutoutVerticesPerFrame).BufferIndex;
  local_res8._2_2_ = (this->NumCutoutVerticesPerFrame).BaseIndex;
  local_resc = (this->NumCutoutVerticesPerFrame).NumBytes;
  FMeshDrawSingleShaderBindings::Add<int>(this_00,SUB86(&local_res8,0),(int *)&param_6);
  lVar3 = *(longlong *)pFVar5[1].Streams.AllocatorInstance.InlineData;
  FVar1 = this->CutoutGeometry;
  lVar14 = GFNullSubUVCutoutVertexBuffer._40_8_;
  if (lVar3 != 0) {
    lVar14 = lVar3;
  }
  if (FVar1.NumResources != '\0') {
    if (lVar14 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x9a,L"Attempted to set null SRV on slot %u");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar12 = (ulonglong *)(this_00->_padding_ + 0x20);
    local_28.DataPtr = (FShaderResourceParameterInfo *)*puVar12;
    if (((ulonglong)local_28.DataPtr & 1) != 0) {
      local_28.DataPtr =
           (FShaderResourceParameterInfo *)
           (((longlong)local_28.DataPtr >> 0x18) + (longlong)puVar12);
    }
    iVar7 = *(int *)(this_00->_padding_ + 0x28);
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_28.ArrayNum = iVar7;
    iVar7 = FMeshDrawSingleShaderBindings::FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                      (this_00,&local_28,(uint)FVar1 & 0xffff);
    if (-1 < iVar7) {
      lVar3 = this_00->_padding_;
      uVar13 = iVar7 >> 0x1f & 7;
      uVar8 = iVar7 + uVar13;
      this_00->Data
      [(ulonglong)(uint)((int)uVar8 >> 3) +
       (ulonglong)
       (uint)((*(int *)(lVar3 + 0x28) + *(int *)(lVar3 + 0x18) + *(int *)(lVar3 + 8)) * 8)] =
           this_00->Data
           [(ulonglong)(uint)((int)uVar8 >> 3) +
            (ulonglong)
            (uint)((*(int *)(lVar3 + 0x28) + *(int *)(lVar3 + 0x18) + *(int *)(lVar3 + 8)) * 8)] |
           (byte)(1 << ((uVar8 & 7) - uVar13 & 0x1f));
      *(longlong *)
       (this_00->Data +
       (ulonglong)
       (uint)((*(int *)(this_00->_padding_ + 0x18) + *(int *)(this_00->_padding_ + 8)) * 8) +
       (longlong)iVar7 * 8) = lVar14;
    }
  }
  return;
}

// GetTypeLayout @ 1481ffbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FParticleSpriteVertexFactoryShaderParametersVS::GetTypeLayout
          (FParticleSpriteVertexFactoryShaderParametersVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FParticleSprite;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FParticleSpriteVertexFactoryShaderParametersVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CutoutGeometry";
    DAT_15522f78a = Freeze::FindFieldNameLength(L"CutoutGeometry");
    _DAT_15522f768 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522f770 = ::TypeBuffer[0x10];
    DAT_15522f770_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522f770_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522f770_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522f770_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522f770_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522f770_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522f770_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522f778 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522f780 = 10;
    _DAT_15522f784 = 1;
    _DAT_15522f788 = 0;
    `public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumCutoutVerticesPerFrame";
    DAT_15522f75a = Freeze::FindFieldNameLength(L"NumCutoutVerticesPerFrame");
    _DAT_15522f738 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522f740 = ::TypeBuffer[0x10];
    DAT_15522f740_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522f740_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522f740_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522f740_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522f740_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522f740_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522f740_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522f748 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522f750 = 4;
    _DAT_15522f754 = 1;
    _DAT_15522f758 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FParticleSpriteVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 148205480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FParticleSpriteVertexFactoryShaderParametersVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// StaticGetTypeLayout @ 148220310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FParticleSpriteVertexFactoryShaderParametersVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FParticleSprite;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FParticleSpriteVertexFactoryShaderParametersVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CutoutGeometry";
    DAT_15522f78a = Freeze::FindFieldNameLength(L"CutoutGeometry");
    _DAT_15522f768 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522f770 = ::TypeBuffer[0x10];
    DAT_15522f770_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522f770_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522f770_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522f770_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522f770_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522f770_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522f770_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522f778 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522f780 = 10;
    _DAT_15522f784 = 1;
    _DAT_15522f788 = 0;
    `public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumCutoutVerticesPerFrame";
    DAT_15522f75a = Freeze::FindFieldNameLength(L"NumCutoutVerticesPerFrame");
    _DAT_15522f738 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522f740 = ::TypeBuffer[0x10];
    DAT_15522f740_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522f740_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522f740_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522f740_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522f740_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522f740_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522f740_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FParticleSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522f748 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522f750 = 4;
    _DAT_15522f754 = 1;
    _DAT_15522f758 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FParticleSpriteVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

