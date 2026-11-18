// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 35

// FNavigationPath @ 146d74510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavigationPath * __thiscall
FNavigationPath::FNavigationPath
          (FNavigationPath *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,AActor *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FNavigationPath *pFVar14;
  TVector<double> *pTVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  AActor *local_res8;
  TVector<double> local_b8;
  FBasedPosition local_98;
  
  uVar18 = 0;
  this->_padding_ = 0;
  piVar1 = &(this->PathPoints).ArrayNum;
  this->_padding_ = 0;
  piVar2 = &(this->PathPoints).ArrayMax;
  (this->ShortcutNodeRefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortcutNodeRefs).ArrayNum = 0;
  (this->ShortcutNodeRefs).ArrayMax = 0;
  (this->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Base).WeakPtr = (FWeakObjectPtr)0x0;
  (this->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Filter).Object = (FNavigationQueryFilter *)0x0;
  (this->Filter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FNavigationPath__6B_;
  this->GoalActorAsNavAgent = (INavAgentInterface *)0x0;
  this->SourceActorAsNavAgent = (INavAgentInterface *)0x0;
  this->PathType = Type;
  *(undefined8 *)&this->ObserverDelegate = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x18 = 2;
  puVar4 = &this->field_0xa0;
  this->bErrorStartLocationNonNavigable = 0;
  this->bUseOnPathUpdatedNotify = 0;
  this->bWaitingForRepath = 0;
  this->bUpdateEndPointOnRepath = 1;
  this->bUpdateStartPointOnRepath = 1;
  this->bIgnoreInvalidation = 0;
  this->bDoAutoUpdateOnInvalidation = 1;
  this->bErrorEndLocationNonNavigable = 0;
  (this->NavigationDataUsed).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PathFindingQueryData).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  uVar10 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Y = (double)uVar10;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Z =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar10 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Y = (double)uVar10;
  uVar10 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->PathFindingQueryData).bAllowPartialPaths = 1;
  (this->PathFindingQueryData).bRequireNavigableEndLocation = 1;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Z = (double)uVar10;
  (this->PathFindingQueryData).CostLimit = 1.7976931348623157e+308;
  (this->PathFindingQueryData).QueryFilter.Object = (FNavigationQueryFilter *)0x0;
  (this->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PathFindingQueryData).NavDataFlags = 0;
  this->LastUpdateTimeStamp = -1.0;
  this->GoalActorLocationTetherDistanceSq = -1.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GoalActorLastLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GoalActorLastLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->GoalActorLastLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  InternalResetNavigationPath(this);
  this->bIsReady = 1;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->Base).WeakPtr,(FObjectPtr)&local_res8);
  iVar16 = param_1->ArrayNum;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,8,iVar16,&(this->PathPoints).AllocatorInstance,piVar1,piVar2);
  memset((this->PathPoints).AllocatorInstance.Data + (longlong)iVar12 * 0x30,0,
         (longlong)iVar16 * 0x30);
  iVar16 = param_1->ArrayNum;
  uVar19 = uVar18;
  if (0 < iVar16) {
    do {
      uVar17 = (uint)uVar18;
      uVar13 = 0;
      if ((int)uVar17 < iVar16) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FNavigationPath *)(*pcVar7)();
        return pFVar14;
      }
      FBasedPosition::FBasedPosition
                (&local_98,param_2,
                 (TVector<double> *)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x18));
      pTVar15 = FBasedPosition::operator*(&local_98,&local_b8);
      dVar8 = (pTVar15->field0_0x0)._s_0.X;
      dVar9 = (pTVar15->field0_0x0)._s_0.Y;
      dVar5 = (pTVar15->field0_0x0)._s_0.Z;
      uVar13 = 0;
      if ((int)uVar17 < (this->PathPoints).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FNavigationPath *)(*pcVar7)();
        return pFVar14;
      }
      pFVar6 = (this->PathPoints).AllocatorInstance.Data;
      uVar18 = (ulonglong)(uVar17 + 1);
      *(double *)(pFVar6 + uVar19) = dVar8;
      *(double *)(pFVar6 + uVar19 + 8) = dVar9;
      *(double *)(pFVar6 + uVar19 + 0x10) = dVar5;
      *(double *)(pFVar6 + uVar19 + 0x10 + 8) = 0.0;
      *(undefined8 *)(pFVar6 + uVar19 + 0x20) = 0;
      *(undefined8 *)(pFVar6 + uVar19 + 0x20 + 8) = 0;
      iVar16 = param_1->ArrayNum;
      uVar19 = uVar19 + 0x30;
    } while ((int)(uVar17 + 1) < iVar16);
  }
  return this;
}

// FNavigationPath @ 146d74850

FNavigationPath * __thiscall FNavigationPath::FNavigationPath(FNavigationPath *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  FNavPathType FVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ShortcutNodeRefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortcutNodeRefs).ArrayNum = 0;
  (this->ShortcutNodeRefs).ArrayMax = 0;
  (this->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathPoints).ArrayNum = 0;
  (this->PathPoints).ArrayMax = 0;
  (this->Base).WeakPtr = (FWeakObjectPtr)0x0;
  (this->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Filter).Object = (FNavigationQueryFilter *)0x0;
  (this->Filter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FNavigationPath__6B_;
  this->GoalActorAsNavAgent = (INavAgentInterface *)0x0;
  this->SourceActorAsNavAgent = (INavAgentInterface *)0x0;
  FVar4 = Type;
  puVar2 = &this->field_0xa0;
  this->bErrorStartLocationNonNavigable = 0;
  this->bUseOnPathUpdatedNotify = 0;
  this->bWaitingForRepath = 0;
  this->bUpdateEndPointOnRepath = 1;
  this->bUpdateStartPointOnRepath = 1;
  this->bIgnoreInvalidation = 0;
  this->bDoAutoUpdateOnInvalidation = 1;
  this->bErrorEndLocationNonNavigable = 0;
  this->PathType = FVar4;
  *(undefined8 *)&this->ObserverDelegate = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x10 = 0;
  (this->NavigationDataUsed).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PathFindingQueryData).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x18 = 2;
  uVar3 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Y = (double)uVar3;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Z =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar3 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->PathFindingQueryData).bAllowPartialPaths = 1;
  (this->PathFindingQueryData).bRequireNavigableEndLocation = 1;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Z = (double)uVar3;
  (this->PathFindingQueryData).CostLimit = 1.7976931348623157e+308;
  (this->PathFindingQueryData).QueryFilter.Object = (FNavigationQueryFilter *)0x0;
  (this->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PathFindingQueryData).NavDataFlags = 0;
  this->LastUpdateTimeStamp = -1.0;
  this->GoalActorLocationTetherDistanceSq = -1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GoalActorLastLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GoalActorLastLocation).field0_0x0._s_0.Y = (double)uVar3;
  (this->GoalActorLastLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  InternalResetNavigationPath(this);
  return this;
}

// ~FNavigationPath @ 146d787c0

void __thiscall FNavigationPath::~FNavigationPath(FNavigationPath *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FNavigationPath__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ObserverDelegate).field_0x8,*(int *)&(this->ObserverDelegate).field_0x10);
  pvVar3 = *(void **)&(this->ObserverDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObserverDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Filter).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->PathPoints).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ShortcutNodeRefs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// ContainsAnyCustomLink @ 146d88b80

