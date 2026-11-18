// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// ConstructCompiledInstance @ 145da8780

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
FRayTracingValidateGeometryBuildParamsCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    *(undefined4 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.BindlessResourceParameters.ArrayNum + 2) = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"IndexBuffer",
               SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"VertexBuffer",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayNum,param_1->ParameterMap,
               L"VertexBufferStride",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2),
               param_1->ParameterMap,L"VertexBufferOffsetInBytes",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"IndexBufferOffsetInBytes",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2),
               param_1->ParameterMap,L"IndexBufferStride",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.BindlessResourceParameters,
               param_1->ParameterMap,L"NumPrimitives",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)
               &this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"MaxVertices",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145da8b20

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

FShader * __cdecl FRayTracingValidateGeometryBuildParamsCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FShader *)0x0) {
    memset(this,0,0x110);
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.BindlessResourceParameters.ArrayNum + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// Dispatch @ 145dab680

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
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
FRayTracingValidateGeometryBuildParamsCS::Dispatch
          (FRHICommandList *param_1,FRayTracingGeometryBuildParams *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  FRHIRayTracingGeometry *pFVar3;
  FShaderMapResource *this;
  FRHIBuffer *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar10;
  FName this_01;
  atomic<FRHIShader_*> aVar11;
  FRHIBatchedShaderParameters *this_02;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_d8 [4];
  uint local_d4;
  int local_d0 [2];
  FScriptContainerElement *local_c8;
  undefined1 local_c0 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b0;
  FShaderResourceViewInitializer local_a0;
  FShaderResourceViewInitializer local_88;
  FString local_68;
  FInitializer local_58;
  FInitializer local_48;
  
  if ((!GRHIGlobals.SupportsWaveOperations) ||
     (bVar7 = RHISupportsWaveOperations((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar7)) {
    local_res18[0] = local_res18[0] & 0xffffff00;
    bVar7 = `FRayTracingValidateGeometryBuildParamsCS::Dispatch'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar7) {
      return;
    }
  }
  pFVar3 = (param_2->Geometry).Reference;
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar10 = (FShaderType *)GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_b0,pFVar10,0);
  if (local_b0.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_c8);
    ::FName::ToString((FName *)this_01,&local_68);
    GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  GetStaticType();
  aVar11 = (atomic<FRHIShader_*>)0x0;
  if (local_b0.ShaderContent != (FShader *)0x0) {
    this = ((local_b0.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    aVar11 = (this->RHIShaders).Ptr[(local_b0.ShaderContent)->ResourceIndex];
    if ((aVar11 == (atomic<FRHIShader_*>)0x0) &&
       (aVar11 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this,(local_b0.ShaderContent)->ResourceIndex,true),
       aVar11 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_b0.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FShader::GetType(local_b0.ShaderContent,(local_b0.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingValidateGeometryBuildParamsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar11 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar11);
  pFVar4 = (pFVar3->Initializer).IndexBuffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    uVar16 = (pFVar4->Desc).Stride;
    local_d4 = uVar16;
    FShaderResourceViewInitializer::FShaderResourceViewInitializer(&local_a0,pFVar4);
    local_a0._padding_._2_1_ = 4;
    local_58._0_8_ = 0;
    local_58._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_58,local_a0.Buffer);
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_c0 + 8),
               (FInitializer *)local_a0.Buffer);
    local_res18[0] = (pFVar3->Initializer).Segments.ArrayNum;
    uVar12 = (ulonglong)(int)local_res18[0];
    pFVar14 = (pFVar3->Initializer).Segments.AllocatorInstance.Data;
    pFVar13 = pFVar14 + uVar12 * 0x28;
    local_c8 = pFVar13;
    while( true ) {
      if ((pFVar3->Initializer).Segments.ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FRayTracingGeometrySegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar14 == pFVar13) break;
      if (*(int *)(pFVar14 + 8) == 3) {
        local_d0[0] = uVar16 * *(int *)(pFVar14 + 0x18) * 3;
        this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        uVar15 = (uint)(ushort)local_b0.ShaderContent[1].Bindings.Parameters.ArrayMax;
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)(ushort)local_b0.ShaderContent[1].Bindings.Parameters.ArrayNum,
                     (uint)*(ushort *)
                            ((longlong)&local_b0.ShaderContent[1].Bindings.Parameters.ArrayNum + 2),
                     uVar15,pFVar14 + 0x10);
        }
        uVar15 = (uint)*(ushort *)
                        &local_b0.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance.
                         field_0x2;
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)*(ushort *)
                                    ((longlong)
                                     &local_b0.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),
                     (uint)*(ushort *)
                            &local_b0.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
                     ,uVar15,pFVar14 + 0xc);
        }
        uVar15 = (uint)(ushort)local_b0.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)*(ushort *)
                                    &local_b0.ShaderContent[1].Bindings.ResourceParameters.
                                     AllocatorInstance.field_0x4,
                     (uint)*(ushort *)
                            &local_b0.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
                             .field_0x6,uVar15,local_d0);
        }
        uVar15 = (uint)*(ushort *)
                        ((longlong)&local_b0.ShaderContent[1].Bindings.ResourceParameters.ArrayMax +
                        2);
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)*(ushort *)
                                    ((longlong)
                                     &local_b0.ShaderContent[1].Bindings.ResourceParameters.ArrayNum
                                    + 2),
                     (uint)(ushort)local_b0.ShaderContent[1].Bindings.ResourceParameters.ArrayMax,
                     uVar15,&local_d4);
          uVar16 = local_d4;
        }
        uVar15 = (uint)*(ushort *)
                        &local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.
                         AllocatorInstance.field_0x4;
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)*(ushort *)
                                    &local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.
                                     AllocatorInstance,
                     (uint)*(ushort *)
                            &local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.
                             AllocatorInstance.field_0x2,uVar15,pFVar14 + 0x1c);
        }
        uVar15 = (uint)*(ushort *)
                        ((longlong)
                         &local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.ArrayNum + 2
                        );
        if (4 < uVar15) {
          uVar15 = 4;
        }
        if (uVar15 != 0) {
          FRHIBatchedShaderParameters::SetShaderParameter
                    (this_02,(uint)*(ushort *)
                                    &local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.
                                     AllocatorInstance.field_0x6,
                     (uint)(ushort)local_b0.ShaderContent[1].Bindings.BindlessResourceParameters.
                                   ArrayNum,uVar15,pFVar14 + 0x14);
        }
        FShaderResourceViewInitializer::FShaderResourceViewInitializer
                  (&local_88,*(FRHIBuffer **)pFVar14);
        local_88._padding_._2_1_ = 4;
        local_48._0_8_ = 0;
        local_48._8_8_ = 0;
        FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_48,local_88.Buffer);
        FRHICommandListBase::CreateShaderResourceView
                  ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_c0,
                   (FInitializer *)local_88.Buffer);
        SetSRVParameter(this_02,(FShaderResourceParameter *)
                                &local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                                 field_0x4,(FRHIShaderResourceView *)local_c0._0_8_);
        SetSRVParameter(this_02,(FShaderResourceParameter *)(local_b0.ShaderContent + 1),
                        (FRHIShaderResourceView *)local_c0._8_8_);
        FRHIComputeCommandList::SetBatchedShaderParameters
                  ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar11,this_02);
        uVar8 = *(int *)(pFVar14 + 0x1c) + 0x3ffU >> 10;
        uVar15 = 0x10000;
        if (uVar8 < 0x10000) {
          uVar15 = uVar8;
        }
        FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar15,1,1);
        pFVar13 = local_c8;
        if ((FRHIShaderResourceView *)local_c0._0_8_ != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_c0._0_8_);
          pFVar13 = local_c8;
        }
      }
      uVar12 = (ulonglong)local_res18[0];
      pFVar14 = pFVar14 + 0x28;
    }
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      if ((0 < *(int *)&param_1->field_0xd8) &&
         (bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                            (local_d8), !bVar7)) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
      puVar1 = &param_1->field_0xd0;
      if ((local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x6 != '\0') &&
         (local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x7 != '\x06')) {
        iVar9 = *(int *)&param_1->field_0xd8;
        uVar2 = *(undefined2 *)
                 &local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
        if (iVar9 == *(int *)&param_1->field_0xdc) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar9 + 1;
        lVar5 = *(longlong *)puVar1;
        *(undefined2 *)(lVar5 + (longlong)iVar9 * 4) = uVar2;
        *(undefined1 *)(lVar5 + 2 + (longlong)iVar9 * 4) = 0;
      }
      if ((local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2 != '\0') &&
         (local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x3 != '\x06')) {
        iVar9 = *(int *)&param_1->field_0xd8;
        uVar2 = *(undefined2 *)&local_b0.ShaderContent[1].Bindings.Parameters.AllocatorInstance;
        if (iVar9 == *(int *)&param_1->field_0xdc) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar9 + 1;
        lVar5 = *(longlong *)puVar1;
        *(undefined2 *)(lVar5 + (longlong)iVar9 * 4) = uVar2;
        *(undefined1 *)(lVar5 + 2 + (longlong)iVar9 * 4) = 0;
      }
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar11,
                 (FRHIBatchedShaderUnbinds *)puVar1);
    }
    if ((FRHIShaderResourceView *)local_c0._8_8_ != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c0._8_8_);
    }
  }
  return;
}

// GetStaticType @ 145dbaea0

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

FGlobalShaderType * __cdecl FRayTracingValidateGeometryBuildParamsCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FRayTracingValidateGeometryBuildParamsCS",
                 L"/Engine/Private/RayTracing/RayTracingValidation.usf",
                 L"RayTracingValidateGeometryBuildParamsCS",5,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
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
      atexit(`FRayTracingValidateGeometryBuildParamsCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145dbbef0

FTypeLayoutDesc * __thiscall
FRayTracingValidateGeometryBuildParamsCS::GetTypeLayout
          (FRayTracingValidateGeometryBuildParamsCS *this)

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
    ::TypeBuffer._8_8_ = u_FRayTracingVali;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingValidateGeometryBuildParamsCS,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

// Initialize @ 145dbdb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MaxVerticesParam";
  DAT_15518a842 = Freeze::FindFieldNameLength(L"MaxVerticesParam");
  _DAT_15518a820 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a838 = 0x106;
  _DAT_15518a830 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a83c = 1;
  _DAT_15518a840 = 0;
  _DAT_15518a828 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "NumPrimitivesParam";
  DAT_15518a812 = Freeze::FindFieldNameLength(L"NumPrimitivesParam");
  _DAT_15518a7f0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a800 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a808 = 0x100;
  _DAT_15518a80c = 1;
  _DAT_15518a810 = 0;
  _DAT_15518a7f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "IndexBufferStrideParam";
  DAT_15518a7e2 = Freeze::FindFieldNameLength(L"IndexBufferStrideParam");
  _DAT_15518a7c0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a7d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a7d8 = 0xfa;
  _DAT_15518a7dc = 1;
  _DAT_15518a7e0 = 0;
  _DAT_15518a7c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "IndexBufferOffsetInBytesParam";
  DAT_15518a7b2 = Freeze::FindFieldNameLength(L"IndexBufferOffsetInBytesParam");
  _DAT_15518a790 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a7a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a7a8 = 0xf4;
  _DAT_15518a7ac = 1;
  _DAT_15518a7b0 = 0;
  _DAT_15518a798 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexBufferOffsetInBytesParam";
  DAT_15518a782 = Freeze::FindFieldNameLength(L"VertexBufferOffsetInBytesParam");
  _DAT_15518a760 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a770 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a778 = 0xee;
  _DAT_15518a77c = 1;
  _DAT_15518a780 = 0;
  _DAT_15518a768 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexBufferStrideParam";
  DAT_15518a752 = Freeze::FindFieldNameLength(L"VertexBufferStrideParam");
  _DAT_15518a730 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15518a740 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a748 = 0xe8;
  _DAT_15518a74c = 1;
  _DAT_15518a750 = 0;
  _DAT_15518a738 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexBufferParam";
  DAT_15518a722 = Freeze::FindFieldNameLength(L"VertexBufferParam");
  _DAT_15518a700 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15518a710 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a718 = 0xe4;
  _DAT_15518a71c = 1;
  _DAT_15518a720 = 0;
  _DAT_15518a708 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "IndexBufferParam";
  DAT_15518a6f2 = Freeze::FindFieldNameLength(L"IndexBufferParam");
  _DAT_15518a6d0 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15518a6e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518a6e8 = 0xe0;
  _DAT_15518a6ec = 1;
  _DAT_15518a6f0 = 0;
  _DAT_15518a6d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingValidateGeometryBuildParamsCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145dc0a30

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
FRayTracingValidateGeometryBuildParamsCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// ShouldCompilePermutationImpl @ 145dcf550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRayTracingValidateGeometryBuildParamsCS::ShouldCompilePermutationImpl
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

// ShouldPrecachePermutationImpl @ 145dcf6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRayTracingValidateGeometryBuildParamsCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145dcfb60

FTypeLayoutDesc * __cdecl FRayTracingValidateGeometryBuildParamsCS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FRayTracingVali;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingValidateGeometryBuildParamsCS,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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

// operator() @ 1504dc910

bool __thiscall
`FRayTracingValidateGeometryBuildParamsCS::Dispatch'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3383749332288143376>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3383749332288143376>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

