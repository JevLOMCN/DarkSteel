// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 3

// RegisterDelayClient @ 145955ad0

void __cdecl FMotionDelayService::RegisterDelayClient(TSharedRef<FMotionDelayClient,1> *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  longlong lVar4;
  FMotionDelayClient *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((MotionDelayService_Impl::DelayClients.AllocatorInstance.Data <=
        (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       MotionDelayService_Impl::DelayClients.AllocatorInstance.Data +
       (longlong)MotionDelayService_Impl::DelayClients.ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (MotionDelayService_Impl::DelayClients.ArrayNum ==
      MotionDelayService_Impl::DelayClients.ArrayMax) {
    MotionDelayService_Impl::DelayClients.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&MotionDelayService_Impl::DelayClients.AllocatorInstance,
                    &MotionDelayService_Impl::DelayClients.ArrayMax);
  }
  FVar2.Data = MotionDelayService_Impl::DelayClients.AllocatorInstance.Data;
  lVar4 = (longlong)MotionDelayService_Impl::DelayClients.ArrayNum;
  MotionDelayService_Impl::DelayClients.ArrayNum =
       MotionDelayService_Impl::DelayClients.ArrayNum + 1;
  *(FMotionDelayClient **)
   (MotionDelayService_Impl::DelayClients.AllocatorInstance.Data + lVar4 * 0x10) = local_18;
  *(TReferenceControllerBase<1> **)(FVar2.Data + lVar4 * 0x10 + 8) = local_10;
  MotionDelayService_Impl::RefreshDelayBufferSizes();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterDelayTarget @ 145955be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FMotionDelayService::RegisterDelayTarget(USceneComponent *param_1,int param_2,FName param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FMotionDelayTarget *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res20;
  FMotionSource local_98;
  FWeakObjectPtr local_88 [2];
  TKeyInitializer<FMotionDelayTarget::FMotionSource_const_&> local_78 [2];
  FWeakObjectPtr local_68;
  USceneComponent *local_60;
  FWeakObjectPtr local_58;
  TRawPtrProxy<FMotionDelayTarget> local_50;
  USceneComponent *local_48;
  FMotionSource *local_40;
  FWeakObjectPtr *local_38;
  TSharedRef<FMotionDelayTarget,1> *local_30;
  TSharedRef<FMotionDelayTarget,1> local_28;
  
  if (!MotionDelayService_Impl::bIsEnabled) {
    return MotionDelayService_Impl::bIsEnabled;
  }
  local_98.SourceId.ComparisonIndex = param_3.ComparisonIndex.Value;
  local_98.SourceId.Number = param_3.Number;
  local_98.PlayerIndex = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_88[0].ObjectIndex = 0;
  local_88[0].ObjectSerialNumber = 0;
  local_60 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_88,(FObjectPtr)&local_60);
  local_58 = local_88[0];
  iVar5 = TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                      *)&MotionDelayService_Impl::DelayTargets,
                     local_88[0].ObjectSerialNumber ^ local_88[0].ObjectIndex,
                     (TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *)&local_58);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x20 + MotionDelayService_Impl::DelayTargets._0_8_;
    plVar9 = (longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 != (longlong *)0x0) {
      lVar8 = *plVar9;
      if ((*(int *)(lVar8 + 0x1a0) != local_98.PlayerIndex) ||
         (*(longlong *)(lVar8 + 0x1a4) !=
          CONCAT44(local_98.SourceId.Number,local_98.SourceId.ComparisonIndex.Value))) {
        *(ulonglong *)(lVar8 + 0x1a0) =
             CONCAT44(local_98.SourceId.ComparisonIndex.Value,local_98.PlayerIndex);
        *(uint *)(lVar8 + 0x1a8) = local_98.SourceId.Number;
        MotionDelayService_Impl::RefreshMotionSources();
      }
      goto LAB_145955e5b;
    }
  }
  pFVar7 = ::operator_new(0x1d0);
  uVar6 = local_98.SourceId.Number;
  if (pFVar7 == (FMotionDelayTarget *)0x0) {
    pFVar7 = (FMotionDelayTarget *)0x0;
  }
  else {
    local_78[0].Key =
         (FMotionSource *)CONCAT44(local_98.SourceId.ComparisonIndex.Value,local_98.PlayerIndex);
    *(longlong *)pFVar7 = 0;
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    FLateUpdateManager::FLateUpdateManager(&pFVar7->LateUpdate);
    *(FMotionSource **)&pFVar7->MotionSource = local_78[0].Key;
    (pFVar7->MotionSource).SourceId.Number = uVar6;
    (pFVar7->ScaleHistoryBuffer).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->ScaleHistoryBuffer).Elements.ArrayNum = 0;
    (pFVar7->ScaleHistoryBuffer).Elements.ArrayMax = 0;
    (pFVar7->ScaleHistoryBuffer).Head = 0;
    (pFVar7->ScaleHistoryBuffer).bIsFull = false;
    if ((((*(longlong *)pFVar7 != 0) && (*(longlong *)&pFVar7->field_0x8 != 0)) &&
        (0 < *(int *)(*(longlong *)&pFVar7->field_0x8 + 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_50.Object = pFVar7;
  TSharedRef<FMotionDelayTarget,1>::TSharedRef<FMotionDelayTarget,1><FMotionDelayTarget>
            (&local_28,&local_50);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_48 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_48);
  local_38 = &local_68;
  local_30 = &local_28;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_&&,TSharedRef<FMotionDelayTarget,1>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
              *)&MotionDelayService_Impl::DelayTargets,
             (TPairInitializer<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_&&,TSharedRef<FMotionDelayTarget,1>_&&>
              *)&local_res20,(bool *)&local_38);
  pTVar1 = *(TReferenceControllerBase<1> **)
            ((longlong)local_res20 * 0x20 + 0x10 + MotionDelayService_Impl::DelayTargets._0_8_);
  lVar8 = *(longlong *)
           ((longlong)local_res20 * 0x20 + 8 + MotionDelayService_Impl::DelayTargets._0_8_);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (MotionDelayService_Impl::SharedBufferSizes != 0) {
    TCircularHistoryBuffer<UE::Math::TVector<double>_>::Resize
              ((TCircularHistoryBuffer<UE::Math::TVector<double>_> *)(lVar8 + 0x1b0),
               MotionDelayService_Impl::SharedBufferSizes);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_145955e5b:
  uVar6 = ::GetTypeHash(&local_98);
  if (MotionDelayService_Impl::SourceSamples._8_4_ != MotionDelayService_Impl::SourceSamples._52_4_)
  {
    lVar8 = 0x154bdb788;
    if (MotionDelayService_Impl::SourceSamples._64_8_ != 0) {
      lVar8 = MotionDelayService_Impl::SourceSamples._64_8_;
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(MotionDelayService_Impl::SourceSamples._72_4_ - 1 & uVar6)
                             * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = (longlong)iVar5;
        if ((*(int *)(MotionDelayService_Impl::SourceSamples._0_8_ + lVar8 * 0x30) ==
             local_98.PlayerIndex) &&
           (*(longlong *)(MotionDelayService_Impl::SourceSamples._0_8_ + 4 + lVar8 * 0x30) ==
            CONCAT44(local_98.SourceId.Number,local_98.SourceId.ComparisonIndex.Value))) {
          if (iVar5 != -1) {
            return MotionDelayService_Impl::bIsEnabled;
          }
          break;
        }
        iVar5 = *(int *)(MotionDelayService_Impl::SourceSamples._0_8_ + 0x28 + lVar8 * 0x30);
      } while (iVar5 != -1);
    }
  }
  local_40 = &local_98;
  TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FMotionDelayTarget::FMotionSource_const_&>_>
            ((TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
              *)&MotionDelayService_Impl::SourceSamples,local_78,(bool *)&local_40);
  if (MotionDelayService_Impl::SharedBufferSizes != 0) {
    TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Resize
              ((TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)
               ((longlong)(int)local_78[0].Key * 0x30 +
               MotionDelayService_Impl::SourceSamples._0_8_ + 0x10),
               MotionDelayService_Impl::SharedBufferSizes);
  }
  return MotionDelayService_Impl::bIsEnabled;
}

// SetEnabled @ 145957770

void __cdecl FMotionDelayService::SetEnabled(bool param_1)

{
  MotionDelayService_Impl::bIsEnabled = param_1;
  return;
}

