// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 15

// FMovieGraphDeferredPass @ 14ddc5a80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieGraphDeferredPass * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::FMovieGraphDeferredPass
          (FMovieGraphDeferredPass *this)

{
  TNode *_Dst;
  TNode *pTVar1;
  
  pTVar1 = (TNode *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FMovieGraphDeferredPass_Rendering_MovieGraph_UE__6B_;
  (this->LayerData).BranchName.ComparisonIndex = 0;
  (this->LayerData).BranchName.Number = 0;
  (this->LayerData).LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerData).LayerName.Data.ArrayNum = 0;
  (this->LayerData).LayerName.Data.ArrayMax = 0;
  (this->LayerData).CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerData).CameraName.Data.ArrayNum = 0;
  (this->LayerData).CameraName.Data.ArrayMax = 0;
  (this->LayerData).LayerIndex = 0;
  (this->LayerData).NumCameras = 1;
  (this->LayerData).RenderPassNode.WeakPtr.ObjectIndex = 0;
  *(undefined8 *)&(this->LayerData).RenderPassNode.WeakPtr.ObjectSerialNumber = 0;
  (this->RenderDataIdentifier).RootBranchName.Number = 0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  (this->SceneViewState)._padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  (this->SceneViewState).Reference = (FSceneViewStateInterface *)0x0;
  (this->SceneViewState).GlobalListLink._padding_ = 0;
  (this->SceneViewState).GlobalListLink._padding_ = 0;
  (this->SceneViewState).ShareOriginTarget = (FSceneViewStateReference *)0x0;
  (this->SceneViewState).ShareOriginRefCount = 0;
  *(undefined8 *)&this->SceneViewStates = 0;
  *(undefined8 *)&(this->SceneViewStates).field_0x8 = 0;
  *(undefined8 *)&(this->SceneViewStates).field_0x20 = 0;
  *(undefined4 *)&(this->SceneViewStates).field_0x28 = 0;
  *(undefined4 *)&(this->SceneViewStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneViewStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SceneViewStates).field_0x34 = 0;
  *(undefined8 *)&(this->SceneViewStates).field_0x40 = 0;
  *(undefined4 *)&(this->SceneViewStates).field_0x48 = 0;
  (this->SystemMemoryMirror).Ptr = (FSceneViewStateSystemMemoryMirror *)0x0;
  _Dst = ::operator_new(0xb70);
  if (_Dst != (TNode *)0x0) {
    memset(_Dst,0,0xb70);
    _Dst->NextNode = (TNode *)0x0;
    FMovieGraphPostRendererSubmissionParams::FMovieGraphPostRendererSubmissionParams(&_Dst->Item);
    pTVar1 = _Dst;
  }
  (this->SubmissionQueue).Tail = pTVar1;
  (this->SubmissionQueue).Head = pTVar1;
  this->bHasAutoExposurePass = false;
  this->bWriteBeautyPassToDisk = true;
  return this;
}

// ~FMovieGraphDeferredPass @ 14ddcb0d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::~FMovieGraphDeferredPass
          (FMovieGraphDeferredPass *this)

{
  FSceneViewStateSystemMemoryMirror *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1>::
  ~TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1>
            (&this->SubmissionQueue);
  pFVar1 = (this->SystemMemoryMirror).Ptr;
  if (pFVar1 != (FSceneViewStateSystemMemoryMirror *)0x0) {
    (*(code *)pFVar1[-1].TemporaryTextures.AllocatorInstance.Data)();
  }
  *(undefined4 *)&(this->SceneViewStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SceneViewStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SceneViewStates);
  FSceneViewStateReference::~FSceneViewStateReference(&this->SceneViewState);
  pFVar3 = (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LayerData).CameraName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LayerData).LayerName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 14ddce8f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>::operator()
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

// AddReferencedObjects @ 14ddd3fc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::AddReferencedObjects
          (FMovieGraphDeferredPass *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FSceneViewStateInterface *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = (this->SceneViewState).Reference;
  if (pFVar4 != (FSceneViewStateInterface *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x10))();
  }
  iVar13 = 0;
  puVar1 = &(this->SceneViewStates).field_0x10;
  iVar3 = *(int *)&(this->SceneViewStates).field_0x28;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->SceneViewStates).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ddd407d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14ddd407d:
  uVar12 = *(uint *)&(this->SceneViewStates).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SceneViewStates).field_0x8 -
                       *(int *)&(this->SceneViewStates).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->SceneViewStates).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->SceneViewStates).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ddd4180;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14ddd4180:
  while( true ) {
    if (*(int *)&(this->SceneViewStates).field_0x8 - *(int *)&(this->SceneViewStates).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar5 = *(longlong **)
              (*(longlong *)&this->SceneViewStates + 0x10 +
              (longlong)TStack_60.CurrentBitIndex * 0x48);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GatherOutputPasses @ 14dddc3b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GatherOutputPasses
          (FMovieGraphDeferredPass *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TSoftObjectPtr<UMaterialInterface> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  int *piVar13;
  ulonglong uVar14;
  FName FVar15;
  FMoviePipelinePostProcessPass *pFVar16;
  undefined1 *this_00;
  undefined1 local_res20 [8];
  FName local_e0;
  int local_d8;
  int local_d4;
  uint local_d0;
  FMoviePipelinePostProcessPass *local_c8;
  FMoviePipelinePostProcessPass *local_c0;
  uint local_b8;
  FName local_b0;
  FName *local_a8;
  FString local_a0;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar6 = false;
  bVar5 = false;
  if (this->bWriteBeautyPassToDisk != false) {
    pFVar1 = &this->RenderDataIdentifier;
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_2->ArrayMax * 0x48)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar2 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x48);
    *pFVar2 = pFVar1->RootBranchName;
    local_c8 = (FMoviePipelinePostProcessPass *)pFVar2;
    ::FString::FString((FString *)(pFVar2 + 1),&(this->RenderDataIdentifier).LayerName);
    ::FString::FString((FString *)(pFVar2 + 3),&(this->RenderDataIdentifier).RendererName);
    ::FString::FString((FString *)(pFVar2 + 5),&(this->RenderDataIdentifier).SubResourceName);
    ::FString::FString((FString *)(pFVar2 + 7),&(this->RenderDataIdentifier).CameraName);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0xb8))(this,param_1);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 1000))(plVar10,&local_c0);
    uVar14 = (ulonglong)(int)local_b8;
    local_d0 = local_b8;
    pFVar16 = local_c0 + uVar14;
    pTVar7 = &local_c0->Material;
    local_c8 = pFVar16;
    while( true ) {
      this_00 = &(pTVar7->SoftObjectPtr).field_0x8;
      if (local_b8 != (uint)uVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if ((FMoviePipelinePostProcessPass *)(this_00 + -0x20) == pFVar16) break;
      if (((FMoviePipelinePostProcessPass *)(this_00 + -0x20))->bEnabled != false) {
        pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(this_00 + -8));
        if (pUVar11 == (UObject *)0x0) {
          if (*(longlong *)this_00 != 0) {
            FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
            pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)(this_00 + -8));
            goto LAB_14dddc565;
          }
LAB_14dddc58d:
          pUVar11 = (UObject *)0x0;
        }
        else {
LAB_14dddc565:
          if (pUVar11 == (UObject *)0x0) goto LAB_14dddc58d;
          pUVar12 = Z_Construct_UClass_UMaterialInterface_NoRegister();
          iVar9 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar12->_padding_)) goto LAB_14dddc58d;
        }
        pFVar16 = local_c8;
        if (pUVar11 != (UObject *)0x0) {
          local_88 = (this->RenderDataIdentifier).RootBranchName;
          ::FString::FString(&local_80,&(this->RenderDataIdentifier).LayerName);
          ::FString::FString(&local_70,&(this->RenderDataIdentifier).RendererName);
          ::FString::FString(&local_60,&(this->RenderDataIdentifier).SubResourceName);
          ::FString::FString(&local_50,&(this->RenderDataIdentifier).CameraName);
          iVar9 = *(int *)((longlong)this_00 + -0x10);
          if (iVar9 < 2) {
            local_b0.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
            local_b0.Number = *(uint *)&pUVar11->field_0x1c;
            ::FName::ToString(&local_b0,&local_a0);
            bVar6 = true;
            piVar13 = &local_a0.Data.ArrayNum;
            FVar15 = (FName)local_a0.Data.AllocatorInstance.Data;
          }
          else {
            local_a8 = &local_e0;
            local_e0.ComparisonIndex.Value = 0;
            local_e0.Number = 0;
            _Src = *(void **)((longlong)this_00 + -0x18);
            local_d8 = iVar9;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,0,(ForAnyElementType *)&local_e0,iVar9,&local_d4);
            memcpy((void *)local_e0,_Src,(longlong)iVar9 * 2);
            bVar5 = true;
            piVar13 = &local_d8;
            FVar15 = local_e0;
          }
          iVar9 = *piVar13 + -1;
          if (*piVar13 == 0) {
            iVar9 = 0;
          }
          ::FString::AssignRange(&local_60,(wchar_t *)FVar15,iVar9);
          if ((bVar5) && (bVar5 = false, local_e0 != (FName)0x0)) {
            FMemory::Free((void *)local_e0);
          }
          if (bVar6) {
            bVar6 = false;
            if ((FName)local_a0.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              bVar6 = false;
            }
          }
          pFVar2 = (FName *)(param_2->AllocatorInstance).Data;
          if (((pFVar2 <= &local_88) && (&local_88 < pFVar2 + (longlong)param_2->ArrayMax * 9)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == param_2->ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar9 + 1;
          pFVar2 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x48);
          *pFVar2 = local_88;
          local_a8 = pFVar2;
          ::FString::FString((FString *)(pFVar2 + 1),&local_80);
          ::FString::FString((FString *)(pFVar2 + 3),&local_70);
          ::FString::FString((FString *)(pFVar2 + 5),&local_60);
          ::FString::FString((FString *)(pFVar2 + 7),&local_50);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          pFVar16 = local_c8;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            pFVar16 = local_c8;
          }
        }
      }
      pTVar7 = (TSoftObjectPtr<UMaterialInterface> *)(this_00 + 0x40);
      uVar14 = (ulonglong)local_d0;
    }
    DestructItems<FMoviePipelinePostProcessPass,int>(local_c0,local_b8);
    if (local_c0 != (FMoviePipelinePostProcessPass *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  return;
}

// GetBranchName @ 14dddf300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GetBranchName(FMovieGraphDeferredPass *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->LayerData).BranchName;
  return in_RDX;
}

// GetParentNode @ 14dde3260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieGraphImagePassBaseNode * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GetParentNode
          (FMovieGraphDeferredPass *this,UMovieGraphEvaluatedConfig *param_1)

