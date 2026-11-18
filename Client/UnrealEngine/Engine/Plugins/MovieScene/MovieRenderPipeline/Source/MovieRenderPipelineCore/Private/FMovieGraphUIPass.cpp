// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// GetCompositingSortOrder @ 14dd24560

int __thiscall
UMovieGraphUIRendererNode::FMovieGraphUIPass::GetCompositingSortOrder(FMovieGraphUIPass *this)

{
  return 0x50;
}

// GetWidget @ 14dd31cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UMovieGraphUIRendererNode::FMovieGraphUIPass::GetWidget
          (FMovieGraphUIPass *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          UMovieGraphWidgetRendererBaseNode *param_1)

{
  UGameViewportClient *pUVar1;
  IGameLayerManager *pIVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UObject *this_00;
  UMovieGraphPipeline *pUVar5;
  UWorld *this_01;
  ULocalPlayer *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  bool bVar9;
  
  this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x90);
  pUVar5 = UMovieGraphRendererBase::GetOwningGraph((UMovieGraphRendererBase *)this_00);
  this_01 = (UWorld *)(**(code **)(pUVar5->_padding_ + 0x180))(pUVar5);
  pUVar6 = UWorld::GetFirstLocalPlayerFromController(this_01);
  pUVar1 = (pUVar6->ViewportClient).field0_0x0.DebugPtr;
  pTVar7 = (pUVar1->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_14dd31d70:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  }
  else {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14dd31d70;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pIVar2 = (pUVar1->GameLayerManagerPtr).Object;
    pSVar8 = (SWidget *)(pIVar2 + -0x55);
    if (pIVar2 == (IGameLayerManager *)0x0) {
      pSVar8 = (SWidget *)0x0;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    __return_storage_ptr__->Object = pSVar8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// Setup @ 14dd415e0

void __thiscall
UMovieGraphUIRendererNode::FMovieGraphUIPass::Setup
          (FMovieGraphUIPass *this,TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1
          ,FMovieGraphRenderPassLayerData *param_2)

{
  TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  FWeakObjectPtr FVar2;
  uint uVar3;
  UObject *pUVar4;
  int iVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  uVar3 = (param_2->BranchName).Number;
  *(uint *)&this->field_0x8 = (param_2->BranchName).ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar3;
  ::FString::operator=((FString *)&this->field_0x10,&param_2->LayerName);
  *(int *)&this->field_0x20 = param_2->CameraIndex;
  ::FString::operator=((FString *)&this->field_0x28,&param_2->CameraName);
  this_00 = &param_2->RenderPassNode;
  *(int *)&this->field_0x38 = param_2->LayerIndex;
  *(uint *)&this->field_0x3c = param_2->NumCameras;
  FVar2 = this_00->WeakPtr;
  *(int *)&this->field_0x40 = FVar2.ObjectIndex;
  *(int *)&this->field_0x44 = FVar2.ObjectSerialNumber;
  *(int *)&this->field_0x90 = param_1.WeakPtr.ObjectIndex;
  *(int *)&this->field_0x94 = param_1.WeakPtr.ObjectSerialNumber;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&this->field_0x8;
  iVar5 = *(int *)&this->field_0x18 + -1;
  if (*(int *)&this->field_0x18 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange((FString *)&this->field_0x50,*(wchar_t **)&this->field_0x10,iVar5);
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x388))(pUVar4,&local_28);
  puVar1 = &this->field_0x60;
  if ((void **)puVar1 != &local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(void **)puVar1 = local_28;
    *(undefined4 *)&this->field_0x68 = (undefined4)local_20;
    *(undefined4 *)&this->field_0x6c = local_20._4_4_;
    local_20 = 0;
    local_28 = (void *)0x0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  ::FString::operator=((FString *)&this->field_0x80,&param_2->CameraName);
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x390))(pUVar4,&local_18);
  puVar1 = &this->field_0x70;
  if ((void **)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(void **)puVar1 = local_18;
    *(undefined4 *)&this->field_0x78 = (undefined4)local_10;
    *(undefined4 *)&this->field_0x7c = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

