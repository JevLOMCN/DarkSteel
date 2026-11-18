// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// CreatePlotData @ 1449ca7e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPlotData * __cdecl
FHairStrandsDebugData::CreatePlotData(FPlotData *__return_storage_ptr__,FRDGBuilder *param_1)

{
  FRDGBuffer *pFVar1;
  FRDGBufferUAV *pFVar2;
  FRDGBufferUAVDesc local_38;
  undefined8 local_28;
  undefined1 local_20 [16];
  FShaderParametersMetadata *local_10;
  
  local_38.Buffer._0_4_ = 0x10109;
  __return_storage_ptr__->ShadingPointBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->ShadingPointCounter = (FRDGBuffer *)0x0;
  __return_storage_ptr__->SampleBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->SampleCounter = (FRDGBuffer *)0x0;
  local_38._padding_._0_2_ = 0x30;
  local_38._padding_._2_1_ = 0;
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 0x20;
  local_20._0_4_ = 0x30;
  local_20._4_4_ = 0x20;
  local_28 = 0;
  local_20._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_20._12_4_ = local_38.Buffer._4_4_;
  local_10 = (FShaderParametersMetadata *)0x0;
  pFVar1 = FRDGBuilder::CreateBuffer
                     (param_1,(FRDGBufferDesc *)local_20,L"Hair.DebugShadingPoint",None);
  local_38.Buffer._0_4_ = 0x4109;
  local_38._padding_._0_2_ = 4;
  local_38._padding_._2_1_ = 0;
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 1;
  local_20._0_4_ = 4;
  local_20._4_4_ = 1;
  local_28 = 0;
  local_20._8_4_ = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_20._12_4_ = local_38.Buffer._4_4_;
  __return_storage_ptr__->ShadingPointBuffer = pFVar1;
  local_10 = (FShaderParametersMetadata *)0x0;
  pFVar1 = FRDGBuilder::CreateBuffer
                     (param_1,(FRDGBufferDesc *)local_20,L"Hair.DebugShadingPointCounter",None);
  local_38.Buffer._0_4_ = 0x10109;
  local_38._padding_._0_2_ = 0x20;
  local_38._padding_._2_1_ = 0;
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 0x8000;
  local_20._0_4_ = 0x20;
  local_20._4_4_ = 0x8000;
  local_28 = 0;
  local_20._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_20._12_4_ = local_38.Buffer._4_4_;
  __return_storage_ptr__->ShadingPointCounter = pFVar1;
  local_10 = (FShaderParametersMetadata *)0x0;
  pFVar1 = FRDGBuilder::CreateBuffer(param_1,(FRDGBufferDesc *)local_20,L"Hair.DebugSample",None);
  local_38.Buffer =
       (FRDGBuffer *)
       CONCAT44(local_38.Buffer._4_4_,VertexBuffer|ShaderResource|UnorderedAccess|Static);
  local_38._padding_._0_2_ = 4;
  local_38._padding_._2_1_ = 0;
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 1;
  local_20._0_4_ = 4;
  local_20._4_4_ = 1;
  local_28 = 0;
  local_20._8_8_ = local_38.Buffer;
  __return_storage_ptr__->SampleBuffer = pFVar1;
  local_10 = (FShaderParametersMetadata *)0x0;
  pFVar1 = FRDGBuilder::CreateBuffer
                     (param_1,(FRDGBufferDesc *)local_20,L"Hair.DebugSampleCounter",None);
  __return_storage_ptr__->SampleCounter = pFVar1;
  local_38.Buffer = __return_storage_ptr__->ShadingPointCounter;
  local_38._padding_._0_2_ = 0x1c;
  local_38._padding_._2_1_ = 0;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_38,None);
  AddClearUAVPass(param_1,pFVar2,0,Compute);
  local_38.Buffer = __return_storage_ptr__->SampleCounter;
  local_38._padding_._0_2_ = 0x1c;
  local_38._padding_._2_1_ = 0;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_38,None);
  AddClearUAVPass(param_1,pFVar2,0,Compute);
  return __return_storage_ptr__;
}

// SetParameters @ 1449fe350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FHairStrandsDebugData::SetParameters
          (FRDGBuilder *param_1,FPlotData *param_2,FReadParameters *param_3)

{
  FRDGBufferSRV *pFVar1;
  FRDGBufferSRVDesc local_38;
  
  param_3->Debug_MaxSampleCount = 0x8000;
  param_3->Debug_MaxShadingPointCount = 0x20;
  local_38.Buffer = param_2->ShadingPointBuffer;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  local_38._padding_._0_1_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
  param_3->Debug_ShadingPointBuffer = pFVar1;
  local_38.Buffer = param_2->ShadingPointCounter;
  local_38._padding_._0_1_ = 0x1c;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
  param_3->Debug_ShadingPointCounter = pFVar1;
  local_38.Buffer = param_2->SampleBuffer;
  local_38._padding_._0_1_ = 0;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
  param_3->Debug_SampleBuffer = pFVar1;
  local_38.Buffer = param_2->SampleCounter;
  local_38._padding_._0_1_ = 0x1c;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
  param_3->Debug_SampleCounter = pFVar1;
  return;
}

// SetParameters @ 1449fe480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FHairStrandsDebugData::SetParameters
          (FRDGBuilder *param_1,FPlotData *param_2,FWriteParameters *param_3)

{
  byte bVar1;
  FRDGBufferUAV *pFVar2;
  FRDGBufferUAVDesc local_18;
  
  param_3->Debug_MaxSampleCount = 0x8000;
  param_3->Debug_MaxShadingPointCount = 0x20;
  local_18.Buffer = param_2->ShadingPointBuffer;
  local_18._padding_._2_1_ = 0;
  bVar1 = 0;
  if ((((local_18.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar1 = 0x1c;
  }
  local_18._padding_._0_2_ = (ushort)bVar1;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  param_3->Debug_ShadingPointBuffer = pFVar2;
  local_18.Buffer = param_2->ShadingPointCounter;
  local_18._padding_._0_2_ = 0x1c;
  local_18._padding_._2_1_ = 0;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  param_3->Debug_ShadingPointCounter = pFVar2;
  local_18.Buffer = param_2->SampleBuffer;
  local_18._padding_._2_1_ = 0;
  bVar1 = 0;
  if ((((local_18.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar1 = 0x1c;
  }
  local_18._padding_._0_2_ = (ushort)bVar1;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  param_3->Debug_SampleBuffer = pFVar2;
  local_18.Buffer = param_2->SampleCounter;
  local_18._padding_._0_2_ = 0x1c;
  local_18._padding_._2_1_ = 0;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  param_3->Debug_SampleCounter = pFVar2;
  return;
}

