// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 40

// Call @ 14e7822c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,FString_const_&,UInterchangeMeshNode_*>
::Call(void *param_1,FString *param_2,UInterchangeMeshNode **param_3)

{
  bool bVar1;
  
  bVar1 = ``UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::
          operator()'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14e7822d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>,void,FString_const_&,UInterchangeSkeletonFactoryNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSkeletonFactoryNode **param_3)

{
  `UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7822e0

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
::Call(void *param_1)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName FStackX_8;
  FName FStackX_10;
  
  if (*(char *)(*(longlong *)param_1 + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// Call @ 14e7822f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_1>
  ::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e782300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::CreateMaterialInstanceFactoryNode'::__l2::<lambda_1>,void,FString_const_&>
::Call(void *param_1,FString *param_2)

{
  UInterchangeBaseNode *pUVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pUVar1 = *(UInterchangeBaseNode **)((longlong)param_1 + 0x10);
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.Data.ArrayNum = 0;
  FStack_68.Data.ArrayMax = 0;
  bVar2 = UInterchangeShaderPortsAPI::HasInput
                    (pUVar1,&Interchange::Materials::ThinTranslucent::Parameters::TransmissionColor)
  ;
  bVar3 = UInterchangeShaderPortsAPI::HasInput
                    (pUVar1,&Interchange::Materials::ThinTranslucent::Parameters::SurfaceCoverage);
  if ((bVar2) || (bVar3)) {
    pwVar4 = L"ThinTranslucentMaterial_";
  }
  else {
    bVar2 = UInterchangeShaderPortsAPI::HasInput
                      (*(UInterchangeBaseNode **)((longlong)param_1 + 0x10),
                       &Interchange::Materials::ClearCoat::Parameters::ClearCoat);
    if (bVar2) {
      pwVar4 = L"ClearCoatMaterial_";
    }
    else {
      bVar2 = UInterchangeShaderPortsAPI::HasInput
                        (*(UInterchangeBaseNode **)((longlong)param_1 + 0x10),
                         &Interchange::Materials::Sheen::Parameters::SheenColor);
      if (bVar2) {
        pwVar4 = L"SheenMaterial_";
      }
      else {
        bVar2 = UInterchangeShaderPortsAPI::HasInput
                          (*(UInterchangeBaseNode **)((longlong)param_1 + 0x10),
                           &Interchange::Materials::Subsurface::Parameters::SubsurfaceColor);
        pwVar4 = L"SubsurfaceMaterial_";
        if (!bVar2) {
          pwVar4 = L"PBRSurfaceMaterial_";
        }
      }
    }
  }
  ::FString::operator=(&FStack_68,pwVar4);
  ::FString::ConcatCF(&FStack_28,L"/InterchangeAssets/Materials/",&FStack_68);
  ::FString::ConcatFF(&FStack_38,&FStack_28,param_2);
  ::FString::ConcatFC(&FStack_48,&FStack_38,L".");
  ::FString::ConcatFF(&FStack_58,&FStack_48,&FStack_68);
  ::FString::ConcatFF(&FStack_18,&FStack_58,param_2);
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  UInterchangeMaterialInstanceFactoryNode::SetCustomParent
            (*(UInterchangeMaterialInstanceFactoryNode **)((longlong)param_1 + 8),&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14e782310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeAnimationTrackSetNode_*>
::Call(void *param_1,FString *param_2,UInterchangeAnimationTrackSetNode **param_3)

{
  `UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAssetsPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  UInterchangeFactoryBaseNode *this;
  
  this = *param_3;
  Interchange::PipelineHelper::FillSubPathFromSourceNode(this,*(UInterchangeSourceNode **)param_1);
  UInterchangeFactoryBaseNode::SetReimportStrategyFlags
            (this,(EReimportStrategyFlags *)((longlong)param_1 + 8));
  return;
}

// Call @ 14e782360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAudioPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeGenericAudioPipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  if (*(char *)(*(longlong *)param_1 + 0x13c) != '\0') {
    UInterchangeFactoryBaseNode::SetForceNodeReimport(*param_3);
    return;
  }
  return;
}

