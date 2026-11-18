// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 6

// Call @ 14eaf06e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserInputMappingData_const_&>
::Call(void *param_1,FName *param_2,FNNEDenoiserInputMappingData *param_3)

{
  EInputResourceName EVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  EResourceName EVar5;
  
  EVar1 = param_3->Resource;
  lVar3 = param_3->_padding_;
  if (EVar1 != Color) {
    if (EVar1 == Albedo) {
      EVar5 = Albedo;
      goto LAB_14eae7c0a;
    }
    if (EVar1 == Normal) {
      EVar5 = Normal;
      goto LAB_14eae7c0a;
    }
    if (EVar1 == Output) {
      EVar5 = Output;
      goto LAB_14eae7c0a;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x12,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = Color;
LAB_14eae7c0a:
  NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)param_1,(int)param_3->_padding_,*(int *)((longlong)&param_3->_padding_ + 4),EVar5,
             (int)lVar3,0);
  return;
}

// Call @ 14eaf06f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserOutputMappingData_const_&>
::Call(void *param_1,FName *param_2,FNNEDenoiserOutputMappingData *param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  EResourceName EVar4;
  
  lVar2 = param_3->_padding_;
  if (param_3->Resource == Output) {
    EVar4 = Output;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar4 = Color;
  }
  NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)param_1,(int)param_3->_padding_,*(int *)((longlong)&param_3->_padding_ + 4),EVar4,
             (int)lVar2,0);
  return;
}

// Call @ 14eaf0700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalInputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&>
::Call(void *param_1,FName *param_2,FNNEDenoiserTemporalInputMappingData *param_3)

{
  ETemporalInputResourceName EVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EResourceName EVar6;
  
  EVar1 = param_3->Resource;
  iVar2 = param_3->FrameIndex;
  lVar4 = param_3->_padding_;
  if (EVar1 != Color) {
    if (EVar1 == Albedo) {
      EVar6 = Albedo;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Normal) {
      EVar6 = Normal;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Flow) {
      EVar6 = Flow;
      goto LAB_14eae7d38;
    }
    if (EVar1 == Output) {
      EVar6 = Output;
      goto LAB_14eae7d38;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x2a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar6 = Color;
LAB_14eae7d38:
  NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)param_1,(int)param_3->_padding_,*(int *)((longlong)&param_3->_padding_ + 4),EVar6,
             (int)lVar4,iVar2);
  return;
}

// Call @ 14eaf0710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::MakeTensorLayout<FNNEDenoiserTemporalOutputMappingData>'::__l2::<lambda_1>,void,FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&>
::Call(void *param_1,FName *param_2,FNNEDenoiserTemporalOutputMappingData *param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  EResourceName EVar4;
  
  lVar2 = param_3->_padding_;
  if (param_3->Resource == Output) {
    EVar4 = Output;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOMappingData.cpp"
                       ,0x34,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar4 = Color;
  }
  NNEDenoiser::Private::Detail::Add
            (*(TMap<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,UE::NNEDenoiser::Private::FResourceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::NNEDenoiser::Private::FResourceInfo,0>_>,0>_>
               **)param_1,(int)param_3->_padding_,*(int *)((longlong)&param_3->_padding_ + 4),EVar4,
             (int)lVar2,0);
  return;
}