bool __thiscall FNavigationPath::ContainsAnyCustomLink(FNavigationPath *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNavLinkId FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->PathPoints).ArrayNum) {
    lVar7 = 0;
    FVar4.Id = FNavLinkId::Invalid.Id;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->PathPoints).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar4 = FNavLinkId::Invalid, bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(ulong64 *)((this->PathPoints).AllocatorInstance.Data + lVar7 + 0x28) != FVar4.Id) {
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar6 < (this->PathPoints).ArrayNum);
  }
  return false;
}

// ContainsCustomLink @ 146d88c40

bool __thiscall FNavigationPath::ContainsCustomLink(FNavigationPath *this,uint param_1)

{
  return false;
}

// ContainsCustomLink @ 146d88c50

bool __thiscall FNavigationPath::ContainsCustomLink(FNavigationPath *this,FNavLinkId param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_1.Id != FNavLinkId::Invalid.Id) && (uVar6 = 0, 0 < (this->PathPoints).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->PathPoints).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(ulong64 *)((this->PathPoints).AllocatorInstance.Data + lVar5 + 0x28) == param_1.Id) {
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while ((int)uVar6 < (this->PathPoints).ArrayNum);
  }
  return false;
}

// ContainsNode @ 146d88e20

bool __thiscall FNavigationPath::ContainsNode(FNavigationPath *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->PathPoints).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->PathPoints).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      if (*(ulong64 *)((this->PathPoints).AllocatorInstance.Data + lVar9 + 0x18) == param_1) {
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar8 < (this->PathPoints).ArrayNum);
  }
  pFVar1 = (this->ShortcutNodeRefs).AllocatorInstance.Data;
  pFVar7 = pFVar1;
  do {
    if (pFVar7 == pFVar1 + (longlong)(this->ShortcutNodeRefs).ArrayNum * 8) {
      iVar6 = -1;
LAB_146d88ec9:
      return iVar6 != -1;
    }
    if (*(ulong64 *)pFVar7 == param_1) {
      iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
      goto LAB_146d88ec9;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// DebugDraw @ 146d8e670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNavigationPath::DebugDraw
          (FNavigationPath *this,ANavigationData *param_1,FColor param_2,UCanvas *param_3,
          bool param_4,float param_5,uint param_6)

{
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UWorld *pUVar8;
  longlong lVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  uint uVar12;
  FColor *pFVar13;
  FColor_u_0 local_res18 [4];
  TVector<double>_u_0 local_170;
  UWorld *local_158;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8 [4];
  
  iVar2 = (this->PathPoints).ArrayNum;
  local_res18[0] = param_2.field0_0x0;
  pUVar8 = AActor::GetWorld((AActor *)param_1);
  uVar12 = iVar2 - 1;
  pTVar1 = &this->PathPoints;
  local_158 = pUVar8;
  if (0 < (int)uVar12) {
    lVar9 = 0;
    uVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (this->PathPoints).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar13 = (FColor *)local_res18;
      local_150._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z + *(double *)(pFVar3 + lVar9 + 0x10)
      ;
      local_150._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + *(double *)(pFVar3 + lVar9 + 8);
      local_150._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar3 + lVar9);
      if ((int)uVar11 < (int)param_6) {
        pFVar13 = &Grey;
      }
      DrawDebugSolidBox(pUVar8,(TVector<double> *)&local_150._s_0,
                        &NavigationDebugDrawing::PathNodeBoxExtent,pFVar13,param_4,param_5,'\0');
      uVar6 = uVar11 + 1;
      uVar7 = 0;
      if ((int)uVar6 < (this->PathPoints).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar13 = (FColor *)local_res18;
      local_138._s_0.X =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar3 + lVar9 + 0x30)
      ;
      local_138._s_0.Z =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z + *(double *)(pFVar3 + lVar9 + 0x40)
      ;
      local_138._s_0.Y =
           NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + *(double *)(pFVar3 + lVar9 + 0x38)
      ;
      if ((int)uVar11 < (int)(param_6 - 1)) {
        pFVar13 = &Grey;
      }
      DrawDebugLine(pUVar8,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_138._s_0,
                    pFVar13,param_4,param_5,'\0',__real_40400000);
      lVar9 = lVar9 + 0x30;
      uVar11 = uVar6;
    } while ((int)uVar6 < (int)uVar12);
  }
  pUVar8 = local_158;
  if (0 < iVar2) {
    local_c0._s_0.X = ___xmm_402e000000000000402e000000000000;
    local_c0._s_0.Y = _UNK_15148ba88;
    uVar11 = 0;
    if ((int)uVar12 < (this->PathPoints).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    local_c0._s_0.Z = __real_402e000000000000;
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = (longlong)(int)uVar12;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    local_120._s_0.Z =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
         *(double *)(pFVar3 + lVar9 * 0x30 + 0x10);
    local_120._s_0.Y =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
         *(double *)(pFVar3 + lVar9 * 0x30 + 8);
    local_120._s_0.X =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + *(double *)(pFVar3 + lVar9 * 0x30);
    DrawDebugBox(pUVar8,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_c0._s_0,
                 (FColor *)&local_res18[0]._s_0,param_4,param_5,'\0',0.0);
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  if (bVar5) {
    pTVar10 = GetGoalLocation(this,local_a8);
    local_d8._s_0.Z =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z;
    local_d8._s_0.Y =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y + (pTVar10->field0_0x0)._s_0.Y;
    local_d8._s_0.X =
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
    iVar2 = (this->PathPoints).ArrayNum;
    if (iVar2 < 1) {
      pTVar10 = &FNavigationSystem::InvalidLocation;
    }
    else {
      uVar12 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar12 = ~(iVar2 - 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar10 = (TVector<double> *)
                ((pTVar1->AllocatorInstance).Data +
                (longlong)((this->PathPoints).ArrayNum + -1) * 0x30);
    }
    local_170._s_0.X = *(double *)pTVar10 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X;
    local_170._s_0.Z =
         *(double *)((longlong)pTVar10 + 0x10) +
         NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z;
    local_170._s_0.Y =
         *(double *)((longlong)pTVar10 + 8) + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      CylinderHalfHeight.field0_0x0._s_0.X =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X *
           ___xmm_40240000000000004024000000000000;
      CylinderHalfHeight.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * _UNK_15104e4d8;
      CylinderHalfHeight.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
           ___xmm_40240000000000004024000000000000;
      _Init_thread_footer(&::_TSS0);
    }
    local_108._s_0.X = local_170._s_0.X + CylinderHalfHeight.field0_0x0._s_0.X;
    local_f0._s_0.X = local_170._s_0.X - CylinderHalfHeight.field0_0x0._s_0.X;
    local_108._s_0.Y = local_170._s_0.Y + CylinderHalfHeight.field0_0x0._s_0.Y;
    local_f0._s_0.Y = local_170._s_0.Y - CylinderHalfHeight.field0_0x0._s_0.Y;
    local_108._s_0.Z = local_170._s_0.Z + CylinderHalfHeight.field0_0x0._s_0.Z;
    local_f0._s_0.Z = local_170._s_0.Z - CylinderHalfHeight.field0_0x0._s_0.Z;
    DrawDebugCylinder(pUVar8,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0,
                      SQRT(this->GoalActorLocationTetherDistanceSq),0x10,
                      (FColor *)&local_res18[0]._s_0,param_4,param_5,'\0',0.0);
    DrawDebugLine(pUVar8,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_d8._s_0,&Grey,
                  param_4,param_5,'\0',0.0);
  }
  return;
}

// DescribeSelfToVisLog @ 146d8fe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavigationPath::DescribeSelfToVisLog(FNavigationPath *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FVisualLogShapeElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_168 [32];
  double local_118;
  double dStack_110;
  double local_108;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  if (param_1 != (FVisualLogEntry *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
    uVar6 = (this->PathPoints).ArrayNum;
    lVar8 = (longlong)(int)uVar6;
    FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,Path);
    local_f8.Category.ComparisonIndex.Value = LogNavigation._4_4_;
    local_f8.Category.Number = LogNavigation._8_4_;
    local_f8.Color =
         (byte)((uint)FColorList::Green.field0_0x0 >> 0x12) & 0x30 |
         (byte)((uint)FColorList::Green.field0_0x0 >> 0xc) & 0xc |
         (byte)((uint)FColorList::Green.field0_0x0 >> 6) & 3 |
         FColorList::Green.field0_0x0._3_1_ & 0xc0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (local_f8.Points.ArrayMax < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar6,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
                 &local_f8.Points.ArrayMax);
    }
    uVar10 = 0;
    local_f8.field15_0xb6.Thickness = 3;
    if (0 < (int)uVar6) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (this->PathPoints).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->PathPoints).AllocatorInstance.Data;
        local_108 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z +
                    *(double *)(pFVar2 + lVar9 + 0x10);
        dStack_110 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y +
                     *(double *)(pFVar2 + lVar9 + 8);
        local_118 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X +
                    *(double *)(pFVar2 + lVar9);
        if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
          local_f8.Points.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
        }
        iVar7 = local_f8.Points.ArrayNum + 1;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x30;
        *(double *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
             local_118;
        *(double *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
             dStack_110;
        *(double *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10)
             = local_108;
        lVar8 = lVar8 + -1;
        local_f8.Points.ArrayNum = iVar7;
      } while (lVar8 != 0);
    }
    pFVar3 = (FVisualLogShapeElement *)(param_1->ElementsToDraw).AllocatorInstance.Data;
    if (((pFVar3 <= &local_f8) && (&local_f8 < pFVar3 + (param_1->ElementsToDraw).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (param_1->ElementsToDraw).ArrayNum;
    piVar1 = &(param_1->ElementsToDraw).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c0,&(param_1->ElementsToDraw).AllocatorInstance,piVar1);
    }
    (param_1->ElementsToDraw).ArrayNum = iVar7 + 1;
    FVisualLogShapeElement::FVisualLogShapeElement
              ((FVisualLogShapeElement *)
               ((param_1->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar7 * 0xc0),&local_f8
              );
    if (local_f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Points.AllocatorInstance.Data);
    }
    if (local_f8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Description.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DisableGoalActorObservation @ 146d90c60

void __thiscall FNavigationPath::DisableGoalActorObservation(FNavigationPath *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->bObservingGoalActor = 0;
  (this->GoalActor).WeakPtr = local_res8;
  this->GoalActorAsNavAgent = (INavAgentInterface *)0x0;
  this->GoalActorLocationTetherDistanceSq = -1.0;
  return;
}

// DoesIntersectBox @ 146d91130

bool __thiscall
FNavigationPath::DoesIntersectBox
          (FNavigationPath *this,TBox<double> *param_1,TVector<double> *param_2,uint param_3,
          int *param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float local_res8 [2];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0 [5];
  
  dVar5 = __real_47eff933c0000000;
  dVar4 = __real_3e45798ee0000000;
  dVar3 = __real_3ff0000000000000;
  uVar10 = (ulonglong)(int)param_3;
  iVar12 = (this->PathPoints).ArrayNum;
  if (((iVar12 < 2) || ((int)param_3 < 0)) || (iVar12 <= (int)param_3)) {
    return false;
  }
  local_118._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_118._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_118._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  lVar11 = uVar10 * 0x30;
  do {
    uVar9 = (uint)uVar10;
    uVar8 = 0;
    if ((int)uVar9 < iVar12) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pFVar1 = (this->PathPoints).AllocatorInstance.Data;
    local_e8._0_16_ = *(undefined1 (*) [16])(pFVar1 + lVar11);
    uVar16 = local_e8._0_4_;
    uVar17 = local_e8._4_4_;
    uVar18 = local_e8._8_4_;
    uVar19 = local_e8._12_4_;
    dVar14 = local_e8._0_8_ - local_118._s_0.X;
    dVar13 = local_e8._8_8_ - local_118._s_0.Y;
    local_e8._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar11 + 0x10);
    uVar20 = SUB84(local_e8._s_0.Z,0);
    uVar21 = (undefined4)((ulonglong)local_e8._s_0.Z >> 0x20);
    dVar15 = local_e8._s_0.Z - local_118._s_0.Z;
    if (dVar4 < dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15) {
      local_d0._s_0.X = dVar14;
      local_d0._s_0.Y = dVar13;
      local_d0._s_0.Z = dVar15;
      if (param_5 == (TVector<double> *)0x0) {
        if (dVar14 == 0.0) {
          local_100._s_0.X = dVar5;
        }
        else {
          local_100._s_0.X = dVar3 / dVar14;
        }
        if (dVar13 == 0.0) {
          local_100._s_0.Y = dVar5;
        }
        else {
          local_100._s_0.Y = dVar3 / dVar13;
        }
        if (dVar15 == 0.0) {
          local_100._s_0.Z = dVar5;
        }
        else {
          local_100._s_0.Z = dVar3 / dVar15;
        }
        bVar6 = FMath::LineBoxIntersection<double>
                          (param_1,(TVector<double> *)&local_118._s_0,
                           (TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_d0._s_0,
                           (TVector<double> *)&local_100._s_0);
        if (bVar6) goto LAB_146d91380;
      }
      else {
        bVar6 = FMath::LineExtentBoxIntersection
                          (param_1,(TVector<double> *)&local_118._s_0,
                           (TVector<double> *)&local_e8._s_0,param_5,local_a0,&local_b8,local_res8);
        if (bVar6) {
LAB_146d91380:
          if (param_4 == (int *)0x0) {
            return true;
          }
          *param_4 = uVar9;
          return true;
        }
        uVar20 = SUB84(local_e8._s_0.Z,0);
        uVar21 = (undefined4)((ulonglong)local_e8._16_8_ >> 0x20);
        uVar16 = local_e8._0_4_;
        uVar17 = local_e8._4_4_;
        uVar18 = local_e8._8_4_;
        uVar19 = local_e8._12_4_;
      }
    }
    iVar12 = (this->PathPoints).ArrayNum;
    uVar10 = (ulonglong)(uVar9 + 1);
    lVar11 = lVar11 + 0x30;
    local_118._s_0.Z = (double)CONCAT44(uVar21,uVar20);
    local_118._4_4_ = uVar17;
    local_118._0_4_ = uVar16;
    local_118._12_4_ = uVar19;
    local_118._8_4_ = uVar18;
    if (iVar12 <= (int)(uVar9 + 1)) {
      return false;
    }
  } while( true );
}

// DoesIntersectBox @ 146d91410

bool __thiscall
FNavigationPath::DoesIntersectBox
          (FNavigationPath *this,TBox<double> *param_1,uint param_2,int *param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float local_res8 [2];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0 [5];
  
  iVar9 = (this->PathPoints).ArrayNum;
  if (((iVar9 < 2) || ((int)param_2 < 0)) || (iVar9 <= (int)param_2)) {
    return false;
  }
  if (((int)param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  dVar5 = __real_47eff933c0000000;
  dVar4 = __real_3e45798ee0000000;
  dVar3 = __real_3ff0000000000000;
  pFVar1 = (this->PathPoints).AllocatorInstance.Data;
  iVar9 = (this->PathPoints).ArrayNum;
  uVar10 = param_2 + 1;
  local_118._s_0.Z = (double)*(undefined8 *)(pFVar1 + (longlong)(int)param_2 * 0x30 + 0x10);
  pFVar1 = pFVar1 + (longlong)(int)param_2 * 0x30;
  local_118._s_0.X = (double)*(undefined8 *)pFVar1;
  local_118._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
  if ((int)uVar10 < iVar9) {
    lVar11 = (longlong)(int)uVar10 * 0x30;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      pFVar1 = (this->PathPoints).AllocatorInstance.Data;
      local_e8._0_16_ = *(undefined1 (*) [16])(pFVar1 + lVar11);
      uVar15 = local_e8._0_4_;
      uVar16 = local_e8._4_4_;
      uVar17 = local_e8._8_4_;
      uVar18 = local_e8._12_4_;
      dVar13 = local_e8._0_8_ - local_118._s_0.X;
      dVar12 = local_e8._8_8_ - local_118._s_0.Y;
      local_e8._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar11 + 0x10);
      uVar19 = SUB84(local_e8._s_0.Z,0);
      uVar20 = (undefined4)((ulonglong)local_e8._s_0.Z >> 0x20);
      dVar14 = local_e8._s_0.Z - local_118._s_0.Z;
      if (dVar4 < dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14) {
        local_d0._s_0.X = dVar13;
        local_d0._s_0.Y = dVar12;
        local_d0._s_0.Z = dVar14;
        if (param_4 == (TVector<double> *)0x0) {
          if (dVar13 == 0.0) {
            local_100._s_0.X = dVar5;
          }
          else {
            local_100._s_0.X = dVar3 / dVar13;
          }
          if (dVar12 == 0.0) {
            local_100._s_0.Y = dVar5;
          }
          else {
            local_100._s_0.Y = dVar3 / dVar12;
          }
          if (dVar14 == 0.0) {
            local_100._s_0.Z = dVar5;
          }
          else {
            local_100._s_0.Z = dVar3 / dVar14;
          }
          bVar6 = FMath::LineBoxIntersection<double>
                            (param_1,(TVector<double> *)&local_118._s_0,
                             (TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_d0._s_0,
                             (TVector<double> *)&local_100._s_0);
          if (bVar6) goto LAB_146d916d0;
        }
        else {
          bVar6 = FMath::LineExtentBoxIntersection
                            (param_1,(TVector<double> *)&local_118._s_0,
                             (TVector<double> *)&local_e8._s_0,param_4,local_a0,&local_b8,local_res8
                            );
          if (bVar6) {
LAB_146d916d0:
            if (param_3 == (int *)0x0) {
              return true;
            }
            *param_3 = uVar10;
            return true;
          }
          uVar19 = SUB84(local_e8._s_0.Z,0);
          uVar20 = (undefined4)((ulonglong)local_e8._16_8_ >> 0x20);
          uVar15 = local_e8._0_4_;
          uVar16 = local_e8._4_4_;
          uVar17 = local_e8._8_4_;
          uVar18 = local_e8._12_4_;
        }
      }
      iVar9 = (this->PathPoints).ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x30;
      local_118._s_0.Z = (double)CONCAT44(uVar20,uVar19);
      local_118._4_4_ = uVar16;
      local_118._0_4_ = uVar15;
      local_118._12_4_ = uVar18;
      local_118._8_4_ = uVar17;
    } while ((int)uVar10 < iVar9);
  }
  return false;
}

// GetCostFromIndex @ 146d9a220

double __thiscall FNavigationPath::GetCostFromIndex(FNavigationPath *this,int param_1)

{
  return 0.0;
}

// GetCostFromNode @ 146d9a230

double __thiscall FNavigationPath::GetCostFromNode(FNavigationPath *this,ulong64 param_1)

{
  return 0.0;
}

// GetDescription @ 146d9afd0

FString * __thiscall
FNavigationPath::GetDescription(FNavigationPath *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"NotifyPathUpdate points:%d valid:%s");
  return __return_storage_ptr__;
}

// GetEndLocation @ 146d9b2b0

TVector<double> * __thiscall
FNavigationPath::GetEndLocation(FNavigationPath *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  
  iVar2 = (this->PathPoints).ArrayNum;
  if (iVar2 < 1) {
    pTVar7 = &FNavigationSystem::InvalidLocation;
  }
  else {
    uVar6 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar6 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pTVar7 = (TVector<double> *)
             ((this->PathPoints).AllocatorInstance.Data +
             (longlong)((this->PathPoints).ArrayNum + -1) * 0x30);
  }
  dVar4 = *(double *)((longlong)pTVar7 + 8);
  dVar1 = *(double *)((longlong)pTVar7 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pTVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetGoalLocation @ 146d9b4c0

TVector<double> * __thiscall
FNavigationPath::GetGoalLocation(FNavigationPath *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  INavAgentInterface *pIVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  UObject *pUVar7;
  TVector<double>_u_0 *pTVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TVector<double>_u_0 local_50;
  undefined1 local_38 [24];
  TVector<double> local_20;
  
  bVar5 = TWeakObjectPtr<AActor_const_,FWeakObjectPtr>::UEOpEquals(&this->GoalActor,(void *)0x0);
  if (bVar5) {
    pTVar8 = &GetEndLocation(this,&local_20)->field0_0x0;
  }
  else {
    pIVar2 = this->GoalActorAsNavAgent;
    if (pIVar2 == (INavAgentInterface *)0x0) {
      pUVar7 = FWeakObjectPtr::Get(&(this->GoalActor).WeakPtr);
      lVar3 = *(longlong *)(pUVar7 + 0xb);
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar3 != 0) {
        local_68 = *(undefined4 *)(lVar3 + 0x210);
        uStack_64 = *(undefined4 *)(lVar3 + 0x214);
        uStack_60 = *(undefined4 *)(lVar3 + 0x218);
        uStack_5c = *(undefined4 *)(lVar3 + 0x21c);
        local_58 = *(double *)(lVar3 + 0x220);
      }
      pdVar6 = (double *)&local_68;
    }
    else {
      pdVar6 = (double *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,local_38);
    }
    pTVar8 = &local_50;
    local_50._s_0.X = *pdVar6;
    local_50._s_0.Y = pdVar6[1];
    local_50._s_0.Z = pdVar6[2];
  }
  dVar4 = (pTVar8->_s_0).Y;
  dVar1 = (pTVar8->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLengthFromPosition @ 146d9bd20

double __thiscall
FNavigationPath::GetLengthFromPosition(FNavigationPath *this,TVector<double> *param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar2 = (this->PathPoints).ArrayNum;
  if (param_2 < uVar2) {
    dVar9 = 0.0;
    do {
      uVar7 = 0;
      if ((int)param_2 < (this->PathPoints).ArrayNum) {
        uVar7 = ~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        dVar9 = (double)(*pcVar4)();
        return dVar9;
      }
      lVar8 = (longlong)(int)param_2;
      param_2 = param_2 + 1;
      pFVar3 = (this->PathPoints).AllocatorInstance.Data;
      dVar11 = *(double *)(pFVar3 + lVar8 * 0x30 + 0x10) - (param_1->field0_0x0)._s_0.Z;
      dVar5 = *(double *)(pFVar3 + lVar8 * 0x30) - (param_1->field0_0x0)._s_0.X;
      dVar10 = *(double *)(pFVar3 + lVar8 * 0x30 + 8) - (param_1->field0_0x0)._s_0.Y;
      dVar1 = *(double *)(pFVar3 + lVar8 * 0x30 + 0x10);
      dVar9 = dVar9 + SQRT(dVar5 * dVar5 + dVar10 * dVar10 + dVar11 * dVar11);
      dVar5 = *(double *)(pFVar3 + lVar8 * 0x30 + 8);
      (param_1->field0_0x0)._s_0.X = *(double *)(pFVar3 + lVar8 * 0x30);
      (param_1->field0_0x0)._s_0.Y = dVar5;
      (param_1->field0_0x0)._s_0.Z = dVar1;
    } while (param_2 < uVar2);
  }
  else {
    dVar9 = 0.0;
  }
  return dVar9;
}

// GetPathFindingStartLocation @ 146d9f0c0

TVector<double> * __thiscall
FNavigationPath::GetPathFindingStartLocation
          (FNavigationPath *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  INavAgentInterface *pIVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  UObject *pUVar7;
  double local_58;
  double dStack_50;
  double local_48;
  undefined1 local_28 [32];
  
  bVar5 = TWeakObjectPtr<AActor_const_,FWeakObjectPtr>::UEOpEquals(&this->SourceActor,(void *)0x0);
  if (bVar5) {
    if ((this->PathPoints).ArrayNum < 1) {
      pTVar6 = &FNavigationSystem::InvalidLocation;
    }
    else {
      pTVar6 = (TVector<double> *)(this->PathPoints).AllocatorInstance.Data;
    }
  }
  else {
    pIVar2 = this->SourceActorAsNavAgent;
    if (pIVar2 == (INavAgentInterface *)0x0) {
      pUVar7 = FWeakObjectPtr::Get(&(this->SourceActor).WeakPtr);
      lVar3 = *(longlong *)(pUVar7 + 0xb);
      if (lVar3 == 0) {
        pTVar6 = (TVector<double> *)&local_58;
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar6 = (TVector<double> *)&local_58;
        local_58 = (double)*(undefined8 *)(lVar3 + 0x210);
        dStack_50 = (double)*(undefined8 *)(lVar3 + 0x218);
        local_48 = (double)*(undefined8 *)(lVar3 + 0x220);
      }
    }
    else {
      pTVar6 = (TVector<double> *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,local_28);
    }
  }
  dVar4 = *(double *)((longlong)pTVar6 + 8);
  dVar1 = *(double *)((longlong)pTVar6 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pTVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPathPointLocation @ 146d9f9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall
FNavigationPath::GetPathPointLocation
          (FNavigationPath *this,FBasedPosition *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  AActor *pAVar7;
  FBasedPosition *pFVar8;
  
  FBasedPosition::FBasedPosition(__return_storage_ptr__);
  if ((-1 < (int)param_1) && ((int)param_1 < (this->PathPoints).ArrayNum)) {
    pAVar7 = (AActor *)FWeakObjectPtr::Get(&(this->Base).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    (__return_storage_ptr__->Base).field0_0x0.DebugPtr = pAVar7;
    uVar6 = 0;
    if ((int)param_1 < (this->PathPoints).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FBasedPosition *)(*pcVar3)();
        return pFVar8;
      }
    }
    pFVar2 = (this->PathPoints).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(int)param_1 * 0x30;
    dVar4 = *(double *)(pFVar1 + 8);
    (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)pFVar1;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z =
         *(double *)(pFVar2 + (longlong)(int)param_1 * 0x30 + 0x10);
  }
  return __return_storage_ptr__;
}

// GetSegmentDirection @ 146da2230

TVector<double> * __thiscall
FNavigationPath::GetSegmentDirection
          (FNavigationPath *this,TVector<double> *__return_storage_ptr__,uint param_1)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  TVector<double>_u_0 *this_00;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TVector<double> local_38;
  TVector<double> local_20;
  
  uVar6 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  lVar10 = (longlong)(int)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z
  ;
  uVar11 = (this->PathPoints).ArrayNum;
  if (1 < (int)uVar11) {
    if (((int)param_1 < 0) || ((int)uVar11 <= (int)param_1)) {
      if (param_1 < uVar11) {
        return __return_storage_ptr__;
      }
      uVar9 = uVar11 - 1;
      uVar12 = 0;
      if ((int)uVar9 < (int)uVar11) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      iVar2 = (this->PathPoints).ArrayNum;
      uVar12 = iVar2 - 2;
      pFVar13 = (this->PathPoints).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
      uVar11 = 0;
      if ((int)uVar12 < iVar2) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      pTVar8 = &local_20;
      lVar10 = (longlong)(int)uVar12;
      pFVar3 = (this->PathPoints).AllocatorInstance.Data;
      local_68._s_0.X = *(double *)pFVar13 - *(double *)(pFVar3 + lVar10 * 0x30);
      local_68._s_0.Y = *(double *)(pFVar13 + 8) - *(double *)(pFVar3 + lVar10 * 0x30 + 8);
      local_68._s_0.Z = *(double *)(pFVar13 + 0x10) - *(double *)(pFVar3 + lVar10 * 0x30 + 0x10);
      this_00 = &local_68;
    }
    else if (param_1 == 0) {
      pFVar13 = (this->PathPoints).AllocatorInstance.Data;
      if (((this->PathPoints).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar3 = (this->PathPoints).AllocatorInstance.Data;
      pTVar8 = &local_38;
      this_00 = &local_80;
      local_80._s_0.X = *(double *)(pFVar13 + 0x30) - *(double *)pFVar3;
      local_80._s_0.Y = *(double *)(pFVar13 + 0x38) - *(double *)(pFVar3 + 8);
      local_80._s_0.Z = *(double *)(pFVar13 + 0x40) - *(double *)(pFVar3 + 0x10);
    }
    else {
      if (((int)param_1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar13 = (this->PathPoints).AllocatorInstance.Data + lVar10 * 0x30;
      uVar11 = 0;
      if ((int)(param_1 - 1) < (this->PathPoints).ArrayNum) {
        uVar11 = ~(param_1 - 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar3 = (this->PathPoints).AllocatorInstance.Data;
      pTVar8 = &local_50;
      local_98._s_0.X = *(double *)pFVar13 - *(double *)(pFVar3 + lVar10 * 0x30 + -0x30);
      local_98._s_0.Y = *(double *)(pFVar13 + 8) - *(double *)(pFVar3 + lVar10 * 0x30 + -0x28);
      local_98._s_0.Z = *(double *)(pFVar13 + 0x10) - *(double *)(pFVar3 + lVar10 * 0x30 + -0x20);
      this_00 = &local_98;
    }
    pTVar8 = UE::Math::TVector<double>::GetSafeNormal
                       ((TVector<double> *)&this_00->_s_0,pTVar8,__real_3e45798ee0000000,
                        &UE::Math::TVector<double>::ZeroVector);
    dVar5 = (pTVar8->field0_0x0)._s_0.Y;
    dVar1 = (pTVar8->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// InternalResetNavigationPath @ 146da4370

void __thiscall FNavigationPath::InternalResetNavigationPath(FNavigationPath *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  (this->ShortcutNodeRefs).ArrayNum = 0;
  if ((this->ShortcutNodeRefs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ShortcutNodeRefs).AllocatorInstance,0,
               &(this->ShortcutNodeRefs).ArrayMax);
  }
  (this->PathPoints).ArrayNum = 0;
  if ((this->PathPoints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PathPoints).AllocatorInstance,0,&(this->PathPoints).ArrayMax);
  }
  (this->Base).WeakPtr = (FWeakObjectPtr)0x0;
  puVar2 = &this->field_0xa0;
  this->bUpToDate = 1;
  this->bReachedSearchLimit = 0;
  this->bIsPartial = 0;
  this->bIsReady = 0;
  bVar3 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  this->bObservingGoalActor = 0;
  *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)bVar3 << 0xc;
  return;
}

// Invalidate @ 146da4420

void __thiscall FNavigationPath::Invalidate(FNavigationPath *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  TSharedRef<FNavigationPath,1> *pTVar7;
  FNavPathRecalculationRequest *pFVar8;
  TSharedPtr<FNavigationPath,1> local_48;
  TSharedRef<FNavigationPath,1> local_38;
  FNavPathRecalculationRequest local_28;
  
  if (-1 < (char)(ZPULL(*(undefined4 *)&this->field_0xa0,7,1) << 7)) {
    *(uint *)&this->field_0xa0 = *(undefined4 *)&this->field_0xa0 & 0xfffffffe;
    TMulticastDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ObserverDelegate,this,Invalidated);
    if ((this->bDoAutoUpdateOnInvalidation != 0) &&
       (bVar5 = FWeakObjectPtr::IsValid(&(this->NavigationDataUsed).WeakPtr), bVar5)) {
      this->bWaitingForRepath = 1;
      pUVar6 = FWeakObjectPtr::Get(&(this->NavigationDataUsed).WeakPtr);
      pTVar7 = TSharedFromThis<FNavigationPath,1>::AsShared
                         ((TSharedFromThis<FNavigationPath,1> *)&this->_padding_,&local_38);
      pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
      local_48.Object = pTVar7->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.SharedReferenceCount.ReferenceController = pTVar3;
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                             ,0x2fe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = FNavPathRecalculationRequest::FNavPathRecalculationRequest
                         (&local_28,&local_48,NavigationChanged);
      TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FNavPathRecalculationRequest>
                ((TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *)
                 &pUVar6[0x19].field_0x18,pFVar8);
      if (local_28.Path.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        paVar1 = &(local_28.Path.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_28.Path.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_28.Path.WeakReferenceCount.ReferenceController,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnPathUpdated @ 146da9ba0

void __thiscall FNavigationPath::OnPathUpdated(FNavigationPath *this,Type param_1)

{
  return;
}

// RePathFailed @ 146dad7f0

void __thiscall FNavigationPath::RePathFailed(FNavigationPath *this)

{
  TMulticastDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ObserverDelegate,this,RePathFailed);
  this->bWaitingForRepath = 0;
  return;
}

// RemoveOverlappingPoints @ 146db61a0

void __thiscall
FNavigationPath::RemoveOverlappingPoints(FNavigationPath *this,TVector<double> *param_1)

{
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = 0;
  if (1 < (this->PathPoints).ArrayNum) {
    pTVar1 = &this->PathPoints;
    lVar15 = 0;
    do {
      uVar12 = uVar13 + 1;
      uVar9 = 0;
      if ((int)uVar12 < (this->PathPoints).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      uVar14 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->PathPoints).ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      dVar16 = (double)CONCAT44((uint)((ulonglong)
                                       (*(double *)(pFVar10 + lVar15 + 0x30) -
                                       *(double *)(pFVar4 + lVar15)) >> 0x20) & uVar7,
                                SUB84(*(double *)(pFVar10 + lVar15 + 0x30) -
                                      *(double *)(pFVar4 + lVar15),0) & uVar6);
      if ((((param_1->field0_0x0)._s_0.X <= dVar16 && dVar16 != (param_1->field0_0x0)._s_0.X) ||
          (dVar16 = (double)CONCAT44((uint)((ulonglong)
                                            (*(double *)(pFVar10 + lVar15 + 0x38) -
                                            *(double *)(pFVar4 + lVar15 + 8)) >> 0x20) & uVar7,
                                     SUB84(*(double *)(pFVar10 + lVar15 + 0x38) -
                                           *(double *)(pFVar4 + lVar15 + 8),0) & uVar6),
          pdVar2 = &(param_1->field0_0x0)._s_0.Y, *pdVar2 <= dVar16 && dVar16 != *pdVar2)) ||
         (dVar16 = (double)CONCAT44((uint)((ulonglong)
                                           (*(double *)(pFVar10 + lVar15 + 0x40) -
                                           *(double *)(pFVar4 + lVar15 + 0x10)) >> 0x20) & uVar7,
                                    SUB84(*(double *)(pFVar10 + lVar15 + 0x40) -
                                          *(double *)(pFVar4 + lVar15 + 0x10),0) & uVar6),
         pdVar2 = &(param_1->field0_0x0)._s_0.Z, *pdVar2 <= dVar16 && dVar16 != *pdVar2)) {
        lVar15 = lVar15 + 0x30;
        uVar13 = uVar12;
      }
      else {
        uVar9 = 0;
        if ((int)uVar13 < (this->PathPoints).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data + lVar15;
        iVar11 = ~uVar13 + (this->PathPoints).ArrayNum;
        if (iVar11 != 0) {
          memmove(pFVar10,pFVar10 + 0x30,(longlong)iVar11 * 0x30);
        }
        piVar3 = &(this->PathPoints).ArrayNum;
        *piVar3 = *piVar3 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&pTVar1->AllocatorInstance,(this->PathPoints).ArrayNum,
                   &(this->PathPoints).ArrayMax);
      }
    } while ((int)(uVar13 + 1) < (this->PathPoints).ArrayNum);
  }
  return;
}

// ResetForRepath @ 146db7d30

void __thiscall FNavigationPath::ResetForRepath(FNavigationPath *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  (this->ShortcutNodeRefs).ArrayNum = 0;
  if ((this->ShortcutNodeRefs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ShortcutNodeRefs).AllocatorInstance,0,
               &(this->ShortcutNodeRefs).ArrayMax);
  }
  (this->PathPoints).ArrayNum = 0;
  if ((this->PathPoints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PathPoints).AllocatorInstance,0,&(this->PathPoints).ArrayMax);
  }
  (this->Base).WeakPtr = (FWeakObjectPtr)0x0;
  puVar2 = &this->field_0xa0;
  this->bUpToDate = 1;
  this->bReachedSearchLimit = 0;
  this->bIsPartial = 0;
  this->bIsReady = 0;
  bVar3 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  this->bObservingGoalActor = 0;
  *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)bVar3 << 0xc;
  return;
}

// SetGoalActorObservation @ 146db8bc0

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
FNavigationPath::SetGoalActorObservation(FNavigationPath *this,AActor *param_1,float param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationPath *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  INavAgentInterface *pIVar9;
  UObject *pUVar10;
  TSharedRef<FNavigationPath,1> *pTVar11;
  AActor *local_res8;
  FName local_res20;
  FNavigationPath *local_58;
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  TSharedRef<FNavigationPath,1> local_38 [2];
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->NavigationDataUsed).WeakPtr);
  if (!bVar6) {
    if ((byte)LogNavigation._0_1_ < 3) {
      return;
    }
    if (param_1 == (AActor *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_48);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return;
  }
  bVar6 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (AActor *)0x0)) {
    FWeakObjectPtr::operator=(&(this->GoalActor).WeakPtr,(FObjectPtr)&local_res8);
    if (param_1 == (AActor *)0x0) {
      pIVar9 = (INavAgentInterface *)0x0;
      goto LAB_146db8ce8;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&(this->GoalActor).WeakPtr,(FObjectPtr)&local_res8);
  }
  pUVar8 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  pIVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar8);
LAB_146db8ce8:
  this->bObservingGoalActor = 1;
  this->GoalActorAsNavAgent = pIVar9;
  this->GoalActorLocationTetherDistanceSq = param_2 * param_2;
  UpdateLastRepathGoalLocation(this);
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get(&(this->NavigationDataUsed).WeakPtr);
    pTVar11 = TSharedFromThis<FNavigationPath,1>::AsShared
                        ((TSharedFromThis<FNavigationPath,1> *)&this->_padding_,local_38);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                           ,0x2f4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)&pUVar10[0x19].field_0x10 == 0) {
      *(undefined4 *)(pUVar10 + 0x1a) = *(undefined4 *)&pUVar10[0x15].field_0x18;
    }
    puVar1 = &pUVar10[0x19].field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_58 = pFVar3;
    local_50 = pTVar2;
    if (((*(FNavigationPath ***)puVar1 <= &local_58) &&
        (&local_58 < *(FNavigationPath ***)puVar1 + (longlong)*(int *)&pUVar10[0x19].field_0x14 * 2)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pUVar10[0x19].field_0x10;
    if (iVar7 == *(int *)&pUVar10[0x19].field_0x14) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)puVar1,(int *)&pUVar10[0x19].field_0x14);
    }
    *(int *)&pUVar10[0x19].field_0x10 = iVar7 + 1;
    lVar4 = *(longlong *)puVar1;
    *(FNavigationPath **)(lVar4 + (longlong)iVar7 * 0x10) = local_58;
    *(TReferenceControllerBase<1> **)(lVar4 + (longlong)iVar7 * 0x10 + 8) = local_50;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38[0].SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetQueryData @ 146db95a0

void __thiscall FNavigationPath::SetQueryData(FNavigationPath *this,FPathFindingQueryData *param_1)

{
  undefined4 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationQueryFilter *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  uint uVar6;
  
  (this->PathFindingQueryData).Owner.WeakPtr = (param_1->Owner).WeakPtr;
  dVar5 = (param_1->StartLocation).field0_0x0._s_0.Y;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.X =
       (param_1->StartLocation).field0_0x0._s_0.X;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Y = dVar5;
  (this->PathFindingQueryData).StartLocation.field0_0x0._s_0.Z =
       (param_1->StartLocation).field0_0x0._s_0.Z;
  dVar5 = (param_1->EndLocation).field0_0x0._s_0.Y;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.X =
       (param_1->EndLocation).field0_0x0._s_0.X;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Y = dVar5;
  (this->PathFindingQueryData).EndLocation.field0_0x0._s_0.Z =
       (param_1->EndLocation).field0_0x0._s_0.Z;
  pTVar2 = (param_1->QueryFilter).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->QueryFilter).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController;
  (this->PathFindingQueryData).QueryFilter.Object = pFVar3;
  (this->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  (this->PathFindingQueryData).CostLimit = param_1->CostLimit;
  (this->PathFindingQueryData).NavDataFlags = param_1->NavDataFlags;
  uVar1 = *(undefined4 *)&(this->PathFindingQueryData).field_0x54;
  uVar6 = (ZPULL(uVar1,0,1) ^ param_1->bAllowPartialPaths) & 1 ^ uVar1;
  *(uint *)&(this->PathFindingQueryData).field_0x54 = uVar6;
  *(uint *)&(this->PathFindingQueryData).field_0x54 =
       (uVar6 ^ *(uint *)&param_1->field_0x54) & 2 ^ uVar6;
  return;
}

// SetSourceActor @ 146db9990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNavigationPath::SetSourceActor(FNavigationPath *this,AActor *param_1)

{
  UClass *pUVar1;
  INavAgentInterface *pIVar2;
  AActor *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&(this->SourceActor).WeakPtr,(FObjectPtr)&local_res8);
  }
  else {
    FWeakObjectPtr::operator=(&(this->SourceActor).WeakPtr,(FObjectPtr)&local_res8);
    if (param_1 == (AActor *)0x0) {
      this->SourceActorAsNavAgent = (INavAgentInterface *)0x0;
      return;
    }
  }
  pUVar1 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  this->SourceActorAsNavAgent = pIVar2;
  return;
}

// TickPathObservation @ 146dbd630

Type __thiscall FNavigationPath::TickPathObservation(FNavigationPath *this)

{
  INavAgentInterface *pIVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  double *pdVar5;
  UObject *pUVar6;
  double dVar7;
  double dVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined1 local_20 [24];
  
  if ((this->bObservingGoalActor != 0) &&
     (bVar4 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr), bVar4)) {
    pIVar1 = this->GoalActorAsNavAgent;
    if (pIVar1 == (INavAgentInterface *)0x0) {
      pUVar6 = FWeakObjectPtr::Get(&(this->GoalActor).WeakPtr);
      lVar2 = *(longlong *)(pUVar6 + 0xb);
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_38 = *(undefined4 *)(lVar2 + 0x210);
        uStack_34 = *(undefined4 *)(lVar2 + 0x214);
        uStack_30 = *(undefined4 *)(lVar2 + 0x218);
        uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
        local_28 = *(double *)(lVar2 + 0x220);
      }
      pdVar5 = (double *)&local_38;
    }
    else {
      pdVar5 = (double *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_20);
    }
    dVar7 = (this->GoalActorLastLocation).field0_0x0._s_0.X - *pdVar5;
    dVar3 = (this->GoalActorLastLocation).field0_0x0._s_0.Z - pdVar5[2];
    dVar8 = (this->GoalActorLastLocation).field0_0x0._s_0.Y - pdVar5[1];
    return ((double)this->GoalActorLocationTetherDistanceSq <
           dVar8 * dVar8 + dVar7 * dVar7 + dVar3 * dVar3) + NoChange;
  }
  return NoLongerObserving;
}

// UpdateLastRepathGoalLocation @ 146dc2540

void __thiscall FNavigationPath::UpdateLastRepathGoalLocation(FNavigationPath *this)

{
  INavAgentInterface *pIVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  double *pdVar5;
  UObject *pUVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined1 local_20 [24];
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->GoalActor).WeakPtr);
  if (bVar4) {
    pIVar1 = this->GoalActorAsNavAgent;
    if (pIVar1 == (INavAgentInterface *)0x0) {
      pUVar6 = FWeakObjectPtr::Get(&(this->GoalActor).WeakPtr);
      lVar2 = *(longlong *)(pUVar6 + 0xb);
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_38 = *(undefined4 *)(lVar2 + 0x210);
        uStack_34 = *(undefined4 *)(lVar2 + 0x214);
        uStack_30 = *(undefined4 *)(lVar2 + 0x218);
        uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
        local_28 = *(double *)(lVar2 + 0x220);
      }
      pdVar5 = (double *)&local_38;
    }
    else {
      pdVar5 = (double *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_20);
    }
    dVar3 = pdVar5[1];
    (this->GoalActorLastLocation).field0_0x0._s_0.X = *pdVar5;
    (this->GoalActorLastLocation).field0_0x0._s_0.Y = dVar3;
    (this->GoalActorLastLocation).field0_0x0._s_0.Z = pdVar5[2];
  }
  return;
}