// Call @ 14e782390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericTexturePipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeGenericTexturePipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7823a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeSparseVolumeTexturePipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7823b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::<lambda_1>,void,FString_const_&,UInterchangeAnimationTrackSetNode_*>
::Call(void *param_1,FString *param_2,UInterchangeAnimationTrackSetNode **param_3)

{
  `UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e7823c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::InterchangeMeshPipeline::FindNamedLodGroup'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UE::Private::InterchangeMeshPipeline::FindNamedLodGroup'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7823d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::IsTranslatedDataContainOnlyJointAnimation'::__l2::<lambda_1>,bool,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSkeletalAnimationTrackNode **param_3)

{
  **(undefined1 **)param_1 = 1;
  return (bool)**(undefined1 **)param_1;
}

// Call @ 14e7823f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericLevelPipeline::PopulateSceneNodesPreImport'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeGenericLevelPipeline::PopulateSceneNodesPreImport'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,UInterchangeBaseNode_const_*>
::Call(void *param_1,UInterchangeBaseNode **param_2)

{
  ``UInterchangeGenericLevelPipeline::CacheActiveJointUids'::__l2::<lambda_1>::operator()'::__l5::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e782410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ImplementUseSourceNameForAssetOptionAnimSequence'::__l5::<lambda_1>,void,FString_const_&,UInterchangeAnimSequenceFactoryNode_*>
::Call(void *param_1,FString *param_2,UInterchangeAnimSequenceFactoryNode **param_3)

{
  UInterchangeAnimSequenceFactoryNode *this;
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  this = *param_3;
  pFVar1 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this,&local_18);
  ::FString::ConcatFF(&local_28,*(FString **)param_1,pFVar1);
  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14e782480

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericGroomPipeline::IsSettingsAreValid'::__l5::<lambda_1>,bool,FString_const_&,UInterchangeGroomNode_*>
::Call(void *param_1,FString *param_2,UInterchangeGroomNode **param_3)

{
  TOptional<FInterchangeGroomPayloadKey> local_28;
  
  UInterchangeGroomNode::GetPayloadKey(*param_3,&local_28);
  if (local_28.bIsSet != false) {
    if (local_28.TypedValue.Type == ANIMATED) {
      **(int **)param_1 = **(int **)param_1 + 1;
      if ((local_28.bIsSet != false) &&
         (local_28.TypedValue.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         )) {
        FMemory::Free(local_28.TypedValue.UniqueId.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_28.TypedValue.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_28.TypedValue.UniqueId.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// Call @ 14e7824f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_1>,void,FString_const_&,UInterchangeMeshNode_*>
::Call(void *param_1,FString *param_2,UInterchangeMeshNode **param_3)

{
  `UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e782500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::HandlePhongModel'::__l6::<lambda_1>,void,FString_const_&>
::Call(void *param_1,FString *param_2)

{
  FString *pFVar1;
  FString FStack_38;
  UInterchangeBaseNode *pUStack_28;
  FString FStack_20;
  
  UInterchangeGenericMaterialPipeline::CreateMaterialExpressionForInput
            (*(UInterchangeGenericMaterialPipeline **)param_1,
             (TTuple<UInterchangeMaterialExpressionFactoryNode_*,FString> *)&pUStack_28,
             (UInterchangeBaseMaterialFactoryNode *)**(undefined8 **)((longlong)param_1 + 8),
             (UInterchangeShaderNode *)**(undefined8 **)((longlong)param_1 + 0x10),param_2,
             *(FString **)((longlong)param_1 + 0x18));
  if (pUStack_28 != (UInterchangeBaseNode *)0x0) {
    pFVar1 = UInterchangeBaseNode::GetUniqueID(pUStack_28,&FStack_38);
    UInterchangeShaderPortsAPI::ConnectOuputToInputByName
              ((UInterchangeBaseNode *)**(undefined8 **)((longlong)param_1 + 0x20),param_2,pFVar1,
               &FStack_20);
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14e782510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()'::__l8::<lambda_1>,void,UInterchangeBaseNode_const_*>
::Call(void *param_1,UInterchangeBaseNode **param_2)

{
  ``UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()'::__l8::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e782520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l8::<lambda_1>,void,FString_const_&,UInterchangeSceneNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSceneNode **param_3)

{
  `UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l8::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e782530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericGroomPipeline::ExecutePipeline'::__l11::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeGenericGroomPipeline::ExecutePipeline'::__l11::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_2>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_2>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_2>,void,FString_const_&,UInterchangeMaterialFactoryNode_*>
::Call(void *param_1,FString *param_2,UInterchangeMaterialFactoryNode **param_3)

{
  `UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_1>::operator()
            (*(void **)((longlong)param_1 + 0x10),param_2,(UInterchangeFactoryBaseNode *)*param_3);
  return;
}

// Call @ 14e782570

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_2>,bool,FString_const_&,UInterchangeTransformAnimationTrackNode_*>
::Call(void *param_1,FString *param_2,UInterchangeTransformAnimationTrackNode **param_3)

{
  bool bVar1;
  
  bVar1 = `UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::
          <lambda_2>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14e782580

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::IsTranslatedDataContainOnlyJointAnimation'::__l8::<lambda_2>,bool,FString_const_&,UInterchangeMeshNode_*>
::Call(void *param_1,FString *param_2,UInterchangeMeshNode **param_3)

{
  UInterchangeMeshNode *this;
  bool bVar1;
  undefined1 *puVar2;
  
  this = *param_3;
  bVar1 = UInterchangeMeshNode::IsMorphTarget(this);
  if (bVar1) {
    if (**(char **)((longlong)param_1 + 8) != '\0') {
      **(undefined1 **)param_1 = 1;
    }
    puVar2 = *(undefined1 **)param_1;
  }
  else {
    bVar1 = UInterchangeMeshNode::IsSkinnedMesh(this);
    puVar2 = *(undefined1 **)param_1;
    if (bVar1) {
      *puVar2 = 1;
      return (bool)**(undefined1 **)param_1;
    }
  }
  return (bool)*puVar2;
}

// Call @ 14e7825f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l30::<lambda_2>,void,FString_const_&,UInterchangeSceneNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSceneNode **param_3)

{
  `UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l30::<lambda_2>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l46::<lambda_2>,void,UInterchangeBaseNode_const_*>
::Call(void *param_1,UInterchangeBaseNode **param_2)

{
  `UInterchangeGenericLevelPipeline::ExecutePipeline'::__l46::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14e782610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l81::<lambda_2>,void,UInterchangeBaseNode_const_*>
::Call(void *param_1,UInterchangeBaseNode **param_2)

{
  `UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l81::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14e782620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_3>,bool,FString_const_&,UInterchangeInstancedStaticMeshComponentNode_*>
::Call(void *param_1,FString *param_2,UInterchangeInstancedStaticMeshComponentNode **param_3)

{
  bool bVar1;
  
  bVar1 = `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::
          <lambda_3>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14e782630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_3>,void,FString_const_&,UInterchangeSpecularProfileNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSpecularProfileNode **param_3)

{
  `UInterchangeGenericMaterialPipeline::ExecutePipeline'::__l2::<lambda_3>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_3>,void,FString_const_&,UInterchangeMaterialInstanceFactoryNode_*>
::Call(void *param_1,FString *param_2,UInterchangeMaterialInstanceFactoryNode **param_3)

{
  `UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_1>::operator()
            (*(void **)((longlong)param_1 + 0x10),param_2,(UInterchangeFactoryBaseNode *)*param_3);
  return;
}

// Call @ 14e782660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_3>,void,FString_const_&,UInterchangeStaticMeshFactoryNode_*>
::Call(void *param_1,FString *param_2,UInterchangeStaticMeshFactoryNode **param_3)

{
  `UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_3>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e782670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>,void,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSkeletalAnimationTrackNode **param_3)

{
  `UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e782680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_4>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l2::<lambda_4>
  ::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e782690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_4>,void,FString_const_&,UInterchangeSceneVariantSetsNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSceneVariantSetsNode **param_3)

{
  `UInterchangeGenericLevelPipeline::ExecutePipeline'::__l2::<lambda_4>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7826a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_5>,void,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
::Call(void *param_1,FString *param_2,UInterchangeSkeletalAnimationTrackNode **param_3)

{
  `UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_5>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e7826b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l15::<lambda_5>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l15::<lambda_5>
  ::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e7826c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l17::<lambda_6>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities'::__l17::<lambda_6>
  ::operator()(param_1,param_2,*param_3);
  return;
}

