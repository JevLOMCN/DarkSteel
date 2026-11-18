// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 17

// FMetaNavMeshPath @ 146f915d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMetaNavMeshPath * __thiscall
FMetaNavMeshPath::FMetaNavMeshPath
          (FMetaNavMeshPath *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          AController *param_2)

{
  int iVar1;
  code *pcVar2;
  FNavPathType FVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FMetaNavMeshPath *pFVar9;
  UNavigationSystemBase *pUVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  undefined1 local_58 [32];
  
  FNavMeshPath::FNavMeshPath((FNavMeshPath *)this);
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  (this->Waypoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Waypoints).ArrayNum = 0;
  (this->Waypoints).ArrayMax = 0;
  (this->PathGoal).WeakPtr = (FWeakObjectPtr)0x0;
  FVar3 = Type;
  this->WaypointSwitchRadius = 200.0;
  this->TargetWaypointIdx = 0;
  this->ApproximateLength = 0.0;
  *(FNavPathType *)&this->_padding_ = FVar3;
  this->PathGoalTetherDistance = 0.0;
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  pUVar5 = AActor::GetWorld((AActor *)param_2);
  if ((pUVar5 != (UWorld *)0x0) &&
     (pUVar10 = (pUVar5->NavigationSystem).field0_0x0.DebugPtr,
     pUVar10 != (UNavigationSystemBase *)0x0)) {
    pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_146f91675;
  }
  pUVar10 = (UNavigationSystemBase *)0x0;
LAB_146f91675:
  if (pUVar10 != (UNavigationSystemBase *)0x0) {
    pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x350);
    uVar7 = (**(code **)(param_2->_padding_ + 0x18))(&param_2->_padding_,local_58);
    uVar8 = (**(code **)(param_2->_padding_ + 0x10))(&param_2->_padding_);
    local_res20 = (UObject *)(*pcVar2)(pUVar10,uVar8,uVar7,&UE::Math::TVector<double>::ZeroVector);
    if (local_res20 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res20);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res20);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = local_res8;
      SetWaypoints(this,param_1);
      return this;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<538347173864013888>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\MetaNavMeshPath.cpp"
                     ,0x40,"NavData");
  if (!bVar4) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_2,(FName *)&LogNavigation.field_0x4,Error,
                 L"Unable to assign navigation data to MetaNavMeshPath!");
    }
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar9 = (FMetaNavMeshPath *)(*pcVar2)();
  return pFVar9;
}

// FMetaNavMeshPath @ 146f917c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMetaNavMeshPath * __thiscall
FMetaNavMeshPath::FMetaNavMeshPath
          (FMetaNavMeshPath *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          ANavigationData *param_2)

{
  FNavPathType FVar1;
  FWeakObjectPtr local_res8;
  ANavigationData *local_res18 [2];
  
  FNavMeshPath::FNavMeshPath((FNavMeshPath *)this);
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  (this->Waypoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Waypoints).ArrayNum = 0;
  (this->Waypoints).ArrayMax = 0;
  (this->PathGoal).WeakPtr = (FWeakObjectPtr)0x0;
  FVar1 = Type;
  this->WaypointSwitchRadius = 200.0;
  this->TargetWaypointIdx = 0;
  this->ApproximateLength = 0.0;
  *(FNavPathType *)&this->_padding_ = FVar1;
  this->PathGoalTetherDistance = 0.0;
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = local_res8;
  SetWaypoints(this,param_1);
  return this;
}

// FMetaNavMeshPath @ 146f918a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMetaNavMeshPath * __thiscall
FMetaNavMeshPath::FMetaNavMeshPath
          (FMetaNavMeshPath *this,TArray<FMetaPathWayPoint,TSizedDefaultAllocator<32>_> *param_1,
          AController *param_2)

