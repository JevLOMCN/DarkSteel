// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Bind @ 144baae20

void __thiscall
FLightFunctionSharedParameters::Bind
          (FLightFunctionSharedParameters *this,FShaderParameterMap *param_1)

{
  FShaderParameter::Bind
            (&this->LightFunctionParameters,param_1,L"LightFunctionParameters",SPF_Optional);
  return;
}

// GetLightFunctionSharedParameters @ 144bc6850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TVector4<float> * __cdecl
FLightFunctionSharedParameters::GetLightFunctionSharedParameters
          (TVector4<float> *__return_storage_ptr__,FLightSceneInfo *param_1,float param_2)

{
  uchar uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  uVar1 = param_1->Proxy->LightType;
  bVar2 = uVar1 == '\x02';
  fVar3 = __real_3f800000;
  if (bVar2) {
    fVar3 = (float)(**(code **)(param_1->Proxy->_padding_ + 0x20))();
    fVar3 = tanf(fVar3);
  }
  if (param_1->Proxy->LightType == '\x03') {
    fVar3 = *(float *)((longlong)&param_1->Proxy[1].Position.field0_0x0 + 0x14);
    if (fVar3 <= 0.0) {
      bVar2 = false;
      fVar3 = 0.0;
    }
    else {
      bVar2 = true;
    }
  }
  fVar4 = fVar5;
  if (uVar1 != '\x01') {
    fVar4 = 0.0;
  }
  if (!bVar2) {
    fVar5 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = param_2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// GetTypeLayout @ 144bcf9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FLightFunctionSharedParameters::GetTypeLayout(FLightFunctionSharedParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionSharedParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionSharedParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters";
    DAT_1550c284a = Freeze::FindFieldNameLength(L"LightFunctionParameters");
    _DAT_1550c2828 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550c2840 = 0;
    _DAT_1550c2838 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c2830 = ::TypeBuffer[0x10];
    DAT_1550c2830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionSharedParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2844 = 1;
    _DAT_1550c2848 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144bd0c10

void __cdecl
FLightFunctionSharedParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  *(undefined2 *)((longlong)param_1 + 4) = 0xfefe;
  return;
}

// StaticGetTypeLayout @ 144be7c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLightFunctionSharedParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x06';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLightFunctionS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLightFunctionSharedParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLightFunctionSharedParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightFunctionParameters";
    DAT_1550c284a = Freeze::FindFieldNameLength(L"LightFunctionParameters");
    _DAT_1550c2828 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550c2840 = 0;
    _DAT_1550c2838 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c2830 = ::TypeBuffer[0x10];
    DAT_1550c2830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLightFunctionSharedParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2844 = 1;
    _DAT_1550c2848 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

