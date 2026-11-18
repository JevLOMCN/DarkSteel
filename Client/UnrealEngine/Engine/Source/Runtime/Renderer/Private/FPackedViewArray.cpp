// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Create @ 14504e7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPackedViewArray * __cdecl
Nanite::FPackedViewArray::Create(FRDGBuilder *param_1,FPackedView *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FPackedViewArray *pFVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FPackedView *pFVar11;
  undefined8 *local_18 [2];
  
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x28,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPackedViewArray *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &___7__TObject_VFPackedViewArray_Nanite___FRDGAllocator__6B_;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)param_1->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPackedViewArray *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar6 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_18[0];
  if (((FPackedView *)puVar7[2] <= param_2) &&
     (param_2 < (FPackedView *)puVar7[2] + *(int *)((longlong)puVar7 + 0x1c))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPackedViewArray *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar6 = *(int *)(puVar7 + 3);
  if (iVar6 == *(int *)((longlong)puVar7 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                      (0x3d0,0x10,(ForElementType<Nanite::FPackedView> *)(puVar7 + 2),
                       (int *)((longlong)puVar7 + 0x1c));
  }
  *(int *)(puVar7 + 3) = iVar6 + 1;
  lVar9 = 7;
  puVar4 = (undefined8 *)((longlong)iVar6 * 0x3d0 + puVar7[2]);
  do {
    pFVar11 = param_2;
    puVar10 = puVar4;
    uVar3 = *(undefined8 *)((pFVar11->SVPositionToTranslatedWorld).M[0] + 2);
    *puVar10 = *(undefined8 *)(pFVar11->SVPositionToTranslatedWorld).M[0];
    puVar10[1] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->SVPositionToTranslatedWorld).M[1] + 2);
    puVar10[2] = *(undefined8 *)(pFVar11->SVPositionToTranslatedWorld).M[1];
    puVar10[3] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->SVPositionToTranslatedWorld).M[2] + 2);
    puVar10[4] = *(undefined8 *)(pFVar11->SVPositionToTranslatedWorld).M[2];
    puVar10[5] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->SVPositionToTranslatedWorld).M[3] + 2);
    puVar10[6] = *(undefined8 *)(pFVar11->SVPositionToTranslatedWorld).M[3];
    puVar10[7] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->ViewToTranslatedWorld).M[0] + 2);
    puVar10[8] = *(undefined8 *)(pFVar11->ViewToTranslatedWorld).M[0];
    puVar10[9] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->ViewToTranslatedWorld).M[1] + 2);
    puVar10[10] = *(undefined8 *)(pFVar11->ViewToTranslatedWorld).M[1];
    puVar10[0xb] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->ViewToTranslatedWorld).M[2] + 2);
    puVar10[0xc] = *(undefined8 *)(pFVar11->ViewToTranslatedWorld).M[2];
    puVar10[0xd] = uVar3;
    uVar3 = *(undefined8 *)((pFVar11->ViewToTranslatedWorld).M[3] + 2);
    puVar10[0xe] = *(undefined8 *)(pFVar11->ViewToTranslatedWorld).M[3];
    puVar10[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar4 = puVar10 + 0x10;
    param_2 = (FPackedView *)&pFVar11->TranslatedWorldToView;
  } while (lVar9 != 0);
  uVar3 = *(undefined8 *)((pFVar11->TranslatedWorldToView).M[0] + 2);
  puVar10[0x10] = *(undefined8 *)(pFVar11->TranslatedWorldToView).M[0];
  puVar10[0x11] = uVar3;
  uVar3 = *(undefined8 *)((pFVar11->TranslatedWorldToView).M[1] + 2);
  puVar10[0x12] = *(undefined8 *)(pFVar11->TranslatedWorldToView).M[1];
  puVar10[0x13] = uVar3;
  uVar3 = *(undefined8 *)((pFVar11->TranslatedWorldToView).M[2] + 2);
  puVar10[0x14] = *(undefined8 *)(pFVar11->TranslatedWorldToView).M[2];
  puVar10[0x15] = uVar3;
  uVar3 = *(undefined8 *)((pFVar11->TranslatedWorldToView).M[3] + 2);
  puVar10[0x16] = *(undefined8 *)(pFVar11->TranslatedWorldToView).M[3];
  puVar10[0x17] = uVar3;
  uVar3 = *(undefined8 *)((pFVar11->TranslatedWorldToClip).M[0] + 2);
  puVar10[0x18] = *(undefined8 *)(pFVar11->TranslatedWorldToClip).M[0];
  puVar10[0x19] = uVar3;
  return (FPackedViewArray *)(puVar7 + 1);
}