{
  int iVar1;
  code *pcVar2;
  FNavPathType FVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FMetaNavMeshPath *pFVar9;
  UNavigationSystemBase *pUVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  undefined1 local_58 [32];
  
  FNavMeshPath::FNavMeshPath((FNavMeshPath *)this);
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  (this->Waypoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Waypoints).ArrayNum = 0;
  (this->Waypoints).ArrayMax = 0;
  (this->PathGoal).WeakPtr = (FWeakObjectPtr)0x0;
  FVar3 = Type;
  this->WaypointSwitchRadius = 200.0;
  this->TargetWaypointIdx = 0;
  this->ApproximateLength = 0.0;
  *(FNavPathType *)&this->_padding_ = FVar3;
  this->PathGoalTetherDistance = 0.0;
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  pUVar5 = AActor::GetWorld((AActor *)param_2);
  if ((pUVar5 != (UWorld *)0x0) &&
     (pUVar10 = (pUVar5->NavigationSystem).field0_0x0.DebugPtr,
     pUVar10 != (UNavigationSystemBase *)0x0)) {
    pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_146f91945;
  }
  pUVar10 = (UNavigationSystemBase *)0x0;
LAB_146f91945:
  if (pUVar10 != (UNavigationSystemBase *)0x0) {
    pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x350);
    uVar7 = (**(code **)(param_2->_padding_ + 0x18))(&param_2->_padding_,local_58);
    uVar8 = (**(code **)(param_2->_padding_ + 0x10))(&param_2->_padding_);
    local_res20 = (UObject *)(*pcVar2)(pUVar10,uVar8,uVar7,&UE::Math::TVector<double>::ZeroVector);
    if (local_res20 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res20);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res20);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = local_res8;
      SetWaypoints(this,param_1);
      return this;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<538347173864013866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\MetaNavMeshPath.cpp"
                     ,0x2a,"NavData");
  if (!bVar4) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_2,(FName *)&LogNavigation.field_0x4,Error,
                 L"Unable to assign navigation data to MetaNavMeshPath!");
    }
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar9 = (FMetaNavMeshPath *)(*pcVar2)();
  return pFVar9;
}

// FMetaNavMeshPath @ 146f91a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMetaNavMeshPath * __thiscall
FMetaNavMeshPath::FMetaNavMeshPath
          (FMetaNavMeshPath *this,TArray<FMetaPathWayPoint,TSizedDefaultAllocator<32>_> *param_1,
          ANavigationData *param_2)

{
  FNavPathType FVar1;
  FWeakObjectPtr local_res8;
  ANavigationData *local_res18 [2];
  
  FNavMeshPath::FNavMeshPath((FNavMeshPath *)this);
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  (this->Waypoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Waypoints).ArrayNum = 0;
  (this->Waypoints).ArrayMax = 0;
  (this->PathGoal).WeakPtr = (FWeakObjectPtr)0x0;
  FVar1 = Type;
  this->WaypointSwitchRadius = 200.0;
  this->TargetWaypointIdx = 0;
  this->ApproximateLength = 0.0;
  *(FNavPathType *)&this->_padding_ = FVar1;
  this->PathGoalTetherDistance = 0.0;
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = local_res8;
  SetWaypoints(this,param_1);
  return this;
}

// FMetaNavMeshPath @ 146f91b70

FMetaNavMeshPath * __thiscall FMetaNavMeshPath::FMetaNavMeshPath(FMetaNavMeshPath *this)

{
  FNavPathType FVar1;
  
  FNavMeshPath::FNavMeshPath((FNavMeshPath *)this);
  this->_padding_ = (longlong)&___7FMetaNavMeshPath__6B_;
  (this->Waypoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Waypoints).ArrayNum = 0;
  (this->Waypoints).ArrayMax = 0;
  (this->PathGoal).WeakPtr = (FWeakObjectPtr)0x0;
  FVar1 = Type;
  this->ApproximateLength = 0.0;
  this->PathGoalTetherDistance = 0.0;
  *(FNavPathType *)&this->_padding_ = FVar1;
  this->WaypointSwitchRadius = 200.0;
  this->TargetWaypointIdx = 0;
  return this;
}

// ConditionalMoveToNextSection @ 146f9e510

