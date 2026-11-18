// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ResizeBufferIfNeeded @ 1449308f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
::ResizeBufferIfNeeded
          (TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FRDGBuffer *pFVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar3 = 1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(int *)this;
  }
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  local_20.NumElements = (param_2 * 3 & 0x7ffffffU) << 3;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  pFVar4 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar4;
}

// ResizeBufferIfNeeded @ 144aadc80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
::ResizeBufferIfNeeded
          (TPersistentBuffer<RenderCurve::FRenderCurveSceneExtension::FPackedRenderCurveInstanceData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FRDGBuffer *pFVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar3 = 1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  local_20.NumElements = (param_2 & 0xfffffffU) << 2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar4 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar4;
}

// ResizeBufferIfNeeded @ 1450770a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>::
ResizeBufferIfNeeded
          (TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBuffer *pFVar6;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar5 = 1;
    if (param_2 != 0) {
      iVar5 = param_2;
    }
    uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  if (((param_2 & 3U) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & 15) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0xb2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  local_20._0_8_ = CONCAT44(param_2,4) & 0x3fffffffffffffff;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar6 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar6;
}

// ResizeBufferIfNeeded @ 145077180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
::ResizeBufferIfNeeded
          (TPersistentBuffer<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBuffer *pFVar6;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar5 = 1;
    if (param_2 != 0) {
      iVar5 = param_2;
    }
    uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  if (((param_2 & 1U) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & 15) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0xb2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  local_20.NumElements = (param_2 & 0x1fffffffU) << 1;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar6 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar6;
}

// operator() @ 14548d820

void __thiscall
`UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>::
operator()(void *this,void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (0 < *(int *)((longlong)this + 0x10)) {
    pfVar6 = (float *)((longlong)param_1 + 0xc);
    lVar3 = -(longlong)param_1;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((longlong)this + 8);
      if ((*(float *)((longlong)pfVar6 + lVar1 + lVar3 + 0xc) != pfVar6[3]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUValue.LevelCellSize == HostValue.LevelCellSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x8f3,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((pfVar6[-3] + *pfVar6 !=
             *(float *)((longlong)pfVar6 + lVar1 + lVar3) +
             *(float *)((longlong)pfVar6 + lVar1 + lVar3 + -0xc)) ||
           (pfVar6[-2] + pfVar6[1] !=
            *(float *)((longlong)pfVar6 + lVar1 + lVar3 + 4) +
            *(float *)((longlong)pfVar6 + lVar1 + lVar3 + -8))) ||
          (pfVar6[2] + pfVar6[-1] !=
           *(float *)((longlong)pfVar6 + lVar1 + lVar3 + 8) +
           *(float *)((longlong)pfVar6 + lVar1 + lVar3 + -4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUValue.WorldPos.GetVector3d() == HostValue.WorldPos.GetVector3d()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x8f4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pfVar6[4] != *(float *)((longlong)pfVar6 + lVar1 + lVar3 + 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUValue.Pad == HostValue.Pad",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x8f5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pfVar6[4] != -6.3318747e+18) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUValue.Pad == 0xDeafBead",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x8f6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 8;
    } while ((int)uVar7 < *(int *)((longlong)this + 0x10));
  }
  return;
}

// ResizeBufferIfNeeded @ 1454b8970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::
ResizeBufferIfNeeded
          (TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FRDGBuffer *pFVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar3 = 1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  local_20.NumElements = param_2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar4 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar4;
}

// ResizeBufferIfNeeded @ 14569e6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>::
ResizeBufferIfNeeded
          (TPersistentBuffer<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBuffer *pFVar6;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar5 = 1;
    if (param_2 != 0) {
      iVar5 = param_2;
    }
    uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  if (((param_2 & 3U) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & 15) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                         ,0xb2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  local_20._0_8_ = CONCAT44(param_2,4) & 0x3fffffffffffffff;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar6 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar6;
}

// ResizeBufferIfNeeded @ 14569e7a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>::
ResizeBufferIfNeeded
          (TPersistentBuffer<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FRDGBuffer *pFVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar3 = 1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(int *)this;
  }
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  local_20.NumElements = (param_2 * 3 & 0xfffffffU) << 2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  pFVar4 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar4;
}

// ResizeBufferIfNeeded @ 14569e830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
::ResizeBufferIfNeeded
          (TPersistentBuffer<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           *this,FRDGBuilder *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FRDGBuffer *pFVar4;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if (this->field_0x10 != '\0') {
    iVar3 = 1;
    if (param_2 != 0) {
      iVar3 = param_2;
    }
    uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_2 < *(int *)this) {
    param_2 = *(uint *)this;
  }
  local_20.NumElements = (param_2 & 0xfffffffU) << 2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar4 = FPersistentBuffer::ResizeBufferIfNeeded((FPersistentBuffer *)this,param_1,&local_20);
  return pFVar4;
}