// CastPath<FNavMeshPath> @ 146dcc070

FNavMeshPath * __thiscall FNavigationPath::CastPath<FNavMeshPath>(FNavigationPath *this)

{
  FNavPathType *this_00;
  bool bVar1;
  FNavMeshPath *pFVar2;
  
  if ((this->PathType).Id == FNavMeshPath::Type.Id) {
LAB_146dcc0a7:
    bVar1 = true;
  }
  else {
    this_00 = (this->PathType).ParentType;
    if (this_00 != (FNavPathType *)0x0) {
      bVar1 = FNavPathType::IsA(this_00,&FNavMeshPath::Type);
      if (bVar1) goto LAB_146dcc0a7;
    }
    bVar1 = false;
  }
  pFVar2 = (FNavMeshPath *)0x0;
  if (bVar1) {
    pFVar2 = (FNavMeshPath *)this;
  }
  return pFVar2;
}

// FNavigationPath @ 146dd6680

FNavigationPath * __thiscall
FNavigationPath::FNavigationPath(FNavigationPath *this,FNavigationPath *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  TMulticastDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNavPathType *pFVar7;
  double dVar8;
  undefined4 uVar9;
  uint uVar10;
  
  pTVar1 = &this->ShortcutNodeRefs;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNavigationPath__6B_;
  this->_padding_ = 0;
  piVar2 = &(this->ShortcutNodeRefs).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ShortcutNodeRefs).ArrayNum;
  pFVar5 = (param_1->ShortcutNodeRefs).AllocatorInstance.Data;
  (this->ShortcutNodeRefs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->PathPoints;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PathPoints).ArrayMax;
  iVar4 = (param_1->PathPoints).ArrayNum;
  pFVar5 = (param_1->PathPoints).AllocatorInstance.Data;
  (this->PathPoints).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x30);
  }
  (this->Base).WeakPtr = (param_1->Base).WeakPtr;
  (this->GoalActor).WeakPtr = (param_1->GoalActor).WeakPtr;
  this->GoalActorAsNavAgent = param_1->GoalActorAsNavAgent;
  (this->SourceActor).WeakPtr = (param_1->SourceActor).WeakPtr;
  this->SourceActorAsNavAgent = param_1->SourceActorAsNavAgent;
  (this->Filter).Object = (param_1->Filter).Object;
  pTVar6 = (param_1->Filter).SharedReferenceCount.ReferenceController;
  (this->Filter).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = *(undefined4 *)&(param_1->PathType).field_0x4;
  pFVar7 = (param_1->PathType).ParentType;
  this_00 = &this->ObserverDelegate;
  (this->PathType).Id = (param_1->PathType).Id;
  *(undefined4 *)&(this->PathType).field_0x4 = uVar9;
  (this->PathType).ParentType = pFVar7;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x18 = 2;
  if (&param_1->ObserverDelegate != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->ObserverDelegate);
  }
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0xa0,0,1) ^ param_1->bUpToDate) & 1 ^
           *(undefined4 *)&this->field_0xa0;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 2 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 4 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 8 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x10 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x20 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x40 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x80 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x100 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x200 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x400 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x800 ^ uVar10;
  *(uint *)&this->field_0xa0 = uVar10;
  *(uint *)&this->field_0xa0 = (uVar10 ^ *(uint *)&param_1->field_0xa0) & 0x1000 ^ uVar10;
  (this->NavigationDataUsed).WeakPtr = (param_1->NavigationDataUsed).WeakPtr;
  FPathFindingQueryData::FPathFindingQueryData
            (&this->PathFindingQueryData,&param_1->PathFindingQueryData);
  this->LastUpdateTimeStamp = param_1->LastUpdateTimeStamp;
  this->GoalActorLocationTetherDistanceSq = param_1->GoalActorLocationTetherDistanceSq;
  dVar8 = (param_1->GoalActorLastLocation).field0_0x0._s_0.Y;
  (this->GoalActorLastLocation).field0_0x0._s_0.X =
       (param_1->GoalActorLastLocation).field0_0x0._s_0.X;
  (this->GoalActorLastLocation).field0_0x0._s_0.Y = dVar8;
  (this->GoalActorLastLocation).field0_0x0._s_0.Z =
       (param_1->GoalActorLastLocation).field0_0x0._s_0.Z;
  return this;
}