bool __thiscall
FMetaNavMeshPath::ConditionalMoveToNextSection
          (FMetaNavMeshPath *this,TVector<double> *param_1,EMetaPathUpdateReason param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar1 = this->TargetWaypointIdx;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Waypoints).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (this->Waypoints).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar8 = (this->Waypoints).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
    if ((((param_2 == PathFinished) ||
         (dVar9 = *(double *)pFVar8 - (param_1->field0_0x0)._s_0.X,
         dVar10 = *(double *)(pFVar8 + 8) - (param_1->field0_0x0)._s_0.Y,
         dVar11 = *(double *)(pFVar8 + 0x10) - (param_1->field0_0x0)._s_0.Z,
         dVar10 * dVar10 + dVar9 * dVar9 + dVar11 * dVar11 <
         (double)(this->WaypointSwitchRadius * this->WaypointSwitchRadius))) &&
        (((longlong *)this->_padding_ == (longlong *)0x0 ||
         (cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x40))(), cVar5 == '\0')))) &&
       ((iVar7 = this->TargetWaypointIdx + 1, -1 < iVar7 && (iVar7 < (this->Waypoints).ArrayNum))))
    {
      this->TargetWaypointIdx = iVar7;
      uVar4 = (**(code **)(this->_padding_ + 0x90))(this,param_1);
      return (bool)uVar4;
    }
  }
  return false;
}

// CopyFrom @ 146f9ea30

void __thiscall FMetaNavMeshPath::CopyFrom(FMetaNavMeshPath *this,FMetaNavMeshPath *param_1)

{
  (**(code **)(this->_padding_ + 8))();
  this->TargetWaypointIdx = 0;
  SetWaypoints(this,&param_1->Waypoints);
  this->WaypointSwitchRadius = param_1->WaypointSwitchRadius;
  (this->PathGoal).WeakPtr = (param_1->PathGoal).WeakPtr;
  this->PathGoalTetherDistance = param_1->PathGoalTetherDistance;
  this->ApproximateLength = param_1->ApproximateLength;
  return;
}

// DebugDraw @ 146fa1860

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
FMetaNavMeshPath::DebugDraw
          (FMetaNavMeshPath *this,ANavigationData *param_1,FColor param_2,UCanvas *param_3,
          bool param_4,float param_5,uint param_6)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  UWorld *pUVar10;
  uint uVar11;
  longlong lVar12;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  if (0 < (this->Waypoints).ArrayNum) {
    FNavMeshPath::DebugDraw((FNavMeshPath *)this,param_1,param_2,param_3,param_4,param_5,param_6);
    pUVar10 = AActor::GetWorld((AActor *)param_1);
    if (((this->Waypoints).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar7 = __real_3f800000;
    pFVar2 = (this->Waypoints).AllocatorInstance.Data;
    uVar11 = 1;
    if (1 < (this->Waypoints).ArrayNum) {
      lVar12 = 0x20;
      local_a8 = *(double *)pFVar2;
      dStack_a0 = *(double *)(pFVar2 + 8);
      local_98 = *(double *)(pFVar2 + 0x10);
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->Waypoints).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Waypoints).AllocatorInstance.Data;
        pFVar2 = pFVar3 + lVar12;
        dVar5 = *(double *)pFVar2;
        dVar6 = *(double *)(pFVar2 + 8);
        dVar1 = *(double *)(pFVar3 + lVar12 + 0x10);
        local_90._s_0.X = dVar5 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X;
        local_90._s_0.Y = dVar6 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y;
        local_90._s_0.Z = dVar1 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z;
        local_78[0]._8_8_ = dStack_a0 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y;
        local_78[0]._0_8_ = local_a8 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X;
        local_78[0]._16_8_ = local_98 + NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z;
        DrawDebugLine(pUVar10,(TVector<double> *)&local_78[0]._s_0,(TVector<double> *)&local_90._s_0
                      ,&FColor::Orange,param_4,param_5,'\0',
                      NavigationDebugDrawing::PathLineThickness + fVar7);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x20;
        local_a8 = dVar5;
        dStack_a0 = dVar6;
        local_98 = dVar1;
      } while ((int)uVar11 < (this->Waypoints).ArrayNum);
    }
  }
  return;
}

