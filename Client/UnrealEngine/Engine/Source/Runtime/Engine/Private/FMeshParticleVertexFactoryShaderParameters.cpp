// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetElementShaderBindings @ 147fd2440

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
FMeshParticleVertexFactoryShaderParameters::GetElementShaderBindings
          (FMeshParticleVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  FShaderResourceParameter FVar1;
  FRHIUniformBuffer *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  FVertexFactory *pFVar6;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FShaderParametersMetadata *pFVar10;
  FHashedName FVar11;
  FShaderUniformBufferParameter *pFVar12;
  ulonglong *puVar13;
  uint uVar14;
  FHashedName local_38;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_30;
  
  pFVar6 = param_6;
  pFVar2 = (FRHIUniformBuffer *)param_6[2]._padding_;
  pFVar10 = FMeshParticleUniformParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar10->ShaderVariableHashedName);
  FVar11.Hash = (ulong64)FHashedName::FHashedName(&local_38,(FHashedName *)&param_6);
  pFVar12 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar11);
  this_00 = param_8;
  if (pFVar12->BaseIndex != 0xffff) {
    if (pFVar2 == (FRHIUniformBuffer *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pFVar12->BaseIndex == 0xffff) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,pFVar2,(uint)pFVar12->BaseIndex);
  }
  if (2 < (int)param_5) {
    FVar1 = this->PrevTransformBuffer;
    lVar3 = *(longlong *)(pFVar6[2].Streams.AllocatorInstance.InlineData + 8);
    if (FVar1.NumResources != '\0') {
      if (lVar3 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x9a,L"Attempted to set null SRV on slot %u");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar13 = (ulonglong *)(this_00->_padding_ + 0x20);
      local_30.DataPtr = (FShaderResourceParameterInfo *)*puVar13;
      if (((ulonglong)local_30.DataPtr & 1) != 0) {
        local_30.DataPtr =
             (FShaderResourceParameterInfo *)
             (((longlong)local_30.DataPtr >> 0x18) + (longlong)puVar13);
      }
      iVar8 = *(int *)(this_00->_padding_ + 0x28);
      if (iVar8 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_30.ArrayNum = iVar8;
      iVar8 = FMeshDrawSingleShaderBindings::FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                        (this_00,&local_30,(uint)FVar1 & 0xffff);
      if (-1 < iVar8) {
        lVar4 = this_00->_padding_;
        uVar14 = iVar8 >> 0x1f & 7;
        uVar9 = iVar8 + uVar14;
        this_00->Data
        [(ulonglong)(uint)((int)uVar9 >> 3) +
         (ulonglong)
         (uint)((*(int *)(lVar4 + 0x28) + *(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 8)) * 8)] =
             this_00->Data
             [(ulonglong)(uint)((int)uVar9 >> 3) +
              (ulonglong)
              (uint)((*(int *)(lVar4 + 0x28) + *(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 8)) * 8)] |
             (byte)(1 << ((uVar9 & 7) - uVar14 & 0x1f));
        *(longlong *)
         (this_00->Data +
         (ulonglong)
         (uint)((*(int *)(this_00->_padding_ + 0x18) + *(int *)(this_00->_padding_ + 8)) * 8) +
         (longlong)iVar8 * 8) = lVar3;
      }
    }
  }
  return;
}

// GetTypeLayout @ 147fda690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMeshParticleVertexFactoryShaderParameters::GetTypeLayout
          (FMeshParticleVertexFactoryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMeshParticleVe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMeshParticleVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMeshParticleVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrevTransformBuffer";
    DAT_1552271c2 = Freeze::FindFieldNameLength(L"PrevTransformBuffer");
    _DAT_1552271a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552271a8 = ::TypeBuffer[0x10];
    DAT_1552271a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552271a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552271a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552271a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552271a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552271a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552271a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshParticleVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552271b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552271b8 = 4;
    _DAT_1552271bc = 1;
    _DAT_1552271c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

// InternalDestroy @ 147fe1b00

void __cdecl
FMeshParticleVertexFactoryShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// StaticGetTypeLayout @ 147ff8360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMeshParticleVertexFactoryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMeshParticleVe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMeshParticleVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMeshParticleVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PrevTransformBuffer";
    DAT_1552271c2 = Freeze::FindFieldNameLength(L"PrevTransformBuffer");
    _DAT_1552271a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552271a8 = ::TypeBuffer[0x10];
    DAT_1552271a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552271a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552271a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552271a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552271a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552271a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552271a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshParticleVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552271b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552271b8 = 4;
    _DAT_1552271bc = 1;
    _DAT_1552271c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

