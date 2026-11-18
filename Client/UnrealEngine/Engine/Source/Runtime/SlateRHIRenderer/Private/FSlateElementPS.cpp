// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 6

// FSlateElementPS @ 145fe5ea0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSlateElementPS * __thiscall
FSlateElementPS::FSlateElementPS
          (FSlateElementPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  (this->VirtualTextureParams).BaseIndex = 0xffff;
  this_00 = &this->TextureParameter;
  (this->TextureParameterSampler).BaseIndex = 0;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  *(undefined8 *)&(this->TextureParameterSampler).NumResources = 0;
  (this->ShaderParams2).BufferIndex = 0;
  (this->ShaderParams2).BaseIndex = 0;
  (this->ShaderParams2).NumBytes = 0;
  (this->GammaAndAlphaValues).BufferIndex = 0;
  (this->GammaAndAlphaValues).BaseIndex = 0;
  (this->GammaAndAlphaValues).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"ElementTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->TextureParameterSampler,param_1->ParameterMap,L"ElementTextureSampler",
             SPF_Optional);
  FShaderParameter::Bind(&this->ShaderParams,param_1->ParameterMap,L"ShaderParams",SPF_Optional);
  FShaderParameter::Bind(&this->ShaderParams2,param_1->ParameterMap,L"ShaderParams2",SPF_Optional);
  FShaderParameter::Bind
            (&this->GammaAndAlphaValues,param_1->ParameterMap,L"GammaAndAlphaValues",SPF_Optional);
  FShaderUniformBufferParameter::Bind
            (&this->VirtualTextureParams,param_1->ParameterMap,L"SlateElementVirtualTextureParams",
             SPF_Optional);
  return this;
}

// GetTypeLayout @ 1460194a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FSlateElementPS::GetTypeLayout(FSlateElementPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSlateElementPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSlateElementPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VirtualTextureParams";
    DAT_15519e11a = Freeze::FindFieldNameLength(L"VirtualTextureParams");
    _DAT_15519e0f8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15519e100 = ::TypeBuffer[0x10];
    DAT_15519e100_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e100_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e100_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e100_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e100_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e100_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e100_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e108 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e110 = 0xfa;
    _DAT_15519e114 = 1;
    _DAT_15519e118 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "GammaAndAlphaValues";
    DAT_15519e0ea = Freeze::FindFieldNameLength(L"GammaAndAlphaValues");
    _DAT_15519e0c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e0d0 = ::TypeBuffer[0x10];
    DAT_15519e0d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e0d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e0d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e0d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e0d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e0d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e0d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e0d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e0e0 = 0xf4;
    _DAT_15519e0e4 = 1;
    _DAT_15519e0e8 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams2";
    DAT_15519e0ba = Freeze::FindFieldNameLength(L"ShaderParams2");
    _DAT_15519e098 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e0a0 = ::TypeBuffer[0x10];
    DAT_15519e0a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e0a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e0a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e0a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e0a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e0a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e0a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e0a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e0b0 = 0xee;
    _DAT_15519e0b4 = 1;
    _DAT_15519e0b8 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams";
    DAT_15519e08a = Freeze::FindFieldNameLength(L"ShaderParams");
    _DAT_15519e068 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e070 = ::TypeBuffer[0x10];
    DAT_15519e070_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e070_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e070_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e070_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e070_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e070_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e070_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e078 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e080 = 0xe8;
    _DAT_15519e084 = 1;
    _DAT_15519e088 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameterSampler";
    DAT_15519e05a = Freeze::FindFieldNameLength(L"TextureParameterSampler");
    _DAT_15519e038 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519e040 = ::TypeBuffer[0x10];
    DAT_15519e040_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e040_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e040_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e040_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e040_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e040_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e040_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e048 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e050 = 0xe4;
    _DAT_15519e054 = 1;
    _DAT_15519e058 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameter";
    DAT_15519e02a = Freeze::FindFieldNameLength(L"TextureParameter");
    _DAT_15519e008 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519e010 = ::TypeBuffer[0x10];
    DAT_15519e010_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e010_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e010_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e010_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e010_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e010_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e010_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519e018 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e020 = 0xe0;
    _DAT_15519e024 = 1;
    _DAT_15519e028 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

// InternalDestroy @ 14601b170

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FSlateElementPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ModifyCompilationEnvironment @ 14601cc10