// DescribeSelfToVisLog @ 146fa3c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMetaNavMeshPath::DescribeSelfToVisLog(FMetaNavMeshPath *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FVisualLogShapeElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_168 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FNavMeshPath::DescribeSelfToVisLog((FNavMeshPath *)this,param_1);
  if ((this->Waypoints).ArrayNum != 0) {
    FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,Path);
    uVar10 = (this->Waypoints).ArrayNum;
    local_f8.Category.ComparisonIndex.Value = LogNavigation._4_4_;
    local_f8.Category.Number = LogNavigation._8_4_;
    local_f8.Color =
         (byte)((uint)FColorList::Yellow.field0_0x0 >> 0x12) & 0x30 |
         (byte)((uint)FColorList::Yellow.field0_0x0 >> 0xc) & 0xc |
         (byte)((uint)FColorList::Yellow.field0_0x0 >> 6) & 3 |
         FColorList::Yellow.field0_0x0._3_1_ & 0xc0;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (local_f8.Points.ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar10,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
                 &local_f8.Points.ArrayMax);
    }
    dVar6 = __real_4049000000000000;
    uVar10 = 0;
    local_f8.field15_0xb6.Thickness = 3;
    if (0 < (this->Waypoints).ArrayNum) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this->Waypoints).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Waypoints).AllocatorInstance.Data;
        pFVar2 = pFVar3 + lVar11;
        local_118 = *(undefined8 *)pFVar2;
        uStack_110 = *(undefined8 *)(pFVar2 + 8);
        local_108 = *(double *)(pFVar3 + lVar11 + 0x10) + dVar6;
        if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
          local_f8.Points.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
        }
        iVar9 = local_f8.Points.ArrayNum + 1;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x20;
        *(undefined8 *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
             local_118;
        *(undefined8 *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
             uStack_110;
        *(double *)
         (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10)
             = local_108;
        local_f8.Points.ArrayNum = iVar9;
      } while ((int)uVar10 < (this->Waypoints).ArrayNum);
    }
    pFVar4 = (FVisualLogShapeElement *)(param_1->ElementsToDraw).AllocatorInstance.Data;
    if (((pFVar4 <= &local_f8) && (&local_f8 < pFVar4 + (param_1->ElementsToDraw).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (param_1->ElementsToDraw).ArrayNum;
    piVar1 = &(param_1->ElementsToDraw).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c0,&(param_1->ElementsToDraw).AllocatorInstance,piVar1);
    }
    (param_1->ElementsToDraw).ArrayNum = iVar9 + 1;
    FVisualLogShapeElement::FVisualLogShapeElement
              ((FVisualLogShapeElement *)
               ((param_1->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar9 * 0xc0),&local_f8
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

// ForceMoveToNextSection @ 146faaec0

bool __thiscall
FMetaNavMeshPath::ForceMoveToNextSection(FMetaNavMeshPath *this,TVector<double> *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = this->TargetWaypointIdx + 1;
  if ((-1 < iVar2) && (iVar2 < (this->Waypoints).ArrayNum)) {
    this->TargetWaypointIdx = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000146faaedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x90))();
    return (bool)uVar1;
  }
  return false;
}

// GetCostFromIndex @ 146facb40

double __thiscall FMetaNavMeshPath::GetCostFromIndex(FMetaNavMeshPath *this,int param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  TSubclassOf<UNavAreaBase> TVar6;
  UClass *pUVar7;
  double dVar8;
  
  TVar6 = FNavigationSystem::GetDefaultWalkableArea();
  pUVar7 = *(UClass **)TVar6.Class.field0_0x0;
  fVar4 = __real_3f800000;
  if (pUVar7 == (UClass *)0x0) goto LAB_146facbda;
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar2 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UObject *)0x0) {
LAB_146facba0:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                       ,0x93,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar8 = (double)(*pcVar3)();
      return dVar8;
    }
    fVar4 = __real_3f800000;
    if (pUVar2 == (UObject *)0x0) goto LAB_146facbda;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_146facba0;
  }
  fVar4 = *(float *)&pUVar2[1].field_0x8;
