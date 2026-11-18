// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// ConstructCompiledInstance @ 145da8920

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
FRayTracingValidateSceneBuildParamsCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4 = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"InstanceBuffer",
               SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"InstanceBufferOffsetInBytes",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2),
               param_1->ParameterMap,L"InstanceBufferStrideInBytes",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters,param_1->ParameterMap,
               L"NumInstances",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"NumHitGroups",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145da8ba0

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

FShader * __cdecl FRayTracingValidateSceneBuildParamsCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    memset(this,0,0x100);
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// Dispatch @ 145dabc90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FRayTracingValidateSceneBuildParamsCS::Dispatch
          (FRHICommandList *param_1,uint param_2,uint param_3,FRHIBuffer *param_4,uint param_5,
          uint param_6)

{
  undefined1 *puVar1;
  ushort uVar2;
  FShaderMapResource *this;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar7;
  FName this_01;
  atomic<FRHIShader_*> aVar8;
  FRHIBatchedShaderParameters *this_02;
  uint uVar9;
  uint uVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined1 local_98;
  undefined1 local_97 [7];
  undefined1 local_90 [16];
  longlong local_80;
  FShaderResourceViewInitializer local_78;
  undefined1 local_60 [16];
  FString local_50;
  FInitializer local_40;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if ((!GRHIGlobals.SupportsWaveOperations) ||
     (bVar5 = RHISupportsWaveOperations((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar5)) {
    local_98 = 0;
    bVar5 = `FRayTracingValidateSceneBuildParamsCS::Dispatch'::__l3::<lambda_1>::operator()
                      (&local_98);
    if (!bVar5) {
      return;
    }
  }
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar7 = (FShaderType *)GetStaticType();
  FGlobalShaderMap::GetShader
            (this_00,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_90 + 8),pFVar7,0);
  if ((FShader *)local_90._8_8_ == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_60);
    ::FName::ToString((FName *)this_01,&local_50);
    GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  GetStaticType();
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if ((FShader *)local_90._8_8_ != (FShader *)0x0) {
    this = *(FShaderMapResource **)(local_80 + 8);
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar8 = (this->RHIShaders).Ptr[*(int *)(local_90._8_8_ + 0xd4)];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash(this,*(int *)(local_90._8_8_ + 0xd4),true),
       aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((*(longlong *)(local_80 + 0x18) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType((FShader *)local_90._8_8_,*(FShaderMapPointerTable **)(local_80 + 0x18));
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingValidateSceneBuildParamsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar8);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FShaderResourceViewInitializer::FShaderResourceViewInitializer(&local_78,param_4);
  local_78._padding_._2_1_ = 4;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_40,local_78.Buffer);
  FRHICommandListBase::CreateShaderResourceView
            ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_90,(FInitializer *)local_78.Buffer);
  uVar2 = *(ushort *)
           &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.AllocatorInstance.
            field_0x4;
  uVar10 = (uint)uVar2;
  if (4 < uVar2) {
    uVar10 = 4;
  }
  if (uVar10 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.
                               AllocatorInstance,
               (uint)*(ushort *)
                      &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.
                       AllocatorInstance.field_0x2,uVar10,local_res18);
  }
  uVar2 = *(ushort *)
           ((longlong)&(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.ArrayNum
           + 2);
  uVar10 = (uint)uVar2;
  if (4 < uVar2) {
    uVar10 = 4;
  }
  if (uVar10 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.
                               AllocatorInstance.field_0x6,
               (uint)(ushort)(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).ResourceParameters.
                             ArrayNum,uVar10,local_res10);
  }
  uVar2 = (ushort)(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.ArrayNum;
  uVar10 = (uint)uVar2;
  if (4 < uVar2) {
    uVar10 = 4;
  }
  if (uVar10 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.
                               AllocatorInstance.field_0x4,
               (uint)*(ushort *)
                      &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.AllocatorInstance
                       .field_0x6,uVar10,&param_5);
  }
  uVar2 = *(ushort *)
           ((longlong)&(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.ArrayMax + 2);
  uVar10 = (uint)uVar2;
  if (4 < uVar2) {
    uVar10 = 4;
  }
  if (uVar10 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              ((longlong)
                               &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.ArrayNum
                              + 2),
               (uint)(ushort)(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.ArrayMax,
               uVar10,&param_6);
  }
  SetSRVParameter(this_02,(FShaderResourceParameter *)(local_90._8_8_ + 0xe0),
                  (FRHIShaderResourceView *)local_90._0_8_);
  uVar9 = local_res18[0] + 0x3ff >> 10;
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar8,this_02);
  uVar10 = 0x10000;
  if (uVar9 < 0x10000) {
    uVar10 = uVar9;
  }
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar10,1,1);
  if ((FRHIShaderResourceView *)local_90._0_8_ != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_90._0_8_);
  }
  if ((0 < *(int *)&param_1->field_0xd8) &&
     (bVar5 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()(local_97)
     , !bVar5)) {
    *(undefined4 *)&param_1->field_0xd8 = 0;
    if (*(int *)&param_1->field_0xdc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
    }
  }
  puVar1 = &param_1->field_0xd0;
  if (((((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.AllocatorInstance.field_0x2 !=
       '\0') &&
     ((((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.AllocatorInstance.field_0x3 !=
      '\x06')) {
    iVar6 = *(int *)&param_1->field_0xd8;
    uVar2 = *(ushort *)
             &(((FShader *)(local_90._8_8_ + 0xe0))->Bindings).Parameters.AllocatorInstance;
    if (iVar6 == *(int *)&param_1->field_0xdc) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
    }
    *(int *)&param_1->field_0xd8 = iVar6 + 1;
    lVar3 = *(longlong *)puVar1;
    *(ushort *)(lVar3 + (longlong)iVar6 * 4) = uVar2;
    *(undefined1 *)(lVar3 + 2 + (longlong)iVar6 * 4) = 0;
  }
  FRHIComputeCommandList::SetBatchedShaderUnbinds
            ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar8,
             (FRHIBatchedShaderUnbinds *)puVar1);
  return;
}

// GetStaticType @ 145dbb0a0

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

FGlobalShaderType * __cdecl FRayTracingValidateSceneBuildParamsCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FRayTracingValidateSceneBuildParamsCS"
                 ,L"/Engine/Private/RayTracing/RayTracingValidation.usf",
                 L"RayTracingValidateSceneBuildParamsCS",5,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/RayTracing/RayTracingValidation.usf");
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
      atexit(`FRayTracingValidateSceneBuildParamsCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145dbbf00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRayTracingValidateSceneBuildParamsCS::GetTypeLayout(FRayTracingValidateSceneBuildParamsCS *this)

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
    ::TypeBuffer._8_8_ = u_FRayTracingVali;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingValidateSceneBuildParamsCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumHitGroupsParam";
    DAT_15518a932 = Freeze::FindFieldNameLength(L"NumHitGroupsParam");
    _DAT_15518a910 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a918 = ::TypeBuffer[0x10];
    DAT_15518a918_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a918_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a918_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a918_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a918_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a918_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a918_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a920 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a928 = 0xf6;
    _DAT_15518a92c = 1;
    _DAT_15518a930 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumInstancesParam";
    DAT_15518a902 = Freeze::FindFieldNameLength(L"NumInstancesParam");
    _DAT_15518a8e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a8e8 = ::TypeBuffer[0x10];
    DAT_15518a8e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a8e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a8e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a8e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a8e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a8e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a8e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a8f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a8f8 = 0xf0;
    _DAT_15518a8fc = 1;
    _DAT_15518a900 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferStrideInBytesParam";
    DAT_15518a8d2 = Freeze::FindFieldNameLength(L"InstanceBufferStrideInBytesParam");
    _DAT_15518a8b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a8b8 = ::TypeBuffer[0x10];
    DAT_15518a8b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a8b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a8b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a8b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a8b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a8b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a8b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a8c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a8c8 = 0xea;
    _DAT_15518a8cc = 1;
    _DAT_15518a8d0 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferOffsetInBytesParam";
    DAT_15518a8a2 = Freeze::FindFieldNameLength(L"InstanceBufferOffsetInBytesParam");
    _DAT_15518a880 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a888 = ::TypeBuffer[0x10];
    DAT_15518a888_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a888_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a888_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a888_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a888_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a888_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a888_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a890 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a898 = 0xe4;
    _DAT_15518a89c = 1;
    _DAT_15518a8a0 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferParam";
    DAT_15518a872 = Freeze::FindFieldNameLength(L"InstanceBufferParam");
    _DAT_15518a850 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15518a858 = ::TypeBuffer[0x10];
    DAT_15518a858_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a858_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a858_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a858_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a858_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a858_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a858_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15518a860 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a868 = 0xe0;
    _DAT_15518a86c = 1;
    _DAT_15518a870 = 0;
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

// InternalDestroy @ 145dc0a70

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
FRayTracingValidateSceneBuildParamsCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutationImpl @ 145dcf590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRayTracingValidateSceneBuildParamsCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = ShouldCompileRayTracingShadersForProject(param_1->Platform);
  if (bVar1) {
    bVar1 = RHISupportsWaveOperations((FStaticShaderPlatform)param_1->Platform);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145dcf6b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRayTracingValidateSceneBuildParamsCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145dcfcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRayTracingValidateSceneBuildParamsCS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FRayTracingVali;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingValidateSceneBuildParamsCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumHitGroupsParam";
    DAT_15518a932 = Freeze::FindFieldNameLength(L"NumHitGroupsParam");
    _DAT_15518a910 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a918 = ::TypeBuffer[0x10];
    DAT_15518a918_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a918_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a918_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a918_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a918_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a918_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a918_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a920 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a928 = 0xf6;
    _DAT_15518a92c = 1;
    _DAT_15518a930 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumInstancesParam";
    DAT_15518a902 = Freeze::FindFieldNameLength(L"NumInstancesParam");
    _DAT_15518a8e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a8e8 = ::TypeBuffer[0x10];
    DAT_15518a8e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a8e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a8e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a8e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a8e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a8e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a8e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a8f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a8f8 = 0xf0;
    _DAT_15518a8fc = 1;
    _DAT_15518a900 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferStrideInBytesParam";
    DAT_15518a8d2 = Freeze::FindFieldNameLength(L"InstanceBufferStrideInBytesParam");
    _DAT_15518a8b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a8b8 = ::TypeBuffer[0x10];
    DAT_15518a8b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a8b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a8b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a8b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a8b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a8b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a8b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a8c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a8c8 = 0xea;
    _DAT_15518a8cc = 1;
    _DAT_15518a8d0 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferOffsetInBytesParam";
    DAT_15518a8a2 = Freeze::FindFieldNameLength(L"InstanceBufferOffsetInBytesParam");
    _DAT_15518a880 = FShaderParameter::StaticGetTypeLayout();
    DAT_15518a888 = ::TypeBuffer[0x10];
    DAT_15518a888_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a888_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a888_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a888_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a888_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a888_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a888_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518a890 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a898 = 0xe4;
    _DAT_15518a89c = 1;
    _DAT_15518a8a0 = 0;
    `public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceBufferParam";
    DAT_15518a872 = Freeze::FindFieldNameLength(L"InstanceBufferParam");
    _DAT_15518a850 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15518a858 = ::TypeBuffer[0x10];
    DAT_15518a858_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518a858_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518a858_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518a858_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518a858_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518a858_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518a858_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingValidateSceneBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15518a860 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518a868 = 0xe0;
    _DAT_15518a86c = 1;
    _DAT_15518a870 = 0;
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

// operator() @ 1504dc950

bool __thiscall
`FRayTracingValidateSceneBuildParamsCS::Dispatch'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3383749332288143452>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3383749332288143452>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

