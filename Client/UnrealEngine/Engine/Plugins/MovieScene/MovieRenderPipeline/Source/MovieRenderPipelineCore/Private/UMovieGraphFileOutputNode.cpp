// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 21

// GetInputPinProperties @ 14dcce630

/* WARNING: Removing unreachable block (ram,0x00014dcce6ab) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphFileOutputNode::GetInputPinProperties
          (UMovieGraphFileOutputNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dcd00f0

/* WARNING: Removing unreachable block (ram,0x00014dcd016b) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphFileOutputNode::GetOutputPinProperties
          (UMovieGraphFileOutputNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// IsFinishedWritingToDiskImpl @ 14dcd7240

bool __thiscall
UMovieGraphFileOutputNode::IsFinishedWritingToDiskImpl(UMovieGraphFileOutputNode *this)

{
  return true;
}

// OnAllFramesFinalizedImpl @ 14dcd8820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphFileOutputNode::OnAllFramesFinalizedImpl
          (UMovieGraphFileOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  return;
}

// OnAllFramesSubmittedImpl @ 14dcd88f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphFileOutputNode::OnAllFramesSubmittedImpl
          (UMovieGraphFileOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  return;
}

// OnAllShotFramesSubmittedImpl @ 14dcd89b0

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
UMovieGraphFileOutputNode::OnAllShotFramesSubmittedImpl
          (UMovieGraphFileOutputNode *this,UMovieGraphPipeline *param_1,
          UMoviePipelineExecutorShot *param_2,TObjectPtr<UMovieGraphEvaluatedConfig> *param_3)

{
  return;
}

// OnAllShotFramesSubmittedImpl @ 14dcd89c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphFileOutputNode::OnAllShotFramesSubmittedImpl
          (UMovieGraphFileOutputNode *this,UMovieGraphPipeline *param_1,
          UMoviePipelineExecutorShot *param_2,TObjectPtr<UMovieGraphEvaluatedConfig> *param_3,
          bool param_4)

{
  return;
}

// OnReceiveImageDataImpl @ 14dcd9cd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphFileOutputNode::OnReceiveImageDataImpl
          (UMovieGraphFileOutputNode *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          *param_3)

{
  return;
}

// ShouldCropOverscanImpl @ 14dce4ad0

bool __thiscall UMovieGraphFileOutputNode::ShouldCropOverscanImpl(UMovieGraphFileOutputNode *this)

{
  return true;
}

// StaticClass @ 14dce62b0

UClass * __cdecl UMovieGraphFileOutputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphFileOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphFileOutputNode,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphFileOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphFileOutputNode>,aFStackX_8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton;
}

// UMovieGraphFileOutputNode @ 14dd0a300

UMovieGraphFileOutputNode * __thiscall
UMovieGraphFileOutputNode::UMovieGraphFileOutputNode
          (UMovieGraphFileOutputNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  ::FString::FString(&this->FileNameFormat,"{sequence_name}.{layer_name}.{frame_number}");
  return this;
}

// ~UMovieGraphFileOutputNode @ 14dd0d920

void __thiscall
UMovieGraphFileOutputNode::~UMovieGraphFileOutputNode(UMovieGraphFileOutputNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// operator() @ 14dd0edf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
`UMovieGraphFileOutputNode::DisambiguateFilename'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FMovieGraphSampleState *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  FString local_28;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1 == (FMovieGraphSampleState *)0x0) {
    ::FString::FString(__return_storage_ptr__,(FString *)(*(longlong *)this + 0xb8));
    return __return_storage_ptr__;
  }
  pFVar3 = &param_1->FilenameFormatOverride;
  if ((param_1->FilenameFormatOverride).Data.ArrayNum < 2) {
    pFVar3 = (FString *)(*(longlong *)this + 0xb8);
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (pFVar3->Data).ArrayNum;
  lVar5 = (longlong)local_10;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar5 * 2);
  }
  lVar5 = *(longlong *)((longlong)this + 8);
  iVar4 = local_10 + -1;
  if (local_10 == 0) {
    iVar4 = 0;
  }
  if ((*(int *)(lVar5 + 0xc0) != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(lVar5 + 0xc0);
  _Src_00 = *(void **)(lVar5 + 0xb8);
  local_28.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar4 + iVar2 == 0)) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    uVar6 = iVar1 + iVar4 + iVar2;
    if ((int)uVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar6,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_28.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_28,(wchar_t *)local_18.Data,iVar4);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14dd0efc0

bool __thiscall
`UMovieGraphFileOutputNode::GetCompositedPasses'::__l2::<lambda_1>::operator()
          (void *this,
          TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          *param_1,TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                   *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)&param_1->field_0x48 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)&param_2->field_0x48 + 0x18);
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadA",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphFileOutputNode.cpp"
                       ,0xe5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (lVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphFileOutputNode.cpp"
                       ,0xe6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(lVar1 + 0x184) < *(int *)(lVar2 + 0x184);
}

// operator() @ 14dd10260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
`UMovieGraphFileOutputNode::DisambiguateFilename'::__l33::<lambda_2>::operator()
          (void *this,FMovieGraphSampleState *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FString local_28;
  
  DisambiguateFilename'::__l2::<lambda_1>::operator()(*(void **)this,&local_28,param_1);
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar2 = plVar1[1];
  puVar4 = (undefined8 *)*plVar1;
  puVar5 = puVar4 + (longlong)(int)lVar2 * 2;
  iVar3 = 0;
  while( true ) {
    iVar6 = iVar3;
    if ((int)plVar1[1] != (int)lVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar4 == puVar5) break;
    iVar3 = *(int *)(puVar4 + 1);
    if (iVar3 == local_28.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar7 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
      }
    }
    else {
      bVar7 = iVar3 + local_28.Data.ArrayNum == 1;
    }
    puVar4 = puVar4 + 2;
    iVar3 = iVar6 + 1;
    if (!bVar7) {
      iVar3 = iVar6;
    }
  }
  if ((**(int **)((longlong)this + 0x10) < 2) || (iVar6 < 2)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// DisambiguateFilename @ 14dd1a550

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphFileOutputNode::DisambiguateFilename
          (FString *param_1,FMovieGraphOutputMergerFrame *param_2,FName *param_3,
          TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          *param_4)

{
  TStringView<wchar_t> local_38;
  FMovieGraphRenderDataValidationInfo local_28;
  
  UE::MovieGraph::FMovieGraphOutputMergerFrame::GetValidationInfo
            (param_2,&local_28,(FMovieGraphRenderDataIdentifier *)param_4,true);
  if (1 < local_28.BranchCount) {
    if (local_28.LayerCount < local_28.BranchCount) {
      local_38.DataPtr = L"{branch_name}";
      local_38.Size = 0xd;
    }
    else {
      local_38.DataPtr = L"{layer_name}";
      local_38.Size = 0xc;
    }
    UE::MoviePipeline::ConformOutputFormatStringToken(param_1,&local_38,param_3,(FName *)param_4);
  }
  if (1 < local_28.ActiveBranchRendererCount) {
    local_38.Size = 0xf;
    local_38.DataPtr = L"{renderer_name}";
    UE::MoviePipeline::ConformOutputFormatStringToken(param_1,&local_38,param_3,(FName *)param_4);
  }
  if (1 < local_28.ActiveRendererSubresourceCount) {
    local_38.Size = 0x13;
    local_38.DataPtr = L"{renderer_sub_name}";
    UE::MoviePipeline::ConformOutputFormatStringToken(param_1,&local_38,param_3,(FName *)param_4);
  }
  if (1 < local_28.ActiveCameraCount) {
    local_38.Size = 0xd;
    local_38.DataPtr = L"{camera_name}";
    UE::MoviePipeline::ConformOutputFormatStringToken(param_1,&local_38,param_3,(FName *)param_4);
  }
  return;
}

// DisambiguateFilename @ 14dd1a6a0

/* WARNING: Removing unreachable block (ram,0x00014dd1ad3f) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphFileOutputNode::DisambiguateFilename
          (FString *param_1,FMovieGraphOutputMergerFrame *param_2,UMovieGraphFileOutputNode *param_3
          ,TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
           *param_4)

{
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  FString *pFVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TStringView<wchar_t> *pTVar17;
  int iVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FMovieGraphSampleState *pFVar23;
  undefined1 *puVar24;
  uint *puVar25;
  ForAnyElementType FVar26;
  undefined1 local_268;
  undefined1 local_267 [7];
  ForAnyElementType local_260;
  undefined8 local_258;
  int local_250 [2];
  ForAnyElementType local_248;
  undefined8 local_240;
  ForAnyElementType local_238;
  int local_230;
  int iStack_22c;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [6];
  FString local_220;
  FMovieGraphSampleState *local_210;
  FName local_208;
  longlong local_200;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  UMovieGraphFileOutputNode *local_1e8;
  UMovieGraphGlobalOutputSettingNode *local_1e0;
  FMovieGraphRenderDataValidationInfo local_1d8;
  int local_1c0;
  FString local_1b8;
  int local_1a8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  UMovieGraphFileOutputNode **local_e8;
  ForAnyElementType *local_e0;
  int *local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  if (((param_2->EvaluatedConfig).Object == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1e0 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                        ((UMovieGraphEvaluatedConfig *)(param_2->EvaluatedConfig).Object,
                         UMovieGraphNode::GlobalsPinName,true,true);
  local_1e8 = param_3;
  pTVar11 = TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
                    *)&param_2->NodeInstanceToPayloads,param_3);
  if (pTVar11 == (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    return;
  }
  iStack_198 = 0;
  pTVar1 = &param_2->ImageOutputData;
  uStack_194 = 1;
  puVar2 = &(param_2->ImageOutputData).field_0x10;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  iStack_22c = 0;
  iVar9 = *(int *)&(param_2->ImageOutputData).field_0x28;
  local_180 = 0;
  iStack_184 = iStack_198;
  if (iVar9 != 0) {
    puVar25 = *(uint **)&(param_2->ImageOutputData).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uVar22 = *puVar25;
    local_180 = 0;
    iStack_198 = 0;
    while (uVar22 == 0) {
      lVar15 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      iStack_184 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14dd1a7ed;
      uVar22 = puVar25[lVar15 + 1];
    }
    uStack_194 = -uVar22 & uVar22;
    uVar4 = (ulonglong)uStack_194 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1a8 = (int)lVar15;
    iStack_184 = local_180 + -1 + local_1a8;
    if (iVar9 < iStack_184) {
      iStack_184 = iVar9;
    }
  }
LAB_14dd1a7ed:
  uVar22 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  uStack_17c = local_4c;
  iStack_178 = *(int *)&(param_2->ImageOutputData).field_0x8 -
               *(int *)&(param_2->ImageOutputData).field_0x34;
  uVar20 = uVar22 & 0xffffffe0;
  uStack_188 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar22 >> 5;
  TStack_168._28_4_ = local_4c;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = pTVar1;
  local_190 = puVar2;
  local_170 = pTVar1;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar22 < 0) || (iVar9 < (int)uVar22)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  if (uVar22 != uVar5) {
    puVar24 = *(undefined1 **)&(param_2->ImageOutputData).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      lVar15 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar22 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14dd1a900;
      uVar22 = *(uint *)(puVar24 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c0 = (int)lVar15;
    uVar22 = local_1c0 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar22) {
      uVar22 = uVar5;
    }
  }
LAB_14dd1a900:
  do {
    pTVar7 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_268 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
    }
    if (((TStack_168.CurrentBitIndex == uVar22) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    {
      pFVar23 = (FMovieGraphSampleState *)0x0;
      local_210 = (FMovieGraphSampleState *)0x0;
      pTVar12 = TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                ::Find((TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                        *)&param_2->ImageOutputData,(FMovieGraphRenderDataIdentifier *)param_4);
      if (pTVar12 != (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)0x0) {
        pFVar23 = (FMovieGraphSampleState *)(pTVar12->Ptr->Payload).Object;
        local_210 = pFVar23;
      }
      local_260.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      `UMovieGraphFileOutputNode::DisambiguateFilename'::__l2::<lambda_1>::operator()
                (&local_1e8,local_78,pFVar23);
      pFVar21 = (pTVar11->AllocatorInstance).Data;
      iVar9 = pTVar11->ArrayNum;
      pFVar3 = pFVar21 + (longlong)iVar9 * 8;
      while( true ) {
        if (pTVar11->ArrayNum != iVar9) {
          local_267[0] = 0;
          `TCheckedPointerIterator<UE::MovieGraph::FMovieGraphSampleState_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_267);
        }
        if (pFVar21 == pFVar3) break;
        lVar15 = *(longlong *)pFVar21;
        if (lVar15 == 0) {
          local_248.Data = (FScriptContainerElement *)0x0;
          iVar18 = (local_1e8->FileNameFormat).Data.ArrayNum;
          pFVar16 = (local_1e8->FileNameFormat).Data.AllocatorInstance.Data;
          local_240._0_4_ = iVar18;
          if (iVar18 == 0) {
            local_240._0_4_ = 0;
            local_240._4_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar18,0,&local_248,iVar18,(int *)((longlong)&local_240 + 4));
            memcpy(local_248.Data,pFVar16,(longlong)iVar18 * 2);
          }
        }
        else {
          pFVar13 = (FString *)(lVar15 + 0x138);
          if (*(int *)(lVar15 + 0x140) < 2) {
            pFVar13 = &local_1e8->FileNameFormat;
          }
          local_1f8.Data = (FScriptContainerElement *)0x0;
          local_1f0 = (pFVar13->Data).ArrayNum;
          lVar15 = (longlong)local_1f0;
          pFVar16 = (pFVar13->Data).AllocatorInstance.Data;
          if (local_1f0 == 0) {
            local_1ec = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1f0,0,&local_1f8,local_1f0,&local_1ec);
            memcpy(local_1f8.Data,pFVar16,lVar15 * 2);
          }
          iVar18 = local_1f0 + -1;
          if (local_1f0 == 0) {
            iVar18 = 0;
          }
          if (((local_1e0->OutputDirectory).Path.Data.ArrayNum != 0) ||
             (iVar14 = 1, iVar18 + 1 == 0)) {
            iVar14 = 0;
          }
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar14 = iVar18 + 1 + iVar14;
          iVar10 = (local_1e0->OutputDirectory).Path.Data.ArrayNum;
          pFVar16 = (local_1e0->OutputDirectory).Path.Data.AllocatorInstance.Data;
          local_220.Data.ArrayNum = iVar10;
          if ((iVar10 == 0) && (iVar14 == 0)) {
            local_220.Data.ArrayNum = 0;
            local_220.Data.ArrayMax = 0;
          }
          else {
            uVar22 = iVar10 + iVar14;
            if ((int)uVar22 < iVar10) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar22,0,(ForAnyElementType *)&local_220,iVar10,&local_220.Data.ArrayMax)
            ;
            if (iVar10 != 0) {
              memcpy(local_220.Data.AllocatorInstance.Data,pFVar16,(longlong)iVar10 * 2);
            }
          }
          ::FString::PathAppend(&local_220,(wchar_t *)local_1f8.Data,iVar18);
          local_248.Data = local_220.Data.AllocatorInstance.Data;
          local_240._0_4_ = local_220.Data.ArrayNum;
          local_240._4_4_ = local_220.Data.ArrayMax;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data);
          }
        }
        if (((local_260.Data <= (FScriptContainerElement *)&local_248) &&
            ((FScriptContainerElement *)&local_248 <
             local_260.Data + (longlong)local_258._4_4_ * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar18 = (int)local_258;
        if ((int)local_258 == local_258._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_260,(int *)((longlong)&local_258 + 4));
        }
        local_258 = CONCAT44(local_258._4_4_,iVar18 + 1);
        pFVar16 = local_260.Data + (longlong)iVar18 * 0x10;
        *(undefined8 *)pFVar16 = 0;
        *(FScriptContainerElement **)pFVar16 = local_248.Data;
        local_248.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar16 + 8) = (int)local_240;
        *(int *)(pFVar16 + 0xc) = local_240._4_4_;
        local_240._0_4_ = 0;
        local_240._4_4_ = 0;
        pFVar21 = pFVar21 + 8;
      }
      local_208 = (FName)param_3->_padding_;
      UE::MovieGraph::FMovieGraphOutputMergerFrame::GetValidationInfo
                (param_2,&local_1d8,(FMovieGraphRenderDataIdentifier *)param_4,true);
      if (1 < local_1d8.BranchCount) {
        if (local_1d8.LayerCount < local_1d8.BranchCount) {
          uStack_100 = 0xd;
          local_108 = L"{branch_name}";
          pTVar17 = &local_c8;
          local_c8._12_4_ = uStack_fc;
          local_c8.Size = 0xd;
          local_c8.DataPtr = L"{branch_name}";
        }
        else {
          uStack_f0 = 0xc;
          local_f8 = L"{layer_name}";
          pTVar17 = &local_b8;
          local_b8._12_4_ = uStack_ec;
          local_b8.Size = 0xc;
          local_b8.DataPtr = L"{layer_name}";
        }
        UE::MoviePipeline::ConformOutputFormatStringToken
                  (param_1,pTVar17,&local_208,(FName *)param_4);
      }
      pFVar23 = local_210;
      if (local_1d8.ActiveBranchRendererCount < 2) goto LAB_14dd1afdd;
      pFVar21 = (pTVar11->AllocatorInstance).Data;
      iVar9 = pTVar11->ArrayNum;
      iVar18 = 0;
      local_250[0] = 0;
      pFVar3 = pFVar21 + (longlong)iVar9 * 8;
      while( true ) {
        if (pTVar11->ArrayNum != iVar9) {
          `TCheckedPointerIterator<UE::MovieGraph::FMovieGraphSampleState_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_228);
          iVar18 = local_250[0];
        }
        pFVar23 = local_210;
        if (pFVar21 == pFVar3) break;
        if (*(char *)(*(longlong *)pFVar21 + 0x14c) != '\0') {
          iVar18 = iVar18 + 1;
          local_250[0] = iVar18;
        }
        pFVar21 = pFVar21 + 8;
      }
      local_e8 = &local_1e8;
      local_e0 = &local_260;
      local_d8 = local_250;
      if (local_210 == (FMovieGraphSampleState *)0x0) goto LAB_14dd1afdd;
      if (local_210->bIsBeautyPass != false) {
        bVar8 = `UMovieGraphFileOutputNode::DisambiguateFilename'::__l33::<lambda_2>::operator()
                          (&local_e8,local_210);
        if (!bVar8) {
          if (pFVar23->bIsBeautyPass != false) goto LAB_14dd1afdd;
          goto LAB_14dd1aea4;
        }
LAB_14dd1af7e:
        local_138 = L"{renderer_name}";
        uStack_130 = 0xf;
        local_a8._12_4_ = uStack_12c;
        local_a8.Size = 0xf;
        local_a8.DataPtr = L"{renderer_name}";
        UE::MoviePipeline::ConformOutputFormatStringToken
                  (param_1,&local_a8,&local_208,(FName *)param_4);
LAB_14dd1afdd:
        if ((1 < local_1d8.ActiveRendererSubresourceCount) &&
           ((pFVar23 == (FMovieGraphSampleState *)0x0 || (pFVar23->bIsBeautyPass == false)))) {
          uStack_120 = 0x13;
          local_128 = L"{renderer_sub_name}";
          local_98._12_4_ = uStack_11c;
          local_98.Size = 0x13;
          local_98.DataPtr = L"{renderer_sub_name}";
          UE::MoviePipeline::ConformOutputFormatStringToken
                    (param_1,&local_98,&local_208,(FName *)param_4);
        }
        if (1 < local_1d8.ActiveCameraCount) {
          uStack_110 = 0xd;
          local_118 = L"{camera_name}";
          local_88._12_4_ = uStack_10c;
          local_88.Size = 0xd;
          local_88.DataPtr = L"{camera_name}";
          UE::MoviePipeline::ConformOutputFormatStringToken
                    (param_1,&local_88,&local_208,(FName *)param_4);
        }
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_260.Data,(int)local_258);
        if (local_260.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data);
        }
        if (local_238.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_238.Data);
        return;
      }
LAB_14dd1aea4:
      iVar9 = local_230;
      pFVar3 = local_238.Data + (longlong)local_230 * 8;
      FVar26.Data = local_238.Data;
      do {
        iVar18 = 0;
        if (local_230 != iVar9) {
          `TCheckedPointerIterator<UE::MovieGraph::FMovieGraphSampleState_*,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_227);
        }
        pFVar23 = local_210;
        if (FVar26.Data == pFVar3) goto LAB_14dd1afdd;
        if ((*(FMovieGraphSampleState **)FVar26.Data)->bIsBeautyPass != false) {
          `UMovieGraphFileOutputNode::DisambiguateFilename'::__l2::<lambda_1>::operator()
                    (&local_1e8,&local_1b8,*(FMovieGraphSampleState **)FVar26.Data);
          iVar14 = (int)local_258;
          pFVar21 = local_260.Data + (longlong)(int)local_258 * 0x10;
          FVar19.Data = local_260.Data;
          while( true ) {
            if ((int)local_258 != iVar14) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_226);
            }
            if (FVar19.Data == pFVar21) break;
            iVar10 = *(int *)(FVar19.Data + 8);
            if (iVar10 == local_1b8.Data.ArrayNum) {
              if (1 < iVar10) {
                    /* WARNING: Load size is inaccurate */
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)*FVar19.Data,
                                    (wchar_t *)local_1b8.Data.AllocatorInstance.Data);
                bVar8 = iVar10 == 0;
                goto LAB_14dd1af3a;
              }