LAB_146facbda:
  return (double)fVar4 * this->ApproximateLength;
}

// GetLengthFromPosition @ 146fb21d0

double __thiscall
FMetaNavMeshPath::GetLengthFromPosition
          (FMetaNavMeshPath *this,TVector<double> *param_1,uint param_2)

{
  return this->ApproximateLength;
}

// Initialize @ 146fb8610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMetaNavMeshPath::Initialize(FMetaNavMeshPath *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UObject *pUVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  FWeakObjectPtr local_res8 [2];
  FName local_res18;
  UObject *local_res20;
  FString local_38;
  
  if (this->TargetWaypointIdx == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      if (((this->_padding_ & 0x1000) == 0) ||
         (pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
         pUVar14 == (UObject *)0x0)) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res18.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
        local_res18.Number = *(uint *)&pUVar14->field_0x1c;
        ::FName::ToString(&local_res18,&local_38);
      }
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar14,(FName *)&LogNavigation.field_0x4,Log,
                 L"Initializing meta path, Waypoints:%d GoalActor:%s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->_padding_ & 0x1000) == 0) {
      local_res20 = (UObject *)0x0;
    }
    else {
      local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
    fVar7 = *(float *)&this->_padding_;
    (this->PathGoal).WeakPtr = local_res8[0];
    this->PathGoalTetherDistance = SQRT(fVar7);
    FNavigationPath::DisableGoalActorObservation((FNavigationPath *)this);
    iVar15 = (this->Waypoints).ArrayNum;
    uVar16 = 1;
    if (1 < iVar15) {
      lVar17 = 0x20;
      do {
        uVar12 = 0;
        if ((int)uVar16 < (this->Waypoints).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (this->Waypoints).AllocatorInstance.Data;
        uVar12 = 0;
        if ((int)(uVar16 - 1) < (this->Waypoints).ArrayNum) {
          uVar12 = -uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->Waypoints).AllocatorInstance.Data;
        uVar16 = uVar16 + 1;
        lVar2 = lVar17 + 8;
        lVar3 = lVar17 + 0x10;
        pFVar1 = pFVar8 + lVar17;
        lVar4 = lVar17 + -0x18;
        lVar5 = lVar17 + -0x10;
        lVar6 = lVar17 + -0x20;
        lVar17 = lVar17 + 0x20;
        auVar18._0_8_ =
             (*(double *)(pFVar8 + lVar3) - *(double *)(pFVar9 + lVar5)) *
             (*(double *)(pFVar8 + lVar3) - *(double *)(pFVar9 + lVar5));
        auVar18._8_8_ = 0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ =
             (*(double *)(pFVar8 + lVar2) - *(double *)(pFVar9 + lVar4)) *
             (*(double *)(pFVar8 + lVar2) - *(double *)(pFVar9 + lVar4)) +
             (*(double *)pFVar1 - *(double *)(pFVar9 + lVar6)) *
             (*(double *)pFVar1 - *(double *)(pFVar9 + lVar6)) + auVar18._0_8_;
        auVar19 = sqrtpd(auVar18,auVar19);
        this->ApproximateLength = auVar19._0_8_;
        iVar15 = (this->Waypoints).ArrayNum;
      } while ((int)uVar16 < iVar15);
    }
    iVar13 = this->TargetWaypointIdx + 1;
    if ((-1 < iVar13) && (iVar13 < iVar15)) {
      this->TargetWaypointIdx = iVar13;
      (**(code **)(this->_padding_ + 0x90))(this,param_1);
    }
  }
  return;
}

// MoveToNextSection @ 146fbc7c0