{
  int iVar1;
  FName FVar2;
  UMovieGraphImagePassBaseNode *pUVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)this + 0x30))(this,local_res18);
  FVar2 = *pFVar5;
  pUVar6 = UMovieGraphDeferredRenderPassNode::StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_18,pUVar6,FVar2,true,false);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(UMovieGraphImagePassBaseNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar3 != (UMovieGraphImagePassBaseNode *)0x0) {
      pUVar6 = UMovieGraphDeferredRenderPassNode::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return pUVar3;
      }
    }
  }
  bVar4 = `UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GetParentNode'::__l3::<lambda_1>::
          operator()(local_res8);
  if (bVar4) {
    return (UMovieGraphImagePassBaseNode *)0x0;
  }
  return (UMovieGraphImagePassBaseNode *)0x0;
}

// GetSceneViewState @ 14dde5b30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewStateInterface * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GetSceneViewState
          (FMovieGraphDeferredPass *this,UMovieGraphImagePassBaseNode *param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSceneViewStateInterface *pFVar4;
  FSceneViewStateReference *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)param_3;
  uVar6 = (ulonglong)(uint)param_2;
  if (param_1 == (UMovieGraphImagePassBaseNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentNodeThisFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPass.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSceneViewStateInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x478))();
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  pFVar5 = TMapBase<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
           ::FindChecked((TMapBase<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
                          *)&this->SceneViewStates,(TIntPoint<int>)(uVar7 << 0x20 | uVar6));
  return pFVar5->Reference;
}

// HasRenderResourceParametersChanged @ 14dde6fe0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::HasRenderResourceParametersChanged
          (FMovieGraphDeferredPass *this,TIntPoint<int> *param_1,TIntPoint<int> *param_2)

{
  if (((((this->PrevAccumulatorResolution).field0_0x0._s_0.X == (param_1->field0_0x0)._s_0.X) &&
       ((this->PrevAccumulatorResolution).field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
      ((this->PrevBackbufferResolution).field0_0x0._s_0.X == (param_2->field0_0x0)._s_0.X)) &&
     ((this->PrevBackbufferResolution).field0_0x0._s_0.Y == (param_2->field0_0x0)._s_0.Y)) {
    return false;
  }
  return true;
}

// PostRendererSubmission @ 14ddf19c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::PostRendererSubmission
          (FMovieGraphDeferredPass *this,FMovieGraphSampleState *param_1,
          FRenderTargetInitParams *param_2,FCanvas *param_3,FCameraInfo *param_4)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FWeakObjectPtr *this_00;
  UObject *pUVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined1 auStackY_9c8 [32];
  undefined8 local_960;
  FRenderTargetInitParams *local_958;
  FMinimalViewInfo local_948;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_9c8;
  local_958 = param_2;
  this_00 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,&local_960);
  pUVar7 = FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (pUVar7 == (UObject *)0x0) {
      return;
    }
    GC::MarkAsReachable(pUVar7);
  }
  if ((param_4->ViewInfo).bConstrainAspectRatio != 0) {
    FMinimalViewInfo::FMinimalViewInfo(&local_948,&param_4->ViewInfo);
    fVar4 = __real_3f800000;
    TVar1 = (param_1->AccumulatorResolution).field0_0x0._s_0;
    iVar8 = TVar1.Y;
    iVar5 = TVar1.X;
    fVar16 = (float)iVar5 / (float)iVar8;
    if ((param_4->bAllowCameraAspectRatio == false) ||
       (bVar2 = local_948.AspectRatio <= fVar16, fVar16 = local_948.AspectRatio, bVar2)) {
      iVar13 = (int)ROUND((fVar16 + fVar16) * (float)iVar8 + __real_3f000000) >> 1;
      iVar14 = iVar8;
    }
    else {
      iVar13 = iVar5;
      iVar14 = (int)((longlong)
                     ROUND(((double)iVar5 + (double)iVar5) / (double)local_948.AspectRatio +
                           __real_3fe0000000000000) >> 1);
    }
    TVar1 = (param_1->OverlappedOffset).field0_0x0._s_0;
    iVar10 = TVar1.Y;
    iVar11 = TVar1.X;
    iVar15 = (param_1->BackbufferResolution).field0_0x0._s_0.X + iVar11;
    iVar9 = iVar10 + (param_1->BackbufferResolution).field0_0x0._s_0.Y;
    iVar5 = (iVar5 - iVar13) / 2;
    iVar6 = (iVar8 - iVar14) / 2;
    iVar8 = iVar9;
    if (iVar6 < iVar9) {
      iVar8 = iVar6;
    }
    iVar3 = iVar15;
    if (iVar5 < iVar15) {
      iVar3 = iVar5;
    }
    iVar12 = iVar11;
    if (iVar11 < iVar3) {
      iVar12 = iVar3;
    }
    iVar3 = iVar9;
    if (iVar6 + iVar14 < iVar9) {
      iVar3 = iVar6 + iVar14;
    }
    iVar14 = iVar15;
    if (iVar13 + iVar5 < iVar15) {
      iVar14 = iVar13 + iVar5;
    }
    iVar5 = iVar10;
    if (iVar10 < iVar8) {
      iVar5 = iVar8;
    }
    local_960 = CONCAT44(iVar9,iVar15);
    iVar8 = iVar11;
    if (iVar11 < iVar14) {
      iVar8 = iVar14;
    }
    iVar13 = iVar10;
    if (iVar10 < iVar3) {
      iVar13 = iVar3;
    }
    if (0 < iVar12 - iVar11) {
      FCanvas::DrawTile(param_3,0.0,0.0,(double)(iVar12 - iVar11),
                        (double)(param_1->BackbufferResolution).field0_0x0._s_0.Y,0.0,0.0,
                        __real_3f800000,__real_3f800000,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    if (0 < iVar15 - iVar8) {
      iVar14 = (param_1->BackbufferResolution).field0_0x0._s_0.X;
      FCanvas::DrawTile(param_3,(double)(iVar14 - (iVar15 - iVar8)),0.0,(double)iVar14,
                        (double)(param_1->BackbufferResolution).field0_0x0._s_0.Y,0.0,0.0,fVar4,
                        fVar4,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    if (0 < iVar5 - iVar10) {
      FCanvas::DrawTile(param_3,0.0,0.0,(double)(param_1->BackbufferResolution).field0_0x0._s_0.X,
                        (double)(iVar5 - iVar10),0.0,0.0,fVar4,fVar4,&FLinearColor::Black,
                        (FTexture *)0x0,false);
    }
    if (0 < iVar9 - iVar13) {
      iVar8 = (param_1->BackbufferResolution).field0_0x0._s_0.Y;
      FCanvas::DrawTile(param_3,0.0,(double)(iVar8 - (iVar9 - iVar13)),
                        (double)(param_1->BackbufferResolution).field0_0x0._s_0.X,(double)iVar8,0.0,
                        0.0,fVar4,fVar4,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    FCanvas::Flush_GameThread(param_3,true);
    if (local_948.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  FMovieGraphImagePassBase::PostRendererSubmission
            ((FMovieGraphImagePassBase *)this,param_1,local_958,param_3,param_4);
  return;
}

// Render @ 14ddf6590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render
          (FMovieGraphDeferredPass *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  int *piVar1;
  FMoviePipelinePostProcessPass *pFVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined3 uVar6;
  EMovieRenderShotState EVar7;
  byte bVar8;
  UMoviePipelineExecutorShot *pUVar9;
  FCameraInfo *pFVar10;
  code *pcVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  TSoftObjectPtr<UMaterialInterface> *pTVar19;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar20;
  ForAnyElementType *pFVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  FMovieGraphTimeStepData *pFVar27;
  TReferenceControllerBase<1> *pTVar28;
  FMovieGraphTraversalContext *pFVar29;
  FName *pFVar30;
  AActor *pAVar31;
  char cVar32;
  bool bVar33;
  int iVar34;
  EAntiAliasingMethod EVar35;
  uint uVar36;
  FWeakObjectPtr *pFVar37;
  UMovieGraphDefaultRenderer *this_00;
  longlong *plVar38;
  UMovieGraphDefaultRenderer *pUVar39;
  UMovieGraphCameraSettingNode *pUVar40;
  TIntPoint<int> TVar41;
  UTextureRenderTarget2D *this_01;
  FTextureRenderTargetResource *pFVar42;
  TVector2<float> TVar43;
  FEngineShowFlags *pFVar44;
  FScriptContainerElement *pFVar45;
  longlong lVar46;
  UWorld *pUVar47;
  FString *pFVar48;
  TTransform<double> *pTVar49;
  TRotator<double> *pTVar50;
  UCineCameraComponent *pUVar51;
  UObject *pUVar52;
  UClass *pUVar53;
  undefined8 *puVar54;
  TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> *pTVar55;
  IRendererModule *pIVar56;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar57;
  TNode *pTVar58;
  FMovieGraphPostRendererSubmissionParams *pFVar59;
  TIntPoint<int>_u_0 TVar60;
  VectorRegister4Double *pVVar61;
  undefined ***pppuVar62;
  ForAnyElementType FVar63;
  UMovieGraphEvaluatedConfig *pUVar64;
  ForElementType<FSetElementId> _Src;
  ulonglong uVar65;
  TNode *pTVar66;
  TIntPoint<int>_u_0 TVar67;
  int iVar68;
  UObject *pUVar69;
  uint uVar70;
  TIntPoint<int>_u_0 TVar71;
  undefined1 *this_04;
  TVector2<float>_u_0 TVar72;
  bool bVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float in_XMM1_Da;
  double dVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  undefined1 auStackY_44d8 [32];
  bool local_4487;
  char local_4486;
  uint local_4484;
  uint local_447c;
  undefined1 local_446f [3];
  int local_446c;
  int local_4468;
  int local_4464;
  int local_4460;
  TIntPoint<int>_u_0 local_4458;
  int local_4450;
  int iStack_444c;
  FMovieGraphTimeStepData *local_4448;
  undefined1 local_4440 [8];
  UObject *local_4438;
  undefined8 local_4430;
  undefined8 local_4428;
  FEngineShowFlags *local_4420;
  longlong *local_4418;
  int local_4410;
  ESceneCaptureSource local_440c;
  EAntiAliasingMethod local_4408;
  FMovieGraphPostRendererSubmissionParams *local_4400;
  FRenderTarget *local_43f8;
  undefined8 local_43e8;
  TReferenceControllerBase<1> *pTStack_43e0;
  FMovieGraphTraversalContext *local_43d8;
  int local_43d0;
  int iStack_43cc;
  int local_43c8;
  float local_43c4;
  int local_43c0;
  TIntPoint<int>_u_0 local_43b8;
  float local_43b0;
  float fStack_43ac;
  FImagePixelPipe *local_43a8;
  UObject *pUStack_43a0;
  FMoviePipelinePostProcessPass *local_4398;
  int local_4390;
  int local_4388;
  int local_4384;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_4380;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_4378;
  TObjectPtr<UMovieGraphConfig>_u_0 local_4370;
  FMovieGraphRenderDataIdentifier local_4368;
  int local_4320;
  int local_431c;
  int local_4318;
  float local_4314;
  float local_4310;
  undefined1 local_430c;
  float local_4308;
  float local_4304;
  FFrameRate local_4300;
  int local_42f8;
  int local_42f4;
  int local_42f0;
  int local_42ec;
  undefined1 local_42e8;
  undefined1 local_42e7;
  undefined1 local_42e6;
  undefined1 local_42e5;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_42e0;
  FTimecode local_42d8;
  int local_42c0;
  FTimecode local_42bc;
  int local_42a4;
  FName *local_4298;
  int local_4290;
  int iStack_428c;
  FString local_4288;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4278;
  FString local_4268;
  FString *local_4258;
  FString *local_4250;
  UClass *local_4248;
  FName local_4240;
  undefined8 local_4238;
  UMovieGraphDefaultRenderer *local_4230;
  TIntPoint<int>_u_0 local_4228;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4220;
  undefined1 local_4210 [8];
  undefined1 local_4208 [8];
  FString *local_4200;
  FString *local_41f8;
  FName local_41e8;
  FString local_41e0;
  FString local_41d0;
  FString local_41c0;
  FString local_41b0;
  FString *local_4198;
  FString *local_4190;
  undefined8 local_4188;
  TReferenceControllerBase<1> *pTStack_4180;
  undefined8 local_4178;
  TReferenceControllerBase<1> *pTStack_4170;
  undefined8 local_4168;
  TReferenceControllerBase<1> *pTStack_4160;
  TIntRect<int> local_4158;
  FString local_4148;
  FString *local_4138;
  FString *local_4130;
  FString local_4128;
  undefined8 *local_4118;
  FImagePixelPipe **local_4110;
  FImagePixelPipe *local_4108;
  UObject *pUStack_4100;
  TIntPoint<int>_u_0 local_40f8;
  undefined8 uStack_40f0;
  undefined1 local_40e0 [8];
  undefined1 local_40d8 [8];
  TNode *local_40d0;
  undefined1 local_40c8 [8];
  undefined1 local_40c0 [8];
  FString local_40b8;
  void *local_40a8 [2];
  TVector<double>_u_0 local_4098;
  FString local_4080;
  undefined1 local_4070 [8];
  TQuat<double> local_4068;
  undefined8 local_4048;
  TReferenceControllerBase<1> *pTStack_4040;
  undefined1 local_4028 [16];
  TRotator<double> local_4018;
  FRenderTarget *local_3ff8;
  undefined8 uStack_3ff0;
  undefined8 local_3fe8;
  undefined8 local_3fe0;
  float local_3fd8;
  undefined1 local_3fd4;
  undefined8 local_3fd0;
  FFrameRate local_3fc8;
  undefined8 uStack_3fc0;
  undefined8 local_3fb8;
  undefined4 local_3fb0;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_3fa8;
  undefined8 local_3fa0;
  undefined8 uStack_3f98;
  ulonglong local_3f90;
  int local_3f88;
  undefined4 uStack_3f84;
  undefined4 uStack_3f80;
  undefined4 uStack_3f7c;
  undefined4 local_3f78;
  undefined4 uStack_3f74;
  uint local_3f70;
  int local_3f6c;
  ESceneCaptureSource local_3f68;
  undefined1 local_3f64;
  int local_3f60;
  EAntiAliasingMethod local_3f5c;
  FEngineShowFlags local_3f58;
  undefined4 local_3f18;
  uchar local_3f14;
  FCameraInfo local_3f08;
  undefined1 local_35c8 [408];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_3430;
  FString local_33e0;
  ForAnyElementType local_33d0;
  undefined8 local_33c8;
  code *local_33b8 [2];
  undefined **local_33a8;
  FRenderTarget *pFStack_33a0;
  undefined8 local_3398;
  undefined ***local_3390;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> local_3388
  ;
  undefined1 local_3338 [16];
  undefined **local_3328;
  FRenderTarget *pFStack_3320;
  undefined8 local_3318;
  undefined ***local_3310;
  byte local_3308;
  longlong local_32f8 [2];
  longlong local_32e8 [3];
  longlong *local_32d0;
  undefined1 local_32c8 [472];
  void *local_30f0;
  undefined4 local_30e8;
  ForAnyElementType local_30e0;
  ForAnyElementType local_30d0;
  int local_30c8;
  undefined1 local_30b8 [464];
  FScriptContainerElement local_2ee8 [8];
  ForAnyElementType local_2ee0;
  uint local_2ed8;
  FString local_2ed0;
  ForAnyElementType local_2ec0;
  int local_2eb8;
  int local_2eb4;
  TIntPoint<int>_u_0 local_2eb0;
  undefined8 uStack_2ea8;
  FMinimalViewInfo local_2e98;
  AActor *local_25c8;
  FString FStack_25c0;
  bool local_25b0;
  float local_25ac;
  TVector2<float>_u_0 local_25a8;
  TIntPoint<int>_u_0 TStack_25a0;
  TIntPoint<int>_u_0 local_2598;
  TIntPoint<int>_u_0 TStack_2590;
  undefined1 local_2588 [16];
  int local_2578;
  double local_2570;
  double dStack_2568;
  bool local_2560;
  undefined1 local_2558 [48];
  void *local_2528;
  undefined1 local_2518 [32];
  TMatrix<double> local_24f8;
  TMatrix<double> local_2478 [2];
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2318;
  void *local_22d8;
  undefined4 local_22d0;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  local_22c8 [2];
  FCanvas local_2208;
  FMovieGraphSampleState local_20e8;
  TIntPoint<int>_u_0 local_1ee0;
  undefined8 uStack_1ed8;
  FCameraInfo local_1ec8;
  FCameraInfo local_1588;
  FMovieGraphPostRendererSubmissionParams local_c48;
  ulonglong local_e8;
  undefined4 uVar5;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_44d8;
  local_4484 = 0;
  local_4448 = param_2;
  local_43d8 = param_1;
  pFVar37 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,local_4070);
  this_00 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar37);
  local_4230 = this_00;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
    GC::MarkAsReachable((UObject *)this_00);
  }
  plVar38 = (longlong *)
            (**(code **)(*(longlong *)this + 0xb8))
                      (this,(param_2->EvaluatedConfig).field0_0x0.DebugPtr);
  local_4418 = plVar38;
  cVar32 = (**(code **)(*plVar38 + 0x3e0))(plVar38);
  pUVar9 = (param_1->Shot).field0_0x0.DebugPtr;
  if ((cVar32 == '\0') || ((pUVar9->ShotInfo).State != Rendering)) {
    EVar7 = (pUVar9->ShotInfo).State;
    local_4487 = false;
    if ((EVar7 != Rendering) && (local_4487 = false, EVar7 != CoolingDown)) {
      bVar18 = false;
      iVar34 = (**(code **)(*plVar38 + 0x400))(plVar38);
      local_4487 = false;
      goto LAB_14ddf66dd;
    }
  }
  else {
    local_4487 = true;
  }
  bVar18 = true;
  iVar34 = (**(code **)(*plVar38 + 0x3f8))(plVar38);
LAB_14ddf66dd:
  if (iVar34 < 1) {
    iVar34 = 1;
  }
  local_4468 = iVar34;
  local_43c8 = (**(code **)(*plVar38 + 0x408))(plVar38);
  (**(code **)(*plVar38 + 0x460))(plVar38,&local_4450);
  fVar74 = (float)(**(code **)(*plVar38 + 0x468))(plVar38);
  fVar80 = __real_3c23d70a;
  fVar74 = fVar74 * __real_3c23d70a;
  local_43c4 = fVar74;
  cVar32 = (**(code **)(*plVar38 + 0x410))(plVar38);
  local_440c = SCS_FinalToneCurveHDR - (cVar32 != '\0');
  EVar35 = (**(code **)(*plVar38 + 0x430))(plVar38);
  bVar33 = (bool)(**(code **)(*plVar38 + 0x428))(plVar38);
  local_4408 = MovieRenderPipeline::GetEffectiveAntiAliasingMethod(bVar33,EVar35);
  pFVar37 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,local_40c0);
  pUVar39 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar37);
  UMovieGraphDefaultRenderer::GetCameraInfo(pUVar39,&local_1588,(this->LayerData).CameraIndex);
  pFVar37 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,local_40c8);
  pUVar39 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar37);
  fVar75 = UMovieGraphDefaultRenderer::GetCameraOverscan(pUVar39,(this->LayerData).CameraIndex);
  if ((local_1588.bAllowCameraAspectRatio == false) ||
     (fVar76 = local_1588.ViewInfo.AspectRatio, local_1588.ViewInfo.bConstrainAspectRatio == 0)) {
    fVar76 = 0.0;
  }
  local_4486 = '\0';
  pUVar40 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                      ((param_2->EvaluatedConfig).field0_0x0.DebugPtr,(this->LayerData).BranchName,
                       false,false);
  fVar22 = __real_3f800000;
  if ((pUVar40 != (UMovieGraphCameraSettingNode *)0x0) &&
     (local_4486 = pUVar40->bRenderAllCameras, pUVar40->bOverride_OverscanPercentage != '\0')) {
    fVar75 = pUVar40->OverscanPercentage * fVar80;
    if (__real_3f800000 <= fVar75) {
      fVar75 = __real_3f800000;
    }
    if (fVar75 <= 0.0) {
      fVar75 = 0.0;
    }
  }
  UMovieGraphBlueprintLibrary::GetOverscannedResolution
            ((UMovieGraphEvaluatedConfig *)local_4440,in_XMM1_Da,fVar75);
  pUVar64 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr;
  UMovieGraphBlueprintLibrary::GetOverscanCropRectangle(&local_4158,pUVar64,fVar75,fVar76);
  fVar80 = __real_bf000000;
  fVar76 = __real_bf000000 -
           ((float)(int)local_4440._4_4_ / (float)iStack_444c +
           (float)(int)local_4440._4_4_ / (float)iStack_444c);
  local_4458._s_0.Y = -((int)ROUND(fVar76) >> 1);
  local_4458._s_0.X =
       -((int)ROUND(__real_bf000000 -
                    ((float)(int)local_4440._0_4_ / (float)local_4450 +
                    (float)(int)local_4440._0_4_ / (float)local_4450)) >> 1);
  TVar67 = local_4458;
  local_4228._s_0 = local_4458._s_0;
  local_43b8._s_0 = local_4458._s_0;
  TVar41 = MoviePipeline::ScaleResolutionByOverscan(fVar76,(TIntPoint<int> *)pUVar64);
                    /* WARNING: Load size is inaccurate */
  local_4458._s_0 = *TVar41.field0_0x0;
  TVar60._s_0.Y = local_4440._4_4_;
  TVar60._s_0.X = local_4440._0_4_;
  if (((((this->PrevAccumulatorResolution).field0_0x0._s_0.X != local_4440._0_4_) ||
       ((this->PrevAccumulatorResolution).field0_0x0._s_0.Y != local_4440._4_4_)) ||
      ((this->PrevBackbufferResolution).field0_0x0._s_0.X != local_4458._s_0.X)) ||
     ((this->PrevBackbufferResolution).field0_0x0._s_0.Y != local_4458._s_0.Y)) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      TVar60._s_0.Y = local_4440._4_4_;
      TVar60._s_0.X = local_4440._0_4_;
    }
    (this->PrevAccumulatorResolution).field0_0x0 = TVar60;
    (this->PrevBackbufferResolution).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)local_4458;
  }
  (**(code **)(*(longlong *)this + 0x70))(this,&local_40f8);
  uVar24 = _UNK_150631d98;
  uVar23 = ___xmm_00000000ffffffff0000008000000000;
  fVar76 = __real_3f000000;
  local_4460 = 0;
  iVar68 = local_4450;
  if (0 < iStack_444c) {
    do {
      local_4464 = 0;
      if (0 < iVar68) {
        do {
          fVar26 = __real_c0000000;
          fVar25 = __real_40000000;
          local_446c = 0;
          if (0 < iVar34) {
            iStack_43cc = -((int)ROUND(fVar80 - (fVar74 + fVar74) * (float)(int)local_43b8._4_4_) >>
                           1);
            local_43d0 = -((int)ROUND(fVar80 - (fVar74 + fVar74) * (float)TVar67._s_0.X) >> 1);
            local_43b0 = (float)local_43d0;
            fStack_43ac = (float)iStack_43cc;
            local_4410 = iVar34 + -1;
            local_4298 = &(this->RenderDataIdentifier).RootBranchName;
            local_4200 = &(this->RenderDataIdentifier).LayerName;
            local_41f8 = &(this->RenderDataIdentifier).RendererName;
            local_4258 = &(this->RenderDataIdentifier).SubResourceName;
            local_4250 = &(this->RenderDataIdentifier).CameraName;
            TVar71._s_0.Y = iStack_43cc;
            TVar71._s_0.X = local_43d0;
            TVar72._s_0.Y = fStack_43ac;
            TVar72._s_0.X = local_43b0;
            local_43c0 = iStack_43cc;
            do {
              this_01 = UMovieGraphDefaultRenderer::GetOrCreateViewRenderTarget
                                  (this_00,(FRenderTargetInitParams *)&local_40f8._s_0,
                                   &this->RenderDataIdentifier);
              pFVar42 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                                  ((UTextureRenderTarget *)this_01);
              if (pFVar42 == (FTextureRenderTargetResource *)0x0) {
                local_43f8 = (FRenderTarget *)0x0;
LAB_14ddf6b54:
                bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RenderTargetResource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPass.cpp"
                                    ,0x152,L"");
                if (bVar33) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              else {
                local_43f8 = (FRenderTarget *)&pFVar42->_padding_;
                if (local_43f8 == (FRenderTarget *)0x0) goto LAB_14ddf6b54;
              }
              if ((local_4464 != local_4450 + -1) || (bVar33 = true, local_4460 != iStack_444c + -1)
                 ) {
                bVar33 = false;
              }
              iVar34 = local_4450 * iStack_444c;
              bVar73 = local_446c != local_4410;
              iVar68 = (param_2->TemporalSampleIndex + param_2->TemporalSampleCount) *
                       local_4448->RenderedFrameNumber * local_4468 + local_446c;
              if ((local_4468 < 2) && (param_2->TemporalSampleCount < 2)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              fVar80 = 0.0;
              fVar74 = 0.0;
              if ((local_4408 == AAM_None) && (bVar17)) {
                TVar43 = MoviePipeline::GetSubPixelJitter((int)local_40e0,iVar68);
                pFVar10 = *(FCameraInfo **)TVar43.field0_0x0;
                local_4430._4_4_ = (float)((ulonglong)pFVar10 >> 0x20);
                local_4430._0_4_ = SUB84(pFVar10,0);
                fVar80 = local_4430._4_4_;
                fVar74 = (float)local_4430;
                local_4430 = pFVar10;
              }
              pFVar37 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,local_40d8);
              pUVar39 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar37);
              UMovieGraphDefaultRenderer::GetCameraInfo
                        (pUVar39,&local_3f08,(this->LayerData).CameraIndex);
              local_3f08.bAllowCameraAspectRatio = true;
              local_3f08.TilingParams.TileSize.field0_0x0._s_0.Y = local_43b8._4_4_;
              local_3f08.TilingParams.TileCount.field0_0x0._s_0.Y = iStack_444c;
              local_3f08.TilingParams.TileCount.field0_0x0._s_0.X = local_4450;
              local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.X = local_4464;
              local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.Y = local_4460;
              local_3f08.SamplingParams.TemporalSampleIndex = local_4448->TemporalSampleIndex;
              local_3f08.SamplingParams.TemporalSampleCount = local_4448->TemporalSampleCount;
              local_3f08.SamplingParams.SpatialSampleIndex = local_446c;
              local_3f08.SamplingParams.SpatialSampleCount = local_4468;
              local_3f08.SamplingParams.SeedOffset = local_43c8;
              dVar12 = (double)((fVar74 * fVar25) / (float)(int)local_4458._0_4_);
              dVar77 = (double)((fVar80 * fVar26) / (float)(int)local_4458._4_4_);
              uVar78 = SUB84(dVar77,0);
              uVar79 = (undefined4)((ulonglong)dVar77 >> 0x20);
              local_4028._8_4_ = uVar78;
              local_4028._0_8_ = dVar12;
              local_4028._12_4_ = uVar79;
              local_3f08.ProjectionMatrixJitterAmount.field0_0x0._8_4_ = uVar78;
              local_3f08.ProjectionMatrixJitterAmount.field0_0x0._s_0.X = dVar12;
              local_3f08.ProjectionMatrixJitterAmount.field0_0x0._12_4_ = uVar79;
              local_3f08.TilingParams.OverlapPad.field0_0x0 = TVar72;
              local_3f08.TilingParams.TileSize.field0_0x0._s_0.X = TVar67._s_0.X;
              local_3f08.bUseCameraManagerPostProcess = local_4486 == '\0';
              FMinimalViewInfo::ClearOverscan(&local_3f08.ViewInfo);
              FMinimalViewInfo::ApplyOverscan(&local_3f08.ViewInfo,fVar75,false,false);
              local_4290 = local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.X * TVar67._s_0.X -
                           local_43d0;
              iStack_428c = local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.Y * local_43b8._4_4_
                            - local_43c0;
              local_3ff8 = (FRenderTarget *)0x0;
              uStack_3ff0 = 0;
              local_3fe8 = 0;
              local_3fe0 = 0;
              local_3fd8 = 0.0;
              local_3fd4 = 0;
              local_3fd0 = 0;
              local_3fc8.Numerator = 0;
              local_3fc8.Denominator = 0;
              uStack_3fc0 = 0;
              local_3fb8 = 0;
              local_3fb0 = 0;
              local_3fa8 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
              local_3fa0 = 0;
              uStack_3f98 = 0;
              local_3f90 = local_3f90 & 0xffffff0000000000;
              local_3f88 = 0;
              uStack_3f84 = 0;
              uStack_3f80 = 0;
              uStack_3f7c = 0;
              local_3f78 = 0;
              uStack_3f74 = 0;
              local_3f70 = local_3f70 & 0xffffff00;
              local_3f6c = 0;
              local_3f68 = 10;
              local_3f64 = 0;
              local_3f60 = 0xffffffff;
              local_3f5c = 0;
              local_4420 = &local_3f58;
              local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_3f58.CustomShowFlags.NumBits = 0;
              local_3f58.CustomShowFlags.MaxBits = 0x80;
              FEngineShowFlags::Init(&local_3f58,ESFIM_Game);
              local_3f18 = 3;
              local_3ff8 = local_43f8;
              uStack_3ff0 = (**(code **)(this_00->_padding_ + 0x180))(this_00);
              local_3fe8._0_4_ = local_4448->OutputFrameNumber;
              local_3fe8._4_4_ = local_4448->ShotOutputFrameNumber;
              local_3fe0._0_4_ = local_4448->RenderedFrameNumber;
              local_3fe0._4_4_ = local_4448->FrameDeltaTime;
              local_3fd8 = local_4448->WorldTimeDilation;
              local_3fd4 = local_4448->bHasRelativeTimeBeenUsed;
              local_3fd0._0_4_ = local_4448->WorldSeconds;
              local_3fd0._4_4_ = local_4448->MotionBlurFraction;
              local_3fc8 = local_4448->FrameRate;
              uStack_3fc0._0_4_ = local_4448->TemporalSampleIndex;
              uStack_3fc0._4_4_ = local_4448->TemporalSampleCount;
              local_3fb8._0_4_ = local_4448->SpatialSampleIndex;
              local_3fb8._4_4_ = local_4448->SpatialSampleCount;
              local_3fb0._0_1_ = local_4448->bIsFirstTemporalSampleForFrame;
              local_3fb0._1_1_ = local_4448->bIsLastTemporalSampleForFrame;
              local_3fb0._2_1_ = local_4448->bDiscardOutput;
              local_3fb0._3_1_ = local_4448->bRequiresAccumulator;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar64 = (local_4448->EvaluatedConfig).field0_0x0.DebugPtr,
                 pUVar64 != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)pUVar64);
              }
              plVar38 = local_4418;
              local_3fa8 = (local_4448->EvaluatedConfig).field0_0x0;
              local_3fa0._0_4_ = (local_4448->RootTimeCode).Hours;
              local_3fa0._4_4_ = (local_4448->RootTimeCode).Minutes;
              uStack_3f98._0_4_ = (local_4448->RootTimeCode).Seconds;
              uStack_3f98._4_4_ = (local_4448->RootTimeCode).Frames;
              local_3f90._0_4_ = (local_4448->RootTimeCode).Subframe;
              local_3f90._4_1_ = (local_4448->RootTimeCode).bDropFrameFormat;
              local_3f90._5_3_ = *(undefined3 *)&(local_4448->RootTimeCode).field_0x15;
              local_3f88 = (local_4448->RootFrameNumber).Value;
              uVar13 = (local_4448->ShotTimeCode).Hours;
              uVar14 = (local_4448->ShotTimeCode).Minutes;
              uVar15 = (local_4448->ShotTimeCode).Seconds;
              uVar16 = (local_4448->ShotTimeCode).Frames;
              uVar3 = (local_4448->ShotTimeCode).Subframe;
              uVar4 = (local_4448->ShotTimeCode).bDropFrameFormat;
              uVar6 = *(undefined3 *)&(local_4448->ShotTimeCode).field_0x15;
              uVar5 = CONCAT31(uVar6,uVar4);
              local_3f6c = (local_4448->ShotFrameNumber).Value;
              local_3f68 = local_440c;
              local_3f5c = local_4408;
              uStack_3f84 = uVar13;
              uStack_3f80 = uVar14;
              uStack_3f7c = uVar15;
              local_3f78 = uVar16;
              uStack_3f74 = uVar3;
              local_3f70 = uVar5;
              local_3f64 = bVar73;
              local_3f60 = iVar68;
              pFVar44 = (FEngineShowFlags *)
                        (**(code **)(*local_4418 + 0x3d0))(local_4418,local_2558);
              FEngineShowFlags::operator=(&local_3f58,pFVar44);
              if (local_2528 != (void *)0x0) {
                FMemory::Free(local_2528);
              }
              local_3f18 = (**(code **)(*plVar38 + 0x3c8))(plVar38);
              local_3f14 = local_3f08.ViewInfo.ProjectionMode.Value;
              pFVar45 = (FScriptContainerElement *)
                        (**(code **)(*(longlong *)this + 0xd0))(this,plVar38,local_4464,local_4460);
              local_4420 = (FEngineShowFlags *)pFVar45;
              if (((pFVar45 != (FScriptContainerElement *)0x0) &&
                  (cVar32 = (**(code **)(*local_4418 + 0x478))(local_4418), cVar32 != '\0')) &&
                 (cVar32 = (**(code **)(*local_4418 + 0x470))(local_4418), cVar32 != '\0')) {
                (**(code **)(*(longlong *)pFVar45 + 0x120))(pFVar45,(this->SystemMemoryMirror).Ptr);
              }
              (**(code **)(*(longlong *)this + 0x80))(this,&local_43e8,&local_3ff8);
              pTVar28 = pTStack_43e0;
              pcVar11 = *(code **)(*(longlong *)this + 0x60);
              local_4048 = local_43e8;
              pTStack_4040 = pTStack_43e0;
              if (pTStack_43e0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_43e0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_43e0->SharedReferenceCount + 1);
                UNLOCK();
              }
              (*pcVar11)(this,local_2518,&local_3f08,local_43e8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar28);
              (**(code **)(*(longlong *)this + 0x40))(this,&local_3f08,local_2518,local_4458);
              (**(code **)(*(longlong *)this + 0x48))
                        (this,&local_3f08.TilingParams,
                         local_3f08.ViewInfo.ProjectionMode.Value == '\x01',local_2478);
              local_3f08.DoFSensorScale =
                   local_3f08.DoFSensorScale * (local_3f08.ViewInfo.Overscan + fVar22);
              pcVar11 = *(code **)(*(longlong *)this + 0x68);
              local_4188 = local_43e8;
              pTStack_4180 = pTStack_43e0;
              if (pTStack_43e0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_43e0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_43e0->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_4430 = (FCameraInfo *)(*pcVar11)(this,local_2518,&local_4188,&local_3f08);
              if ((1 < local_4450) || (1 < iStack_444c)) {
                *(undefined1 *)((longlong)(local_4430 + 1) + 0x8b8) = 1;
              }
              pcVar11 = *(code **)(*(longlong *)this + 0x90);
              local_4178 = local_43e8;
              pTStack_4170 = pTStack_43e0;
              if (pTStack_43e0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_43e0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_43e0->SharedReferenceCount + 1);
                UNLOCK();
              }
              (*pcVar11)(this,&local_4178,&local_3ff8);
              pcVar11 = *(code **)(*(longlong *)this + 0x88);
              local_4168 = local_43e8;
              pTStack_4160 = pTStack_43e0;
              if (pTStack_43e0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_43e0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_43e0->SharedReferenceCount + 1);
                UNLOCK();
              }
              (*pcVar11)(this,&local_4168,&local_3ff8,&local_3f08);
              lVar46 = (**(code **)(this_00->_padding_ + 0x180))(this_00);
              bVar8 = *(byte *)(lVar46 + 0x188);
              pUVar47 = (UWorld *)(**(code **)(this_00->_padding_ + 0x180))();
              FCanvas::FCanvas(&local_2208,local_43f8,(FHitProxyConsumer *)0x0,pUVar47,(uint)bVar8,
                               CDM_DeferDrawing,fVar22);
              local_35c8._8_8_ = 0;
              local_35c8._16_8_ = (longlong *)0x0;
              local_35c8._0_8_ = &___7FMovieGraphSampleState_MovieGraph_UE__6B_;
              FMovieGraphTraversalContext::FMovieGraphTraversalContext
                        ((FMovieGraphTraversalContext *)(local_35c8 + 0x18));
              pFVar29 = local_43d8;
              local_35c8[0x120] = false;
              local_35c8._296_8_ = (FScriptContainerElement *)0x0;
              local_35c8._304_4_ = 0;
              local_35c8._308_4_ = 0;
              local_35c8._312_8_ = (FScriptContainerElement *)0x0;
              local_35c8._320_4_ = 0;
              local_35c8._324_4_ = 0;
              local_35c8._328_4_ = 0x1000000;
              local_35c8[0x14c] = false;
              local_35c8._368_4_ = 0.0;
              local_35c8._372_4_ = 0;
              local_35c8._376_4_ = 0;
              local_35c8._380_4_ = 0;
              local_35c8._384_4_ = 0;
              local_35c8._388_4_ = 0;
              local_35c8._392_4_ = 0;
              local_35c8[0x18c] = true;
              local_35c8[0x18d] = false;
              local_3430.Elements._0_8_ = 0;
              local_3430.Elements._8_8_ = 0;
              local_3430.Elements._32_8_ = 0;
              local_3430.Elements._40_8_ = uVar23;
              local_3430.Elements._48_8_ = uVar24;
              local_3430.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_3430.HashSize = 0;
              local_33e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_33e0.Data.ArrayNum = 0;
              local_33e0.Data.ArrayMax = 0;
              local_33d0.Data = (FScriptContainerElement *)0x0;
              local_33c8._0_4_ = 0;
              local_33c8._4_4_ = 0;
              local_4388 = local_43d8->ShotIndex;
              local_4384 = local_43d8->ShotCount;
              local_4380 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
                           (local_43d8->Job).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4380.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4380.DebugPtr);
              }
              local_4378 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)
                           (pFVar29->Shot).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4378.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4378.DebugPtr);
              }
              local_4370 = (TObjectPtr<UMovieGraphConfig>_u_0)
                           (pFVar29->RootGraph).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4370.DebugPtr != (UMovieGraphConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4370.DebugPtr);
              }
              FMovieGraphRenderDataIdentifier::FMovieGraphRenderDataIdentifier
                        (&local_4368,&pFVar29->RenderDataIdentifier);
              local_4320 = (pFVar29->Time).OutputFrameNumber;
              local_431c = (pFVar29->Time).ShotOutputFrameNumber;
              local_4318 = (pFVar29->Time).RenderedFrameNumber;
              local_4314 = (pFVar29->Time).FrameDeltaTime;
              local_4310 = (pFVar29->Time).WorldTimeDilation;
              local_430c = (pFVar29->Time).bHasRelativeTimeBeenUsed;
              local_4308 = (pFVar29->Time).WorldSeconds;
              local_4304 = (pFVar29->Time).MotionBlurFraction;
              local_4300 = (pFVar29->Time).FrameRate;
              local_42f8 = (pFVar29->Time).TemporalSampleIndex;
              local_42f4 = (pFVar29->Time).TemporalSampleCount;
              local_42f0 = (pFVar29->Time).SpatialSampleIndex;
              local_42ec = (pFVar29->Time).SpatialSampleCount;
              local_42e8 = (pFVar29->Time).bIsFirstTemporalSampleForFrame;
              local_42e7 = (pFVar29->Time).bIsLastTemporalSampleForFrame;
              local_42e6 = (pFVar29->Time).bDiscardOutput;
              local_42e5 = (pFVar29->Time).bRequiresAccumulator;
              local_42e0 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)
                           (pFVar29->Time).EvaluatedConfig.field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_42e0.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_42e0.DebugPtr);
              }
              pFVar27 = local_4448;
              local_42d8.Hours = (pFVar29->Time).RootTimeCode.Hours;
              local_42d8.Minutes = (pFVar29->Time).RootTimeCode.Minutes;
              local_42d8.Seconds = (pFVar29->Time).RootTimeCode.Seconds;
              local_42d8.Frames = (pFVar29->Time).RootTimeCode.Frames;
              local_42d8.Subframe = (pFVar29->Time).RootTimeCode.Subframe;
              local_42d8.bDropFrameFormat = (pFVar29->Time).RootTimeCode.bDropFrameFormat;
              local_42d8._21_3_ = *(undefined3 *)&(pFVar29->Time).RootTimeCode.field_0x15;
              local_42c0 = (pFVar29->Time).RootFrameNumber.Value;
              local_42bc.Hours = (pFVar29->Time).ShotTimeCode.Hours;
              local_42bc.Minutes = (pFVar29->Time).ShotTimeCode.Minutes;
              local_42bc.Seconds = (pFVar29->Time).ShotTimeCode.Seconds;
              local_42bc.Frames = (pFVar29->Time).ShotTimeCode.Frames;
              local_42bc.Subframe = (pFVar29->Time).ShotTimeCode.Subframe;
              local_42bc.bDropFrameFormat = (pFVar29->Time).ShotTimeCode.bDropFrameFormat;
              local_42bc._21_3_ = *(undefined3 *)&(pFVar29->Time).ShotTimeCode.field_0x15;
              local_42a4 = (pFVar29->Time).ShotFrameNumber.Value;
              local_4320 = local_4448->OutputFrameNumber;
              local_431c = local_4448->ShotOutputFrameNumber;
              local_4318 = local_4448->RenderedFrameNumber;
              local_4314 = local_4448->FrameDeltaTime;
              local_4310 = local_4448->WorldTimeDilation;
              local_430c = local_4448->bHasRelativeTimeBeenUsed;
              local_4308 = local_4448->WorldSeconds;
              local_4304 = local_4448->MotionBlurFraction;
              local_4300 = local_4448->FrameRate;
              local_42f8 = local_4448->TemporalSampleIndex;
              local_42f4 = local_4448->TemporalSampleCount;
              local_42f0 = local_4448->SpatialSampleIndex;
              local_42ec = local_4448->SpatialSampleCount;
              local_42e8 = local_4448->bIsFirstTemporalSampleForFrame;
              local_42e7 = local_4448->bIsLastTemporalSampleForFrame;
              local_42e6 = local_4448->bDiscardOutput;
              local_42e5 = local_4448->bRequiresAccumulator;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar64 = (local_4448->EvaluatedConfig).field0_0x0.DebugPtr,
                 pUVar64 != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)pUVar64);
              }
              local_42e0 = (pFVar27->EvaluatedConfig).field0_0x0;
              local_42d8.Hours = (pFVar27->RootTimeCode).Hours;
              local_42d8.Minutes = (pFVar27->RootTimeCode).Minutes;
              local_42d8.Seconds = (pFVar27->RootTimeCode).Seconds;
              local_42d8.Frames = (pFVar27->RootTimeCode).Frames;
              local_42d8.Subframe = (pFVar27->RootTimeCode).Subframe;
              local_42d8.bDropFrameFormat = (pFVar27->RootTimeCode).bDropFrameFormat;
              local_42d8._21_3_ = *(undefined3 *)&(pFVar27->RootTimeCode).field_0x15;
              local_42c0 = (pFVar27->RootFrameNumber).Value;
              local_42bc.Hours = (pFVar27->ShotTimeCode).Hours;
              local_42bc.Minutes = (pFVar27->ShotTimeCode).Minutes;
              local_42bc.Seconds = (pFVar27->ShotTimeCode).Seconds;
              local_42bc.Frames = (pFVar27->ShotTimeCode).Frames;
              local_42bc.Subframe = (pFVar27->ShotTimeCode).Subframe;
              local_42bc.bDropFrameFormat = (pFVar27->ShotTimeCode).bDropFrameFormat;
              local_42bc._21_3_ = *(undefined3 *)&(pFVar27->ShotTimeCode).field_0x15;
              local_42a4 = (pFVar27->ShotFrameNumber).Value;
              local_42f0 = local_446c;
              local_42ec = local_4468;
              local_4368.RootBranchName = *local_4298;
              ::FString::operator=(&local_4368.LayerName,local_4200);
              ::FString::operator=(&local_4368.RendererName,local_41f8);
              ::FString::operator=(&local_4368.SubResourceName,local_4258);
              ::FString::operator=(&local_4368.CameraName,local_4250);
              local_35c8._24_4_ = local_4388;
              local_35c8._28_4_ = local_4384;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4380.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4380.DebugPtr);
              }
              local_35c8._32_8_ = local_4380;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4378.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4378.DebugPtr);
              }
              local_35c8._40_8_ = local_4378;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_4370.DebugPtr != (UMovieGraphConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_4370.DebugPtr);
              }
              local_35c8._48_8_ = local_4370;
              FMovieGraphRenderDataIdentifier::operator=
                        ((FMovieGraphRenderDataIdentifier *)(local_35c8 + 0x38),&local_4368);
              local_35c8._128_4_ = local_4320;
              local_35c8._132_4_ = local_431c;
              local_35c8._136_4_ = local_4318;
              local_35c8._140_4_ = local_4314;
              local_35c8._144_4_ = local_4310;
              local_35c8[0x94] = (bool)local_430c;
              local_35c8._152_4_ = local_4308;
              local_35c8._156_4_ = local_4304;
              local_35c8._160_4_ = local_4300.Numerator;
              local_35c8._164_4_ = local_4300.Denominator;
              local_35c8._168_4_ = local_42f8;
              local_35c8._172_4_ = local_42f4;
              local_35c8._176_4_ = local_42f0;
              local_35c8._180_4_ = local_42ec;
              local_35c8[0xb8] = (bool)local_42e8;
              local_35c8[0xb9] = (bool)local_42e7;
              local_35c8[0xba] = (bool)local_42e6;
              local_35c8[0xbb] = (bool)local_42e5;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_42e0.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_42e0.DebugPtr);
              }
              plVar38 = local_4418;
              local_35c8._200_4_ = local_42d8.Hours;
              local_35c8._204_4_ = local_42d8.Minutes;
              local_35c8._208_4_ = local_42d8.Seconds;
              local_35c8._212_4_ = local_42d8.Frames;
              local_35c8._216_4_ = local_42d8.Subframe;
              local_35c8[0xdc] = local_42d8.bDropFrameFormat;
              local_35c8._221_3_ = local_42d8._21_3_;
              local_35c8._224_4_ = local_42c0;
              local_35c8._228_4_ = local_42bc.Hours;
              local_35c8._232_4_ = local_42bc.Minutes;
              local_35c8._236_4_ = local_42bc.Seconds;
              local_35c8._240_4_ = local_42bc.Frames;
              local_35c8._244_4_ = local_42bc.Subframe;
              local_35c8[0xf8] = local_42bc.bDropFrameFormat;
              local_35c8._249_3_ = local_42bc._21_3_;
              local_35c8._252_4_ = local_42a4;
              local_35c8._260_4_ = local_4440._4_4_;
              local_35c8._256_4_ = local_4440._0_4_;
              local_35c8._264_8_ = local_4458;
              local_35c8[0x120] = local_4487;
              if (((pFVar27->bRequiresAccumulator != false) || (1 < local_4468)) ||
                 (local_35c8._328_4_ = local_35c8._328_4_ & 0xffffff00, 1 < iVar34)) {
                local_35c8[0x148] = 1;
              }
              if ((pFVar27->bIsLastTemporalSampleForFrame == false) || (local_446c != local_4410)) {
LAB_14ddf796a:
                local_35c8[0x149] = 0;
              }
              else {
                local_35c8[0x149] = true;
                if (!bVar33) goto LAB_14ddf796a;
              }
              local_35c8._348_4_ = iStack_428c;
              local_35c8._344_4_ = local_4290;
              local_35c8._368_4_ = local_3f08.ViewInfo.Overscan;
              local_35c8._372_4_ = local_4158.field0_0x0._0_4_;
              local_35c8._376_4_ = local_4158.field0_0x0._4_4_;
              local_35c8._380_4_ = local_4158.field0_0x0._8_4_;
              local_35c8._384_4_ = local_4158.field0_0x0._12_4_;
              local_35c8._192_8_ = local_42e0;
              local_35c8._272_8_ = TVar67;
              local_35c8._280_8_ = local_35c8._256_8_;
              local_35c8._336_8_ = TVar71;
              local_35c8._352_8_ = (double)(fVar76 - fVar74);
              local_35c8._360_8_ = (double)(fVar76 - fVar80);
              bVar33 = (bool)(**(code **)(*local_4418 + 0x418))(local_4418);
              local_35c8[0x18c] = bVar33;
              bVar33 = (bool)(**(code **)(*plVar38 + 0x450))(plVar38);
              local_35c8[0x18d] = bVar33;
              bVar33 = (bool)(**(code **)(*plVar38 + 0x440))(plVar38);
              local_35c8[0x14b] = bVar33;
              local_35c8[0x14c] = true;
              local_35c8._400_4_ = local_440c;
              local_35c8._388_4_ = 10;
              local_35c8._392_4_ = (this->LayerData).LayerIndex;
              FMovieGraphRenderDataIdentifier::~FMovieGraphRenderDataIdentifier(&local_4368);
              (**(code **)(*(longlong *)this + 0xb0))(this,local_35c8);
              MoviePipeline::GetMetadataPrefixPath(&local_4288,&this->RenderDataIdentifier);
              pFVar48 = UE::Math::TMatrix<double>::ToString(&local_24f8,&local_40b8);
              ::FString::PrintfImpl(&local_4148,L"%s/matrix/worldToCamera");
              local_4198 = &local_4148;
              local_4190 = pFVar48;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)(local_35c8 + 0x198),
                         (TPairInitializer<FString_&&,FString_&&> *)local_4210,(bool *)&local_4198);
              if (local_4148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4148.Data.AllocatorInstance.Data);
              }
              if (local_40b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_40b8.Data.AllocatorInstance.Data);
              }
              pFVar48 = UE::Math::TMatrix<double>::ToString(local_2478,&local_4080);
              ::FString::PrintfImpl(&local_4128,L"%s/matrix/worldToUEClip");
              local_447c = local_4484 | 0x38;
              local_4138 = &local_4128;
              local_4130 = pFVar48;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)(local_35c8 + 0x198),
                         (TPairInitializer<FString_&&,FString_&&> *)(local_4210 + 4),
                         (bool *)&local_4138);
              if (local_4128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4128.Data.AllocatorInstance.Data);
              }
              if (local_4080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4080.Data.AllocatorInstance.Data);
              }
              if (local_4288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4288.Data.AllocatorInstance.Data);
              }
              MoviePipeline::GetMetadataPrefixPath(&local_4268,&this->RenderDataIdentifier);
              pTVar49 = &local_3f08.ViewInfo.PreviousViewTransform.TypedValue;
              if (local_3f08.ViewInfo.PreviousViewTransform.bIsSet == false) {
                pTVar49 = &UE::Math::TTransform<double>::Identity;
              }
              local_4068.X = (pTVar49->Rotation).XY.m128d_f64[0];
              local_4068.Y = (pTVar49->Rotation).XY.m128d_f64[1];
              local_4068.Z = (pTVar49->Rotation).ZW.m128d_f64[0];
              local_4068.W = (pTVar49->Rotation).ZW.m128d_f64[1];
              pTVar50 = UE::Math::TQuat<double>::Rotator(&local_4068,&local_4018);
              pTVar49 = &local_3f08.ViewInfo.PreviousViewTransform.TypedValue;
              if (local_3f08.ViewInfo.PreviousViewTransform.bIsSet == false) {
                pTVar49 = &UE::Math::TTransform<double>::Identity;
              }
              pVVar61 = (VectorRegister4Double *)((longlong)pTVar49 + 0x20);
              local_4098._s_0.X = (pVVar61->XY).m128d_f64[0];
              local_4098._s_0.Y = (pVVar61->XY).m128d_f64[1];
              local_4098._s_0.Z = (double)SUB168(*(undefined1 (*) [16])(pVVar61->ZW).m128d_f64,0);
              MoviePipeline::GetMetadataFromCameraLocRot
                        ((TVector<double> *)&local_3f08,&local_3f08.ViewInfo.Rotation,
                         (TVector<double> *)&local_4098._s_0,pTVar50,&local_4268,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)(local_35c8 + 0x198));
              pAVar31 = local_3f08.ViewActor;
              pcVar11 = *(code **)((local_3f08.ViewActor)->_padding_ + 0x738);
              local_4248 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
              if ((GC::GIsIncrementalReachabilityPending != false) && (local_4248 != (UClass *)0x0))
              {
                GC::MarkAsReachable((UObject *)local_4248);
              }
              pUVar51 = (UCineCameraComponent *)(*pcVar11)(pAVar31,&local_4248);
              MoviePipeline::GetMetadataFromCineCamera
                        (pUVar51,&local_4268,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)(local_35c8 + 0x198));
              if (((local_4448->bDiscardOutput == false) &&
                  (cVar32 = (**(code **)(*(longlong *)this + 0xa8))(this,&local_43e8,&local_3f08),
                  cVar32 == '\0')) || (local_35c8[0x120] != false)) {
                bVar33 = true;
              }
              else {
                bVar33 = false;
              }
              local_4400 = (FMovieGraphPostRendererSubmissionParams *)
                           (**(code **)(*(longlong *)this + 0xb8))
                                     (this,(local_43d8->Time).EvaluatedConfig.field0_0x0.DebugPtr);
              if (local_4400 != (FMovieGraphPostRendererSubmissionParams *)0x0) {
                local_3388.Elements._0_8_ = 0;
                local_3388.Elements._8_8_ = 0;
                local_3388.Elements._32_8_ = 0;
                local_3388.Elements._40_4_ = 0;
                local_3388.Elements._44_4_ = 0x80;
                local_3388.Elements._48_4_ = 0xffffffff;
                local_3388.Elements._52_4_ = 0;
                local_3388.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                local_3388.HashSize = 0;
                (**(code **)((local_4400->SampleState)._padding_ + 1000))();
                iVar34 = local_4390;
                pFVar2 = local_4398 + local_4390;
                pTVar19 = &local_4398->Material;
                while( true ) {
                  this_04 = &(pTVar19->SoftObjectPtr).field_0x8;
                  pUVar69 = (UObject *)0x0;
                  if (local_4390 != iVar34) {
                    local_446f[0] = 0;
                    `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(local_446f);
                  }
                  if ((FMoviePipelinePostProcessPass *)(this_04 + -0x20) == pFVar2) break;
                  pUVar52 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)(this_04 + -8));
                  if (pUVar52 == (UObject *)0x0) {
                    if (*(longlong *)this_04 != 0) {
                      FSoftObjectPath::TryLoad
                                ((FSoftObjectPath *)this_04,(FUObjectSerializeContext *)0x0);
                      pUVar52 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                          ((TPersistentObjectPtr<FSoftObjectPath> *)(this_04 + -8));
                      goto LAB_14ddf7dd1;
                    }
LAB_14ddf7e04:
                    pUVar52 = pUVar69;
                  }
                  else {
LAB_14ddf7dd1:
                    if (pUVar52 == (UObject *)0x0) goto LAB_14ddf7e04;
                    pUVar53 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                    iVar68 = (int)pUVar53->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar52->field_0x10 + 0x38) < iVar68) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar52->field_0x10 + 0x30) +
                         (longlong)iVar68 * 8) != &pUVar53->_padding_)) goto LAB_14ddf7e04;
                  }
                  local_4438 = pUVar52;
                  if (((this_04[-0x20] != '\0') && (pUVar52 != (UObject *)0x0)) && (bVar33)) {
                    pUVar52 = ::operator_new(0x50);
                    local_4428 = pUVar52;
                    if (pUVar52 != (UObject *)0x0) {
                      *(undefined4 *)&pUVar52->field_0x8 = 1;
                      *(undefined4 *)&pUVar52->field_0xc = 1;
                      *(undefined ***)pUVar52 =
                           &
                           ___7__TIntrusiveReferenceController_UFImagePixelPipe___00_SharedPointerInternals__6B_
                      ;
                      pUVar52->field_0x10 = 0;
                      InitializeCriticalSectionAndSpinCount
                                ((LPCRITICAL_SECTION)&pUVar52->field_0x18,4000);
                      *(undefined8 *)&pUVar52[1].field_0x18 = 0;
                      *(undefined8 *)&pUVar52[1].field_0x20 = 0;
                      pUVar69 = pUVar52;
                    }
                    local_43a8 = (FImagePixelPipe *)&pUVar69->field_0x10;
                    pUStack_43a0 = pUVar69;
                    if ((local_43a8 == (FImagePixelPipe *)0x0) &&
                       (bVar73 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InObject != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x246,L""), bVar73)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pFVar10 = local_4430;
                    pFVar21 = (ForAnyElementType *)((longlong)(local_4430 + 2) + 0x828);
                    if (((pFVar21->Data <= (FScriptContainerElement *)(local_4440 + 8)) &&
                        ((FScriptContainerElement *)(local_4440 + 8) <
                         pFVar21->Data + (longlong)*(int *)((longlong)(local_4430 + 2) + 0x834) * 8)
                        ) && (bVar73 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar73)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar68 = *(int *)((longlong)(pFVar10 + 2) + 0x830);
                    if (iVar68 == *(int *)((longlong)(pFVar10 + 2) + 0x834)) {
                      iVar68 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,pFVar21,(int *)((longlong)(pFVar10 + 2) + 0x834));
                    }
                    *(int *)((longlong)(pFVar10 + 2) + 0x830) = iVar68 + 1;
                    *(UObject **)(pFVar21->Data + (longlong)iVar68 * 8) = local_4438;
                    if (this_04[0x20] != '\0') {
                      TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                      ::Emplace<UMaterialInterface_*_const_&>
                                (&local_3388,(UMaterialInterface **)local_4208,
                                 (bool *)(local_4440 + 8));
                      LOCK();
                      local_43a8->bIsExpecting32BitPixelData = (atomic<bool>)0x1;
                      UNLOCK();
                    }
                    pFVar30 = local_4298;
                    local_41e8 = *local_4298;
                    ::FString::FString(&local_41e0,(FString *)(local_4298 + 1));
                    ::FString::FString(&local_41d0,(FString *)(pFVar30 + 3));
                    ::FString::FString(&local_41c0,(FString *)(pFVar30 + 5));
                    ::FString::FString(&local_41b0,(FString *)(pFVar30 + 7));
                    if (*(int *)((longlong)this_04 + -0x10) < 2) {
                      local_4240.ComparisonIndex.Value = *(uint *)&local_4438->field_0x18;
                      local_4240.Number = *(uint *)&local_4438->field_0x1c;
                      ::FName::ToString(&local_4240,(FString *)&local_4220);
                      uVar70 = local_447c | 0x1c1;
                      local_4428 = (UObject *)(CONCAT44(local_4428._4_4_,local_447c) | 0x1c1);
                      pTVar20 = &local_4220;
                      FVar63.Data = local_4220.AllocatorInstance.Data;
                    }
                    else {
                      local_4428 = (UObject *)&local_4278;
                      local_4278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                (&local_4278,*(wchar_t **)((longlong)this_04 + -0x18),
                                 *(int *)((longlong)this_04 + -0x10),0);
                      uVar70 = local_447c | 0xc2;
                      local_4428 = (UObject *)(CONCAT44(local_4428._4_4_,local_447c) | 0xc2);
                      pTVar20 = &local_4278;
                      FVar63.Data = local_4278.AllocatorInstance.Data;
                    }
                    iVar68 = pTVar20->ArrayNum + -1;
                    if (pTVar20->ArrayNum == 0) {
                      iVar68 = 0;
                    }
                    ::FString::AssignRange(&local_41c0,(wchar_t *)FVar63.Data,iVar68);
                    if ((uVar70 & 2) == 0) {
                      uVar36 = (uint)local_4428;
                    }
                    else {
                      uVar70 = uVar70 & 0xfffffffd;
                      uVar36 = uVar70;
                      if (local_4278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_4278.AllocatorInstance.Data);
                      }
                    }
                    local_447c = uVar70;
                    if (((uVar70 & 1) != 0) &&
                       (local_447c = uVar36 & 0xfffffffe,
                       local_4220.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(local_4220.AllocatorInstance.Data);
                    }
                    FMovieGraphSampleState::FMovieGraphSampleState
                              ((FMovieGraphSampleState *)local_32c8,
                               (FMovieGraphSampleState *)local_35c8);
                    local_32c8._56_4_ = local_41e8.ComparisonIndex.Value;
                    local_32c8._60_4_ = local_41e8.Number;
                    ::FString::operator=((FString *)(local_32c8 + 0x40),&local_41e0);
                    ::FString::operator=((FString *)(local_32c8 + 0x50),&local_41d0);
                    ::FString::operator=((FString *)(local_32c8 + 0x60),&local_41c0);
                    ::FString::operator=((FString *)(local_32c8 + 0x70),&local_41b0);
                    local_32c8[0x14b] = false;
                    local_32c8[0x14c] = false;
                    local_32c8[0x18c] = false;
                    local_32c8[0x18d] = *(undefined1 *)((longlong)this_04 + 0x21);
                    puVar54 = (undefined8 *)
                              (**(code **)((local_4400->SampleState)._padding_ + 0x3f0))
                                        (local_4400,local_40a8);
                    if ((undefined8 *)(local_32c8 + 0x138) != puVar54) {
                      if ((FScriptContainerElement *)local_32c8._312_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_32c8._312_8_);
                      }
                      local_32c8._312_8_ = *puVar54;
                      *puVar54 = 0;
                      local_32c8._320_4_ = *(undefined4 *)(puVar54 + 1);
                      local_32c8._324_4_ = *(int *)((longlong)puVar54 + 0xc);
                      puVar54[1] = 0;
                    }
                    if (local_40a8[0] != (void *)0x0) {
                      FMemory::Free(local_40a8[0]);
                    }
                    local_32c8._388_4_ = local_35c8._388_4_ + 1;
                    pTVar55 = (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                               *)(**(code **)(*(longlong *)this + 0xa0))(this,local_32f8,local_32c8)
                    ;
                    FImagePixelPipe::AddEndpoint(local_43a8,pTVar55);
                    if (local_32f8[0] != 0) {
                      plVar38 = local_32e8;
                      if (local_32d0 != (longlong *)0x0) {
                        plVar38 = local_32d0;
                      }
                      (**(code **)(*plVar38 + 0x10))();
                    }
                    local_4108 = local_43a8;
                    pUStack_4100 = pUStack_43a0;
                    if (pUVar69 != (UObject *)0x0) {
                      LOCK();
                      *(int *)&pUVar69->field_0x8 = *(int *)&pUVar69->field_0x8 + 1;
                      UNLOCK();
                    }
                    local_4238 = *(undefined8 *)&local_4438->field_0x18;
                    local_4118 = &local_4238;
                    local_4110 = &local_4108;
                    TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&>_>
                              ((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
                                *)((longlong)(local_4430 + 2) + 0x898),
                               (TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&> *)
                               (local_4208 + 4),(bool *)&local_4118);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pUStack_4100);
                    DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_30d0.Data,local_30c8);
                    if ((FSoftClassPath *)local_30d0.Data != (FSoftClassPath *)0x0) {
                      FMemory::Free(local_30d0.Data);
                    }
                    if (local_30e0.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_30e0.Data);
                    }
                    local_30e8 = 0;
                    if (local_30f0 != (void *)0x0) {
                      FMemory::Free(local_30f0);
                    }
                    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)(local_32c8 + 0x198));
                    if ((FScriptContainerElement *)local_32c8._312_8_ !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free((void *)local_32c8._312_8_);
                    }
                    if ((FScriptContainerElement *)local_32c8._296_8_ !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free((void *)local_32c8._296_8_);
                    }
                    FMovieGraphTraversalContext::~FMovieGraphTraversalContext
                              ((FMovieGraphTraversalContext *)(local_32c8 + 0x18));
                    if ((longlong *)local_32c8._16_8_ != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)(local_32c8._16_8_ + 0xc);
                      iVar68 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if ((iVar68 == 1) && ((longlong *)local_32c8._16_8_ != (longlong *)0x0)) {
                        (**(code **)(*(longlong *)local_32c8._16_8_ + 8))();
                      }
                    }
                    local_32c8._0_8_ = &___7IImagePixelDataPayload__6B_;
                    if (local_41b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_41b0.Data.AllocatorInstance.Data);
                    }
                    if (local_41c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_41c0.Data.AllocatorInstance.Data);
                    }
                    if (local_41d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_41d0.Data.AllocatorInstance.Data);
                    }
                    if (local_41e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_41e0.Data.AllocatorInstance.Data);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pUVar69);
                  }
                  pTVar19 = (TSoftObjectPtr<UMaterialInterface> *)(this_04 + 0x40);
                }
                DestructItems<FMoviePipelinePostProcessPass,int>(local_4398,local_4390);
                TVar67 = local_4228;
                this_00 = local_4230;
                TVar71._s_0.Y = iStack_43cc;
                TVar71._s_0.X = local_43d0;
                TVar72._s_0.Y = fStack_43ac;
                TVar72._s_0.X = local_43b0;
                if (local_4398 != (FMoviePipelinePostProcessPass *)0x0) {
                  FMemory::Free(local_4398);
                }
                local_3388.HashSize = 0;
                if (local_3388.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_3388.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_3388.Elements);
              }
              pFVar10 = local_4430;
              *(bool *)((longlong)(local_4430 + 2) + 0x868) =
                   0 < *(int *)((longlong)(local_4430 + 2) + 0x8a0) -
                       *(int *)((longlong)(local_4430 + 2) + 0x8cc);
              *(uint *)((longlong)(local_4430 + 2) + 0xd0) =
                   *(uint *)((longlong)(local_4430 + 2) + 0xd0) | 0x200;
              if ((bVar18) && (cVar32 = (**(code **)(*local_4418 + 0x420))(), cVar32 != '\0')) {
                uVar70 = 8;
              }
              else {
                uVar70 = 0;
              }
              lVar46 = (longlong)(pFVar10 + 2) + 0x7e4;
              *(uint *)lVar46 = *(uint *)lVar46 & 0xfffffff7;
              lVar46 = (longlong)(pFVar10 + 2) + 0x7e4;
              *(uint *)lVar46 = *(uint *)lVar46 | uVar70;
              pIVar56 = GetRendererModule();
              pTVar28 = pTStack_43e0;
              pcVar11 = *(code **)((longlong)*pIVar56 + 0x40);
              if (pTStack_43e0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_43e0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_43e0->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_4484 = local_447c | 4;
              (*pcVar11)(pIVar56,&local_2208);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar28);
              local_3390 = (undefined ***)0x0;
              local_33a8 = &Core::Private::Function::
                            TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::`38'::<lambda_1>,1,0>
                            ::_vftable_;
              pFStack_33a0 = local_43f8;
              local_33b8[0] =
                   Core::Private::Function::
                   TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
              this_02 = FRenderCommandList::GetInstanceTLS();
              if (this_02 == (FRenderCommandList *)0x0) {
                FRenderThreadCommandPipe::
                Enqueue<TRenderCommandTag<_UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render_::__l38::TSTR_TransitionTextureSRVState577>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_33b8);
              }
              else {
                this_03 = FRenderCommandList::GetRenderThread(this_02);
                local_3338._0_8_ = local_33b8[0];
                local_3310 = local_3390;
                local_3390 = (undefined ***)0x0;
                local_3328 = local_33a8;
                pFStack_3320 = pFStack_33a0;
                local_3318 = local_3398;
                local_33b8[0] = (code *)0x0;
                local_3308 = 2;
                pFVar57 = (FRenderCommandTag *)
                          TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::TSTR_TransitionTextureSRVState577>
                          ::Get();
                RenderCommandPipe::FCommandList::Enqueue
                          (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                    *)local_3338,pFVar57);
                uVar65 = (ulonglong)local_3308;
                if ((2 < uVar65) &&
                   (bVar73 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar73)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar65] ==
                    Core::Private::
                    TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                    Destruct) {
                  if ((code *)local_3338._0_8_ != (code *)0x0) {
                    pppuVar62 = (undefined ***)(local_3338 + 0x10);
                    if (local_3310 != (undefined ***)0x0) {
                      pppuVar62 = local_3310;
                    }
                    (*(code *)(*pppuVar62)[2])();
                  }
                }
                else {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar65])(local_3338);
                }
              }
              if (local_33b8[0] != (code *)0x0) {
                pppuVar62 = &local_33a8;
                if (local_3390 != (undefined ***)0x0) {
                  pppuVar62 = local_3390;
                }
                (*(code *)(*pppuVar62)[2])();
              }
              plVar38 = local_4418;
              pFVar44 = local_4420;
              if (((local_4420 != (FEngineShowFlags *)0x0) &&
                  (cVar32 = (**(code **)(*local_4418 + 0x478))(local_4418), cVar32 != '\0')) &&
                 (cVar32 = (**(code **)(*plVar38 + 0x470))(plVar38), cVar32 != '\0')) {
                (**(code **)(*(longlong *)pFVar44 + 0x118))(pFVar44,(this->SystemMemoryMirror).Ptr);
              }
              if ((bVar33) && (this->bWriteBeautyPassToDisk != false)) {
                if ((((local_43d8->Shot).field0_0x0.DebugPtr)->ShotInfo).State == CoolingDown) {
                  if (this->RemainingCooldownReadbackFrames == 0) {
                    if (local_4268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4268.Data.AllocatorInstance.Data);
                    }
                    DestructItems<FSoftClassPath,int>
                              ((FSoftClassPath *)local_33d0.Data,(int)local_33c8);
                    if ((FSoftClassPath *)local_33d0.Data != (FSoftClassPath *)0x0) {
                      FMemory::Free(local_33d0.Data);
                    }
                    if (local_33e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_33e0.Data.AllocatorInstance.Data);
                    }
                    local_3430.HashSize = 0;
                    if (local_3430.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FMemory::Free((void *)local_3430.Hash.SecondaryData);
                    }
                    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)(local_35c8 + 0x198));
                    if ((FScriptContainerElement *)local_35c8._312_8_ !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free((void *)local_35c8._312_8_);
                    }
                    if ((FScriptContainerElement *)local_35c8._296_8_ !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free((void *)local_35c8._296_8_);
                    }
                    FMovieGraphTraversalContext::~FMovieGraphTraversalContext
                              ((FMovieGraphTraversalContext *)(local_35c8 + 0x18));
                    if ((longlong *)local_35c8._16_8_ != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)(local_35c8._16_8_ + 0xc);
                      iVar34 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if ((iVar34 == 1) && ((longlong *)local_35c8._16_8_ != (longlong *)0x0)) {
                        (**(code **)(*(longlong *)local_35c8._16_8_ + 8))(local_35c8._16_8_,1);
                      }
                    }
                    local_35c8._0_8_ = &___7IImagePixelDataPayload__6B_;
                    FCanvas::~FCanvas(&local_2208);
                    TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                    ::
                    ~TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                              (local_22c8);
                    local_22d0 = 0;
                    if (local_22d8 != (void *)0x0) {
                      FMemory::Free(local_22d8);
                    }
                    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              (&local_2318);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTStack_43e0);
                    if (local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)local_3f58.CustomShowFlags.AllocatorInstance.
                                            SecondaryData);
                    }
                    if (local_3f08.CameraName.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3f08.CameraName.Data.AllocatorInstance.Data);
                    }
                    goto LAB_14ddf93a3;
                  }
                  this->RemainingCooldownReadbackFrames = this->RemainingCooldownReadbackFrames + -1
                  ;
                }
                FMovieGraphSampleState::FMovieGraphSampleState((FMovieGraphSampleState *)local_30b8)
                ;
                local_2eb0 = (TIntPoint<int>_u_0)0x0;
                uStack_2ea8 = CONCAT17((char)((ulonglong)uStack_2ea8 >> 0x38),0x1000000000000);
                FMinimalViewInfo::FMinimalViewInfo(&local_2e98);
                local_25c8 = (AActor *)0x0;
                FStack_25c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FStack_25c0.Data.ArrayNum = 0;
                FStack_25c0.Data.ArrayMax = 0;
                local_25b0 = true;
                local_25ac = 1.0;
                local_2560 = true;
                local_30b8._24_4_ = local_35c8._24_4_;
                local_30b8._28_4_ = local_35c8._28_4_;
                if ((GC::GIsIncrementalReachabilityPending != false) &&
                   ((UMoviePipelineExecutorJob *)local_35c8._32_8_ !=
                    (UMoviePipelineExecutorJob *)0x0)) {
                  GC::MarkAsReachable((UObject *)local_35c8._32_8_);
                }
                local_30b8._32_8_ = local_35c8._32_8_;
                if ((GC::GIsIncrementalReachabilityPending != false) &&
                   ((UMoviePipelineExecutorShot *)local_35c8._40_8_ !=
                    (UMoviePipelineExecutorShot *)0x0)) {
                  GC::MarkAsReachable((UObject *)local_35c8._40_8_);
                }
                local_30b8._40_8_ = local_35c8._40_8_;
                if ((GC::GIsIncrementalReachabilityPending != false) &&
                   ((UMovieGraphConfig *)local_35c8._48_8_ != (UMovieGraphConfig *)0x0)) {
                  GC::MarkAsReachable((UObject *)local_35c8._48_8_);
                }
                local_30b8._56_8_ = local_35c8._56_8_;
                local_30b8._48_8_ = local_35c8._48_8_;
                ::FString::operator=((FString *)(local_30b8 + 0x40),(FString *)(local_35c8 + 0x40));
                ::FString::operator=((FString *)(local_30b8 + 0x50),(FString *)(local_35c8 + 0x50));
                ::FString::operator=((FString *)(local_30b8 + 0x60),(FString *)(local_35c8 + 0x60));
                ::FString::operator=((FString *)(local_30b8 + 0x70),(FString *)(local_35c8 + 0x70));
                FMovieGraphTimeStepData::operator=
                          ((FMovieGraphTimeStepData *)(local_30b8 + 0x80),
                           (FMovieGraphTimeStepData *)(local_35c8 + 0x80));
                local_30b8._256_8_ = local_35c8._256_8_;
                local_30b8._264_8_ = local_35c8._264_8_;
                local_30b8._272_8_ = local_35c8._272_8_;
                local_30b8._280_8_ = local_35c8._280_8_;
                local_30b8[0x120] = local_35c8[0x120];
                ::FString::operator=
                          ((FString *)(local_30b8 + 0x128),(FString *)(local_35c8 + 0x128));
                ::FString::operator=
                          ((FString *)(local_30b8 + 0x138),(FString *)(local_35c8 + 0x138));
                iVar34 = local_3430.HashSize;
                local_30b8[0x148] = (bool)local_35c8[0x148];
                local_30b8[0x149] = (bool)local_35c8[0x149];
                local_30b8[0x14a] = local_35c8[0x14a];
                local_30b8[0x14b] = (bool)local_35c8[0x14b];
                local_30b8[0x14c] = local_35c8[0x14c];
                local_30b8._336_8_ = local_35c8._336_8_;
                local_30b8._344_8_ = local_35c8._344_8_;
                local_30b8._352_8_ = local_35c8._352_8_;
                local_30b8._360_8_ = local_35c8._360_8_;
                local_30b8._368_4_ = local_35c8._368_4_;
                local_30b8._376_4_ = local_35c8._376_4_;
                local_30b8._372_4_ = local_35c8._372_4_;
                local_30b8._384_4_ = local_35c8._384_4_;
                local_30b8._380_4_ = local_35c8._380_4_;
                local_30b8._388_4_ = local_35c8._388_4_;
                local_30b8._392_4_ = local_35c8._392_4_;
                local_30b8[0x18c] = (bool)local_35c8[0x18c];
                local_30b8[0x18d] = (bool)local_35c8[0x18d];
                local_30b8._400_4_ = local_35c8._400_4_;
                lVar46 = (longlong)local_3430.HashSize;
                uVar70 = local_3430.HashSize;
                if ((uint)local_3430.HashSize < 2) {
                  if (local_2ee0.Data != (FScriptContainerElement *)0x0) {
                    uVar70 = 0;
                    goto LAB_14ddf8b31;
                  }
                }
                else {
LAB_14ddf8b31:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_2ee0,0,uVar70,4);
                }
                _Src = (ForElementType<FSetElementId>)(local_35c8 + 0x1d0);
                if (local_3430.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  _Src = local_3430.Hash.SecondaryData;
                }
                FVar63.Data = local_2ee8;
                if (local_2ee0.Data != (FScriptContainerElement *)0x0) {
                  FVar63.Data = local_2ee0.Data;
                }
                if (iVar34 != 0) {
                  memcpy(FVar63.Data,(void *)_Src,lVar46 << 2);
                }
                local_2ed8 = iVar34;
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)(local_30b8 + 0x198),
                            (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)(local_35c8 + 0x198));
                ::FString::operator=(&local_2ed0,&local_33e0);
                DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_2ec0.Data,local_2eb8);
                FVar63.Data = local_33d0.Data;
                iVar34 = (int)local_33c8;
                local_2eb8 = (int)local_33c8;
                if (((int)local_33c8 == 0) && (local_2eb4 == 0)) {
                  local_2eb4 = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,(int)local_33c8,local_2eb4,&local_2ec0,(int)local_33c8,
                             &local_2eb4);
                  ConstructItems<FSoftClassPath,FSoftClassPath,int>
                            (local_2ec0.Data,(FSoftClassPath *)FVar63.Data,iVar34);
                }
                pTVar66 = (TNode *)0x0;
                local_2eb0 = local_40f8;
                uStack_2ea8 = uStack_40f0;
                FMinimalViewInfo::operator=(&local_2e98,&local_3f08.ViewInfo);
                local_25c8 = local_3f08.ViewActor;
                ::FString::operator=(&FStack_25c0,&local_3f08.CameraName);
                local_25b0 = local_3f08.bAllowCameraAspectRatio;
                local_25ac = local_3f08.DoFSensorScale;
                TStack_25a0._s_0.Y = local_3f08.TilingParams.TileSize.field0_0x0._s_0.Y;
                TStack_25a0._s_0.X = local_3f08.TilingParams.TileSize.field0_0x0._s_0.X;
                local_25a8 = local_3f08.TilingParams.OverlapPad.field0_0x0;
                local_2598._s_0.Y = local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.Y;
                local_2598._s_0.X = local_3f08.TilingParams.TileIndexes.field0_0x0._s_0.X;
                TStack_2590 = local_3f08.TilingParams.TileCount.field0_0x0;
                local_2588._4_4_ = local_3f08.SamplingParams.TemporalSampleCount;
                local_2588._0_4_ = local_3f08.SamplingParams.TemporalSampleIndex;
                local_2588._8_4_ = local_3f08.SamplingParams.SpatialSampleIndex;
                local_2588._12_4_ = local_3f08.SamplingParams.SpatialSampleCount;
                local_2578 = local_3f08.SamplingParams.SeedOffset;
                local_2570 = local_3f08.ProjectionMatrixJitterAmount.field0_0x0._s_0.X;
                dStack_2568 = local_3f08.ProjectionMatrixJitterAmount.field0_0x0._s_0.Y;
                local_2560 = local_3f08.bUseCameraManagerPostProcess;
                pTVar58 = ::operator_new(0xb70);
                local_40d0 = pTVar58;
                if (pTVar58 != (TNode *)0x0) {
                  pTVar58->NextNode = (TNode *)0x0;
                  local_4400 = &pTVar58->Item;
                  FMovieGraphSampleState::FMovieGraphSampleState
                            (&local_4400->SampleState,(FMovieGraphSampleState *)local_30b8);
                  (pTVar58->Item).RenderTargetInitParams.Size.field0_0x0 = local_2eb0;
                  (pTVar58->Item).RenderTargetInitParams.TargetGamma =
                       (float)(undefined4)uStack_2ea8;
                  (pTVar58->Item).RenderTargetInitParams.bForceLinearGamma = (bool)uStack_2ea8._4_1_
                  ;
                  (pTVar58->Item).RenderTargetInitParams.PixelFormat = uStack_2ea8._5_1_;
                  (pTVar58->Item).RenderTargetInitParams.bIncludeInPreviewWindow =
                       (bool)uStack_2ea8._6_1_;
                  (pTVar58->Item).RenderTargetInitParams.field_0xf = uStack_2ea8._7_1_;
                  local_4430 = &(pTVar58->Item).CameraInfo;
                  FMinimalViewInfo::FMinimalViewInfo(&local_4430->ViewInfo,&local_2e98);
                  (pTVar58->Item).CameraInfo.ViewActor = local_25c8;
                  pFVar48 = &(pTVar58->Item).CameraInfo.CameraName;
                  (pFVar48->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_4428 = (UObject *)CONCAT44(local_4428._4_4_,FStack_25c0.Data.ArrayNum);
                  local_4420 = (FEngineShowFlags *)FStack_25c0.Data.AllocatorInstance.Data;
                  (pTVar58->Item).CameraInfo.CameraName.Data.ArrayNum = FStack_25c0.Data.ArrayNum;
                  piVar1 = &(pTVar58->Item).CameraInfo.CameraName.Data.ArrayMax;
                  local_43f8 = (FRenderTarget *)pFVar48;
                  if (FStack_25c0.Data.ArrayNum == 0) {
                    *piVar1 = 0;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,FStack_25c0.Data.ArrayNum,0,(ForAnyElementType *)pFVar48,
                               FStack_25c0.Data.ArrayNum,piVar1);
                    memcpy((pFVar48->Data).AllocatorInstance.Data,local_4420,
                           (longlong)(int)(uint)local_4428 * 2);
                  }
                  (pTVar58->Item).CameraInfo.bAllowCameraAspectRatio = local_25b0;
                  (pTVar58->Item).CameraInfo.DoFSensorScale = local_25ac;
                  (pTVar58->Item).CameraInfo.TilingParams.OverlapPad.field0_0x0 = local_25a8;
                  (pTVar58->Item).CameraInfo.TilingParams.TileSize.field0_0x0 = TStack_25a0;
                  (pTVar58->Item).CameraInfo.TilingParams.TileIndexes.field0_0x0 = local_2598;
                  (pTVar58->Item).CameraInfo.TilingParams.TileCount.field0_0x0 = TStack_2590;
                  (pTVar58->Item).CameraInfo.SamplingParams.TemporalSampleIndex = local_2588._0_4_;
                  (pTVar58->Item).CameraInfo.SamplingParams.TemporalSampleCount = local_2588._4_4_;
                  (pTVar58->Item).CameraInfo.SamplingParams.SpatialSampleIndex = local_2588._8_4_;
                  (pTVar58->Item).CameraInfo.SamplingParams.SpatialSampleCount = local_2588._12_4_;
                  (pTVar58->Item).CameraInfo.SamplingParams.SeedOffset = local_2578;
                  (pTVar58->Item).CameraInfo.ProjectionMatrixJitterAmount.field0_0x0._s_0.X =
                       local_2570;
                  (pTVar58->Item).CameraInfo.ProjectionMatrixJitterAmount.field0_0x0._s_0.Y =
                       dStack_2568;
                  (pTVar58->Item).CameraInfo.bUseCameraManagerPostProcess = local_2560;
                  pTVar66 = pTVar58;
                }
                if (pTVar66 != (TNode *)0x0) {
                  pTVar58 = (this->SubmissionQueue).Head;
                  (this->SubmissionQueue).Head = pTVar66;
                  pTVar58->NextNode = pTVar66;
                }
                if (this->FramesToDelayPostSubmission == 0) {
                  FMovieGraphSampleState::FMovieGraphSampleState(&local_20e8);
                  local_1ee0 = (TIntPoint<int>_u_0)0x0;
                  uStack_1ed8 = CONCAT17((char)((ulonglong)uStack_1ed8 >> 0x38),0x1000000000000);
                  FMinimalViewInfo::FMinimalViewInfo(&local_1ec8.ViewInfo);
                  local_1ec8.ViewActor = (AActor *)0x0;
                  local_1ec8.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                  ;
                  local_1ec8.CameraName.Data.ArrayNum = 0;
                  local_1ec8.CameraName.Data.ArrayMax = 0;
                  local_1ec8.bAllowCameraAspectRatio = true;
                  local_1ec8.DoFSensorScale = 1.0;
                  local_1ec8.bUseCameraManagerPostProcess = true;
                  pTVar66 = ((this->SubmissionQueue).Tail)->NextNode;
                  if (pTVar66 == (TNode *)0x0) {
                    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
                      Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                    }
                  }
                  else {
                    FMovieGraphSampleState::operator=(&local_20e8,&(pTVar66->Item).SampleState);
                    local_1ee0 = (pTVar66->Item).RenderTargetInitParams.Size.field0_0x0;
                    uStack_1ed8._0_4_ = (pTVar66->Item).RenderTargetInitParams.TargetGamma;
                    uStack_1ed8._4_1_ = (pTVar66->Item).RenderTargetInitParams.bForceLinearGamma;
                    uStack_1ed8._5_1_ = (pTVar66->Item).RenderTargetInitParams.PixelFormat;
                    uStack_1ed8._6_1_ =
                         (pTVar66->Item).RenderTargetInitParams.bIncludeInPreviewWindow;
                    uStack_1ed8._7_1_ = (pTVar66->Item).RenderTargetInitParams.field_0xf;
                    DefaultRenderer::FCameraInfo::operator=(&local_1ec8,&(pTVar66->Item).CameraInfo)
                    ;
                    pTVar58 = (this->SubmissionQueue).Tail;
                    (this->SubmissionQueue).Tail = pTVar66;
                    memset(&local_c48,0,0xb60);
                    pFVar59 = FMovieGraphPostRendererSubmissionParams::
                              FMovieGraphPostRendererSubmissionParams(&local_c48);
                    FMovieGraphPostRendererSubmissionParams::operator=
                              (&((this->SubmissionQueue).Tail)->Item,pFVar59);
                    if (local_c48.CameraInfo.CameraName.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c48.CameraInfo.CameraName.Data.AllocatorInstance.Data);
                    }
                    if (local_c48.CameraInfo.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c48.CameraInfo.ViewInfo.PostProcessSettings.
                                    WeightedBlendables.Array.AllocatorInstance.Data);
                    }
                    FMovieGraphSampleState::~FMovieGraphSampleState(&local_c48.SampleState);
                    if (pTVar58 != (TNode *)0x0) {
                      TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1>::
                      TNode::_scalar_deleting_destructor_(pTVar58,1);
                    }
                    (**(code **)(*(longlong *)this + 0x98))(this,&local_20e8);
                  }
                  if (local_1ec8.CameraName.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1ec8.CameraName.Data.AllocatorInstance.Data);
                  }
                  if (local_1ec8.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1ec8.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                                  AllocatorInstance.Data);
                  }
                  FMovieGraphSampleState::~FMovieGraphSampleState(&local_20e8);
                }
                else {
                  this->FramesToDelayPostSubmission = this->FramesToDelayPostSubmission + -1;
                }
                if (FStack_25c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_25c0.Data.AllocatorInstance.Data);
                }
                if (local_2e98.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data
                    != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e98.PostProcessSettings.WeightedBlendables.Array.
                                AllocatorInstance.Data);
                }
                FMovieGraphSampleState::~FMovieGraphSampleState
                          ((FMovieGraphSampleState *)local_30b8);
                if (local_4268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4268.Data.AllocatorInstance.Data);
                }
                DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_33d0.Data,(int)local_33c8)
                ;
                if ((FSoftClassPath *)local_33d0.Data != (FSoftClassPath *)0x0) {
                  FMemory::Free(local_33d0.Data);
                }
                if (local_33e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_33e0.Data.AllocatorInstance.Data);
                }
                local_3430.HashSize = 0;
                if (local_3430.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_3430.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)(local_35c8 + 0x198));
                if ((FScriptContainerElement *)local_35c8._312_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._312_8_);
                }
                if ((FScriptContainerElement *)local_35c8._296_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._296_8_);
                }
                if ((FScriptContainerElement *)local_35c8._112_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._112_8_);
                }
                if ((FScriptContainerElement *)local_35c8._96_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._96_8_);
                }
                if ((FScriptContainerElement *)local_35c8._80_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._80_8_);
                }
                if ((FScriptContainerElement *)local_35c8._64_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._64_8_);
                }
                if ((longlong *)local_35c8._16_8_ != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)(local_35c8._16_8_ + 0xc);
                  iVar34 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar34 == 1) && ((longlong *)local_35c8._16_8_ != (longlong *)0x0)) {
                    (**(code **)(*(longlong *)local_35c8._16_8_ + 8))(local_35c8._16_8_,1);
                  }
                }
                local_35c8._0_8_ = &___7IImagePixelDataPayload__6B_;
                FCanvas::~FCanvas(&local_2208);
                if (local_22c8[0].field0_0x0._12_4_ != -1) {
                  local_22c8[0].field0_0x0.TypedValue.HashSize = 0;
                  if ((ForElementType<FSetElementId>)local_22c8[0].field0_0x0._64_8_ !=
                      (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_22c8[0].field0_0x0._64_8_);
                  }
                  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_22c8);
                }
                local_22d0 = 0;
                if (local_22d8 != (void *)0x0) {
                  FMemory::Free(local_22d8);
                }
                TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_2318);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_43e0);
                if (local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData);
                }
                if (local_3f08.CameraName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3f08.CameraName.Data.AllocatorInstance.Data);
                }
              }
              else {
                if (local_4268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4268.Data.AllocatorInstance.Data);
                }
                DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_33d0.Data,(int)local_33c8)
                ;
                if ((FSoftClassPath *)local_33d0.Data != (FSoftClassPath *)0x0) {
                  FMemory::Free(local_33d0.Data);
                }
                if (local_33e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_33e0.Data.AllocatorInstance.Data);
                }
                local_3430.HashSize = 0;
                if (local_3430.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_3430.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)(local_35c8 + 0x198));
                if ((FScriptContainerElement *)local_35c8._312_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._312_8_);
                }
                if ((FScriptContainerElement *)local_35c8._296_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._296_8_);
                }
                if ((FScriptContainerElement *)local_35c8._112_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._112_8_);
                }
                if ((FScriptContainerElement *)local_35c8._96_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._96_8_);
                }
                if ((FScriptContainerElement *)local_35c8._80_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._80_8_);
                }
                if ((FScriptContainerElement *)local_35c8._64_8_ != (FScriptContainerElement *)0x0)
                {
                  FMemory::Free((void *)local_35c8._64_8_);
                }
                if ((longlong *)local_35c8._16_8_ != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)(local_35c8._16_8_ + 0xc);
                  iVar34 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar34 == 1) && ((longlong *)local_35c8._16_8_ != (longlong *)0x0)) {
                    (**(code **)(*(longlong *)local_35c8._16_8_ + 8))(local_35c8._16_8_,1);
                  }
                }
                local_35c8._0_8_ = &___7IImagePixelDataPayload__6B_;
                FCanvas::~FCanvas(&local_2208);
                if (local_22c8[0].field0_0x0._12_4_ != -1) {
                  local_22c8[0].field0_0x0.TypedValue.HashSize = 0;
                  if ((ForElementType<FSetElementId>)local_22c8[0].field0_0x0._64_8_ !=
                      (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_22c8[0].field0_0x0._64_8_);
                  }
                  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_22c8);
                }
                local_22d0 = 0;
                if (local_22d8 != (void *)0x0) {
                  FMemory::Free(local_22d8);
                }
                TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_2318);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_43e0);
                if (local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_3f58.CustomShowFlags.AllocatorInstance.SecondaryData);
                }
                if (local_3f08.CameraName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3f08.CameraName.Data.AllocatorInstance.Data);
                }
              }
LAB_14ddf93a3:
              if (local_3f08.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance
                  .Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f08.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                              AllocatorInstance.Data);
              }
              local_446c = local_446c + 1;
              param_2 = local_4448;
              fVar74 = local_43c4;
              fVar80 = __real_bf000000;
              iVar34 = local_4468;
              iVar68 = local_4450;
            } while (local_446c < local_4468);
          }
          local_4464 = local_4464 + 1;
        } while (local_4464 < iVar68);
      }
      local_4460 = local_4460 + 1;
    } while (local_4460 < iStack_444c);
  }
  if (local_1588.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1588.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_1588.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1588.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance
                  .Data);
  }
  return;
}

// Setup @ 14ddfce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Setup
          (FMovieGraphDeferredPass *this,
          TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UMovieGraphImagePassBaseNode,FWeakObjectPtr> param_2,
          FMovieGraphRenderPassLayerData *param_3)

{
  TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr> *this_00;
  FString *pFVar1;
  TPimplPtr<FSceneViewStateSystemMemoryMirror,0> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  FSceneViewStateSystemMemoryMirror *pFVar7;
  longlong lVar8;
  code *pcVar9;
  ForElementType<unsigned_int> FVar10;
  TMap<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
  *pTVar11;
  FMovieGraphDeferredPass *pFVar12;
  TMap<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
  *pTVar13;
  char cVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  undefined1 *puVar21;
  UObject *pUVar22;
  longlong lVar23;
  TPimplPtr<FSceneViewStateSystemMemoryMirror,0> TVar24;
  UMovieGraphDefaultRenderer *this_01;
  UObject *pUVar25;
  longlong lVar26;
  undefined4 *puVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  int iVar30;
  uint uVar32;
  int iVar33;
  UObject *pUVar34;
  int iVar35;
  uint *puVar36;
  FWeakObjectPtr local_res10;
  undefined1 auStack_b18 [32];
  undefined4 local_af8;
  undefined4 local_af0;
  undefined4 local_ae8;
  undefined4 local_ae0;
  uint local_ad8;
  uint local_ad0;
  uint local_ac8;
  int local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined1 local_aa7 [7];
  ForElementType<unsigned_int> local_aa0;
  ForAnyElementType local_a98;
  undefined8 local_a90;
  ForAnyElementType local_a88;
  undefined8 local_a80;
  undefined4 local_a78;
  undefined4 uStack_a74;
  int local_a70;
  int local_a6c;
  undefined8 local_a68;
  FMovieGraphRenderPassLayerData *local_a60;
  undefined1 local_a58 [8];
  int local_a50;
  int *local_a48;
  longlong local_a40;
  undefined8 *local_a38;
  TMap<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
  *local_a30;
  FMovieGraphDeferredPass *local_a28;
  TMap<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
  *local_a20;
  uint uStack_a18;
  uint uStack_a14;
  undefined1 *local_a10;
  undefined4 uStack_a08;
  uint uStack_a04;
  uint local_a00;
  undefined4 uStack_9fc;
  int iStack_9f8;
  undefined4 uStack_9f4;
  TMap<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
  *local_9f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9e8;
  undefined8 uStack_9c8;
  undefined1 local_9c0 [8];
  undefined1 local_9b8 [36];
  undefined4 local_994;
  FCameraInfo local_988;
  ulonglong local_48;
  UObject *pUVar31;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b18;
  pUVar25 = (UObject *)0x0;
  iVar33 = 0;
  *(int *)&this->field_0x8 = param_1.WeakPtr.ObjectIndex;
  *(int *)&this->field_0xc = param_1.WeakPtr.ObjectSerialNumber;
  (this->LayerData).BranchName = param_3->BranchName;
  local_res10 = param_1.WeakPtr;
  local_a60 = param_3;
  local_a28 = this;
  ::FString::operator=(&(this->LayerData).LayerName,&param_3->LayerName);
  (this->LayerData).CameraIndex = param_3->CameraIndex;
  ::FString::operator=(&(this->LayerData).CameraName,&param_3->CameraName);
  (this->LayerData).LayerIndex = param_3->LayerIndex;
  (this->LayerData).NumCameras = param_3->NumCameras;
  this_00 = &param_3->RenderPassNode;
  (this->LayerData).RenderPassNode.WeakPtr = this_00->WeakPtr;
  (this->RenderDataIdentifier).RootBranchName = (this->LayerData).BranchName;
  iVar30 = (this->LayerData).LayerName.Data.ArrayNum;
  iVar18 = 0;
  iVar35 = iVar30 + -1;
  if (iVar30 == 0) {
    iVar35 = iVar18;
  }
  ::FString::AssignRange
            (&(this->RenderDataIdentifier).LayerName,
             (wchar_t *)(this->LayerData).LayerName.Data.AllocatorInstance.Data,iVar35);
  pUVar19 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar19 + 0x388))(pUVar19,&local_a98);
  pFVar1 = &(this->RenderDataIdentifier).RendererName;
  if (pFVar1 != (FString *)&local_a98) {
    pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_a98.Data;
    local_a98.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).RendererName.Data.ArrayNum = (int)local_a90;
    (this->RenderDataIdentifier).RendererName.Data.ArrayMax = local_a90._4_4_;
    local_a90 = 0;
  }
  if (local_a98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data);
  }
  pUVar19 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar19 + 0x390))(pUVar19,&local_a88);
  pFVar1 = &(this->RenderDataIdentifier).SubResourceName;
  if (pFVar1 != (FString *)&local_a88) {
    pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_a88.Data;
    local_a88.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = (int)local_a80;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = local_a80._4_4_;
    local_a80 = 0;
  }
  if (local_a88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data);
  }
  ::FString::operator=(&(this->RenderDataIdentifier).CameraName,&param_3->CameraName);
  pUVar19 = FWeakObjectPtr::Get(&(this->LayerData).RenderPassNode.WeakPtr);
  if (pUVar19 == (UObject *)0x0) {
LAB_14ddfcfef:
    local_ab0 = (UObject *)0x0;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentNode",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPass.cpp"
                        ,0x44,L"");
    pUVar19 = pUVar25;
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    pUVar20 = UMovieGraphImagePassBaseNode::GetPrivateStaticClass();
    iVar30 = (int)pUVar20->_padding_;
    if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar30) ||
       (local_ab0 = pUVar19,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar30 * 8) !=
       &pUVar20->_padding_)) goto LAB_14ddfcfef;
  }
  (**(code **)(*(longlong *)pUVar19 + 0x460))(pUVar19,&local_ab8);
  cVar14 = (**(code **)(*(longlong *)pUVar19 + 0x478))(pUVar19);
  local_aa0 = (ForElementType<unsigned_int>)0x1;
  if (cVar14 == '\0') {
    local_a78 = 1;
    uStack_a74 = 1;
    local_ab8 = &DAT_100000001;
  }
  if (0 < (int)local_ab8) {
    puVar21 = local_ab8;
    pUVar22 = pUVar25;
    pUVar34 = pUVar25;
    iVar30 = local_ab8._4_4_;
    do {
      if (0 < iVar30) {
        local_a48 = &local_a70;
        pUVar31 = pUVar25;
        do {
          local_a70 = (int)pUVar22;
          local_a6c = (int)pUVar31;
          TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_>
                    ((TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
                      *)&this->SceneViewStates,
                     (TKeyInitializer<UE::Math::TIntPoint<int>_&&> *)local_a58,(bool *)&local_a48);
          pUVar34 = (UObject *)(ulonglong)((int)pUVar34 + 1);
          uVar29 = (int)pUVar31 + 1;
          pUVar31 = (UObject *)(ulonglong)uVar29;
          puVar21 = local_ab8;
          iVar30 = local_ab8._4_4_;
        } while ((int)uVar29 < local_ab8._4_4_);
      }
      iVar33 = (int)pUVar34;
      uVar29 = (int)pUVar22 + 1;
      pUVar22 = (UObject *)(ulonglong)uVar29;
    } while ((int)uVar29 < (int)puVar21);
  }
  uVar29 = local_aa0._0_4_;
  pUVar22 = FWeakObjectPtr::Get(&local_res10);
  lVar23 = (**(code **)(*(longlong *)pUVar22 + 0x180))(pUVar22);
  FSceneViewStateReference::Allocate(&this->SceneViewState,(uint)*(byte *)(lVar23 + 0x188));
  cVar14 = (**(code **)(*(longlong *)pUVar19 + 0x478))(pUVar19);
  if (cVar14 == '\0') goto LAB_14ddfd229;
  cVar14 = (**(code **)(*(longlong *)pUVar19 + 0x470))(pUVar19);
  if (cVar14 != '\0') {
    TVar24 = FSceneViewStateInterface::SystemMemoryMirrorAllocate();
    pTVar2 = &this->SystemMemoryMirror;
    if (TVar24.Ptr != (FSceneViewStateSystemMemoryMirror *)pTVar2) {
      pFVar7 = pTVar2->Ptr;
      pTVar2->Ptr = *(FSceneViewStateSystemMemoryMirror **)&(TVar24.Ptr)->TextureMirrors;
      *(undefined8 *)&(TVar24.Ptr)->TextureMirrors = 0;
      if (pFVar7 != (FSceneViewStateSystemMemoryMirror *)0x0) {
        (*(code *)pFVar7[-1].TemporaryTextures.AllocatorInstance.Data)();
      }
    }
    if (local_a40 != 0) {
      (**(code **)(local_a40 + -0x10))();
    }
  }
  this_01 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(&local_res10);
  UMovieGraphDefaultRenderer::GetCameraInfo(this_01,&local_988,local_a60->CameraIndex);
  if ((local_988.ViewInfo.PostProcessSettings.bOverride_AutoExposureMethod == 0) ||
     (local_988.ViewInfo.PostProcessSettings.AutoExposureMethod.Value == '\x02')) {
    (**(code **)(*(longlong *)local_ab0 + 0x458))();
LAB_14ddfd1fd:
    this->bHasAutoExposurePass = false;
  }
  else {
    cVar14 = (**(code **)(*(longlong *)local_ab0 + 0x458))();
    if ((cVar14 == '\0') || (local_ab8._4_4_ * (int)local_ab8 < 2)) goto LAB_14ddfd1fd;
    this->bHasAutoExposurePass = true;
    local_a68 = 0xffffffffffffffff;
    local_a38 = &local_a68;
    TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
                *)&this->SceneViewStates,
               (TKeyInitializer<UE::Math::TIntPoint<int>_&&> *)(local_a58 + 4),(bool *)&local_a38);
    iVar33 = iVar33 + 1;
  }
  if (local_988.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_988.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.
                  Data);
  }
LAB_14ddfd229:
  local_a30 = &this->SceneViewStates;
  uStack_a18 = 0;
  local_a10 = &(this->SceneViewStates).field_0x10;
  uVar32 = *(uint *)&(this->SceneViewStates).field_0x28;
  uStack_a04 = uStack_a18;
  local_a00 = uStack_a18;
  if (uVar32 != 0) {
    puVar36 = *(uint **)&(this->SceneViewStates).field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)local_a10;
    }
    uVar4 = *puVar36;
    pUVar22 = pUVar25;
    uStack_a18 = 0;
    local_a00 = 0;
    while (uVar4 == 0) {
      uStack_a18 = (int)pUVar25 + 1;
      pUVar25 = (UObject *)(ulonglong)uStack_a18;
      local_a00 = (int)pUVar22 + 0x20;
      pUVar22 = (UObject *)(ulonglong)local_a00;
      uStack_a04 = uVar32;
      if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < (int)uStack_a18)
      goto LAB_14ddfd2ac;
      uVar4 = puVar36[(int)uStack_a18];
    }
    uVar29 = -uVar4 & uVar4;
    uVar3 = (ulonglong)uVar29 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_a50 = (int)lVar23;
    uStack_a04 = local_a50 + -1 + local_a00;
    if ((int)uVar32 < (int)uStack_a04) {
      uStack_a04 = uVar32;
    }
  }
LAB_14ddfd2ac:
  uStack_a08 = 0xffffffff;
  uStack_9fc = local_994;
  iStack_9f8 = *(int *)&(this->SceneViewStates).field_0x8 -
               *(int *)&(this->SceneViewStates).field_0x34;
  TStack_9e8._padding_ = CONCAT44(uVar29,uStack_a18);
  TStack_9e8.CurrentBitIndex = uStack_a04;
  TStack_9e8.UnvisitedBitMask = 0xffffffff;
  TStack_9e8._28_4_ = local_994;
  TStack_9e8.BaseBitIndex = local_a00;
  uStack_9c8 = CONCAT44(uStack_9f4,iStack_9f8);
  uVar32 = *(uint *)&(this->SceneViewStates).field_0x28;
  iVar30 = (int)uVar32 >> 5;
  local_aa0 = (ForElementType<unsigned_int>)&(this->SceneViewStates).field_0x10;
  local_ab0 = (UObject *)(CONCAT44(local_ab0._4_4_,uVar32) & 0xffffffffffffffe0);
  local_a20 = local_a30;
  uStack_a14 = uVar29;
  local_9f0 = local_a30;
  TStack_9e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a10;
  if (((int)uVar32 < 0) ||
     (uVar29 = uVar32 & 0xffffffe0, *(int *)&(this->SceneViewStates).field_0x28 < (int)uVar32)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar29 = (uint)local_ab0;
  }
  pTVar11 = local_a30;
  FVar10 = local_aa0;
  uVar4 = *(int *)((longlong)local_aa0 + 0x18);
  if (uVar32 != uVar4) {
    FVar28 = local_aa0;
    if (*(ForElementType<unsigned_int> *)((longlong)local_aa0 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar28 = *(ForElementType<unsigned_int> *)((longlong)local_aa0 + 0x10);
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar30 * 4);
    while (uVar32 == 0) {
      iVar30 = iVar30 + 1;
      uVar29 = uVar29 + 0x20;
      uVar32 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar30) goto LAB_14ddfd3d0;
      uVar32 = *(uint *)((longlong)FVar28 + (longlong)iVar30 * 4);
    }
    uVar3 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar32 = (int)lVar23 + -1 + uVar29;
    if ((int)uVar4 < (int)uVar32) {
      uVar32 = uVar4;
    }
  }
LAB_14ddfd3d0:
  while( true ) {
    pTVar13 = local_9f0;
    if (*(int *)&local_9f0->field_0x8 - *(int *)&local_9f0->field_0x34 != (int)uStack_9c8) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_aa7);
    }
    lVar23 = (longlong)TStack_9e8.CurrentBitIndex;
    if (((TStack_9e8.CurrentBitIndex == uVar32) &&
        ((ForElementType<unsigned_int>)TStack_9e8.Array == FVar10)) && (pTVar13 == pTVar11)) break;
    lVar8 = *(longlong *)pTVar13;
    pUVar25 = FWeakObjectPtr::Get(&local_res10);
    lVar26 = (**(code **)(*(longlong *)pUVar25 + 0x180))(pUVar25);
    FSceneViewStateReference::Allocate
              ((FSceneViewStateReference *)(lVar8 + lVar23 * 0x48 + 8),
               (uint)*(byte *)(lVar26 + 0x188));
    TStack_9e8.UnvisitedBitMask = TStack_9e8.UnvisitedBitMask & ~TStack_9e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9e8);
  }
  pUVar25 = FWeakObjectPtr::Get(&(local_a60->RenderPassNode).WeakPtr);
  if (pUVar25 != (UObject *)0x0) {
    iVar18 = (**(code **)(*(longlong *)pUVar25 + 0x380))(pUVar25);
  }
  pFVar12 = local_a28;
  local_a28->FramesToDelayPostSubmission = iVar18;
  local_a28->RemainingCooldownReadbackFrames = iVar18;
  bVar15 = (bool)(**(code **)(*(longlong *)pUVar19 + 0x448))(pUVar19);
  pFVar12->bWriteBeautyPassToDisk = bVar15;
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    bVar16 = (**(code **)(*(longlong *)pUVar19 + 0x470))(pUVar19);
    bVar17 = (**(code **)(*(longlong *)pUVar19 + 0x458))(pUVar19);
    bVar15 = pFVar12->bHasAutoExposurePass;
    lVar23 = (**(code **)(*(longlong *)pUVar19 + 0x460))(pUVar19,local_9c0);
    uVar5 = *(undefined4 *)(lVar23 + 4);
    puVar27 = (undefined4 *)(**(code **)(*(longlong *)pUVar19 + 0x460))(pUVar19,local_9b8);
    local_af8 = *puVar27;
    local_ac8 = (uint)bVar16;
    local_ad0 = (uint)bVar17;
    local_ad8 = (uint)bVar15;
    local_ae0 = local_ab8._4_4_;
    local_ae8 = (int)local_ab8;
    local_af0 = uVar5;
    local_ac0 = iVar33;
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return;
}

// ShouldDiscardOutput @ 14ddff000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::ShouldDiscardOutput
          (FMovieGraphDeferredPass *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FCameraInfo *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FWeakObjectPtr *this_00;
  UObject *this_01;
  UMovieGraphPipeline *pUVar6;
  undefined1 local_res8 [8];
  
  this_00 = (FWeakObjectPtr *)(**(code **)(*(longlong *)this + 0x38))(this,local_res8);
  this_01 = FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UObject *)0x0) {
      return false;
    }
  }
  else {
    if (this_01 == (UObject *)0x0) {
      return false;
    }
    GC::MarkAsReachable(this_01);
  }
  pUVar6 = UMovieGraphRendererBase::GetOwningGraph((UMovieGraphRendererBase *)this_01);
  if (pUVar6 == (UMovieGraphPipeline *)0x0) {
    return false;
  }
  uVar1 = pUVar6->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar6->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return *(char *)(*(longlong *)
                    ((pUVar6->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
                  0xcc) != '\x03';
}

// Teardown @ 14ddff850

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Teardown(FMovieGraphDeferredPass *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FSceneViewStateInterface *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pFVar4 = (this->SceneViewState).Reference;
  if (pFVar4 != (FSceneViewStateInterface *)0x0) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,&local_58);
  }
  FSceneViewStateReference::Destroy(&this->SceneViewState);
  puVar1 = &(this->SceneViewStates).field_0x10;
  iVar14 = 0;
  iVar3 = *(int *)&(this->SceneViewStates).field_0x28;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = iVar14;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->SceneViewStates).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar16 = 0;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ddff92d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14ddff92d:
  uVar13 = *(uint *)&(this->SceneViewStates).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar9,iVar14);
  TStack_80.CurrentBitIndex = iVar10;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iVar10;
  TStack_80.BaseBitIndex = iVar16;
  uStack_60 = CONCAT44(uStack_ac,
                       *(int *)&(this->SceneViewStates).field_0x8 -
                       *(int *)&(this->SceneViewStates).field_0x34);
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->SceneViewStates).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->SceneViewStates).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ddffa30;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14ddffa30:
  while( true ) {
    if (*(int *)&(this->SceneViewStates).field_0x8 - *(int *)&(this->SceneViewStates).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar11 = (longlong)TStack_80.CurrentBitIndex;
    if ((TStack_80.CurrentBitIndex == uVar13) &&
       (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->SceneViewStates;
    plVar6 = *(longlong **)(lVar5 + 0x10 + lVar11 * 0x48);
    if (plVar6 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_48);
    }
    FSceneViewStateReference::Destroy((FSceneViewStateReference *)(lVar5 + lVar11 * 0x48 + 8));
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// operator() @ 15058f860

bool __thiscall
`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::GetParentNode'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3709533163014324464>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3709533163014324464>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

