// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 15

// StaticClass @ 14ddbb500

UClass * __cdecl UMovieGraphImageSequenceOutputNode_EXR::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode_EXR",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode_EXR,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphImageSequenceOutputNode_EXR>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_EXR>,local_res8,
               UMovieGraphImageSequenceOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton;
}

// UMovieGraphImageSequenceOutputNode_EXR @ 14ddc6b60

UMovieGraphImageSequenceOutputNode_EXR * __thiscall
UMovieGraphImageSequenceOutputNode_EXR::UMovieGraphImageSequenceOutputNode_EXR
          (UMovieGraphImageSequenceOutputNode_EXR *this,FVTableHelper *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UMovieGraphImageSequenceOutputNode::UMovieGraphImageSequenceOutputNode
            ((UMovieGraphImageSequenceOutputNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  this->bEnableBurnIn = false;
  ::FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  *(undefined8 *)&(this->BurnInClass).field_0x0 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bCompositeOntoFinalImage = true;
  ::FString::FString(&this->BurnInFileNameFormat,
                     L"{sequence_name}.{layer_name}.BurnIn.{frame_number}");
  return this;
}

// UMovieGraphImageSequenceOutputNode_EXR @ 14ddc6c40

UMovieGraphImageSequenceOutputNode_EXR * __thiscall
UMovieGraphImageSequenceOutputNode_EXR::UMovieGraphImageSequenceOutputNode_EXR
          (UMovieGraphImageSequenceOutputNode_EXR *this)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UMovieGraphImageSequenceOutputNode::UMovieGraphImageSequenceOutputNode
            ((UMovieGraphImageSequenceOutputNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  this->bEnableBurnIn = false;
  ::FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  *(undefined8 *)&(this->BurnInClass).field_0x0 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bCompositeOntoFinalImage = true;
  ::FString::FString(&this->BurnInFileNameFormat,
                     L"{sequence_name}.{layer_name}.BurnIn.{frame_number}");
  *(undefined2 *)&this->_padding_ = 5;
  this->Compression = PIZ;
  this->LosslessCompression = PIZ;
  return this;
}

// ~UMovieGraphImageSequenceOutputNode_EXR @ 14ddcb8a0

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::~UMovieGraphImageSequenceOutputNode_EXR
          (UMovieGraphImageSequenceOutputNode_EXR *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  pFVar1 = (this->BurnInFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphImageSequenceOutputNode::~UMovieGraphImageSequenceOutputNode
            ((UMovieGraphImageSequenceOutputNode *)this);
  return;
}

// CreateImageWriteTask @ 14ddd9da0

/* WARNING: Type propagation algorithm not settling */

TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_> __thiscall
UMovieGraphImageSequenceOutputNode_EXR::CreateImageWriteTask
          (UMovieGraphImageSequenceOutputNode_EXR *this,FString *param_1,
          EEXRCompressionFormat param_2,bool param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_> TVar6;
  FEXRImageWriteTask *pFVar7;
  FModuleManager *this_00;
  FName *pFVar8;
  undefined7 in_register_00000081;
  undefined8 *puVar9;
  FName local_res10;
  undefined8 *local_res18;
  bool in_stack_00000028;
  
  puVar9 = (undefined8 *)CONCAT71(in_register_00000081,param_2);
  pFVar7 = (FEXRImageWriteTask *)0x0;
  local_res10 = (FName)param_1;
  local_res18 = puVar9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                           ,0x1aa,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Ptr = (FEXRImageWriteTask *)(*pcVar3)();
      return (TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_>)TVar6.Ptr;
    }
    this_00 = FModuleManager::Get();
    pFVar8 = ::FName::FName(&local_res10,L"UEOpenExrRTTI");
    FModuleManager::LoadModule(this_00,*pFVar8,None);
    ThreadSafeOnce246 = 1;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = UE::MoviePipeline::CVarMoviePipelinePadLayersForMultiPartEXR.Ref;
  if (in_stack_00000028 != false) {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6.Ptr = (FEXRImageWriteTask *)(*pcVar3)();
      return (TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_>)TVar6.Ptr;
    }
    if (pTVar4->ShadowedValue[0] == false) {
      bVar5 = false;
      goto LAB_14ddd9e53;
    }
  }
  bVar5 = true;
LAB_14ddd9e53:
  local_res10 = (FName)::operator_new(0x170);
  if (local_res10 != (FName)0x0) {
    pFVar7 = FEXRImageWriteTask::FEXRImageWriteTask((FEXRImageWriteTask *)local_res10);
  }
  pFVar1 = &pFVar7->Filename;
  if (pFVar1 != (FString *)puVar9) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar9;
    *puVar9 = 0;
    (pFVar7->Filename).Data.ArrayNum = *(int *)(puVar9 + 1);
    (pFVar7->Filename).Data.ArrayMax = *(int *)((longlong)puVar9 + 0xc);
    puVar9[1] = 0;
  }
  pFVar7->bMultipart = in_stack_00000028;
  pFVar7->bPadToDataWindowSize = bVar5;
  pFVar7->Compression = param_3;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar7;
  if ((void *)*puVar9 != (void *)0x0) {
    FMemory::Free((void *)*puVar9);
  }
  return (TUniquePtr<FEXRImageWriteTask,TDefaultDelete<FEXRImageWriteTask>_>)
         (FEXRImageWriteTask *)param_1;
}

// GetPrivateStaticClass @ 14dde37e0

UClass * __cdecl UMovieGraphImageSequenceOutputNode_EXR::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode_EXR",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode_EXR,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphImageSequenceOutputNode_EXR>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_EXR>,local_res8,
               UMovieGraphImageSequenceOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_EXR.InnerSingleton;
}

// InjectNodesPostEvaluation @ 14dde71f0

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::InjectNodesPostEvaluation
          (UMovieGraphImageSequenceOutputNode_EXR *this,FName *param_1,
          UMovieGraphEvaluatedConfig *param_2,
          TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieGraphOutputBurnInNode *pUVar7;
  UMovieGraphOutputBurnInNode *local_38;
  FSoftObjectPath local_30;
  
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    pUVar7 = NewObject<UMovieGraphOutputBurnInNode>((UObject *)param_2);
    pUVar7->bOverride_OutputName = '\x01';
    pUVar7->bOverride_OutputRestriction = '\x01';
    pUVar7->bOverride_FileNameFormat = '\x01';
    *(byte *)&pUVar7->_padding_ = (byte)pUVar7->_padding_ | 1;
    *(byte *)&pUVar7->_padding_ = (byte)pUVar7->_padding_ | 1;
    ::FString::operator=(&pUVar7->OutputName,L"EXR");
    iVar2 = (int)this->_padding_;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&pUVar7->FileNameFormat,(wchar_t *)this->_padding_,iVar6);
    local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_30.AssetPath.PackageName.Number = 0;
    local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_30.AssetPath.AssetName.Number = 0;
    local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.SubPathString.Data.ArrayNum = 0;
    local_30.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_30,(UObject *)this[-1]._padding_);
    FSoftClassPath::operator=(&pUVar7->OutputRestriction,(FSoftClassPath *)&local_30);
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
    *(char *)((longlong)&pUVar7->_padding_ + 1) = (char)this->_padding_;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&pUVar7->_padding_,(FSoftObjectPath *)&this->_padding_);
    pFVar3 = (param_3->AllocatorInstance).Data;
    local_38 = pUVar7;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_3->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    *(UMovieGraphOutputBurnInNode **)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_38;
  }
  return;
}

