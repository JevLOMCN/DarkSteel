// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 10

// FSlateMaterialShaderPS @ 145fe6900

FSlateMaterialShaderPS * __thiscall
FSlateMaterialShaderPS::FSlateMaterialShaderPS
          (FSlateMaterialShaderPS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FMaterialShader::FMaterialShader((FMaterialShader *)this,param_1);
  this_00 = &this->ShaderParams;
  (this->GammaAndAlphaValues).BufferIndex = 0;
  (this->GammaAndAlphaValues).BaseIndex = 0;
  (this->GammaAndAlphaValues).NumBytes = 0;
  (this->DrawFlags).BufferIndex = 0;
  (this->DrawFlags).BaseIndex = 0;
  (this->DrawFlags).NumBytes = 0;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ShaderParams).NumBytes = 0;
  (this->ShaderParams2).BufferIndex = 0;
  (this->ShaderParams2).BaseIndex = 0;
  (this->ShaderParams2).NumBytes = 0;
  (this->TextureParameterSampler).BaseIndex = 0;
  *(undefined4 *)&(this->TextureParameterSampler).NumResources = 0;
  (this->AdditionalTextureParameter).NumResources = '\0';
  (this->AdditionalTextureParameter).Type = LooseData;
  FShaderParameter::Bind
            (this_00,(FShaderParameterMap *)param_1->_padding_,L"ShaderParams",SPF_Optional);
  FShaderParameter::Bind
            (&this->ShaderParams2,(FShaderParameterMap *)param_1->_padding_,L"ShaderParams2",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->GammaAndAlphaValues,(FShaderParameterMap *)param_1->_padding_,
             L"GammaAndAlphaValues",SPF_Optional);
  FShaderParameter::Bind
            (&this->DrawFlags,(FShaderParameterMap *)param_1->_padding_,L"DrawFlags",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->AdditionalTextureParameter,(FShaderParameterMap *)param_1->_padding_,
             L"ElementTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->TextureParameterSampler,(FShaderParameterMap *)param_1->_padding_,
             L"ElementTextureSampler",SPF_Optional);
  return this;
}

// GetTypeLayout @ 1460194e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FSlateMaterialShaderPS::GetTypeLayout(FSlateMaterialShaderPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSlateMaterialS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSlateMaterialShaderPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalTextureParameter";
    DAT_15519d34a = Freeze::FindFieldNameLength(L"AdditionalTextureParameter");
    _DAT_15519d328 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519d330 = ::TypeBuffer[0x10];
    DAT_15519d330_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d330_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d330_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d330_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d330_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d330_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d330_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d338 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d340 = 0x114;
    _DAT_15519d344 = 1;
    _DAT_15519d348 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameterSampler";
    DAT_15519d31a = Freeze::FindFieldNameLength(L"TextureParameterSampler");
    _DAT_15519d2f8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519d300 = ::TypeBuffer[0x10];
    DAT_15519d300_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d300_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d300_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d300_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d300_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d300_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d300_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d308 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d310 = 0x110;
    _DAT_15519d314 = 1;
    _DAT_15519d318 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams2";
    DAT_15519d2ea = Freeze::FindFieldNameLength(L"ShaderParams2");
    _DAT_15519d2c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d2d0 = ::TypeBuffer[0x10];
    DAT_15519d2d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d2d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d2d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d2d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d2d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d2d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d2d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d2d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d2e0 = 0x10a;
    _DAT_15519d2e4 = 1;
    _DAT_15519d2e8 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams";
    DAT_15519d2ba = Freeze::FindFieldNameLength(L"ShaderParams");
    _DAT_15519d298 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d2a0 = ::TypeBuffer[0x10];
    DAT_15519d2a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d2a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d2a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d2a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d2a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d2a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d2a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d2a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d2b0 = 0x104;
    _DAT_15519d2b4 = 1;
    _DAT_15519d2b8 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DrawFlags";
    DAT_15519d28a = Freeze::FindFieldNameLength(L"DrawFlags");
    _DAT_15519d268 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d270 = ::TypeBuffer[0x10];
    DAT_15519d270_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d270_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d270_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d270_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d270_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d270_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d270_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d278 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d280 = 0xfe;
    _DAT_15519d284 = 1;
    _DAT_15519d288 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "GammaAndAlphaValues";
    DAT_15519d25a = Freeze::FindFieldNameLength(L"GammaAndAlphaValues");
    _DAT_15519d238 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d240 = ::TypeBuffer[0x10];
    DAT_15519d240_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d240_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d240_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d240_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d240_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d240_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d240_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519d248 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d250 = 0xf8;
    _DAT_15519d254 = 1;
    _DAT_15519d258 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 14601b270

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
FSlateMaterialShaderPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// ModifyCompilationEnvironment @ 14601cd30