bool __thiscall FMetaNavMeshPath::MoveToNextSection(FMetaNavMeshPath *this,TVector<double> *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = this->TargetWaypointIdx + 1;
  if ((-1 < iVar2) && (iVar2 < (this->Waypoints).ArrayNum)) {
    this->TargetWaypointIdx = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000146fbc7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x90))();
    return (bool)uVar1;
  }
  return false;
}

// SetWaypoints @ 146fd26e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMetaNavMeshPath::SetWaypoints
          (FMetaNavMeshPath *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FMetaPathWayPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (this->TargetWaypointIdx != 0) {
    return false;
  }
  pTVar2 = &this->Waypoints;
  piVar1 = &(this->Waypoints).ArrayMax;
  (this->Waypoints).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar17 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar6) break;
    local_a8 = *(undefined8 *)pFVar17;
    uStack_a0 = *(undefined8 *)(pFVar17 + 8);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_98 = *(undefined8 *)(pFVar17 + 0x10);
    uStack_90 = 0;
    if ((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
       ((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)*piVar1 * 0x20)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    iVar13 = (this->Waypoints).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Waypoints).ArrayNum = iVar13 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    pFVar17 = pFVar17 + 0x18;
    pFVar4 = pFVar5 + (longlong)iVar13 * 0x20;
    *(undefined8 *)pFVar4 = local_a8;
    *(undefined8 *)(pFVar4 + 8) = uStack_a0;
    pFVar5 = pFVar5 + (longlong)iVar13 * 0x20 + 0x10;
    *(undefined8 *)pFVar5 = local_98;
    *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_8c,uStack_90);
  }
  if (1 < (this->Waypoints).ArrayNum) {
    TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)&this->_padding_,2,Default);
    if ((this->Waypoints).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar9 = *(undefined8 *)pFVar6;
    uVar10 = *(undefined8 *)(pFVar6 + 8);
    local_78 = *(undefined8 *)(pFVar6 + 0x10);
    local_88 = uVar9;
    uStack_80 = uVar10;
    if ((int)this->_padding_ < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    puVar7 = (undefined8 *)this->_padding_;
    *puVar7 = uVar9;
    puVar7[1] = uVar10;
    puVar7[2] = local_78;
    puVar7[3] = uStack_70;
    puVar7[4] = local_68;
    puVar7[5] = uStack_60;
    iVar3 = (this->Waypoints).ArrayNum;
    uVar16 = iVar3 - 1;
    uVar14 = 0;
    if ((int)uVar16 < iVar3) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    lVar15 = (longlong)(this->Waypoints).ArrayNum * 0x20;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    pFVar6 = pFVar17 + lVar15 + -0x20;
    uVar9 = *(undefined8 *)pFVar6;
    uVar10 = *(undefined8 *)(pFVar6 + 8);
    local_48 = *(undefined8 *)(pFVar17 + lVar15 + -0x10);
    if ((int)this->_padding_ < 2) {
      local_58 = uVar9;
      uStack_50 = uVar10;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    lVar15 = this->_padding_;
    *(undefined8 *)(lVar15 + 0x30) = uVar9;
    *(undefined8 *)(lVar15 + 0x38) = uVar10;
    *(undefined8 *)(lVar15 + 0x40) = local_48;
    *(undefined8 *)(lVar15 + 0x48) = uStack_40;
    *(undefined8 *)(lVar15 + 0x50) = local_38;
    *(undefined8 *)(lVar15 + 0x58) = uStack_30;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  return true;
}

// SetWaypoints @ 146fd2a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMetaNavMeshPath::SetWaypoints
          (FMetaNavMeshPath *this,TArray<FMetaPathWayPoint,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FMetaPathWayPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  if (this->TargetWaypointIdx != 0) {
    return false;
  }
  pTVar2 = &this->Waypoints;
  if (pTVar2 != param_1) {
    iVar4 = param_1->ArrayNum;
    iVar5 = (this->Waypoints).ArrayMax;
    piVar1 = &(this->Waypoints).ArrayMax;
    pFVar6 = (param_1->AllocatorInstance).Data;
    (this->Waypoints).ArrayNum = iVar4;
    if (iVar4 == 0) {
      if (iVar5 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,iVar5,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar1);
      memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 5);
    }
  }
  if (1 < (this->Waypoints).ArrayNum) {
    TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)&this->_padding_,2,Default);
    if (((this->Waypoints).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    uVar10 = *(undefined8 *)pFVar6;
    uVar11 = *(undefined8 *)(pFVar6 + 8);
    uVar3 = *(undefined8 *)(pFVar6 + 0x10);
    if (((int)this->_padding_ < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    puVar7 = (undefined8 *)this->_padding_;
    *puVar7 = uVar10;
    puVar7[1] = uVar11;
    puVar7[2] = uVar3;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    iVar4 = (this->Waypoints).ArrayNum;
    uVar16 = iVar4 - 1;
    uVar14 = 0;
    if ((int)uVar16 < iVar4) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    lVar15 = (longlong)(this->Waypoints).ArrayNum * 0x20;
    pFVar6 = pFVar8 + lVar15 + -0x20;
    uVar10 = *(undefined8 *)pFVar6;
    uVar11 = *(undefined8 *)(pFVar6 + 8);
    uVar3 = *(undefined8 *)(pFVar8 + lVar15 + -0x10);
    if (((int)this->_padding_ < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    lVar15 = this->_padding_;
    *(undefined8 *)(lVar15 + 0x30) = uVar10;
    *(undefined8 *)(lVar15 + 0x38) = uVar11;
    *(undefined8 *)(lVar15 + 0x40) = uVar3;
    *(undefined8 *)(lVar15 + 0x48) = 0;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x58) = 0;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  return true;
}

// UpdatePath @ 146fe0b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FMetaNavMeshPath::UpdatePath(FMetaNavMeshPath *this,TVector<double> *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  double *pdVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 uVar15;
  atomic<int> aVar16;
  UObject *pUVar17;
  AActor *pAVar18;
  UObject *pUVar19;
  FNavigationPath *pFVar20;
  uint uVar21;
  FNavigationPath *pFVar22;
  FNavigationPath *pFVar23;
  FNavigationPath *pFVar24;
  FNavPathRecalculationRequest local_98;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  uVar5 = this->TargetWaypointIdx;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->Waypoints).ArrayNum)) {
    if (pUVar17 != (UObject *)0x0) {
      dVar11 = (param_1->field0_0x0)._s_0.Y;
      pFVar24 = (FNavigationPath *)0x0;
      this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
      this->_padding_ = (longlong)dVar11;
      this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.Z;
      uVar21 = 0;
      if ((int)uVar5 < (this->Waypoints).ArrayNum) {
        uVar21 = ~uVar5 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      pFVar7 = (this->Waypoints).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)(int)uVar5 * 0x20;
      lVar4 = *(longlong *)(pFVar2 + 8);
      this->_padding_ = *(longlong *)pFVar2;
      this->_padding_ = lVar4;
      lVar4 = *(longlong *)(pFVar7 + (longlong)(int)uVar5 * 0x20 + 0x10);
      iVar6 = (this->Waypoints).ArrayNum;
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffdff;
      this->_padding_ = lVar4;
      if (((this->TargetWaypointIdx == iVar6 + -1) && (0 < iVar6)) &&
         (pAVar18 = (AActor *)FWeakObjectPtr::Get(&(this->PathGoal).WeakPtr),
         pAVar18 != (AActor *)0x0)) {
        FNavigationPath::SetGoalActorObservation
                  ((FNavigationPath *)this,pAVar18,this->PathGoalTetherDistance);
        *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x200;
      }
      TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)&this->_padding_,2,Default);
      dVar11 = (param_1->field0_0x0)._s_0.X;
      dVar12 = (param_1->field0_0x0)._s_0.Y;
      local_70 = (param_1->field0_0x0)._s_0.Z;
      dStack_68 = 0.0;
      local_60 = 0.0;
      dStack_58 = 0.0;
      local_80 = dVar11;
      dStack_78 = dVar12;
      if (((int)this->_padding_ < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      pdVar8 = (double *)this->_padding_;
      uStack_38 = 0;
      local_30 = 0;
      *pdVar8 = dVar11;
      pdVar8[1] = dVar12;
      uStack_28 = 0;
      pdVar8[2] = local_70;
      pdVar8[3] = dStack_68;
      pdVar8[4] = local_60;
      pdVar8[5] = dStack_58;
      local_40 = this->_padding_;
      lVar4 = this->_padding_;
      lVar13 = this->_padding_;
      local_50 = lVar4;
      lStack_48 = lVar13;
      if (((int)this->_padding_ < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      lVar9 = this->_padding_;
      *(longlong *)(lVar9 + 0x30) = lVar4;
      *(longlong *)(lVar9 + 0x38) = lVar13;
      *(longlong *)(lVar9 + 0x40) = local_40;
      *(undefined8 *)(lVar9 + 0x48) = uStack_38;
      *(undefined8 *)(lVar9 + 0x50) = local_30;
      *(undefined8 *)(lVar9 + 0x58) = uStack_28;
      if (FVisualLogger::bIsRecording != 0) {
        pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar19,(FName *)&LogNavigation.field_0x4,Log,
                   L"Updating meta path, waypoint:%d/%d");
      }
      pFVar20 = (FNavigationPath *)this->_padding_;
      pFVar22 = pFVar20;
      pFVar23 = pFVar24;
      if (pFVar20 != (FNavigationPath *)0x0) {
        aVar3 = *(atomic<int> *)&pFVar20->_padding_;
        do {
          pFVar22 = pFVar24;
          if (aVar3 == (atomic<int>)0x0) goto LAB_146fe0ea5;
          LOCK();
          aVar16 = *(atomic<int> *)&pFVar20->_padding_;
          bVar14 = aVar3 == aVar16;
          if (bVar14) {
            *(atomic<int> *)&pFVar20->_padding_ = (atomic<int>)((int)aVar3 + 1);
            aVar16 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar16;
        } while (!bVar14);
        pFVar22 = pFVar20;
        pFVar23 = (FNavigationPath *)this->_padding_;
      }
LAB_146fe0ea5:
      pFVar20 = (FNavigationPath *)&pFVar23->_padding_;
      if (pFVar23 == (FNavigationPath *)0x0) {
        pFVar20 = pFVar24;
      }
      if ((pFVar20 != (FNavigationPath *)&this->_padding_) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      if (pFVar23 == (FNavigationPath *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar22 != (FNavigationPath *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar22->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar22->_padding_ + 1);
        UNLOCK();
      }
      bVar14 = IsInGameThread();
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                              ,0x2fe,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      if ((pFVar23 == (FNavigationPath *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      if (pFVar22 != (FNavigationPath *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar22->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar22->_padding_ + 1);
        UNLOCK();
      }
      if ((pFVar23 == (FNavigationPath *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      if (pFVar22 != (FNavigationPath *)0x0) {
        LOCK();
        ((atomic<int> *)&pFVar22->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pFVar22->_padding_)[1] + 1);
        UNLOCK();
      }
      local_98.Path.Object = pFVar23;
      local_98.Path.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar22);
      local_98.Reason = MetaPathUpdate;
      TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FNavPathRecalculationRequest>
                ((TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *)
                 &pUVar17[0x19].field_0x18,&local_98);
      if ((FNavigationPath *)local_98.Path.WeakReferenceCount.ReferenceController !=
          (FNavigationPath *)0x0) {
        LOCK();
        paVar1 = &(local_98.Path.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_98.Path.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_98.Path.WeakReferenceCount.ReferenceController,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar22);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar22);
      return true;
    }
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<538347173864013997>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\MetaNavMeshPath.cpp"
                        ,0xad,"NavData");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
  }
  return false;
}

