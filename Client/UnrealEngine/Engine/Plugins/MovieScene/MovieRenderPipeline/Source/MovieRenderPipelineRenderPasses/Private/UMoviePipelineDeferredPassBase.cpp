// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 53

// StaticClass @ 14ddbacf0

UClass * __cdecl UMoviePipelineDeferredPassBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPassBase",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPassBase,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPassBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineDeferredPassBase>,local_res8,
               UMoviePipelineImagePassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton;
}

// <lambda_1> @ 14ddc47f0

/* WARNING: Type propagation algorithm not settling */

<lambda_1> * __thiscall
`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMoviePipelineOutputMerger *pIVar2;
  
  *(UMoviePipelineDeferredPassBase **)this = param_1->__this;
  *(FImagePixelDataPayload **)((longlong)this + 8) = (param_1->FramePayload).Object;
  pTVar1 = (param_1->FramePayload).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FImageOverlappedAccumulator **)((longlong)this + 0x18) =
       (param_1->AccumulationArgs).ImageAccumulator.Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) =
       (param_1->AccumulationArgs).ImageAccumulator.WeakReferenceCount.ReferenceController;
  pIVar2 = (param_1->AccumulationArgs).OutputMerger.Object;
  (param_1->AccumulationArgs).ImageAccumulator.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->AccumulationArgs).ImageAccumulator.Object = (FImageOverlappedAccumulator *)0x0;
  *(IMoviePipelineOutputMerger **)((longlong)this + 0x28) = pIVar2;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x30) =
       (param_1->AccumulationArgs).OutputMerger.WeakReferenceCount.ReferenceController;
  (param_1->AccumulationArgs).OutputMerger.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->AccumulationArgs).OutputMerger.Object = (IMoviePipelineOutputMerger *)0x0;
  *(bool *)((longlong)this + 0x38) = (param_1->AccumulationArgs).bAccumulateAlpha;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x3c) =
       (param_1->AccumulationArgs).LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x44) =
       (param_1->AccumulationArgs).LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)((longlong)this + 0x4c) = (param_1->AccumulationArgs).LetterboxData.bDrawLetterboxBorder;
  *(int *)((longlong)this + 0x50) =
       (param_1->AccumulationArgs).LetterboxData.LeftSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)this + 0x54) =
       (param_1->AccumulationArgs).LetterboxData.RightSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)this + 0x58) =
       (param_1->AccumulationArgs).LetterboxData.TopSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)this + 0x5c) =
       (param_1->AccumulationArgs).LetterboxData.BottomSamplePixelsClearedBeforeAccumulation;
  *(FAccumulatorInstance **)((longlong)this + 0x60) = (param_1->SampleAccumulator).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x68) =
       (param_1->SampleAccumulator).SharedReferenceCount.ReferenceController;
  (param_1->SampleAccumulator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SampleAccumulator).Object = (FAccumulatorInstance *)0x0;
  return this;
}

// UMoviePipelineDeferredPassBase @ 14ddc74d0

UMoviePipelineDeferredPassBase * __thiscall
UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase
          (UMoviePipelineDeferredPassBase *this,FVTableHelper *param_1)

{
  UMoviePipelineImagePassBase::UMoviePipelineImagePassBase
            ((UMoviePipelineImagePassBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPassBase__6B_;
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  (this->ActorLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorLayers).ArrayNum = 0;
  (this->ActorLayers).ArrayMax = 0;
  (this->DataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).ArrayNum = 0;
  (this->DataLayers).ArrayMax = 0;
  (this->ActivePostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivePostProcessMaterials).ArrayNum = 0;
  (this->ActivePostProcessMaterials).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x30 = 0xffffffff;
  (this->ActiveHighPrecisionPostProcessMaterials).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActiveHighPrecisionPostProcessMaterials).HashSize = 0;
  (this->StencilLayerMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->CameraViewStateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraViewStateData).ArrayNum = 0;
  (this->CameraViewStateData).ArrayMax = 0;
  (this->PreviousCustomDepthValue).bIsSet = false;
  (this->PreviousDumpFramesValue).bIsSet = false;
  (this->PreviousColorFormatValue).bIsSet = false;
  (this->AccumulatorPool).Object = (FAccumulatorPool *)0x0;
  (this->AccumulatorPool).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OCIOSceneViewExtension).Object = (FOpenColorIODisplayExtension *)0x0;
  (this->OCIOSceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UniqueStencilLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueStencilLayerNames).ArrayNum = 0;
  (this->UniqueStencilLayerNames).ArrayMax = 0;
  return this;
}

// UMoviePipelineDeferredPassBase @ 14ddc75d0

UMoviePipelineDeferredPassBase * __thiscall
UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase(UMoviePipelineDeferredPassBase *this)

{
  uint *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UMoviePipelineDeferredPassBase *pUVar8;
  longlong lVar9;
  FSoftObjectPath *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FSoftObjectPath *local_res10;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [28];
  int local_bc;
  FSoftObjectPath local_b8;
  FString local_98;
  FString local_88;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TPersistentObjectPtr<FSoftObjectPath> local_68;
  TStringView<wchar_t> local_38;
  
  UMoviePipelineImagePassBase::UMoviePipelineImagePassBase((UMoviePipelineImagePassBase *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPassBase__6B_;
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  (this->ActorLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorLayers).ArrayNum = 0;
  (this->ActorLayers).ArrayMax = 0;
  (this->DataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).ArrayNum = 0;
  (this->DataLayers).ArrayMax = 0;
  (this->ActivePostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivePostProcessMaterials).ArrayNum = 0;
  (this->ActivePostProcessMaterials).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x34 = 0;
  (this->ActiveHighPrecisionPostProcessMaterials).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActiveHighPrecisionPostProcessMaterials).HashSize = 0;
  (this->StencilLayerMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->CameraViewStateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraViewStateData).ArrayNum = 0;
  (this->CameraViewStateData).ArrayMax = 0;
  (this->PreviousCustomDepthValue).bIsSet = false;
  (this->PreviousDumpFramesValue).bIsSet = false;
  (this->PreviousColorFormatValue).bIsSet = false;
  (this->AccumulatorPool).Object = (FAccumulatorPool *)0x0;
  (this->AccumulatorPool).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OCIOSceneViewExtension).Object = (FOpenColorIODisplayExtension *)0x0;
  (this->OCIOSceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UniqueStencilLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueStencilLayerNames).ArrayNum = 0;
  (this->UniqueStencilLayerNames).ArrayMax = 0;
  ::FString::FString(&local_88,L"camera");
  ::FString::FString(&local_98,"FinalImage");
  FVar11.Data = local_98.Data.AllocatorInstance.Data;
  local_res10 = (FSoftObjectPath *)local_d8;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  if (local_98.Data.ArrayNum == 0) {
    local_d8._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)local_d8,local_98.Data.ArrayNum,
               (int *)(local_d8 + 0xc));
    memcpy((void *)local_d8._0_8_,FVar11.Data,(longlong)local_98.Data.ArrayNum * 2);
  }
  FVar11.Data = local_88.Data.AllocatorInstance.Data;
  local_res10 = (FSoftObjectPath *)(local_d8 + 0x10);
  local_d8._16_8_ = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)(local_d8 + 0x10),
               local_88.Data.ArrayNum,(int *)(local_d8 + 0x1c));
    memcpy((void *)local_d8._16_8_,FVar11.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  FMoviePipelinePassIdentifier::operator=
            ((FMoviePipelinePassIdentifier *)&this->_padding_,
             (FMoviePipelinePassIdentifier *)local_d8);
  if ((FScriptContainerElement *)local_d8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
  pFVar10 = (FSoftObjectPath *)(local_e8.Data + (longlong)iVar6 * 0x10);
  (pFVar10->AssetPath).PackageName.ComparisonIndex = 0;
  iVar7 = DefaultDepthAsset.Data.ArrayNum;
  FVar11 = DefaultDepthAsset.Data.AllocatorInstance;
  (pFVar10->AssetPath).PackageName.Number = 0;
  lVar9 = (longlong)DefaultDepthAsset.Data.ArrayNum;
  (pFVar10->AssetPath).AssetName.ComparisonIndex.Value = DefaultDepthAsset.Data.ArrayNum;
  puVar1 = &(pFVar10->AssetPath).AssetName.Number;
  local_res10 = pFVar10;
  local_e0._0_4_ = iVar6 + 1;
  if (iVar7 == 0) {
    *puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar10,iVar7,(int *)puVar1);
    memcpy((void *)(pFVar10->AssetPath).PackageName,FVar11.Data,lVar9 * 2);
  }
  if (((local_e8.Data <
        (FScriptContainerElement *)
        ((longlong)&DefaultMotionVectorsAsset.Data.AllocatorInstance.Data + 1)) &&
      (&DefaultMotionVectorsAsset < local_e8.Data + (longlong)local_e0._4_4_ * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UMoviePipelineDeferredPassBase *)(*pcVar4)();
    return pUVar8;
  }
  iVar7 = (int)local_e0;
  if ((int)local_e0 == local_e0._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
  pFVar10 = (FSoftObjectPath *)(local_e8.Data + (longlong)iVar7 * 0x10);
  (pFVar10->AssetPath).PackageName.ComparisonIndex = 0;
  iVar7 = DefaultMotionVectorsAsset.Data.ArrayNum;
  FVar11 = DefaultMotionVectorsAsset.Data.AllocatorInstance;
  (pFVar10->AssetPath).PackageName.Number = 0;
  lVar9 = (longlong)DefaultMotionVectorsAsset.Data.ArrayNum;
  (pFVar10->AssetPath).AssetName.ComparisonIndex.Value = DefaultMotionVectorsAsset.Data.ArrayNum;
  puVar1 = &(pFVar10->AssetPath).AssetName.Number;
  local_res10 = pFVar10;
  if (iVar7 == 0) {
    *puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar10,iVar7,(int *)puVar1);
    memcpy((void *)(pFVar10->AssetPath).PackageName,FVar11.Data,lVar9 * 2);
  }
  iVar7 = (int)local_e0;
  pFVar12 = local_e8.Data + (longlong)(int)local_e0 * 0x10;
  FVar11.Data = local_e8.Data;
  while( true ) {
    if ((int)local_e0 != iVar7) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar11.Data == pFVar12) break;
    piVar2 = &(this->AdditionalPostProcessMaterials).ArrayMax;
    iVar6 = (this->AdditionalPostProcessMaterials).ArrayNum;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&(this->AdditionalPostProcessMaterials).AllocatorInstance,piVar2);
    }
    (this->AdditionalPostProcessMaterials).ArrayNum = iVar6 + 1;
    pFVar3 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data + (longlong)iVar6 * 0x48;
    DefaultConstructItems<FMoviePipelinePostProcessPass,int>(pFVar3,1);
    local_res10 = &local_b8;
    local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_b8.AssetPath.PackageName.Number = 0;
    local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_b8.AssetPath.AssetName.Number = 0;
    local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.SubPathString.Data.ArrayNum = 0;
    local_b8.SubPathString.Data.ArrayMax = 0;
    local_78 = *(wchar_t **)FVar11.Data;
    iStack_70 = *(int *)(FVar11.Data + 8) + -1;
    if (*(int *)(FVar11.Data + 8) == 0) {
      iStack_70 = 0;
    }
    local_38._12_4_ = uStack_6c;
    local_38.Size = iStack_70;
    local_38.DataPtr = local_78;
    FSoftObjectPath::SetPath(&local_b8,&local_38);
    local_res10 = &local_b8;
    local_68.WeakPtr.ObjectIndex = 0;
    local_68.WeakPtr.ObjectSerialNumber = 0;
    FSoftObjectPath::FSoftObjectPath(&local_68.ObjectID,&local_b8);
    if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + 0x18),&local_68);
    if (local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    *pFVar3 = (FScriptContainerElement)0x0;
    iVar6 = *(int *)(FVar11.Data + 8);
    if (iVar6 == DefaultDepthAsset.Data.ArrayNum) {
      if (iVar6 < 2) {
        pFVar3[0x40] = (FScriptContainerElement)0x1;
        FVar11.Data = FVar11.Data + 0x10;
      }
      else {
        iVar6 = wcscmp(*(wchar_t **)FVar11.Data,
                       (wchar_t *)DefaultDepthAsset.Data.AllocatorInstance.Data);
        pFVar3[0x40] = (FScriptContainerElement)(iVar6 == 0);
        FVar11.Data = FVar11.Data + 0x10;
      }
    }
    else {
      pFVar3[0x40] = (FScriptContainerElement)(iVar6 + DefaultDepthAsset.Data.ArrayNum == 1);
      FVar11.Data = FVar11.Data + 0x10;
    }
  }
  this->bRenderMainPass = true;
  DestructItems<FString,int>((FString *)local_e8.Data,(int)local_e0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return this;
}

// ~<lambda_1> @ 14ddc8bc0

void __thiscall
`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x68));
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~<lambda_1> @ 14ddc8cc0

void __thiscall
`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x68));
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~<lambda_2> @ 14ddc8de0

void __thiscall
`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>::~<lambda_2>(void *this)

{
  __l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~UMoviePipelineDeferredPassBase @ 14ddcbad0

void __thiscall
UMoviePipelineDeferredPassBase::~UMoviePipelineDeferredPassBase
          (UMoviePipelineDeferredPassBase *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPassBase__6B_;
  DestructItems<FString,int>
            ((FString *)(this->UniqueStencilLayerNames).AllocatorInstance.Data,
             (this->UniqueStencilLayerNames).ArrayNum);
  pFVar1 = (this->UniqueStencilLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OCIOSceneViewExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccumulatorPool).SharedReferenceCount.ReferenceController);
  DestructItems<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int>
            ((FMultiCameraViewStateData *)(this->CameraViewStateData).AllocatorInstance.Data,
             (this->CameraViewStateData).ArrayNum);
  pFVar1 = (this->CameraViewStateData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ActiveHighPrecisionPostProcessMaterials).HashSize = 0;
  FVar2 = (this->ActiveHighPrecisionPostProcessMaterials).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveHighPrecisionPostProcessMaterials).Elements);
  pFVar1 = (this->ActivePostProcessMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->DataLayers).AllocatorInstance.Data,
             (this->DataLayers).ArrayNum);
  pFVar1 = (this->DataLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelinePostProcessPass,int>
            ((FMoviePipelinePostProcessPass *)
             (this->AdditionalPostProcessMaterials).AllocatorInstance.Data,
             (this->AdditionalPostProcessMaterials).ArrayNum);
  pFVar1 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineImagePassBase::~UMoviePipelineImagePassBase((UMoviePipelineImagePassBase *)this);
  return;
}

// operator() @ 14ddcd4d0

bool __thiscall
`UMoviePipelineDeferredPassBase::GetNameForPostProcessMaterial'::__l2::<lambda_1>::operator()
          (void *this,FMoviePipelinePostProcessPass *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *local_res8;
  undefined1 *local_res10;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  pUVar1 = *(UObject **)this;
  local_res10 = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  bVar2 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->Material).SoftObjectPtr.field_0x8,&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    return bVar2;
  }
  return bVar2;
}

// operator() @ 14ddcd930

/* WARNING: Removing unreachable block (ram,0x00014ddcde06) */

void __thiscall
`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()
          (void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  int *piVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  uchar *puVar3;
  EImagePixelType EVar4;
  FImagePixelData *pFVar5;
  longlong lVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  FMoviePipelineBackgroundAccumulateTask FVar11;
  FMoviePipelineBackgroundAccumulateTask FVar12;
  bool bVar13;
  int iVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar15;
  TImagePixelData<FLinearColor> *pTVar16;
  undefined1 uVar17;
  TImagePixelData<FLinearColor> *local_res8;
  FMoviePipelineBackgroundAccumulateTask local_res10;
  TIntPoint<int>_u_0 local_res18;
  TIntPoint<int>_u_0 local_res20;
  undefined1 local_128 [8];
  TIntPoint<int>_u_0 local_120;
  TSharedPtr<IImagePixelDataPayload,1> local_118;
  TSharedPtr<IImagePixelDataPayload,1> local_108;
  TSharedPtr<IImagePixelDataPayload,1> local_f8;
  TImagePixelData<FLinearColor> *local_e8;
  FImageSampleAccumulationArgs local_e0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  code *local_78;
  undefined8 *local_50;
  
  pTVar16 = (TImagePixelData<FLinearColor> *)0x0;
  local_res8 = (TImagePixelData<FLinearColor> *)0x0;
  pFVar5 = param_1->Ptr;
  EVar4 = pFVar5->Type;
  if (EVar4 == Color) {
    local_120 = (pFVar5->Size).field0_0x0;
    local_res18 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_res8 = pTVar16;
    if (local_res18 != (TIntPoint<int>_u_0)0x0) {
      local_f8.Object = *(IImagePixelDataPayload **)((longlong)this + 8);
      local_f8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res8 = (TImagePixelData<FLinearColor> *)
                   TImagePixelData<FColor>::TImagePixelData<FColor>
                             ((TImagePixelData<FColor> *)local_res18,
                              (TIntPoint<int> *)&local_120._s_0,
                              (TArray<FColor,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),&local_f8);
    }
  }
  else if (EVar4 == Float16) {
    local_res20 = (pFVar5->Size).field0_0x0;
    local_res18 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_res8 = pTVar16;
    if (local_res18 != (TIntPoint<int>_u_0)0x0) {
      local_108.Object = *(IImagePixelDataPayload **)((longlong)this + 8);
      local_108.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res8 = (TImagePixelData<FLinearColor> *)
                   TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                             ((TImagePixelData<FFloat16Color> *)local_res18,
                              (TIntPoint<int> *)&local_res20._s_0,
                              (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),
                              &local_108);
    }
  }
  else if (EVar4 == Float32) {
    local_res18 = (pFVar5->Size).field0_0x0;
    local_res20 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_res8 = pTVar16;
    if (local_res20 != (TIntPoint<int>_u_0)0x0) {
      local_118.Object = *(IImagePixelDataPayload **)((longlong)this + 8);
      local_118.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res8 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                             ((TImagePixelData<FLinearColor> *)local_res20,
                              (TIntPoint<int> *)&local_res18._s_0,
                              (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),
                              &local_118);
    }
  }
  else {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                        ,0x39f,L"");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar6 = *(longlong *)((longlong)this + 8);
  if ((((*(int *)(lVar6 + 0x38) == *(int *)(lVar6 + 0x30) + -1) &&
       (*(int *)(lVar6 + 0x3c) == *(int *)(lVar6 + 0x34) + -1)) &&
      (*(int *)(lVar6 + 0x70) == *(int *)(lVar6 + 0x6c) + -1)) &&
     (*(int *)(lVar6 + 0x7c) == *(int *)(lVar6 + 0x78) + -1)) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  local_res10.LastCompletionEvent.Reference = (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)0x0;
  if ((*(longlong *)((longlong)this + 0x60) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar11.LastCompletionEvent.Reference = local_res10.LastCompletionEvent.Reference;
  TVar7.Reference = *(FBaseGraphTask **)(*(longlong *)((longlong)this + 0x60) + 0x40);
  FVar12.LastCompletionEvent.Reference = local_res10.LastCompletionEvent.Reference;
  if (local_res10.LastCompletionEvent.Reference != (TRefCountPtr<FBaseGraphTask>)TVar7.Reference) {
    if (TVar7.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(TVar7.Reference)->field_0x30 = *(int *)&(TVar7.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar12.LastCompletionEvent.Reference =
         (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    if (local_res10.LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_res10.LastCompletionEvent.Reference + 0x30);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        puVar8 = *(undefined8 **)local_res10.LastCompletionEvent.Reference;
        local_res10.LastCompletionEvent.Reference =
             (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        (*(code *)*puVar8)(FVar11.LastCompletionEvent.Reference,1);
        FVar12.LastCompletionEvent.Reference = local_res10.LastCompletionEvent.Reference;
      }
    }
  }
  local_res10.LastCompletionEvent.Reference = FVar12.LastCompletionEvent.Reference;
  local_e8 = local_res8;
  MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
            (&local_e0,(FImageSampleAccumulationArgs *)((longlong)this + 0x18));
  uVar9 = *(undefined8 *)((longlong)this + 0x60);
  lVar6 = *(longlong *)((longlong)this + 0x68);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_78 = (code *)0x0;
  local_50 = (undefined8 *)0x0;
  local_98 = uVar17;
  local_90 = uVar9;
  local_88 = lVar6;
  local_50 = FMemory::Malloc(0x70,8);
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_50[1] = local_e8;
  local_e8 = (TImagePixelData<FLinearColor> *)0x0;
  local_50[2] = local_e0.ImageAccumulator.Object;
  local_50[3] = local_e0.ImageAccumulator.WeakReferenceCount.ReferenceController;
  local_e0.ImageAccumulator.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_e0.ImageAccumulator.Object = (FImageOverlappedAccumulator *)0x0;
  local_50[4] = local_e0.OutputMerger.Object;
  local_50[5] = local_e0.OutputMerger.WeakReferenceCount.ReferenceController;
  local_e0.OutputMerger.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.OutputMerger.Object = (IMoviePipelineOutputMerger *)0x0;
  *(bool *)(local_50 + 6) = local_e0.bAccumulateAlpha;
  *(TIntPoint<int> *)((longlong)local_50 + 0x34) =
       local_e0.LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int> *)((longlong)local_50 + 0x3c) =
       local_e0.LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)((longlong)local_50 + 0x44) = local_e0.LetterboxData.bDrawLetterboxBorder;
  *(int *)(local_50 + 9) = local_e0.LetterboxData.LeftSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)local_50 + 0x4c) =
       local_e0.LetterboxData.RightSamplePixelsClearedBeforeAccumulation;
  *(int *)(local_50 + 10) = local_e0.LetterboxData.TopSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)local_50 + 0x54) =
       local_e0.LetterboxData.BottomSamplePixelsClearedBeforeAccumulation;
  *(undefined1 *)(local_50 + 0xb) = uVar17;
  local_50[0xc] = uVar9;
  local_50[0xd] = lVar6;
  local_88 = 0;
  local_90 = 0;
  if (local_50 + 1 != (undefined8 *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
               ::Call;
  }
  FMoviePipelineBackgroundAccumulateTask::Execute
            (&local_res10,(TUniqueFunction<void___cdecl(void)> *)local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((*(longlong *)((longlong)this + 0x60) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puVar8 = *(undefined8 **)(*(longlong *)((longlong)this + 0x60) + 0x40);
  if ((undefined1  [8])puVar8 != local_128) {
    *(undefined1 (*) [8])(*(longlong *)((longlong)this + 0x60) + 0x40) = local_128;
    if (local_128 != (undefined1  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_128 + 0x30) = *(int *)((longlong)local_128 + 0x30) + 1;
      UNLOCK();
    }
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 6);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
  lVar6 = *(longlong *)this;
  pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(lVar6 + 0x148);
  pFVar15 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar15 = pFVar2;
  }
  if (((pFVar15 <= (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_128) &&
      (local_128 < pFVar15->InlineData + (longlong)*(int *)(lVar6 + 0x174) * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar14 = *(int *)(lVar6 + 0x170);
  if (iVar14 == *(int *)(lVar6 + 0x174)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,pFVar2,(int *)(lVar6 + 0x174));
  }
  *(int *)(lVar6 + 0x170) = iVar14 + 1;
  pFVar15 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar15 = pFVar2;
  }
  puVar3 = pFVar15->InlineData + (longlong)iVar14 * 8;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(undefined1 (*) [8])puVar3 = local_128;
  if (local_128 != (undefined1  [8])0x0) {
    LOCK();
    *(int *)((longlong)local_128 + 0x30) = *(int *)((longlong)local_128 + 0x30) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)local_128 + 0x30);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar14 == 1) && (local_128 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_128)(local_128,1);
    }
  }
  if (local_res10.LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_res10.LastCompletionEvent.Reference + 0x30);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (*(code *)**(undefined8 **)local_res10.LastCompletionEvent.Reference)
                (local_res10.LastCompletionEvent.Reference,1);
    }
  }
  return;
}

// operator() @ 14ddce460