LAB_14dd1af41:
              iVar18 = iVar18 + 1;
            }
            else {
              bVar8 = iVar10 + local_1b8.Data.ArrayNum == 1;
LAB_14dd1af3a:
              if (bVar8) goto LAB_14dd1af41;
            }
            FVar19.Data = FVar19.Data + 0x10;
          }
          if ((local_250[0] < 2) || (iVar18 < 2)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          pFVar23 = local_210;
          if (bVar8) goto LAB_14dd1af7e;
        }
        FVar26.Data = FVar26.Data + 8;
      } while( true );
    }
    lVar15 = *(longlong *)pTVar7 + (longlong)TStack_168.CurrentBitIndex * 0x58;
    iVar9 = *(int *)(lVar15 + 0x20);
    if (iVar9 == *(int *)&param_4->field_0x20) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar15 + 0x18),*(wchar_t **)&param_4->field_0x18);
        bVar8 = iVar9 == 0;
        goto LAB_14dd1a965;
      }
LAB_14dd1a970:
      local_200 = *(longlong *)(*(longlong *)(lVar15 + 0x48) + 0x18);
      if (local_200 != 0) {
        if (((local_238.Data <= (FScriptContainerElement *)&local_200) &&
            ((FScriptContainerElement *)&local_200 < local_238.Data + (longlong)iStack_22c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_230 == iStack_22c) {
          local_230 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_238,&iStack_22c);
        }
        lVar15 = (longlong)local_230;
        local_230 = local_230 + 1;
        *(longlong *)(local_238.Data + lVar15 * 8) = local_200;
      }
    }
    else {
      bVar8 = iVar9 + *(int *)&param_4->field_0x20 == 1;
LAB_14dd1a965:
      if (bVar8) goto LAB_14dd1a970;
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// GetCompositedPasses @ 14dd240b0

/* WARNING: Removing unreachable block (ram,0x00014dd244e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd244f3) */
/* WARNING: Removing unreachable block (ram,0x00014dd24502) */
/* WARNING: Removing unreachable block (ram,0x00014dd24511) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
* __cdecl UMovieGraphFileOutputNode::GetCompositedPasses
                    (TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FMovieGraphOutputMergerFrame *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar5;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  undefined8 *local_c0;
  undefined8 *local_b8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_80;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(param_1->ImageOutputData).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b0 = &param_1->ImageOutputData;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = *(int *)&(param_1->ImageOutputData).field_0x28;
  iStack_a8 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  local_90 = iStack_a8;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(param_1->ImageOutputData).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14dd24160;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_a4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_res18;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_14dd24160:
  iStack_88 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  uVar14 = *(uint *)&(param_1->ImageOutputData).field_0x28;
  uStack_98 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar17 = uVar14 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = local_b0;
  local_78 = local_b0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar4)();
    return pTVar9;
  }
  pTVar5 = local_80;
  uVar3 = *(uint *)&(param_1->ImageOutputData).field_0x28;
  if (uVar14 != uVar3) {
    puVar15 = *(undefined1 **)&(param_1->ImageOutputData).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dd24270;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar14 = local_res20 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14dd24270:
  do {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar5))
    {
      AlgoImpl::
      IntroSortInternal<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,_UMovieGraphFileOutputNode::GetCompositedPasses_::__l2::<lambda_1>_>_>
                ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                  *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum,local_res8[0],(<lambda_1> *)local_res10);
      return __return_storage_ptr__;
    }
    puVar13 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_70.CurrentBitIndex * 0x58);
    lVar10 = *(longlong *)(puVar13[9] + 0x18);
    if ((lVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payload",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphFileOutputNode.cpp"
                           ,0xd3,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
                *)(*pcVar4)();
      return pTVar9;
    }
    if (*(char *)(lVar10 + 0x14a) != '\0') {
      local_108 = *puVar13;
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_c0 = (undefined8 *)0x0;
      ::FString::operator=(&local_100,(FString *)(puVar13 + 1));
      ::FString::operator=(&local_f0,(FString *)(puVar13 + 3));
      ::FString::operator=(&local_e0,(FString *)(puVar13 + 5));
      ::FString::operator=(&local_d0,(FString *)(puVar13 + 7));
      (**(code **)(*(longlong *)puVar13[9] + 0x10))((longlong *)puVar13[9],&local_b8);
      puVar13 = local_c0;
      local_c0 = local_b8;
      local_b8 = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)(local_b8,1);
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x50)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
      *(undefined8 *)pFVar11 = local_108;
      *(undefined8 *)(pFVar11 + 8) = 0;
      *(FScriptContainerElement **)(pFVar11 + 8) = local_100.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x10) = local_100.Data.ArrayNum;
      *(int *)(pFVar11 + 0x14) = local_100.Data.ArrayMax;
      *(undefined8 *)(pFVar11 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x18) = local_f0.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x20) = local_f0.Data.ArrayNum;
      *(int *)(pFVar11 + 0x24) = local_f0.Data.ArrayMax;
      *(undefined8 *)(pFVar11 + 0x28) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x28) = local_e0.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x30) = local_e0.Data.ArrayNum;
      *(int *)(pFVar11 + 0x34) = local_e0.Data.ArrayMax;
      *(undefined8 *)(pFVar11 + 0x38) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x38) = local_d0.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x40) = local_d0.Data.ArrayNum;
      *(int *)(pFVar11 + 0x44) = local_d0.Data.ArrayMax;
      *(undefined8 **)(pFVar11 + 0x48) = local_c0;
      local_c0 = (undefined8 *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetNumFileOutputNodes @ 14dd29440

int __cdecl
UMovieGraphFileOutputNode::GetNumFileOutputNodes(UMovieGraphEvaluatedConfig *param_1,FName *param_2)

{
  int iVar1;
  FName FVar2;
  UClass *pUVar3;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  FVar2 = *param_2;
  pUVar3 = StaticClass();
  pTVar4 = UMovieGraphEvaluatedConfig::GetSettingsForBranch
                     (param_1,&local_18,pUVar3,FVar2,false,false);
  iVar1 = pTVar4->ArrayNum;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetPrivateStaticClass @ 14dd2c5d0

UClass * __cdecl UMovieGraphFileOutputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphFileOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphFileOutputNode,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphFileOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphFileOutputNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphFileOutputNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphFileOutputNode @ 14dd451c0

void __cdecl UMovieGraphFileOutputNode::StaticRegisterNativesUMovieGraphFileOutputNode(void)

{
  return;
}

