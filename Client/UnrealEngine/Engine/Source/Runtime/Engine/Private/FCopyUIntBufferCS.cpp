// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FCopyUIntBufferCS @ 147cc3210

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

FCopyUIntBufferCS * __thiscall
FCopyUIntBufferCS::FCopyUIntBufferCS
          (FCopyUIntBufferCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->CopyParams;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->CopyParams).NumBytes = 0;
  (this->SourceData).BaseIndex = 0;
  (this->SourceData).NumResources = '\0';
  (this->SourceData).Type = LooseData;
  this->DestData[0].BaseIndex = 0;
  this->DestData[0].NumResources = '\0';
  this->DestData[0].Type = LooseData;
  this->DestData[1].BaseIndex = 0;
  this->DestData[1].NumResources = '\0';
  this->DestData[1].Type = LooseData;
  this->DestData[2].BaseIndex = 0;
  this->DestData[2].NumResources = '\0';
  this->DestData[2].Type = LooseData;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"CopyParams",SPF_Optional);
  FShaderResourceParameter::Bind(&this->SourceData,param_1->ParameterMap,L"SourceData",SPF_Optional)
  ;
  FShaderResourceParameter::Bind(this->DestData,param_1->ParameterMap,L"DestData0",SPF_Optional);
  FShaderResourceParameter::Bind(this->DestData + 1,param_1->ParameterMap,L"DestData1",SPF_Optional)
  ;
  FShaderResourceParameter::Bind(this->DestData + 2,param_1->ParameterMap,L"DestData2",SPF_Optional)
  ;
  return this;
}

// Begin @ 147cd7e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCopyUIntBufferCS::Begin(FCopyUIntBufferCS *this,FRHICommandList *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = DAT_15520bd08;
  uStack_20 = DAT_15520bd58;
  local_18 = DAT_15520bda8;
  local_38 = &local_28;
  uStack_30 = 3;
  if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,&local_38);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x18,8);
  *puVar2 = local_28;
  puVar2[1] = uStack_20;
  puVar2[2] = local_18;
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
  *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
  **(undefined8 **)&param_1->field_0x30 = puVar3;
  *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
  puVar3[2] = puVar2;
  puVar3[3] = CONCAT44(uStack_2c,3);
  return;
}

// ConstructCompiledInstance @ 147ce60a0

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
FCopyUIntBufferCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4 = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"CopyParams",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"SourceData",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2),
               param_1->ParameterMap,L"DestData0",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2),
               param_1->ParameterMap,L"DestData1",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)
               &this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               param_1->ParameterMap,L"DestData2",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 147ce64e0

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

FShader * __cdecl FCopyUIntBufferCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined4 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4 = 0;
    return this;
  }
  return (FShader *)0x0;
}

// End @ 147cf25a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCopyUIntBufferCS::End(FCopyUIntBufferCS *this,FRHICommandList *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = DAT_15520bd08;
  uStack_20 = DAT_15520bd58;
  local_18 = DAT_15520bda8;
  local_38 = &local_28;
  uStack_30 = 3;
  if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,&local_38);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x18,8);
  *puVar2 = local_28;
  puVar2[1] = uStack_20;
  puVar2[2] = local_18;
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
  *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
  **(undefined8 **)&param_1->field_0x30 = puVar3;
  *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
  puVar3[2] = puVar2;
  puVar3[3] = CONCAT44(uStack_2c,3);
  return;
}

// GetStaticType @ 147d0e0c0

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