void __thiscall
`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()
          (void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  int *piVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  uchar *puVar3;
  longlong lVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  FMoviePipelineBackgroundAccumulateTask FVar9;
  FMoviePipelineBackgroundAccumulateTask FVar10;
  bool bVar11;
  int iVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar13;
  undefined1 uVar14;
  FMoviePipelineBackgroundAccumulateTask local_res8 [2];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  FImageSampleAccumulationArgs local_b8;
  undefined1 local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  undefined8 *local_30;
  
  lVar4 = *(longlong *)((longlong)this + 8);
  if ((((*(int *)(lVar4 + 0x38) == *(int *)(lVar4 + 0x30) + -1) &&
       (*(int *)(lVar4 + 0x3c) == *(int *)(lVar4 + 0x34) + -1)) &&
      (*(int *)(lVar4 + 0x70) == *(int *)(lVar4 + 0x6c) + -1)) &&
     (*(int *)(lVar4 + 0x7c) == *(int *)(lVar4 + 0x78) + -1)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  local_res8[0].LastCompletionEvent.Reference = (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)0x0;
  if ((*(longlong *)((longlong)this + 0x60) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar9.LastCompletionEvent.Reference = local_res8[0].LastCompletionEvent.Reference;
  TVar5.Reference = *(FBaseGraphTask **)(*(longlong *)((longlong)this + 0x60) + 0x40);
  FVar10.LastCompletionEvent.Reference = local_res8[0].LastCompletionEvent.Reference;
  if (local_res8[0].LastCompletionEvent.Reference != (TRefCountPtr<FBaseGraphTask>)TVar5.Reference)
  {
    if (TVar5.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(TVar5.Reference)->field_0x30 = *(int *)&(TVar5.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar10.LastCompletionEvent.Reference =
         (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    if (local_res8[0].LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_res8[0].LastCompletionEvent.Reference + 0x30);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        puVar6 = *(undefined8 **)local_res8[0].LastCompletionEvent.Reference;
        local_res8[0].LastCompletionEvent.Reference =
             (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        (*(code *)*puVar6)(FVar9.LastCompletionEvent.Reference,1);
        FVar10.LastCompletionEvent.Reference = local_res8[0].LastCompletionEvent.Reference;
      }
    }
  }
  local_res8[0].LastCompletionEvent.Reference = FVar10.LastCompletionEvent.Reference;
  local_c0 = param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
            (&local_b8,(FImageSampleAccumulationArgs *)((longlong)this + 0x18));
  uVar7 = *(undefined8 *)((longlong)this + 0x60);
  lVar4 = *(longlong *)((longlong)this + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_58 = (code *)0x0;
  local_30 = (undefined8 *)0x0;
  local_70 = uVar14;
  local_68 = uVar7;
  local_60 = lVar4;
  local_30 = FMemory::Malloc(0x70,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_30[1] = local_c0;
  local_c0 = (FImagePixelData *)0x0;
  local_30[2] = local_b8.ImageAccumulator.Object;
  local_30[3] = local_b8.ImageAccumulator.WeakReferenceCount.ReferenceController;
  local_b8.ImageAccumulator.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_b8.ImageAccumulator.Object = (FImageOverlappedAccumulator *)0x0;
  *(IMoviePipelineOutputMerger **)(local_30 + 4) = local_b8.OutputMerger.Object;
  local_30[5] = local_b8.OutputMerger.WeakReferenceCount.ReferenceController;
  local_b8.OutputMerger.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.OutputMerger.Object = (IMoviePipelineOutputMerger *)0x0;
  *(bool *)(local_30 + 6) = local_b8.bAccumulateAlpha;
  *(TIntPoint<int> *)((longlong)local_30 + 0x34) =
       local_b8.LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int> *)((longlong)local_30 + 0x3c) =
       local_b8.LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)((longlong)local_30 + 0x44) = local_b8.LetterboxData.bDrawLetterboxBorder;
  *(int *)(local_30 + 9) = local_b8.LetterboxData.LeftSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)local_30 + 0x4c) =
       local_b8.LetterboxData.RightSamplePixelsClearedBeforeAccumulation;
  *(int *)(local_30 + 10) = local_b8.LetterboxData.TopSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)local_30 + 0x54) =
       local_b8.LetterboxData.BottomSamplePixelsClearedBeforeAccumulation;
  *(undefined1 *)(local_30 + 0xb) = uVar14;
  local_30[0xc] = uVar7;
  local_30[0xd] = lVar4;
  local_60 = 0;
  local_68 = 0;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
               ::Call;
  }
  FMoviePipelineBackgroundAccumulateTask::Execute
            (local_res8,(TUniqueFunction<void___cdecl(void)> *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((*(longlong *)((longlong)this + 0x60) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar6 = *(undefined8 **)(*(longlong *)((longlong)this + 0x60) + 0x40);
  if ((undefined1  [8])puVar6 != local_c8) {
    *(undefined1 (*) [8])(*(longlong *)((longlong)this + 0x60) + 0x40) = local_c8;
    if (local_c8 != (undefined1  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_c8 + 0x30) = *(int *)((longlong)local_c8 + 0x30) + 1;
      UNLOCK();
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  lVar4 = *(longlong *)this;
  pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(lVar4 + 0x148);
  pFVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar13 = pFVar2;
  }
  if (((pFVar13 <= (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_c8) &&
      (local_c8 < pFVar13->InlineData + (longlong)*(int *)(lVar4 + 0x174) * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = *(int *)(lVar4 + 0x170);
  if (iVar12 == *(int *)(lVar4 + 0x174)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,pFVar2,(int *)(lVar4 + 0x174));
  }
  *(int *)(lVar4 + 0x170) = iVar12 + 1;
  pFVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar13 = pFVar2;
  }
  puVar3 = pFVar13->InlineData + (longlong)iVar12 * 8;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(undefined1 (*) [8])puVar3 = local_c8;
  if (local_c8 != (undefined1  [8])0x0) {
    LOCK();
    *(int *)((longlong)local_c8 + 0x30) = *(int *)((longlong)local_c8 + 0x30) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)local_c8 + 0x30);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar12 == 1) && (local_c8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_c8)(local_c8,1);
    }
  }
  if (local_res8[0].LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_res8[0].LastCompletionEvent.Reference + 0x30);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)local_res8[0].LastCompletionEvent.Reference)
                (local_res8[0].LastCompletionEvent.Reference,1);
    }
  }
  return;
}

// operator() @ 14ddce7d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)this + 0x10))();
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *pFVar1;
  local_38._padding_._4_2_ = 0xffff;
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38.Type = Texture;
  local_38.AccessBefore = RTV;
  local_38.AccessAfter = SRVGraphicsPixel;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// operator() @ 14ddcf480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FMoviePipelineSurfaceQueue *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined1 auStack_98 [32];
  FRHIResource *local_78;
  TSharedRef<FImagePixelDataPayload,1> local_70;
  TSharedRef<FImagePixelDataPayload,1> *local_60;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FMoviePipelineSurfaceQueue **)this;
  local_48[0] = (code *)0x0;
  local_20 = (code **)0x0;
  local_20 = FMemory::Malloc(0x78,8);
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar4 = local_20 + 1;
  __l2::<lambda_1>::<lambda_1>(ppcVar4,(<lambda_1> *)((longlong)this + 0x20));
  if (ppcVar4 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
                  ::Call;
  }
  local_60 = &local_70;
  local_70.Object = *(FImagePixelDataPayload **)((longlong)this + 0x10);
  local_70.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x90) + 0x10))();
  local_78 = (FRHIResource *)*puVar3;
  if (local_78 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_78);
  }
  FMoviePipelineSurfaceQueue::OnRenderTargetReady_RenderThread
            (this_00,(FRHITexture *)&local_78,&local_70,
             (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
              *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar4 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar4 = local_20;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// operator() @ 14ddcf5e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)this + 0x10))();
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *pFVar1;
  local_38._padding_._4_2_ = 0xffff;
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38.Type = Texture;
  local_38.AccessBefore = RTV;
  local_38.AccessAfter = SRVGraphicsPixel;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// AddReferencedObjects @ 14ddd4330

void __cdecl
UMoviePipelineDeferredPassBase::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  FString *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  UMoviePipelineImagePassBase::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar10 = GetTypeName<UMoviePipelineDeferredPassBase>(&local_90);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar17);
  }
  pUVar9 = GetPrivateStaticClass();
  iVar18 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar18) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
      &pUVar9->_padding_)) {
    pFVar10 = GetTypeName<UMoviePipelineDeferredPassBase>(&local_80);
    pwVar17 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UObject>(local_70,param_1);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar17,pwVar13);
  }
  lVar3 = *(longlong *)&param_1[0xd].field_0x18;
  uVar2 = *(uint *)&param_1[0xd].field_0x20;
  uVar11 = (ulonglong)(int)uVar2;
  lVar12 = uVar11 * 0x58;
  puVar22 = (uint *)(lVar3 + 0x28);
  do {
    if (*(int *)&param_1[0xd].field_0x20 != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar22 + -10 == (uint *)(lVar12 + lVar3)) {
      return;
    }
    iVar18 = 0;
    uVar7 = 1;
    iVar20 = 0;
    uVar15 = *puVar22;
    uVar8 = 0;
    if (uVar15 != 0) {
      puVar21 = *(uint **)(puVar22 + -2);
      if (puVar21 == (uint *)0x0) {
        puVar21 = puVar22 + -6;
      }
      uVar8 = *puVar21;
      while (uVar8 == 0) {
        iVar18 = iVar18 + 1;
        iVar20 = iVar20 + 0x20;
        uVar8 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14ddd445f;
        uVar8 = puVar21[iVar18];
      }
      uVar7 = -uVar8 & uVar8;
      uVar11 = (ulonglong)uVar7 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar8 = (int)lVar14 + -1 + iVar20;
      if ((int)uVar15 < (int)uVar8) {
        uVar8 = uVar15;
      }
    }
LAB_14ddd445f:
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar22 + -6);
    TStack_b8._padding_ = CONCAT44(uVar7,iVar18);
    TStack_b8.CurrentBitIndex = uVar8;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar20;
    uStack_98 = CONCAT44(uStack_c4,puVar22[-8] - puVar22[3]);
    iVar18 = (int)uVar15 >> 5;
    uVar8 = uVar15 & 0xffffffe0;
    TStack_b8.Array = pTVar1;
    if (((int)uVar15 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *puVar22;
    if (uVar15 != uVar7) {
      pTVar19 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar22 + -2) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar22 + -2);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
      while (uVar15 == 0) {
        iVar18 = iVar18 + 1;
        uVar8 = uVar8 + 0x20;
        uVar15 = uVar7;
        if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar18)
        goto LAB_14ddd4571;
        uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
      }
      uVar11 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar15 = (int)lVar14 + -1 + uVar8;
      if ((int)uVar7 < (int)uVar15) {
        uVar15 = uVar7;
      }
    }
LAB_14ddd4571:
    while( true ) {
      if (puVar22[-8] - puVar22[3] != (int)uStack_98) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_b8.CurrentBitIndex == uVar15) && (TStack_b8.Array == pTVar1)) break;
      lVar14 = (longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)(puVar22 + -10);
      uVar8 = 0;
      if (0 < *(int *)(lVar14 + 0x10)) {
        lVar16 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar14 + 0x10)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar4 = *(longlong **)(lVar16 + 8 + *(longlong *)(lVar14 + 8));
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
          }
          uVar8 = uVar8 + 1;
          lVar16 = lVar16 + 0x38;
        } while ((int)uVar8 < *(int *)(lVar14 + 0x10));
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    puVar22 = puVar22 + 0x16;
    uVar11 = (ulonglong)uVar2;
  } while( true );
}

// AddViewExtensions @ 14ddd47d0

void __thiscall
UMoviePipelineDeferredPassBase::AddViewExtensions
          (UMoviePipelineDeferredPassBase *this,FSceneViewFamilyContext *param_1,
          FMoviePipelineRenderPassMetrics *param_2)

{
  TSharedPtr<FOpenColorIODisplayExtension,1> *this_00;
  undefined1 *puVar1;
  FOpenColorIODisplayConfiguration *pFVar2;
  UOpenColorIOConfiguration *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FOpenColorIODisplayExtension *pFVar8;
  longlong *plVar9;
  FOpenColorIODisplayExtension *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FOpenColorIODisplayExtension *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar2 = param_2->OCIOConfiguration;
  if ((pFVar2 != (FOpenColorIODisplayConfiguration *)0x0) && (pFVar2->bIsEnabled != false)) {
    this_00 = &this->OCIOSceneViewExtension;
    if (this_00->Object == (FOpenColorIODisplayExtension *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar3 = (pFVar2->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr;
    if ((pUVar3 != (UOpenColorIOConfiguration *)0x0) &&
       (pUVar3 != (this_00->Object->DisplayConfiguration).ColorConfiguration.ConfigurationSource.
                  field0_0x0.DebugPtr)) {
      pFVar8 = TSharedPtr<FOpenColorIODisplayExtension,1>::operator->(this_00);
      (pFVar8->DisplayConfiguration).bIsEnabled = pFVar2->bIsEnabled;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (pFVar2->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr,
         pUVar3 != (UOpenColorIOConfiguration *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (pFVar8->DisplayConfiguration).ColorConfiguration.ConfigurationSource.field0_0x0 =
           (pFVar2->ColorConfiguration).ConfigurationSource.field0_0x0;
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.SourceColorSpace.ColorSpaceName,
                 &(pFVar2->ColorConfiguration).SourceColorSpace.ColorSpaceName);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.SourceColorSpace.FamilyName,
                 &(pFVar2->ColorConfiguration).SourceColorSpace.FamilyName);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.SourceColorSpace.Description,
                 &(pFVar2->ColorConfiguration).SourceColorSpace.Description);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.
                  ColorSpaceName,&(pFVar2->ColorConfiguration).DestinationColorSpace.ColorSpaceName)
      ;
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.FamilyName
                 ,&(pFVar2->ColorConfiguration).DestinationColorSpace.FamilyName);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationColorSpace.
                  Description,&(pFVar2->ColorConfiguration).DestinationColorSpace.Description);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.Display,
                 &(pFVar2->ColorConfiguration).DestinationDisplayView.Display);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.View,
                 &(pFVar2->ColorConfiguration).DestinationDisplayView.View);
      ::FString::operator=
                (&(pFVar8->DisplayConfiguration).ColorConfiguration.DestinationDisplayView.
                  Description,&(pFVar2->ColorConfiguration).DestinationDisplayView.Description);
      (pFVar8->DisplayConfiguration).ColorConfiguration.DisplayViewDirection =
           (pFVar2->ColorConfiguration).DisplayViewDirection;
    }
    puVar1 = &param_1->field_0xe8;
    if (this_00->Object == (FOpenColorIODisplayExtension *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_28 = this_00->Object;
    pTVar4 = (this->OCIOSceneViewExtension).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTStack_20 = pTVar4;
    if (local_28 == (FOpenColorIODisplayExtension *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_38 = local_28;
    pTStack_30 = pTStack_20;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((*(FOpenColorIODisplayExtension ***)puVar1 <= &local_38) &&
       (&local_38 <
        *(FOpenColorIODisplayExtension ***)puVar1 + (longlong)*(int *)&param_1->field_0xf4 * 2)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&param_1->field_0xf0;
    if (iVar7 == *(int *)&param_1->field_0xf4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xf4);
    }
    *(int *)&param_1->field_0xf0 = iVar7 + 1;
    plVar9 = (longlong *)(*(longlong *)puVar1 + (longlong)iVar7 * 0x10);
    *plVar9 = (longlong)local_38;
    plVar9[1] = (longlong)pTStack_30;
    if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// BlendPostProcessSettings @ 14ddd6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineDeferredPassBase::BlendPostProcessSettings
          (UMoviePipelineDeferredPassBase *this,FSceneView *param_1,
          FMoviePipelineRenderPassMetrics *param_2,IViewCalcPayload *param_3)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UMoviePipeline *pUVar7;
  UMoviePipeline *pUVar8;
  UWorld *pUVar9;
  undefined1 auStackY_958 [32];
  UCameraComponent *local_928;
  TVector<double>_u_0 local_920;
  FMinimalViewInfo local_908;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_958;
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar8->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar7->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar7->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  iVar6 = (**(code **)(this->_padding_ + 0x450))(this);
  if (iVar6 == 1) {
    UMoviePipelineImagePassBase::BlendPostProcessSettings
              ((UMoviePipelineImagePassBase *)this,param_1,param_2,param_3);
  }
  else {
    local_928 = (UCameraComponent *)0x0;
    FMinimalViewInfo::FMinimalViewInfo(&local_908);
    pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::GetSidecarCameraData
              (pUVar7,pUVar2,(param_2->OutputState).CameraIndex,&local_908,&local_928);
    if (local_928 != (UCameraComponent *)0x0) {
      local_920._0_4_ = (undefined4)local_928->_padding_;
      local_920._4_4_ = *(undefined4 *)((longlong)&local_928->_padding_ + 4);
      local_920._8_4_ = (undefined4)local_928->_padding_;
      local_920._12_4_ = *(undefined4 *)((longlong)&local_928->_padding_ + 4);
      local_920._16_4_ = (undefined4)local_928->_padding_;
      local_920._20_4_ = *(undefined4 *)((longlong)&local_928->_padding_ + 4);
      pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      UE::MoviePipeline::DoPostProcessBlend
                ((TVector<double> *)&local_920._s_0,pUVar9,&local_908,param_1);
    }
    if (local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// CheckIfPathTracerIsSupported @ 14ddd9030

bool __thiscall
UMoviePipelineDeferredPassBase::CheckIfPathTracerIsSupported(UMoviePipelineDeferredPassBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  bVar2 = IsRayTracingEnabled();
  if (bVar2) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
    plVar5 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,L"r.PathTracing",1);
    if (plVar5 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 200))(plVar5);
      return iVar4 != 0;
    }
  }
  return false;
}

// GatherOutputPassesImpl @ 14dddc8e0

/* WARNING: Removing unreachable block (ram,0x00014dddcf76) */
/* WARNING: Removing unreachable block (ram,0x00014dddd144) */
/* WARNING: Removing unreachable block (ram,0x00014dddcdb0) */
/* WARNING: Removing unreachable block (ram,0x00014dddcf85) */
/* WARNING: Removing unreachable block (ram,0x00014dddd153) */
/* WARNING: Removing unreachable block (ram,0x00014dddd37a) */
/* WARNING: Removing unreachable block (ram,0x00014dddd389) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineDeferredPassBase::GatherOutputPassesImpl
          (UMoviePipelineDeferredPassBase *this,
          TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  FMoviePipelinePostProcessPass *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  UMoviePipeline *pUVar8;
  UMoviePipeline *pUVar9;
  void **ppvVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FMoviePipelinePostProcessPass *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  int iVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_184;
  undefined1 local_183 [3];
  FScriptContainerElement *local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  FString local_168;
  FString local_158;
  void *local_148;
  void *local_140;
  FString local_138;
  ForAnyElementType local_128;
  undefined8 local_120;
  FString local_118;
  ForAnyElementType local_108;
  undefined8 local_100;
  FString local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  int local_d8;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  FName local_bc;
  longlong local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  void *local_70 [6];
  
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar5 = 0;
  if (pUVar9->CurrentShotIndex < (pUVar8->ActiveShotList).ArrayNum) {
    uVar5 = (uint)~pUVar9->CurrentShotIndex >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c0 = (**(code **)(this->_padding_ + 0x450))(this);
  local_d8 = 0;
  if (0 < local_c0) {
    do {
      iVar7 = local_d8;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_148 = (void *)0x0;
      local_140 = (void *)0x0;
      iVar6 = (int)this->_padding_;
      iVar16 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar16 = 0;
      }
      ::FString::AssignRange(&local_158,(wchar_t *)this->_padding_,iVar16);
      ppvVar10 = (void **)(**(code **)(this->_padding_ + 0x460))(this,local_70,iVar7);
      if (&local_148 != ppvVar10) {
        if (local_148 != (void *)0x0) {
          FMemory::Free(local_148);
        }
        local_148 = *ppvVar10;
        *ppvVar10 = (void *)0x0;
        local_140 = ppvVar10[1];
        ppvVar10[1] = (void *)0x0;
      }
      if (local_70[0] != (void *)0x0) {
        FMemory::Free(local_70[0]);
      }
      if (this->bRenderMainPass != false) {
        pFVar12 = (param_1->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 < pFVar12 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        FVar14.Data = local_158.Data.AllocatorInstance.Data;
        param_1->ArrayNum = iVar6 + 1;
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
        *(undefined8 *)&pFVar12->field_0x0 = 0;
        lVar15 = (longlong)local_158.Data.ArrayNum;
        *(int *)&pFVar12[8].field_0x0 = local_158.Data.ArrayNum;
        local_78 = pFVar12;
        if (local_158.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0xc) = 0;
        }
        else {
          local_180 = pFVar12;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,
                     local_158.Data.ArrayNum,(int *)(pFVar12 + 0xc));
          memcpy(*(void **)&pFVar12->field_0x0,FVar14.Data,lVar15 * 2);
        }
        pvVar3 = local_148;
        pFVar11 = pFVar12 + 0x10;
        *(undefined8 *)pFVar11 = 0;
        lVar15 = (longlong)(int)local_140;
        *(int *)&pFVar12[0x18].field_0x0 = (int)local_140;
        local_180 = pFVar11;
        if ((int)local_140 == 0) {
          *(int *)(pFVar12 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_140,0,(ForAnyElementType *)pFVar11,(int)local_140,
                     (int *)(pFVar12 + 0x1c));
          memcpy(*(void **)pFVar11,pvVar3,lVar15 * 2);
        }
      }
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      pFVar11 = (this->ActivePostProcessMaterials).AllocatorInstance.Data;
      iVar6 = (this->ActivePostProcessMaterials).ArrayNum;
      pFVar12 = pFVar11 + (longlong)iVar6 * 8;
      while( true ) {
        if ((this->ActivePostProcessMaterials).ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar11 == pFVar12) break;
        lVar15 = *(longlong *)pFVar11;
        if (lVar15 != 0) {
          local_bc = *(FName *)(lVar15 + 0x18);
          ::FName::ToString(&local_bc,&local_168);
          pFVar13 = (FMoviePipelinePostProcessPass *)
                    (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
          iVar7 = (this->AdditionalPostProcessMaterials).ArrayNum;
          pFVar1 = pFVar13 + iVar7;
          local_b0 = lVar15;
          while( true ) {
            if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (pFVar13 == pFVar1) goto LAB_14dddccc0;
            bVar4 = `UMoviePipelineDeferredPassBase::GetNameForPostProcessMaterial'::__l2::
                    <lambda_1>::operator()(&local_b0,pFVar13);
            if (bVar4) break;
            pFVar13 = pFVar13 + 1;
          }
          if (pFVar13 != (FMoviePipelinePostProcessPass *)0x0) {
            iVar7 = (pFVar13->Name).Data.ArrayNum;
            if ((1 < iVar7) && (&local_168 != &pFVar13->Name)) {
              _Src = (pFVar13->Name).Data.AllocatorInstance.Data;
              local_168.Data.ArrayNum = iVar7;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar7,local_168.Data.ArrayMax,(ForAnyElementType *)&local_168,iVar7,
                         &local_168.Data.ArrayMax);
              memcpy(local_168.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
            }
          }
LAB_14dddccc0:
          if (((local_178.Data <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               local_178.Data + (longlong)local_170._4_4_ * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (int)local_170;
          if ((int)local_170 == local_170._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_178,(int *)((longlong)&local_170 + 4));
          }
          local_170 = CONCAT44(local_170._4_4_,iVar7 + 1);
          local_180 = local_178.Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)local_180 = 0;
          *(FScriptContainerElement **)local_180 = local_168.Data.AllocatorInstance.Data;
          *(int *)(local_180 + 8) = local_168.Data.ArrayNum;
          *(int *)(local_180 + 0xc) = local_168.Data.ArrayMax;
          local_168.Data.ArrayNum = 0;
          local_168.Data.ArrayMax = 0;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pFVar11 = pFVar11 + 8;
      }
      iVar6 = (int)local_170;
      pFVar12 = local_178.Data + (longlong)(int)local_170 * 0x10;
      FVar14.Data = local_178.Data;
      while( true ) {
        if ((int)local_170 != iVar6) {
          local_184 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_184);
        }
        if (FVar14.Data == pFVar12) break;
        ::FString::ConcatFF(&local_a8,&local_158,(FString *)FVar14.Data);
        ::FString::FString(&local_138,&local_a8);
        pvVar3 = local_148;
        local_180 = (FScriptContainerElement *)&local_128;
        local_128.Data = (FScriptContainerElement *)0x0;
        lVar15 = (longlong)(int)local_140;
        local_120 = CONCAT44(local_120._4_4_,(int)local_140);
        if ((int)local_140 == 0) {
          local_120 = (ulonglong)local_140 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_140,0,&local_128,(int)local_140,
                     (int *)((longlong)&local_120 + 4));
          memcpy(local_128.Data,pvVar3,lVar15 * 2);
        }
        pFVar11 = (param_1->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_138) &&
            ((FScriptContainerElement *)&local_138 < pFVar11 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_138.Data.AllocatorInstance.Data;
        *(int *)(pFVar11 + 8) = local_138.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_138.Data.ArrayMax;
        local_180 = pFVar11 + 0x10;
        *(undefined8 *)local_180 = 0;
        *(FScriptContainerElement **)local_180 = local_128.Data;
        *(undefined4 *)(pFVar11 + 0x18) = (undefined4)local_120;
        *(undefined4 *)(pFVar11 + 0x1c) = local_120._4_4_;
        local_120 = 0;
        local_128.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        FVar14.Data = FVar14.Data + 0x10;
      }
      iVar6 = GetNumStencilLayers(this);
      if ((0 < iVar6) && (this->bAddDefaultLayer != false)) {
        ::FString::ConcatFC(&local_98,&local_158,L"DefaultLayer");
        ::FString::FString(&local_118,&local_98);
        pvVar3 = local_148;
        local_180 = (FScriptContainerElement *)&local_108;
        local_108.Data = (FScriptContainerElement *)0x0;
        lVar15 = (longlong)(int)local_140;
        local_100 = CONCAT44(local_100._4_4_,(int)local_140);
        if ((int)local_140 == 0) {
          local_100 = (ulonglong)local_140 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_140,0,&local_108,(int)local_140,
                     (int *)((longlong)&local_100 + 4));
          memcpy(local_108.Data,pvVar3,lVar15 * 2);
        }
        pFVar12 = (param_1->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar12 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_118.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_118.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_118.Data.ArrayMax;
        local_180 = pFVar12 + 0x10;
        *(undefined8 *)local_180 = 0;
        *(FScriptContainerElement **)local_180 = local_108.Data;
        *(undefined4 *)(pFVar12 + 0x18) = (undefined4)local_100;
        *(undefined4 *)(pFVar12 + 0x1c) = local_100._4_4_;
        local_100 = 0;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_d0.Data = (FScriptContainerElement *)0x0;
      iVar6 = (this->UniqueStencilLayerNames).ArrayNum;
      pFVar12 = (this->UniqueStencilLayerNames).AllocatorInstance.Data;
      local_c8 = iVar6;
      if (iVar6 == 0) {
        local_c4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,0,&local_d0,iVar6,&local_c4);
        ConstructItems<FString,FString,int>(local_d0.Data,(FString *)pFVar12,iVar6);
      }
      iVar6 = local_c8;
      pFVar12 = local_d0.Data + (longlong)local_c8 * 0x10;
      FVar14.Data = local_d0.Data;
      while( true ) {
        if (local_c8 != iVar6) {
          local_183[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_183);
        }
        if (FVar14.Data == pFVar12) break;
        ::FString::ConcatFF(&local_88,&local_158,(FString *)FVar14.Data);
        ::FString::FString(&local_f8,&local_88);
        pvVar3 = local_148;
        local_180 = (FScriptContainerElement *)&local_e8;
        local_e8.Data = (FScriptContainerElement *)0x0;
        lVar15 = (longlong)(int)local_140;
        local_e0 = CONCAT44(local_e0._4_4_,(int)local_140);
        if ((int)local_140 == 0) {
          local_e0 = (ulonglong)local_140 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_140,0,&local_e8,(int)local_140,(int *)((longlong)&local_e0 + 4))
          ;
          memcpy(local_e8.Data,pvVar3,lVar15 * 2);
        }
        pFVar11 = (param_1->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < pFVar11 + (longlong)param_1->ArrayMax * 0x20))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_f8.Data.AllocatorInstance.Data;
        *(int *)(pFVar11 + 8) = local_f8.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_f8.Data.ArrayMax;
        local_180 = pFVar11 + 0x10;
        *(undefined8 *)local_180 = 0;
        *(FScriptContainerElement **)local_180 = local_e8.Data;
        *(undefined4 *)(pFVar11 + 0x18) = (undefined4)local_e0;
        *(undefined4 *)(pFVar11 + 0x1c) = local_e0._4_4_;
        local_e0 = 0;
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        FVar14.Data = FVar14.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_d0.Data,local_c8);
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      DestructItems<FString,int>((FString *)local_178.Data,(int)local_170);
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      local_d8 = local_d8 + 1;
    } while (local_d8 < local_c0);
  }
  return;
}