// OnReceiveImageDataImpl @ 14ddeb240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddec59d) */
/* WARNING: Removing unreachable block (ram,0x00014ddebec2) */
/* WARNING: Removing unreachable block (ram,0x00014ddebefe) */
/* WARNING: Removing unreachable block (ram,0x00014ddec779) */
/* WARNING: Removing unreachable block (ram,0x00014ddec3a2) */
/* WARNING: Removing unreachable block (ram,0x00014ddec58d) */
/* WARNING: Removing unreachable block (ram,0x00014ddebf14) */
/* WARNING: Removing unreachable block (ram,0x00014ddec769) */
/* WARNING: Removing unreachable block (ram,0x00014ddec392) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffd98 : 0x00014ddec396 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::OnReceiveImageDataImpl
          (UMovieGraphImageSequenceOutputNode_EXR *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          *param_3)

{
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar1;
  uint uVar2;
  uint *puVar3;
  FName FVar4;
  UMovieGraphImageSequenceOutputNode *pUVar5;
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
  *pTVar6;
  longlong *plVar7;
  FName FVar8;
  code *pcVar9;
  undefined8 uVar10;
  UMovieGraphImageSequenceOutputNode_EXR *this_00;
  FMovieGraphOutputMergerFrame *pFVar11;
  UMovieGraphPipeline *pUVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FMovieGraphRenderDataIdentifier *pFVar21;
  UMovieGraphEvaluatedConfig *pUVar22;
  UMovieGraphFileOutputNode *pUVar23;
  UClass *pUVar24;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 *puVar26;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar27;
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar28;
  byte bVar29;
  longlong *plVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  ForElementType<FSetElementId> FVar33;
  FScriptContainerElement *pFVar34;
  FSoftObjectPath *pFVar35;
  ForAnyElementType FVar36;
  longlong lVar37;
  undefined8 uVar38;
  FMovieGraphRenderDataIdentifier *pFVar39;
  uint uVar40;
  FSoftObjectPath *pFVar41;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *pTVar42;
  undefined1 *puVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  bool bVar47;
  undefined1 auStackY_678 [32];
  undefined1 local_624;
  undefined1 local_623;
  undefined1 local_622;
  undefined1 local_621;
  int local_620 [2];
  FMovieGraphRenderDataIdentifier *local_618;
  undefined1 local_610 [16];
  UMovieGraphImageSequenceOutputNode_EXR *local_600;
  undefined8 *local_5f8;
  FMovieGraphOutputMergerFrame *local_5f0;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_5e8;
  undefined8 uStack_5e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  int local_5c0;
  undefined4 uStack_5bc;
  ForAnyElementType *local_5b8;
  longlong local_5b0;
  UMovieGraphPipeline *local_5a8;
  ForAnyElementType local_5a0;
  int local_598;
  int local_594;
  TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
  local_590;
  uint local_580;
  undefined8 *local_578;
  FString local_570;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 *local_550;
  undefined8 *local_548;
  undefined8 local_540;
  FString local_538;
  FEXRImageWriteTask *local_528;
  FString local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_510;
  FSoftObjectPath local_4f0;
  FSoftObjectPath local_4d0;
  FMovieGraphOutputFutureData local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_428;
  int local_408;
  int local_404;
  UMovieGraphFileOutputNode *local_400;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_3f8;
  UObject *local_3e8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d8;
  undefined8 uStack_3b8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong local_358;
  FString local_350;
  undefined1 local_340 [16];
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_330;
  undefined8 uStack_328;
  TBitArray<FDefaultBitArrayAllocator> *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_2e4;
  FMovieGraphRenderDataIdentifier local_2c0;
  code *local_278 [2];
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  longlong local_250;
  code *local_248 [2];
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  longlong local_220;
  code *local_218 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1f0;
  TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
  local_1e8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_198;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_678;
  bVar16 = false;
  local_610._8_8_ = param_3;
  local_600 = this;
  local_5f0 = param_2;
  local_5a8 = param_1;
  if ((param_2 == (FMovieGraphOutputMergerFrame *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawFrameData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                          ,0x206,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UMovieGraphFileOutputNode::GetCompositedPasses(&local_590,param_2);
  local_1e8.Pairs.Elements._0_8_ = 0;
  local_1e8.Pairs.Elements._8_8_ = 0;
  local_1e8.Pairs.Elements._32_8_ = 0;
  local_1e8.Pairs.Elements._40_4_ = 0;
  local_1e8.Pairs.Elements._44_4_ = 0x80;
  local_1e8.Pairs.Elements._48_4_ = 0xffffffff;
  local_1e8.Pairs.Elements._52_4_ = 0;
  local_1e8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1e8.Pairs.HashSize = 0;
  pTVar1 = &param_2->ImageOutputData;
  local_428._padding_._0_4_ = 0;
  local_428._padding_._4_4_ = 1;
  local_510.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->ImageOutputData).field_0x10;
  local_428.UnvisitedBitMask = 0xffffffff;
  local_428.CurrentBitIndex = 0;
  local_428.BaseBitIndex = 0;
  local_428.Array = local_510.Array;
  if (*(int *)&(param_2->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_428);
  }
  uStack_5e0 = CONCAT44(local_428._padding_._4_4_,(undefined4)local_428._padding_);
  pTStack_5d8 = local_428.Array;
  uStack_5d0._4_4_ = local_428.CurrentBitIndex;
  uStack_5d0._0_4_ = local_428.UnvisitedBitMask;
  uStack_5c8._4_4_ = local_428._28_4_;
  uStack_5c8._0_4_ = local_428.BaseBitIndex;
  local_5c0 = *(int *)&(param_2->ImageOutputData).field_0x8 -
              *(int *)&(param_2->ImageOutputData).field_0x34;
  TStack_3a8.Array = local_428.Array;
  uStack_388 = CONCAT44(uStack_5bc,local_5c0);
  uVar18 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  local_510._padding_._0_4_ = (int)uVar18 >> 5;
  bVar29 = (byte)uVar18 & 0x1f;
  local_510._padding_._4_4_ = 1 << bVar29;
  local_510.UnvisitedBitMask = -1 << bVar29;
  local_510.BaseBitIndex = uVar18 & 0xffffffe0;
  local_5e8 = pTVar1;
  local_510.CurrentBitIndex = uVar18;
  local_3b0 = pTVar1;
  TStack_3a8._padding_ = uStack_5e0;
  TStack_3a8._16_8_ = uStack_5d0;
  TStack_3a8._24_8_ = uStack_5c8;
  if ((((int)uVar18 < 0) || (*(int *)&(param_2->ImageOutputData).field_0x28 < (int)uVar18)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (uVar18 != *(uint *)&(param_2->ImageOutputData).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_510);
  }
  iVar20 = local_510.CurrentBitIndex;
  pTVar13 = local_510.Array;
  uVar10 = local_610._8_8_;
  uStack_5e0 = CONCAT44(local_510._padding_._4_4_,(int)local_510._padding_);
  pTStack_5d8 = local_510.Array;
  uStack_5d0 = CONCAT44(local_510.CurrentBitIndex,local_510.UnvisitedBitMask);
  uStack_5c8 = CONCAT44(local_510._28_4_,local_510.BaseBitIndex);
  while( true ) {
    pTVar14 = local_3b0;
    bVar15 = false;
    if (*(int *)&local_3b0->field_0x8 - *(int *)&local_3b0->field_0x34 != (int)uStack_388) {
      local_624 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_624);
    }
    if (((TStack_3a8.CurrentBitIndex == iVar20) && (TStack_3a8.Array == pTVar13)) &&
       (pTVar14 == pTVar1)) break;
    pFVar39 = (FMovieGraphRenderDataIdentifier *)
              ((longlong)TStack_3a8.CurrentBitIndex * 0x58 + *(longlong *)pTVar14);
    if ((pFVar39[1].RootBranchName == (FName)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderData.Value.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                            ,0x20f,
                            L"Unexpected empty image data: incorrectly moved or its production failed?"
                           ), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar37 = *(longlong *)((longlong)pFVar39[1].RootBranchName + 0x18);
    local_5b0 = lVar37;
    if (*(int *)(lVar37 + 0x200) == 0) {
LAB_14ddeb530:
      bVar15 = false;
    }
    else {
      local_4f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_4f0.AssetPath.PackageName.Number = 0;
      local_4f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_4f0.AssetPath.AssetName.Number = 0;
      local_4f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f0.SubPathString.Data.ArrayNum = 0;
      local_4f0.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_4f0,(UObject *)local_600->_padding_);
      bVar16 = true;
      pFVar35 = *(FSoftObjectPath **)(lVar37 + 0x1f8);
      pFVar41 = pFVar35 + *(int *)(lVar37 + 0x200);
      for (; pFVar35 != pFVar41; pFVar35 = pFVar35 + 1) {
        bVar15 = FSoftObjectPath::operator==(pFVar35,&local_4f0);
        if (bVar15) goto LAB_14ddeb530;
      }
      bVar15 = true;
    }
    if ((bVar16) &&
       (bVar16 = false,
       local_4f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_4f0.SubPathString.Data.AllocatorInstance.Data);
    }
    if (!bVar15) {
      pTVar42 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                 *)(local_590.AllocatorInstance.Data + (longlong)local_590.ArrayNum * 0x50);
      for (FVar36.Data = local_590.AllocatorInstance.Data;
          (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
           *)FVar36.Data != pTVar42; FVar36.Data = FVar36.Data + 0x50) {
        bVar15 = FMovieGraphRenderDataIdentifier::operator==
                           (pFVar39,(FMovieGraphRenderDataIdentifier *)FVar36.Data);
        if (bVar15) {
          if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)FVar36.Data !=
              (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)0x0) goto LAB_14ddeb77a;
          break;
        }
      }
      pFVar21 = FMovieGraphRenderDataIdentifier::FMovieGraphRenderDataIdentifier(&local_2c0,pFVar39)
      ;
      uVar18 = ::GetTypeHash(pFVar21);
      iVar19 = TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FMovieGraphRenderDataIdentifier>
                         ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                           *)uVar10,uVar18,pFVar39);
      if (iVar19 != -1) {
        pUVar22 = TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->(&local_5f0->EvaluatedConfig);
        pUVar23 = (UMovieGraphFileOutputNode *)
                  UMovieGraphEvaluatedConfig::GetSettingForBranch
                            (pUVar22,(UClass *)local_600->_padding_,pFVar39->RootBranchName,false,
                             true);
        if (pUVar23 == (UMovieGraphFileOutputNode *)0x0) {
LAB_14ddeb613:
          pUVar23 = (UMovieGraphFileOutputNode *)0x0;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                              ,0x22b,
                              L"Image sequence output should not exist without a parent node in the graph."
                             );
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          pUVar24 = UMovieGraphImageSequenceOutputNode::StaticClass();
          iVar19 = (int)pUVar24->_padding_;
          if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar19) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
              &pUVar24->_padding_)) goto LAB_14ddeb613;
        }
        uVar18 = ((uint)((ulonglong)pUVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar23 >> 4)) *
                 -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        local_400 = pUVar23;
        if (local_1e8.Pairs.Elements._8_4_ != local_1e8.Pairs.Elements._52_4_) {
          FVar33 = (ForElementType<FSetElementId>)&local_1e8.Pairs.Hash;
          if (local_1e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar33 = local_1e8.Pairs.Hash.SecondaryData;
          }
          for (iVar19 = *(int *)((longlong)FVar33 +
                                (ulonglong)(local_1e8.Pairs.HashSize - 1U & uVar18) * 4);
              iVar19 != -1;
              iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + local_1e8.Pairs.Elements._0_8_)) {
            if (*(UMovieGraphFileOutputNode **)
                 ((longlong)iVar19 * 0x20 + local_1e8.Pairs.Elements._0_8_) == pUVar23) {
              if ((iVar19 != -1) &&
                 (lVar37 = (longlong)iVar19 * 0x20 + local_1e8.Pairs.Elements._0_8_, lVar37 != 0)) {
                pTVar25 = (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>
                           *)(lVar37 + 8);
                goto LAB_14ddeb6e5;
              }
              break;
            }
          }
        }
        pTVar25 = TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UMovieGraphFileOutputNode_const_*>(&local_1e8,uVar18,&local_400);
LAB_14ddeb6e5:
        pFVar34 = (pTVar25->AllocatorInstance).Data;
        if (((pFVar34 <= (FScriptContainerElement *)&local_5b0) &&
            ((FScriptContainerElement *)&local_5b0 < pFVar34 + (longlong)pTVar25->ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = pTVar25->ArrayNum;
        if (iVar19 == pTVar25->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar25->AllocatorInstance,&pTVar25->ArrayMax);
        }
        pTVar25->ArrayNum = iVar19 + 1;
        *(longlong *)((pTVar25->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_5b0;
      }
    }
LAB_14ddeb77a:
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  }
  TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
  ::Append<FDefaultSetAllocator>
            (&local_5f0->NodeInstanceToPayloads,
             (TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
              *)&local_1e8);
  uStack_5e0._0_4_ = 0;
  uStack_5e0._4_4_ = 1;
  uStack_5c8._0_4_ = 0;
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->ImageOutputData).field_0x10;
  iVar20 = *(int *)&(param_2->ImageOutputData).field_0x28;
  uStack_5d0._4_4_ = 0;
  if (iVar20 != 0) {
    puVar3 = *(uint **)&(param_2->ImageOutputData).field_0x20;
    puVar44 = (uint *)local_320;
    if (puVar3 != (uint *)0x0) {
      puVar44 = puVar3;
    }
    uVar18 = *puVar44;
    uStack_5c8._0_4_ = 0;
    while (uVar18 == 0) {
      uStack_5e0._0_4_ = (int)uStack_5e0 + 1;
      uStack_5c8._0_4_ = (int)uStack_5c8 + 0x20;
      uStack_5d0._4_4_ = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_5e0)
      goto LAB_14ddeb85f;
      uVar18 = puVar44[(int)uStack_5e0];
    }
    uStack_5e0._4_4_ = ~(uVar18 - 1) & uVar18;
    uVar31 = (ulonglong)uStack_5e0._4_4_ * 2 + 1;
    lVar37 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_404 = (int)lVar37;
    uStack_5d0._4_4_ = (int)uStack_5c8 + -1 + local_404;
    if (iVar20 < uStack_5d0._4_4_) {
      uStack_5d0._4_4_ = iVar20;
    }
  }
LAB_14ddeb85f:
  uStack_5d0._0_4_ = 0xffffffff;
  local_5c0 = *(int *)&(param_2->ImageOutputData).field_0x8 -
              *(int *)&(param_2->ImageOutputData).field_0x34;
  TStack_3d8.UnvisitedBitMask = 0xffffffff;
  uStack_3b8 = CONCAT44(uStack_5bc,local_5c0);
  uVar18 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  iVar19 = (int)uVar18 >> 5;
  bVar29 = (byte)uVar18 & 0x1f;
  uVar46 = 1 << bVar29;
  uVar45 = -1 << bVar29;
  uVar40 = uVar18 & 0xffffffe0;
  local_3e0 = pTVar1;
  TStack_3d8.Array = local_320;
  TStack_3d8._padding_._0_4_ = (int)uStack_5e0;
  TStack_3d8._padding_._4_4_ = uStack_5e0._4_4_;
  TStack_3d8.CurrentBitIndex = uStack_5d0._4_4_;
  TStack_3d8.BaseBitIndex = (int)uStack_5c8;
  if ((((int)uVar18 < 0) || (iVar20 < (int)uVar18)) &&
     (local_5e8 = pTVar1, pTStack_5d8 = local_320,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar2 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  if (uVar18 != uVar2) {
    puVar26 = *(undefined1 **)&(param_2->ImageOutputData).field_0x20;
    puVar43 = (undefined1 *)local_320;
    if (puVar26 != (undefined1 *)0x0) {
      puVar43 = puVar26;
    }
    uVar18 = uVar45 & *(uint *)(puVar43 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      iVar19 = iVar19 + 1;
      uVar40 = uVar40 + 0x20;
      uVar18 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar19) goto LAB_14ddeb983;
      uVar45 = 0xffffffff;
      uVar18 = *(uint *)(puVar43 + (longlong)iVar19 * 4);
    }
    uVar46 = ~(uVar18 - 1) & uVar18;
    uVar31 = (ulonglong)uVar46 * 2 + 1;
    lVar37 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_408 = (int)lVar37;
    uVar18 = local_408 + -1 + uVar40;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
    }
  }
LAB_14ddeb983:
  uStack_5e0 = CONCAT44(uVar46,iVar19);
  uStack_5d0 = CONCAT44(uVar18,uVar45);
  uStack_5c8 = CONCAT44(local_2e4,uVar40);
  local_5c0 = *(int *)&(param_2->ImageOutputData).field_0x8 -
              *(int *)&(param_2->ImageOutputData).field_0x34;
  uStack_328 = uStack_5e0;
  uStack_318 = uStack_5d0;
  uStack_308 = CONCAT44(uStack_5bc,local_5c0);
  local_310 = uStack_5c8;
  local_5e8 = pTVar1;
  pTStack_5d8 = local_320;
  local_330 = pTVar1;
LAB_14ddeb9d3:
  pTVar1 = local_3e0;
  if (*(int *)&local_3e0->field_0x8 - *(int *)&local_3e0->field_0x34 != (int)uStack_3b8) {
    local_623 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_623);
  }
  pFVar11 = local_5f0;
  if (((TStack_3d8.CurrentBitIndex == uStack_318._4_4_) && (TStack_3d8.Array == local_320)) &&
     (pTVar1 == local_330)) {
    local_1e8.Pairs.HashSize = 0;
    if (local_1e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1e8);
    DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
              ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                *)local_590.AllocatorInstance.Data,local_590.ArrayNum);
    if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)local_590.AllocatorInstance.Data !=
        (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)0x0) {
      FMemory::Free(local_590.AllocatorInstance.Data);
    }
    return;
  }
  pTVar42 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
             *)((longlong)TStack_3d8.CurrentBitIndex * 0x58 + *(longlong *)pTVar1);
  if (((local_5f0->EvaluatedConfig).Object == (UObject *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar22 = (UMovieGraphEvaluatedConfig *)(pFVar11->EvaluatedConfig).Object;
  FVar4.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
  FVar4.Number = *(uint *)&pTVar42->field_0x4;
  pUVar24 = StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(pUVar22,&local_3f8,pUVar24,FVar4,false,true);
  if (local_3f8.ArrayNum < 1) {
    if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.AllocatorInstance.Data);
    }
  }
  else {
    pUVar5 = *(UMovieGraphImageSequenceOutputNode **)local_3f8.AllocatorInstance.Data;
    FMemory::Free(local_3f8.AllocatorInstance.Data);
    if (pUVar5 != (UMovieGraphImageSequenceOutputNode *)0x0) {
      pUVar24 = StaticClass();
      this_00 = local_600;
      iVar20 = (int)pUVar24->_padding_;
      if (((iVar20 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
           &pUVar24->_padding_)) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
        uVar18 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
                 -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        if (local_1e8.Pairs.Elements._8_4_ != local_1e8.Pairs.Elements._52_4_) {
          FVar33 = (ForElementType<FSetElementId>)&local_1e8.Pairs.Hash;
          if (local_1e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar33 = local_1e8.Pairs.Hash.SecondaryData;
          }
          for (iVar20 = *(int *)((longlong)FVar33 +
                                (ulonglong)
                                (local_1e8.Pairs.HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
              iVar20 != -1;
              iVar20 = *(int *)((longlong)iVar20 * 0x20 + 0x18 + local_1e8.Pairs.Elements._0_8_)) {
            if (*(UMovieGraphImageSequenceOutputNode **)
                 ((longlong)iVar20 * 0x20 + local_1e8.Pairs.Elements._0_8_) == pUVar5) {
              if (((iVar20 != -1) &&
                  (lVar37 = (longlong)iVar20 * 0x20 + local_1e8.Pairs.Elements._0_8_, lVar37 != 0))
                 && ((longlong *)(lVar37 + 8) != (longlong *)0x0)) {
                pTVar6 = *(TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                           **)(*(longlong *)&pTVar42->field_0x48 + 0x18);
                plVar30 = *(longlong **)(lVar37 + 8);
                plVar7 = plVar30 + *(int *)(lVar37 + 0x10);
                goto joined_r0x00014ddebbbf;
              }
              break;
            }
          }
        }
      }
    }
  }
  goto LAB_14ddecb00;
joined_r0x00014ddebbbf:
  local_610._8_8_ = pTVar6;
  if (plVar30 == plVar7) goto LAB_14ddecb00;
  if ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
       *)*plVar30 == pTVar6) {
    local_148._0_8_ = (void *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f8._0_8_ = (void *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.Data.ArrayNum = 0;
    local_538.Data.ArrayMax = 0;
    UMovieGraphImageSequenceOutputNode::CreateFileName
              ((UMovieGraphImageSequenceOutputNode *)local_600,&local_570,pFVar11,pUVar5,local_5a8,
               pTVar42,(EImageFormat)local_600->_padding_,(FMovieGraphResolveArgs *)local_148,
               &local_538);
    if (local_570.Data.ArrayNum < 2) {
      local_622 = 0;
      bVar16 = `UMovieGraphImageSequenceOutputNode_EXR::OnReceiveImageDataImpl'::__l54::<lambda_2>::
               operator()(&local_622);
      if (!bVar16) {
        if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_570.Data.AllocatorInstance.Data);
        }
        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data.AllocatorInstance.Data);
        }
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_f8,0);
        if (local_d8 != (void *)0x0) {
          FMemory::Free(local_d8);
        }
        if ((void *)local_f8._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_f8._0_8_);
        }
        local_100 = 0;
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_148,0);
        if (local_128 != (void *)0x0) {
          FMemory::Free(local_128);
        }
        if ((void *)local_148._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        goto LAB_14ddecb00;
      }
    }
    iVar20 = local_570.Data.ArrayNum;
    FVar36.Data = local_570.Data.AllocatorInstance.Data;
    puVar26 = (undefined1 *)((longlong)&pUVar5[1]._padding_ + 2);
    if (pTVar6[4].field_0x4d == '\0') {
      puVar26 = (undefined1 *)((longlong)&pUVar5[1]._padding_ + 1);
    }
    bVar16 = (bool)*puVar26;
    local_5b8 = &local_5a0;
    local_5a0.Data = (FScriptContainerElement *)0x0;
    local_598 = local_570.Data.ArrayNum;
    if (local_570.Data.ArrayNum == 0) {
      local_594 = local_570.Data.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_570.Data.ArrayNum,0,&local_5a0,local_570.Data.ArrayNum,&local_594);
      memcpy(local_5a0.Data,FVar36.Data,(longlong)iVar20 * 2);
    }
    CreateImageWriteTask(this_00,(FString *)local_610,(EEXRCompressionFormat)&local_5a0,bVar16);
    pFVar11 = local_5f0;
    uVar10 = local_610._0_8_;
    PrepareTaskGlobalMetadata
              (this_00,(FEXRImageWriteTask *)local_610._0_8_,local_5f0,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_f8);
    local_620[0] = 0;
    local_5f8 = (undefined8 *)0x0;
    if (((pFVar11->EvaluatedConfig).Object == (UObject *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x61,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar20 = UMovieGraphFileOutputNode::GetNumFileOutputNodes
                       ((UMovieGraphEvaluatedConfig *)(pFVar11->EvaluatedConfig).Object,
                        (FName *)pTVar42);
    plVar7 = *(longlong **)&pTVar42->field_0x48;
    if (iVar20 < 2) {
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_558);
      uVar38 = local_558;
      local_558 = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_560);
      uVar38 = local_560;
      local_560 = 0;
    }
    local_198.Elements._16_8_ = 0;
    local_198.Elements._24_8_ = 0;
    local_198.Hash.InlineData[0] = '\0';
    local_198.Hash.InlineData[1] = '\0';
    local_198.Hash.InlineData[2] = '\0';
    local_198.Hash.InlineData[3] = '\0';
    local_198.Hash._padding_ = 0;
    local_198.Elements._0_8_ = 0;
    local_198.Elements._8_8_ = 0;
    local_198.Elements._32_8_ = 0;
    local_198.Elements._40_8_ = 0x8000000000;
    local_198.Elements._48_8_ = 0xffffffff;
    local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_198._72_8_ = 0;
    puVar26 = &(pTVar6->Elements).field_0x18;
    local_3e8 = (local_5f0->EvaluatedConfig).Object;
    local_5f8 = (undefined8 *)uVar38;
    local_5b8 = (ForAnyElementType *)puVar26;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3e8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_3e8);
    }
    pTVar27 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)FMovieGraphOCIOHelper::ResolveOpenColorIOContext
                           ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                             *)local_a8,&pUVar5->OCIOContext,
                            (FMovieGraphRenderDataIdentifier *)pTVar42,local_5a8,
                            (TObjectPtr<UMovieGraphEvaluatedConfig>)&local_3e8,
                            (FMovieGraphTraversalContext *)puVar26);
    if (&local_198 != pTVar27) {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
                (&local_198,pTVar27);
    }
    local_60 = 0;
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.Data.ArrayNum = 0;
    local_520.Data.ArrayMax = 0;
    local_5f8 = (undefined8 *)0x0;
    local_540 = uVar38;
    UpdateTaskPerLayer(local_600,(FEXRImageWriteTask *)uVar10,pUVar5,(FImagePixelData *)&local_540,0
                       ,&local_520,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_198);
    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.Data.AllocatorInstance.Data);
    }
    uVar31 = (ulonglong)local_590.ArrayNum;
    local_580 = local_590.ArrayNum;
    local_618 = (FMovieGraphRenderDataIdentifier *)
                (local_590.AllocatorInstance.Data + uVar31 * 0x50);
    pFVar39 = (FMovieGraphRenderDataIdentifier *)(local_590.AllocatorInstance.Data + 0x48);
    pFVar21 = local_618;
    bVar16 = bVar15;
    goto LAB_14ddec093;
  }
  plVar30 = plVar30 + 1;
  goto joined_r0x00014ddebbbf;
LAB_14ddec093:
  if (local_590.ArrayNum != (uint)uVar31) {
    local_621 = 0;
    `TCheckedPointerIterator<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(&local_621);
  }
  if (pFVar39 + -1 != pFVar21) {
    bVar17 = bVar15;
    if ((((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
           *)(local_610._8_8_ + 0x140))->Elements).field_0xb == '\0') {
LAB_14ddec797:
      bVar15 = bVar17;
      pFVar39 = (FMovieGraphRenderDataIdentifier *)&pFVar39[1].LayerName;
      uVar31 = (ulonglong)local_580;
    }
    else {
      lVar37 = *(longlong *)((longlong)pFVar39->RootBranchName + 0x18);
      bVar15 = bVar16;
      if (*(int *)(lVar37 + 0x200) == 0) {
LAB_14ddec150:
        bVar47 = false;
      }
      else {
        local_4d0.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_4d0.AssetPath.PackageName.Number = 0;
        local_4d0.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_4d0.AssetPath.AssetName.Number = 0;
        local_4d0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.SubPathString.Data.ArrayNum = 0;
        local_4d0.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_4d0,(UObject *)local_600->_padding_);
        bVar15 = true;
        pFVar35 = *(FSoftObjectPath **)(lVar37 + 0x1f8);
        pFVar41 = pFVar35 + *(int *)(lVar37 + 0x200);
        for (; bVar17 = bVar15, pFVar35 != pFVar41; pFVar35 = pFVar35 + 1) {
          bVar16 = FSoftObjectPath::operator==(pFVar35,&local_4d0);
          if (bVar16) goto LAB_14ddec150;
        }
        bVar47 = true;
      }
      if ((bVar15) &&
         (bVar15 = false, bVar17 = bVar15,
         local_4d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_4d0.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar21 = local_618;
      bVar16 = bVar15;
      if (bVar47) goto LAB_14ddec797;
      iVar20 = pFVar39[-1].CameraName.Data.ArrayNum;
      if (iVar20 == *(int *)&pTVar42->field_0x40) {
        if (1 < iVar20) {
          iVar20 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pFVar39[-1].CameraName.Data.AllocatorInstance.Data,
                              *(wchar_t **)&pTVar42->field_0x38);
          bVar47 = iVar20 == 0;
          goto LAB_14ddec1a4;
        }
      }
      else {
        bVar47 = iVar20 + *(int *)&pTVar42->field_0x40 == 1;
LAB_14ddec1a4:
        pFVar21 = local_618;
        if (!bVar47) goto LAB_14ddec797;
      }
      FVar8.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
      FVar8.Number = *(uint *)&pTVar42->field_0x4;
      pFVar21 = local_618;
      if (pFVar39[-1].RootBranchName != FVar8) goto LAB_14ddec797;
      iVar20 = *(int *)(*(longlong *)&pTVar42->field_0x48 + 0x10);
      if (iVar20 == 0) {
        pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                  ::Find((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                          *)(uVar10 + 0xd8),local_620[0]);
        if (pTVar28 ==
            (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *)
            0x0) {
          pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                    ::Emplace<int_const_&>
                              ((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                                *)(uVar10 + 0xd8),local_620);
        }
        lVar37 = *(longlong *)
                  &(((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                      *)(local_610._8_8_ + 0x140))->Elements).field_0x34;
        (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                  (pFVar39->RootBranchName,&local_578);
        uStack_200 = local_578;
        local_578 = (undefined8 *)0x0;
        local_1f0 = 0;
        local_208 = &
                    ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_360 = 0;
        local_1f8 = lVar37;
        local_218[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>::Call
        ;
        pFVar34 = (pTVar28->AllocatorInstance).Data;
        local_358 = lVar37;
        if (((pFVar34 <= (FScriptContainerElement *)local_218) &&
            ((FScriptContainerElement *)local_218 < pFVar34 + (longlong)pTVar28->ArrayMax * 0x30))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar20 = pTVar28->ArrayNum;
        if (iVar20 == pTVar28->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
        }
        pTVar28->ArrayNum = iVar20 + 1;
        pFVar34 = (pTVar28->AllocatorInstance).Data + (longlong)iVar20 * 0x30;
        *(code **)pFVar34 = local_218[0];
        *(longlong *)(pFVar34 + 0x28) = local_1f0;
        local_1f0 = 0;
        *(undefined4 *)(pFVar34 + 0x10) = (undefined4)local_208;
        *(undefined4 *)(pFVar34 + 0x14) = local_208._4_4_;
        *(undefined4 *)(pFVar34 + 0x18) = (undefined4)uStack_200;
        *(undefined4 *)(pFVar34 + 0x1c) = uStack_200._4_4_;
        *(longlong *)(pFVar34 + 0x20) = local_1f8;
        if (*(longlong *)pFVar34 != 0) {
          local_218[0] = (code *)0x0;
        }
        puVar32 = local_578;
        if (local_218[0] != (code *)0x0) {
          (*(code *)local_208[2])();
          puVar32 = local_578;
        }
      }
      else if (iVar20 == 1) {
        pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                  ::Find((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                          *)(uVar10 + 0xd8),local_620[0]);
        if (pTVar28 ==
            (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *)
            0x0) {
          pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                    ::Emplace<int_const_&>
                              ((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                                *)(uVar10 + 0xd8),local_620);
        }
        lVar37 = *(longlong *)
                  &(((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                      *)(local_610._8_8_ + 0x140))->Elements).field_0x34;
        (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                  (pFVar39->RootBranchName,&local_548);
        uStack_230 = local_548;
        local_548 = (undefined8 *)0x0;
        local_220 = 0;
        local_238 = &
                    ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_370 = 0;
        local_228 = lVar37;
        local_248[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>
                       ::Call;
        pFVar34 = (pTVar28->AllocatorInstance).Data;
        local_368 = lVar37;
        if (((pFVar34 <= (FScriptContainerElement *)local_248) &&
            ((FScriptContainerElement *)local_248 < pFVar34 + (longlong)pTVar28->ArrayMax * 0x30))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar20 = pTVar28->ArrayNum;
        if (iVar20 == pTVar28->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
        }
        pTVar28->ArrayNum = iVar20 + 1;
        pFVar34 = (pTVar28->AllocatorInstance).Data + (longlong)iVar20 * 0x30;
        *(code **)pFVar34 = local_248[0];
        *(longlong *)(pFVar34 + 0x28) = local_220;
        local_220 = 0;
        *(undefined4 *)(pFVar34 + 0x10) = (undefined4)local_238;
        *(undefined4 *)(pFVar34 + 0x14) = local_238._4_4_;
        *(undefined4 *)(pFVar34 + 0x18) = (undefined4)uStack_230;
        *(undefined4 *)(pFVar34 + 0x1c) = uStack_230._4_4_;
        *(longlong *)(pFVar34 + 0x20) = local_228;
        if (*(longlong *)pFVar34 != 0) {
          local_248[0] = (code *)0x0;
        }
        puVar32 = local_548;
        if (local_248[0] != (code *)0x0) {
          (*(code *)local_238[2])();
          puVar32 = local_548;
        }
      }
      else {
        if (iVar20 != 2) goto LAB_14ddec797;
        pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                  ::Find((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                          *)(uVar10 + 0xd8),local_620[0]);
        if (pTVar28 ==
            (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *)
            0x0) {
          pTVar28 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                    ::Emplace<int_const_&>
                              ((TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                                *)(uVar10 + 0xd8),local_620);
        }
        lVar37 = *(longlong *)
                  &(((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                      *)(local_610._8_8_ + 0x140))->Elements).field_0x34;
        (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                  (pFVar39->RootBranchName,&local_550);
        uStack_260 = local_550;
        local_550 = (undefined8 *)0x0;
        local_250 = 0;
        local_268 = &
                    ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_380 = 0;
        local_258 = lVar37;
        local_278[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>
                       ::Call;
        pFVar34 = (pTVar28->AllocatorInstance).Data;
        local_378 = lVar37;
        if (((pFVar34 <= (FScriptContainerElement *)local_278) &&
            ((FScriptContainerElement *)local_278 < pFVar34 + (longlong)pTVar28->ArrayMax * 0x30))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar20 = pTVar28->ArrayNum;
        if (iVar20 == pTVar28->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
        }
        pTVar28->ArrayNum = iVar20 + 1;
        pFVar34 = (pTVar28->AllocatorInstance).Data + (longlong)iVar20 * 0x30;
        *(code **)pFVar34 = local_278[0];
        *(longlong *)(pFVar34 + 0x28) = local_250;
        local_250 = 0;
        *(undefined4 *)(pFVar34 + 0x10) = (undefined4)local_268;
        *(undefined4 *)(pFVar34 + 0x14) = local_268._4_4_;
        *(undefined4 *)(pFVar34 + 0x18) = (undefined4)uStack_260;
        *(undefined4 *)(pFVar34 + 0x1c) = uStack_260._4_4_;
        *(longlong *)(pFVar34 + 0x20) = local_258;
        if (*(longlong *)pFVar34 != 0) {
          local_278[0] = (code *)0x0;
        }
        puVar32 = local_550;
        if (local_278[0] != (code *)0x0) {
          (*(code *)local_268[2])();
          puVar32 = local_550;
        }
      }
      pFVar21 = local_618;
      bVar17 = bVar15;
      if (puVar32 == (undefined8 *)0x0) goto LAB_14ddec797;
      (**(code **)*puVar32)(puVar32,1);
      pFVar39 = (FMovieGraphRenderDataIdentifier *)&pFVar39[1].LayerName;
      uVar31 = (ulonglong)local_580;
      pFVar21 = local_618;
    }
    goto LAB_14ddec093;
  }
  ::FString::FString(&local_350,L"");
  UE::MovieGraph::UpdateMetadataLayerNamesToMatchExrLayerNames
            ((FMovieGraphRenderDataIdentifier *)pTVar42,&local_350,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)(uVar10 + 0x78));
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  pUVar12 = local_5a8;
  local_4a8.Shot = (UMoviePipelineExecutorShot *)0x0;
  local_4a8.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.FilePath.Data.ArrayNum = 0;
  local_4a8.FilePath.Data.ArrayMax = 0;
  local_4a8.FrameTemplatedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.FrameTemplatedFilePath.Data.ArrayNum = 0;
  local_4a8.FrameTemplatedFilePath.Data.ArrayMax = 0;
  local_4a8.DataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
  local_4a8.DataIdentifier.RootBranchName.Number = 0;
  local_4a8.DataIdentifier.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.DataIdentifier.LayerName.Data.ArrayNum = 0;
  local_4a8.DataIdentifier.LayerName.Data.ArrayMax = 0;
  local_4a8.DataIdentifier.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_4a8.DataIdentifier.RendererName.Data.ArrayNum = 0;
  local_4a8.DataIdentifier.RendererName.Data.ArrayMax = 0;
  local_4a8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_4a8.DataIdentifier.SubResourceName.Data.ArrayNum = 0;
  local_4a8.DataIdentifier.SubResourceName.Data.ArrayMax = 0;
  local_4a8.DataIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.DataIdentifier.CameraName.Data.ArrayNum = 0;
  local_4a8.DataIdentifier.CameraName.Data.ArrayMax = 0;
  local_4a8.OriginNodeClass = (UClass *)0x0;
  local_4a8.RenderLayerIndex = 0;
  uVar18 = *(uint *)local_5b8;
  uVar40 = 0;
  uVar45 = uVar40;
  if ((int)uVar18 < (local_5a8->ActiveShotList).ArrayNum) {
    uVar45 = ~uVar18 >> 0x1f;
  }
  if ((uVar45 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_4a8.Shot =
       *(UMoviePipelineExecutorShot **)
        ((pUVar12->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar18 * 8);
  if (local_570.Data.ArrayNum != 0) {
    uVar40 = local_570.Data.ArrayNum - 1;
  }
  ::FString::AssignRange
            (&local_4a8.FilePath,(wchar_t *)local_570.Data.AllocatorInstance.Data,uVar40);
  FVar36.Data = local_538.Data.AllocatorInstance.Data;
  iVar20 = local_538.Data.ArrayNum + -1;
  if (local_538.Data.ArrayNum == 0) {
    iVar20 = 0;
  }
  ::FString::AssignRange
            (&local_4a8.FrameTemplatedFilePath,(wchar_t *)local_538.Data.AllocatorInstance.Data,
             iVar20);
  local_4a8.DataIdentifier.RootBranchName.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
  local_4a8.DataIdentifier.RootBranchName.Number = *(uint *)&pTVar42->field_0x4;
  ::FString::operator=(&local_4a8.DataIdentifier.LayerName,(FString *)&pTVar42->field_0x8);
  ::FString::operator=(&local_4a8.DataIdentifier.RendererName,(FString *)&pTVar42->field_0x18);
  ::FString::operator=(&local_4a8.DataIdentifier.SubResourceName,(FString *)&pTVar42->field_0x28);
  ::FString::operator=(&local_4a8.DataIdentifier.CameraName,(FString *)&pTVar42->field_0x38);
  local_4a8.OriginNodeClass = (UClass *)local_600->_padding_;
  local_4a8.RenderLayerIndex =
       ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
         *)(local_610._8_8_ + 0x140))->HashSize;
  local_528 = (FEXRImageWriteTask *)uVar10;
  local_610._0_8_ = (FEXRImageWriteTask *)0x0;
  (**(code **)(*(longlong *)local_600->_padding_ + 8))
            ((longlong *)local_600->_padding_,local_340,&local_528,1);
  if (local_528 != (FEXRImageWriteTask *)0x0) {
    (*(code *)**(undefined8 **)local_528)(local_528,1);
  }
  UMovieGraphPipeline::AddOutputFuture(local_5a8,(TFuture<bool> *)local_340,&local_4a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_340._8_8_);
  if (local_4a8.DataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_4a8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_4a8.DataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_4a8.DataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  if (local_4a8.FrameTemplatedFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_4a8.FrameTemplatedFilePath.Data.AllocatorInstance.Data);
  }
  if (local_4a8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.FilePath.Data.AllocatorInstance.Data);
  }
  local_198._72_8_ = local_198._72_8_ & 0xffffffff00000000;
  if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.Elements);
  if (local_5f8 != (undefined8 *)0x0) {
    (**(code **)*local_5f8)(local_5f8,1);
  }
  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
  if (FVar36.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar36.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
LAB_14ddecb00:
  TStack_3d8.UnvisitedBitMask = TStack_3d8.UnvisitedBitMask & ~TStack_3d8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d8);
  goto LAB_14ddeb9d3;
}

// PrepareTaskGlobalMetadata @ 14ddf3180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::PrepareTaskGlobalMetadata
          (UMovieGraphImageSequenceOutputNode_EXR *this,FEXRImageWriteTask *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  void *_Src;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  FString *pFVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res20 [8];
  undefined1 local_1a8 [8];
  FString local_1a0;
  ulonglong local_190;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [16];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  FStringFormatArg *local_98;
  FString local_90;
  FStringFormatArg local_80;
  undefined4 local_44;
  
  pFVar9 = FPaths::GetPath(&local_90,&param_1->Filename);
  UE::MoviePipeline::GetHardwareUsageMetadata(param_3,pFVar9);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  UE::MoviePipeline::GetDiagnosticMetadata(param_3,true);
  iStack_180 = 0;
  local_190 = 1;
  puVar3 = &param_3->field_0x10;
  local_168 = 0;
  iVar4 = *(int *)&param_3->field_0x28;
  uStack_17c = 1;
  iStack_16c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uStack_17c = *puVar16;
    while (uStack_17c == 0) {
      lVar10 = (longlong)iStack_180;
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      uStack_17c = 1;
      iStack_16c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14ddf326e;
      uStack_17c = puVar16[lVar10 + 1];
    }
    uStack_17c = ~(uStack_17c - 1) & uStack_17c;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_158 = (int)lVar10;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_14ddf326e:
  uStack_170 = 0xffffffff;
  uStack_164 = local_44;
  iStack_160 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  TStack_108._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_108.CurrentBitIndex = iStack_16c;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._28_4_ = local_44;
  TStack_108.BaseBitIndex = local_168;
  uStack_e8 = CONCAT44(uStack_15c,iStack_160);
  uVar14 = *(uint *)&param_3->field_0x28;
  iVar11 = (int)uVar14 >> 5;
  uVar13 = uVar14 & 0xffffffe0;
  local_188 = param_3;
  local_178 = puVar3;
  local_110 = param_3;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_3->field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ddf3390;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_154 = (int)lVar10;
    uVar14 = local_154 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14ddf3390:
  while( true ) {
    pTVar1 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_108.CurrentBitIndex == uVar14) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar1 == param_3)
       ) break;
    local_b0 = *(longlong *)pTVar1 + (longlong)TStack_108.CurrentBitIndex * 0x28;
    local_a8 = local_b0 + 0x10;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,
               (TPairInitializer<FString_const_&,FString_const_&> *)local_150,(bool *)&local_b0);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  pTVar1 = &param_2->FileMetadata;
  iStack_138 = 0;
  puVar3 = &(param_2->FileMetadata).field_0x10;
  local_120 = 0;
  iVar4 = *(int *)&(param_2->FileMetadata).field_0x28;
  iStack_124 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(param_2->FileMetadata).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_138;
      iStack_138 = iStack_138 + 1;
      local_120 = local_120 + 0x20;
      iStack_124 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14ddf3491;
      uVar14 = puVar16[lVar10 + 1];
    }
    local_190 = (ulonglong)(~(uVar14 - 1) & uVar14);
    uVar2 = local_190 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_150._4_4_ = (undefined4)lVar10;
    iStack_124 = local_120 + -1 + local_150._4_4_;
    if (iVar4 < iStack_124) {
      iStack_124 = iVar4;
    }
  }
LAB_14ddf3491:
  uStack_134 = (undefined4)local_190;
  uStack_128 = 0xffffffff;
  iStack_11c = iStack_16c;
  iStack_118 = *(int *)&(param_2->FileMetadata).field_0x8 -
               *(int *)&(param_2->FileMetadata).field_0x34;
  TStack_d8._padding_ = CONCAT44(uStack_134,iStack_138);
  TStack_d8.CurrentBitIndex = iStack_124;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._28_4_ = iStack_16c;
  TStack_d8.BaseBitIndex = local_120;
  uStack_b8 = CONCAT44(uStack_114,iStack_118);
  uVar14 = *(uint *)&(param_2->FileMetadata).field_0x28;
  iVar11 = (int)uVar14 >> 5;
  uVar13 = uVar14 & 0xffffffe0;
  local_140 = pTVar1;
  local_130 = puVar3;
  local_e0 = pTVar1;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_2->FileMetadata).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(param_2->FileMetadata).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ddf3590;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14ddf3590:
  while( true ) {
    pTVar7 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_d8.CurrentBitIndex == uVar14) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == pTVar1))
    break;
    lVar10 = *(longlong *)pTVar7 + (longlong)TStack_d8.CurrentBitIndex * 0x28;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = *(int *)(lVar10 + 0x18);
    lVar12 = (longlong)local_1a0.Data.ArrayNum;
    _Src = *(void **)(lVar10 + 0x10);
    if (local_1a0.Data.ArrayNum == 0) {
      local_1a0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0,
                 local_1a0.Data.ArrayNum,&local_1a0.Data.ArrayMax);
      memcpy(local_1a0.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_80,&local_1a0);
    local_98 = &local_80;
    local_a0 = lVar10;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,
               (TPairInitializer<FString_const_&,FStringFormatArg_&&> *)(local_150 + 8),
               (bool *)&local_a0);
    if (local_80.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.StringValue.Data.AllocatorInstance.Data);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  return;
}

// ShouldCropOverscanImpl @ 14ddfeef0

bool __thiscall
UMovieGraphImageSequenceOutputNode_EXR::ShouldCropOverscanImpl
          (UMovieGraphImageSequenceOutputNode_EXR *this)

{
  return false;
}

// StaticRegisterNativesUMovieGraphImageSequenceOutputNode_EXR @ 14ddff1d0

void __cdecl
UMovieGraphImageSequenceOutputNode_EXR::StaticRegisterNativesUMovieGraphImageSequenceOutputNode_EXR
          (void)

{
  return;
}

// UpdateTaskPerLayer @ 14de028c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::UpdateTaskPerLayer
          (UMovieGraphImageSequenceOutputNode_EXR *this,FEXRImageWriteTask *param_1,
          UMovieGraphImageSequenceOutputNode *param_2,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> param_3,int param_4,
          FString *param_5,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_6)

{
  int *piVar1;
  FMovieGraphSampleState *pFVar2;
  undefined8 uVar3;
  FImagePixelData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar8;
  FString *pFVar9;
  uint uVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  undefined1 local_res10 [16];
  FImagePixelData *local_res20;
  FString *local_d8;
  FStringFormatArg *local_d0;
  FString local_c8;
  FString *local_b8;
  FStringFormatArg *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  pFVar2 = *(FMovieGraphSampleState **)((param_3.Ptr)->_padding_ + 0x18);
  local_res20 = param_3.Ptr;
  pTVar8 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&param_1->PixelPreprocessors,param_4);
  if (pTVar8 == (TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    pTVar8 = TSortedMap<int,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
             ::Emplace<int_const_&>(&param_1->PixelPreprocessors,&param_4);
  }
  bVar6 = FMovieGraphOCIOHelper::GenerateOcioPixelPreProcessorWithContext
                    (pFVar2,&param_2->OCIOConfiguration,param_6,pTVar8);
  if (param_4 == 0) {
    pFVar9 = UE::MoviePipeline::GetJobAuthor
                       (&local_98,(pFVar2->TraversalContext).Job.field0_0x0.DebugPtr);
    FStringFormatArg::FStringFormatArg(&local_78,pFVar9);
    ::FString::FString(&local_c8,"owner");
    local_d8 = &local_c8;
    local_d0 = &local_78;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_res10,(bool *)&local_d8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
    pFVar9 = ::FString::FString(&local_88,
                                &((pFVar2->TraversalContext).Job.field0_0x0.DebugPtr)->Comment);
    FStringFormatArg::FStringFormatArg(&local_58,pFVar9);
    ::FString::FString(&local_a8,"comments");
    local_b8 = &local_a8;
    local_b0 = &local_58;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_res10 + 8),
               (bool *)&local_b8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar3 = *(undefined8 *)((param_3.Ptr)->_padding_ + 8);
    param_1->Width = (int)uVar3;
    param_1->Height = (int)((ulonglong)uVar3 >> 0x20);
    param_1->OverscanPercentage = pFVar2->OverscanFraction;
    (param_1->CropRectangle).field0_0x0._s_0.Min.field0_0x0 =
         (pFVar2->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
    (param_1->CropRectangle).field0_0x0._s_0.Max.field0_0x0 =
         (pFVar2->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
    if (bVar6) {
      UE::MoviePipeline::UpdateColorSpaceMetadata
                (&(param_2->OCIOConfiguration).ColorConfiguration,param_1);
    }
    else {
      UE::MoviePipeline::UpdateColorSpaceMetadata(pFVar2->SceneCaptureSource,param_1);
    }
  }
  pFVar9 = param_5;
  if (1 < (param_5->Data).ArrayNum) {
    param_5 = (FString *)(param_3.Ptr)->_padding_;
    uVar10 = ((uint)((ulonglong)param_5 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_5 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    if (*(int *)&(param_1->LayerNames).field_0x8 != *(int *)&(param_1->LayerNames).field_0x34) {
      puVar12 = *(undefined1 **)&(param_1->LayerNames).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(param_1->LayerNames).field_0x38;
      }
      iVar7 = *(int *)(puVar12 +
                      (ulonglong)(*(int *)&(param_1->LayerNames).field_0x48 - 1U & uVar10) * 4);
      if (iVar7 != -1) {
        do {
          puVar11 = (ulonglong *)((longlong)iVar7 * 0x20 + *(longlong *)&param_1->LayerNames);
          if ((FString *)*puVar11 == param_5) {
            if (puVar11 != (ulonglong *)0x0) goto LAB_14de02b1d;
            break;
          }
          iVar7 = (int)puVar11[3];
        } while (iVar7 != -1);
      }
    }
    TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
    ::EmplaceByHash<FImagePixelData_*,FString_const_&>
              ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                *)&param_1->LayerNames,uVar10,(FImagePixelData **)&param_5,pFVar9);
  }
LAB_14de02b1d:
  pTVar13 = &param_1->Layers;
  pFVar4 = (FImagePixelData *)(pTVar13->AllocatorInstance).Data;
  if (((pFVar4 <= param_3.Ptr) &&
      (param_3.Ptr < (FImagePixelData *)(&pFVar4->_padding_ + (param_1->Layers).ArrayMax))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &(param_1->Layers).ArrayMax;
  iVar7 = (param_1->Layers).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar13->AllocatorInstance,piVar1);
  }
  (param_1->Layers).ArrayNum = iVar7 + 1;
  *(longlong *)((pTVar13->AllocatorInstance).Data + (longlong)iVar7 * 8) = (param_3.Ptr)->_padding_;
  (param_3.Ptr)->_padding_ = 0;
  return;
}

// UpdateTelemetry @ 14de02cd0

void __thiscall
UMovieGraphImageSequenceOutputNode_EXR::UpdateTelemetry
          (UMovieGraphImageSequenceOutputNode_EXR *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesEXR = true;
  return;
}

// _getUObject @ 14de05550

UObject * __thiscall
UMovieGraphImageSequenceOutputNode_EXR::_getUObject(UMovieGraphImageSequenceOutputNode_EXR *this)

{
  return (UObject *)&this[-1]._padding_;
}

// operator() @ 15058fb20

bool __thiscall
`UMovieGraphImageSequenceOutputNode_EXR::OnReceiveImageDataImpl'::__l54::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6260183900736191922>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6260183900736191922>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

