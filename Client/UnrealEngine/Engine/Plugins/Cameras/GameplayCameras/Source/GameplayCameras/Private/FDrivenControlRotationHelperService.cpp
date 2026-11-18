// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// AddMonitoredContext @ 14d65bd20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationHelperService::AddMonitoredContext
          (FDrivenControlRotationHelperService *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FMonitoredContext *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  FCameraEvaluationContext *pFVar7;
  longlong lVar8;
  TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&> local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *local_res10;
  UObject *local_res18;
  FName local_res20;
  FString local_68;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_58;
  undefined1 local_48 [40];
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MonitoredContexts;
  pFVar4 = TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
           ::Find((TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                   *)this_00,&local_58);
  if (pFVar4 != (FMonitoredContext *)0x0) {
    pFVar4->MonitoringRequests = pFVar4->MonitoringRequests + '\x01';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  if ((param_1->Object == (FCameraEvaluationContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlayerController).WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
    if (2 < (byte)LogCameraSystem._0_1_) {
      pFVar7 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->(param_1);
      pUVar5 = FWeakObjectPtr::Get(&(pFVar7->WeakOwner).WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res20.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_res20.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_res20,&local_68);
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_res10 = param_1;
    TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>_>
              ((TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_res10);
    lVar8 = (longlong)(int)local_res8.Key * 0x40 + *(longlong *)&this_00->field_0x0;
    local_res18 = pUVar5;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar8 + 0x10),(FObjectPtr)&local_res18);
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)pUVar5 + 0x7a8))(pUVar5,local_48);
    uVar2 = puVar6[1];
    *(undefined8 *)(lVar8 + 0x18) = *puVar6;
    *(undefined8 *)(lVar8 + 0x20) = uVar2;
    *(undefined8 *)(lVar8 + 0x28) = puVar6[2];
    *(undefined1 *)(lVar8 + 0x30) = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetCachedControlRotation @ 14d65fa10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TRotator<double> * __thiscall
UE::Cameras::FDrivenControlRotationHelperService::GetCachedControlRotation
          (FDrivenControlRotationHelperService *this,TRotator<double> *__return_storage_ptr__,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  double dVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  FMonitoredContext *pFVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  pFVar4 = TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
           ::Find((TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                   *)&this->MonitoredContexts,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pFVar4 == (FMonitoredContext *)0x0) {
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar1;
    __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    dVar3 = (pFVar4->CachedControlRotation).Yaw;
    dVar1 = (pFVar4->CachedControlRotation).Roll;
    __return_storage_ptr__->Pitch = (pFVar4->CachedControlRotation).Pitch;
    __return_storage_ptr__->Yaw = dVar3;
    __return_storage_ptr__->Roll = dVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetTypeID @ 14d661c00

FCameraObjectTypeID * __thiscall
UE::Cameras::FDrivenControlRotationHelperService::GetTypeID
          (FDrivenControlRotationHelperService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662ef0

bool __thiscall
UE::Cameras::FDrivenControlRotationHelperService::IsKindOf
          (FDrivenControlRotationHelperService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperService>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
      FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d664a30

/* WARNING: Removing unreachable block (ram,0x00014d664dc6) */

void __thiscall
UE::Cameras::FDrivenControlRotationHelperService::OnBuildDebugBlocks
          (FDrivenControlRotationHelperService *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  FCameraDebugBlock *pFVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  longlong lVar10;
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *pTVar11;
  bool bVar12;
  int iVar13;
  FCameraDebugBlock *pFVar14;
  UObject *pUVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  FString local_c8;
  ForElementType<unsigned_int> local_b8;
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
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
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *local_80;
  FName local_78;
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar14 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0x58,8);
  pFVar1 = pFVar14 + 1;
  pFVar14[1].Attachments.ArrayNum = 0;
  pFVar14[1].Attachments.ArrayMax = 0;
  piVar2 = &pFVar14[1].Attachments.ArrayNum;
  pFVar1->_padding_ = 0;
  (pFVar14->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &pFVar14[1].Children.ArrayNum;
  (pFVar14->Attachments).ArrayNum = 0;
  (pFVar14->Attachments).ArrayMax = 0;
  (pFVar14->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->Children).ArrayNum = 0;
  (pFVar14->Children).ArrayMax = 0;
  pFVar14[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar14[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar14[1].Children.ArrayNum = 0;
  pFVar14[1].Children.ArrayMax = 0;
  pFVar14[2]._padding_ = 0;
  pFVar14->_padding_ = (longlong)&___7FDrivenControlRotationHelperDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar14);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar14);
  iVar13 = *(int *)&(this->MonitoredContexts).field_0x28;
  local_b8 = (ForElementType<unsigned_int>)&(this->MonitoredContexts).field_0x10;
  iStack_a8 = 0;
  local_b0 = &this->MonitoredContexts;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar13 != 0) {
    puVar23 = *(uint **)&(this->MonitoredContexts).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)&(this->MonitoredContexts).field_0x10;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar16 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d664b51;
      uVar20 = puVar23[lVar16 + 1];
    }
    uStack_a4 = -uVar20 & uVar20;
    uVar6 = (ulonglong)uStack_a4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iStack_94 = local_90 + -1 + (int)lVar16;
    if (iVar13 < iStack_94) {
      iStack_94 = iVar13;
    }
  }
LAB_14d664b51:
  local_a0 = &(this->MonitoredContexts).field_0x10;
  iStack_88 = *(int *)&(this->MonitoredContexts).field_0x8 -
              *(int *)&(this->MonitoredContexts).field_0x34;
  uVar20 = *(uint *)&(this->MonitoredContexts).field_0x28;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  iStack_8c = iStack_94;
  local_80 = local_b0;
  local_70 = local_b0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar20 < 0) || (iVar13 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar7 = *(int *)((longlong)local_b8 + 0x18);
  if (uVar20 != uVar7) {
    FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_b8;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d664c50;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar22 + 4) + lVar16 * 4);
    }
    uVar6 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar20 = (int)lVar16 + -1 + uVar19;
    if ((int)uVar7 < (int)uVar20) {
      uVar20 = uVar7;
    }
  }