void __cdecl
FSlateMaterialShaderPS::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_MATERIALS",1);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CUSTOMIZED_UVS",(int)(param_1->MaterialParameters)._padding_);
  return;
}

// SetAdditionalTexture @ 146024480

void __thiscall
FSlateMaterialShaderPS::SetAdditionalTexture
          (FSlateMaterialShaderPS *this,FMeshDrawSingleShaderBindings *param_1,FRHITexture *param_2,
          TRefCountPtr<FRHISamplerState> param_3)

{
                    /* WARNING: Load size is inaccurate */
  FMeshDrawSingleShaderBindings::AddTexture
            (param_1,this->AdditionalTextureParameter,this->TextureParameterSampler,
             *param_3.Reference,param_2);
  if (*(FRHIResource **)param_3.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)param_3.Reference);
    return;
  }
  return;
}

// SetDisplayGammaAndContrast @ 146024820

void __thiscall
FSlateMaterialShaderPS::SetDisplayGammaAndContrast
          (FSlateMaterialShaderPS *this,FMeshDrawSingleShaderBindings *param_1,float param_2,
          float param_3)

{
  undefined4 local_res8;
  ushort local_resc;
  TVector4<float>_u_0 local_18;
  
  local_res8._0_2_ = (this->GammaAndAlphaValues).BufferIndex;
  local_res8._2_2_ = (this->GammaAndAlphaValues).BaseIndex;
  local_18._s_0.Y = __real_3f800000 / param_2;
  local_resc = (this->GammaAndAlphaValues).NumBytes;
  local_18._s_0.Z = 0.0;
  local_18._s_0.X = local_18._s_0.Y * __real_400ccccd;
  local_18._s_0.W = param_3;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            (param_1,SUB86(&local_res8,0),(TVector4<float> *)&local_18._s_0);
  return;
}

// SetDrawFlags @ 146024890

void __thiscall
FSlateMaterialShaderPS::SetDrawFlags
          (FSlateMaterialShaderPS *this,FMeshDrawSingleShaderBindings *param_1,bool param_2)

{
  undefined4 local_res8;
  ushort local_resc;
  TVector4<float>_u_0 local_18;
  
  local_18._s_0.X = 0.0;
  if (param_2) {
    local_18._s_0.X = __real_3f800000;
  }
  local_res8._0_2_ = (this->DrawFlags).BufferIndex;
  local_res8._2_2_ = (this->DrawFlags).BaseIndex;
  local_resc = (this->DrawFlags).NumBytes;
  local_18._4_8_ = 0;
  local_18._s_0.W = 0.0;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            (param_1,SUB86(&local_res8,0),(TVector4<float> *)&local_18._s_0);
  return;
}

// SetMaterialShaderParameters @ 146024900

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

void __thiscall
FSlateMaterialShaderPS::SetMaterialShaderParameters
          (FSlateMaterialShaderPS *this,FMeshDrawSingleShaderBindings *param_1,
          FSceneInterface *param_2,TUniformBufferRef<FViewUniformShaderParameters> *param_3,
          FMaterialRenderProxy *param_4,FMaterial *param_5,FShaderParams *param_6)