// GetCameraIndexForRenderPass @ 14dddf340

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

int __thiscall
UMoviePipelineDeferredPassBase::GetCameraIndexForRenderPass
          (UMoviePipelineDeferredPassBase *this,int param_1)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UMoviePipeline *pUVar7;
  UMoviePipeline *pUVar8;
  UMoviePipelinePrimaryConfig *pUVar9;
  UMoviePipelineSetting *pUVar10;
  UClass *local_res18;
  
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar8->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar7->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar7->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar7);
  local_res18 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar10 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_res18,pUVar9,pUVar2);
  iVar6 = -1;
  if ((char)pUVar10[1]._padding_ != '\0') {
    iVar6 = param_1;
  }
  return iVar6;
}

// GetCameraInfo @ 14dddf440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FImagePassCameraViewData * __thiscall
UMoviePipelineDeferredPassBase::GetCameraInfo
          (UMoviePipelineDeferredPassBase *this,FImagePassCameraViewData *__return_storage_ptr__,
          FMoviePipelineRenderPassMetrics *param_1,IViewCalcPayload *param_2)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UMoviePipeline *pUVar8;
  UMoviePipeline *pUVar9;
  FImagePassCameraViewData *pFVar10;
  UWorld *this_00;
  APlayerController *pAVar11;
  UClass *pUVar12;
  TRotator<double> *pTVar13;
  UCineCameraComponent *pUVar14;
  undefined1 auStackY_ac8 [32];
  UCineCameraComponent *local_a80;
  TRotator<double> local_a78;
  TVector<double>_u_0 local_a60;
  FImagePassCameraViewData *local_a48;
  TQuat<double> local_a38;
  TRotator<double> local_a18;
  TVector<double>_u_0 local_9f8;
  TRotator<double> local_9e0 [82];
  void *local_220;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  char local_198;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  void *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ac8;
  local_a48 = __return_storage_ptr__;
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar9->CurrentShotIndex;
  uVar6 = 0;
  if ((int)uVar1 < (pUVar8->ActiveShotList).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FImagePassCameraViewData *)(*pcVar4)();
    return pFVar10;
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar8->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  iVar7 = (**(code **)(this->_padding_ + 0x450))(this);
  if (iVar7 == 1) {
    UMoviePipelineImagePassBase::GetCameraInfo
              ((UMoviePipelineImagePassBase *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_9f8._s_0);
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a80 = (UCineCameraComponent *)0x0;
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  UMoviePipeline::GetSidecarCameraData
            (pUVar8,pUVar2,(param_1->OutputState).CameraIndex,(FMinimalViewInfo *)&local_9f8._s_0,
             (UCameraComponent **)&local_a80);
  if (local_a80 == (UCineCameraComponent *)0x0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    goto LAB_14dddf73b;
  }
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  this_00 = (UWorld *)(**(code **)(pUVar8->_padding_ + 0x180))(pUVar8);
  pAVar11 = UWorld::GetFirstPlayerController(this_00);
  local_d8 = (**(code **)(pAVar11->_padding_ + 0x7e0))(pAVar11);
  pUVar14 = local_a80;
  if (local_a80 == (UCineCameraComponent *)0x0) {
LAB_14dddf620:
    pUVar14 = (UCineCameraComponent *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    lVar3 = *(longlong *)&pUVar14->field_0x10;
    iVar7 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar12->_padding_)) goto LAB_14dddf620;
  }
  if (pUVar14 != (UCineCameraComponent *)0x0) {
    UE::MoviePipeline::GetMetadataFromCineCamera
              (pUVar14,(FString *)&this->_padding_,(FString *)&this->_padding_,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_128);
    local_a60._s_0.X = local_9f8._s_0.X;
    local_a60._s_0.Y = local_9f8._s_0.Y;
    local_a60._s_0.Z = local_9f8._s_0.Z;
    local_a78.Pitch = local_9e0[0].Pitch;
    local_a78.Yaw = local_9e0[0].Yaw;
    local_a78.Roll = local_9e0[0].Roll;
    if (local_198 != '\0') {
      local_a60._s_0.X = local_1d8;
      local_a60._s_0.Y = dStack_1d0;
      local_a60._s_0.Z = local_1c8;
      local_a38.X = local_1f8;
      local_a38.Y = dStack_1f0;
      local_a38.Z = local_1e8;
      local_a38.W = dStack_1e0;
      pTVar13 = UE::Math::TRotator<double>::TRotator<double>(&local_a18,&local_a38);
      local_a78.Pitch = pTVar13->Pitch;
      local_a78.Yaw = pTVar13->Yaw;
      local_a78.Roll = pTVar13->Roll;
    }
    UE::MoviePipeline::GetMetadataFromCameraLocRot
              ((FString *)&this->_padding_,(FString *)&this->_padding_,
               (TVector<double> *)&local_9f8._s_0,local_9e0,(TVector<double> *)&local_a60._s_0,
               &local_a78,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_128);
  }
LAB_14dddf73b:
  UE::MoviePipeline::FImagePassCameraViewData::FImagePassCameraViewData
            (__return_storage_ptr__,(FImagePassCameraViewData *)&local_9f8._s_0);
  local_e0 = 0;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar7 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free(local_220);
  }
  return __return_storage_ptr__;
}

// GetCameraName @ 14dddfa60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMoviePipelineDeferredPassBase::GetCameraName
          (UMoviePipelineDeferredPassBase *this,FString *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  UMoviePipeline *pUVar5;
  UMoviePipeline *pUVar6;
  FString *pFVar7;
  UMoviePipelinePrimaryConfig *pUVar8;
  UMoviePipelineSetting *pUVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  UClass *local_res10;
  
  local_res10 = (UClass *)__return_storage_ptr__;
  pUVar5 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar6 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar6->CurrentShotIndex;
  uVar11 = 0;
  if ((int)uVar1 < (pUVar5->ActiveShotList).ArrayNum) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar5->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pUVar5 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar8 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar5);
  local_res10 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar9 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)&local_res10,pUVar8,pUVar2);
  iVar12 = -1;
  if ((char)pUVar9[1]._padding_ != '\0') {
    iVar12 = param_1;
  }
  if ((iVar12 < 0) || ((pUVar2->SidecarCameras).ArrayNum <= iVar12)) {
    pFVar10 = (FScriptContainerElement *)&pUVar2->InnerName;
  }
  else {
    if (iVar12 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar10 = (pUVar2->SidecarCameras).AllocatorInstance.Data + ((longlong)iVar12 * 5 + 3) * 8;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)pFVar10);
  return __return_storage_ptr__;
}

// GetCameraNameOverride @ 14dddfbd0