LAB_14d664c50:
  while( true ) {
    pTVar11 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar20) &&
        ((ForElementType<unsigned_int>)TStack_68.Array == local_b8)) && (pTVar11 == local_80)) {
      return;
    }
    plVar21 = (longlong *)((longlong)TStack_68.CurrentBitIndex * 0x40 + *(longlong *)pTVar11);
    pTVar8 = (TReferenceControllerBase<1> *)plVar21[1];
    lVar16 = *plVar21;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar16 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar16 + 0x20));
    if (pUVar15 == (UObject *)0x0) {
      ::FString::FString(&local_c8,L"None");
    }
    else {
      local_78.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
      local_78.Number = *(uint *)&pUVar15->field_0x1c;
      ::FName::ToString(&local_78,&local_c8);
    }
    if ((((FScriptContainerElement *)pFVar1->_padding_ <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         (FScriptContainerElement *)pFVar1->_padding_ +
         (longlong)*(int *)((longlong)&pFVar14[1].Attachments.AllocatorInstance.Data + 4) * 0x10))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar13 = *(int *)&pFVar14[1].Attachments.AllocatorInstance.Data;
    if (iVar13 == *(int *)((longlong)&pFVar14[1].Attachments.AllocatorInstance.Data + 4)) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pFVar1,
                          (int *)((longlong)&pFVar14[1].Attachments.AllocatorInstance.Data + 4));
    }
    *(int *)&pFVar14[1].Attachments.AllocatorInstance.Data = iVar13 + 1;
    pFVar17 = (FScriptContainerElement *)pFVar1->_padding_ + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(FScriptContainerElement **)pFVar17 = local_c8.Data.AllocatorInstance.Data;
    *(int *)(pFVar17 + 8) = local_c8.Data.ArrayNum;
    *(int *)(pFVar17 + 0xc) = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    plVar4 = plVar21 + 3;
    if (((*(longlong **)piVar2 <= plVar4) &&
        (plVar4 < *(longlong **)piVar2 +
                  (longlong)*(int *)((longlong)&pFVar14[1].Children.AllocatorInstance.Data + 4) * 3)
        ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar13 = *(int *)&pFVar14[1].Children.AllocatorInstance.Data;
    if (iVar13 == *(int *)((longlong)&pFVar14[1].Children.AllocatorInstance.Data + 4)) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)piVar2,
                          (int *)((longlong)&pFVar14[1].Children.AllocatorInstance.Data + 4));
    }
    *(int *)&pFVar14[1].Children.AllocatorInstance.Data = iVar13 + 1;
    lVar10 = plVar21[4];
    lVar16 = *(longlong *)piVar2;
    plVar5 = (longlong *)(lVar16 + (longlong)iVar13 * 0x18);
    *plVar5 = *plVar4;
    plVar5[1] = lVar10;
    plVar4 = plVar21 + 6;
    *(longlong *)(lVar16 + (longlong)iVar13 * 0x18 + 0x10) = plVar21[5];
    if (((*(longlong **)piVar3 <= plVar4) &&
        (plVar4 < (longlong *)
                  ((longlong)*(longlong **)piVar3 +
                  (longlong)*(int *)((longlong)&pFVar14[2]._padding_ + 4)))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) break;
    iVar13 = (int)pFVar14[2]._padding_;
    if (iVar13 == *(int *)((longlong)&pFVar14[2]._padding_ + 4)) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,(ForAnyElementType *)piVar3,
                          (int *)((longlong)&pFVar14[2]._padding_ + 4));
    }
    *(int *)&pFVar14[2]._padding_ = iVar13 + 1;
    *(char *)(*(longlong *)piVar3 + (longlong)iVar13) = (char)*plVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// OnInitialize @ 14d6681f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationHelperService::OnInitialize
          (FDrivenControlRotationHelperService *this,
          FCameraEvaluationServiceInitializeParams *param_1)

