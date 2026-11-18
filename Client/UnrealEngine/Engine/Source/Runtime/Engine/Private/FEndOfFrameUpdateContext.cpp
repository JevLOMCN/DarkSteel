// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// SetUpdating @ 147edd6a0

void __thiscall
UWorld::FEndOfFrameUpdateContext::SetUpdating(FEndOfFrameUpdateContext *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Components).AllocatorInstance.Data;
  iVar2 = (this->Components).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x8c) = *(byte *)(lVar3 + 0x8c) & 0xf7;
      *(byte *)(lVar3 + 0x8c) = *(byte *)(lVar3 + 0x8c) | param_1 << 3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// UpdateComponent_Parallel @ 147ee50b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorld::FEndOfFrameUpdateContext::UpdateComponent_Parallel
          (FEndOfFrameUpdateContext *this,FRenderCommandList *param_1,int param_2)

{
  undefined1 *puVar1;
  UActorComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPrimitiveTransformUpdater *pIVar5;
  bool bVar6;
  FTaskTagScope local_38;
  FRecordScope local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UWorld::FEndOfFrameUpdateContext::UpdateComponent_Parallel(FRenderCommandList*___ptr64,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1056,"DeferredRenderUpdates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
               ,0x420);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UWorld::FEndOfFrameUpdateContext::UpdateComponent_Parallel(FRenderCommandList*___ptr64,int)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1056);
  }
  FTaskTagScope::FTaskTagScope(&local_38,EParallelGameThread);
  FRenderCommandList::FRecordScope::FRecordScope(&local_28,param_1,None);
  pIVar5 = FSceneInterface::IPrimitiveTransformUpdater::SetInstanceTLS
                     (this->PrimitiveTransformUpdater);
  uVar4 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = *(UActorComponent **)((this->Components).AllocatorInstance.Data + (longlong)param_2 * 8)
  ;
  if (this_00 != (UActorComponent *)0x0) {
    if (((this_00->bRegistered != 0) &&
        (bVar3 = UObjectBaseUtility::IsTemplate
                           ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject),
        !bVar3)) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
      UActorComponent::DoDeferredRenderUpdates_Concurrent(this_00);
    }
    if (((((uint)this_00->_padding_ >> 0x1e & 1) == 0) &&
        (this_00->MarkedForEndOfFrameUpdateState != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsValid(NextComponent) || NextComponent->GetMarkedForEndOfFrameUpdateState() == EComponentMarkedForEndOfFrameUpdateState::Marked"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
                           ,0x434,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00->MarkedForEndOfFrameUpdateState = '\0';
    this_00->MarkedForEndOfFrameUpdateArrayIndex = -1;
  }
  FSceneInterface::IPrimitiveTransformUpdater::SetInstanceTLS(pIVar5);
  FRenderCommandList::FRecordScope::~FRecordScope(&local_28);
  FTaskTagScope::~FTaskTagScope(&local_38);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Update_GameThread @ 147ee5c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorld::FEndOfFrameUpdateContext::Update_GameThread
          (FEndOfFrameUpdateContext *this,FSceneInterface *param_1,FRenderCommandList *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UActorComponent *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IPrimitiveTransformUpdater *pIVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  UObjectBaseUtility *local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<UActorComponent_*,int> local_78;
  FStaticMeshComponentBulkReregisterContext local_68;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UWorld::FEndOfFrameUpdateContext::Update_GameThread(FSceneInterface*___ptr64,FRenderCommandList*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1083,"DeferredRenderUpdates_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
               ,0x43b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UWorld::FEndOfFrameUpdateContext::Update_GameThread(FSceneInterface*___ptr64,FRenderCommandList*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1083);
  }
  pIVar7 = FSceneInterface::IPrimitiveTransformUpdater::SetInstanceTLS
                     (this->PrimitiveTransformUpdater);
  uVar2 = (this->Components_OnGameThread).ArrayNum;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_a0,0,(int *)((longlong)&local_98 + 4));
  }
  pFVar9 = (this->Components_OnGameThread).AllocatorInstance.Data;
  iVar3 = (this->Components_OnGameThread).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar3 * 8;
  do {
    if ((this->Components_OnGameThread).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      iVar3 = (int)local_98;
      local_88 = local_a0.Data;
      if (((int)local_98 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_80 = iVar3;
      local_78._12_4_ = uStack_7c;
      local_78.ArrayNum = iVar3;
      local_78.DataPtr = (UActorComponent **)local_88;
      FStaticMeshComponentBulkReregisterContext::FStaticMeshComponentBulkReregisterContext
                (&local_68,param_1,&local_78,RenderState);
      iVar3 = (int)local_98;
      uVar8 = (ulonglong)(int)local_98;
      pFVar1 = local_a0.Data + uVar8 * 8;
      FVar10.Data = local_a0.Data;
      while( true ) {
        if ((int)uVar8 != iVar3) {
          `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (FVar10.Data == pFVar1) break;
        this_00 = *(UActorComponent **)FVar10.Data;
        this_00->bRenderStateUpdating = '\x01';
        UActorComponent::DoDeferredRenderUpdates_Concurrent(this_00);
        this_00->bRenderStateUpdating = '\0';
        uVar8 = local_98 & 0xffffffff;
        FVar10.Data = FVar10.Data + 8;
      }
      FStaticMeshComponentBulkReregisterContext::~FStaticMeshComponentBulkReregisterContext
                (&local_68);
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FSceneInterface::IPrimitiveTransformUpdater::SetInstanceTLS(pIVar7);
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_a8 = *(UObjectBaseUtility **)pFVar9;
    if (local_a8 != (UObjectBaseUtility *)0x0) {
      if (((local_a8[3].field_0x20 & 1) == 0) ||
         (bVar5 = UObjectBaseUtility::IsTemplate(local_a8,RF_ArchetypeObject|RF_ClassDefaultObject),
         bVar5)) {
LAB_147ee5df0:
        if (((local_a8 != (UObjectBaseUtility *)0x0) &&
            ((*(uint *)&local_a8->field_0x8 >> 0x1e & 1) == 0)) &&
           (((local_a8[3].field_0x14 & 3) != 2 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsValid(Component) || Component->GetMarkedForEndOfFrameUpdateState() == EComponentMarkedForEndOfFrameUpdateState::MarkedForGameThread"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
                                ,0x44c,L""), bVar5)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (local_a8 != (UObjectBaseUtility *)0x0) {
        if ((*(uint *)&local_a8->field_0x8 >> 0x1e & 1) == 0) {
          if (((local_a0.Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (int)local_98;
          if ((int)local_98 == local_98._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar6 + 1);
          *(UObjectBaseUtility **)(local_a0.Data + (longlong)iVar6 * 8) = local_a8;
        }
        goto LAB_147ee5df0;
      }
      local_a8[3].field_0x14 = local_a8[3].field_0x14 & 0xfc;
      *(uint *)&local_a8[3].field_0x10 = *(uint *)&local_a8[3].field_0x10 | 0xfffffff;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