FString * __thiscall
UMoviePipelineDeferredPassBase::GetCameraNameOverride
          (UMoviePipelineDeferredPassBase *this,FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetEffectiveOutputResolutionForCamera @ 14dddfdf0

TIntPoint<int> __thiscall
UMoviePipelineDeferredPassBase::GetEffectiveOutputResolutionForCamera
          (UMoviePipelineDeferredPassBase *this,int param_1)

{
  TIntPoint<int>_u_0 TVar1;
  undefined4 in_register_00000014;
  
  TVar1._s_0.Y = in_register_00000014;
  TVar1._s_0.X = param_1;
  (**(code **)(this->_padding_ + 0x480))();
  return (TIntPoint<int>)TVar1;
}

// GetExposureSceneViewStateInterface @ 14dddfec0

FSceneViewStateInterface * __thiscall
UMoviePipelineDeferredPassBase::GetExposureSceneViewStateInterface
          (UMoviePipelineDeferredPassBase *this,IViewCalcPayload *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FSceneViewStateInterface *pFVar3;
  FPerTile *pFVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == (IViewCalcPayload *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payload",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                       ,0x1f5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar6 = 0;
  if (0 < (int)*(uint *)param_1) {
    uVar6 = *(uint *)param_1;
  }
  uVar5 = 0;
  if ((int)uVar6 < (this->CameraViewStateData).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
           ::Find((TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                   *)((this->CameraViewStateData).AllocatorInstance.Data +
                     (longlong)(int)uVar6 * 0x58),(TIntPoint<int>)0xffffffffffffffff);
  if (pFVar4 != (FPerTile *)0x0) {
    if ((pFVar4->SceneViewStates).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FSceneViewStateInterface **)((pFVar4->SceneViewStates).AllocatorInstance.Data + 8);
  }
  return (FSceneViewStateInterface *)0x0;
}

// GetManualExposureEnabledForCamera @ 14dde1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
UMoviePipelineDeferredPassBase::GetManualExposureEnabledForCamera
          (UMoviePipelineDeferredPassBase *this,int param_1)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  AActor *pAVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UMoviePipeline *pUVar9;
  UMoviePipeline *pUVar10;
  UWorld *this_00;
  APlayerController *pAVar11;
  UCameraComponent *pUVar12;
  undefined1 auStackY_938 [32];
  UCameraComponent *local_908 [2];
  FMinimalViewInfo local_8f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar10 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar10->CurrentShotIndex;
  uVar7 = 0;
  if ((int)uVar1 < (pUVar9->ActiveShotList).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar9->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  iVar8 = (**(code **)(this->_padding_ + 0x450))(this);
  if (iVar8 == 1) {
    pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    this_00 = (UWorld *)(**(code **)(pUVar9->_padding_ + 0x180))(pUVar9);
    pAVar11 = UWorld::GetFirstPlayerController(this_00);
    pAVar3 = (((pAVar11->PlayerCameraManager).field0_0x0.DebugPtr)->ViewTarget).Target.field0_0x0.
             DebugPtr;
    if ((((pAVar3 != (AActor *)0x0) &&
         (pUVar12 = MovieSceneHelpers::CameraComponentFromActor(pAVar3),
         pUVar12 != (UCameraComponent *)0x0)) && (0.0 < pUVar12->PostProcessBlendWeight)) &&
       ((pUVar12->PostProcessSettings).bOverride_AutoExposureMethod != 0)) {
      return (pUVar12->PostProcessSettings).AutoExposureMethod.Value == '\x02';
    }
  }
  else {
    FMinimalViewInfo::FMinimalViewInfo(&local_8f8);
    pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::GetSidecarCameraData(pUVar9,pUVar2,param_1,&local_8f8,local_908);
    if ((0.0 < local_8f8.PostProcessBlendWeight) &&
       (local_8f8.PostProcessSettings.bOverride_AutoExposureMethod != 0)) {
      if (local_8f8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data ==
          (FScriptContainerElement *)0x0) {
        return local_8f8.PostProcessSettings.AutoExposureMethod.Value == '\x02';
      }
      FMemory::Free(local_8f8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
      return local_8f8.PostProcessSettings.AutoExposureMethod.Value == '\x02';
    }
    if (local_8f8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetNameForPostProcessMaterial @ 14dde21a0

FString * __thiscall
UMoviePipelineDeferredPassBase::GetNameForPostProcessMaterial
          (UMoviePipelineDeferredPassBase *this,FString *__return_storage_ptr__,
          UMaterialInterface *param_1)

{
  FMoviePipelinePostProcessPass *pFVar1;
  int iVar2;
  bool bVar3;
  FMoviePipelinePostProcessPass *pFVar4;
  FName local_res8;
  FString *local_res10;
  UMaterialInterface *local_res18 [2];
  
  local_res8 = (FName)param_1->_padding_;
  local_res10 = __return_storage_ptr__;
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  pFVar4 = (FMoviePipelinePostProcessPass *)
           (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  iVar2 = (this->AdditionalPostProcessMaterials).ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  local_res18[0] = param_1;
  while( true ) {
    if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = `UMoviePipelineDeferredPassBase::GetNameForPostProcessMaterial'::__l2::<lambda_1>::
            operator()(local_res18,pFVar4);
    if (bVar3) {
      if ((pFVar4 != (FMoviePipelinePostProcessPass *)0x0) && (1 < (pFVar4->Name).Data.ArrayNum)) {
        ::FString::operator=(__return_storage_ptr__,&pFVar4->Name);
      }
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 1;
  }
  return __return_storage_ptr__;
}

// GetNumCamerasToRender @ 14dde2260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

int __thiscall
UMoviePipelineDeferredPassBase::GetNumCamerasToRender(UMoviePipelineDeferredPassBase *this)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UMoviePipeline *pUVar7;
  UMoviePipeline *pUVar8;
  UMoviePipelinePrimaryConfig *pUVar9;
  UMoviePipelineSetting *pUVar10;
  UClass *local_res10;
  
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar8->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar7->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar7->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar7);
  local_res10 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar10 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_res10,pUVar9,pUVar2);
  if ((char)pUVar10[1]._padding_ != '\0') {
    return (pUVar2->SidecarCameras).ArrayNum;
  }
  return 1;
}

// GetNumStencilLayers @ 14dde23e0

int __thiscall
UMoviePipelineDeferredPassBase::GetNumStencilLayers(UMoviePipelineDeferredPassBase *this)

{
  int iVar1;
  int iVar2;
  FName _Src;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FName *pFVar6;
  int iVar7;
  size_t _Size;
  FName *pFVar8;
  FUtf8String *local_res10;
  FSoftObjectPath local_48;
  
  bVar3 = IsUsingDataLayers(this);
  if (bVar3) {
    iVar7 = 0;
    pFVar6 = (FName *)(this->DataLayers).AllocatorInstance.Data;
    iVar1 = (this->DataLayers).ArrayNum;
    pFVar8 = pFVar6 + (longlong)iVar1 * 4;
    while( true ) {
      if ((this->DataLayers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar6 == pFVar8) break;
      local_48.AssetPath.PackageName = *pFVar6;
      local_48.AssetPath.AssetName = pFVar6[1];
      local_res10 = &local_48.SubPathString;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.SubPathString.Data.ArrayNum = pFVar6[3].ComparisonIndex.Value;
      _Size = (size_t)local_48.SubPathString.Data.ArrayNum;
      _Src = pFVar6[2];
      if (local_48.SubPathString.Data.ArrayNum == 0) {
        local_48.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_48.SubPathString.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum
                   ,&local_48.SubPathString.Data.ArrayMax);
        memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
      }
      pUVar4 = FSoftObjectPath::TryLoad(&local_48,(FUObjectSerializeContext *)0x0);
      if (pUVar4 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          iVar7 = iVar7 + 1;
        }
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar6 = pFVar6 + 4;
    }
  }
  else {
    iVar7 = (this->ActorLayers).ArrayNum;
  }
  return iVar7;
}

// GetOutputFileSortingOrder @ 14dde2e30

int __thiscall
UMoviePipelineDeferredPassBase::GetOutputFileSortingOrder(UMoviePipelineDeferredPassBase *this)

{
  return 0;
}

// GetOverscannedResolutionForCamera @ 14dde2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall
UMoviePipelineDeferredPassBase::GetOverscannedResolutionForCamera
          (UMoviePipelineDeferredPassBase *this,int param_1)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UMoviePipeline *pUVar7;
  UMoviePipelineExecutorShot *pUVar8;
  UMoviePipeline *pUVar9;
  TIntPoint<int> TVar10;
  UWorld *this_00;
  APlayerController *pAVar11;
  FMinimalViewInfo *pFVar12;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar13;
  int in_R8D;
  float in_XMM2_Da;
  undefined1 auStackY_958 [32];
  UCameraComponent *local_928 [2];
  FMinimalViewInfo local_918;
  ulonglong local_48;
  
  TVar13._s_0.Y = in_register_00000014;
  TVar13._s_0.X = param_1;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_958;
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar8 = (UMoviePipelineExecutorShot *)UMoviePipeline::GetPipelinePrimaryConfig(pUVar7);
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar9->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar7->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar10.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
      return (TIntPoint<int>)TVar10.field0_0x0;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar7->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  bVar4 = UMoviePipeline::HasCachedCameraOverscan(pUVar7,in_R8D);
  if (bVar4) {
    pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::GetCachedCameraOverscan(pUVar7,in_R8D);
    local_918.Overscan = in_XMM2_Da;
  }
  else {
    FMinimalViewInfo::FMinimalViewInfo(&local_918);
    iVar6 = (**(code **)(this->_padding_ + 0x450))(this);
    if (iVar6 == 1) {
      pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      this_00 = (UWorld *)(**(code **)(pUVar7->_padding_ + 0x180))(pUVar7);
      pAVar11 = UWorld::GetFirstPlayerController(this_00);
      pFVar12 = (FMinimalViewInfo *)
                (**(code **)(((pAVar11->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798
                            ))();
      FMinimalViewInfo::operator=(&local_918,pFVar12);
    }
    else {
      pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      UMoviePipeline::GetSidecarCameraData(pUVar7,pUVar2,in_R8D,&local_918,local_928);
    }
    pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::CacheCameraOverscan(pUVar7,in_R8D,local_918.Overscan);
    if (local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  UMoviePipelineBlueprintLibrary::GetOverscannedResolution
            ((UMoviePipelinePrimaryConfig *)TVar13,pUVar8,local_918.Overscan);
  return (TIntPoint<int>)TVar13;
}

// GetPrivateStaticClass @ 14dde3ba0

UClass * __cdecl UMoviePipelineDeferredPassBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPassBase",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPassBase,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPassBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineDeferredPassBase>,local_res8,
               UMoviePipelineImagePassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.InnerSingleton;
}

// GetRenderPassMetricsForCamera @ 14dde4560

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineRenderPassMetrics * __thiscall
UMoviePipelineDeferredPassBase::GetRenderPassMetricsForCamera
          (UMoviePipelineDeferredPassBase *this,
          FMoviePipelineRenderPassMetrics *__return_storage_ptr__,int param_1,
          FMoviePipelineRenderPassMetrics *param_2)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  UMoviePipeline *pUVar5;
  UMoviePipelinePrimaryConfig *pUVar6;
  UMoviePipeline *pUVar7;
  FMoviePipelineRenderPassMetrics *pFVar8;
  TIntPoint<int> *pTVar9;
  uint uVar10;
  FMoviePipelineRenderPassMetrics *local_res10;
  
  local_res10 = __return_storage_ptr__;
  pUVar5 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar6 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar5);
  pUVar5 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar7 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar7->CurrentShotIndex;
  uVar10 = 0;
  if ((int)uVar1 < (pUVar5->ActiveShotList).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FMoviePipelineRenderPassMetrics *)(*pcVar3)();
      return pFVar8;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar5->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  if (pUVar6 == (UMoviePipelinePrimaryConfig *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimaryConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                       ,0xa6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FMoviePipelineRenderPassMetrics *)(*pcVar3)();
      return pFVar8;
    }
  }
  if (pUVar2 == (UMoviePipelineExecutorShot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentShot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FMoviePipelineRenderPassMetrics *)(*pcVar3)();
      return pFVar8;
    }
  }
  pTVar9 = (TIntPoint<int> *)(**(code **)(this->_padding_ + 0x480))(this,&local_res10,param_1);
  UE::MoviePipeline::GetRenderPassMetrics(__return_storage_ptr__,pUVar6,pUVar2,param_2,pTVar9);
  return __return_storage_ptr__;
}

// GetSceneViewStateInterface @ 14dde5bd0

FSceneViewStateInterface * __thiscall
UMoviePipelineDeferredPassBase::GetSceneViewStateInterface
          (UMoviePipelineDeferredPassBase *this,IViewCalcPayload *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSceneViewStateInterface *pFVar3;
  FPerTile *pFVar4;
  uint uVar5;
  FScriptContainerElement *this_00;
  TIntPoint<int>_u_0 TVar6;
  uint uVar7;
  
  if (param_1 == (IViewCalcPayload *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payload",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                       ,0x1e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
      return pFVar3;
    }
  }
  TVar6 = (TIntPoint<int>_u_0)0x0;
  uVar7 = 0;
  if (0 < (int)*(uint *)param_1) {
    uVar7 = *(uint *)param_1;
  }
  uVar5 = 0;
  if ((int)uVar7 < (this->CameraViewStateData).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = (this->CameraViewStateData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58;
  if (*(int *)(this_00 + 8) - *(int *)(this_00 + 0x34) != 1) {
    TVar6 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)(param_1 + 4))->_s_0;
  }
  pFVar4 = TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
           ::Find((TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                   *)this_00,(TIntPoint<int>)TVar6);
  pFVar3 = (FSceneViewStateInterface *)0x0;
  if (pFVar4 != (FPerTile *)0x0) {
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar5 = 0;
    if ((int)uVar7 < (pFVar4->SceneViewStates).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSceneViewStateInterface *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = *(FSceneViewStateInterface **)
              ((pFVar4->SceneViewStates).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38 + 8);
  }
  return pFVar3;
}

// GetStencilLayerNames @ 14dde60a0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineDeferredPassBase::GetStencilLayerNames
          (UMoviePipelineDeferredPassBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->UniqueStencilLayerNames).ArrayNum;
  pFVar2 = (this->UniqueStencilLayerNames).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FString,FString,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  }
  return __return_storage_ptr__;
}

// GetValidDataLayerByIndex @ 14dde61e0

FSoftObjectPath * __thiscall
UMoviePipelineDeferredPassBase::GetValidDataLayerByIndex
          (UMoviePipelineDeferredPassBase *this,FSoftObjectPath *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  FName _Src;
  UObject *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  int iVar6;
  size_t _Size;
  FName *pFVar7;
  FUtf8String *local_res8;
  FSoftObjectPath local_60;
  
  iVar6 = 0;
  pFVar5 = (FName *)(this->DataLayers).AllocatorInstance.Data;
  iVar1 = (this->DataLayers).ArrayNum;
  pFVar7 = pFVar5 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->DataLayers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar7) break;
    local_60.AssetPath.PackageName = *pFVar5;
    local_60.AssetPath.AssetName = pFVar5[1];
    local_res8 = &local_60.SubPathString;
    local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.SubPathString.Data.ArrayNum = pFVar5[3].ComparisonIndex.Value;
    _Size = (size_t)local_60.SubPathString.Data.ArrayNum;
    _Src = pFVar5[2];
    if (local_60.SubPathString.Data.ArrayNum == 0) {
      local_60.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_60.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_60.SubPathString,local_60.SubPathString.Data.ArrayNum,
                 &local_60.SubPathString.Data.ArrayMax);
      memcpy(local_60.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
    }
    pUVar3 = FSoftObjectPath::TryLoad(&local_60,(FUObjectSerializeContext *)0x0);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        if (param_1 == iVar6) {
          (__return_storage_ptr__->AssetPath).PackageName = local_60.AssetPath.PackageName;
          (__return_storage_ptr__->AssetPath).AssetName = local_60.AssetPath.AssetName;
          (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
               local_60.SubPathString.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->SubPathString).Data.ArrayNum =
               local_60.SubPathString.Data.ArrayNum;
          (__return_storage_ptr__->SubPathString).Data.ArrayMax =
               local_60.SubPathString.Data.ArrayMax;
          return __return_storage_ptr__;
        }
        iVar6 = iVar6 + 1;
      }
    }
    if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 4;
  }
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsActorInAnyStencilLayer @ 14dde7920

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMoviePipelineDeferredPassBase::IsActorInAnyStencilLayer
          (UMoviePipelineDeferredPassBase *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FName _Src;
  bool bVar5;
  bool bVar6;
  UDataLayerAsset *pUVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  size_t _Size;
  FName *pFVar12;
  FUtf8String *local_res18;
  FSoftObjectPath local_48;
  
  bVar6 = false;
  bVar5 = IsUsingDataLayers(this);
  if (bVar5) {
    pFVar10 = (FName *)(this->DataLayers).AllocatorInstance.Data;
    iVar3 = (this->DataLayers).ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar3 * 4;
    while( true ) {
      if ((this->DataLayers).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar10 == pFVar12) break;
      local_48.AssetPath.PackageName = *pFVar10;
      local_48.AssetPath.AssetName = pFVar10[1];
      local_res18 = &local_48.SubPathString;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.SubPathString.Data.ArrayNum = pFVar10[3].ComparisonIndex.Value;
      _Size = (size_t)local_48.SubPathString.Data.ArrayNum;
      _Src = pFVar10[2];
      if (local_48.SubPathString.Data.ArrayNum == 0) {
        local_48.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_48.SubPathString.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum
                   ,&local_48.SubPathString.Data.ArrayMax);
        memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
      }
      pUVar7 = (UDataLayerAsset *)
               FSoftObjectPath::TryLoad(&local_48,(FUObjectSerializeContext *)0x0);
      if (pUVar7 != (UDataLayerAsset *)0x0) {
        pUVar8 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
        iVar4 = (int)pUVar8->_padding_;
        if ((iVar4 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar8->_padding_)) {
          bVar6 = AActor::ContainsDataLayer(param_1,pUVar7);
          bVar6 = !bVar6;
          if (!bVar6) {
            if (local_48.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
               ) {
              return bVar6;
            }
            FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
            return bVar6;
          }
        }
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar10 = pFVar10 + 4;
    }
    return bVar6;
  }
  pFVar11 = (this->ActorLayers).AllocatorInstance.Data;
  iVar3 = (this->ActorLayers).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ActorLayers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FActorLayer_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar11 == pFVar1) break;
    pFVar9 = (param_1->Layers).AllocatorInstance.Data;
    pFVar2 = pFVar9 + (longlong)(param_1->Layers).ArrayNum * 8;
    if (pFVar9 != pFVar2) {
      do {
        if (*(longlong *)pFVar9 == *(longlong *)pFVar11) {
          return false;
        }
        pFVar9 = pFVar9 + 8;
      } while (pFVar9 != pFVar2);
    }
    bVar6 = true;
    pFVar11 = pFVar11 + 8;
  }
  return bVar6;
}

// IsActorInLayer @ 14dde7b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMoviePipelineDeferredPassBase::IsActorInLayer
          (UMoviePipelineDeferredPassBase *this,AActor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UDataLayerAsset *pUVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FSoftObjectPath local_28;
  
  bVar4 = IsUsingDataLayers(this);
  if (bVar4) {
    GetValidDataLayerByIndex(this,&local_28,param_2);
    pUVar7 = (UDataLayerAsset *)FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
    if (pUVar7 != (UDataLayerAsset *)0x0) {
      pUVar8 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        bVar4 = AActor::ContainsDataLayer(param_1,pUVar7);
        if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
        }
        return bVar4;
      }
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar6 = 0;
    if (param_2 < (this->ActorLayers).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar9 = (param_1->Layers).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)(param_1->Layers).ArrayNum * 8;
    if (pFVar9 != pFVar1) {
      do {
        if (*(longlong *)pFVar9 ==
            *(longlong *)((this->ActorLayers).AllocatorInstance.Data + (longlong)param_2 * 8)) {
          return true;
        }
        pFVar9 = pFVar9 + 8;
      } while (pFVar9 != pFVar1);
      return false;
    }
  }
  return false;
}

// IsAntiAliasingSupported @ 14dde7cb0

bool __thiscall
UMoviePipelineDeferredPassBase::IsAntiAliasingSupported(UMoviePipelineDeferredPassBase *this)

{
  return this->bDisableMultisampleEffects == false;
}

// IsAutoExposureAllowed @ 14dde7cf0

bool __thiscall
UMoviePipelineDeferredPassBase::IsAutoExposureAllowed
          (UMoviePipelineDeferredPassBase *this,FMoviePipelineRenderPassMetrics *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  if ((param_1->TileCounts).field0_0x0._s_0.Y * (param_1->TileCounts).field0_0x0._s_0.X == 1) {
    return true;
  }
  iVar7 = (this->CameraViewStateData).ArrayNum;
  if (iVar7 != 0) {
    if ((iVar7 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->CameraViewStateData).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + 8) != *(int *)(pFVar1 + 0x34)) {
      pFVar6 = *(FScriptContainerElement **)(pFVar1 + 0x40);
      if (*(FScriptContainerElement **)(pFVar1 + 0x40) == (FScriptContainerElement *)0x0) {
        pFVar6 = pFVar1 + 0x38;
      }
      iVar7 = *(int *)(pFVar6 + ((ulonglong)(*(int *)(pFVar1 + 0x48) - 1) & 0xbe40531a) * 4);
      if (iVar7 != -1) {
        while( true ) {
          uVar2 = *(undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)pFVar1);
          if (((int)uVar2 == -1) && ((int)((ulonglong)uVar2 >> 0x20) == -1)) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)pFVar1);
          if (iVar7 == -1) {
            return false;
          }
        }
        if (iVar7 != -1) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsUsingDataLayers @ 14dde7ec0

bool __thiscall
UMoviePipelineDeferredPassBase::IsUsingDataLayers(UMoviePipelineDeferredPassBase *this)

{
  int iVar1;
  int iVar2;
  FName _Src;
  UObject *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  int iVar6;
  size_t _Size;
  FName *pFVar7;
  FUtf8String *local_res8;
  FSoftObjectPath local_48;
  
  iVar6 = 0;
  pFVar5 = (FName *)(this->DataLayers).AllocatorInstance.Data;
  iVar1 = (this->DataLayers).ArrayNum;
  pFVar7 = pFVar5 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->DataLayers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar7) break;
    local_48.AssetPath.PackageName = *pFVar5;
    local_48.AssetPath.AssetName = pFVar5[1];
    local_res8 = &local_48.SubPathString;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = pFVar5[3].ComparisonIndex.Value;
    _Size = (size_t)local_48.SubPathString.Data.ArrayNum;
    _Src = pFVar5[2];
    if (local_48.SubPathString.Data.ArrayNum == 0) {
      local_48.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_48.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum,
                 &local_48.SubPathString.Data.ArrayMax);
      memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
    }
    pUVar3 = FSoftObjectPath::TryLoad(&local_48,(FUObjectSerializeContext *)0x0);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        iVar6 = iVar6 + 1;
      }
    }
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 4;
  }
  return 0 < iVar6;
}

// MakeForwardingEndpoint @ 14dde8230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> *
__thiscall
UMoviePipelineDeferredPassBase::MakeForwardingEndpoint
          (UMoviePipelineDeferredPassBase *this,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *__return_storage_ptr__,FMoviePipelinePassIdentifier *param_1,
          FMoviePipelineRenderPassMetrics *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  FMoviePipelineOutputMerger *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  FAccumulatorInstance *pFVar12;
  FSharedReferencer<1> FVar13;
  FImagePixelDataPayload *pFVar14;
  FSharedReferencer<1> FVar15;
  FMoviePipelinePassIdentifier *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableAccumulator> FVar22;
  TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> *pTVar23;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *pTVar24;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  UMoviePipeline *pUVar25;
  undefined8 *puVar26;
  FColor_u_0 local_res20 [2];
  FName local_198;
  FName local_180;
  LARGE_INTEGER local_178 [2];
  FName local_168;
  TReferenceControllerBase<1> *pTStack_160;
  FMoviePipelineOutputMerger *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 local_128;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> local_118;
  TSharedRef<FImagePixelDataPayload,1> local_108;
  FMoviePipelinePassIdentifier *local_f0;
  FStatMessage local_e8;
  UMoviePipelineDeferredPassBase *local_d8;
  FImagePixelDataPayload *local_d0;
  TReferenceControllerBase<1> *local_c8;
  FName local_c0;
  TReferenceControllerBase<1> *local_b8;
  FMoviePipelineOutputMerger *local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  FAccumulatorInstance *local_78;
  TReferenceControllerBase<1> *local_70;
  FName local_68;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> local_60 [2];
  
  local_118.Object = (FAccumulatorInstance *)0x0;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar22 = StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator;
  local_f0 = param_1;
  if (StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator ==
      (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableAccumulator>)0x0) {
    pFVar21 = ::FName::FName(&local_68,"STAT_MoviePipeline_WaitForAvailableAccumulator");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableAccumulator>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator,*pFVar21,
                        L"STAT_MoviePipeline_WaitForAvailableAccumulator","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar11 = false;
  bVar10 = false;
  bVar19 = false;
  FVar4 = *(FName *)FVar22;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar10 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180 = FVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                   ,0x376);
        bVar10 = true;
        bVar19 = true;
      }
    }
    bVar11 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar11 = true;
      local_198 = FVar4;
    }
  }
  if (((this->AccumulatorPool).Object == (FAccumulatorPool *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    pTVar23 = (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
               *)(*pcVar9)();
    return pTVar23;
  }
  pTVar24 = FAccumulatorPool::BlockAndGetAccumulator_GameThread
                      ((this->AccumulatorPool).Object,local_60,
                       (param_2->OutputState).OutputFrameNumber,param_1);
  if (&local_118 != pTVar24) {
    local_118.Object = pTVar24->Object;
    pTVar24->Object = (FAccumulatorInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_118.SharedReferenceCount,&pTVar24->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].SharedReferenceCount.ReferenceController);
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (local_198 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e8.NameAndInfo.Index = local_198.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = local_198.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_178);
      local_e8.StatData.Pad = (uchar  [8])(local_178[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  MakeShared<FImagePixelDataPayload,1>(&local_108);
  pFVar14 = local_108.Object;
  ::FString::operator=(&((local_108.Object)->PassIdentifier).Name,&param_1->Name);
  ::FString::operator=(&(pFVar14->PassIdentifier).CameraName,&param_1->CameraName);
  FMoviePipelineRenderPassMetrics::operator=(&(local_108.Object)->SampleState,param_2);
  iVar20 = (**(code **)(this->_padding_ + 1000))(this);
  (local_108.Object)->SortingOrder = iVar20 + 1;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  pTStack_160 = (TReferenceControllerBase<1> *)0x0;
  local_158 = (FMoviePipelineOutputMerger *)0x0;
  pTStack_150 = (TReferenceControllerBase<1> *)0x0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_130 = 0;
  local_128 = 0;
  pUVar25 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pFVar12 = local_118.Object;
  pFVar5 = (pUVar25->OutputBuilder).Object;
  pTVar6 = (pUVar25->OutputBuilder).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    pTStack_150 = pTVar6;
  }
  pTVar6 = pTStack_150;
  local_158 = pFVar5;
  if ((local_118.Object == (FAccumulatorInstance *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    pTVar23 = (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
               *)(*pcVar9)();
    return pTVar23;
  }
  local_180 = (FName)(pFVar12->Accumulator).Object;
  pTVar7 = (pFVar12->Accumulator).SharedReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168 = local_180;
  pTVar17 = pTStack_160;
  if (pTVar7 != pTStack_160) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar17 = pTVar7;
    if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTStack_160->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTStack_160->_padding_ + 8))(pTStack_160,1);
      }
    }
  }
  pTStack_160 = pTVar17;
  pTVar17 = pTStack_160;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FVar15.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
  FVar13.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
  local_148 = this->bAccumulatorIncludesAlpha;
  local_res20[0]._s_0.B = local_148;
  local_178[0].QuadPart = (LONGLONG)local_108.Object;
  local_d0 = local_108.Object;
  local_c8 = local_108.SharedReferenceCount.ReferenceController;
  if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = local_180;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_9c = local_144;
  local_94 = local_13c;
  local_8c = local_134;
  local_88 = (undefined4)local_130;
  local_84 = local_130._4_4_;
  local_80 = (undefined4)local_128;
  local_7c = local_128._4_4_;
  local_78 = pFVar12;
  local_70 = local_118.SharedReferenceCount.ReferenceController;
  if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  local_d8 = this;
  local_b8 = pTVar17;
  local_b0 = pFVar5;
  local_a8 = pTVar6;
  local_a0 = local_148;
  puVar26 = FMemory::Malloc(0x78,8);
  *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar26;
  *puVar26 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  puVar26[1] = this;
  *(LARGE_INTEGER *)(puVar26 + 2) = local_178[0];
  puVar26[3] = FVar15.ReferenceController;
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FName *)(puVar26 + 4) = local_180;
  puVar26[5] = pTVar17;
  puVar26[6] = pFVar5;
  puVar26[7] = pTVar6;
  *(undefined1 *)(puVar26 + 8) = local_res20[0]._s_0.B;
  *(undefined8 *)((longlong)puVar26 + 0x44) = local_144;
  *(undefined8 *)((longlong)puVar26 + 0x4c) = local_13c;
  *(undefined1 *)((longlong)puVar26 + 0x54) = local_134;
  *(undefined4 *)(puVar26 + 0xb) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar26 + 0x5c) = local_130._4_4_;
  *(undefined4 *)(puVar26 + 0xc) = (undefined4)local_128;
  *(undefined4 *)((longlong)puVar26 + 100) = local_128._4_4_;
  puVar26[0xd] = pFVar12;
  puVar26[0xe] = FVar13.ReferenceController;
  if (puVar26 + 1 != (undefined8 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
         ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar17->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  pFVar16 = local_f0;
  pFVar8 = (local_f0->CameraName).Data.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (pFVar16->Name).Data.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return __return_storage_ptr__;
}

// MoviePipelineRenderShowFlagOverride @ 14dde8b60

void __thiscall
UMoviePipelineDeferredPassBase::MoviePipelineRenderShowFlagOverride
          (UMoviePipelineDeferredPassBase *this,FEngineShowFlags *param_1)

{
  undefined1 *puVar1;
  
  if (this->bDisableMultisampleEffects != false) {
    param_1->Bloom = 0;
    param_1->AntiAliasing = 0;
    param_1->DepthOfField = 0;
    param_1->SceneColorFringe = 0;
    param_1->MotionBlur = 0;
  }
  return;
}

// OnTileEndImpl @ 14ddf14c0

void __thiscall
UMoviePipelineDeferredPassBase::OnTileEndImpl
          (UMoviePipelineDeferredPassBase *this,TIntPoint<int> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CameraViewStateData).ArrayNum;
  pFVar10 = (this->CameraViewStateData).AllocatorInstance.Data;
  pFVar13 = pFVar10 + (longlong)iVar1 * 0x58;
LAB_14ddf14f4:
  do {
    if ((this->CameraViewStateData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar13) {
      return;
    }
    if ((*(longlong *)(pFVar10 + 0x50) != 0) && (this->bRenderMainPass != false)) {
      uVar12 = param_1.field0_0x0._4_4_;
      uVar6 = param_1.field0_0x0._0_4_ - uVar12 ^ uVar12 >> 0xd;
      uVar4 = (-0x61c88647 - uVar6) - uVar12 ^ uVar6 << 8;
      uVar11 = (uVar12 - uVar6) - uVar4 ^ uVar4 >> 0xd;
      uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 0xc;
      uVar4 = (uVar4 - uVar6) - uVar11 ^ uVar6 << 0x10;
      uVar11 = (uVar11 - uVar4) - uVar6 ^ uVar4 >> 5;
      uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 3;
      uVar4 = (uVar4 - uVar6) - uVar11 ^ uVar6 << 10;
      if (*(int *)(pFVar10 + 8) != *(int *)(pFVar10 + 0x34)) {
        pFVar8 = *(FScriptContainerElement **)(pFVar10 + 0x40);
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar8 = pFVar10 + 0x38;
        }
        iVar7 = *(int *)(pFVar8 + (ulonglong)
                                  (*(int *)(pFVar10 + 0x48) - 1U &
                                  ((uVar11 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4);
        if (iVar7 != -1) {
          do {
            puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)pFVar10);
            if (((int)*puVar5 == param_1.field0_0x0._0_4_) &&
               ((uint)((ulonglong)*puVar5 >> 0x20) == uVar12)) {
              if (iVar7 != -1) {
                plVar9 = puVar5 + 1;
                if (puVar5 == (undefined8 *)0x0) {
                  plVar9 = (longlong *)0x0;
                }
                if (plVar9 != (longlong *)0x0) {
                  if ((int)plVar9[1] != 0) {
                    if ((int)plVar9[1] < 1) {
                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar3) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                    }
                    (**(code **)(**(longlong **)(*plVar9 + 8) + 0x118))
                              (*(longlong **)(*plVar9 + 8),*(longlong *)(pFVar10 + 0x50));
                  }
                }
              }
              goto LAB_14ddf166f;
            }
            iVar7 = *(int *)(puVar5 + 3);
          } while (iVar7 != -1);
          pFVar10 = pFVar10 + 0x58;
          goto LAB_14ddf14f4;
        }
      }
    }
LAB_14ddf166f:
    pFVar10 = pFVar10 + 0x58;
  } while( true );
}

// OnTileStartImpl @ 14ddf16a0

void __thiscall
UMoviePipelineDeferredPassBase::OnTileStartImpl
          (UMoviePipelineDeferredPassBase *this,TIntPoint<int> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CameraViewStateData).ArrayNum;
  pFVar10 = (this->CameraViewStateData).AllocatorInstance.Data;
  pFVar13 = pFVar10 + (longlong)iVar1 * 0x58;
LAB_14ddf16d4:
  do {
    if ((this->CameraViewStateData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar13) {
      return;
    }
    if ((*(longlong *)(pFVar10 + 0x50) != 0) && (this->bRenderMainPass != false)) {
      uVar12 = param_1.field0_0x0._4_4_;
      uVar6 = param_1.field0_0x0._0_4_ - uVar12 ^ uVar12 >> 0xd;
      uVar4 = (-0x61c88647 - uVar6) - uVar12 ^ uVar6 << 8;
      uVar11 = (uVar12 - uVar6) - uVar4 ^ uVar4 >> 0xd;
      uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 0xc;
      uVar4 = (uVar4 - uVar6) - uVar11 ^ uVar6 << 0x10;
      uVar11 = (uVar11 - uVar4) - uVar6 ^ uVar4 >> 5;
      uVar6 = (uVar6 - uVar11) - uVar4 ^ uVar11 >> 3;
      uVar4 = (uVar4 - uVar6) - uVar11 ^ uVar6 << 10;
      if (*(int *)(pFVar10 + 8) != *(int *)(pFVar10 + 0x34)) {
        pFVar8 = *(FScriptContainerElement **)(pFVar10 + 0x40);
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar8 = pFVar10 + 0x38;
        }
        iVar7 = *(int *)(pFVar8 + (ulonglong)
                                  (*(int *)(pFVar10 + 0x48) - 1U &
                                  ((uVar11 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4);
        if (iVar7 != -1) {
          do {
            puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)pFVar10);
            if (((int)*puVar5 == param_1.field0_0x0._0_4_) &&
               ((uint)((ulonglong)*puVar5 >> 0x20) == uVar12)) {
              if (iVar7 != -1) {
                plVar9 = puVar5 + 1;
                if (puVar5 == (undefined8 *)0x0) {
                  plVar9 = (longlong *)0x0;
                }
                if (plVar9 != (longlong *)0x0) {
                  if ((int)plVar9[1] != 0) {
                    if ((int)plVar9[1] < 1) {
                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar3) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                    }
                    (**(code **)(**(longlong **)(*plVar9 + 8) + 0x120))
                              (*(longlong **)(*plVar9 + 8),*(longlong *)(pFVar10 + 0x50));
                  }
                }
              }
              goto LAB_14ddf184f;
            }
            iVar7 = *(int *)(puVar5 + 3);
          } while (iVar7 != -1);
          pFVar10 = pFVar10 + 0x58;
          goto LAB_14ddf16d4;
        }
      }
    }
LAB_14ddf184f:
    pFVar10 = pFVar10 + 0x58;
  } while( true );
}

// PathTracerValidationImpl @ 14ddf1880

void __thiscall
UMoviePipelineDeferredPassBase::PathTracerValidationImpl(UMoviePipelineDeferredPassBase *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [24];
  FText local_18;
  
  bVar3 = CheckIfPathTracerIsSupported(this);
  if (!bVar3) {
    FText::AsLocalizable_Advanced_LocText
              (&local_18,L"MovieRenderPipeline",L"PathTracerValidation_Unsupported",
               L"Path Tracing is currently not enabled for this project and this render pass will not work."
              );
    if (((FText *)this->_padding_ <= &local_18) &&
       (&local_18 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
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
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar4 = (int)this->_padding_;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    puVar5 = (undefined8 *)(this->_padding_ + (longlong)iVar4 * 0x10);
    *puVar5 = 0;
    *puVar5 = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res10);
    }
    *(uint *)(puVar5 + 1) = local_18.Flags;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// PostLoad @ 14ddf19b0

void __thiscall UMoviePipelineDeferredPassBase::PostLoad(UMoviePipelineDeferredPassBase *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMoviePipelineDeferredPassBase **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PostRendererSubmission @ 14ddf21b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMoviePipelineDeferredPassBase::PostRendererSubmission
          (UMoviePipelineDeferredPassBase *this,FMoviePipelineRenderPassMetrics *param_1,
          FMoviePipelinePassIdentifier *param_2,int param_3,FCanvas *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  APlayerCameraManager *pAVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  float fVar7;
  FImagePixelDataPayload *pFVar8;
  FAccumulatorInstance *pFVar9;
  FSharedReferencer<1> FVar10;
  FMoviePipelinePassIdentifier *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  UMoviePipeline *pUVar18;
  UWorld *this_00;
  APlayerController *pAVar19;
  longlong lVar20;
  FMinimalViewInfo *pFVar21;
  UMoviePipelinePrimaryConfig *this_01;
  UMoviePipelineOutputSetting *pUVar22;
  FName *pFVar23;
  TStatId TVar24;
  FAccumulatorPool *this_02;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *pTVar25;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar26;
  int iVar27;
  int iVar28;
  FImageOverlappedAccumulator *pFVar29;
  code **ppcVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  int iVar33;
  TIntPoint<int>_u_0 TVar34;
  ulonglong uVar35;
  TIntPoint<int>_u_0 TVar36;
  int iVar37;
  FCanvas *pFVar38;
  int iVar39;
  float fVar40;
  undefined1 auStackY_c88 [32];
  bool local_c28;
  int local_c24;
  int local_c20;
  int local_c1c;
  int local_c18;
  TSharedRef<FImagePixelDataPayload,1> local_c10;
  FMoviePipelineOutputMerger *local_c00;
  int local_bf8;
  uint uStack_bf4;
  int local_bf0;
  uint uStack_bec;
  int local_be8;
  int iStack_be4;
  int local_be0;
  int iStack_bdc;
  FImageOverlappedAccumulator *local_bd8;
  FCanvas *local_bd0;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> local_bc8;
  FImagePixelDataPayload *local_bb8;
  FName local_bb0;
  byte local_ba8;
  FImageOverlappedAccumulator *local_b98;
  TReferenceControllerBase<1> *pTStack_b90;
  FMoviePipelineOutputMerger *local_b88;
  TReferenceControllerBase<1> *pTStack_b80;
  undefined1 local_b78;
  TIntPoint<int>_u_0 local_b74;
  TIntPoint<int>_u_0 local_b6c;
  bool local_b64;
  undefined8 local_b60;
  undefined8 local_b58;
  TIntPoint<int>_u_0_s_0 local_b48;
  TIntPoint<int>_u_0_s_0 local_b40;
  FMoviePipelinePassIdentifier *local_b38;
  code *local_b30;
  TReferenceControllerBase<1> *local_b28;
  code *local_b20;
  TReferenceControllerBase<1> *local_b18;
  FImagePixelDataPayload *local_b10;
  TReferenceControllerBase<1> *local_b08;
  <lambda_1> local_b00;
  FRenderTarget *local_a90;
  TIntPoint<int>_u_0 local_a88;
  TIntPoint<int>_u_0 TStack_a80;
  undefined8 local_a74;
  undefined8 uStack_a6c;
  FSourceLocation local_a58;
  UMoviePipelineDeferredPassBase *local_a38;
  FImagePixelDataPayload *local_a30;
  TReferenceControllerBase<1> *local_a28;
  FImageOverlappedAccumulator *local_a20;
  TReferenceControllerBase<1> *local_a18;
  FMoviePipelineOutputMerger *local_a10;
  TReferenceControllerBase<1> *local_a08;
  undefined1 local_a00;
  TIntPoint<int>_u_0 local_9fc;
  TIntPoint<int>_u_0 local_9f4;
  bool local_9ec;
  int local_9e8;
  int local_9e4;
  int local_9e0;
  int local_9dc;
  FAccumulatorInstance *local_9d8;
  TReferenceControllerBase<1> *local_9d0;
  FMoviePipelinePassIdentifier *local_9c8;
  FName local_9c0;
  TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> local_9b8;
  code *local_9a8 [2];
  code *local_998 [3];
  code **local_980;
  undefined1 local_978 [40];
  code **local_950;
  byte local_948;
  FMinimalViewInfo local_938;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_c88;
  local_c00 = (FMoviePipelineOutputMerger *)CONCAT44(local_c00._4_4_,param_3);
  local_bd0 = param_4;
  local_bb8 = (FImagePixelDataPayload *)this;
  local_b38 = param_2;
  local_9c8 = param_2;
  if (param_1->bDiscardResult == false) {
    local_a88 = (TIntPoint<int>_u_0)0x0;
    TStack_a80 = (TIntPoint<int>_u_0)0x0;
    local_c28 = false;
    local_a74 = 0;
    uStack_a6c = 0;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    this_00 = (UWorld *)(**(code **)(pUVar18->_padding_ + 0x180))(pUVar18);
    pAVar19 = UWorld::GetFirstPlayerController(this_00);
    pAVar3 = (pAVar19->PlayerCameraManager).field0_0x0.DebugPtr;
    if ((pAVar3 == (APlayerCameraManager *)0x0) ||
       (lVar20 = (**(code **)(pAVar3->_padding_ + 0x798))(pAVar3),
       (*(byte *)(lVar20 + 0x68) & 1) == 0)) {
      local_c18 = uStack_a6c._4_4_;
      local_c1c = (int)uStack_a6c;
      local_c24 = local_a74._4_4_;
      local_c20 = (int)local_a74;
      TVar34 = local_a88;
      TVar36 = TStack_a80;
    }
    else {
      pFVar21 = (FMinimalViewInfo *)(**(code **)(pAVar3->_padding_ + 0x798))(pAVar3);
      FMinimalViewInfo::FMinimalViewInfo(&local_938,pFVar21);
      pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      this_01 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar18);
      pUVar22 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                          ((UMoviePipelineConfigBase *)this_01,false);
      if ((pUVar22 == (UMoviePipelineOutputSetting *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputSettings",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                              ,0x41e,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar7 = __real_3f800000;
      local_b40 = (param_1->OverscannedResolution).field0_0x0._s_0;
      iVar28 = local_b40.Y;
      iVar15 = local_b40.X;
      fVar40 = (float)iVar15 / (float)iVar28;
      if (((char)this->_padding_ == '\0') ||
         (bVar13 = local_938.AspectRatio <= fVar40, fVar40 = local_938.AspectRatio, bVar13)) {
        iVar27 = (int)ROUND((fVar40 + fVar40) * (float)iVar28 + __real_3f000000) >> 1;
        iVar37 = iVar28;
      }
      else {
        iVar27 = iVar15;
        iVar37 = (int)((longlong)
                       ROUND(((double)iVar15 + (double)iVar15) / (double)local_938.AspectRatio +
                             __real_3fe0000000000000) >> 1);
      }
      local_b48 = (param_1->OverlappedOffset).field0_0x0._s_0;
      local_bd8 = (FImageOverlappedAccumulator *)((ulonglong)local_b48 >> 0x20);
      iVar39 = local_b48.X;
      iVar33 = (param_1->BackbufferSize).field0_0x0._s_0.X + iVar39;
      uVar14 = local_b48.Y + (param_1->BackbufferSize).field0_0x0._s_0.Y;
      iVar15 = (iVar15 - iVar27) / 2;
      uVar16 = (iVar28 - iVar37) / 2;
      _local_bf0 = CONCAT44(uVar16,iVar15);
      TVar34._s_0.Y = uVar16;
      TVar34._s_0.X = iVar15;
      iVar27 = iVar27 + iVar15;
      uVar17 = uVar16 + iVar37;
      _local_bf8 = CONCAT44(uVar17,iVar27);
      TVar36._s_0.Y = uVar17;
      TVar36._s_0.X = iVar27;
      if (((param_1->OverlappedPad).field0_0x0._s_0.X ==
           UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
         ((param_1->OverlappedPad).field0_0x0._s_0.Y ==
          UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
        local_c28 = false;
      }
      else {
        local_c28 = true;
      }
      uVar32 = uVar14;
      if ((int)uVar16 < (int)uVar14) {
        uVar32 = uVar16;
      }
      iVar28 = iVar33;
      if (iVar15 < iVar33) {
        iVar28 = iVar15;
      }
      iVar15 = iVar39;
      if (iVar39 < iVar28) {
        iVar15 = iVar28;
      }
      uVar16 = uVar14;
      if ((int)uVar17 < (int)uVar14) {
        uVar16 = uVar17;
      }
      iVar28 = iVar33;
      if (iVar27 < iVar33) {
        iVar28 = iVar27;
      }
      pFVar29 = local_bd8;
      if (local_b48.Y < (int)uVar32) {
        pFVar29 = (FImageOverlappedAccumulator *)(ulonglong)uVar32;
      }
      iStack_be4 = (int)pFVar29;
      iStack_be4 = iStack_be4 - local_b48.Y;
      _local_be8 = CONCAT44(iStack_be4,iVar15 - iVar39);
      iVar27 = iVar39;
      if (iVar39 < iVar28) {
        iVar27 = iVar28;
      }
      uVar17 = local_b48.Y;
      if (local_b48.Y < (int)uVar16) {
        uVar17 = uVar16;
      }
      _local_be0 = CONCAT44(uVar14 - uVar17,iVar33 - iVar27);
      uVar16 = (uint)local_c28;
      iVar15 = (iVar15 - iVar39) - uVar16;
      local_c20 = 0;
      if (0 < iVar15) {
        local_c20 = iVar15;
      }
      iVar15 = (iVar33 - iVar27) - uVar16;
      local_c24 = 0;
      if (0 < iVar15) {
        local_c24 = iVar15;
      }
      iVar15 = iStack_be4 - uVar16;
      local_c1c = 0;
      if (0 < iVar15) {
        local_c1c = iVar15;
      }
      iVar15 = (uVar14 - uVar17) - uVar16;
      local_c18 = 0;
      if (0 < iVar15) {
        local_c18 = iVar15;
      }
      if (0 < local_c20) {
        FCanvas::DrawTile(param_4,0.0,0.0,(double)local_c20,
                          (double)(param_1->BackbufferSize).field0_0x0._s_0.Y,0.0,0.0,
                          __real_3f800000,__real_3f800000,&FLinearColor::Black,(FTexture *)0x0,false
                         );
      }
      if (0 < local_c24) {
        iVar15 = (param_1->BackbufferSize).field0_0x0._s_0.X;
        FCanvas::DrawTile(param_4,(double)(iVar15 - local_c24),0.0,(double)iVar15,
                          (double)(param_1->BackbufferSize).field0_0x0._s_0.Y,0.0,0.0,fVar7,fVar7,
                          &FLinearColor::Black,(FTexture *)0x0,false);
      }
      if (0 < local_c1c) {
        FCanvas::DrawTile(param_4,0.0,0.0,(double)(param_1->BackbufferSize).field0_0x0._s_0.X,
                          (double)local_c1c,0.0,0.0,fVar7,fVar7,&FLinearColor::Black,(FTexture *)0x0
                          ,false);
      }
      if (0 < local_c18) {
        iVar15 = (param_1->BackbufferSize).field0_0x0._s_0.Y;
        FCanvas::DrawTile(param_4,0.0,(double)(iVar15 - local_c18),
                          (double)(param_1->BackbufferSize).field0_0x0._s_0.X,(double)iVar15,0.0,0.0
                          ,fVar7,fVar7,&FLinearColor::Black,(FTexture *)0x0,false);
      }
      FCanvas::Flush_GameThread(param_4,true);
      if (local_938.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
        ;
      }
      param_3 = (int)local_c00;
    }
    local_bc8.Object = (FAccumulatorInstance *)0x0;
    local_bc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TVar24.StatIdPtr = (TStatIdData *)StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator;
    if (StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator ==
        (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableAccumulator>)0x0) {
      pFVar23 = ::FName::FName(&local_9c0,"STAT_MoviePipeline_WaitForAvailableAccumulator");
      TVar24.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_MoviePipeline_WaitForAvailableAccumulator,*pFVar23,
                      L"STAT_MoviePipeline_WaitForAvailableAccumulator","STATGROUP_MoviePipeline",
                      "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_a58.Impl._Line = 0x479;
    local_a58.Impl._Column = 3;
    local_a58.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
    ;
    local_a58.Impl._Function =
         "void __cdecl UMoviePipelineDeferredPassBase::PostRendererSubmission(const struct FMoviePipelineRenderPassMetrics &,const struct FMoviePipelinePassIdentifier,const int,class FCanvas &)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_bb0,TVar24,CycleStat|ClearEveryFrame,false,&local_a58);
    this_02 = TSharedPtr<FAccumulatorPool,1>::operator->(&this->AccumulatorPool);
    pTVar25 = FAccumulatorPool::BlockAndGetAccumulator_GameThread
                        (this_02,&local_9b8,(param_1->OutputState).OutputFrameNumber,param_2);
    if (&local_bc8 != pTVar25) {
      local_bc8.Object = pTVar25->Object;
      pTVar25->Object = (FAccumulatorInstance *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_bc8.SharedReferenceCount,&pTVar25->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9b8.SharedReferenceCount.ReferenceController);
    if ((local_ba8 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_ba8 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_ba8 & 4) != 0) {
      FThreadStats::AddMessage(local_bb0,CycleScopeEnd);
    }
    local_ba8 = 0;
    MakeShared<FImagePixelDataPayload,1>(&local_c10);
    pFVar8 = local_c10.Object;
    ::FString::operator=(&((local_c10.Object)->PassIdentifier).Name,&param_2->Name);
    ::FString::operator=(&(pFVar8->PassIdentifier).CameraName,&param_2->CameraName);
    FMoviePipelineRenderPassMetrics::operator=(&(local_c10.Object)->SampleState,param_1);
    (local_c10.Object)->SortingOrder = param_3;
    (**(code **)(this->_padding_ + 0x428))
              (this,&local_b30,&param_1->BackbufferSize,local_c10.Object);
    local_b98 = (FImageOverlappedAccumulator *)0x0;
    pTStack_b90 = (TReferenceControllerBase<1> *)0x0;
    local_b88 = (FMoviePipelineOutputMerger *)0x0;
    pTStack_b80 = (TReferenceControllerBase<1> *)0x0;
    local_b74 = (TIntPoint<int>_u_0)0x0;
    local_b6c = (TIntPoint<int>_u_0)0x0;
    local_b64 = false;
    local_b60 = 0;
    local_b58 = 0;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pFVar9 = local_bc8.Object;
    local_c00 = (pUVar18->OutputBuilder).Object;
    pTVar4 = (pUVar18->OutputBuilder).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
      pTStack_b80 = pTVar4;
    }
    pTVar4 = pTStack_b80;
    local_b88 = local_c00;
    if ((local_bc8.Object == (FAccumulatorInstance *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_bd8 = (FImageOverlappedAccumulator *)(pFVar9->Accumulator).Object;
    pTVar5 = (pFVar9->Accumulator).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b98 = local_bd8;
    pTVar12 = pTStack_b90;
    if (pTVar5 != pTStack_b90) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = pTVar5;
      if (pTStack_b90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTStack_b90->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTStack_b90->_padding_ + 8))(pTStack_b90,1);
        }
      }
    }
    pTStack_b90 = pTVar12;
    pTVar12 = pTStack_b90;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    local_b00.__this = (UMoviePipelineDeferredPassBase *)local_bb8;
    FVar10.ReferenceController = local_bc8.SharedReferenceCount.ReferenceController;
    local_b78 = *(bool *)((longlong)local_bb8 + 0x178);
    local_b64 = local_c28;
    local_b60 = CONCAT44(local_c24,local_c20);
    local_b58 = CONCAT44(local_c18,local_c1c);
    local_a38 = (UMoviePipelineDeferredPassBase *)local_bb8;
    local_bb8 = local_c10.Object;
    local_a30 = local_c10.Object;
    local_a28 = local_c10.SharedReferenceCount.ReferenceController;
    if (local_c10.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a20 = local_bd8;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_a10 = local_c00;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_9ec = local_c28;
    local_9e8 = local_c20;
    local_9e4 = local_c24;
    local_9e0 = local_c1c;
    local_9dc = local_c18;
    local_9d8 = local_bc8.Object;
    local_9d0 = local_bc8.SharedReferenceCount.ReferenceController;
    if (local_bc8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_bc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_bc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_bd0 = (FCanvas *)local_bd0->RenderTarget;
    local_b20 = local_b30;
    local_b18 = local_b28;
    if (local_b28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b28->SharedReferenceCount = (atomic<int>)((int)local_b28->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b10 = local_c10.Object;
    local_b08 = local_c10.SharedReferenceCount.ReferenceController;
    if (local_c10.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b00.FramePayload.Object = local_c10.Object;
    local_b00.FramePayload.SharedReferenceCount.ReferenceController =
         local_c10.SharedReferenceCount.ReferenceController;
    if (local_c10.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c10.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b00.AccumulationArgs.ImageAccumulator.Object = local_bd8;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_b00.AccumulationArgs.OutputMerger.Object = (IMoviePipelineOutputMerger *)local_c00;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_b00.AccumulationArgs.LetterboxData.bDrawLetterboxBorder = local_c28;
    local_b00.AccumulationArgs.LetterboxData.LeftSamplePixelsClearedBeforeAccumulation = local_c20;
    local_b00.AccumulationArgs.LetterboxData.RightSamplePixelsClearedBeforeAccumulation = local_c24;
    local_b00.AccumulationArgs.LetterboxData.TopSamplePixelsClearedBeforeAccumulation = local_c1c;
    local_b00.AccumulationArgs.LetterboxData.BottomSamplePixelsClearedBeforeAccumulation = local_c18
    ;
    local_b00.SampleAccumulator.Object = local_bc8.Object;
    local_b00.SampleAccumulator.SharedReferenceCount.ReferenceController =
         local_bc8.SharedReferenceCount.ReferenceController;
    if (local_bc8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_bc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_bc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9a8[0] = (code *)0x0;
    local_980 = (code **)0x0;
    local_b74 = TVar34;
    local_b6c = TVar36;
    local_b00.AccumulationArgs.ImageAccumulator.WeakReferenceCount.ReferenceController = pTVar12;
    local_b00.AccumulationArgs.OutputMerger.WeakReferenceCount.ReferenceController = pTVar4;
    local_b00.AccumulationArgs.bAccumulateAlpha = (bool)local_b78;
    local_b00.AccumulationArgs.LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)TVar34;
    local_b00.AccumulationArgs.LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)TVar36;
    local_a90 = (FRenderTarget *)local_bd0;
    local_a18 = pTVar12;
    local_a08 = pTVar4;
    local_a00 = local_b78;
    local_9fc = TVar34;
    local_9f4 = TVar36;
    local_980 = FMemory::Malloc(0xa0,8);
    *local_980 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::`2'::<lambda_2>,1,1>
                          ::_vftable_;
    pFVar38 = (FCanvas *)(local_980 + 1);
    *(code **)pFVar38 = local_b20;
    local_980[2] = (code *)local_b18;
    local_b18 = (TReferenceControllerBase<1> *)0x0;
    local_b20 = (code *)0x0;
    local_980[3] = (code *)local_b10;
    local_980[4] = (code *)local_b08;
    if (local_b08 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b08->SharedReferenceCount = (atomic<int>)((int)local_b08->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_bd0 = pFVar38;
    `UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::<lambda_1>
              (local_980 + 5,&local_b00);
    *(FRenderTarget **)&(pFVar38->Time).DeltaRealTimeSeconds = local_a90;
    if (pFVar38 != (FCanvas *)0x0) {
      local_9a8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_03 = FRenderCommandList::GetInstanceTLS();
    if (this_03 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMoviePipelineDeferredPassBase::PostRendererSubmission_::__l2::TSTR_CanvasRenderTargetResolveCommand1192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_9a8);
    }
    else {
      this_04 = FRenderCommandList::GetRenderThread(this_03);
      local_978._0_8_ = local_9a8[0];
      local_950 = local_980;
      local_980 = (code **)0x0;
      local_978._16_8_ = local_998[0];
      local_978._24_8_ = local_998[1];
      local_978._32_8_ = local_998[2];
      local_9a8[0] = (code *)0x0;
      local_948 = 2;
      pFVar26 = (FRenderCommandTag *)
                TRenderCommandTag<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::TSTR_CanvasRenderTargetResolveCommand1192>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_978,pFVar26);
      uVar35 = (ulonglong)local_948;
      if ((2 < uVar35) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar35] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_978._0_8_ != (code *)0x0) {
          ppcVar30 = (code **)(local_978 + 0x10);
          if (local_950 != (code **)0x0) {
            ppcVar30 = local_950;
          }
          (**(code **)(*ppcVar30 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar35])(local_978);
      }
    }
    if (local_9a8[0] != (code *)0x0) {
      ppcVar30 = local_9a8 + 2;
      if (local_980 != (code **)0x0) {
        ppcVar30 = local_980;
      }
      (**(code **)(*ppcVar30 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b00.SampleAccumulator.SharedReferenceCount.ReferenceController);
    if (local_b00.AccumulationArgs.OutputMerger.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_b00.AccumulationArgs.OutputMerger.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_b00.AccumulationArgs.OutputMerger.WeakReferenceCount.ReferenceController
                     )->_padding_ + 8))
                  (local_b00.AccumulationArgs.OutputMerger.WeakReferenceCount.ReferenceController,1)
        ;
      }
    }
    if (local_b00.AccumulationArgs.ImageAccumulator.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_b00.AccumulationArgs.ImageAccumulator.WeakReferenceCount.ReferenceController)
                ->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_b00.AccumulationArgs.ImageAccumulator.WeakReferenceCount.
                     ReferenceController)->_padding_ + 8))
                  (local_b00.AccumulationArgs.ImageAccumulator.WeakReferenceCount.
                   ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b00.FramePayload.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b08);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9d0);
    if (local_a08 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_a08->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_a08->_padding_ + 8))(local_a08,1);
      }
    }
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar12->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a28);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar12->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c10.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    pFVar11 = local_b38;
    pFVar31 = (local_b38->CameraName).Data.AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar11->Name).Data.AllocatorInstance.Data;
  }
  else {
    pFVar31 = (param_2->CameraName).Data.AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (param_2->Name).Data.AllocatorInstance.Data;
  }
  if (pFVar31 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar31);
  }
  return;
}

// RenderSample_GameThreadImpl @ 14ddf9760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddfa45c) */
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
UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl
          (UMoviePipelineDeferredPassBase *this,FMoviePipelineRenderPassMetrics *param_1)

{
  FImagePixelPipe *this_00;
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  char cVar4;
  Type TVar5;
  uint uVar6;
  TObjectPtr<UMaterialInterface_const_>_u_0 TVar7;
  UActorComponent *pUVar8;
  uint *puVar9;
  undefined1 *puVar10;
  UPrimitiveComponent *this_01;
  longlong lVar11;
  UMaterialInterface *pUVar12;
  UMaterialInterface *pUVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  bool bVar17;
  float fVar18;
  UMoviePipelineDeferredPassBase *pUVar19;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  UMoviePipeline *pUVar27;
  UMoviePipeline *pUVar28;
  FString *pFVar29;
  undefined8 *puVar30;
  TReferenceControllerBase<1> *pTVar31;
  TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> *pTVar32;
  UTextureRenderTarget *pUVar33;
  FTextureRenderTargetResource *pFVar34;
  UWorld *pUVar35;
  IRendererModule *pIVar36;
  FRenderCommandList *pFVar37;
  FCommandList *pFVar38;
  FRenderCommandTag *pFVar39;
  UClass *pUVar40;
  FActorIteratorState *pFVar41;
  AActor *pAVar42;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar43;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar44;
  UDataLayerAsset *pUVar45;
  FRenderTarget *pFVar46;
  longlong *plVar47;
  longlong lVar48;
  wchar_t *pwVar49;
  FScriptContainerElement *pFVar50;
  undefined ***pppuVar51;
  TObjectPtr<UMaterialInterface_const_>_u_0 *pTVar52;
  ulonglong uVar53;
  uint uVar54;
  FMoviePipelinePassIdentifier *pFVar55;
  FRenderTarget *pFVar56;
  wchar_t *pwVar57;
  undefined1 *puVar58;
  int iVar59;
  uint *puVar60;
  uint uVar61;
  longlong lVar62;
  TObjectPtr<UMaterialInterface_const_>_u_0 *pTVar63;
  undefined1 auStackY_ee8 [32];
  undefined1 local_e96;
  undefined1 local_e95;
  undefined1 local_e94;
  undefined1 local_e93 [3];
  uint local_e90;
  longlong local_e88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e80;
  uint local_e70;
  int local_e6c;
  UMoviePipelineDeferredPassBase *local_e68;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_e60;
  undefined8 uStack_e58;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  int local_e38;
  undefined4 uStack_e34;
  int local_e30;
  FMoviePipelinePassIdentifier *local_e28;
  FString local_e20;
  longlong local_e10;
  UPrimitiveComponent *local_e08;
  FString local_e00;
  FString local_df0;
  TKeyInitializer<UPrimitiveComponent_*_const_&> local_de0;
  TObjectPtr<UMaterialInterface_const_>_u_0 *local_dd8;
  int local_dd0;
  undefined4 local_dc8 [2];
  UMaterialInterface *local_dc0;
  FWeakObjectPtr local_db8;
  FMoviePipelineRenderPassMetrics *local_db0;
  undefined8 local_da8;
  undefined8 local_da0;
  FWeakObjectPtr local_d98 [2];
  FImagePixelPipe *local_d88;
  TReferenceControllerBase<1> *pTStack_d80;
  longlong local_d78;
  TReferenceControllerBase<1> *local_d70;
  longlong local_d68;
  TReferenceControllerBase<1> *local_d60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d38;
  longlong local_d18;
  UClass *local_d10;
  UPrimitiveComponent **local_d08;
  UClass *local_d00;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_cf8;
  int local_cf0;
  int local_cec;
  TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&> local_ce8;
  TIntPoint<int>_u_0 local_cd8;
  TObjectPtr<UMaterialInterface_const_>_u_0 local_cd0;
  undefined1 local_cc8 [12];
  uint uStack_cbc;
  TBitArray<FDefaultBitArrayAllocator> *local_cb8;
  undefined8 uStack_cb0;
  longlong local_ca8;
  undefined8 uStack_ca0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c90;
  undefined8 uStack_c70;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c60;
  undefined8 uStack_c40;
  FString local_c38;
  FString local_c28;
  longlong *local_c18;
  FImagePixelPipe **local_c10;
  FString local_c08;
  FString local_bf8;
  FImagePixelPipe *local_be8;
  TReferenceControllerBase<1> *pTStack_be0;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  TActorIteratorBase<TActorIterator<AActor>_> local_ba8;
  void *local_b48 [2];
  void *local_b38 [2];
  FString local_b28;
  FMoviePipelinePassIdentifier local_b18;
  FMoviePipelinePassIdentifier local_af8;
  FSoftObjectPath local_ad8;
  FMoviePipelinePassIdentifier local_ab8;
  void *local_a98 [2];
  TRangedForConstIterator local_a88;
  TActorIteratorBase<TActorIterator<AActor>_> local_a58;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9b8;
  undefined4 local_97c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_978;
  int local_958;
  undefined8 local_954;
  int local_94c;
  int local_948;
  TIntPoint<int>_u_0 local_944;
  undefined4 local_93c;
  code *local_938 [2];
  undefined **local_928;
  FRenderTarget *pFStack_920;
  undefined8 local_918;
  undefined ***local_910;
  code *local_908 [2];
  undefined **local_8f8;
  FRenderTarget *pFStack_8f0;
  undefined8 local_8e8;
  undefined ***local_8e0;
  undefined1 local_8d8 [32];
  undefined8 local_8b8;
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  ForElementType<FSetElementId> local_898;
  int local_890;
  undefined1 local_888 [16];
  undefined **local_878;
  FRenderTarget *pFStack_870;
  undefined8 local_868;
  undefined ***local_860;
  byte local_858;
  undefined1 local_848 [16];
  undefined **local_838;
  FRenderTarget *pFStack_830;
  undefined8 local_828;
  undefined ***local_820;
  byte local_818;
  undefined1 local_808 [48];
  FMoviePipelineRenderPassMetrics local_7d8;
  undefined1 local_538 [32];
  undefined8 local_518;
  undefined1 local_508 [136];
  FMoviePipelineFrameOutputState local_480;
  undefined **local_350;
  void *local_2e8;
  void *local_2d8;
  void *local_2c8;
  void *local_2b8;
  FCanvas local_298;
  FCanvas local_178;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_ee8;
  local_e90 = 0;
  local_e68 = this;
  local_db0 = param_1;
  UMoviePipelineImagePassBase::RenderSample_GameThreadImpl
            ((UMoviePipelineImagePassBase *)this,param_1);
  iVar23 = (**(code **)(this->_padding_ + 0x450))(this);
  local_dd0 = iVar23;
  pUVar27 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar28 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar24 = 0;
  if (pUVar28->CurrentShotIndex < (pUVar27->ActiveShotList).ArrayNum) {
    uVar24 = (uint)~pUVar28->CurrentShotIndex >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  fVar18 = __real_3f800000;
  local_e6c = 0;
  if (0 < iVar23) {
    do {
      iVar59 = local_e6c;
      local_e00.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e00.Data.ArrayNum = 0;
      local_e00.Data.ArrayMax = 0;
      local_df0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_df0.Data.ArrayNum = 0;
      local_df0.Data.ArrayMax = 0;
      iVar25 = (int)this->_padding_;
      iVar23 = iVar25 + -1;
      if (iVar25 == 0) {
        iVar23 = 0;
      }
      ::FString::AssignRange(&local_e00,(wchar_t *)this->_padding_,iVar23);
      iVar23 = (**(code **)(this->_padding_ + 0x458))(this,iVar59);
      local_e30 = iVar23;
      pFVar29 = (FString *)(**(code **)(this->_padding_ + 0x460))(this,local_b48,iVar59);
      if (&local_df0 != pFVar29) {
        if (local_df0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_df0.Data.AllocatorInstance.Data);
        }
        local_df0.Data.AllocatorInstance.Data = (pFVar29->Data).AllocatorInstance.Data;
        (pFVar29->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_df0.Data.ArrayNum = (pFVar29->Data).ArrayNum;
        local_df0.Data.ArrayMax = (pFVar29->Data).ArrayMax;
        (pFVar29->Data).ArrayNum = 0;
        (pFVar29->Data).ArrayMax = 0;
      }
      if (local_b48[0] != (void *)0x0) {
        FMemory::Free(local_b48[0]);
      }
      if (this->bRenderMainPass != false) {
        if ((this->CameraViewStateData).ArrayNum == 0) {
LAB_14ddf99a6:
          bVar21 = false;
        }
        else {
          if (((this->CameraViewStateData).ArrayNum < 1) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_da8 = 0xffffffffffffffff;
          local_cd8 = (TIntPoint<int>_u_0)0xffffffffffffffff;
          local_ce8.Value = (TSharedPtr<FImagePixelPipe,1> *)0xffffffffffffffff;
          uVar24 = UE::Math::GetTypeHash<int>((TIntPoint<int> *)&local_ce8.Value);
          iVar25 = TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UE::Math::TIntPoint<int>_>
                             ((TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
                               *)(this->CameraViewStateData).AllocatorInstance.Data,uVar24,
                              (TIntPoint<int> *)&local_cd8._s_0);
          if ((((iVar25 == -1) || ((param_1->TileIndexes).field0_0x0._s_0.X != 0)) ||
              ((param_1->TileIndexes).field0_0x0._s_0.Y != 0)) ||
             ((param_1->TemporalSampleIndex != 0 || (param_1->SpatialSampleIndex != 0))))
          goto LAB_14ddf99a6;
          bVar21 = true;
        }
        bVar17 = true;
        while ((bVar21 || (bVar17))) {
          (**(code **)(this->_padding_ + 0x470))(this,&local_7d8,iVar23,param_1);
          local_7d8.OutputState.CameraIndex = iVar23;
          puVar30 = (undefined8 *)(**(code **)(this->_padding_ + 0x468))(this,local_b38,iVar59);
          if (&local_7d8.OutputState.CameraNameOverride != (FString *)puVar30) {
            if (local_7d8.OutputState.CameraNameOverride.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7d8.OutputState.CameraNameOverride.Data.AllocatorInstance.Data);
            }
            local_7d8.OutputState.CameraNameOverride.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)*puVar30;
            *puVar30 = 0;
            local_7d8.OutputState.CameraNameOverride.Data.ArrayNum = *(int *)(puVar30 + 1);
            local_7d8.OutputState.CameraNameOverride.Data.ArrayMax =
                 *(int *)((longlong)puVar30 + 0xc);
            puVar30[1] = 0;
          }
          if (local_b38[0] != (void *)0x0) {
            FMemory::Free(local_b38[0]);
          }
          if (bVar21) {
            local_da0 = 0xffffffffffffffff;
            local_7d8.TileIndexes.field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
          }
          local_93c = 0;
          local_948 = iVar23;
          local_944 = local_7d8.TileIndexes.field0_0x0;
          (**(code **)(this->_padding_ + 0x3b8))(this,&local_d78,&local_7d8,&local_948);
          if ((local_d78 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar48 = local_d78;
          if ((*(int *)(local_d78 + 0x10) < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar48 = **(longlong **)(lVar48 + 8);
          pFVar2 = (ForAnyElementType *)(lVar48 + 0x1aa8);
          *(undefined4 *)(lVar48 + 0x1ab0) = 0;
          piVar3 = (int *)(lVar48 + 0x1ab4);
          local_e88 = lVar48;
          if (*piVar3 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,pFVar2,0,piVar3);
          }
          TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
          ::Empty((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
                   *)(lVar48 + 0x1b18),0);
          pFVar50 = (this->ActivePostProcessMaterials).AllocatorInstance.Data;
          iVar23 = (this->ActivePostProcessMaterials).ArrayNum;
          pFVar14 = pFVar50 + (longlong)iVar23 * 8;
          while( true ) {
            if ((this->ActivePostProcessMaterials).ArrayNum != iVar23) {
              local_e96 = 0;
              `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_e96);
            }
            if (pFVar50 == pFVar14) break;
            local_e10 = *(longlong *)pFVar50;
            if (local_e10 != 0) {
              if (((pFVar2->Data <= (FScriptContainerElement *)&local_e10) &&
                  ((FScriptContainerElement *)&local_e10 < pFVar2->Data + (longlong)*piVar3 * 8)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar25 = *(int *)(lVar48 + 0x1ab0);
              if (iVar25 == *piVar3) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,pFVar2,piVar3);
              }
              *(int *)(lVar48 + 0x1ab0) = iVar25 + 1;
              *(longlong *)(pFVar2->Data + (longlong)iVar25 * 8) = local_e10;
            }
            pFVar50 = pFVar50 + 8;
          }
          pTVar63 = (TObjectPtr<UMaterialInterface_const_>_u_0 *)pFVar2->Data;
          iVar23 = *(int *)(lVar48 + 0x1ab0);
          pTVar52 = pTVar63 + iVar23;
          local_dd8 = pTVar52;
          while( true ) {
            if (*(int *)(lVar48 + 0x1ab0) != iVar23) {
              local_e95 = 0;
              `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_e95);
            }
            this = local_e68;
            lVar62 = local_e88;
            if (pTVar63 == pTVar52) break;
            TVar7 = (TObjectPtr<UMaterialInterface_const_>_u_0)pTVar63->DebugPtr;
            if (local_7d8.bDiscardResult == false) {
              pFVar29 = GetNameForPostProcessMaterial(local_e68,&local_b28,TVar7.DebugPtr);
              ::FString::ConcatFF(&local_bb8,(FString *)&this->_padding_,pFVar29);
              local_e90 = local_e90 | 1;
              ::FString::FString(&local_c08,&local_bb8);
              ::FString::FString(&local_bf8,&local_df0);
              if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
              }
              if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b28.Data.AllocatorInstance.Data);
              }
              pTVar31 = ::operator_new(0x50);
              local_e28 = (FMoviePipelinePassIdentifier *)pTVar31;
              if (pTVar31 == (TReferenceControllerBase<1> *)0x0) {
                pTVar31 = (TReferenceControllerBase<1> *)0x0;
              }
              else {
                pTVar31->SharedReferenceCount = (atomic<int>)0x1;
                pTVar31->WeakReferenceCount = (atomic<int>)0x1;
                pTVar31->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_UFImagePixelPipe___00_SharedPointerInternals__6B_
                ;
                *(undefined1 *)&pTVar31[1]._padding_ = 0;
                InitializeCriticalSectionAndSpinCount
                          ((LPCRITICAL_SECTION)&pTVar31[1].SharedReferenceCount,4000);
                pTVar31[4]._padding_ = 0;
                pTVar31[4].SharedReferenceCount = (atomic<int>)0x0;
                pTVar31[4].WeakReferenceCount = (atomic<int>)0x0;
              }
              this_00 = (FImagePixelPipe *)(pTVar31 + 1);
              local_d88 = this_00;
              pTStack_d80 = pTVar31;
              if ((this_00 == (FImagePixelPipe *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar22)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              local_e90 = local_e90 | 6;
              local_cd0 = TVar7;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (TVar7.DebugPtr != (UMaterialInterface *)0x0) {
                  UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar7.DebugPtr != (UMaterialInterface *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
                }
              }
              uVar24 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                       (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              iVar25 = TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
                                 (&this->ActiveHighPrecisionPostProcessMaterials,
                                  uVar24 >> 0x10 ^ uVar24,
                                  (TObjectPtr<UMaterialInterface_const_> *)&local_cd0.ObjectPtr);
              LOCK();
              this_00->bIsExpecting32BitPixelData = (atomic<bool>)(iVar25 != -1);
              UNLOCK();
              local_e28 = &local_b18;
              ::FString::FString(&local_b18.Name,&local_c08);
              ::FString::FString(&local_b18.CameraName,&local_bf8);
              pTVar32 = MakeForwardingEndpoint
                                  (local_e68,
                                   (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                                    *)local_808,&local_b18,&local_7d8);
              FImagePixelPipe::AddEndpoint(this_00,pTVar32);
              if (local_808._0_8_ != 0) {
                plVar47 = (longlong *)(local_808 + 0x10);
                if ((longlong *)local_808._40_8_ != (longlong *)0x0) {
                  plVar47 = (longlong *)local_808._40_8_;
                }
                (**(code **)(*plVar47 + 0x10))();
              }
              local_be8 = local_d88;
              pTStack_be0 = pTStack_d80;
              if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar31->SharedReferenceCount =
                     (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_d18 = (TVar7.DebugPtr)->_padding_;
              local_c18 = &local_d18;
              local_c10 = &local_be8;
              TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&>_>
                        ((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
                          *)(local_e88 + 0x1b18),&local_ce8,(bool *)&local_c18);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_be0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar31);
              if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
              }
              pTVar52 = local_dd8;
              if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c08.Data.AllocatorInstance.Data);
                pTVar52 = local_dd8;
              }
            }
            pTVar63 = pTVar63 + 1;
          }
          *(bool *)(local_e88 + 0x1ae8) =
               0 < *(int *)(local_e88 + 0x1b20) - *(int *)(local_e88 + 0x1b4c);
          (**(code **)(local_e68->_padding_ + 0x420))
                    (local_e68,local_d98,&local_7d8.BackbufferSize,&local_948);
          bVar22 = FWeakObjectPtr::IsValid(local_d98);
          if ((!bVar22) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ViewRenderTarget.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                                  ,0x29d,L""), bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pUVar33 = (UTextureRenderTarget *)FWeakObjectPtr::Get(local_d98);
          pFVar34 = UTextureRenderTarget::GameThread_GetRenderTargetResource(pUVar33);
          if (pFVar34 == (FTextureRenderTargetResource *)0x0) {
            pFVar56 = (FRenderTarget *)0x0;
LAB_14ddf9fd0:
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("RenderTarget",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                                ,0x2a0,L"");
            if (bVar22) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          else {
            pFVar56 = (FRenderTarget *)&pFVar34->_padding_;
            if (pFVar56 == (FRenderTarget *)0x0) goto LAB_14ddf9fd0;
          }
          TVar5 = *(Type *)(lVar62 + 0x1bf8);
          pUVar27 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
          pUVar35 = (UWorld *)(**(code **)(pUVar27->_padding_ + 0x180))(pUVar27);
          FCanvas::FCanvas(&local_298,pFVar56,(FHitProxyConsumer *)0x0,pUVar35,TVar5,
                           CDM_DeferDrawing,fVar18);
          pIVar36 = GetRendererModule();
          (**(code **)((longlong)*pIVar36 + 0x40))(pIVar36,&local_298,local_d78);
          local_910 = (undefined ***)0x0;
          local_928 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::`9'::<lambda_1>,1,0>
                       ::_vftable_;
          local_938[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                         ::Call;
          pFStack_920 = pFVar56;
          pFVar37 = FRenderCommandList::GetInstanceTLS();
          if (pFVar37 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl_::__l9::TSTR_TransitionTextureSRVState677>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_938);
          }
          else {
            pFVar38 = FRenderCommandList::GetRenderThread(pFVar37);
            local_888._0_8_ = local_938[0];
            local_860 = local_910;
            local_910 = (undefined ***)0x0;
            local_878 = local_928;
            pFStack_870 = pFStack_920;
            local_868 = local_918;
            local_938[0] = (code *)0x0;
            local_858 = 2;
            pFVar39 = (FRenderCommandTag *)
                      TRenderCommandTag<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::TSTR_TransitionTextureSRVState677>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (pFVar38,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_888,pFVar39);
            uVar53 = (ulonglong)local_858;
            if ((2 < uVar53) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar22)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar53] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_888._0_8_ != (code *)0x0) {
                pppuVar51 = (undefined ***)(local_888 + 0x10);
                if (local_860 != (undefined ***)0x0) {
                  pppuVar51 = local_860;
                }
                (*(code *)(*pppuVar51)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar53])(local_888);
            }
          }
          if (local_938[0] != (code *)0x0) {
            pppuVar51 = &local_928;
            if (local_910 != (undefined ***)0x0) {
              pppuVar51 = local_910;
            }
            (*(code *)(*pppuVar51)[2])();
          }
          if (bVar21) {
            bVar21 = false;
          }
          else {
            pcVar15 = *(code **)(this->_padding_ + 0x448);
            uVar26 = (**(code **)(this->_padding_ + 1000))(this);
            local_e28 = &local_af8;
            ::FString::FString(&local_af8.Name,&local_e00);
            ::FString::FString(&local_af8.CameraName,&local_df0);
            (*pcVar15)(this,&local_7d8,&local_af8,uVar26);
            bVar17 = false;
          }
          FCanvas::~FCanvas(&local_298);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d70);
          local_7d8.FrameInfo._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
          if (local_7d8.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data);
          }
          if (local_7d8.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data);
          }
          if (local_7d8.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data);
          }
          if (local_7d8.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data);
          }
          FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&local_7d8.OutputState);
          param_1 = local_db0;
          iVar23 = local_e30;
          iVar59 = local_e6c;
        }
      }
      pwVar49 = L"";
      (**(code **)(this->_padding_ + 0x470))(this,local_538,iVar23,param_1);
      local_480.CameraIndex = iVar23;
      puVar30 = (undefined8 *)(**(code **)(this->_padding_ + 0x468))(this,local_a98,iVar59);
      if (&local_480.CameraNameOverride != (FString *)puVar30) {
        if (local_480.CameraNameOverride.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.CameraNameOverride.Data.AllocatorInstance.Data);
        }
        local_480.CameraNameOverride.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)*puVar30;
        *puVar30 = 0;
        local_480.CameraNameOverride.Data.ArrayNum = *(int *)(puVar30 + 1);
        local_480.CameraNameOverride.Data.ArrayMax = *(int *)((longlong)puVar30 + 0xc);
        puVar30[1] = 0;
      }
      if (local_a98[0] != (void *)0x0) {
        FMemory::Free(local_a98[0]);
      }
      GetStencilLayerNames(this,&local_e80);
      if (this->bAddDefaultLayer != false) {
        ::FString::FString(&local_e20,L"DefaultLayer");
        if (((local_e80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e20) &&
            ((FScriptContainerElement *)&local_e20 <
             local_e80.AllocatorInstance.Data + (longlong)local_e80.ArrayMax * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (local_e80.ArrayNum == local_e80.ArrayMax) {
          local_e80.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_e80.AllocatorInstance,&local_e80.ArrayMax);
        }
        lVar48 = (longlong)local_e80.ArrayNum;
        *(undefined8 *)(local_e80.AllocatorInstance.Data + lVar48 * 0x10) = 0;
        *(FScriptContainerElement **)(local_e80.AllocatorInstance.Data + lVar48 * 0x10) =
             local_e20.Data.AllocatorInstance.Data;
        local_e20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_e80.AllocatorInstance.Data + lVar48 * 0x10 + 8) = local_e20.Data.ArrayNum;
        *(int *)(local_e80.AllocatorInstance.Data + lVar48 * 0x10 + 0xc) = local_e20.Data.ArrayMax;
        local_e20.Data.ArrayNum = 0;
        local_e20.Data.ArrayMax = 0;
        local_e80.ArrayNum = local_e80.ArrayNum + 1;
      }
      local_8d8._0_8_ = 0;
      local_8d8._8_8_ = 0;
      local_8b8 = 0;
      local_8b0 = 0;
      local_8ac = 0x80;
      local_8a8 = 0xffffffff;
      local_8a4 = 0;
      local_898 = (ForElementType<FSetElementId>)0x0;
      local_890 = 0;
      if (0 < local_e80.ArrayNum) {
        pUVar40 = Z_Construct_UClass_AActor_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar40);
        }
        pUVar35 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar40);
        }
        local_a58.Flags = OnlyActiveLevels|SkipPendingKill;
        local_a58.State.bIsSet = false;
        local_d10 = pUVar40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar40);
        }
        FActorIteratorState::FActorIteratorState
                  (&local_a58.State.TypedValue,pUVar35,(TSubclassOf<AActor>)&local_d10);
        local_a58.State.bIsSet = true;
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a58);
        pFVar41 = TOptional<FActorIteratorState>::operator->(&local_a58.State);
        cVar4 = pFVar41->ReachedEnd;
        while (cVar4 == '\0') {
          pFVar41 = TOptional<FActorIteratorState>::operator->(&local_a58.State);
          pAVar42 = FActorIteratorState::GetActorChecked(pFVar41);
          if (pAVar42 == (AActor *)0x0) {
            pFVar29 = GetTypeName<AActor>(&local_9e8);
            if ((pFVar29->Data).ArrayNum != 0) {
              pwVar49 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar49);
          }
          pTVar43 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                              (&pAVar42->OwnedComponents);
          local_d58._padding_._0_4_ = 0;
          local_d58._padding_._4_4_ = 1;
          puVar1 = &(pTVar43->Elements).field_0x10;
          local_d58.UnvisitedBitMask = 0xffffffff;
          local_d58.CurrentBitIndex = 0;
          local_d58.BaseBitIndex = 0;
          local_d58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(pTVar43->Elements).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d58);
          }
          uStack_e58 = CONCAT44(local_d58._padding_._4_4_,(undefined4)local_d58._padding_);
          pTStack_e50 = local_d58.Array;
          uStack_e48 = CONCAT44(local_d58.CurrentBitIndex,local_d58.UnvisitedBitMask);
          uStack_e40 = CONCAT44(local_d58._28_4_,local_d58.BaseBitIndex);
          local_e38 = *(int *)&(pTVar43->Elements).field_0x8 -
                      *(int *)&(pTVar43->Elements).field_0x34;
          local_cb8 = local_d58.Array;
          uStack_ca0._4_4_ = uStack_e34;
          uStack_ca0._0_4_ = local_e38;
          local_e60 = pTVar43;
          local_cc8._0_8_ = pTVar43;
          unique0x10003486 = uStack_e58;
          uStack_cb0 = uStack_e48;
          local_ca8 = uStack_e40;
          pTVar44 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_9b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(pTVar43->Elements).field_0x28);
          uStack_e58 = pTVar44->_padding_;
          pTStack_e50 = pTVar44->Array;
          uStack_e48._0_4_ = pTVar44->UnvisitedBitMask;
          uStack_e48._4_4_ = pTVar44->CurrentBitIndex;
          uStack_e40 = *(longlong *)&pTVar44->BaseBitIndex;
          local_e38 = *(int *)&(pTVar43->Elements).field_0x8 -
                      *(int *)&(pTVar43->Elements).field_0x34;
          local_a88._44_4_ = uStack_e34;
          local_a88.InitialNum = local_e38;
          local_e60 = pTVar43;
          local_a88._padding_ = (longlong)pTVar43;
          local_a88._padding_ = uStack_e58;
          local_a88._padding_ = (longlong)pTStack_e50;
          local_a88._padding_ = uStack_e48;
          local_a88._padding_ = uStack_e40;
          bVar21 = TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_cc8,&local_a88);
          if (bVar21) {
            do {
              pUVar8 = *(UActorComponent **)
                        (*(longlong *)
                          (TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_cc8._0_8_ + (longlong)uStack_cb0._4_4_ * 0x10);
              if (pUVar8 != (UActorComponent *)0x0) {
                pUVar40 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar23 = (int)pUVar40->_padding_;
                if ((iVar23 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar23 * 8)
                    == &pUVar40->_padding_)) {
                  local_e08 = CastChecked<UPrimitiveComponent,UActorComponent>(pUVar8);
                  local_d08 = &local_e08;
                  TSet<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<UPrimitiveComponent_*_const_&>_>
                            (local_8d8,&local_de0,(bool *)&local_d08);
                  lVar48 = (longlong)(int)local_de0.Key;
                  *(ERendererStencilMask *)(local_8d8._0_8_ + 9 + lVar48 * 0x18) =
                       local_e08->CustomDepthStencilWriteMask;
                  *(int *)(local_8d8._0_8_ + 0xc + lVar48 * 0x18) =
                       local_e08->CustomDepthStencilValue;
                  *(byte *)(local_8d8._0_8_ + 8 + lVar48 * 0x18) = local_e08->bRenderCustomDepth;
                }
              }
              uStack_cb0 = CONCAT44(uStack_cb0._4_4_,(uint)uStack_cb0 & ~uStack_cbc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_cc8 + 8));
              bVar21 = TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForConstIterator::operator!=
                                 ((TRangedForConstIterator *)local_cc8,&local_a88);
            } while (bVar21);
          }
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a58);
          pFVar41 = TOptional<FActorIteratorState>::operator->(&local_a58.State);
          cVar4 = pFVar41->ReachedEnd;
        }
        TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_a58.State);
      }
      local_e70 = 0;
      local_e88 = 0;
      if (0 < local_e80.ArrayNum) {
        do {
          uVar24 = local_e70;
          lVar48 = local_e88;
          uVar61 = ~local_e70 >> 0x1f;
          local_dd8 = (TObjectPtr<UMaterialInterface_const_>_u_0 *)CONCAT44(local_dd8._4_4_,uVar61);
          uVar54 = 0;
          if ((int)local_e70 < local_e80.ArrayNum) {
            uVar54 = uVar61;
          }
          if ((uVar54 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar55 = (FMoviePipelinePassIdentifier *)
                    (local_e80.AllocatorInstance.Data + lVar48 * 0x10);
          local_e28 = pFVar55;
          ::FString::FString(&local_bc8,L"camera");
          ::FString::ConcatFF(&local_bd8,&local_e00,(FString *)pFVar55);
          local_e90 = local_e90 | 8;
          ::FString::FString(&local_c38,&local_bd8);
          ::FString::FString(&local_c28,&local_bc8);
          if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
          }
          if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
          }
          iVar23 = local_df0.Data.ArrayNum + -1;
          if (local_df0.Data.ArrayNum == 0) {
            iVar23 = 0;
          }
          ::FString::AssignRange(&local_c28,(wchar_t *)local_df0.Data.AllocatorInstance.Data,iVar23)
          ;
          pUVar40 = Z_Construct_UClass_AActor_NoRegister();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar40);
          }
          pUVar35 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar40);
          }
          local_ba8.Flags = OnlyActiveLevels|SkipPendingKill;
          local_ba8.State.bIsSet = false;
          local_d00 = pUVar40;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar40);
          }
          FActorIteratorState::FActorIteratorState
                    (&local_ba8.State.TypedValue,pUVar35,(TSubclassOf<AActor>)&local_d00);
          local_ba8.State.bIsSet = true;
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_ba8);
          while( true ) {
            if ((local_ba8.State.bIsSet == false) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if (local_ba8.State.TypedValue.ReachedEnd != false) break;
            if ((local_ba8.State.bIsSet == false) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pAVar42 = FActorIteratorState::GetActorChecked(&local_ba8.State.TypedValue);
            if (pAVar42 == (AActor *)0x0) {
              pFVar29 = GetTypeName<AActor>(&local_9f8);
              if ((pFVar29->Data).ArrayNum == 0) {
                pwVar49 = L"";
              }
              else {
                pwVar49 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar49);
            }
            if (this->bAddDefaultLayer == false) {
LAB_14ddfaa33:
              bVar21 = IsUsingDataLayers(this);
              if (bVar21) {
                GetValidDataLayerByIndex(this,&local_ad8,uVar24);
                pUVar45 = (UDataLayerAsset *)
                          FSoftObjectPath::TryLoad(&local_ad8,(FUObjectSerializeContext *)0x0);
                if (pUVar45 != (UDataLayerAsset *)0x0) {
                  pUVar40 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
                  iVar23 = (int)pUVar40->_padding_;
                  if ((iVar23 <= *(int *)(pUVar45->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar45->_padding_ + 0x30) + (longlong)iVar23 * 8) ==
                      &pUVar40->_padding_)) {
                    bVar21 = AActor::ContainsDataLayer(pAVar42,pUVar45);
                    uVar24 = (uint)bVar21;
                    if (local_ad8.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ad8.SubPathString.Data.AllocatorInstance.Data);
                    }
                    goto LAB_14ddfaac7;
                  }
                }
                if (local_ad8.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_ad8.SubPathString.Data.AllocatorInstance.Data);
                }
              }
              else {
                uVar54 = 0;
                if ((int)uVar24 < (this->ActorLayers).ArrayNum) {
                  uVar54 = uVar61;
                }
                if ((uVar54 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pFVar50 = (pAVar42->Layers).AllocatorInstance.Data;
                pFVar14 = pFVar50 + (longlong)(pAVar42->Layers).ArrayNum * 8;
                if (pFVar50 != pFVar14) {
                  do {
                    if (*(longlong *)pFVar50 ==
                        *(longlong *)((this->ActorLayers).AllocatorInstance.Data + lVar48 * 8)) {
                      uVar24 = 1;
                      goto LAB_14ddfaac7;
                    }
                    pFVar50 = pFVar50 + 8;
                  } while (pFVar50 != pFVar14);
                }
              }
              uVar24 = 0;
            }
            else {
              if ((pFVar55->Name).Data.ArrayNum == 0) {
                pwVar49 = L"";
              }
              else {
                pwVar49 = (wchar_t *)(pFVar55->Name).Data.AllocatorInstance.Data;
              }
              iVar23 = FGenericPlatformStricmp::Stricmp(pwVar49,L"DefaultLayer");
              if (iVar23 != 0) goto LAB_14ddfaa33;
              bVar21 = IsActorInAnyStencilLayer(this,pAVar42);
              uVar24 = (uint)bVar21;
            }
LAB_14ddfaac7:
            pTVar43 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                (&pAVar42->OwnedComponents);
            iVar25 = 0;
            uVar61 = 1;
            puVar1 = &(pTVar43->Elements).field_0x10;
            iVar59 = 0;
            iVar23 = *(int *)&(pTVar43->Elements).field_0x28;
            TStack_c90.CurrentBitIndex = 0;
            if (iVar23 != 0) {
              puVar9 = *(uint **)&(pTVar43->Elements).field_0x20;
              puVar60 = (uint *)puVar1;
              if (puVar9 != (uint *)0x0) {
                puVar60 = puVar9;
              }
              uVar54 = *puVar60;
              iVar59 = 0;
              while (uVar54 == 0) {
                iVar25 = iVar25 + 1;
                iVar59 = iVar59 + 0x20;
                TStack_c90.CurrentBitIndex = iVar23;
                if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25)
                goto LAB_14ddfab62;
                uVar54 = puVar60[iVar25];
              }
              uVar61 = ~(uVar54 - 1) & uVar54;
              uVar53 = (ulonglong)uVar61 * 2 + 1;
              lVar48 = 0x3f;
              if (uVar53 != 0) {
                for (; uVar53 >> lVar48 == 0; lVar48 = lVar48 + -1) {
                }
              }
              local_cec = (int)lVar48;
              TStack_c90.CurrentBitIndex = iVar59 + -1 + local_cec;
              if (iVar23 < TStack_c90.CurrentBitIndex) {
                TStack_c90.CurrentBitIndex = iVar23;
              }
            }
LAB_14ddfab62:
            uStack_e58 = CONCAT44(uVar61,iVar25);
            uStack_e48 = CONCAT44(TStack_c90.CurrentBitIndex,0xffffffff);
            uStack_e40 = CONCAT44(local_97c,iVar59);
            local_e38 = *(int *)&(pTVar43->Elements).field_0x8 -
                        *(int *)&(pTVar43->Elements).field_0x34;
            TStack_c90._padding_ = uStack_e58;
            TStack_c90.UnvisitedBitMask = 0xffffffff;
            uStack_c70 = CONCAT44(uStack_e34,local_e38);
            TStack_c90._24_8_ = uStack_e40;
            uVar61 = *(uint *)&(pTVar43->Elements).field_0x28;
            iVar25 = (int)uVar61 >> 5;
            uVar54 = uVar61 & 0xffffffe0;
            local_e60 = pTVar43;
            pTStack_e50 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            local_cf8 = pTVar43;
            local_c98 = pTVar43;
            TStack_c90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if ((((int)uVar61 < 0) || (iVar23 < (int)uVar61)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pTVar20 = local_cf8;
            pwVar49 = L"";
            uVar6 = *(uint *)&(pTVar43->Elements).field_0x28;
            if (uVar61 != uVar6) {
              puVar10 = *(undefined1 **)&(pTVar43->Elements).field_0x20;
              puVar58 = puVar1;
              if (puVar10 != (undefined1 *)0x0) {
                puVar58 = puVar10;
              }
              uVar61 = -1 << ((byte)uVar61 & 0x1f) & *(uint *)(puVar58 + (longlong)iVar25 * 4);
              while (uVar61 == 0) {
                iVar25 = iVar25 + 1;
                uVar54 = uVar54 + 0x20;
                uVar61 = uVar6;
                if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar25)
                goto LAB_14ddfad20;
                uVar61 = *(uint *)(puVar58 + (longlong)iVar25 * 4);
              }
              uVar53 = (ulonglong)(~(uVar61 - 1) & uVar61) * 2 + 1;
              lVar48 = 0x3f;
              if (uVar53 != 0) {
                for (; uVar53 >> lVar48 == 0; lVar48 = lVar48 + -1) {
                }
              }
              local_cf0 = (int)lVar48;
              uVar61 = (uVar54 - 1) + local_cf0;
              if ((int)uVar6 < (int)uVar61) {
                uVar61 = uVar6;
              }
            }
LAB_14ddfad20:
            while( true ) {
              pTVar43 = local_c98;
              if (*(int *)&(local_c98->Elements).field_0x8 -
                  *(int *)&(local_c98->Elements).field_0x34 != (int)uStack_c70) {
                local_e94 = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_e94);
              }
              if (((TStack_c90.CurrentBitIndex == uVar61) &&
                  (TStack_c90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar43 == pTVar20)) break;
              this_01 = *(UPrimitiveComponent **)
                         (*(longlong *)&pTVar43->Elements +
                         (longlong)TStack_c90.CurrentBitIndex * 0x10);
              if (this_01 != (UPrimitiveComponent *)0x0) {
                pUVar40 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar23 = (int)pUVar40->_padding_;
                if ((iVar23 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar23 * 8
                     ) == &pUVar40->_padding_)) {
                  pUVar40 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                  iVar23 = (int)pUVar40->_padding_;
                  if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar23) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) +
                       (longlong)iVar23 * 8) != &pUVar40->_padding_)) {
                    pFVar29 = GetTypeName<UPrimitiveComponent>(&local_9d8);
                    if ((pFVar29->Data).ArrayNum == 0) {
                      pwVar57 = L"";
                    }
                    else {
                      pwVar57 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
                    }
                    pFVar29 = GetFullNameForCastLogError<UActorComponent>
                                        (&local_9c8,(UActorComponent *)this_01);
                    if ((pFVar29->Data).ArrayNum != 0) {
                      pwVar49 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(pwVar49,pwVar57);
                  }
                  UPrimitiveComponent::SetCustomDepthStencilValue(this_01,uVar24);
                  UPrimitiveComponent::SetCustomDepthStencilWriteMask(this_01,ERSM_Default);
                  UPrimitiveComponent::SetRenderCustomDepth(this_01,true);
                }
              }
              TStack_c90.UnvisitedBitMask =
                   TStack_c90.UnvisitedBitMask & ~TStack_c90._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c90);
            }
            TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_ba8);
            pFVar55 = local_e28;
            lVar48 = local_e88;
            this = local_e68;
            uVar61 = (uint)local_dd8;
            uVar24 = local_e70;
          }
          if (local_ba8.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_ba8.State.TypedValue.CurrentWorld,
                       local_ba8.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_ba8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ba8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_ba8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ba8.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
          uVar61 = 0;
          lVar62 = 0;
          if ((this->StencilLayerMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
            local_958 = local_e30;
            local_954 = local_518;
            local_94c = (this->bRenderMainPass != false) + uVar24;
            (**(code **)(this->_padding_ + 0x3b8))(this,&local_d68,local_538,&local_958);
            if ((local_d68 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar11 = local_d68;
            if ((*(int *)(local_d68 + 0x10) < 1) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar11 = **(longlong **)(lVar11 + 8);
            pUVar12 = (local_e68->StencilLayerMaterial).field0_0x0.DebugPtr;
            if (pUVar12 != (UMaterialInterface *)0x0) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (UE::GC::MarkAsReachable((UObject *)pUVar12),
                 UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable((UObject *)pUVar12);
              }
              iVar23 = *(int *)(lVar11 + 0x1a80);
              if (0 < (longlong)iVar23) {
                lVar48 = 0;
                do {
                  uVar24 = 0;
                  if ((int)uVar61 < *(int *)(lVar11 + 0x1a80)) {
                    uVar24 = ~uVar61 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pUVar13 = *(UMaterialInterface **)(lVar48 + 8 + *(longlong *)(lVar11 + 0x1a78));
                  if (pUVar13 == (UMaterialInterface *)0x0) {
                    bVar21 = pUVar12 == (UMaterialInterface *)0x0;
                  }
                  else {
                    bVar21 = pUVar13 == pUVar12;
                  }
                  if (bVar21) {
                    uVar24 = 0;
                    if ((int)uVar61 < *(int *)(lVar11 + 0x1a80)) {
                      uVar24 = ~uVar61 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar21)) {
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                    *(undefined4 *)(*(longlong *)(lVar11 + 0x1a78) + lVar62 * 0x10) = 0x3f800000;
                    lVar48 = local_e88;
                    goto LAB_14ddfb102;
                  }
                  uVar61 = uVar61 + 1;
                  lVar62 = lVar62 + 1;
                  lVar48 = lVar48 + 0x10;
                } while (lVar62 < iVar23);
              }
              pFVar2 = (ForAnyElementType *)(lVar11 + 0x1a78);
              local_dc8[0] = 0x3f800000;
              local_dc0 = pUVar12;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar12);
              }
              if (((pFVar2->Data <= (FScriptContainerElement *)local_dc8) &&
                  ((FScriptContainerElement *)local_dc8 <
                   pFVar2->Data + (longlong)*(int *)(lVar11 + 0x1a84) * 0x10)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar23 = *(int *)(lVar11 + 0x1a80);
              if (iVar23 == *(int *)(lVar11 + 0x1a84)) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,pFVar2,(int *)(lVar11 + 0x1a84));
              }
              *(int *)(lVar11 + 0x1a80) = iVar23 + 1;
              pFVar14 = pFVar2->Data;
              *(undefined4 *)(pFVar14 + (longlong)iVar23 * 0x10) = local_dc8[0];
              *(UMaterialInterface **)(pFVar14 + (longlong)iVar23 * 0x10 + 8) = local_dc0;
              lVar48 = local_e88;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_dc0 != (UMaterialInterface *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_dc0);
                lVar48 = local_e88;
              }
            }
LAB_14ddfb102:
            pUVar19 = local_e68;
            pFVar56 = (FRenderTarget *)0x0;
            pUVar12 = (local_e68->StencilLayerMaterial).field0_0x0.DebugPtr;
            pFVar46 = pFVar56;
            if (pUVar12 != (UMaterialInterface *)0x0) {
              pUVar40 = Z_Construct_UClass_UBlendableInterface_NoRegister();
              pFVar46 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)pUVar12,pUVar40);
            }
            (**(code **)(pFVar46->_padding_ + 0x10))(pFVar46,lVar11,fVar18);
            (**(code **)(pUVar19->_padding_ + 0x420))(pUVar19,&local_db8,local_508,&local_958);
            bVar21 = FWeakObjectPtr::IsValid(&local_db8);
            if ((!bVar21) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ViewRenderTarget.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                                    ,0x330,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pUVar33 = (UTextureRenderTarget *)FWeakObjectPtr::Get(&local_db8);
            pFVar34 = UTextureRenderTarget::GameThread_GetRenderTargetResource(pUVar33);
            if (((pFVar34 == (FTextureRenderTargetResource *)0x0) ||
                (pFVar56 = (FRenderTarget *)&pFVar34->_padding_, pFVar56 == (FRenderTarget *)0x0))
               && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                      ("RenderTarget",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                                       ,0x333,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            this = local_e68;
            TVar5 = *(Type *)(lVar11 + 0x1bf8);
            pUVar27 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_e68);
            pUVar35 = (UWorld *)(**(code **)(pUVar27->_padding_ + 0x180))(pUVar27);
            FCanvas::FCanvas(&local_178,pFVar56,(FHitProxyConsumer *)0x0,pUVar35,TVar5,
                             CDM_DeferDrawing,fVar18);
            pIVar36 = GetRendererModule();
            (**(code **)((longlong)*pIVar36 + 0x40))(pIVar36,&local_178,local_d68);
            local_8e0 = (undefined ***)0x0;
            local_8f8 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::`87'::<lambda_2>,1,0>
                         ::_vftable_;
            local_908[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>,void,FRHICommandListImmediate_&>
                           ::Call;
            pFStack_8f0 = pFVar56;
            pFVar37 = FRenderCommandList::GetInstanceTLS();
            if (pFVar37 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl_::__l87::TSTR_TransitionTextureSRVState824>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_908);
            }
            else {
              pFVar38 = FRenderCommandList::GetRenderThread(pFVar37);
              local_848._0_8_ = local_908[0];
              local_820 = local_8e0;
              local_8e0 = (undefined ***)0x0;
              local_838 = local_8f8;
              pFStack_830 = pFStack_8f0;
              local_828 = local_8e8;
              local_908[0] = (code *)0x0;
              local_818 = 2;
              pFVar39 = (FRenderCommandTag *)
                        TRenderCommandTag<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::TSTR_TransitionTextureSRVState824>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (pFVar38,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                  *)local_848,pFVar39);
              uVar53 = (ulonglong)local_818;
              if ((2 < uVar53) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar21)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar53] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_848._0_8_ != (code *)0x0) {
                  pppuVar51 = (undefined ***)(local_848 + 0x10);
                  if (local_820 != (undefined ***)0x0) {
                    pppuVar51 = local_820;
                  }
                  (*(code *)(*pppuVar51)[2])();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar53])(local_848);
              }
            }
            if (local_908[0] != (code *)0x0) {
              pppuVar51 = &local_8f8;
              if (local_8e0 != (undefined ***)0x0) {
                pppuVar51 = local_8e0;
              }
              (*(code *)(*pppuVar51)[2])();
            }
            pcVar15 = *(code **)(this->_padding_ + 0x448);
            iVar23 = (**(code **)(this->_padding_ + 1000))(this);
            local_e28 = &local_ab8;
            ::FString::FString(&local_ab8.Name,&local_c38);
            ::FString::FString(&local_ab8.CameraName,&local_c28);
            (*pcVar15)(this,local_538,&local_ab8,iVar23 + 1);
            FCanvas::~FCanvas(&local_178);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d60);
            uVar24 = local_e70;
          }
          if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c28.Data.AllocatorInstance.Data);
          }
          if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c38.Data.AllocatorInstance.Data);
          }
          local_e70 = uVar24 + 1;
          local_e88 = lVar48 + 1;
        } while ((int)local_e70 < local_e80.ArrayNum);
      }
      local_d38._padding_._0_4_ = 0;
      local_d38._padding_._4_4_ = 1;
      local_d38.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10);
      local_d38.UnvisitedBitMask = 0xffffffff;
      local_d38.CurrentBitIndex = 0;
      local_d38.BaseBitIndex = 0;
      if (local_8b0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d38);
      }
      local_e60 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                   *)local_8d8;
      uStack_e58 = CONCAT44(local_d38._padding_._4_4_,(undefined4)local_d38._padding_);
      pTStack_e50 = local_d38.Array;
      uStack_e48._4_4_ = local_d38.CurrentBitIndex;
      uStack_e48._0_4_ = local_d38.UnvisitedBitMask;
      uStack_e40._4_4_ = local_d38._28_4_;
      uStack_e40._0_4_ = local_d38.BaseBitIndex;
      local_e38 = local_8d8._8_4_ - local_8a4;
      TStack_c60.Array = local_d38.Array;
      uStack_c40 = CONCAT44(uStack_e34,local_e38);
      local_c68 = local_e60;
      TStack_c60._padding_ = uStack_e58;
      TStack_c60._16_8_ = uStack_e48;
      TStack_c60._24_8_ = uStack_e40;
      pTVar44 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_978,(TBitArray<FDefaultBitArrayAllocator> *)(local_8d8 + 0x10),
                           local_8b0);
      uStack_e58 = pTVar44->_padding_;
      pTVar16 = pTVar44->Array;
      lVar48._0_4_ = pTVar44->UnvisitedBitMask;
      lVar48._4_4_ = pTVar44->CurrentBitIndex;
      uStack_e40 = *(longlong *)&pTVar44->BaseBitIndex;
      pTStack_e50 = pTVar16;
      uStack_e48 = lVar48;
      while( true ) {
        pTVar43 = local_c68;
        if (*(int *)&(local_c68->Elements).field_0x8 - *(int *)&(local_c68->Elements).field_0x34 !=
            (int)uStack_c40) {
          local_e93[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e93);
        }
        lVar62 = (longlong)TStack_c60.CurrentBitIndex;
        if (((TStack_c60.CurrentBitIndex == lVar48._4_4_) && (TStack_c60.Array == pTVar16)) &&
           (pTVar43 ==
            (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
            local_8d8)) break;
        lVar11 = *(longlong *)&pTVar43->Elements;
        UPrimitiveComponent::SetCustomDepthStencilValue
                  (*(UPrimitiveComponent **)(lVar11 + lVar62 * 0x18),
                   *(int *)(lVar11 + 0xc + lVar62 * 0x18));
        UPrimitiveComponent::SetCustomDepthStencilWriteMask
                  (*(UPrimitiveComponent **)(lVar11 + lVar62 * 0x18),
                   *(ERendererStencilMask *)(lVar11 + 9 + lVar62 * 0x18));
        UPrimitiveComponent::SetRenderCustomDepth
                  (*(UPrimitiveComponent **)(lVar11 + lVar62 * 0x18),
                   *(bool *)(lVar11 + 8 + lVar62 * 0x18));
        TStack_c60.UnvisitedBitMask = TStack_c60.UnvisitedBitMask & ~TStack_c60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c60);
      }
      local_890 = 0;
      if (local_898 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_898);
      }
      TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl_::__l46::FStencilValues>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_8d8);
      DestructItems<FString,int>((FString *)local_e80.AllocatorInstance.Data,local_e80.ArrayNum);
      if (local_e80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e80.AllocatorInstance.Data);
      }
      local_350 = &___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
      if (local_2b8 != (void *)0x0) {
        FMemory::Free(local_2b8);
      }
      if (local_2c8 != (void *)0x0) {
        FMemory::Free(local_2c8);
      }
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&local_480);
      if (local_df0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_df0.Data.AllocatorInstance.Data);
      }
      if (local_e00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e00.Data.AllocatorInstance.Data);
      }
      local_e6c = local_e6c + 1;
      param_1 = local_db0;
    } while (local_e6c < local_dd0);
  }
  return;
}

// SetupImpl @ 14ddfdc20

/* WARNING: Removing unreachable block (ram,0x00014ddfec76) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineDeferredPassBase::SetupImpl
          (UMoviePipelineDeferredPassBase *this,FMoviePipelineRenderPassInitSettings *param_1)

{
  FSceneViewStateSystemMemoryMirror *pFVar1;
  Type *pTVar2;
  FMoviePipelineRenderPassInitSettings *pFVar3;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  UMoviePipelineExecutorShot *pUVar7;
  longlong *plVar8;
  FName _Src;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  UMoviePipeline *pUVar17;
  FSoftObjectPath *pFVar18;
  UMaterialInterface *pUVar19;
  UObject *pUVar20;
  UClass *pUVar21;
  UMoviePipeline *pUVar22;
  UMoviePipelinePrimaryConfig *pUVar23;
  UMoviePipelineSetting *pUVar24;
  TPimplPtr<FSceneViewStateSystemMemoryMirror,0> TVar25;
  FPerTile *pFVar26;
  FMoviePipelineRenderPassInitSettings *pFVar27;
  TSharedRef<FOpenColorIODisplayExtension,1> *pTVar28;
  IConsoleVariable *this_00;
  FScriptContainerElement *pFVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  size_t _Size;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  int *piVar34;
  FScriptContainerElement *pFVar35;
  FName *pFVar36;
  longlong lVar37;
  FName *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  TBitArray<FDefaultBitArrayAllocator> *pTVar42;
  float fVar43;
  float fVar44;
  FSoftObjectPath *local_res8;
  FMoviePipelineRenderPassInitSettings *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2d8 [4];
  int local_2d4;
  int local_2d0;
  int local_2cc;
  UObject *local_2c8;
  undefined8 local_2c0;
  FString local_2b8;
  FLLMScope local_2a8 [2];
  FScriptContainerElement *local_2a0;
  undefined8 local_298;
  TIntPoint<int>_u_0 local_290;
  TIntPoint<int>_u_0 local_288;
  int local_280;
  int local_278;
  int local_274;
  undefined8 local_270;
  FOpenColorIODisplayExtension *local_268;
  FSharedReferencer<1> local_260;
  Type *local_258;
  FMoviePipelineRenderPassInitSettings *pFStack_250;
  Type *local_248;
  FSharedReferencer<1> FStack_240;
  undefined1 local_238 [24];
  TIntPoint<int>_u_0 local_220;
  TObjectPtr<UMaterialInterface> local_218;
  int local_210;
  undefined4 local_20c;
  UObject *local_208;
  UClass *local_200;
  longlong local_1f8;
  FName local_1f0;
  FMemScope local_1e8;
  TIntPoint<int>_u_0 local_1e0;
  UMoviePipelineSetting *local_1d8;
  FString local_1d0;
  FSetContext local_1c0;
  FScriptContainerElement *local_1a0;
  int iStack_198;
  uint uStack_194;
  FScriptContainerElement *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  FScriptContainerElement *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  undefined1 local_140 [24];
  void *local_128;
  undefined1 local_118 [8];
  Type *local_110;
  FMoviePipelineRenderPassInitSettings *local_108;
  TSharedRef<FOpenColorIODisplayExtension,1> local_100;
  FString local_f0;
  undefined1 local_e0 [8];
  TReferenceControllerBase<1> *local_d8;
  FSoftObjectPath local_d0;
  undefined4 local_94;
  
  pFVar3 = (FMoviePipelineRenderPassInitSettings *)(local_238 + 0x10);
  local_res10 = param_1;
  FSceneViewStateReference::Allocate
            ((FSceneViewStateReference *)&this->_padding_,param_1->FeatureLevel);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name221,L"MoviePipeline/DeferredPassSetup");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_2a8,LLMScope_Name221,false,None,Default,true);
  FMemScope::FMemScope(&local_1e8,&LLMScope_Name221,true);
  if ((this->bAddDefaultLayer == false) || (iVar14 = GetNumStencilLayers(this), iVar14 != 0)) {
    pFVar18 = FSoftObjectPath::FSoftObjectPath(&local_d0,&StencilLayerMaterialAsset);
    local_140._0_8_ = 0;
    local_res8 = pFVar18;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_140 + 8),pFVar18);
    pFVar35 = (pFVar18->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    pUVar19 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous
                        ((TSoftObjectPtr<UMaterialInterface> *)local_140);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar19 == (UMaterialInterface *)0x0)) {
      (this->StencilLayerMaterial).field0_0x0.DebugPtr = pUVar19;
      if ((pUVar19 == (UMaterialInterface *)0x0) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
        FSoftObjectPath::ToString((FSoftObjectPath *)(local_140 + 8),&local_1d0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
      (this->StencilLayerMaterial).field0_0x0.DebugPtr = pUVar19;
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    pFVar29 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
    iVar14 = (this->AdditionalPostProcessMaterials).ArrayNum;
    pFVar35 = pFVar29 + (longlong)iVar14 * 0x48;
    while( true ) {
      this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar29 + 0x18);
      if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar14) {
        local_res8 = (FSoftObjectPath *)((ulonglong)local_res8 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      pFVar38 = &this_01[-1].ObjectID.AssetPath.AssetName;
      if (pFVar38 == (FName *)pFVar35) break;
      if ((char)(pFVar38->ComparisonIndex).Value != '\0') {
        pUVar20 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        if (pUVar20 == (UObject *)0x0) {
          if ((this_01->ObjectID).AssetPath.PackageName == (FName)0x0) goto LAB_14ddfdf9f;
          FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar20 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        }
        if (pUVar20 != (UObject *)0x0) {
          pUVar21 = Z_Construct_UClass_UMaterialInterface_NoRegister();
          iVar15 = (int)pUVar21->_padding_;
          if ((iVar15 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar21->_padding_)) {
            pTVar4 = &this->ActivePostProcessMaterials;
            local_2c8 = pUVar20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar20);
            }
            pFVar29 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar29 <= (FScriptContainerElement *)&local_2c8) &&
                ((FScriptContainerElement *)&local_2c8 <
                 pFVar29 + (longlong)(this->ActivePostProcessMaterials).ArrayMax * 8)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            piVar34 = &(this->ActivePostProcessMaterials).ArrayMax;
            iVar15 = (this->ActivePostProcessMaterials).ArrayNum;
            if (iVar15 == *piVar34) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar4->AllocatorInstance,piVar34);
            }
            (this->ActivePostProcessMaterials).ArrayNum = iVar15 + 1;
            *(UObject **)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_2c8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_2c8 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_2c8);
            }
            if ((char)this_01[1].WeakPtr.ObjectIndex != '\0') {
              local_208 = pUVar20;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              ::Emplace<TObjectPtr<UMaterialInterface>_>
                        (&this->ActiveHighPrecisionPostProcessMaterials,&local_218,
                         (bool *)&local_208);
            }
          }
        }
      }
LAB_14ddfdf9f:
      pFVar29 = (FScriptContainerElement *)&this_01[1].ObjectID;
    }
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar22 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    uVar16 = pUVar22->CurrentShotIndex;
    uVar31 = 0;
    if ((int)uVar16 < (pUVar17->ActiveShotList).ArrayNum) {
      uVar31 = ~uVar16 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar7 = *(UMoviePipelineExecutorShot **)
              ((pUVar17->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar23 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar17);
    local_200 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_200 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_200);
    }
    pUVar24 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                        ((TSubclassOf<UMoviePipelineSetting>)&local_200,pUVar23,pUVar7);
    local_1d8 = pUVar24;
    local_280 = (**(code **)(this->_padding_ + 0x450))(this);
    fVar12 = __real_40000000;
    fVar11 = __real_bf000000;
    fVar10 = __real_3f800000;
    local_2d4 = 0;
    local_2cc = 0;
    if (0 < local_280) {
      do {
        iVar41 = local_2cc;
        iVar15 = local_2d4;
        piVar34 = &(this->CameraViewStateData).ArrayMax;
        (**(code **)(this->_padding_ + 0x480))(this,&local_278,local_2cc);
        fVar44 = (float)(int)pUVar24[1]._padding_;
        fVar43 = fVar10 / fVar44;
        iVar14 = -((int)ROUND(fVar11 - (fVar43 + fVar43) * (float)local_274) >> 1);
        iVar30 = -((int)ROUND(fVar11 - ((float)local_278 + (float)local_278) / fVar44) >> 1);
        fVar43 = (float)iVar30;
        local_298 = CONCAT44(iVar14 + ((int)ROUND(fVar11 - (float)iVar14 * fVar12 *
                                                           *(float *)&pUVar24[1]._padding_) >> 1) *
                                      -2,
                             iVar30 + ((int)ROUND(fVar11 - (fVar43 + fVar43) *
                                                           *(float *)&pUVar24[1]._padding_) >> 1) *
                                      -2);
        local_2c0 = local_298;
        (**(code **)(this->_padding_ + 0x420))(this,local_118,&local_2c0);
        (**(code **)(this->_padding_ + 0x438))(this,local_e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
        iVar14 = (this->CameraViewStateData).ArrayNum;
        if (iVar14 == *piVar34) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&(this->CameraViewStateData).AllocatorInstance,piVar34);
        }
        (this->CameraViewStateData).ArrayNum = iVar14 + 1;
        pFVar35 = (this->CameraViewStateData).AllocatorInstance.Data + (longlong)iVar14 * 0x58;
        local_2a0 = pFVar35;
        DefaultConstructItems<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int>
                  (pFVar35,1);
        if (*(char *)((longlong)&pUVar24[1]._padding_ + 4) == '\0') {
          local_2d0 = 1;
LAB_14ddfe2ea:
          iVar41 = 0;
LAB_14ddfe2f0:
          do {
            uVar16 = 0;
            do {
              uVar39 = iVar41 - uVar16 ^ uVar16 >> 0xd;
              uVar31 = (-0x61c88647 - uVar16) - uVar39 ^ uVar39 << 8;
              uVar32 = (uVar16 - uVar31) - uVar39 ^ uVar31 >> 0xd;
              uVar39 = (uVar39 - uVar32) - uVar31 ^ uVar32 >> 0xc;
              uVar31 = (uVar31 - uVar39) - uVar32 ^ uVar39 << 0x10;
              uVar32 = (uVar32 - uVar31) - uVar39 ^ uVar31 >> 5;
              uVar39 = (uVar39 - uVar32) - uVar31 ^ uVar32 >> 3;
              uVar31 = (uVar31 - uVar39) - uVar32 ^ uVar39 << 10;
              local_288._s_0.X = iVar41;
              local_288._s_0.Y = uVar16;
              pFVar26 = TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                        ::FindOrAddImpl<UE::Math::TIntPoint<int>_>
                                  ((TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                                    *)pFVar35,(uVar32 - uVar31) - uVar39 ^ uVar31 >> 0xf,
                                   (TIntPoint<int> *)&local_288._s_0);
              if (this->bRenderMainPass != false) {
                iVar14 = (pFVar26->SceneViewStates).ArrayNum;
                if (iVar14 == (pFVar26->SceneViewStates).ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,(ForAnyElementType *)pFVar26,
                                      &(pFVar26->SceneViewStates).ArrayMax);
                }
                (pFVar26->SceneViewStates).ArrayNum = iVar14 + 1;
                DefaultConstructItems<FSceneViewStateReference,int>
                          ((pFVar26->SceneViewStates).AllocatorInstance.Data +
                           (longlong)iVar14 * 0x38,1);
              }
              iVar14 = GetNumStencilLayers(this);
              if ((0 < iVar14) && (this->bAddDefaultLayer != false)) {
                iVar14 = (pFVar26->SceneViewStates).ArrayNum;
                if (iVar14 == (pFVar26->SceneViewStates).ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,(ForAnyElementType *)pFVar26,
                                      &(pFVar26->SceneViewStates).ArrayMax);
                  (pFVar26->SceneViewStates).ArrayNum = iVar14;
                }
                (pFVar26->SceneViewStates).ArrayNum = iVar14 + 1;
                DefaultConstructItems<FSceneViewStateReference,int>
                          ((pFVar26->SceneViewStates).AllocatorInstance.Data +
                           (longlong)iVar14 * 0x38,1);
              }
              iVar15 = 0;
              iVar14 = GetNumStencilLayers(this);
              if (0 < iVar14) {
                do {
                  iVar14 = (pFVar26->SceneViewStates).ArrayNum;
                  if (iVar14 == (pFVar26->SceneViewStates).ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x838,(ForAnyElementType *)pFVar26,
                                        &(pFVar26->SceneViewStates).ArrayMax);
                    (pFVar26->SceneViewStates).ArrayNum = iVar14;
                  }
                  (pFVar26->SceneViewStates).ArrayNum = iVar14 + 1;
                  DefaultConstructItems<FSceneViewStateReference,int>
                            ((pFVar26->SceneViewStates).AllocatorInstance.Data +
                             (longlong)iVar14 * 0x38,1);
                  iVar15 = iVar15 + 1;
                  iVar14 = GetNumStencilLayers(this);
                } while (iVar15 < iVar14);
              }
              uVar16 = uVar16 + 1;
              pFVar35 = local_2a0;
            } while ((int)uVar16 < local_2d0);
            iVar41 = iVar41 + 1;
            iVar15 = local_2d4;
          } while (iVar41 < local_2d0);
        }
        else {
          iVar14 = (int)pUVar24[1]._padding_;
          local_2d0 = iVar14;
          if (1 < iVar14) {
            if (*(char *)((longlong)&pUVar24[1]._padding_ + 5) != '\0') {
              TVar25 = FSceneViewStateInterface::SystemMemoryMirrorAllocate();
              pFVar1 = (FSceneViewStateSystemMemoryMirror *)(pFVar35 + 0x50);
              if (TVar25.Ptr != pFVar1) {
                lVar33 = *(longlong *)&pFVar1->TextureMirrors;
                *(undefined8 *)&pFVar1->TextureMirrors =
                     *(undefined8 *)&(TVar25.Ptr)->TextureMirrors;
                *(undefined8 *)&(TVar25.Ptr)->TextureMirrors = 0;
                if (lVar33 != 0) {
                  (**(code **)(lVar33 + -0x10))();
                }
              }
              if (local_1f8 != 0) {
                (**(code **)(local_1f8 + -0x10))();
              }
            }
            if ((this->bRenderMainPass != false) &&
               (bVar13 = GetManualExposureEnabledForCamera(this,iVar41), !bVar13)) {
              local_290 = (TIntPoint<int>_u_0)0xffffffffffffffff;
              local_1e0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
              uVar16 = UE::Math::GetTypeHash<int>((TIntPoint<int> *)&local_1e0._s_0);
              pFVar26 = TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                        ::FindOrAddImpl<UE::Math::TIntPoint<int>_>
                                  ((TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
                                    *)pFVar35,uVar16,(TIntPoint<int> *)&local_290._s_0);
              piVar34 = &(pFVar26->SceneViewStates).ArrayMax;
              iVar14 = (pFVar26->SceneViewStates).ArrayNum;
              if (iVar14 == *piVar34) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x838,(ForAnyElementType *)pFVar26,piVar34);
              }
              (pFVar26->SceneViewStates).ArrayNum = iVar14 + 1;
              DefaultConstructItems<FSceneViewStateReference,int>
                        ((pFVar26->SceneViewStates).AllocatorInstance.Data + (longlong)iVar14 * 0x38
                         ,1);
              goto LAB_14ddfe2ea;
            }
          }
          iVar41 = 0;
          if (0 < iVar14) goto LAB_14ddfe2f0;
        }
        if (this->bRenderMainPass != false) {
          iVar15 = iVar15 + 1;
          local_2d4 = iVar15;
        }
        iVar14 = GetNumStencilLayers(this);
        if ((0 < iVar14) && (this->bAddDefaultLayer != false)) {
          iVar15 = iVar15 + 1;
          local_2d4 = iVar15;
        }
        iVar30 = 0;
        iVar41 = GetNumStencilLayers(this);
        iVar14 = local_2d4;
        if (0 < iVar41) {
          do {
            iVar15 = iVar15 + 1;
            iVar30 = iVar30 + 1;
            iVar41 = GetNumStencilLayers(this);
            iVar14 = iVar15;
          } while (iVar30 < iVar41);
        }
        local_2d4 = iVar14;
        iStack_198 = 0;
        uStack_194 = 1;
        local_190 = pFVar35 + 0x10;
        local_180 = 0;
        iVar14 = *(int *)(pFVar35 + 0x28);
        iStack_184 = 0;
        if (iVar14 != 0) {
          pFVar29 = local_190;
          if (*(FScriptContainerElement **)(pFVar35 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar29 = *(FScriptContainerElement **)(pFVar35 + 0x20);
          }
          uVar16 = *(uint *)&pFVar29->field_0x0;
          while (uVar16 == 0) {
            iStack_198 = iStack_198 + 1;
            local_180 = local_180 + 0x20;
            iStack_184 = iVar14;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198)
            goto LAB_14ddfe570;
            uVar16 = *(uint *)(pFVar29 + (longlong)iStack_198 * 4);
          }
          uStack_194 = ~(uVar16 - 1) & uVar16;
          uVar6 = (ulonglong)uStack_194 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_218.field0_0x0._4_4_ = (undefined4)lVar33;
          iStack_184 = local_180 + -1 + local_218.field0_0x0._4_4_;
          if (iVar14 < iStack_184) {
            iStack_184 = iVar14;
          }
        }
LAB_14ddfe570:
        uStack_188 = 0xffffffff;
        uStack_17c = local_94;
        iStack_178 = *(int *)(pFVar35 + 8) - *(int *)(pFVar35 + 0x34);
        TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
        TStack_168.CurrentBitIndex = iStack_184;
        TStack_168.UnvisitedBitMask = 0xffffffff;
        TStack_168._28_4_ = local_94;
        TStack_168.BaseBitIndex = local_180;
        uStack_148 = CONCAT44(uStack_174,iStack_178);
        uVar16 = *(uint *)(pFVar35 + 0x28);
        iVar14 = (int)uVar16 >> 5;
        pTVar42 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar35 + 0x10);
        uVar31 = uVar16 & 0xffffffe0;
        local_1a0 = pFVar35;
        local_170 = pFVar35;
        TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_190;
        if ((((int)uVar16 < 0) || (*(int *)(pFVar35 + 0x28) < (int)uVar16)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar29 = local_2a0;
        uVar32 = *(uint *)(pFVar35 + 0x28);
        if (uVar16 != uVar32) {
          pFVar40 = (FScriptContainerElement *)pTVar42;
          if (*(FScriptContainerElement **)(pFVar35 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar40 = *(FScriptContainerElement **)(pFVar35 + 0x20);
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(pFVar40 + (longlong)iVar14 * 4);
          while (uVar16 == 0) {
            iVar14 = iVar14 + 1;
            uVar31 = uVar31 + 0x20;
            uVar16 = uVar32;
            if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar14)
            goto LAB_14ddfe6a3;
            uVar16 = *(uint *)(pFVar40 + (longlong)iVar14 * 4);
          }
          uVar6 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
          lVar33 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_210 = (int)lVar33;
          uVar16 = (uVar31 - 1) + local_210;
          if ((int)uVar32 < (int)uVar16) {
            uVar16 = uVar32;
          }
        }
LAB_14ddfe6a3:
        while( true ) {
          pFVar35 = local_170;
          if (*(int *)(local_170 + 8) - *(int *)(local_170 + 0x34) != (int)uStack_148) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          pFVar27 = local_res10;
          if (((TStack_168.CurrentBitIndex == uVar16) && (TStack_168.Array == pTVar42)) &&
             (pFVar35 == pFVar29)) break;
          lVar37 = (longlong)TStack_168.CurrentBitIndex * 0x20;
          lVar33 = *(longlong *)&pFVar35->field_0x0;
          uVar31 = 0;
          if (0 < *(int *)(lVar37 + 0x10 + lVar33)) {
            do {
              uVar32 = 0;
              if ((int)uVar31 < *(int *)(lVar37 + 0x10 + lVar33)) {
                uVar32 = ~uVar31 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FSceneViewStateReference::Allocate
                        ((FSceneViewStateReference *)
                         ((longlong)(int)uVar31 * 0x38 + *(longlong *)(lVar37 + 8 + lVar33)),
                         pFVar27->FeatureLevel);
              uVar31 = uVar31 + 1;
            } while ((int)uVar31 < *(int *)(lVar37 + 0x10 + lVar33));
            pTVar42 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar29 + 0x10);
          }
          TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
        }
        local_2cc = local_2cc + 1;
        pUVar24 = local_1d8;
      } while (local_2cc < local_280);
    }
    iVar14 = local_280 * (this->ActivePostProcessMaterials).ArrayNum;
    iVar15 = local_2d4 + 1;
    pFVar27 = ::operator_new(0x60);
    local_res10 = pFVar27;
    if (pFVar27 == (FMoviePipelineRenderPassInitSettings *)0x0) {
      pFVar27 = (FMoviePipelineRenderPassInitSettings *)0x0;
    }
    else {
      (pFVar27->TileCount).field0_0x0._s_0.X = 1;
      (pFVar27->TileCount).field0_0x0._s_0.Y = 1;
      (pFVar27->BackbufferResolution).field0_0x0 =
           (TIntPoint<int>_u_0)
           &
           ___7__TIntrusiveReferenceController_U__TAccumulatorPool_UFImageOverlappedAccumulator_____00_SharedPointerInternals__6B_
      ;
      TAccumulatorPool<FImageOverlappedAccumulator>::TAccumulatorPool<FImageOverlappedAccumulator>
                ((TAccumulatorPool<FImageOverlappedAccumulator> *)&pFVar27->FeatureLevel,
                 (iVar14 + iVar15) * 3);
    }
    pTVar2 = &pFVar27->FeatureLevel;
    local_258 = pTVar2;
    pFStack_250 = pFVar27;
    if (pTVar2 == (Type *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else if (((*(longlong *)((longlong)&pFVar27[1].BackbufferResolution.field0_0x0 + 4) == 0) ||
             (lVar33 = *(longlong *)((longlong)&pFVar27[1].TileCount.field0_0x0 + 4), lVar33 == 0))
            || (*(int *)(lVar33 + 8) < 1)) {
      if (pFVar27 != (FMoviePipelineRenderPassInitSettings *)0x0) {
        LOCK();
        (pFVar27->TileCount).field0_0x0._s_0.X = (pFVar27->TileCount).field0_0x0._s_0.X + 1;
        UNLOCK();
      }
      *(Type **)((longlong)&pFVar27[1].BackbufferResolution.field0_0x0 + 4) = pTVar2;
      local_110 = pTVar2;
      local_108 = pFVar27;
      if (pFVar27 !=
          *(FMoviePipelineRenderPassInitSettings **)((longlong)&pFVar27[1].TileCount.field0_0x0 + 4)
         ) {
        if (pFVar27 != (FMoviePipelineRenderPassInitSettings *)0x0) {
          LOCK();
          piVar34 = &(pFVar27->TileCount).field0_0x0._s_0.Y;
          *piVar34 = *piVar34 + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)&pFVar27[1].TileCount.field0_0x0._s_0.Y;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar34 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        *(FMoviePipelineRenderPassInitSettings **)&pFVar27[1].TileCount.field0_0x0._s_0.Y = pFVar27;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar27);
    }
    local_248 = local_258;
    FStack_240.ReferenceController = (TReferenceControllerBase<1> *)pFStack_250;
    if (pFVar27 != (FMoviePipelineRenderPassInitSettings *)0x0) {
      LOCK();
      (pFVar27->TileCount).field0_0x0._s_0.X = (pFVar27->TileCount).field0_0x0._s_0.X + 1;
      UNLOCK();
    }
    if (&this->AccumulatorPool != (TSharedPtr<FAccumulatorPool,1> *)&local_248) {
      (this->AccumulatorPool).Object = (FAccumulatorPool *)pTVar2;
      local_248 = (Type *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AccumulatorPool).SharedReferenceCount,&FStack_240);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_240.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
    if ((this->PreviousCustomDepthValue).bIsSet != false) {
      (this->PreviousCustomDepthValue).bIsSet = false;
    }
    pTVar28 = FSceneViewExtensions::NewExtension<FOpenColorIODisplayExtension>(&local_100);
    local_268 = pTVar28->Object;
    local_260.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
    if (local_260.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_260.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_260.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->OCIOSceneViewExtension != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_268) {
      (this->OCIOSceneViewExtension).Object = local_268;
      local_268 = (FOpenColorIODisplayExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OCIOSceneViewExtension).SharedReferenceCount,&local_260);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    if ((this->bAddDefaultLayer != false) || (iVar14 = GetNumStencilLayers(this), 0 < iVar14)) {
      if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
         ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
          && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Singleton != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x4fb,L""), bVar13)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = (IConsoleVariable *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"r.CustomDepth",1);
      if (this_00 != (IConsoleVariable *)0x0) {
        iVar14 = (**(code **)(*(longlong *)this_00 + 200))(this_00);
        if ((TOptional<int> *)&local_20c != &this->PreviousCustomDepthValue) {
          (this->PreviousCustomDepthValue).TypedValue = iVar14;
          (this->PreviousCustomDepthValue).bIsSet = true;
        }
        if (((this->PreviousCustomDepthValue).bIsSet != true) ||
           ((this->PreviousCustomDepthValue).TypedValue != 3)) {
          if (4 < (byte)LogMovieRenderPipeline._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          }
          local_270 = 0;
          local_1c0.Flags = ECVF_SetByProjectSetting;
          local_1c0.PriorityMode = Set;
          local_1c0.Tag.ComparisonIndex.Value = 0;
          local_1c0.Tag.Number = 0;
          local_1c0.TagMode = Set;
          local_1c0.MaxPriority = ECVF_SetByConsole;
          local_1c0.MinPriority = 0x1000000;
          IConsoleVariable::Set(this_00,3,&local_1c0);
        }
      }
    }
    bVar13 = IsUsingDataLayers(this);
    if (bVar13) {
      pFVar38 = (FName *)(this->DataLayers).AllocatorInstance.Data;
      iVar14 = (this->DataLayers).ArrayNum;
      pFVar36 = pFVar38 + (longlong)iVar14 * 4;
      while( true ) {
        if ((this->DataLayers).ArrayNum != iVar14) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar38 == pFVar36) break;
        local_238._0_8_ = *pFVar38;
        local_238._8_8_ = pFVar38[1];
        local_238._16_8_ = (FScriptContainerElement *)0x0;
        local_220._s_0.X = pFVar38[3].ComparisonIndex.Value;
        _Size = (size_t)local_220._s_0.X;
        _Src = pFVar38[2];
        local_res10 = pFVar3;
        if (local_220._s_0.X == 0) {
          local_220._s_0.Y = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_220._s_0.X,0,(ForAnyElementType *)pFVar3,local_220._s_0.X,
                     &local_220._s_0.Y);
          memcpy((void *)local_238._16_8_,(void *)_Src,_Size);
        }
        pUVar20 = FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)local_238,(FUObjectSerializeContext *)0x0);
        if (pUVar20 != (UObject *)0x0) {
          pUVar21 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
          iVar15 = (int)pUVar21->_padding_;
          if ((iVar15 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar21->_padding_)) {
            pTVar5 = &this->UniqueStencilLayerNames;
            local_1f0.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
            local_1f0.Number = *(uint *)&pUVar20->field_0x1c;
            ::FName::ToString(&local_1f0,&local_2b8);
            pFVar35 = (pTVar5->AllocatorInstance).Data;
            if ((pFVar35 <= (FScriptContainerElement *)&local_2b8) &&
               (((FScriptContainerElement *)&local_2b8 <
                 pFVar35 + (longlong)(this->UniqueStencilLayerNames).ArrayMax * 0x10 &&
                (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)))) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            piVar34 = &(this->UniqueStencilLayerNames).ArrayMax;
            iVar15 = (this->UniqueStencilLayerNames).ArrayNum;
            if (iVar15 == *piVar34) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar5->AllocatorInstance,piVar34);
            }
            (this->UniqueStencilLayerNames).ArrayNum = iVar15 + 1;
            lVar33 = (longlong)iVar15;
            pFVar35 = (pTVar5->AllocatorInstance).Data;
            *(undefined8 *)(pFVar35 + lVar33 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar35 + lVar33 * 0x10) =
                 local_2b8.Data.AllocatorInstance.Data;
            local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar35 + lVar33 * 0x10 + 8) = local_2b8.Data.ArrayNum;
            *(int *)(pFVar35 + lVar33 * 0x10 + 0xc) = local_2b8.Data.ArrayMax;
            local_2b8.Data.ArrayNum = 0;
            local_2b8.Data.ArrayMax = 0;
          }
        }
        if ((FScriptContainerElement *)local_238._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_238._16_8_);
        }
        pFVar38 = pFVar38 + 4;
      }
    }
    else {
      pFVar36 = (FName *)(this->ActorLayers).AllocatorInstance.Data;
      iVar14 = (this->ActorLayers).ArrayNum;
      pFVar38 = pFVar36 + iVar14;
      while( true ) {
        if ((this->ActorLayers).ArrayNum != iVar14) {
          local_2d8[0] = 0;
          `TCheckedPointerIterator<FActorLayer,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2d8);
        }
        if (pFVar36 == pFVar38) break;
        pTVar5 = &this->UniqueStencilLayerNames;
        pFVar29 = (FScriptContainerElement *)::FName::ToString(pFVar36,&local_f0);
        pFVar35 = (pTVar5->AllocatorInstance).Data;
        if (((pFVar35 <= pFVar29) &&
            (pFVar29 < pFVar35 + (longlong)(this->UniqueStencilLayerNames).ArrayMax * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        piVar34 = &(this->UniqueStencilLayerNames).ArrayMax;
        iVar15 = (this->UniqueStencilLayerNames).ArrayNum;
        if (iVar15 == *piVar34) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar5->AllocatorInstance,piVar34);
        }
        (this->UniqueStencilLayerNames).ArrayNum = iVar15 + 1;
        lVar33 = (longlong)iVar15;
        pFVar35 = (pTVar5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar35 + lVar33 * 0x10) = 0;
        *(undefined8 *)(pFVar35 + lVar33 * 0x10) = *(undefined8 *)pFVar29;
        *(undefined8 *)pFVar29 = 0;
        *(int *)(pFVar35 + lVar33 * 0x10 + 8) = *(int *)(pFVar29 + 8);
        *(int *)(pFVar35 + lVar33 * 0x10 + 0xc) = *(int *)(pFVar29 + 0xc);
        *(undefined8 *)(pFVar29 + 8) = 0;
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        pFVar36 = pFVar36 + 1;
      }
    }
    UE::MoviePipeline::DeduplicateNameArray(&this->UniqueStencilLayerNames);
  }
  else {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    (**(code **)(pUVar17->_padding_ + 0x2b8))(pUVar17,1);
  }
  FMemScope::~FMemScope(&local_1e8);
  FLLMScope::~FLLMScope(local_2a8);
  return;
}