FGlobalShaderType * __cdecl FCopyUIntBufferCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FCopyUIntBufferCS",
                 L"/Engine/Private/CopyUIntBuffer.usf",L"MainCS",5,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/CopyUIntBuffer.usf");
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
      atexit(`FCopyUIntBufferCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 147d0fe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FCopyUIntBufferCS::GetTypeLayout(FCopyUIntBufferCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCopyUIntBuffer;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCopyUIntBufferCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestData";
    DAT_15520d9e2 = Freeze::FindFieldNameLength(L"DestData");
    _DAT_15520d9c0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d9c8 = ::TypeBuffer[0x10];
    DAT_15520d9c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d9c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d9c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d9c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d9c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d9c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d9c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d9d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d9d8 = 0xea;
    _DAT_15520d9dc = 3;
    _DAT_15520d9e0 = 0;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceData";
    DAT_15520d9b2 = Freeze::FindFieldNameLength(L"SourceData");
    _DAT_15520d990 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d998 = ::TypeBuffer[0x10];
    DAT_15520d998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d9a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d9a8 = 0xe6;
    _DAT_15520d9ac = 1;
    _DAT_15520d9b0 = 0;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CopyParams";
    DAT_15520d982 = Freeze::FindFieldNameLength(L"CopyParams");
    _DAT_15520d960 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520d968 = ::TypeBuffer[0x10];
    DAT_15520d968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d968_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520d970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d978 = 0xe0;
    _DAT_15520d97c = 1;
    _DAT_15520d980 = 0;
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

// InternalDestroy @ 147d19e10

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
FCopyUIntBufferCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 147d2ab30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCopyUIntBufferCS::SetParameters
          (FCopyUIntBufferCS *this,FRHIBatchedShaderParameters *param_1,
          FRHIShaderResourceView *param_2,FRHIUnorderedAccessView **param_3,int *param_4,int param_5
          ,int param_6)

{
  ushort uVar1;
  FRHIUnorderedAccessView *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ushort *puVar6;
  FRHIBatchedShaderParametersAllocator *pFVar7;
  FMemStackBase *pFVar8;
  longlong lVar9;
  EShaderParameterType *pEVar10;
  undefined8 *puVar11;
  longlong lVar12;
  TArrayView<FRHIShaderParameterResource,int> *pTVar13;
  uint uVar14;
  FRHIUnorderedAccessView **ppFVar15;
  EShaderParameterType aEStackY_129 [137];
  undefined8 uStackY_a0;
  ushort local_68;
  ushort local_66;
  ushort local_64 [2];
  FRHIUnorderedAccessView *local_60;
  FRHIUnorderedAccessView *local_58;
  FRHIUnorderedAccessView *local_50;
  FRHIUnorderedAccessView *local_48;
  int local_40 [6];
  
  iVar4 = param_6;
  lVar12 = (longlong)param_6;
  if (2 < param_6 - 1U) {
    uStackY_a0 = 0x147d2ab91;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestCount > 0 && DestCount <= 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSortManager.cpp"
                       ,0x9a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStackY_a0 = 0x147d2abaa;
  SetSRVParameter(param_1,&this->SourceData,param_2);
  lVar9 = 0;
  local_40[0] = param_5;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  if (0 < iVar4) {
    pEVar10 = &this->DestData[0].Type;
    do {
      pFVar2 = param_3[lVar9];
      if (pEVar10[-1] != '\0') {
        uVar1 = ((FShaderResourceParameter *)(pEVar10 + -3))->BaseIndex;
        pFVar7 = param_1->Allocator;
        if (*pEVar10 == BindlessUAV) {
          param_6 = CONCAT22(param_6._2_2_,uVar1);
          local_60 = pFVar2;
          if (pFVar7->AttachedParameters != param_1) {
            if (pFVar7->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
              uStackY_a0 = 0x147d2ac49;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar7->AttachedParameters = param_1;
          }
          pFVar7 = param_1->Allocator;
          pTVar13 = &param_1->BindlessParameters;
          puVar6 = (ushort *)&param_6;
          ppFVar15 = &local_60;
          pFVar8 = &pFVar7->BindlessParameters;
        }
        else {
          local_68 = uVar1;
          local_58 = pFVar2;
          if (pFVar7->AttachedParameters != param_1) {
            if (pFVar7->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
              uStackY_a0 = 0x147d2acae;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar7->AttachedParameters = param_1;
          }
          pFVar7 = param_1->Allocator;
          pTVar13 = &param_1->ResourceParameters;
          puVar6 = &local_68;
          ppFVar15 = &local_58;
          pFVar8 = &pFVar7->ResourceParameters;
        }
        uStackY_a0 = 0x147d2acda;
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
                  (pFVar7,pFVar8,pTVar13,ppFVar15,puVar6);
      }
      lVar9 = lVar9 + 1;
      *(undefined4 *)(pEVar10 + (longlong)(aEStackY_129 + -(longlong)this)) =
           *(undefined4 *)(pEVar10 + (longlong)param_4 + (-0xed - (longlong)this));
      pEVar10 = pEVar10 + 4;
    } while (lVar9 < lVar12);
  }
  if (lVar12 < 3) {
    puVar11 = &DAT_15520bd08 + lVar12 * 10;
    pEVar10 = &this->DestData[lVar12].Type;
    do {
      pFVar2 = (FRHIUnorderedAccessView *)*puVar11;
      if (pEVar10[-1] != '\0') {
        uVar1 = ((FShaderResourceParameter *)(pEVar10 + -3))->BaseIndex;
        pFVar7 = param_1->Allocator;
        if (*pEVar10 == BindlessUAV) {
          local_66 = uVar1;
          local_50 = pFVar2;
          if (pFVar7->AttachedParameters != param_1) {
            if (pFVar7->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
              uStackY_a0 = 0x147d2ad95;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar7->AttachedParameters = param_1;
          }
          pFVar7 = param_1->Allocator;
          pTVar13 = &param_1->BindlessParameters;
          puVar6 = &local_66;
          ppFVar15 = &local_50;
          pFVar8 = &pFVar7->BindlessParameters;
        }
        else {
          local_64[0] = uVar1;
          local_48 = pFVar2;
          if (pFVar7->AttachedParameters != param_1) {
            if (pFVar7->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
              uStackY_a0 = 0x147d2adf7;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar7->AttachedParameters = param_1;
          }
          pFVar7 = param_1->Allocator;
          pTVar13 = &param_1->ResourceParameters;
          puVar6 = local_64;
          ppFVar15 = &local_48;
          pFVar8 = &pFVar7->ResourceParameters;
        }
        uStackY_a0 = 0x147d2ae23;
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
                  (pFVar7,pFVar8,pTVar13,ppFVar15,puVar6);
      }
      puVar11 = puVar11 + 10;
      pEVar10 = pEVar10 + 4;
    } while ((longlong)puVar11 < 0x15520bdf8);
  }
  uVar1 = (this->CopyParams).NumBytes;
  uVar14 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar14 = 0x10;
  }
  if (uVar14 != 0) {
    uStackY_a0 = 0x147d2ae8f;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->CopyParams).BufferIndex,(uint)(this->CopyParams).BaseIndex,
               uVar14,local_40);
  }
  return;
}

// ShouldCompilePermutationImpl @ 147d2d710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FCopyUIntBufferCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 147d2d970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FCopyUIntBufferCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 147d315e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FCopyUIntBufferCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FCopyUIntBuffer;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FCopyUIntBufferCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DestData";
    DAT_15520d9e2 = Freeze::FindFieldNameLength(L"DestData");
    _DAT_15520d9c0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d9c8 = ::TypeBuffer[0x10];
    DAT_15520d9c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d9c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d9c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d9c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d9c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d9c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d9c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d9d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d9d8 = 0xea;
    _DAT_15520d9dc = 3;
    _DAT_15520d9e0 = 0;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceData";
    DAT_15520d9b2 = Freeze::FindFieldNameLength(L"SourceData");
    _DAT_15520d990 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520d998 = ::TypeBuffer[0x10];
    DAT_15520d998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520d9a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d9a8 = 0xe6;
    _DAT_15520d9ac = 1;
    _DAT_15520d9b0 = 0;
    `public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CopyParams";
    DAT_15520d982 = Freeze::FindFieldNameLength(L"CopyParams");
    _DAT_15520d960 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520d968 = ::TypeBuffer[0x10];
    DAT_15520d968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520d968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520d968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520d968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520d968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520d968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520d968_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FCopyUIntBufferCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520d970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520d978 = 0xe0;
    _DAT_15520d97c = 1;
    _DAT_15520d980 = 0;
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

// UnsetParameters @ 147d34710

void __thiscall
FCopyUIntBufferCS::UnsetParameters(FCopyUIntBufferCS *this,FRHIBatchedShaderUnbinds *param_1)

{
  int *piVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (((this->SourceData).NumResources != '\0') && ((this->SourceData).Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = (this->SourceData).BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x0;
  }
  if ((this->DestData[0].NumResources != '\0') && (this->DestData[0].Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = this->DestData[0].BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  if ((this->DestData[1].NumResources != '\0') && (this->DestData[1].Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = this->DestData[1].BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  if ((this->DestData[2].NumResources != '\0') && (this->DestData[2].Type != BindlessSRV)) {
    iVar4 = (param_1->Unbinds).ArrayNum;
    piVar1 = &(param_1->Unbinds).ArrayMax;
    uVar2 = this->DestData[2].BaseIndex;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->Unbinds).ArrayNum = iVar4 + 1;
    pFVar3 = (param_1->Unbinds).AllocatorInstance.Data;
    *(ushort *)(pFVar3 + (longlong)iVar4 * 4) = uVar2;
    pFVar3[(longlong)iVar4 * 4 + 2] = (FScriptContainerElement)0x1;
  }
  return;
}

