// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSimpleElementMaskedGammaBasePS @ 1485a49b0

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

FSimpleElementMaskedGammaBasePS * __thiscall
FSimpleElementMaskedGammaBasePS::FSimpleElementMaskedGammaBasePS
          (FSimpleElementMaskedGammaBasePS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FSimpleElementPS::FSimpleElementPS((FSimpleElementPS *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  FShaderParameter::Bind
            ((FShaderParameter *)&this->_padding_,param_1->ParameterMap,L"Gamma",SPF_Optional);
  this_00 = &this->ClipRef;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ClipRef).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ClipRef",SPF_Mandatory);
  return this;
}

// GetTypeLayout @ 1485cbc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FSimpleElementMaskedGammaBasePS::GetTypeLayout(FSimpleElementMaskedGammaBasePS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementM;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementMaskedGammaBasePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementMaskedGammaBasePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ClipRef";
    DAT_1552435ea = Freeze::FindFieldNameLength(L"ClipRef");
    _DAT_1552435c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552435d0 = ::TypeBuffer[0x10];
    DAT_1552435d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552435d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552435d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552435d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552435d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552435d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552435d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementMaskedGammaBasePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552435d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552435e0 = 0x108;
    _DAT_1552435e4 = 1;
    _DAT_1552435e8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FSimpleElementGammaBasePS::StaticGetTypeLayout();
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

// InternalDestroy @ 1485cdd70

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
FSimpleElementMaskedGammaBasePS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// SetParameters @ 1485d9640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSimpleElementMaskedGammaBasePS::SetParameters
          (FSimpleElementMaskedGammaBasePS *this,FRHIBatchedShaderParameters *param_1,
          FSceneView *param_2,FTexture *param_3,float param_4,float param_5,
          ESimpleElementBlendMode param_6)

{
  TUniformBufferRef<FViewUniformShaderParameters> TVar1;
  FShaderParametersMetadata *pFVar2;
  FHashedName FVar3;
  FShaderUniformBufferParameter *pFVar4;
  FHashedName local_res18;
  FHashedName local_18 [2];
  
  if (param_2 == (FSceneView *)0x0) {
    pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
    FVar3.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res18);
    pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
    SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)0x0);
  }
  else {
    TVar1 = param_2->ViewUniformBuffer;
    pFVar2 = FViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res18,&pFVar2->ShaderVariableHashedName);
    FVar3.Hash = (ulong64)FHashedName::FHashedName(local_18,&local_res18);
    pFVar4 = FShader::GetUniformBufferParameter((FShader *)this,FVar3);
    SetUniformBufferParameter(param_1,pFVar4,(FRHIUniformBuffer *)TVar1);
  }
  SetParameters(this,param_1,param_3,param_4,param_5,param_6);
  return;
}

// SetParameters @ 1485d9730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementMaskedGammaBasePS::SetParameters
          (FSimpleElementMaskedGammaBasePS *this,FRHIBatchedShaderParameters *param_1,
          FTexture *param_2,float param_3,float param_4,ESimpleElementBlendMode param_5)

{
  ushort uVar1;
  uint uVar2;
  float local_res20 [2];
  
  local_res20[0] = param_3;
  FSimpleElementPS::SetParameters((FSimpleElementPS *)this,param_1,param_2);
  uVar1 = *(ushort *)((longlong)&this->_padding_ + 4);
  uVar2 = (uint)uVar1;
  if (4 < uVar1) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(ushort)this->_padding_,
               (uint)*(ushort *)((longlong)&this->_padding_ + 2),uVar2,local_res20);
  }
  uVar1 = (this->ClipRef).NumBytes;
  uVar2 = (uint)uVar1;
  if (4 < uVar1) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ClipRef).BufferIndex,(uint)(this->ClipRef).BaseIndex,uVar2,
               &param_4);
  }
  return;
}

// StaticGetTypeLayout @ 1485dd5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSimpleElementMaskedGammaBasePS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementM;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementMaskedGammaBasePS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementMaskedGammaBasePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ClipRef";
    DAT_1552435ea = Freeze::FindFieldNameLength(L"ClipRef");
    _DAT_1552435c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552435d0 = ::TypeBuffer[0x10];
    DAT_1552435d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552435d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552435d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552435d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552435d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552435d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552435d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementMaskedGammaBasePS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552435d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552435e0 = 0x108;
    _DAT_1552435e4 = 1;
    _DAT_1552435e8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FSimpleElementGammaBasePS::StaticGetTypeLayout();
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