// operator= @ 146ddad30

FNavigationPath * __thiscall
FNavigationPath::operator=(FNavigationPath *this,FNavigationPath *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationQueryFilter *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNavPathType *pFVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
            (&this->ShortcutNodeRefs,&param_1->ShortcutNodeRefs);
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::operator=
            (&this->PathPoints,&param_1->PathPoints);
  (this->Base).WeakPtr = (param_1->Base).WeakPtr;
  (this->GoalActor).WeakPtr = (param_1->GoalActor).WeakPtr;
  this->GoalActorAsNavAgent = param_1->GoalActorAsNavAgent;
  (this->SourceActor).WeakPtr = (param_1->SourceActor).WeakPtr;
  this->SourceActorAsNavAgent = param_1->SourceActorAsNavAgent;
  pTVar1 = (param_1->Filter).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Filter).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Filter).SharedReferenceCount.ReferenceController;
  (this->Filter).Object = pFVar2;
  (this->Filter).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar6 = *(undefined4 *)&(param_1->PathType).field_0x4;
  pFVar4 = (param_1->PathType).ParentType;
  (this->PathType).Id = (param_1->PathType).Id;
  *(undefined4 *)&(this->PathType).field_0x4 = uVar6;
  (this->PathType).ParentType = pFVar4;
  if (&param_1->ObserverDelegate != &this->ObserverDelegate) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ObserverDelegate,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->ObserverDelegate);
  }
  uVar7 = (ZPULL(*(undefined4 *)&this->field_0xa0,0,1) ^ param_1->bUpToDate) & 1 ^
          *(undefined4 *)&this->field_0xa0;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 2 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 4 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 8 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x10 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x20 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x40 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x80 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x100 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x200 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x400 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x800 ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  *(uint *)&this->field_0xa0 = (uVar7 ^ *(uint *)&param_1->field_0xa0) & 0x1000 ^ uVar7;
  (this->NavigationDataUsed).WeakPtr = (param_1->NavigationDataUsed).WeakPtr;
  FPathFindingQueryData::operator=(&this->PathFindingQueryData,&param_1->PathFindingQueryData);
  this->LastUpdateTimeStamp = param_1->LastUpdateTimeStamp;
  this->GoalActorLocationTetherDistanceSq = param_1->GoalActorLocationTetherDistanceSq;
  dVar5 = (param_1->GoalActorLastLocation).field0_0x0._s_0.Y;
  (this->GoalActorLastLocation).field0_0x0._s_0.X =
       (param_1->GoalActorLastLocation).field0_0x0._s_0.X;
  (this->GoalActorLastLocation).field0_0x0._s_0.Y = dVar5;
  (this->GoalActorLastLocation).field0_0x0._s_0.Z =
       (param_1->GoalActorLastLocation).field0_0x0._s_0.Z;
  return this;
}