{
  FCameraEvaluationService::SetEvaluationServiceFlags
            ((FCameraEvaluationService *)this,NeedsPreUpdate);
  return;
}

// OnPreUpdate @ 14d668d00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationHelperService::OnPreUpdate
          (FDrivenControlRotationHelperService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  undefined8 uVar1;
  int iVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
              *)&this->MonitoredContexts);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
              *)&this->MonitoredContexts;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar5 * 0x40 + *local_48;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 0x10));
      if (pUVar3 == (UObject *)0x0) {
        TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar5);
        local_10 = '\x01';
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,local_78);
        uVar1 = puVar4[1];
        *(undefined8 *)(lVar6 + 0x18) = *puVar4;
        *(undefined8 *)(lVar6 + 0x20) = uVar1;
        *(undefined8 *)(lVar6 + 0x28) = puVar4[2];
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar2 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// RemoveMonitoredContext @ 14d6710a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDrivenControlRotationHelperService::RemoveMonitoredContext
          (FDrivenControlRotationHelperService *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  TMap<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
  *this_00;
  uchar *puVar1;
  int iVar2;
  FCameraEvaluationContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FMonitoredContext *pFVar7;
  uint uVar8;
  atomic<int> *paVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MonitoredContexts;
  pFVar7 = TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
           ::Find((TMapBase<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>_>
                   *)this_00,&local_38);
  if (pFVar7 != (FMonitoredContext *)0x0) {
    puVar1 = &pFVar7->MonitoringRequests;
    *puVar1 = *puVar1 + 0xff;
    if (*puVar1 == '\0') {
      pFVar3 = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        paVar9 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar9 = &pTVar4->SharedReferenceCount;
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      if (*(int *)&(this->MonitoredContexts).field_0x8 !=
          *(int *)&(this->MonitoredContexts).field_0x34) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar9 = (atomic<int>)((int)*paVar9 + 1);
          UNLOCK();
        }
        uVar8 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar10 = *(undefined1 **)&(this->MonitoredContexts).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->MonitoredContexts).field_0x38;
        }
        iVar2 = *(int *)(puVar10 +
                        (((ulonglong)(uVar8 >> 0x10) ^ (longlong)(int)uVar8) &
                        (longlong)*(int *)&(this->MonitoredContexts).field_0x48 - 1U) * 4);
        while (iVar2 != -1) {
          puVar11 = (ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)&this_00->field_0x0);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar5 = (TReferenceControllerBase<1> *)puVar11[1];
          pFVar6 = (FCameraEvaluationContext *)*puVar11;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (pFVar6 == pFVar3) {
            TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext,0>,FDefaultSetAllocator>
                             *)this_00,iVar2);
            break;
          }
          iVar2 = (int)puVar11[7];
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