void __cdecl
FSlateElementPS::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  uint uVar6;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.HDR.Display.OutputDevice",1);
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    ::CVar = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = ::CVar;
  if (::CVar == (TConsoleVariableData<int> *)0x0) {
    uVar6 = 1;
  }
  else {
    bVar2 = IsInParallelGameThread();
    if (((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = (uint)(pTVar5->ShadowedValue[0] == 1);
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_709",uVar6);
  return;
}

// SetVirtualTextureParameters @ 146025b30

void __thiscall
FSlateElementPS::SetVirtualTextureParameters
          (FSlateElementPS *this,FMeshDrawSingleShaderBindings *param_1,
          FVirtualTexture2DResource *param_2)

{
  FShaderResourceParameter FVar1;
  longlong lVar2;
  FRHIUniformBuffer *this_00;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IAllocatedVirtualTexture *pIVar9;
  longlong lVar10;
  FShaderParametersMetadata *pFVar11;
  TRefCountPtr<FRHIUniformBuffer> TVar12;
  ulonglong *puVar13;
  uint uVar14;
  FFeedbackShaderParams local_108;
  FRHIResource *local_e8;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_e0;
  undefined8 local_d0;
  FScriptContainerElement *pFStack_c8;
  longlong local_b8;
  FRHIUnorderedAccessView *local_b0;
  longlong local_a8;
  ForAnyElementType FStack_a0;
  int local_98;
  int iStack_94;
  ForAnyElementType FStack_90;
  int local_88;
  int iStack_84;
  ForAnyElementType FStack_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  longlong local_58;
  ForAnyElementType FStack_50;
  int local_48;
  int iStack_44;
  ForAnyElementType FStack_40;
  
  if (param_2 != (FVirtualTexture2DResource *)0x0) {
    pIVar9 = FVirtualTexture2DResource::AcquireAllocatedVT(param_2);
    lVar10 = (**(code **)(pIVar9->_padding_ + 0x30))
                       (pIVar9,0,*(undefined1 *)((longlong)&param_2->_padding_ + 6));
    FVar1 = this->TextureParameter;
    if (FVar1.NumResources != '\0') {
      if ((lVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x9a,L"Attempted to set null SRV on slot %u"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar13 = (ulonglong *)(param_1->_padding_ + 0x20);
      local_e0.DataPtr = (FShaderResourceParameterInfo *)*puVar13;
      if (((ulonglong)local_e0.DataPtr & 1) != 0) {
        local_e0.DataPtr =
             (FShaderResourceParameterInfo *)
             (((longlong)local_e0.DataPtr >> 0x18) + (longlong)puVar13);
      }
      iVar7 = *(int *)(param_1->_padding_ + 0x28);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e0.ArrayNum = iVar7;
      iVar7 = FMeshDrawSingleShaderBindings::FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                        (param_1,&local_e0,(uint)FVar1 & 0xffff);
      if (-1 < iVar7) {
        lVar2 = param_1->_padding_;
        uVar14 = iVar7 >> 0x1f & 7;
        uVar8 = iVar7 + uVar14;
        param_1->Data
        [(ulonglong)(uint)((int)uVar8 >> 3) +
         (ulonglong)
         (uint)((*(int *)(lVar2 + 0x28) + *(int *)(lVar2 + 0x18) + *(int *)(lVar2 + 8)) * 8)] =
             param_1->Data
             [(ulonglong)(uint)((int)uVar8 >> 3) +
              (ulonglong)
              (uint)((*(int *)(lVar2 + 0x28) + *(int *)(lVar2 + 0x18) + *(int *)(lVar2 + 8)) * 8)] |
             (byte)(1 << ((uVar8 & 7) - uVar14 & 0x1f));
        *(longlong *)
         (param_1->Data +
         (ulonglong)
         (uint)((*(int *)(param_1->_padding_ + 0x18) + *(int *)(param_1->_padding_ + 8)) * 8) +
         (longlong)iVar7 * 8) = lVar10;
      }
    }
    FMeshDrawSingleShaderBindings::Add
              (param_1,this->TextureParameterSampler,(FRHISamplerState *)param_2->_padding_);
    (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9,&local_58);
    (**(code **)(pIVar9->_padding_ + 0x40))(pIVar9,&local_d0,0);
    local_108.BufferUAV = (FRHIUnorderedAccessView *)0x0;
    local_108.BufferSize = 0;
    local_108.TileShift = 0;
    local_108.TileMask = 0;
    local_108.TileJitterOffset = 0;
    local_108.SampleOffset = 0;
    local_108.ExtendedDebugBufferSize = 0;
    VirtualTexture::GetFeedbackShaderParams(&local_108);
    uVar4 = local_108.TileMask;
    uVar14 = local_108.TileShift;
    uVar5 = local_108.TileJitterOffset;
    uVar8 = local_108.BufferSize;
    local_b8 = (**(code **)(pIVar9->_padding_ + 0x10))(pIVar9,0);
    local_a8 = local_58;
    FStack_a0.Data = FStack_50.Data;
    local_b0 = local_108.BufferUAV;
    local_98 = local_48;
    iStack_94 = iStack_44;
    FStack_90.Data = FStack_40.Data;
    local_88 = (int)local_d0;
    iStack_84 = local_d0._4_4_;
    FStack_80.Data = pFStack_c8;
    local_78 = uVar4;
    local_74 = uVar14;
    local_70 = uVar5;
    local_6c = uVar8;
    local_68 = 0;
    pFVar11 = FSlateElementVirtualTextureParams::GetStructMetadata();
    if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar12 = RHICreateUniformBuffer
                       (&local_e8,(FRHIUniformBufferLayout *)&local_b8,
                        (EUniformBufferUsage)(pFVar11->Layout).Reference,ValidateResources);
    this_00 = (FRHIUniformBuffer *)(TVar12.Reference)->_padding_;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      pFVar11 = FSlateElementVirtualTextureParams::GetStructMetadata();
      if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar11->Layout).Reference != (this_00->Layout).Reference) {
        pFVar11 = FSlateElementVirtualTextureParams::GetStructMetadata();
        if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (local_e8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_e8);
    }
    if ((this->VirtualTextureParams).BaseIndex != 0xffff) {
      if ((this_00 == (FRHIUniformBuffer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x8f,L"Attempted to set null uniform buffer"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->VirtualTextureParams).BaseIndex == 0xffff) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_1,this_00,(uint)(this->VirtualTextureParams).BaseIndex);
    }
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// StaticGetTypeLayout @ 14602ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSlateElementPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSlateElementPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSlateElementPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VirtualTextureParams";
    DAT_15519e11a = Freeze::FindFieldNameLength(L"VirtualTextureParams");
    _DAT_15519e0f8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15519e100 = ::TypeBuffer[0x10];
    DAT_15519e100_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e100_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e100_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e100_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e100_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e100_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e100_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e108 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e110 = 0xfa;
    _DAT_15519e114 = 1;
    _DAT_15519e118 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "GammaAndAlphaValues";
    DAT_15519e0ea = Freeze::FindFieldNameLength(L"GammaAndAlphaValues");
    _DAT_15519e0c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e0d0 = ::TypeBuffer[0x10];
    DAT_15519e0d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e0d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e0d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e0d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e0d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e0d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e0d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e0d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e0e0 = 0xf4;
    _DAT_15519e0e4 = 1;
    _DAT_15519e0e8 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams2";
    DAT_15519e0ba = Freeze::FindFieldNameLength(L"ShaderParams2");
    _DAT_15519e098 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e0a0 = ::TypeBuffer[0x10];
    DAT_15519e0a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e0a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e0a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e0a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e0a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e0a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e0a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e0a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e0b0 = 0xee;
    _DAT_15519e0b4 = 1;
    _DAT_15519e0b8 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams";
    DAT_15519e08a = Freeze::FindFieldNameLength(L"ShaderParams");
    _DAT_15519e068 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519e070 = ::TypeBuffer[0x10];
    DAT_15519e070_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e070_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e070_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e070_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e070_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e070_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e070_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e078 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e080 = 0xe8;
    _DAT_15519e084 = 1;
    _DAT_15519e088 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameterSampler";
    DAT_15519e05a = Freeze::FindFieldNameLength(L"TextureParameterSampler");
    _DAT_15519e038 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519e040 = ::TypeBuffer[0x10];
    DAT_15519e040_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e040_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e040_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e040_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e040_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e040_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e040_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519e048 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e050 = 0xe4;
    _DAT_15519e054 = 1;
    _DAT_15519e058 = 0;
    `public:_static_void___cdecl_FSlateElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameter";
    DAT_15519e02a = Freeze::FindFieldNameLength(L"TextureParameter");
    _DAT_15519e008 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519e010 = ::TypeBuffer[0x10];
    DAT_15519e010_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519e010_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519e010_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519e010_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519e010_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519e010_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519e010_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateElementPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519e018 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519e020 = 0xe0;
    _DAT_15519e024 = 1;
    _DAT_15519e028 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

