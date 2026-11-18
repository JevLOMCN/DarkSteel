// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FSimpleElementVS @ 1485a4b10

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

FSimpleElementVS * __thiscall
FSimpleElementVS::FSimpleElementVS
          (FSimpleElementVS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->RelativeTransform;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->RelativeTransform).NumBytes = 0;
  (this->TransformPositionHigh).BufferIndex = 0;
  (this->TransformPositionHigh).BaseIndex = 0;
  (this->TransformPositionHigh).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"Transform",SPF_Mandatory);
  FShaderParameter::Bind
            (&this->TransformPositionHigh,param_1->ParameterMap,L"TransformPositionHigh",
             SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 1485af600

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

FShader * __cdecl
FSimpleElementVS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"Transform",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"TransformPositionHigh",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1485afa40

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

FShader * __cdecl FSimpleElementVS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1485cb330

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

FGlobalShaderType * __cdecl FSimpleElementVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FSimpleElementVS",
                 L"/Engine/Private/SimpleElementVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf0,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/SimpleElementVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FSimpleElementVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1485cbc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FSimpleElementVS::GetTypeLayout(FSimpleElementVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TransformPositionHigh";
    DAT_15524346a = Freeze::FindFieldNameLength(L"TransformPositionHigh");
    _DAT_155243448 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243450 = ::TypeBuffer[0x10];
    DAT_155243450_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243450_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243450_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243450_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243450_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243450_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243450_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243458 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243460 = 0xe6;
    _DAT_155243464 = 1;
    _DAT_155243468 = 0;
    `public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RelativeTransform";
    DAT_15524343a = Freeze::FindFieldNameLength(L"RelativeTransform");
    _DAT_155243418 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243420 = ::TypeBuffer[0x10];
    DAT_155243420_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243420_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243420_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243420_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243420_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243420_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243420_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243428 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243430 = 0xe0;
    _DAT_155243434 = 1;
    _DAT_155243438 = 0;
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

// InternalDestroy @ 1485cddf0

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
FSimpleElementVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf0);
  return;
}

// ModifyCompilationEnvironment @ 1485cfc30

void __cdecl
FSimpleElementVS::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"ENABLE_LWC",1);
  return;
}

// SetParameters @ 1485d99c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementVS::SetParameters
          (FSimpleElementVS *this,FRHIBatchedShaderParameters *param_1,TMatrix<double> *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStackY_f8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar1 = (this->RelativeTransform).NumBytes;
  uVar2 = (uint)uVar1;
  fStack_a0 = (float)param_2->M[0][2];
  fStack_9c = (float)param_2->M[0][3];
  if (0x80 < uVar1) {
    uVar2 = 0x80;
  }
  local_bc = 0x3f800000;
  local_ac = 0x3f800000;
  local_a8 = (float)param_2->M[0][0];
  fStack_a4 = (float)param_2->M[0][1];
  fStack_90 = (float)param_2->M[1][2];
  fStack_8c = (float)param_2->M[1][3];
  local_98 = (float)param_2->M[1][0];
  fStack_94 = (float)param_2->M[1][1];
  fStack_80 = (float)param_2->M[2][2];
  fStack_7c = (float)param_2->M[2][3];
  local_88 = (float)param_2->M[2][0];
  fStack_84 = (float)param_2->M[2][1];
  fStack_70 = (float)param_2->M[3][2];
  fStack_6c = (float)param_2->M[3][3];
  local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = (float)param_2->M[3][0];
  fStack_74 = (float)param_2->M[3][1];
  local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = local_a8;
  fStack_64 = fStack_a4;
  fStack_60 = fStack_a0;
  fStack_5c = fStack_9c;
  local_58 = local_98;
  fStack_54 = fStack_94;
  fStack_50 = fStack_90;
  fStack_4c = fStack_8c;
  local_48 = local_88;
  fStack_44 = fStack_84;
  fStack_40 = fStack_80;
  fStack_3c = fStack_7c;
  local_38 = local_78;
  fStack_34 = fStack_74;
  fStack_30 = fStack_70;
  fStack_2c = fStack_6c;
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->RelativeTransform).BufferIndex,
               (uint)(this->RelativeTransform).BaseIndex,uVar2,&local_a8);
  }
  uVar1 = (this->TransformPositionHigh).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x20 < uVar1) {
    uVar2 = 0x20;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->TransformPositionHigh).BufferIndex,
               (uint)(this->TransformPositionHigh).BaseIndex,uVar2,&local_c8);
  }
  return;
}

// SetParameters @ 1485d9b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementVS::SetParameters
          (FSimpleElementVS *this,FRHIBatchedShaderParameters *param_1,
          FDFRelativeViewMatrices *param_2,FDFRelativeViewMatrices *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStackY_f8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = *(undefined8 *)(param_2->RelativeWorldToClip).M[0];
  uStack_a0 = *(undefined8 *)((param_2->RelativeWorldToClip).M[0] + 2);
  local_98 = *(undefined8 *)(param_2->RelativeWorldToClip).M[1];
  uStack_90 = *(undefined8 *)((param_2->RelativeWorldToClip).M[1] + 2);
  local_bc = 0x3f800000;
  local_88 = *(undefined8 *)(param_2->RelativeWorldToClip).M[2];
  uStack_80 = *(undefined8 *)((param_2->RelativeWorldToClip).M[2] + 2);
  local_ac = 0x3f800000;
  local_78 = *(undefined8 *)(param_2->RelativeWorldToClip).M[3];
  uStack_70 = *(undefined8 *)((param_2->RelativeWorldToClip).M[3] + 2);
  local_68 = *(undefined8 *)(param_3->RelativeWorldToClip).M[0];
  uStack_60 = *(undefined8 *)((param_3->RelativeWorldToClip).M[0] + 2);
  local_58 = *(undefined8 *)(param_3->RelativeWorldToClip).M[1];
  uStack_50 = *(undefined8 *)((param_3->RelativeWorldToClip).M[1] + 2);
  local_48 = *(undefined8 *)(param_3->RelativeWorldToClip).M[2];
  uStack_40 = *(undefined8 *)((param_3->RelativeWorldToClip).M[2] + 2);
  local_38 = *(undefined8 *)(param_3->RelativeWorldToClip).M[3];
  uStack_30 = *(undefined8 *)((param_3->RelativeWorldToClip).M[3] + 2);
  local_c8 = (param_2->PositionHigh).field0_0x0._s_0.X;
  local_c4 = (param_2->PositionHigh).field0_0x0._s_0.Y;
  local_b8 = (param_3->PositionHigh).field0_0x0._s_0.X;
  local_c0 = (param_2->PositionHigh).field0_0x0._s_0.Z;
  local_b0 = (param_3->PositionHigh).field0_0x0._s_0.Z;
  local_b4 = (param_3->PositionHigh).field0_0x0._s_0.Y;
  uVar1 = (this->RelativeTransform).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x80 < uVar1) {
    uVar2 = 0x80;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->RelativeTransform).BufferIndex,
               (uint)(this->RelativeTransform).BaseIndex,uVar2,&local_a8);
  }
  uVar1 = (this->TransformPositionHigh).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x20 < uVar1) {
    uVar2 = 0x20;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->TransformPositionHigh).BufferIndex,
               (uint)(this->TransformPositionHigh).BaseIndex,uVar2,&local_c8);
  }
  return;
}

// ShouldCompilePermutationImpl @ 1485dbfb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FSimpleElementVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1485dc080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FSimpleElementVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1485ddb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSimpleElementVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TransformPositionHigh";
    DAT_15524346a = Freeze::FindFieldNameLength(L"TransformPositionHigh");
    _DAT_155243448 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243450 = ::TypeBuffer[0x10];
    DAT_155243450_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243450_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243450_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243450_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243450_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243450_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243450_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243458 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243460 = 0xe6;
    _DAT_155243464 = 1;
    _DAT_155243468 = 0;
    `public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RelativeTransform";
    DAT_15524343a = Freeze::FindFieldNameLength(L"RelativeTransform");
    _DAT_155243418 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243420 = ::TypeBuffer[0x10];
    DAT_155243420_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243420_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243420_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243420_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243420_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243420_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243420_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243428 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243430 = 0xe0;
    _DAT_155243434 = 1;
    _DAT_155243438 = 0;
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