// Create @ 14504ea10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPackedViewArray * __cdecl
Nanite::FPackedViewArray::Create
          (FRDGBuilder *param_1,uint param_2,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3)

{
  TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  FPackedView *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPackedViewArray *pFVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  pFVar5 = FRDGBuilder::AllocObject<Nanite::FPackedViewArray,unsigned_int_&>(param_1,local_res10);
  pTVar1 = &pFVar5->Views;
  if (pTVar1 != param_3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FPackedView *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FPackedView *)0x0;
    (pFVar5->Views).ArrayNum = param_3->ArrayNum;
    (pFVar5->Views).ArrayMax = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
  }
  if ((pFVar5->Views).ArrayNum != pFVar5->NumViews) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewArray->Views.Num() == ViewArray->NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.cpp"
                       ,0xfc,L"Expected View array to have %d elements, but it only has %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPackedViewArray *)(*pcVar3)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// CreateWithSetupTask @ 145051850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPackedViewArray * __cdecl
Nanite::FPackedViewArray::CreateWithSetupTask
          (FRDGBuilder *param_1,uint param_2,
          TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>
          *param_3,FPipe *param_4,bool param_5)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  undefined8 uVar5;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar6;
  wchar_t **ppwVar7;
  FTaskBase *pFVar8;
  undefined1 auStackY_d8 [32];
  uint local_98 [2];
  undefined1 local_90 [24];
  FPipe local_78;
  undefined8 uStack_50;
  undefined8 local_48;
  wchar_t **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98[0] = param_2;
  aVar6 = (atomic<UE::Tasks::Private::FTaskBase_*>)
          FRDGBuilder::AllocObject<Nanite::FPackedViewArray,unsigned_int_&>(param_1,local_98);
  local_78.EmptyEventRef.Object = *(TEventCount<unsigned_int> **)param_3;
  pFVar8 = (FTaskBase *)0x0;
  local_40 = *(wchar_t ***)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_48 = *(undefined8 *)&param_3->field_0x20;
  local_78.DebugName = *(wchar_t **)&param_3->field_0x10;
  uStack_50 = *(undefined8 *)&param_3->field_0x18;
  if (local_78.EmptyEventRef.Object != (TEventCount<unsigned_int> *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  local_90._8_8_ = (FTaskHandle *)0x0;
  local_90._16_8_ = 0;
  local_78.LastTask = aVar6;
  FRDGBuilder::
  AddSetupTask<_Nanite::FPackedViewArray::CreateWithSetupTask_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (param_1,(<lambda_1> *)local_90,&local_78,
             (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)param_4,
             (char)local_90 + 8,true,param_5);
  uVar5 = local_90._8_8_;
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_90._8_8_,local_90._16_4_);
  if ((FTaskHandle *)uVar5 != (FTaskHandle *)0x0) {
    FMemory::Free((void *)uVar5);
  }
  pFVar1 = (FTaskHandle *)((longlong)aVar6 + 0x18);
  if (pFVar1 != (FTaskHandle *)local_90) {
    pFVar4 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = (FTaskBase *)local_90._0_8_;
    local_90._0_8_ = pFVar8;
    if (pFVar4 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar4->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  if ((FTaskBase *)local_90._0_8_ != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &((FTaskBase *)local_90._0_8_)->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)((FTaskBase *)local_90._0_8_)->_padding_)(local_90._0_8_,1);
    }
  }
  if (local_78.EmptyEventRef.Object != (TEventCount<unsigned_int> *)0x0) {
    ppwVar7 = &local_78.DebugName;
    if (local_40 != (wchar_t **)0x0) {
      ppwVar7 = local_40;
    }
    (**(code **)(*ppwVar7 + 8))();
  }
  return (FPackedViewArray *)aVar6;
}