// StaticRegisterNativesUMoviePipelineDeferredPassBase @ 14ddff220

void __cdecl
UMoviePipelineDeferredPassBase::StaticRegisterNativesUMoviePipelineDeferredPassBase(void)

{
  return;
}

// TeardownImpl @ 14ddffe40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UMoviePipelineDeferredPassBase::TeardownImpl(UMoviePipelineDeferredPassBase *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TSharedPtr<FOpenColorIODisplayExtension,1> *pTVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  longlong *plVar6;
  FMultiCameraViewStateData *pFVar7;
  code *pcVar8;
  TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  IConsoleVariable *this_00;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  longlong lVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 local_140;
  FSharedReferencer<1> FStack_138;
  undefined8 local_130;
  FSharedReferencer<1> FStack_128;
  int local_120;
  int local_11c;
  TArray<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,TSizedDefaultAllocator<32>_>
  *local_118;
  FScriptContainerElement *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FSetContext local_f8;
  FScriptContainerElement *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_4c;
  
  piVar2 = &(this->ActivePostProcessMaterials).ArrayMax;
  (this->ActivePostProcessMaterials).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActivePostProcessMaterials).AllocatorInstance,0,piVar2);
  }
  if (*(int *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x8 !=
      *(int *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x34) {
    TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->ActiveHighPrecisionPostProcessMaterials);
    puVar1 = &(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0xc;
    iVar14 = *(int *)puVar1;
    *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x8 = 0;
    if (iVar14 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->ActiveHighPrecisionPostProcessMaterials,0,
                 (int *)puVar1);
    }
    *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x30 = 0xffffffff
    ;
    *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ActiveHighPrecisionPostProcessMaterials).Elements.field_0x28 = 0;
  }
  piVar2 = &(this->UniqueStencilLayerNames).ArrayMax;
  pFVar19 = (this->UniqueStencilLayerNames).AllocatorInstance.Data;
  iVar14 = (this->UniqueStencilLayerNames).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar19,iVar14);
    (this->UniqueStencilLayerNames).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->UniqueStencilLayerNames).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar19,iVar14);
    (this->UniqueStencilLayerNames).ArrayNum = 0;
  }
  local_118 = &this->CameraViewStateData;
  pFVar19 = (local_118->AllocatorInstance).Data;
  local_res20 = (this->CameraViewStateData).ArrayNum;
  uVar12 = (ulonglong)(int)local_res20;
  local_110 = pFVar19 + uVar12 * 0x58;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 0x10);
  do {
    pFVar10 = local_110;
    pTVar9 = local_118;
    uVar16 = 0;
    if (local_118->ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    uVar18 = 0;
    if (pFVar19 == pFVar10) {
      piVar2 = &pTVar9->ArrayMax;
      pFVar7 = (FMultiCameraViewStateData *)(pTVar9->AllocatorInstance).Data;
      if (*piVar2 < 0) {
        DestructItems<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int>
                  (pFVar7,pTVar9->ArrayNum);
        pTVar9->ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,0,&pTVar9->AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<UMoviePipelineDeferredPassBase::FMultiCameraViewStateData,int>
                  (pFVar7,pTVar9->ArrayNum);
        pTVar9->ArrayNum = 0;
      }
      pTVar3 = &this->OCIOSceneViewExtension;
      local_140 = 0;
      FStack_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_140) {
        pTVar3->Object = (FOpenColorIODisplayExtension *)0x0;
        local_140 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->OCIOSceneViewExtension).SharedReferenceCount,&FStack_138);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_138.ReferenceController);
      local_130 = 0;
      FStack_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_130) {
        pTVar3->Object = (FOpenColorIODisplayExtension *)0x0;
        local_130 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->OCIOSceneViewExtension).SharedReferenceCount,&FStack_128);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_128.ReferenceController);
      if ((this->PreviousCustomDepthValue).bIsSet != false) {
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Singleton != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                       ,0x4fb,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = (IConsoleVariable *)
                  (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                            (IConsoleManager::Singleton,L"r.CustomDepth",1);
        if (this_00 != (IConsoleVariable *)0x0) {
          if (((this->PreviousCustomDepthValue).bIsSet == false) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar14 = (**(code **)(*(longlong *)this_00 + 200))(this_00);
          if (iVar14 != (this->PreviousCustomDepthValue).TypedValue) {
            if (4 < (byte)LogMovieRenderPipeline._0_1_) {
              if (((this->PreviousCustomDepthValue).bIsSet == false) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
            }
            if (((this->PreviousCustomDepthValue).bIsSet == false) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_f8.Flags = ECVF_SetByProjectSetting;
            local_f8.PriorityMode = Set;
            local_f8.Tag.ComparisonIndex.Value = 0;
            local_f8.Tag.Number = 0;
            local_f8.TagMode = Set;
            local_f8.MaxPriority = ECVF_SetByConsole;
            local_f8.MinPriority = 0x1000000;
            IConsoleVariable::Set(this_00,(this->PreviousCustomDepthValue).TypedValue,&local_f8);
          }
        }
      }
      UMoviePipelineImagePassBase::TeardownImpl((UMoviePipelineImagePassBase *)this);
      return;
    }
    uStack_cc = 1;
    uVar15 = pTVar20->NumBits;
    uStack_bc = uVar18;
    uStack_d0 = uVar16;
    if (uVar15 != 0) {
      pTVar5 = *(TBitArray<FDefaultBitArrayAllocator> **)
                &(pTVar20->AllocatorInstance).SecondaryData.field_0x0;
      pTVar17 = pTVar20;
      if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar5;
      }
      uVar4 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      uVar18 = uVar16;
      while (uVar4 == 0) {
        lVar13 = (longlong)(int)uVar16;
        uVar16 = uVar16 + 1;
        uVar18 = uVar18 + 0x20;
        uStack_bc = uVar15;
        uStack_d0 = uVar16;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14de00000;
        uVar4 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_cc = -uVar4 & uVar4;
      uVar12 = (ulonglong)uStack_cc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_120 = (int)lVar13;
      uStack_bc = (uVar18 - 1) + local_120;
      uStack_d0 = uVar16;
      if ((int)uVar15 < (int)uStack_bc) {
        uStack_bc = uVar15;
      }
    }
LAB_14de00000:
    uStack_c0 = 0xffffffff;
    uStack_b4 = local_4c;
    iStack_b0 = pTVar20[-1].NumBits - *(int *)(pTVar20[1].AllocatorInstance.InlineData + 4);
    TStack_a0._padding_ = CONCAT44(uStack_cc,uStack_d0);
    TStack_a0.CurrentBitIndex = uStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    TStack_a0._28_4_ = local_4c;
    TStack_a0.BaseBitIndex = uVar18;
    uStack_80 = CONCAT44(uStack_ac,iStack_b0);
    iVar14 = (int)uVar15 >> 5;
    uVar16 = uVar15 & 0xffffffe0;
    local_d8 = pFVar19;
    local_c8 = pTVar20;
    local_b8 = uVar18;
    local_a8 = pFVar19;
    TStack_a0.Array = pTVar20;
    if (((int)uVar15 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar18 = pTVar20->NumBits;
    if (uVar15 != uVar18) {
      pTVar5 = *(TBitArray<FDefaultBitArrayAllocator> **)
                &(pTVar20->AllocatorInstance).SecondaryData.field_0x0;
      pTVar17 = pTVar20;
      if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar5;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((longlong)(pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar14;
        iVar14 = iVar14 + 1;
        uVar16 = uVar16 + 0x20;
        uVar15 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14de00100;
        uVar15 = *(uint *)((longlong)(pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_11c = (int)lVar13;
      uVar15 = local_11c + -1 + uVar16;
      if ((int)uVar18 < (int)uVar15) {
        uVar15 = uVar18;
      }
    }
LAB_14de00100:
    while( true ) {
      pFVar10 = local_a8;
      if (*(int *)(local_a8 + 8) - *(int *)(local_a8 + 0x34) != (int)uStack_80) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_a0.CurrentBitIndex == uVar15) && (TStack_a0.Array == pTVar20)) &&
         (pFVar10 == pFVar19)) break;
      lVar13 = (longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)pFVar10;
      uVar16 = 0;
      if (0 < *(int *)(lVar13 + 0x10)) {
        lVar21 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar16 < *(int *)(lVar13 + 0x10)) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar6 = *(longlong **)(*(longlong *)(lVar13 + 8) + 8 + lVar21);
          if (plVar6 != (longlong *)0x0) {
            uStack_100 = 0;
            local_108 = 0;
            local_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
          }
          uVar18 = 0;
          if ((int)uVar16 < *(int *)(lVar13 + 0x10)) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FSceneViewStateReference::Destroy
                    ((FSceneViewStateReference *)
                     ((longlong)(int)uVar16 * 0x38 + *(longlong *)(lVar13 + 8)));
          uVar16 = uVar16 + 1;
          lVar21 = lVar21 + 0x38;
        } while ((int)uVar16 < *(int *)(lVar13 + 0x10));
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
    pFVar19 = pFVar19 + 0x58;
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar20[2].NumBits;
    uVar12 = (ulonglong)local_res20;
  } while( true );
}

// UpdateTelemetry @ 14de02dc0

void __thiscall
UMoviePipelineDeferredPassBase::UpdateTelemetry
          (UMoviePipelineDeferredPassBase *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  bVar2 = param_1->bUsesPPMs;
  param_1->bUsesDeferred = true;
  iVar3 = (this->AdditionalPostProcessMaterials).ArrayNum;
  pFVar5 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x48;
  while( true ) {
    if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMoviePipelinePostProcessPass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*pFVar5 != (FScriptContainerElement)0x0) {
      bVar4 = 1;
LAB_14de02e28:
      param_1->bUsesPPMs = (bool)(bVar2 | bVar4);
      return;
    }
    pFVar5 = pFVar5 + 0x48;
  }
  bVar4 = 0;
  goto LAB_14de02e28;
}