// Call @ 14eaf0720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  undefined8 *puVar5;
  FRDGEventName *pFVar6;
  FRDGBuffer *pFVar7;
  FAutoExposureTestUploadParameters *pFVar8;
  undefined8 *puVar9;
  FAutoExposureTestDownloadParameters *pFVar10;
  undefined1 auStackY_988 [32];
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  <lambda_1> <Stack_918;
  FRDGBufferDesc FStack_908;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined8 uStack_8e0;
  FRDGEventName FStack_8d8;
  <lambda_2> <Stack_8c0;
  FRDGTextureAccess FStack_8b0;
  FRDGEventName FStack_898;
  FRDGEventName FStack_880;
  undefined1 auStack_868 [24];
  float fStack_850;
  int iStack_84c;
  undefined4 uStack_848;
  undefined8 uStack_844;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined2 uStack_834;
  void *pvStack_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined1 auStack_818 [64];
  ForAnyElementType FStack_7d8;
  int iStack_7d0;
  int aiStack_7cc [95];
  ForElementType<FRDGBuffer_*> FStack_650;
  uint uStack_648;
  uint auStack_644 [303];
  FRDGTrace FStack_188;
  FRDGUserValidation FStack_118;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_988;
  bVar1 = param_2->field_0x6a;
  puVar9 = (undefined8 *)0x0;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
  }
  FStack_8d8.EventFormat = L"";
  FStack_8d8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_8d8.FormattedEventName.Data.ArrayNum = 0;
  FStack_8d8.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)auStack_818,param_2,&FStack_8d8,None,GMaxRHIShaderPlatform);
  uStack_928 = 0x780;
  uStack_924 = 0x440;
  uStack_91c = 0x440;
  fStack_850 = FClearValueBinding::Black.Value.Color[3];
  iStack_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_920 = 0x780;
  uStack_844 = 0x44000000780;
  auStack_868._0_8_ = 0;
  auStack_868._8_8_ = FClearValueBinding::Black._0_8_;
  auStack_868._16_8_ = FClearValueBinding::Black.Value._4_8_;
  uStack_848 = 0;
  uStack_83c = 0x10001;
  uStack_838 = 0x1000101;
  uStack_834 = 0xff00;
  pvStack_828 = (void *)0x0;
  uStack_820 = 0;
  uStack_81c = 1;
  pFVar4 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)auStack_818,(FRDGTextureDesc *)auStack_868,
                      L"AutoExposureInputTexture",None);
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar5 = puVar9;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &
              ___7__TObject_VFAutoExposureTestUploadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  }
  puStack_938 = puVar5;
  if ((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_938) &&
     ((FScriptContainerElement *)&puStack_938 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  pFVar8 = (FAutoExposureTestUploadParameters *)(puVar5 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_938;
  iStack_7d0 = iStack_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&FStack_8b0,pFVar4,CopyDest);
  *(FRDGTexture **)&pFVar8->InputTexture = FStack_8b0.Texture;
  *(FRDGTextureSubresourceRange *)(puVar5 + 3) = FStack_8b0.SubresourceRange;
  puVar5[4] = FStack_8b0._16_8_;
  <Stack_918.TestData = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)param_1;
  <Stack_918.Parameters = pFVar8;
  pFVar6 = FRDGEventName::FRDGEventName(&FStack_880,1,L"NNEDenoiser.AutoExposureTest.Upload");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
            ((FRDGBuilder *)auStack_818,pFVar6,pFVar8,Readback,&<Stack_918);
  if (FStack_880.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_880.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uStack_8e4 = FStack_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  uStack_8f0 = 4;
  uStack_8ec = 2;
  uStack_8e8 = 0x4109;
  FStack_908.BytesPerElement = 4;
  FStack_908.NumElements = 2;
  FStack_908._12_4_ = FStack_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  FStack_908.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  uStack_8e0 = 0;
  FStack_908.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer(&FStack_118,&FStack_908,L"AutoExposureOutputBuffer",None)
  ;
  if (FStack_908.BytesPerElement == 0) {
    FStack_908.BytesPerElement = 1;
  }
  if (FStack_908.NumElements == 0) {
    FStack_908.NumElements = 1;
  }
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x130,8);
  pFVar7 = FRDGBuffer::FRDGBuffer(pFVar7,L"AutoExposureOutputBuffer",&FStack_908,None);
  if (uStack_648 == auStack_644[0]) {
    uStack_648 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,&FStack_650,(int *)auStack_644);
  }
  FStack_650.Data[(int)uStack_648] = pFVar7;
  (pFVar7->Handle).Index = uStack_648;
  uStack_648 = uStack_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&FStack_118,pFVar7);
  FRDGTrace::AddResource(&FStack_188,(FRDGViewableResource *)pFVar7);
  (**(code **)(*(longlong *)((longlong)param_1 + 0x10) + 0x10))
            ((longlong)param_1 + 0x10,auStack_818,pFVar4,pFVar7);
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &
              ___7__TObject_VFAutoExposureTestDownloadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar5 + 3) = 0x80;
    puVar9 = puVar5;
  }
  puStack_930 = puVar9;
  if ((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_930) &&
     ((FScriptContainerElement *)&puStack_930 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  pFVar10 = (FAutoExposureTestDownloadParameters *)(puVar9 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_930;
  <Stack_918.Parameters =
       (FAutoExposureTestUploadParameters *)CONCAT44(<Stack_918.Parameters._4_4_,0x80);
  *(FRDGBuffer **)&pFVar10->OutputBuffer = pFVar7;
  puVar9[3] = <Stack_918.Parameters;
  <Stack_8c0.ResultRDG = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  <Stack_918.TestData = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)pFVar7;
  <Stack_8c0.Parameters = pFVar10;
  iStack_7d0 = iStack_7d0 + 1;
  pFVar6 = FRDGEventName::FRDGEventName(&FStack_898,1,L"NNEDenoiser.AutoExposureTest.Download");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
            ((FRDGBuilder *)auStack_818,pFVar6,pFVar10,Readback,&<Stack_8c0);
  if ((void *)CONCAT44(FStack_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       FStack_898.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   FStack_898.FormattedEventName.Data.AllocatorInstance.Data._0_4_))
    ;
  }
  FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
  if (pvStack_828 != (void *)0x0) {
    FMemory::Free(pvStack_828);
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
  return;
}

// Call @ 14eaf0730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGTexture *pFVar5;
  undefined8 *puVar6;
  FRDGEventName *pFVar7;
  FRDGBuffer *pFVar8;
  FRDGTexture *pFVar9;
  FTransferFunctionTestUploadTextureParameters *pFVar10;
  FTransferFunctionTestUploadBufferParameters *pFVar11;
  undefined8 *puVar12;
  FTransferFunctionTestDownloadParameters *pFVar13;
  undefined1 auStackY_a38 [32];
  undefined8 *puStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  FRDGBuffer *pFStack_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined8 uStack_9b8;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  FRDGBufferDesc FStack_998;
  FRDGEventName FStack_980;
  <lambda_1> <Stack_968;
  <lambda_2> <Stack_958;
  <lambda_3> <Stack_948;
  FRDGTextureAccess FStack_930;
  FRDGTextureAccess FStack_918;
  FRDGEventName FStack_900;
  FRDGEventName FStack_8e8;
  FRDGEventName FStack_8d0;
  undefined1 auStack_8b8 [24];
  float fStack_8a0;
  int iStack_89c;
  undefined4 uStack_898;
  undefined8 uStack_894;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined2 uStack_884;
  void *pvStack_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined1 auStack_868 [24];
  float fStack_850;
  int iStack_84c;
  undefined4 uStack_848;
  undefined8 uStack_844;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined2 uStack_834;
  void *pvStack_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined1 auStack_818 [64];
  ForAnyElementType FStack_7d8;
  int iStack_7d0;
  int aiStack_7cc [95];
  ForElementType<FRDGBuffer_*> FStack_650;
  uint uStack_648;
  uint auStack_644 [303];
  FRDGTrace FStack_188;
  FRDGUserValidation FStack_118;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  bVar1 = param_2->field_0x6a;
  puVar12 = (undefined8 *)0x0;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
  }
  FStack_980.EventFormat = L"";
  FStack_980.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_980.FormattedEventName.Data.ArrayNum = 0;
  FStack_980.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)auStack_818,param_2,&FStack_980,None,GMaxRHIShaderPlatform);
  uStack_9d0 = 0x780;
  uStack_9cc = 0x440;
  uStack_9ac = 0x440;
  fStack_850 = FClearValueBinding::Black.Value.Color[3];
  iStack_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_9b0 = 0x780;
  uStack_844 = 0x44000000780;
  auStack_868._0_8_ = 0;
  auStack_868._8_8_ = FClearValueBinding::Black._0_8_;
  auStack_868._16_8_ = FClearValueBinding::Black.Value._4_8_;
  uStack_848 = 0;
  uStack_83c = 0x10001;
  uStack_838 = 0x1000101;
  uStack_834 = 0xff00;
  pvStack_828 = (void *)0x0;
  uStack_820 = 0;
  uStack_81c = 1;
  pFVar5 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)auStack_818,(FRDGTextureDesc *)auStack_868,
                      L"TransferFunctionInputTexture",None);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar6 = puVar12;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestUploadTextureParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  }
  puStack_9e8 = puVar6;
  if ((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_9e8) &&
     ((FScriptContainerElement *)&puStack_9e8 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  pFVar10 = (FTransferFunctionTestUploadTextureParameters *)(puVar6 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_9e8;
  iStack_7d0 = iStack_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&FStack_930,pFVar5,CopyDest);
  *(FRDGTexture **)&pFVar10->InputTexture = FStack_930.Texture;
  *(FRDGTextureSubresourceRange *)(puVar6 + 3) = FStack_930.SubresourceRange;
  puVar6[4] = FStack_930._16_8_;
  <Stack_968.TestData = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)param_1;
  <Stack_968.Parameters = pFVar10;
  pFVar7 = FRDGEventName::FRDGEventName
                     (&FStack_8e8,1,L"NNEDenoiser.TransferFunctionTest.UploadInput");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
            ((FRDGBuilder *)auStack_818,pFVar7,pFVar10,Readback,&<Stack_968);
  if (FStack_8e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uStack_9bc = FStack_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  pFStack_9c8 = (FRDGBuffer *)0x200000004;
  uStack_9c0 = 0x4109;
  FStack_998._12_4_ = FStack_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  FStack_998.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  uStack_9b8 = 0;
  FStack_998.BytesPerElement = 4;
  FStack_998.NumElements = 2;
  FStack_998.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer
            (&FStack_118,&FStack_998,L"TransferFunctionInputScaleBuffer",None);
  uVar4 = FStack_998.BytesPerElement;
  if (FStack_998.BytesPerElement == 0) {
    uVar4 = 1;
  }
  if (FStack_998.NumElements == 0) {
    FStack_998.NumElements = 1;
  }
  FStack_998.BytesPerElement = uVar4;
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x130,8);
  pFVar8 = FRDGBuffer::FRDGBuffer(pFVar8,L"TransferFunctionInputScaleBuffer",&FStack_998,None);
  if (uStack_648 == auStack_644[0]) {
    uStack_648 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,&FStack_650,(int *)auStack_644);
  }
  FStack_650.Data[(int)uStack_648] = pFVar8;
  (pFVar8->Handle).Index = uStack_648;
  uStack_648 = uStack_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&FStack_118,pFVar8);
  FRDGTrace::AddResource(&FStack_188,(FRDGViewableResource *)pFVar8);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x20,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar6 = puVar12;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestUploadBufferParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0x2000;
  }
  puStack_9e0 = puVar6;
  if ((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_9e0) &&
     ((FScriptContainerElement *)&puStack_9e0 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  pFVar11 = (FTransferFunctionTestUploadBufferParameters *)(puVar6 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_9e0;
  uStack_9c0 = 0x2000;
  *(FRDGBuffer **)&pFVar11->InputBuffer = pFVar8;
  puVar6[3] = CONCAT44(uStack_9bc,0x2000);
  <Stack_958.InputScale = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x10);
  pFStack_9c8 = pFVar8;
  <Stack_958.Parameters = pFVar11;
  iStack_7d0 = iStack_7d0 + 1;
  pFVar7 = FRDGEventName::FRDGEventName
                     (&FStack_8d0,1,L"NNEDenoiser.TransferFunctionTest.UploadScale");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
            ((FRDGBuilder *)auStack_818,pFVar7,pFVar11,Readback,&<Stack_958);
  if (FStack_8d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8d0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uStack_9a8 = 0x780;
  uStack_9a4 = 0x440;
  uStack_99c = 0x440;
  fStack_8a0 = FClearValueBinding::Black.Value.Color[3];
  iStack_89c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_9a0 = 0x780;
  uStack_894 = 0x44000000780;
  auStack_8b8._0_8_ = 0x20000;
  auStack_8b8._8_8_ = FClearValueBinding::Black._0_8_;
  auStack_8b8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  uStack_898 = 0;
  uStack_88c = 0x10001;
  uStack_888 = 0x1000101;
  uStack_884 = 0xff00;
  pvStack_878 = (void *)0x0;
  uStack_870 = 0;
  uStack_86c = 1;
  pFVar9 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)auStack_818,(FRDGTextureDesc *)auStack_8b8,
                      L"TransferFunctionOutputTexture",None);
  (**(code **)(*(longlong *)((longlong)param_1 + 0x18) + 0x18))((longlong)param_1 + 0x18,pFVar8);
  (**(code **)(*(longlong *)((longlong)param_1 + 0x18) + 0x20))
            ((longlong)param_1 + 0x18,auStack_818,pFVar5,pFVar9);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestDownloadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    puVar12 = puVar6;
  }
  puStack_9d8 = puVar12;
  if ((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_9d8) &&
     ((FScriptContainerElement *)&puStack_9d8 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  pFVar13 = (FTransferFunctionTestDownloadParameters *)(puVar12 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_9d8;
  iStack_7d0 = iStack_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&FStack_918,pFVar9,CopySrc);
  *(FRDGTexture **)&pFVar13->OutputTexture = FStack_918.Texture;
  *(FRDGTextureSubresourceRange *)(puVar12 + 3) = FStack_918.SubresourceRange;
  puVar12[4] = FStack_918._16_8_;
  <Stack_948.ResultRDG =
       *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  <Stack_948.Num = *(int *)((longlong)param_1 + 0x30);
  <Stack_948.Parameters = pFVar13;
  pFVar7 = FRDGEventName::FRDGEventName(&FStack_900,1,L"NNEDenoiser.TransferFunctionTest.Download");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l8::<lambda_3>_>
            ((FRDGBuilder *)auStack_818,pFVar7,pFVar13,Readback,&<Stack_948);
  if ((void *)CONCAT44(FStack_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       FStack_900.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   FStack_900.FormattedEventName.Data.AllocatorInstance.Data._0_4_))
    ;
  }
  FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  (**(code **)(**(longlong **)((longlong)param_1 + 0x38) + 0x10))();
  if (pvStack_878 != (void *)0x0) {
    FMemory::Free(pvStack_878);
  }
  if (pvStack_828 != (void *)0x0) {
    FMemory::Free(pvStack_828);
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
  return;
}