{
  undefined4 uVar1;
  FShaderParams *pFVar2;
  FShaderParametersMetadata *pFVar3;
  FHashedName FVar4;
  TShaderUniformBufferParameter<FViewUniformShaderParameters> *pTVar5;
  Type TVar6;
  FHashedName local_res8;
  TVector4<float>_u_0 local_28;
  
  pFVar2 = param_6;
  uVar1._0_2_ = (this->ShaderParams).BufferIndex;
  uVar1._2_2_ = (this->ShaderParams).BaseIndex;
  local_28._0_8_ = *(undefined8 *)&(param_6->PixelParams).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_6->PixelParams).field0_0x0 + 8);
  param_6._0_4_ = uVar1;
  param_6._4_2_ = (this->ShaderParams).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            (param_1,SUB86(&param_6,0),(TVector4<float> *)&local_28._s_0);
  param_6._0_2_ = (this->ShaderParams2).BufferIndex;
  param_6._2_2_ = (this->ShaderParams2).BaseIndex;
  local_28._0_8_ = *(undefined8 *)&(pFVar2->PixelParams2).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(pFVar2->PixelParams2).field0_0x0 + 8);
  param_6._4_2_ = (this->ShaderParams2).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            (param_1,SUB86(&param_6,0),(TVector4<float> *)&local_28._s_0);
  pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar3->ShaderVariableHashedName);
  FVar4.Hash = (ulong64)FHashedName::FHashedName(&local_res8,(FHashedName *)&param_6);
  pTVar5 = (TShaderUniformBufferParameter<FViewUniformShaderParameters> *)
           FShader::GetUniformBufferParameter((FShader *)this,FVar4);
  FMeshDrawSingleShaderBindings::Add<FViewUniformShaderParameters>(param_1,pTVar5,param_3);
  TVar6 = GMaxRHIFeatureLevel;
  if (param_2 != (FSceneInterface *)0x0) {
    TVar6 = param_2->FeatureLevel;
  }
  FMaterialShader::GetShaderBindings((FMaterialShader *)this,param_2,TVar6,param_4,param_5,param_1);
  return;
}

// ShouldCompilePermutation @ 146025f30

bool __cdecl
FSlateMaterialShaderPS::ShouldCompilePermutation(FMaterialShaderPermutationParameters *param_1)

{
  return (int)(param_1->MaterialParameters)._padding_ == 5;
}

// StaticGetTypeLayout @ 14602b4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSlateMaterialShaderPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSlateMaterialS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSlateMaterialShaderPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalTextureParameter";
    DAT_15519d34a = Freeze::FindFieldNameLength(L"AdditionalTextureParameter");
    _DAT_15519d328 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519d330 = ::TypeBuffer[0x10];
    DAT_15519d330_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d330_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d330_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d330_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d330_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d330_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d330_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d338 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d340 = 0x114;
    _DAT_15519d344 = 1;
    _DAT_15519d348 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureParameterSampler";
    DAT_15519d31a = Freeze::FindFieldNameLength(L"TextureParameterSampler");
    _DAT_15519d2f8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15519d300 = ::TypeBuffer[0x10];
    DAT_15519d300_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d300_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d300_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d300_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d300_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d300_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d300_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d308 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d310 = 0x110;
    _DAT_15519d314 = 1;
    _DAT_15519d318 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams2";
    DAT_15519d2ea = Freeze::FindFieldNameLength(L"ShaderParams2");
    _DAT_15519d2c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d2d0 = ::TypeBuffer[0x10];
    DAT_15519d2d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d2d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d2d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d2d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d2d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d2d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d2d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d2d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d2e0 = 0x10a;
    _DAT_15519d2e4 = 1;
    _DAT_15519d2e8 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParams";
    DAT_15519d2ba = Freeze::FindFieldNameLength(L"ShaderParams");
    _DAT_15519d298 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d2a0 = ::TypeBuffer[0x10];
    DAT_15519d2a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d2a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d2a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d2a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d2a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d2a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d2a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d2a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d2b0 = 0x104;
    _DAT_15519d2b4 = 1;
    _DAT_15519d2b8 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DrawFlags";
    DAT_15519d28a = Freeze::FindFieldNameLength(L"DrawFlags");
    _DAT_15519d268 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d270 = ::TypeBuffer[0x10];
    DAT_15519d270_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d270_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d270_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d270_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d270_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d270_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d270_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15519d278 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d280 = 0xfe;
    _DAT_15519d284 = 1;
    _DAT_15519d288 = 0;
    `public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "GammaAndAlphaValues";
    DAT_15519d25a = Freeze::FindFieldNameLength(L"GammaAndAlphaValues");
    _DAT_15519d238 = FShaderParameter::StaticGetTypeLayout();
    DAT_15519d240 = ::TypeBuffer[0x10];
    DAT_15519d240_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15519d240_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15519d240_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15519d240_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15519d240_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15519d240_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15519d240_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSlateMaterialShaderPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15519d248 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15519d250 = 0xf8;
    _DAT_15519d254 = 1;
    _DAT_15519d258 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

