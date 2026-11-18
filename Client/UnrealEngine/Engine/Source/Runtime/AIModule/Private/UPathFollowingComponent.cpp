// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 100

// StaticClass @ 146f86520

UClass * __cdecl UPathFollowingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingComponent",
               &Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton,
               StaticRegisterNativesUPathFollowingComponent,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UPathFollowingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton;
}

// UPathFollowingComponent @ 146f95b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPathFollowingComponent * __thiscall
UPathFollowingComponent::UPathFollowingComponent
          (UPathFollowingComponent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined8 *)&(this->OnRequestFinished).field_0x18 = 2;
  *(undefined8 *)&this->PostProcessMove = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->PostProcessMove).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  *(undefined4 *)&(this->PostProcessMove).field_0x10 = 0;
  *(undefined8 *)&this->OnRequestFinished = 0;
  *(undefined8 *)&(this->OnRequestFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestFinished).field_0x10 = 0;
  (this->MovementComp).field0_0x0.DebugPtr = (UNavMovementComponent *)0x0;
  (this->NavMovementInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NavMovementInterface).InterfaceInstance = (INavMovementInterface *)0x0;
  (this->CurrentCustomLinkOb).ObjectIndex = 0;
  (this->CurrentCustomLinkOb).ObjectSerialNumber = 0;
  (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
  (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  (this->Path).Object = (FNavigationPath *)0x0;
  (this->Path).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NavigationFilter).Object = (FNavigationQueryFilter *)0x0;
  (this->NavigationFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameData).Object = (FMoveRequestCustomData *)0x0;
  (this->GameData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DestinationActor).WeakPtr = (FWeakObjectPtr)0x0;
  FBasedPosition::FBasedPosition(&this->CurrentDestination);
  (this->LocationSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocationSamples).ArrayNum = 0;
  (this->LocationSamples).ArrayMax = 0;
  FAIResourceLock::FAIResourceLock(&this->ResourceLock);
  (this->WaitingForPathTimer).Handle = 0;
  (this->CurrentRequestId).RequestID = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentNavLocation).NodeRef = 0;
  return this;
}

// UPathFollowingComponent @ 146f95ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPathFollowingComponent * __thiscall
UPathFollowingComponent::UPathFollowingComponent
          (UPathFollowingComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  UClass *pUVar8;
  byte bVar9;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined8 *)&(this->OnRequestFinished).field_0x18 = 2;
  *(undefined8 *)&this->PostProcessMove = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->PostProcessMove).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  *(undefined4 *)&(this->PostProcessMove).field_0x10 = 0;
  *(undefined8 *)&this->OnRequestFinished = 0;
  *(undefined8 *)&(this->OnRequestFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestFinished).field_0x10 = 0;
  (this->MovementComp).field0_0x0.DebugPtr = (UNavMovementComponent *)0x0;
  (this->NavMovementInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NavMovementInterface).InterfaceInstance = (INavMovementInterface *)0x0;
  (this->CurrentCustomLinkOb).ObjectIndex = 0;
  (this->CurrentCustomLinkOb).ObjectSerialNumber = 0;
  (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
  (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  (this->Path).Object = (FNavigationPath *)0x0;
  (this->Path).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NavigationFilter).Object = (FNavigationQueryFilter *)0x0;
  (this->NavigationFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameData).Object = (FMoveRequestCustomData *)0x0;
  (this->GameData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DestinationActor).WeakPtr = (FWeakObjectPtr)0x0;
  FBasedPosition::FBasedPosition(&this->CurrentDestination);
  (this->LocationSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocationSamples).ArrayNum = 0;
  (this->LocationSamples).ArrayMax = 0;
  FAIResourceLock::FAIResourceLock(&this->ResourceLock);
  (this->WaitingForPathTimer).Handle = 0;
  (this->CurrentRequestId).RequestID = 0xffffffff;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.Y = (double)uVar7;
  (this->CurrentNavLocation).Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentNavLocation).NodeRef = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pUVar8 = GetPrivateStaticClass();
  bVar4 = this->field_0x266;
  bVar9 = 0;
  if (pUVar8 == (UClass *)this->_padding_) {
    bVar9 = 0x10;
  }
  this->MinAgentRadiusPct = 1.1;
  this->MinAgentHalfHeightPct = 1.05;
  this->BlockDetectionDistance = 10.0;
  bVar5 = *(byte *)((longlong)&this->_padding_ + 2);
  this->BlockDetectionInterval = 0.5;
  bVar6 = *(byte *)((longlong)&this->_padding_ + 2);
  this->BlockDetectionSampleCount = 10;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (~(bVar9 >> 2) ^ bVar6) & 4;
  this->WaitingTimeout = 1.0;
  this->LastSampleTime = 0.0;
  this->NextSampleIdx = 0;
  this->MoveSegmentStartIndex = 0;
  *(byte *)((longlong)&this->_padding_ + 2) = (~(bVar9 >> 1) ^ bVar5) & 8 ^ bVar5;
  this->MoveSegmentEndIndex = 1;
  this->MoveSegmentStartRef = 0;
  this->MoveSegmentEndRef = 0;
  this->field_0x266 = bVar9 | bVar4 & 0xe6;
  this->CachedBrakingDistance = 100.0;
  this->CachedBrakingMaxSpeed = 0.0;
  puVar3 = &this->field_0x265;
  this->bReachTestIncludesAgentRadius = '\x01';
  this->bStopMovementOnFinish = '\x01';
  this->bLastMoveReachedGoal = '\0';
  this->bUseBlockDetection = '\x01';
  this->bMoveToGoalClampedToNavigation = '\0';
  this->bMoveToGoalOnLastSegment = '\x01';
  this->bReachTestIncludesGoalRadius = '\x01';
  this->DecelerationSegmentIndex = -1;
  (this->Status).Value = '\0';
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentMoveInput).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentMoveInput).field0_0x0._s_0.Y = (double)uVar7;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->DEBUG_bMovingDirectlyToGoal = '\0';
  (this->CurrentMoveInput).field0_0x0._s_0.Z = (double)uVar7;
  return this;
}

// ~UPathFollowingComponent @ 146f97030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::~UPathFollowingComponent(UPathFollowingComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  pFVar1 = (this->ResourceLock).ResourceLockCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocationSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationFilter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Path).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRequestFinished).field_0x8,*(int *)&(this->OnRequestFinished).field_0x10);
  pvVar2 = *(void **)&(this->OnRequestFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestFinished);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PostProcessMove);
  this->_padding_ = (longlong)&___7IPathFollowingAgentInterface__6B_;
  this->_padding_ = (longlong)&___7IAIResourceInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AbortMove @ 146f999f0

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
UPathFollowingComponent::AbortMove
          (UPathFollowingComponent *this,UObject *param_1,ushort param_2,FAIRequestID param_3,
          EPathFollowingVelocityMode param_4)

{
  uint uVar1;
  byte bVar2;
  FName local_res8;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"AbortMove: RequestID(%u) Instigator(%s)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((((this->Status).Value != '\0') &&
       (uVar1 = (this->CurrentRequestId).RequestID, uVar1 != 0xffffffff)) &&
      (param_3.RequestID != 0xffffffff)) &&
     (((param_3.RequestID == uVar1 || (param_3.RequestID == 0)) || (uVar1 == 0)))) {
    this->bStopMovementOnFinish = '\0';
    local_res8.ComparisonIndex.Value._0_3_ = 0x30000;
    bVar2 = 0;
    if (param_4 == Reset) {
      bVar2 = 0x80;
    }
    this->field_0x265 = this->field_0x265 | bVar2;
    local_res8.ComparisonIndex.Value._0_2_ = param_2 & 0xfff8 | CodeLookup[3];
    (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
  }
  return;
}

// Cleanup @ 146f9c440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::Cleanup(UPathFollowingComponent *this)

{
  (**(code **)(this->_padding_ + 0x550))(this,0);
                    /* WARNING: Could not recover jumptable at 0x000146f9c45f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5a8))(this);
  return;
}

// ClearResourceLock @ 146f9c770

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
UPathFollowingComponent::ClearResourceLock(UPathFollowingComponent *this,Type param_1)

{
  short sVar1;
  
  sVar1 = *(short *)&(this->LocationWhenPaused).field0_0x0;
  FAIResourceLock::ClearLock
            ((FAIResourceLock *)((longlong)&(this->MoveOffset).field0_0x0 + 8),param_1);
  if ((sVar1 != 0) && (*(short *)&(this->LocationWhenPaused).field0_0x0 == 0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this[-1].CurrentNavLocation.Location.field0_0x0._s_0.Z,
                 (FName *)&LogPathFollowing.field_0x4,Log,L"Unlocking Move");
    }
    (**(code **)(*(longlong *)&this[-1].BlockDetectionDistance + 0x528))
              (&this[-1].BlockDetectionDistance,FAIRequestID::CurrentRequest.RequestID);
  }
  return;
}

// DebugReachTest @ 146fa1af0

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
UPathFollowingComponent::DebugReachTest
          (UPathFollowingComponent *this,float *param_1,float *param_2,float *param_3,uchar *param_4
          ,uchar *param_5,uchar *param_6)

{
  int iVar1;
  int iVar2;
  INavAgentInterface *pIVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *plVar11;
  FNavigationPath *pFVar12;
  INavMovementInterface *pIVar13;
  FNavigationPath *pFVar14;
  FBasedPosition *this_00;
  TVector<double> *pTVar15;
  UObject *pUVar16;
  TQuatRotationTranslationMatrix<double> *pTVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  double local_298;
  double dStack_290;
  undefined8 local_288;
  uchar *local_280;
  uchar *local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  TVector<double>_u_0 local_240;
  undefined1 local_228 [16];
  TQuat<double> local_218;
  TVector<double> local_1f8;
  undefined1 local_1e0 [48];
  FBasedPosition local_1b0;
  TQuatRotationTranslationMatrix<double> local_148 [2];
  
  local_280 = param_5;
  local_278 = param_6;
  if ((this->Path).Object == (FNavigationPath *)0x0) {
    return;
  }
  bVar10 = TWeakInterfacePtr<INavMovementInterface>::operator==
                     (&this->NavMovementInterface,(void *)0x0);
  if (bVar10) {
    return;
  }
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                          ,0x8d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (this->NavMovementInterface).InterfaceInstance;
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x98))(pIVar13,local_228);
  if (*plVar11 == 0) {
    return;
  }
  pFVar12 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
  fVar22 = __real_3d4ccccd;
  iVar1 = this->MoveSegmentEndIndex;
  iVar2 = (pFVar12->PathPoints).ArrayNum;
  local_2a4 = 0.0;
  local_29c = 0.0;
  pIVar13 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
  (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,&local_258);
  FBasedPosition::operator*(&this->CurrentDestination,(TVector<double> *)&local_298);
  dVar23 = __real_3ff0000000000000;
  fVar19 = this->CurrentAcceptanceRadius;
  if (iVar2 + -1 <= iVar1) {
    pFVar12 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    pFVar14 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    this_00 = FNavigationPath::GetPathPointLocation
                        (pFVar12,&local_1b0,(pFVar14->PathPoints).ArrayNum - 1);
    pTVar15 = FBasedPosition::operator*(this_00,&local_1f8);
    fVar22 = this->MinAgentRadiusPct;
    _local_298 = *(undefined1 (*) [16])&pTVar15->field0_0x0;
    local_288 = (pTVar15->field0_0x0)._s_0.Z;
    bVar10 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr);
    if ((bVar10) &&
       (pFVar12 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path), pFVar12->bIsPartial == 0))
    {
      pIVar3 = this->DestinationAgent;
      if (pIVar3 == (INavAgentInterface *)0x0) {
        pUVar16 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
        lVar4 = *(longlong *)(pUVar16 + 0xb);
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar4 != 0) {
          uVar25 = *(undefined4 *)(lVar4 + 0x210);
          uVar26 = *(undefined4 *)(lVar4 + 0x214);
          uVar27 = *(undefined4 *)(lVar4 + 0x218);
          uVar28 = *(undefined4 *)(lVar4 + 0x21c);
          local_288 = *(double *)(lVar4 + 0x220);
        }
        unique0x100003d2 = uVar27;
        local_298 = (double)CONCAT44(uVar26,uVar25);
        unique0x100003d6 = uVar28;
        dVar7 = (double)CONCAT44(uVar26,uVar25);
        dVar6 = (double)CONCAT44(uVar28,uVar27);
      }
      else {
        (**(code **)((longlong)*pIVar3 + 0x38))
                  (pIVar3,this->_padding_,&this->MoveOffset,&local_270,&local_2a4,&local_29c);
        pTVar15 = (TVector<double> *)
                  (**(code **)((longlong)*this->DestinationAgent + 0x18))
                            (this->DestinationAgent,local_1e0);
        pUVar16 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
        lVar4 = *(longlong *)(pUVar16 + 0xb);
        if (lVar4 == 0) {
          local_218.X._0_4_ = 0;
          local_218.X._4_4_ = 0;
          local_218.Y._0_4_ = 0;
          local_218.Y._4_4_ = 0;
          local_218.Z = ___xmm_3ff00000000000000000000000000000;
          local_218.W = _UNK_15061cbc8;
        }
        else {
          local_218.X._0_4_ = *(undefined4 *)(lVar4 + 0x1f0);
          local_218.X._4_4_ = *(undefined4 *)(lVar4 + 500);
          local_218.Y._0_4_ = *(undefined4 *)(lVar4 + 0x1f8);
          local_218.Y._4_4_ = *(undefined4 *)(lVar4 + 0x1fc);
          local_218.Z = *(double *)(lVar4 + 0x200);
          local_218.W = *(double *)(lVar4 + 0x208);
        }
        pTVar17 = UE::Math::TQuatRotationTranslationMatrix<double>::
                  TQuatRotationTranslationMatrix<double>(local_148,&local_218,pTVar15);
        auVar21._8_4_ = SUB84(dVar23,0);
        auVar21._0_8_ = dVar23;
        auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        local_298 = dStack_268 * *(double *)&pTVar17->field_0x20 + local_270 * *(double *)pTVar17 +
                    *(double *)&pTVar17->field_0x40 * local_260 +
                    dVar23 * *(double *)&pTVar17->field_0x60;
        dStack_290 = dStack_268 * *(double *)&pTVar17->field_0x28 +
                     local_270 * *(double *)&pTVar17->field_0x8 +
                     *(double *)&pTVar17->field_0x48 * local_260 +
                     auVar21._8_8_ * *(double *)&pTVar17->field_0x68;
        local_288 = *(double *)&pTVar17->field_0x30 * dStack_268 +
                    *(double *)&pTVar17->field_0x10 * local_270 +
                    *(double *)&pTVar17->field_0x50 * local_260 +
                    *(double *)&pTVar17->field_0x70 * dVar23;
        dVar7 = local_298;
        dVar6 = dStack_290;
      }
      goto LAB_146fa1eb1;
    }
  }
  dVar7 = local_298;
  dVar6 = dStack_290;
LAB_146fa1eb1:
  uVar24 = (double)local_288 - local_248;
  uVar29 = (uint)uVar24;
  uVar9 = (ulonglong)uVar24 >> 0x20;
  dVar7 = dVar7 - local_258;
  dVar6 = dVar6 - local_250;
  GetCurrentDirection(this,(TVector<double> *)&local_240._s_0);
  dVar8 = dVar6 * dVar6 + dVar7 * dVar7;
  dVar20 = (double)uVar24 * (double)uVar24 + dVar8;
  if (dVar20 != dVar23) {
    if (__real_3e45798ee0000000 <= dVar20) {
      dVar23 = dVar23 / SQRT(dVar20);
      dVar6 = dVar6 * dVar23;
      uVar24 = (double)uVar24 * dVar23;
      dVar7 = dVar7 * dVar23;
    }
    else {
      dVar7 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  fVar18 = FloatCastChecked<float,double>
                     (local_240._s_0.Y * dVar6 + local_240._s_0.X * dVar7 +
                      local_240._s_0.Z * (double)uVar24,__real_3f80000000000000);
  local_2a8 = 0.0;
  local_2a0 = 0.0;
  *param_1 = fVar18;
  *param_4 = fVar18 < 0.0;
  pIVar13 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
  (**(code **)((longlong)*pIVar13 + 0xa0))(pIVar13,&local_2a8,&local_2a0);
  fVar18 = FloatCastChecked<float,double>(SQRT(dVar8),__real_3fb0000000000000);
  dVar23 = __real_3fb0000000000000;
  uVar29 = uVar29 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = (uint)uVar9 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  *param_2 = fVar18;
  fVar22 = local_2a8 * fVar22 + local_2a4;
  if (fVar22 <= fVar19) {
    fVar22 = fVar19;
  }
  *local_280 = fVar22 < fVar18;
  fVar19 = FloatCastChecked<float,double>((double)CONCAT44(uVar30,uVar29),dVar23);
  *param_3 = fVar19;
  *local_278 = local_2a0 * this->MinAgentHalfHeightPct + local_29c < fVar19;
  return;
}

// DescribeSelfToVisLog @ 146fa44c0

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
UPathFollowingComponent::DescribeSelfToVisLog
          (UPathFollowingComponent *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  FNavigationPath *pFVar2;
  FNavPathType *this_00;
  FVisualLogStatusCategory *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  FAbstractNavigationPath *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FName local_res8;
  FName local_res10;
  FVisualLogStatusCategory local_148;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_148.Category);
  local_148.UniqueId = -1;
  local_148.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Children.ArrayNum = 0;
  local_148.Children.ArrayMax = 0;
  ::FString::operator=(&local_148.Category,L"Path following");
  bVar6 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr);
  if (bVar6) {
    pUVar8 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_100,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res8,&local_100);
    }
    ::FString::FString(&local_d0,L"Goal");
    FVisualLogStatusCategory::Add(&local_148,&local_d0,&local_100);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  GetStatusDesc(this,&local_e0);
  if (((this->Status).Value == '\x03') && ((this->Path).Object != (FNavigationPath *)0x0)) {
    ::FString::PrintfImpl(&local_f0,L" [%d..%d/%d]%s%s");
    iVar7 = local_f0.Data.ArrayNum + -1;
    if (local_f0.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_e0,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar7);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_c0,L"Status");
  FVisualLogStatusCategory::Add(&local_148,&local_c0,&local_e0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_110,(this->CurrentRequestId).RequestID);
  ::FString::FString(&local_b0,L"MoveID");
  FVisualLogStatusCategory::Add(&local_148,&local_b0,&local_110);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pFVar2 = (this->Path).Object;
  if (pFVar2 == (FNavigationPath *)0x0) {
    pwVar11 = L"none";
  }
  else if (((pFVar2->PathType).Id == FNavMeshPath::Type.Id) ||
          ((this_00 = (pFVar2->PathType).ParentType, this_00 != (FNavPathType *)0x0 &&
           (bVar6 = FNavPathType::IsA(this_00,&FNavMeshPath::Type), bVar6)))) {
    pwVar11 = L"navmesh";
  }
  else {
    pFVar9 = FNavigationPath::CastPath<FAbstractNavigationPath>((this->Path).Object);
    pwVar11 = L"unknown";
    if (pFVar9 != (FAbstractNavigationPath *)0x0) {
      pwVar11 = L"direct";
    }
  }
  ::FString::FString(&local_90,pwVar11);
  ::FString::FString(&local_a0,L"Path");
  FVisualLogStatusCategory::Add(&local_148,&local_a0,&local_90);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bUseBlockDetection == '\0';
  if (bVar6) {
    pFVar10 = ::FString::FString(&local_40,L"Disabled");
  }
  else {
    ::FString::PrintfImpl(&local_70,L"last sample time %.2f");
    pFVar10 = &local_70;
  }
  ::FString::FString(&local_80,L"Block detection");
  FVisualLogStatusCategory::Add(&local_148,&local_80,pFVar10);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pUVar8 = FWeakObjectPtr::Get(&this->CurrentCustomLinkOb);
  if (pUVar8 != (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
    local_res10.Number = *(uint *)&pUVar8->field_0x1c;
    ::FName::ToString(&local_res10,&local_50);
    ::FString::FString(&local_60,L"Custom NavLink");
    FVisualLogStatusCategory::Add(&local_148,&local_60,&local_50);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
  if (((pFVar3 <= &local_148) && (&local_148 < pFVar3 + (param_1->Status).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (param_1->Status).ArrayNum;
  piVar1 = &(param_1->Status).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_1->Status).AllocatorInstance,piVar1);
  }
  FVar5.Data = local_148.Data.AllocatorInstance.Data;
  pFVar12 = (param_1->Status).AllocatorInstance.Data;
  (param_1->Status).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x38;
  *(undefined8 *)&pFVar12->field_0x0 = 0;
  iVar7 = local_148.Data.ArrayNum;
  *(int *)&pFVar12[8].field_0x0 = local_148.Data.ArrayNum;
  if (local_148.Data.ArrayNum == 0) {
    *(int *)(pFVar12 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_148.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_148.Data.ArrayNum
               ,(int *)(pFVar12 + 0xc));
    ConstructItems<FString,FString,int>(*(void **)&pFVar12->field_0x0,(FString *)FVar5.Data,iVar7);
  }
  ::FString::FString((FString *)(pFVar12 + 0x10),&local_148.Category);
  FVar5.Data = local_148.Children.AllocatorInstance.Data;
  *(int *)&pFVar12[0x20].field_0x0 = local_148.UniqueId;
  pFVar13 = pFVar12 + 0x28;
  *(undefined8 *)&pFVar13->field_0x0 = 0;
  iVar7 = local_148.Children.ArrayNum;
  *(int *)&pFVar12[0x30].field_0x0 = local_148.Children.ArrayNum;
  if (local_148.Children.ArrayNum == 0) {
    *(int *)(pFVar12 + 0x34) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_148.Children.ArrayNum,0,(ForAnyElementType *)pFVar13,
               local_148.Children.ArrayNum,(int *)(pFVar12 + 0x34));
    ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
              (*(void **)&pFVar13->field_0x0,(FVisualLogStatusCategory *)FVar5.Data,iVar7);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)local_148.Children.AllocatorInstance.Data,
             local_148.Children.ArrayNum);
  if ((FVisualLogStatusCategory *)local_148.Children.AllocatorInstance.Data !=
      (FVisualLogStatusCategory *)0x0) {
    FMemory::Free(local_148.Children.AllocatorInstance.Data);
  }
  if (local_148.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Category.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_148.Data.AllocatorInstance.Data,local_148.Data.ArrayNum);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// DetermineCurrentTargetPathPoint @ 146fa4d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UPathFollowingComponent::DetermineCurrentTargetPathPoint(UPathFollowingComponent *this,int param_1)

{
  return param_1 + 1;
}

// DetermineStartingPathPoint @ 146fa4da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UPathFollowingComponent::DetermineStartingPathPoint
          (UPathFollowingComponent *this,FNavigationPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  INavMovementInterface *pIVar6;
  FBasedPosition *pFVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_128;
  double local_120;
  double local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  FBasedPosition local_e0;
  FBasedPosition local_78;
  
  uVar8 = 0xffffffff;
  uVar3 = 0xffffffff;
  if ((((param_1 != (FNavigationPath *)0x0) && (param_1->bIsReady != 0)) &&
      (1 < (param_1->PathPoints).ArrayNum)) && (param_1->bUpToDate != 0)) {
    uVar3 = uVar8;
    if (((this->MoveSegmentStartRef != 0) && (this->MoveSegmentEndRef != 0)) &&
       ((pUVar5 = FWeakObjectPtr::Get(&(param_1->NavigationDataUsed).WeakPtr),
        pUVar5 != (UObject *)0x0 &&
        (uVar8 = 0, uVar3 = 0xffffffff, 0 < (param_1->PathPoints).ArrayNum + -1)))) {
      lVar9 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar8 < (param_1->PathPoints).ArrayNum) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(ulong64 *)((param_1->PathPoints).AllocatorInstance.Data + lVar9 + 0x18) ==
            this->MoveSegmentStartRef) {
          uVar3 = 0;
          if ((int)(uVar8 + 1) < (param_1->PathPoints).ArrayNum) {
            uVar3 = ~(uVar8 + 1) >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          uVar3 = uVar8;
          if (*(ulong64 *)((param_1->PathPoints).AllocatorInstance.Data + lVar9 + 0x48) ==
              this->MoveSegmentEndRef) break;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x30;
        uVar3 = 0xffffffff;
      } while ((int)uVar8 < (param_1->PathPoints).ArrayNum + -1);
    }
    if ((((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) &&
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar2)) &&
       (uVar3 == 0xffffffff)) {
      if ((param_1->PathPoints).ArrayNum < 3) {
        uVar3 = 0;
      }
      else {
        pIVar6 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        (**(code **)((longlong)*pIVar6 + 0x80))(pIVar6,&local_128);
        pFVar7 = FNavigationPath::GetPathPointLocation(param_1,&local_e0,0);
        FBasedPosition::operator*(pFVar7,(TVector<double> *)&local_110._s_0);
        pFVar7 = FNavigationPath::GetPathPointLocation(param_1,&local_78,1);
        FBasedPosition::operator*(pFVar7,(TVector<double> *)&local_f8._s_0);
        dVar12 = (local_120 - local_110._s_0.Y) * (local_120 - local_110._s_0.Y) +
                 (local_128 - local_110._s_0.X) * (local_128 - local_110._s_0.X);
        dVar11 = (local_120 - local_f8._s_0.Y) * (local_120 - local_f8._s_0.Y) +
                 (local_128 - local_f8._s_0.X) * (local_128 - local_f8._s_0.X);
        dVar10 = dVar12 - dVar11;
        if (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          uVar3 = (uint)(dVar11 <= dVar12);
        }
        else {
          uVar3 = (uint)((double)CONCAT44((uint)((ulonglong)(local_118 - local_f8._s_0.Z) >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(local_118 - local_f8._s_0.Z,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                        (double)CONCAT44((uint)((ulonglong)(local_118 - local_110._s_0.Z) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_118 - local_110._s_0.Z,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        }
      }
    }
  }
  return uVar3;
}

// DisplayDebug @ 146fa5070

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
UPathFollowingComponent::DisplayDebug
          (UPathFollowingComponent *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  FNavigationPath *pFVar1;
  float fVar2;
  uint uVar3;
  UObject *pUVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  float local_res10 [2];
  FString local_b8;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  TVector<double> local_70;
  FString local_58;
  FString local_48;
  FString local_38;
  
  fVar2 = __real_3b808081;
  uVar3 = (uint)FColor::Blue.field0_0x0._s_0.A;
  fVar6 = (float)FColor::Blue.field0_0x0._1_1_ * __real_3b808081;
  fVar5 = (float)FColor::Blue.field0_0x0._0_1_ * __real_3b808081;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
       (float)FColor::Blue.field0_0x0._2_1_ * __real_3b808081;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar6;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar5;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)uVar3 * fVar2;
  local_res8[0] = 0.0;
  GetStatusDesc(this,&local_58);
  ::FString::PrintfImpl(&local_90,L"  Move status: %s");
  FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_90,local_res8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->Status).Value == '\x03') {
    pFVar1 = (this->Path).Object;
    if ((((pFVar1 != (FNavigationPath *)0x0) && (pFVar1->bIsReady != 0)) &&
        (1 < (pFVar1->PathPoints).ArrayNum)) && (pFVar1->bUpToDate != 0)) {
      TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
    if (pUVar4 == (UObject *)0x0) {
      ::FString::FString(&local_b8,L"None");
    }
    else {
      local_a8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_a8.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_a8,&local_b8);
    }
    FBasedPosition::operator*(&this->CurrentDestination,&local_70);
    ::FString::PrintfImpl(&local_a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"  Move target [%d/%d]: %s (%s)");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_res10[0] = 0.0;
    GetStatusDesc(this,&local_48);
    ::FString::PrintfImpl(&local_80,L"  Move status: %s");
    FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_80,local_res10);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExtractNavigationFilter @ 146fa8300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationQueryFilter_const_,1> * __thiscall
UPathFollowingComponent::ExtractNavigationFilter
          (UPathFollowingComponent *this,
          TSharedPtr<FNavigationQueryFilter_const_,1> *__return_storage_ptr__,
          FAIMoveRequest *param_1,TSharedPtr<FNavigationPath,1> *param_2)

{
  int iVar1;
  FNavigationPath *pFVar2;
  FNavPathType *this_00;
  FNavigationQueryFilter *pFVar3;
  AAIController *this_01;
  ANavigationData *pAVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  TSubclassOf<UNavigationQueryFilter> TVar12;
  UClass *local_res20;
  
  bVar7 = false;
  local_res20 = (UClass *)((ulonglong)local_res20 & 0xffffffff00000000);
  pUVar11 = local_res20;
  if ((param_2->Object == (FNavigationPath *)0x0) ||
     (pFVar2 = param_2->Object, (pFVar2->PathType).Id == FAbstractNavigationPath::Type.Id)) {
LAB_146fa8363:
    bVar6 = false;
  }
  else {
    this_00 = (pFVar2->PathType).ParentType;
    if (this_00 == (FNavPathType *)0x0) {
      if ((pFVar2 == (FNavigationPath *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    else {
      bVar6 = FNavPathType::IsA(this_00,&FAbstractNavigationPath::Type);
      pUVar11 = local_res20;
      if (bVar6) goto LAB_146fa8363;
    }
    bVar7 = true;
    pUVar11 = (UClass *)
              (param_2->Object->PathFindingQueryData).QueryFilter.SharedReferenceCount.
              ReferenceController;
    pFVar3 = (param_2->Object->PathFindingQueryData).QueryFilter.Object;
    if (pUVar11 != (UClass *)0x0) {
      LOCK();
      *(int *)&pUVar11->_padding_ = (int)pUVar11->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 == (FNavigationQueryFilter *)0x0) goto LAB_146fa8363;
    bVar6 = true;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar11);
  }
  if (bVar6) {
    if ((param_2->Object == (FNavigationPath *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)(*pcVar5)();
      return pTVar8;
    }
    pFVar2 = param_2->Object;
    __return_storage_ptr__->Object = (pFVar2->PathFindingQueryData).QueryFilter.Object;
    pTVar9 = (pFVar2->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController;
  }
  else {
    if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
      __return_storage_ptr__->Object = (FNavigationQueryFilter *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146fa8599;
    }
    pUVar11 = (param_1->FilterClass).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 != (UClass *)0x0) goto LAB_146fa8459;
    }
    else if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146fa8459:
      pUVar10 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
      if (pUVar10 != (UClass *)0x0) {
        iVar1 = (int)pUVar10->_padding_;
        if (((int)pUVar11->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          local_res20 = (param_1->FilterClass).Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)local_res20);
          }
          UNavigationQueryFilter::GetQueryFilter
                    (__return_storage_ptr__,(this->MyNavData).field0_0x0.DebugPtr,
                     (UObject *)this->_padding_,(TSubclassOf<UNavigationQueryFilter>)&local_res20);
          goto LAB_146fa8599;
        }
      }
    }
    this_01 = (AAIController *)this->_padding_;
    if (this_01 != (AAIController *)0x0) {
      pUVar11 = Z_Construct_UClass_AAIController_NoRegister();
      iVar1 = (int)pUVar11->_padding_;
      if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar11->_padding_)) {
        pUVar11 = (this_01->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar11 != (UClass *)0x0) goto LAB_146fa851e;
        }
        else if (pUVar11 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146fa851e:
          pUVar10 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
          if (pUVar10 != (UClass *)0x0) {
            iVar1 = (int)pUVar10->_padding_;
            if (((int)pUVar11->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar10->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              TVar12 = AAIController::GetDefaultNavigationFilterClass(this_01);
              UNavigationQueryFilter::GetQueryFilter
                        (__return_storage_ptr__,(this->MyNavData).field0_0x0.DebugPtr,TVar12);
              goto LAB_146fa8599;
            }
          }
        }
      }
    }
    pAVar4 = (this->MyNavData).field0_0x0.DebugPtr;
    __return_storage_ptr__->Object = (pAVar4->DefaultQueryFilter).Object;
    pTVar9 = (pAVar4->DefaultQueryFilter).SharedReferenceCount.ReferenceController;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_146fa8599:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindPreciseAcceptanceRadiusTestsStartNodeIndex @ 146faa390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UPathFollowingComponent::FindPreciseAcceptanceRadiusTestsStartNodeIndex
          (UPathFollowingComponent *this,FNavigationPath *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TVector<double>_u_0 local_88 [2];
  double local_58;
  double local_40;
  
  local_88[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_88[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_88[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
  fVar11 = GetFinalAcceptanceRadius
                     (this,param_1,(TVector<double> *)&local_88[0]._s_0,(TVector<double> *)0x0);
  iVar7 = (param_1->PathPoints).ArrayNum;
  if (iVar7 < 2) {
    return 0x7fffffff;
  }
  uVar8 = iVar7 - 1;
  dVar5 = 0.0;
  uVar9 = 0;
  if ((int)uVar8 < iVar7) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  pFVar2 = (param_1->PathPoints).AllocatorInstance.Data;
  uVar9 = iVar7 - 2;
  pFVar1 = pFVar2 + (longlong)(int)uVar8 * 0x30;
  uVar13 = *(undefined4 *)pFVar1;
  uVar14 = *(undefined4 *)(pFVar1 + 4);
  uVar15 = *(undefined4 *)(pFVar1 + 8);
  uVar16 = *(undefined4 *)(pFVar1 + 0xc);
  if ((int)uVar9 < 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    lVar10 = (longlong)(int)uVar9 * 0x30;
    local_58 = *(double *)(pFVar2 + (longlong)(int)uVar8 * 0x30 + 0x10);
    do {
      uVar8 = uVar9;
      uVar9 = 0;
      if ((int)uVar8 < (param_1->PathPoints).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      pFVar1 = (param_1->PathPoints).AllocatorInstance.Data;
      local_40 = *(double *)(pFVar1 + lVar10 + 0x10);
      dVar12 = (double)CONCAT44(uVar14,uVar13) - *(double *)(pFVar1 + lVar10);
      dVar4 = (double)CONCAT44(uVar16,uVar15) - *(double *)(pFVar1 + lVar10 + 8);
      dVar5 = dVar5 + SQRT(dVar4 * dVar4 + dVar12 * dVar12 +
                           (local_58 - local_40) * (local_58 - local_40));
      if ((double)fVar11 < dVar5) {
        return uVar8;
      }
      pFVar1 = pFVar1 + lVar10;
      uVar13 = *(undefined4 *)pFVar1;
      uVar14 = *(undefined4 *)(pFVar1 + 4);
      uVar15 = *(undefined4 *)(pFVar1 + 8);
      uVar16 = *(undefined4 *)(pFVar1 + 0xc);
      lVar10 = lVar10 + -0x30;
      uVar9 = uVar8 - 1;
      local_58 = local_40;
    } while (-1 < (int)(uVar8 - 1));
  }
  return uVar8;
}

// FinishUsingCustomLink @ 146faa790

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
UPathFollowingComponent::FinishUsingCustomLink
          (UPathFollowingComponent *this,INavLinkCustomInterface *param_1)

{
  bool bVar1;
  UObject *this_00;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  FString local_28;
  
  if (param_1 != (INavLinkCustomInterface *)0x0) {
    this_00 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    if ((((this->CurrentCustomLinkOb).ObjectIndex == local_res10.ObjectIndex) &&
        ((this->CurrentCustomLinkOb).ObjectSerialNumber == local_res10.ObjectSerialNumber)) ||
       ((bVar1 = FWeakObjectPtr::IsValid(&this->CurrentCustomLinkOb), !bVar1 &&
        (bVar1 = FWeakObjectPtr::IsValid(&local_res10), !bVar1)))) {
      if (FVisualLogger::bIsRecording != 0) {
        if (this_00 == (UObject *)0x0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Finish custom move using navlink: %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)((longlong)*param_1 + 0x68))(param_1,this);
      (this->CurrentCustomLinkOb).ObjectIndex = 0;
      (this->CurrentCustomLinkOb).ObjectSerialNumber = 0;
    }
  }
  return;
}

// FollowPathSegment @ 146faab40

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
UPathFollowingComponent::FollowPathSegment(UPathFollowingComponent *this,float param_1)

{
  TWeakInterfacePtr<INavMovementInterface> *this_00;
  TVector<double> *pTVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  FNavigationPath *pFVar12;
  INavMovementInterface *pIVar13;
  double dVar14;
  double dVar15;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  double local_c8;
  double local_c0;
  double local_b8;
  TVector<double>_u_0 local_b0;
  double local_98;
  double local_90;
  double local_88;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  FReadAccessScope local_50;
  TVector<double> local_38 [2];
  
  if ((this->Path).Object != (FNavigationPath *)0x0) {
    this_00 = &this->NavMovementInterface;
    bVar10 = TWeakInterfacePtr<INavMovementInterface>::operator==(this_00,(void *)0x0);
    if (!bVar10) {
      if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
          (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                              ,0x8d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pIVar13 = (this->NavMovementInterface).InterfaceInstance;
      (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,&local_c8);
      FBasedPosition::operator*(&this->CurrentDestination,(TVector<double> *)&local_b0._s_0);
      this->bIsDecelerating = '\0';
      if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
          (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                              ,0x8d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar10 = INavMovementInterface::UseAccelerationForPathFollowing
                         ((this->NavMovementInterface).InterfaceInstance);
      if (bVar10) {
        local_80._s_0.X = local_b0._s_0.X - local_c8;
        local_80._s_0.Y = local_b0._s_0.Y - local_c0;
        pTVar1 = &this->CurrentMoveInput;
        local_80._s_0.Z = local_b0._s_0.Z - local_b8;
        pTVar11 = UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_80._s_0,local_38,__real_3e45798ee0000000,
                             &UE::Math::TVector<double>::ZeroVector);
        dVar15 = (pTVar11->field0_0x0)._s_0.Y;
        (pTVar1->field0_0x0)._s_0.X = (pTVar11->field0_0x0)._s_0.X;
        (this->CurrentMoveInput).field0_0x0._s_0.Y = dVar15;
        (this->CurrentMoveInput).field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
        if (((bool)this->bStopMovementOnFinish) &&
           (this->DecelerationSegmentIndex <= this->MoveSegmentStartIndex)) {
          pFVar12 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
          FNavigationPath::GetEndLocation(pFVar12,(TVector<double> *)&local_68._s_0);
          dVar15 = __real_3ff0000000000000;
          fVar2 = this->CachedBrakingDistance;
          dVar14 = (local_68._s_0.Y - local_c0) * (local_68._s_0.Y - local_c0) +
                   (local_68._s_0.X - local_c8) * (local_68._s_0.X - local_c8) +
                   (local_68._s_0.Z - local_b8) * (local_68._s_0.Z - local_b8);
          if (dVar14 < (double)(fVar2 * fVar2)) {
            this->bIsDecelerating = '\x01';
            auVar16._8_8_ = 0;
            auVar16._0_8_ = dVar14;
            auVar16 = sqrtpd(in_XMM3,auVar16);
            dVar15 = auVar16._0_8_ * (dVar15 / (double)fVar2);
            if (__real_3ff0000000000000 <= dVar15) {
              dVar15 = __real_3ff0000000000000;
            }
            if (dVar15 <= 0.0) {
              dVar15 = 0.0;
            }
            dVar9 = (this->CurrentMoveInput).field0_0x0._s_0.Y * dVar15;
            dVar14 = (this->CurrentMoveInput).field0_0x0._s_0.Z;
            auVar8._8_4_ = SUB84(dVar9,0);
            auVar8._0_8_ = (pTVar1->field0_0x0)._s_0.X * dVar15;
            auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar8;
            (this->CurrentMoveInput).field0_0x0._s_0.Z = dVar15 * dVar14;
          }
        }
        TDelegate<void___cdecl(UPathFollowingComponent_*,UE::Math::TVector<double>_&),FDefaultDelegateUserPolicy>
        ::ExecuteIfBound(&this->PostProcessMove,this,pTVar1);
        pIVar13 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        (**(code **)((longlong)*pIVar13 + 0x60))(pIVar13,pTVar1);
      }
      else if (param_1 != 0.0) {
        local_88 = __real_3ff0000000000000 / (double)param_1;
        local_98 = (local_b0._s_0.X - local_c8) * local_88;
        local_90 = (local_b0._s_0.Y - local_c0) * local_88;
        local_88 = (local_b0._s_0.Z - local_b8) * local_88;
        pFVar12 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
        iVar4 = (pFVar12->PathPoints).ArrayNum;
        iVar5 = this->MoveSegmentStartIndex;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostProcessMove,
                   &local_50);
        if ((*(int *)&(this->PostProcessMove).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&(this->PostProcessMove).field_0x8, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,this,&local_98);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        pIVar13 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        (**(code **)((longlong)*pIVar13 + 0x58))(pIVar13,&local_98,iVar5 < iVar4 + -2);
      }
    }
  }
  return;
}

// ForceBlockDetectionUpdate @ 146faaea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::ForceBlockDetectionUpdate(UPathFollowingComponent *this)

{
  this->LastSampleTime = 0.0;
  return;
}

// ForceUnlockResource @ 146faaf90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::ForceUnlockResource(UPathFollowingComponent *this)

{
  short sVar1;
  
  sVar1 = *(short *)&(this->LocationWhenPaused).field0_0x0;
  FAIResourceLock::ForceClearAllLocks
            ((FAIResourceLock *)((longlong)&(this->MoveOffset).field0_0x0 + 8));
  if (sVar1 != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this[-1].CurrentNavLocation.Location.field0_0x0._s_0.Z,
                 (FName *)&LogPathFollowing.field_0x4,Log,L"Unlocking Move - forced");
    }
    (**(code **)(*(longlong *)&this[-1].BlockDetectionDistance + 0x528))
              (&this[-1].BlockDetectionDistance,FAIRequestID::CurrentRequest.RequestID);
  }
  return;
}

// GetCurrentDirection @ 146fad540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UPathFollowingComponent::GetCurrentDirection
          (UPathFollowingComponent *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  FBasedPosition *this_00;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  FBasedPosition local_70;
  
  if ((this->CurrentDestination).Base.field0_0x0.DebugPtr == (AActor *)0x0) {
    dVar2 = (this->MoveSegmentDirection).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->MoveSegmentDirection).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->MoveSegmentDirection).field0_0x0._s_0.Z;
  }
  else {
    if ((this->Path).Object == (FNavigationPath *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    this_00 = FNavigationPath::GetPathPointLocation
                        ((this->Path).Object,&local_70,this->MoveSegmentStartIndex);
    FBasedPosition::operator*(this_00,(TVector<double> *)&local_a0._s_0);
    FBasedPosition::operator*(&this->CurrentDestination,(TVector<double> *)&local_b8._s_0);
    local_88._s_0.X = local_b8._s_0.X - local_a0._s_0.X;
    local_88._s_0.Y = local_b8._s_0.Y - local_a0._s_0.Y;
    local_88._s_0.Z = local_b8._s_0.Z - local_a0._s_0.Z;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_88._s_0,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
  }
  return __return_storage_ptr__;
}

// GetCurrentNavLocation @ 146fad660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavLocation * __thiscall
UPathFollowingComponent::GetCurrentNavLocation
          (UPathFollowingComponent *this,FNavLocation *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  FNavLocation *pFVar11;
  INavMovementInterface *pIVar12;
  double *pdVar13;
  UNavigationSystemV1 *this_00;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 local_78;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_60;
  double local_50;
  double dStack_48;
  double local_40;
  TVector<double>_u_0 local_38;
  undefined1 local_20 [24];
  
  bVar8 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if ((bVar8) ||
     ((pUVar9 = (UWorld *)this->_padding_, pUVar9 == (UWorld *)0x0 &&
      (pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar9 == (UWorld *)0x0
      )))) goto LAB_146fad862;
  this_00 = (UNavigationSystemV1 *)(pUVar9->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 == (UNavigationSystemV1 *)0x0) {
LAB_146fad6df:
    this_00 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) goto LAB_146fad6df;
  }
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FNavLocation *)(*pcVar2)();
      return pFVar11;
    }
    INavMovementInterface::GetNavLocation
              ((this->NavMovementInterface).InterfaceInstance,(TVector<double> *)&local_78._s_0);
    dVar3 = local_78._s_0.X - (this->CurrentNavLocation).Location.field0_0x0._s_0.X;
    uVar14 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3ff0000000000000 <= (double)CONCAT44(uVar15,uVar14) &&
          (double)CONCAT44(uVar15,uVar14) != __real_3ff0000000000000) ||
        (dVar3 = local_78._s_0.Y - (this->CurrentNavLocation).Location.field0_0x0._s_0.Y,
        uVar14 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3ff0000000000000 <= (double)CONCAT44(uVar15,uVar14) &&
        (double)CONCAT44(uVar15,uVar14) != __real_3ff0000000000000)) ||
       (dVar3 = local_78._s_0.Z - (this->CurrentNavLocation).Location.field0_0x0._s_0.Z,
       uVar14 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3ff0000000000000 <= (double)CONCAT44(uVar15,uVar14) &&
       (double)CONCAT44(uVar15,uVar14) != __real_3ff0000000000000)) {
      if (((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
         (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar8)) {
        pdVar13 = &local_50;
        local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pIVar12 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        pdVar13 = (double *)(**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12,local_20);
      }
      local_38._s_0.X = *pdVar13;
      local_38._s_0.Y = pdVar13[1];
      local_38._s_0.Z = pdVar13[2];
      local_60.Object = (FNavigationQueryFilter *)0x0;
      local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      UNavigationSystemV1::ProjectPointToNavigation
                (this_00,(TVector<double> *)&local_78._s_0,&this->CurrentNavLocation,
                 (TVector<double> *)&local_38._s_0,(this->MyNavData).field0_0x0.DebugPtr,&local_60);
    }
    dVar3 = (this->CurrentNavLocation).Location.field0_0x0._s_0.Y;
    dVar4 = (this->CurrentNavLocation).Location.field0_0x0._s_0.Z;
    uVar5 = (this->CurrentNavLocation).NodeRef;
    (__return_storage_ptr__->Location).field0_0x0._s_0.X =
         (this->CurrentNavLocation).Location.field0_0x0._s_0.X;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar4;
    __return_storage_ptr__->NodeRef = uVar5;
    return __return_storage_ptr__;
  }
LAB_146fad862:
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->NodeRef = 0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)uVar6;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetCurrentPathElement @ 146fad8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall UPathFollowingComponent::GetCurrentPathElement(UPathFollowingComponent *this)

{
  return this->MoveSegmentEndIndex;
}

// GetDebugString @ 146fadf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UPathFollowingComponent::GetDebugString
          (UPathFollowingComponent *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  wchar_t *_Str;
  ulonglong uVar10;
  FString *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  uVar8 = 0;
  local_38 = (FString *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x568))(this,&local_38,&local_28);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < (int)local_30) {
    do {
      uVar7 = (uint)uVar8;
      uVar3 = 0;
      if ((int)uVar7 < (int)local_30) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      iVar6 = *(int *)((longlong)&(local_38->Data).ArrayNum + uVar10);
      uVar3 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar3 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,
                 *(wchar_t **)((longlong)&(local_38->Data).AllocatorInstance.Data + uVar10),uVar3);
      if (((int)uVar7 < 0) || ((int)local_20 <= (int)uVar7)) {
LAB_146fae023:
        _Str = L", ";
      }
      else {
        uVar3 = 0;
        if ((int)uVar7 < (int)local_20) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
        _Str = L": ";
        if (*(int *)((longlong)local_28 + uVar9 * 4) != 1) goto LAB_146fae023;
      }
      sVar5 = wcslen(_Str);
      ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar7 + 1) < (int)local_30);
  }
  iVar6 = (int)local_30;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
    iVar6 = (int)local_30;
  }
  DestructItems<FString,int>(local_38,iVar6);
  if (local_38 != (FString *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// GetDebugStringTokens @ 146faf110

/* WARNING: Removing unreachable block (ram,0x000146fafb3f) */
/* WARNING: Removing unreachable block (ram,0x000146faf838) */
/* WARNING: Removing unreachable block (ram,0x000146faf539) */
/* WARNING: Removing unreachable block (ram,0x000146faf6bf) */
/* WARNING: Removing unreachable block (ram,0x000146faf9bf) */
/* WARNING: Removing unreachable block (ram,0x000146fafcc7) */
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
UPathFollowingComponent::GetDebugStringTokens
          (UPathFollowingComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EPathFollowingDebugTokens::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FNavigationPath *pFVar6;
  FAbstractNavigationPath *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  uchar local_res8 [8];
  uchar local_res10 [8];
  int local_res18;
  float local_res20 [2];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  float local_dc;
  float local_d8 [2];
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pFVar5 = (FScriptContainerElement *)GetStatusDesc(this,local_60);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = *(int *)&pFVar5[8].field_0x0;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
  *(undefined8 *)&pFVar5[8].field_0x0 = 0;
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_f8 = 0;
  if (((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_f8;
  if ((this->Status).Value != '\x03') {
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((this->Path).Object == (FNavigationPath *)0x0) {
    iVar4 = 0xf;
    pwVar9 = L" (invalid path)";
  }
  else {
    pFVar6 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    if (((pFVar6->bIsReady == 0) || ((pFVar6->PathPoints).ArrayNum < 2)) || (pFVar6->bUpToDate == 0)
       ) {
      local_res18 = -1;
    }
    else {
      pFVar6 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      local_res18 = (pFVar6->PathPoints).ArrayNum;
    }
    if (((this->Path).Object == (FNavigationPath *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = FNavigationPath::CastPath<FAbstractNavigationPath>((this->Path).Object);
    FWeakObjectPtr::IsValid(&this->CurrentCustomLinkOb);
    if (pFVar7 == (FAbstractNavigationPath *)0x0) {
      ::FString::PrintfImpl(&local_70,L" (%d..%d/%d)%s");
      iVar4 = local_70.Data.ArrayNum + -1;
      if (local_70.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                ((FString *)pFVar1,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar4);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      goto LAB_146faf40d;
    }
    iVar4 = 9;
    pwVar9 = L" (direct)";
  }
  ::FString::AppendChars((FString *)pFVar1,pwVar9,iVar4);
LAB_146faf40d:
  local_res20[0] = 0.0;
  local_dc = 0.0;
  local_d8[0] = 0.0;
  local_res10[0] = '\0';
  local_res8[0] = '\0';
  DebugReachTest(this,local_res20,&local_dc,local_d8,local_res8,local_res10,local_res8);
  ::FString::FString(&local_d0,L"dot");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_d0) &&
      ((FScriptContainerElement *)&local_d0 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_d0.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_d0.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_d0.Data.ArrayMax;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_f4 = 1;
  if (((pFVar1 <= (FScriptContainerElement *)&local_f4) &&
      ((FScriptContainerElement *)&local_f4 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_f4;
  ::FString::PrintfImpl(&local_c0,L"%.2f");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_c0.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_c0.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_c0.Data.ArrayMax;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_f0 = 3;
  if (((pFVar1 <= (FScriptContainerElement *)&local_f0) &&
      ((FScriptContainerElement *)&local_f0 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_f0;
  ::FString::FString(&local_b0,L"dist2D");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_b0.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_b0.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_b0.Data.ArrayMax;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_ec = 1;
  if (((pFVar1 <= (FScriptContainerElement *)&local_ec) &&
      ((FScriptContainerElement *)&local_ec < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_ec;
  ::FString::PrintfImpl(&local_a0,L"%.0f");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
      ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_a0.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_a0.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_a0.Data.ArrayMax;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = 3 - (uint)(local_res10[0] != '\0');
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_e8;
  ::FString::FString(&local_90,L"distZ");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_90.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_90.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_90.Data.ArrayMax;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_e4 = 1;
  if (((pFVar1 <= (FScriptContainerElement *)&local_e4) &&
      ((FScriptContainerElement *)&local_e4 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_e4;
  ::FString::PrintfImpl(&local_80,L"%.0f");
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_80) &&
      ((FScriptContainerElement *)&local_80 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar8 = (longlong)iVar4;
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar8 * 0x10) = local_80.Data.AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar8 * 0x10 + 8) = local_80.Data.ArrayNum;
  *(int *)(pFVar1 + lVar8 * 0x10 + 0xc) = local_80.Data.ArrayMax;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_e0 = 3 - (uint)(local_res8[0] != '\0');
  if (((pFVar1 <= (FScriptContainerElement *)&local_e0) &&
      ((FScriptContainerElement *)&local_e0 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_e0;
  return;
}

// GetFinalAcceptanceRadius @ 146fb0830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UPathFollowingComponent::GetFinalAcceptanceRadius
          (UPathFollowingComponent *this,FNavigationPath *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double>_u_0 *pTVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TVector<double>_u_0 local_58;
  TVector<double> local_40 [2];
  
  if (param_1->bIsPartial == 0) {
    return this->AcceptanceRadius;
  }
  dVar10 = (param_2->field0_0x0)._s_0.X;
  if ((__real_c7efffffe0000000 < dVar10) && (dVar10 < __real_47efffffe0000000)) {
    dVar10 = (param_2->field0_0x0)._s_0.Y;
    uVar11 = SUB84(dVar10,0);
    uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if ((__real_c7efffffe0000000 < dVar10) && (dVar10 < __real_47efffffe0000000)) {
      dVar10 = (param_2->field0_0x0)._s_0.Z;
      uVar13 = SUB84(dVar10,0);
      uVar14 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if ((__real_c7efffffe0000000 < dVar10) && (dVar10 < __real_47efffffe0000000))
      goto LAB_146fb08f6;
    }
  }
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar13 = (undefined4)uVar1;
  uVar14 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar11 = (undefined4)uVar1;
  uVar12 = (undefined4)((ulonglong)uVar1 >> 0x20);
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<429579682598356324>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\PathFollowingComponent.cpp"
                     ,0x564,"FAISystem::IsValidLocation(OriginalGoalLocation)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
LAB_146fb08f6:
  if (param_3 == (TVector<double> *)0x0) {
    pTVar4 = &FNavigationPath::GetEndLocation(param_1,local_40)->field0_0x0;
  }
  else {
    pTVar4 = &local_58;
    local_58._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_58._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  dVar10 = (double)CONCAT44(uVar12,uVar11) - (pTVar4->_s_0).Y;
  dVar6 = (param_2->field0_0x0)._s_0.X - (((TVector<double>_u_0 *)&(pTVar4->_s_0).X)->_s_0).X;
  dVar7 = (double)CONCAT44(uVar14,uVar13) - (pTVar4->_s_0).Z;
  auVar8._0_8_ = dVar6 * dVar6;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar10 * dVar10 + auVar8._0_8_ + dVar7 * dVar7;
  auVar9 = sqrtpd(auVar8,auVar9);
  dVar10 = (double)this->AcceptanceRadius - auVar9._0_8_;
  if (dVar10 <= (double)this->MyDefaultAcceptanceRadius) {
    dVar10 = (double)this->MyDefaultAcceptanceRadius;
  }
  dVar7 = (double)(float)dVar10 - dVar10;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  return (float)dVar10;
}

// GetMoveFocus @ 146fb26a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UPathFollowingComponent::GetMoveFocus
          (UPathFollowingComponent *this,TVector<double> *__return_storage_ptr__,bool param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  double dVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      lVar3 = *(longlong *)(pUVar7 + 0xb);
      if (lVar3 != 0) {
        dVar2 = *(double *)(lVar3 + 0x218);
        dVar1 = *(double *)(lVar3 + 0x220);
        (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x210);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar5;
      return __return_storage_ptr__;
    }
  }
  GetCurrentDirection(this,(TVector<double> *)&local_38._s_0);
  pTVar8 = FBasedPosition::operator*(&this->CurrentDestination,&local_20);
  dVar9 = (double)FAIConfig::Navigation::FocalPointDistance;
  dVar1 = (pTVar8->field0_0x0)._s_0.Y;
  dVar2 = (pTVar8->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar9 * local_38._s_0.X + (pTVar8->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * local_38._s_0.Y + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * local_38._s_0.Z + dVar2;
  return __return_storage_ptr__;
}

// GetPathActionType @ 146fb2ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall UPathFollowingComponent::GetPathActionType(UPathFollowingComponent *this)

{
  uchar uVar1;
  FNavigationPath *this_00;
  FAbstractNavigationPath *pFVar2;
  
  uVar1 = (this->Status).Value;
  if (uVar1 == '\0') {
    return NoMove;
  }
  if ((((uVar1 == '\x01') || (uVar1 == '\x02')) || (uVar1 == '\x03')) &&
     (this_00 = (this->Path).Object, this_00 != (FNavigationPath *)0x0)) {
    pFVar2 = FNavigationPath::CastPath<FAbstractNavigationPath>(this_00);
    if (pFVar2 != (FAbstractNavigationPath *)0x0) {
      return DirectMove;
    }
    return PathToGoal - (((this->Path).Object)->bIsPartial != 0);
  }
  return Error;
}

// GetPathDestination @ 146fb3210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UPathFollowingComponent::GetPathDestination
          (UPathFollowingComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  FNavigationPath *this_00;
  double dVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->Path).Object;
  if (this_00 == (FNavigationPath *)0x0) {
    pTVar3 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &FNavigationPath::GetDestinationLocation(this_00,(TVector<double> *)&local_28._s_0)->
              field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146fb4360

UClass * __cdecl UPathFollowingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingComponent",
               &Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton,
               StaticRegisterNativesUPathFollowingComponent,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UPathFollowingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton;
}

// GetRemainingPathCost @ 146fb45c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall UPathFollowingComponent::GetRemainingPathCost(UPathFollowingComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  double dVar1;
  FNavigationPath *pFVar2;
  FNavLocation local_28;
  
  pFVar2 = (this->Path).Object;
  if ((((pFVar2 != (FNavigationPath *)0x0) && (pFVar2->bIsReady != 0)) &&
      (1 < (pFVar2->PathPoints).ArrayNum)) &&
     ((pFVar2->bUpToDate != 0 && ((this->Status).Value == '\x03')))) {
    GetCurrentNavLocation(this,&local_28);
    pFVar2 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000146fb461a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar1 = (double)(*UNRECOVERED_JUMPTABLE)(pFVar2,local_28.NodeRef,UNRECOVERED_JUMPTABLE);
    return dVar1;
  }
  return 0.0;
}

// GetResultDesc @ 146fb4630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UPathFollowingComponent::GetResultDesc
          (UPathFollowingComponent *this,FString *__return_storage_ptr__,Type param_1)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton == (UEnum *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_AIModule();
        Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult,(UObject *)pUVar1,
                           L"EPathFollowingResult");
      }
      ResultEnum = Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (ResultEnum != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(ResultEnum,__return_storage_ptr__,(longlong)(int)param_1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetStatusDesc @ 146fb5970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UPathFollowingComponent::GetStatusDesc
          (UPathFollowingComponent *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton == (UEnum *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_AIModule();
        Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus,(UObject *)pUVar1,
                           L"EPathFollowingStatus");
      }
      StatusEnum = Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (StatusEnum != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(StatusEnum,__return_storage_ptr__,(ulonglong)(this->Status).Value);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// HandlePathUpdateEvent @ 146fb6080

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

bool __thiscall UPathFollowingComponent::HandlePathUpdateEvent(UPathFollowingComponent *this)

{
  TSharedPtr<FNavigationPath,1> *this_00;
  uchar uVar1;
  undefined1 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  AActor *pAVar9;
  FNavigationPath *pFVar10;
  UObject *pUVar11;
  INavAgentInterface *pIVar12;
  TVector<double> *pTVar13;
  TQuatRotationTranslationMatrix<double> *pTVar14;
  UWorld *this_01;
  FTimerManager *this_02;
  FTimerData *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  FString local_e8;
  double local_d8;
  TQuat<double> local_c8;
  TQuatRotationTranslationMatrix<double> local_a8;
  
  if (FVisualLogger::bIsRecording != 0) {
    GetStatusDesc(this,(FString *)local_108);
    local_c8.X = (double)(this->Path).Object;
    local_c8.Y = (double)(this->Path).SharedReferenceCount.ReferenceController;
    if ((TReferenceControllerBase<1> *)local_c8.Y != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_c8.Y)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)local_c8.Y)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    GetPathDescHelper(&local_e8,(TSharedPtr<FNavigationPath,1> *)&local_c8);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"HandlePathUpdateEvent Path(%s) Status(%s)");
    if ((void *)CONCAT44(local_e8.Data.AllocatorInstance.Data._4_4_,
                         local_e8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_e8.Data.AllocatorInstance.Data._4_4_,
                                     local_e8.Data.AllocatorInstance.Data._0_4_));
    }
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
  }
  pAVar9 = (AActor *)FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
  this_00 = &this->Path;
  pTVar3 = (this->Path).SharedReferenceCount.ReferenceController;
  pFVar10 = this_00->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar10 != (FNavigationPath *)0x0) {
    LogPathHelper((AActor *)this->_padding_,pFVar10,pAVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (((((this->Status).Value == '\x01') &&
       (pFVar10 = this_00->Object, pFVar10 != (FNavigationPath *)0x0)) &&
      ((pFVar10->bIsReady == 0 ||
       (((pFVar10->PathPoints).ArrayNum < 2 || (pFVar10->bUpToDate == 0)))))) &&
     (FVisualLogger::bIsRecording != 0)) {
    TSharedPtr<FNavigationPath,1>::operator->(this_00);
    TSharedPtr<FNavigationPath,1>::operator->(this_00);
    TSharedPtr<FNavigationPath,1>::operator->(this_00);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Error,
               L"Received unusable path in Waiting state! (ready:%d upToDate:%d pathPoints:%d)");
  }
  if (((((this->Status).Value == '\0') ||
       (pFVar10 = this_00->Object, pFVar10 == (FNavigationPath *)0x0)) || (pFVar10->bIsReady == 0))
     || (((pFVar10->PathPoints).ArrayNum < 2 || (pFVar10->bUpToDate == 0)))) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                 L">> invalid request");
    }
    bVar6 = false;
  }
  else {
    pFVar10 = TSharedPtr<FNavigationPath,1>::operator->(this_00);
    if ((pFVar10->bObservingGoalActor != 0) &&
       (pUVar11 = FWeakObjectPtr::Get(&(pFVar10->GoalActor).WeakPtr), pUVar11 != (UObject *)0x0)) {
      pFVar10 = TSharedPtr<FNavigationPath,1>::operator->(this_00);
      pIVar12 = FNavigationPath::GetGoalActorAsNavAgent(pFVar10);
      if (pIVar12 == (INavAgentInterface *)0x0) {
        lVar4 = *(longlong *)(pUVar11 + 0xb);
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar4 != 0) {
          uVar23 = *(double *)(lVar4 + 0x220);
          uVar19 = *(double *)(lVar4 + 0x210);
          uVar22 = *(double *)(lVar4 + 0x218);
        }
      }
      else {
        local_e8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&(this->MoveOffset).field0_0x0;
        local_e8.Data.AllocatorInstance.Data._4_4_ =
             *(undefined4 *)((longlong)&(this->MoveOffset).field0_0x0 + 4);
        local_e8.Data.ArrayNum = *(int *)((longlong)&(this->MoveOffset).field0_0x0 + 8);
        local_e8.Data.ArrayMax = *(int *)((longlong)&(this->MoveOffset).field0_0x0 + 0xc);
        local_d8 = (this->MoveOffset).field0_0x0._s_0.Z;
        (**(code **)((longlong)*pIVar12 + 0x38))
                  (pIVar12,this->_padding_,&local_e8,local_108,local_ec,local_f0);
        pTVar13 = (TVector<double> *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,&local_e8);
        dVar5 = __real_3ff0000000000000;
        lVar4 = *(longlong *)(pUVar11 + 0xb);
        if (lVar4 == 0) {
          uVar8 = 0;
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
          local_c8.Z = ___xmm_3ff00000000000000000000000000000;
          local_c8.W = _UNK_15061cbc8;
        }
        else {
          uVar8 = *(undefined4 *)(lVar4 + 0x1f0);
          uVar16 = *(undefined4 *)(lVar4 + 500);
          uVar17 = *(undefined4 *)(lVar4 + 0x1f8);
          uVar18 = *(undefined4 *)(lVar4 + 0x1fc);
          local_c8.Z = *(double *)(lVar4 + 0x200);
          local_c8.W = *(double *)(lVar4 + 0x208);
        }
        local_c8.X = (double)CONCAT44(uVar16,uVar8);
        local_c8.Y = (double)CONCAT44(uVar18,uVar17);
        pTVar14 = UE::Math::TQuatRotationTranslationMatrix<double>::
                  TQuatRotationTranslationMatrix<double>(&local_a8,&local_c8,pTVar13);
        auVar20._8_4_ = SUB84(local_f8,0);
        auVar20._0_8_ = local_f8;
        auVar20._12_4_ = (int)((ulonglong)local_f8 >> 0x20);
        auVar21._8_4_ = SUB84(dVar5,0);
        auVar21._0_8_ = dVar5;
        auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar23 = local_f8 * *(double *)&pTVar14->field_0x50 +
                 *(double *)&pTVar14->field_0x30 * (double)local_108._8_8_ +
                 *(double *)&pTVar14->field_0x10 * (double)local_108._0_8_ +
                 *(double *)&pTVar14->field_0x70 * dVar5;
        uVar19 = (double)local_108._8_8_ * *(double *)&pTVar14->field_0x20 +
                 (double)local_108._0_8_ * *(double *)pTVar14 +
                 local_f8 * *(double *)&pTVar14->field_0x40 +
                 dVar5 * *(double *)&pTVar14->field_0x60;
        uVar22 = (double)local_108._8_8_ * *(double *)&pTVar14->field_0x28 +
                 (double)local_108._0_8_ * *(double *)&pTVar14->field_0x8 +
                 auVar20._8_8_ * *(double *)&pTVar14->field_0x48 +
                 auVar21._8_8_ * *(double *)&pTVar14->field_0x68;
      }
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X = (double)uVar19;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y = (double)uVar22;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z = (double)uVar23;
    }
    bVar6 = FAISystem::IsValidLocation(&this->OriginalMoveRequestGoalLocation);
    if (bVar6) {
      pFVar10 = TSharedPtr<FNavigationPath,1>::operator*<FNavigationPath>(this_00);
      iVar7 = FindPreciseAcceptanceRadiusTestsStartNodeIndex
                        (this,pFVar10,&this->OriginalMoveRequestGoalLocation);
      this->PreciseAcceptanceRadiusCheckStartNodeIndex = iVar7;
    }
    (**(code **)(this->_padding_ + 0x540))(this);
    this_01 = (UWorld *)this->_padding_;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_02 = UWorld::GetTimerManager(this_01);
    pFVar15 = FTimerManager::FindTimer(this_02,&this->WaitingForPathTimer);
    if (pFVar15 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_02,(FTimerHandle)(this->WaitingForPathTimer).Handle);
    }
    (this->WaitingForPathTimer).Handle = 0;
    (**(code **)(this->_padding_ + 0x5e8))(this);
    uVar1 = (this->Status).Value;
    if ((uVar1 == '\x01') || (uVar1 == '\x03')) {
      (this->Status).Value = '\x03';
      if ((this->bTickComponentOnlyWhenMoving != '\0') && ((this->_padding_ & 0x100000) == 0)) {
        (**(code **)(this->_padding_ + 0x2b8))(this,0);
      }
      uVar8 = (**(code **)(this->_padding_ + 0x608))(this,this_00->Object);
      (**(code **)(this->_padding_ + 0x5c0))(this,uVar8);
    }
    bVar6 = true;
  }
  return bVar6;
}

// HasDirectPath @ 146fb6c80

/* WARNING: Removing unreachable block (ram,0x000146fb6cc3) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::HasDirectPath(UPathFollowingComponent *this)

{
  FNavigationPath *pFVar1;
  FNavPathType *this_00;
  bool bVar2;
  
  pFVar1 = (this->Path).Object;
  if (pFVar1 == (FNavigationPath *)0x0) {
    return false;
  }
  if (((pFVar1->PathType).Id != FNavMeshPath::Type.Id) &&
     ((this_00 = (pFVar1->PathType).ParentType, this_00 == (FNavPathType *)0x0 ||
      (bVar2 = FNavPathType::IsA(this_00,&FNavMeshPath::Type), !bVar2)))) {
    return true;
  }
  return pFVar1 == (FNavigationPath *)0x0;
}

// HasMovementAuthority @ 146fb6f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::HasMovementAuthority(UPathFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar2 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if (bVar2) {
    return true;
  }
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x18))();
  if (cVar4 != '\0') {
    return true;
  }
  return false;
}

// HasReached @ 146fb7020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::HasReached
          (UPathFollowingComponent *this,TVector<double> *param_1,EPathFollowingReachMode param_2,
          float param_3)

{
  INavMovementInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  double *pdVar5;
  float fVar6;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double>_u_0 local_50;
  undefined1 local_38 [48];
  
  if ((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
    if (bVar3) {
      if ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) {
LAB_146fb707c:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      else {
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
        if (!bVar3) goto LAB_146fb707c;
      }
      pIVar1 = (this->NavMovementInterface).InterfaceInstance;
      pdVar5 = (double *)(**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,local_38);
      goto LAB_146fb70d8;
    }
  }
  pdVar5 = &local_68;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fb70d8:
  local_50._s_0.X = *pdVar5;
  local_50._s_0.Y = pdVar5[1];
  local_50._s_0.Z = pdVar5[2];
  if (param_3 == __real_bf800000) {
    param_3 = this->MyDefaultAcceptanceRadius;
  }
  if ((param_2 & ~OverlapGoal) == ExactLocation) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = this->MinAgentRadiusPct;
  }
  bVar3 = HasReachedInternal(this,param_1,0.0,0.0,(TVector<double> *)&local_50._s_0,param_3,fVar6);
  return bVar3;
}

// HasReached @ 146fb7160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::HasReached(UPathFollowingComponent *this,FAIMoveRequest *param_1)

{
  undefined4 uVar1;
  INavMovementInterface *pIVar2;
  code *pcVar3;
  EPathFollowingReachMode EVar4;
  EPathFollowingReachMode EVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  AActor *pAVar9;
  double *pdVar10;
  float fVar11;
  float fVar12;
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  undefined1 local_30 [40];
  
  uVar1 = *(undefined4 *)&param_1->field_0x28;
  EVar4 = SUB41(uVar1,1) & OverlapGoal;
  EVar5 = EVar4 | OverlapAgent;
  if (ZPULL(uVar1,8,1) == 0) {
    EVar5 = EVar4;
  }
  if (param_1->bMoveToActor == 0) {
    fVar12 = param_1->AcceptanceRadius;
    local_48._s_0.X = (param_1->GoalLocation).field0_0x0._s_0.X;
    local_48._s_0.Y = (param_1->GoalLocation).field0_0x0._s_0.Y;
    local_48._s_0.Z = (param_1->GoalLocation).field0_0x0._s_0.Z;
    if (((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
       (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar6)) {
      pdVar10 = &local_78;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
          (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar6))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                ,0x8d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pIVar2 = (this->NavMovementInterface).InterfaceInstance;
      pdVar10 = (double *)(**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,local_30);
    }
    local_60._s_0.X = *pdVar10;
    local_60._s_0.Y = pdVar10[1];
    local_60._s_0.Z = pdVar10[2];
    if (fVar12 == __real_bf800000) {
      fVar12 = this->MyDefaultAcceptanceRadius;
    }
    if ((EVar5 & ~OverlapGoal) == ExactLocation) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = this->MinAgentRadiusPct;
    }
    bVar6 = HasReachedInternal(this,(TVector<double> *)&local_48._s_0,0.0,0.0,
                               (TVector<double> *)&local_60._s_0,fVar12,fVar11);
    return bVar6;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar8 != (UObject *)0x0) {
    fVar12 = param_1->AcceptanceRadius;
    if (param_1->bMoveToActor == 0) {
      pAVar9 = (AActor *)0x0;
    }
    else {
      pAVar9 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    bVar6 = HasReached(this,pAVar9,EVar5,fVar12,true);
    return bVar6;
  }
  return false;
}

// HasReached @ 146fb7320

/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
UPathFollowingComponent::HasReached
          (UPathFollowingComponent *this,AActor *param_1,EPathFollowingReachMode param_2,
          float param_3,bool param_4)

{
  USceneComponent *pUVar1;
  longlong lVar2;
  INavMovementInterface *pIVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  longlong *plVar9;
  TVector<double> *pTVar10;
  TQuatRotationTranslationMatrix<double> *pTVar11;
  double *pdVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float local_1d8;
  float local_1d4;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TVector<double>_u_0 local_188;
  TQuat<double> local_168;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  TQuatRotationTranslationMatrix<double> local_e8;
  
  local_1d8 = 0.0;
  uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar14 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  fVar15 = 0.0;
  pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
  local_1d4 = 0.0;
  local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1b8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pUVar1 != (USceneComponent *)0x0) {
    local_1b8._s_0.X = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_1b8._s_0.Y = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_138 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar13 = SUB84(local_138,0);
    uVar14 = (undefined4)((ulonglong)local_138 >> 0x20);
    local_148 = local_1b8._s_0.X;
    dStack_140 = local_1b8._s_0.Y;
  }
  local_1b8._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  if (param_3 == __real_bf800000) {
    param_3 = this->MyDefaultAcceptanceRadius;
  }
  pUVar8 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar8);
  if (plVar9 != (longlong *)0x0) {
    lVar2 = this->_padding_;
    (**(code **)(*plVar9 + 0x28))(plVar9,local_130,lVar2);
    (**(code **)(*plVar9 + 0x38))(plVar9,lVar2,local_130,&local_1d0,&local_1d8,&local_1d4);
    if (param_4) {
      pTVar10 = (TVector<double> *)(**(code **)(*plVar9 + 0x18))(plVar9,local_118);
      dVar5 = __real_3ff0000000000000;
      pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
      if (pUVar1 == (USceneComponent *)0x0) {
        local_168.X._0_4_ = 0;
        local_168.X._4_4_ = 0;
        local_168.Y._0_4_ = 0;
        local_168.Y._4_4_ = 0;
        local_168.Z = ___xmm_3ff00000000000000000000000000000;
        local_168.W = _UNK_15061cbc8;
      }
      else {
        local_168.X._0_4_ = *(undefined4 *)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64;
        local_168.X._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 4);
        local_168.Y._0_4_ = *(undefined4 *)((pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 1);
        local_168.Y._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 0xc);
        local_168.Z = (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
        local_168.W = (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
      }
      pTVar11 = UE::Math::TQuatRotationTranslationMatrix<double>::
                TQuatRotationTranslationMatrix<double>(&local_e8,&local_168,pTVar10);
      local_1b8._s_0.X =
           *(double *)pTVar11 * local_1d0 + *(double *)&pTVar11->field_0x20 * dStack_1c8 +
           *(double *)&pTVar11->field_0x40 * local_1c0 + *(double *)&pTVar11->field_0x60 * dVar5;
      local_1b8._s_0.Y =
           *(double *)&pTVar11->field_0x8 * local_1d0 + *(double *)&pTVar11->field_0x28 * dStack_1c8
           + *(double *)&pTVar11->field_0x48 * local_1c0 + *(double *)&pTVar11->field_0x68 * dVar5;
      local_1b8._s_0.Z =
           *(double *)&pTVar11->field_0x10 * local_1d0 +
           *(double *)&pTVar11->field_0x30 * dStack_1c8 +
           *(double *)&pTVar11->field_0x50 * local_1c0 + *(double *)&pTVar11->field_0x70 * dVar5;
      if (OverlapAgent < param_2) goto LAB_146fb756a;
      local_1d8 = 0.0;
    }
    if ((param_2 == ExactLocation) || (param_2 == OverlapAgent)) {
      local_1d8 = 0.0;
    }
  }
LAB_146fb756a:
  if ((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
    if (bVar6) {
      if ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) {
LAB_146fb75ae:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
        if (!bVar6) goto LAB_146fb75ae;
      }
      pIVar3 = (this->NavMovementInterface).InterfaceInstance;
      pdVar12 = (double *)(**(code **)((longlong)*pIVar3 + 0x80))(pIVar3,local_100);
      goto LAB_146fb7608;
    }
  }
  pdVar12 = &local_1a0;
  local_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fb7608:
  local_188._s_0.X = *pdVar12;
  local_188._s_0.Y = pdVar12[1];
  local_188._s_0.Z = pdVar12[2];
  if ((param_2 & ~OverlapGoal) != ExactLocation) {
    fVar15 = this->MinAgentRadiusPct;
  }
  bVar6 = HasReachedInternal(this,(TVector<double> *)&local_1b8._s_0,local_1d8,local_1d4,
                             (TVector<double> *)&local_188._s_0,param_3,fVar15);
  return bVar6;
}

// HasReachedCurrentTarget @ 146fb7690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::HasReachedCurrentTarget
          (UPathFollowingComponent *this,TVector<double> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  INavMovementInterface *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *this_00;
  UClass *pUVar7;
  longlong *plVar8;
  FNavigationPath *pFVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  UPathFollowingComponent *local_res8;
  FName local_res18 [2];
  FString local_a8;
  FString local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  undefined1 local_58 [32];
  
  bVar5 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if (bVar5) {
    return false;
  }
  if ((this->bMoveSegmentIsUsingCustomLinkReachCondition != '\0') &&
     (this_00 = FWeakObjectPtr::Get(&this->MoveSegmentCustomLinkOb), this_00 != (UObject *)0x0)) {
    pUVar7 = Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar7);
    if ((plVar8 != (longlong *)0x0) &&
       (((this->Path).Object != (FNavigationPath *)0x0 ||
        (local_res8 = this,
        bVar5 = `UPathFollowingComponent::HasReachedCurrentTarget'::__l12::<lambda_1>::operator()
                          (&local_res8), bVar5)))) {
      if (((this->Path).Object == (FNavigationPath *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar1 = this->MoveSegmentEndIndex;
      pFVar9 = (this->Path).Object;
      uVar11 = 0;
      if ((int)uVar1 < (pFVar9->PathPoints).ArrayNum) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (pFVar9->PathPoints).AllocatorInstance.Data;
      pFVar9 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      iVar12 = this->MoveSegmentEndIndex + 1;
      if ((-1 < iVar12) && (iVar12 < (pFVar9->PathPoints).ArrayNum)) {
        pFVar9 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
        uVar13 = this->MoveSegmentEndIndex + 1;
        uVar11 = 0;
        if ((int)uVar13 < (pFVar9->PathPoints).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar6 = (**(code **)(*plVar8 + 0x78))
                          (plVar8,this,param_1,pFVar2 + (longlong)(int)uVar1 * 0x30,
                           (pFVar9->PathPoints).AllocatorInstance.Data +
                           (longlong)(int)uVar13 * 0x30);
        return (bool)uVar6;
      }
      if (1 < (byte)LogPathFollowing._0_1_) {
        if (this->_padding_ == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_res18[0] = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(local_res18,&local_a8);
        }
        ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPathFollowing);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  FBasedPosition::operator*(&this->CurrentDestination,(TVector<double> *)&local_88._s_0);
  GetCurrentDirection(this,(TVector<double> *)&local_70._s_0);
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pIVar3 = (this->NavMovementInterface).InterfaceInstance;
  pdVar10 = (double *)(**(code **)((longlong)*pIVar3 + 0x80))(pIVar3,local_58);
  if (0.0 <= (local_88._s_0.Y - pdVar10[1]) * local_70._s_0.Y +
             (local_88._s_0.X - *pdVar10) * local_70._s_0.X +
             (local_88._s_0.Z - pdVar10[2]) * local_70._s_0.Z) {
    bVar5 = HasReachedInternal(this,(TVector<double> *)&local_88._s_0,0.0,0.0,param_1,
                               this->CurrentAcceptanceRadius,__real_3d4ccccd);
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// HasReachedDestination @ 146fb7ad0

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

bool __thiscall
UPathFollowingComponent::HasReachedDestination
          (UPathFollowingComponent *this,TVector<double> *param_1)

{
  double dVar1;
  FNavigationPath *this_00;
  INavAgentInterface *pIVar2;
  longlong lVar3;
  code *pcVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  FBasedPosition *this_01;
  TVector<double> *pTVar10;
  UObject *pUVar11;
  TQuatRotationTranslationMatrix<double> *pTVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float local_1f8;
  float local_1f4;
  TVector<double>_u_0 local_1f0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TVector<double>_u_0 local_1b8;
  TQuat<double> local_198;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double> local_160;
  undefined1 local_148 [24];
  FBasedPosition local_130;
  TQuatRotationTranslationMatrix<double> local_c8;
  
  if (((this->Path).Object == (FNavigationPath *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  this_00 = (this->Path).Object;
  if ((this_00 == (FNavigationPath *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  this_01 = FNavigationPath::GetPathPointLocation
                      (this_00,&local_130,(((this->Path).Object)->PathPoints).ArrayNum - 1);
  FBasedPosition::operator*(this_01,(TVector<double> *)&local_1f0._s_0);
  local_1f8 = 0.0;
  local_1f4 = 0.0;
  if (((this->Path).Object == (FNavigationPath *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if ((((this->Path).Object)->bIsPartial == 0) && (this->bMoveToGoalOnLastSegment != '\0')) {
    pTVar10 = FBasedPosition::operator*(&this->CurrentDestination,&local_160);
    local_1f0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    pdVar5 = &(pTVar10->field0_0x0)._s_0.Y;
    local_1f0._s_0.Y = *pdVar5;
    local_1f0._s_0.Z = *(double *)((longlong)&pTVar10->field0_0x0 + 0x10);
    uVar13 = *(uint *)&pTVar10->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar15 = *(uint *)((longlong)&pTVar10->field0_0x0 + 4) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar15,uVar13) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar15,uVar13) == __real_3f1a36e2e0000000) &&
        ((((double)CONCAT44(*(uint *)((longlong)&pTVar10->field0_0x0 + 0xc) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)pdVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000 &&
          (uVar13 = SUB84(local_1f0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar15 = (uint)((ulonglong)local_1f0._s_0.Z >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar15,uVar13) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar15,uVar13) == __real_3f1a36e2e0000000)) &&
         (bVar8 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr), bVar8)))) &&
       (this->bMoveToGoalClampedToNavigation == '\0')) {
      pIVar2 = this->DestinationAgent;
      if (pIVar2 == (INavAgentInterface *)0x0) {
        pUVar11 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
        lVar3 = *(longlong *)(pUVar11 + 0xb);
        local_1f0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_1f0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar3 != 0) {
          local_1f0._s_0.Z = *(double *)(lVar3 + 0x220);
          local_1f0._s_0.X = *(double *)(lVar3 + 0x210);
          local_1f0._s_0.Y = *(double *)(lVar3 + 0x218);
          local_178 = local_1f0._s_0.X;
          dStack_170 = local_1f0._s_0.Y;
          local_168 = local_1f0._s_0.Z;
        }
      }
      else {
        (**(code **)((longlong)*pIVar2 + 0x38))
                  (pIVar2,this->_padding_,&this->MoveOffset,&local_1d8,&local_1f8,&local_1f4);
        pTVar10 = (TVector<double> *)
                  (**(code **)((longlong)*this->DestinationAgent + 0x18))
                            (this->DestinationAgent,local_148);
        pUVar11 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
        dVar1 = __real_3ff0000000000000;
        lVar3 = *(longlong *)(pUVar11 + 0xb);
        if (lVar3 == 0) {
          local_198.X._0_4_ = 0;
          local_198.X._4_4_ = 0;
          local_198.Y._0_4_ = 0;
          local_198.Y._4_4_ = 0;
          local_198.Z = ___xmm_3ff00000000000000000000000000000;
          local_198.W = _UNK_15061cbc8;
        }
        else {
          local_198.X._0_4_ = *(undefined4 *)(lVar3 + 0x1f0);
          local_198.X._4_4_ = *(undefined4 *)(lVar3 + 500);
          local_198.Y._0_4_ = *(undefined4 *)(lVar3 + 0x1f8);
          local_198.Y._4_4_ = *(undefined4 *)(lVar3 + 0x1fc);
          local_198.Z = *(double *)(lVar3 + 0x200);
          local_198.W = *(double *)(lVar3 + 0x208);
        }
        pTVar12 = UE::Math::TQuatRotationTranslationMatrix<double>::
                  TQuatRotationTranslationMatrix<double>(&local_c8,&local_198,pTVar10);
        auVar17._8_4_ = SUB84(dVar1,0);
        auVar17._0_8_ = dVar1;
        auVar17._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        local_1f0._s_0.X =
             dStack_1d0 * *(double *)&pTVar12->field_0x20 + *(double *)pTVar12 * local_1d8 +
             *(double *)&pTVar12->field_0x40 * local_1c8 + dVar1 * *(double *)&pTVar12->field_0x60;
        local_1f0._s_0.Y =
             dStack_1d0 * *(double *)&pTVar12->field_0x28 +
             *(double *)&pTVar12->field_0x8 * local_1d8 +
             *(double *)&pTVar12->field_0x48 * local_1c8 +
             auVar17._8_8_ * *(double *)&pTVar12->field_0x68;
        local_1f0._s_0.Z =
             *(double *)&pTVar12->field_0x10 * local_1d8 +
             *(double *)&pTVar12->field_0x30 * dStack_1d0 +
             *(double *)&pTVar12->field_0x50 * local_1c8 + *(double *)&pTVar12->field_0x70 * dVar1;
      }
    }
  }
  dVar6 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X;
  dVar7 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y;
  dVar1 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z;
  if (((this->Path).Object == (FNavigationPath *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  local_1b8._s_0.X = dVar6;
  local_1b8._s_0.Y = dVar7;
  local_1b8._s_0.Z = dVar1;
  fVar14 = GetFinalAcceptanceRadius
                     (this,(this->Path).Object,(TVector<double> *)&local_1b8._s_0,
                      (TVector<double> *)0x0);
  if (this->bReachTestIncludesAgentRadius == 0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = this->MinAgentRadiusPct;
  }
  fVar18 = 0.0;
  if (this->bReachTestIncludesGoalRadius != '\0') {
    fVar18 = local_1f8;
  }
  bVar8 = HasReachedInternal(this,(TVector<double> *)&local_1f0._s_0,fVar18,local_1f4,param_1,fVar14
                             ,fVar16);
  return bVar8;
}

// HasReachedInternal @ 146fb7f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::HasReachedInternal
          (UPathFollowingComponent *this,TVector<double> *param_1,float param_2,float param_3,
          TVector<double> *param_4,float param_5,float param_6)

{
  INavMovementInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_res8 [2];
  float local_38 [12];
  
  bVar3 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if (!bVar3) {
    local_res8[0] = 0.0;
    local_38[0] = 0.0;
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->NavMovementInterface).InterfaceInstance;
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,local_res8,local_38);
    dVar6 = (param_1->field0_0x0)._s_0.Y - (param_4->field0_0x0)._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.X - (param_4->field0_0x0)._s_0.X;
    dVar8 = (param_1->field0_0x0)._s_0.Z - (param_4->field0_0x0)._s_0.Z;
    dVar5 = (double)(local_res8[0] * param_6 + param_2 + param_5);
    if (dVar6 * dVar6 + dVar7 * dVar7 <= dVar5 * dVar5) {
      return (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             (double)(local_38[0] * this->MinAgentHalfHeightPct + param_3);
    }
  }
  return false;
}

// Initialize @ 146fb8bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::Initialize(UPathFollowingComponent *this)

{
  uint uVar1;
  
  (**(code **)(this->_padding_ + 0x508))();
  uVar1 = this->BlockDetectionSampleCount;
  if (-1 < (int)uVar1) {
    if ((this->LocationSamples).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar1,&(this->LocationSamples).AllocatorInstance,
                 (this->LocationSamples).ArrayNum,&(this->LocationSamples).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// IsBlocked @ 146fb93d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::IsBlocked(UPathFollowingComponent *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double> local_78;
  TVector<double> local_60 [3];
  
  piVar1 = &(this->LocationSamples).ArrayNum;
  iVar3 = *piVar1;
  if ((iVar3 != this->BlockDetectionSampleCount) || (this->BlockDetectionSampleCount < 1)) {
    return false;
  }
  fVar2 = this->BlockDetectionDistance;
  uVar12 = 0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < iVar3) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->LocationSamples).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pTVar11 = FBasedPosition::operator*
                          ((FBasedPosition *)
                           ((this->LocationSamples).AllocatorInstance.Data +
                           (longlong)(int)uVar12 * 0x68),&local_78);
      uVar12 = uVar12 + 1;
      uVar5 = (double)uVar5 + (pTVar11->field0_0x0)._s_0.X;
      uVar6 = (double)uVar6 + (pTVar11->field0_0x0)._s_0.Y;
      uVar7 = (double)uVar7 + (pTVar11->field0_0x0)._s_0.Z;
      iVar3 = *piVar1;
    } while ((int)uVar12 < iVar3);
  }
  uVar12 = 0;
  dVar14 = __real_3ff0000000000000 / (double)iVar3;
  if (0 < iVar3) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->LocationSamples).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pTVar11 = FBasedPosition::operator*
                          ((FBasedPosition *)
                           ((this->LocationSamples).AllocatorInstance.Data +
                           (longlong)(int)uVar12 * 0x68),local_60);
      dVar16 = (double)uVar6 * dVar14 - (pTVar11->field0_0x0)._s_0.Y;
      dVar15 = (double)uVar5 * dVar14 - (pTVar11->field0_0x0)._s_0.X;
      dVar13 = (double)uVar7 * dVar14 - (pTVar11->field0_0x0)._s_0.Z;
      if ((double)(fVar2 * fVar2) < dVar16 * dVar16 + dVar15 * dVar15 + dVar13 * dVar13) {
        return false;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->LocationSamples).ArrayNum);
  }
  return true;
}

// IsCurrentSegmentNavigationLink @ 146fb97c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::IsCurrentSegmentNavigationLink(UPathFollowingComponent *this)

{
  uint uVar1;
  FNavigationPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  pFVar2 = (this->Path).Object;
  if (((pFVar2 != (FNavigationPath *)0x0) && (uVar1 = this->MoveSegmentStartIndex, -1 < (int)uVar1))
     && ((int)uVar1 < (pFVar2->PathPoints).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (pFVar2->PathPoints).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
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
    if (((byte)(pFVar2->PathPoints).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x30 + 0x20] & 4)
        != 0) {
      return true;
    }
  }
  return false;
}

// IsFollowingNavLink @ 146fb98f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::IsFollowingNavLink(UPathFollowingComponent *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = this->_padding_;
  if (((lVar2 != 0) &&
      (uVar1 = *(uint *)&(this->CurrentDestination).CachedBaseRotation.Yaw, -1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(lVar2 + 0x30))) {
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x30)) {
      uVar6 = ~uVar1 >> 0x1f;
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
    if ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x20 + (longlong)(int)uVar1 * 0x30) & 4) != 0) {
      return true;
    }
  }
  return false;
}

// IsOnPath @ 146fb9be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::IsOnPath(UPathFollowingComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  UObject *pUVar2;
  FNavigationPath *pFVar3;
  FNavMeshPath *pFVar4;
  FNavLocation local_28;
  
  pFVar3 = (this->Path).Object;
  if ((((pFVar3 != (FNavigationPath *)0x0) && (pFVar3->bIsReady != 0)) &&
      (1 < (pFVar3->PathPoints).ArrayNum)) && (pFVar3->bUpToDate != 0)) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar3->NavigationDataUsed).WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      pFVar3 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      pFVar4 = FNavigationPath::CastPath<FNavMeshPath>(pFVar3);
      if (pFVar4 != (FNavMeshPath *)0x0) {
        GetCurrentNavLocation(this,&local_28);
        pFVar3 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar3->_padding_ + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000146fb9c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar3,local_28.NodeRef,UNRECOVERED_JUMPTABLE);
        return (bool)uVar1;
      }
      return true;
    }
  }
  return false;
}

// IsPathFollowingAllowed @ 146fb9ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::IsPathFollowingAllowed(UPathFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) {
    return false;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
  if (bVar2) {
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x10))();
    if (cVar4 == '\0') {
      return false;
    }
    return true;
  }
  return false;
}

// IsResourceLocked @ 146fb9d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::IsResourceLocked(UPathFollowingComponent *this)

{
  return *(short *)&(this->LocationWhenPaused).field0_0x0 != 0;
}

// LockResource @ 146fba3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::LockResource(UPathFollowingComponent *this,Type param_1)

{
  short sVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  
  bVar3 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SourceEnum = StaticEnum<enum_EAILockSource::Type>();
    _Init_thread_footer(&::_TSS0);
  }
  sVar1 = *(short *)&(this->LocationWhenPaused).field0_0x0;
  FAIResourceLock::SetLock
            ((FAIResourceLock *)((longlong)&(this->MoveOffset).field0_0x0 + 8),param_1);
  if (sVar1 == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      if (SourceEnum != (UEnum *)0x0) {
        pFVar2 = UEnum::GetNameStringByValue
                           (SourceEnum,&local_28,
                            (ulonglong)
                            *(byte *)((longlong)&(this->CurrentDestination).Position.field0_0x0 +
                                     0xc));
        if ((pFVar2->Data).ArrayNum == 0) {
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this[-1].CurrentNavLocation.Location.field0_0x0._s_0.Z,
                 (FName *)&LogPathFollowing.field_0x4,Log,L"Locking Move by source %s");
      if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)&this[-1].BlockDetectionDistance + 0x520))
              (&this[-1].BlockDetectionDistance,
               *(undefined4 *)((longlong)&(this->LocationWhenPaused).field0_0x0 + 0x10),0);
  }
  return;
}

// LogPathHelper @ 146fba800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
UPathFollowingComponent::LogPathHelper(AActor *param_1,FNavigationPath *param_2,AActor *param_3)

{
  int iVar1;
  USceneComponent *pUVar2;
  FBasedPosition *this;
  FVisualLogEntry *pFVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVisualLogger::Get();
  if (FVisualLogger::bIsRecording == 0) {
    return;
  }
  if (param_2 == (FNavigationPath *)0x0) {
    return;
  }
  if (param_2->bIsReady == 0) {
    return;
  }
  iVar1 = (param_2->PathPoints).ArrayNum;
  if (iVar1 < 2) {
    return;
  }
  if (param_2->bUpToDate == 0) {
    return;
  }
  this = FNavigationPath::GetPathPointLocation(param_2,(FBasedPosition *)local_a0,iVar1 - 1);
  FBasedPosition::operator*(this,(TVector<double> *)&local_e8._s_0);
  pFVar3 = FVisualLogger::GetEntryToWrite((UObject *)param_1,(FLogCategoryBase *)&LogPathFollowing);
  if ((pFVar3 != (FVisualLogEntry *)0x0) &&
     ((**(code **)(param_2->_padding_ + 0x18))(param_2,pFVar3), param_3 != (AActor *)0x0)) {
    pUVar2 = (param_3->RootComponent).field0_0x0.DebugPtr;
    local_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (pUVar2 != (USceneComponent *)0x0) {
      local_d0._s_0.Z = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_d0._0_4_ = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
      local_d0._4_4_ =
           *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      local_d0._8_4_ = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      local_d0._12_4_ =
           *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    }
    dVar4 = local_e8._s_0.X - (double)CONCAT44(local_d0._4_4_,local_d0._0_4_);
    dVar5 = local_e8._s_0.Y - (double)CONCAT44(local_d0._12_4_,local_d0._8_4_);
    uVar6 = SUB84(local_e8._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)local_e8._16_8_ >> 0x20);
    local_a8 = local_d0._s_0.Z;
    if (dVar5 * dVar5 + dVar4 * dVar4 +
        (local_e8._s_0.Z - local_d0._s_0.Z) * (local_e8._s_0.Z - local_d0._s_0.Z) <=
        __real_3ff0000000000000) goto LAB_146fba9ef;
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::LocationLogfImpl
              ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
               (TVector<double> *)&local_d0._s_0,0x1e,&FColor::Green,L"GoalActor");
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::SegmentLogfImpl
              ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
               (TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,&FColor::Green,0,
               L"");
  }
  uVar6 = SUB84(local_e8._s_0.Z,0);
  uVar7 = (undefined4)((ulonglong)local_e8._16_8_ >> 0x20);
LAB_146fba9ef:
  if (FVisualLogger::bIsRecording != 0) {
    local_a0._0_8_ = local_e8._s_0.X - __real_403e000000000000;
    local_88[0x18] = 1;
    local_a0._16_8_ = (double)CONCAT44(uVar7,uVar6) - __real_403e000000000000;
    local_88._0_8_ = local_e8._s_0.X + __real_403e000000000000;
    local_88._16_8_ = (double)CONCAT44(uVar7,uVar6) + __real_403e000000000000;
    local_a0._8_8_ = local_e8._s_0.Y - __real_403e000000000000;
    local_88._8_8_ = local_e8._s_0.Y + __real_403e000000000000;
    FVisualLogger::BoxLogfImpl
              ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
               (TBox<double> *)local_a0,&UE::Math::TMatrix<double>::Identity,&FColor::Green,false,
               L"PathEnd");
  }
  return;
}

// LogPathHelper @ 146fbaab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPathFollowingComponent::LogPathHelper
          (AActor *param_1,TSharedPtr<FNavigationPath,1> *param_2,AActor *param_3)

{
  if (param_2->Object != (FNavigationPath *)0x0) {
    LogPathHelper(param_1,param_2->Object,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnActorBump @ 146fbcb60

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
UPathFollowingComponent::OnActorBump
          (UPathFollowingComponent *this,AActor *param_1,AActor *param_2,TVector<double> *param_3,
          FHitResult *param_4)

{
  bool bVar1;
  AActor *pAVar2;
  
  if ((((this->Path).Object != (FNavigationPath *)0x0) &&
      (bVar1 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr), bVar1)) &&
     (pAVar2 = (AActor *)FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr), pAVar2 == param_2))
  {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Verbose,
                 L"Collided with goal actor");
    }
    this->bCollidedWithGoal = '\x01';
  }
  return;
}

// OnLanded @ 146fbcd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnLanded(UPathFollowingComponent *this)

{
  return;
}

// OnNavDataRegistered @ 146fbebe0

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
UPathFollowingComponent::OnNavDataRegistered(UPathFollowingComponent *this,ANavigationData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  UNavigationSystemBase *pUVar8;
  
  if (param_1 == (ANavigationData *)0x0) {
    return;
  }
  if ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) {
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
  if (!bVar3) {
    return;
  }
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x38))();
  cVar4 = (**(code **)(param_1->_padding_ + 0x7c8))(param_1,uVar5);
  if (cVar4 == '\0') {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MyNavData).field0_0x0.DebugPtr = param_1;
  pUVar6 = (UWorld *)this->_padding_;
  if ((pUVar6 == (UWorld *)0x0) &&
     (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar6 == (UWorld *)0x0)
     ) {
    pUVar8 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar8 = (pUVar6->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar8 == (UNavigationSystemBase *)0x0) {
LAB_146fbece8:
      pUVar8 = (UNavigationSystemBase *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) goto LAB_146fbece8;
    }
    if (pUVar8 != (UNavigationSystemBase *)0x0) goto LAB_146fbed19;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("NavSys",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\PathFollowingComponent.cpp"
                     ,0x2ef,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146fbed19:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar8[6].field_0x20,
             (UObject *)this);
  return;
}

// OnNavigationInitDone @ 146fbf490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnNavigationInitDone(UPathFollowingComponent *this)

{
  int iVar1;
  INavMovementInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ANavigationData *pAVar9;
  UNavigationSystemBase *pUVar10;
  undefined1 local_28 [32];
  
  pUVar5 = (UWorld *)this->_padding_;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
  if (!bVar4) {
    return;
  }
  if (pUVar5 == (UWorld *)0x0) {
    return;
  }
  pUVar10 = (pUVar5->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar10 != (UNavigationSystemBase *)0x0) {
    pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_146fbf542;
  }
  pUVar10 = (UNavigationSystemBase *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NavSys",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\PathFollowingComponent.cpp"
                     ,0x2de,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146fbf542:
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x38))();
  pcVar3 = *(code **)(*(longlong *)pUVar10 + 0x350);
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->NavMovementInterface).InterfaceInstance;
  uVar8 = (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,local_28);
  pAVar9 = (ANavigationData *)(*pcVar3)(pUVar10,uVar7,uVar8,&UE::Math::TVector<double>::ZeroVector);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar9 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar9);
  }
  (this->MyNavData).field0_0x0.DebugPtr = pAVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar10 + 8),this);
  return;
}

// OnNewPawn @ 146fbff00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnNewPawn(UPathFollowingComponent *this,APawn *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146fbff03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x508))();
  return;
}

// OnPathEvent @ 146fbff30

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
UPathFollowingComponent::OnPathEvent
          (UPathFollowingComponent *this,FNavigationPath *param_1,Type param_2)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  UObject *pUVar4;
  INavAgentInterface *pIVar5;
  TVector<double> *pTVar6;
  TQuatRotationTranslationMatrix<double> *pTVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  ushort local_118;
  undefined1 local_116;
  undefined1 local_114 [4];
  undefined1 local_110 [16];
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  TQuat<double> local_d8;
  TQuatRotationTranslationMatrix<double> local_b8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NavPathEventEnum = StaticEnum<enum_ENavPathEvent::Type>();
    _Init_thread_footer(&::_TSS0);
  }
  if (FVisualLogger::bIsRecording != 0) {
    UEnum::GetNameStringByValue(NavPathEventEnum,(FString *)local_110,(longlong)(int)param_2);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"OnPathEvent: %s");
    if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_110._0_8_);
    }
  }
  if (((param_1 != (FNavigationPath *)0x0) && ((this->Path).Object == param_1)) &&
     ((param_2 == UpdatedDueToGoalMoved ||
      ((param_2 == UpdatedDueToNavigationChanged || (param_2 == MetaPathUpdate)))))) {
    cVar3 = (**(code **)(this->_padding_ + 0x620))(this);
    if (cVar3 == '\0') {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L">> updated path was not accepcted, aborting move");
      }
      local_118 = CodeLookup[3] | 0x20;
      local_116 = 3;
      (**(code **)(this->_padding_ + 0x530))(this,&local_118);
      return;
    }
    if (((param_1->bIsPartial != 0) && (param_1->bObservingGoalActor != 0)) &&
       (pUVar4 = FWeakObjectPtr::Get(&(param_1->GoalActor).WeakPtr), pUVar4 != (UObject *)0x0)) {
      pIVar5 = FNavigationPath::GetGoalActorAsNavAgent(param_1);
      if (param_1->bObservingGoalActor == 0) {
        pUVar4 = (UObject *)0x0;
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(&(param_1->GoalActor).WeakPtr);
      }
      if (pIVar5 == (INavAgentInterface *)0x0) {
        lVar1 = *(longlong *)(pUVar4 + 0xb);
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar1 != 0) {
          uVar11 = *(double *)(lVar1 + 0x220);
          uVar8 = *(double *)(lVar1 + 0x210);
          uVar10 = *(double *)(lVar1 + 0x218);
        }
      }
      else {
        local_f8 = *(undefined4 *)&(this->MoveOffset).field0_0x0;
        uStack_f4 = *(undefined4 *)((longlong)&(this->MoveOffset).field0_0x0 + 4);
        uStack_f0 = *(undefined4 *)((longlong)&(this->MoveOffset).field0_0x0 + 8);
        uStack_ec = *(undefined4 *)((longlong)&(this->MoveOffset).field0_0x0 + 0xc);
        local_e8 = (this->MoveOffset).field0_0x0._s_0.Z;
        (**(code **)((longlong)*pIVar5 + 0x38))
                  (pIVar5,this->_padding_,&local_f8,local_110,local_114,&local_118);
        pTVar6 = (TVector<double> *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,&local_f8);
        dVar2 = __real_3ff0000000000000;
        lVar1 = *(longlong *)(pUVar4 + 0xb);
        if (lVar1 == 0) {
          local_d8.X._0_4_ = 0;
          local_d8.X._4_4_ = 0;
          local_d8.Y._0_4_ = 0;
          local_d8.Y._4_4_ = 0;
          local_d8.Z = ___xmm_3ff00000000000000000000000000000;
          local_d8.W = _UNK_15061cbc8;
        }
        else {
          local_d8.X._0_4_ = *(undefined4 *)(lVar1 + 0x1f0);
          local_d8.X._4_4_ = *(undefined4 *)(lVar1 + 500);
          local_d8.Y._0_4_ = *(undefined4 *)(lVar1 + 0x1f8);
          local_d8.Y._4_4_ = *(undefined4 *)(lVar1 + 0x1fc);
          local_d8.Z = *(double *)(lVar1 + 0x200);
          local_d8.W = *(double *)(lVar1 + 0x208);
        }
        pTVar7 = UE::Math::TQuatRotationTranslationMatrix<double>::
                 TQuatRotationTranslationMatrix<double>(&local_b8,&local_d8,pTVar6);
        auVar9._8_4_ = SUB84(local_100,0);
        auVar9._0_8_ = local_100;
        auVar9._12_4_ = (int)((ulonglong)local_100 >> 0x20);
        uVar11 = (double)local_110._0_8_ * *(double *)&pTVar7->field_0x10 +
                 *(double *)&pTVar7->field_0x30 * (double)local_110._8_8_ +
                 *(double *)&pTVar7->field_0x50 * local_100 + *(double *)&pTVar7->field_0x70 * dVar2
        ;
        uVar8 = (double)local_110._0_8_ * *(double *)pTVar7 +
                *(double *)&pTVar7->field_0x20 * (double)local_110._8_8_ +
                local_100 * *(double *)&pTVar7->field_0x40 + *(double *)&pTVar7->field_0x60 * dVar2;
        uVar10 = (double)local_110._0_8_ * *(double *)&pTVar7->field_0x8 +
                 *(double *)&pTVar7->field_0x28 * (double)local_110._8_8_ +
                 auVar9._8_8_ * *(double *)&pTVar7->field_0x48 +
                 *(double *)&pTVar7->field_0x68 * dVar2;
      }
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X = (double)uVar8;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y = (double)uVar10;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z = (double)uVar11;
    }
  }
  return;
}

// OnPathFinished @ 146fc03a0

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
UPathFollowingComponent::OnPathFinished(UPathFollowingComponent *this,FPathFollowingResult *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  UObject *this_00;
  UClass *pUVar7;
  longlong *plVar8;
  FNavigationPath *this_01;
  FMetaNavMeshPath *pFVar9;
  INavMovementInterface *pIVar10;
  undefined8 uVar11;
  UPackage *pUVar12;
  AController *pAVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  UPathFollowingComponent *local_res8;
  FAIMessage local_a8;
  FString local_90;
  FDestructionSentinel local_80;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  local_res8 = (UPathFollowingComponent *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (FVisualLogger::bIsRecording != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton == (UEnum *)0x0) {
        pUVar12 = Z_Construct_UPackage__Script_AIModule();
        Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult,(UObject *)pUVar12,
                           L"EPathFollowingResult");
      }
      ResultEnum = Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
    FPathFollowingResultFlags::ToString(&local_58,param_1->Flags);
    bVar17 = ResultEnum != (UEnum *)0x0;
    if (bVar17) {
      UEnum::GetNameStringByValue(ResultEnum,&local_68,(ulonglong)(param_1->Code).Value);
    }
    ::FString::PrintfImpl(&local_90,L"%s[%s]");
    if ((bVar17) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"OnPathFinished: %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  this_00 = FWeakObjectPtr::Get(&this->CurrentCustomLinkOb);
  if (this_00 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x68))(plVar8,this);
      (this->CurrentCustomLinkOb).ObjectIndex = 0;
      (this->CurrentCustomLinkOb).ObjectSerialNumber = 0;
    }
  }
  if ((((this->bIsUsingMetaPath != 0) && ((param_1->Flags & 1) != 0)) &&
      ((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0)) &&
     (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar17)) {
    this_01 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    pFVar9 = FNavigationPath::CastPath<FMetaNavMeshPath>(this_01);
    if (pFVar9 != (FMetaNavMeshPath *)0x0) {
      pcVar3 = *(code **)(pFVar9->_padding_ + 0x88);
      pIVar10 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
      uVar11 = (**(code **)((longlong)*pIVar10 + 0x80))(pIVar10,local_48);
      cVar5 = (*pcVar3)(pFVar9,uVar11,0);
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  if (((param_1->Flags & 1) == 0) ||
     (((this->Path).Object != (FNavigationPath *)0x0 && (((this->Path).Object)->bIsPartial != 0))))
  {
    bVar14 = 0;
  }
  else {
    bVar14 = 0x40;
  }
  this->bLastMoveReachedGoal = '\0';
  this->field_0x265 = this->field_0x265 | bVar14;
  uVar2 = (this->CurrentRequestId).RequestID;
  (**(code **)(this->_padding_ + 0x5a8))(this);
  (**(code **)(this->_padding_ + 0x630))(this);
  cVar5 = (**(code **)(this->_padding_ + 0x638))(this);
  if (cVar5 != '\0') {
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar17))
       && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                               ,0x8d,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x100))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRequestFinished,
             (FWriteAccessScope *)&local_80);
  puVar1 = &(this->OnRequestFinished).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar17 = false;
  iVar15 = *(int *)&(this->OnRequestFinished).field_0x10 + -1;
  if (-1 < iVar15) {
    lVar16 = (longlong)iVar15 << 4;
    bVar17 = false;
    do {
      if ((*(int *)&(this->OnRequestFinished).field_0x10 <= iVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnRequestFinished).field_0x8;
      if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
          (plVar8 = *(longlong **)(lVar16 + lVar4), plVar8 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar8 + 0x68))(plVar8,uVar2,param_1), cVar5 == '\0')) {
        bVar17 = true;
      }
      lVar16 = lVar16 + -0x10;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  puVar1 = &(this->OnRequestFinished).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar17) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnRequestFinished,false)
    ;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  local_a8.MessageName = UBrainComponent::AIMessage_MoveFinished;
  bVar14 = (byte)param_1->Flags & 1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_a8.Sender.ObjectIndex = 0;
  local_a8.Sender.ObjectSerialNumber = 0;
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_a8.Sender,(FObjectPtr)&local_res8);
  local_a8.MessageFlags = (uchar)param_1->Flags;
  pAVar13 = (AController *)this->_padding_;
  local_a8.RequestID.RequestID = uVar2;
  local_a8.Status.Value = bVar14;
  if (pAVar13 != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_AController_NoRegister();
    iVar15 = (int)pUVar7->_padding_;
    if ((iVar15 <= *(int *)(pAVar13->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar7->_padding_)) goto LAB_146fc07dd;
  }
  pAVar13 = (AController *)0x0;
LAB_146fc07dd:
  FAIMessage::Send(pAVar13,&local_a8);
  return;
}

// OnPathUpdated @ 146fc08a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnPathUpdated(UPathFollowingComponent *this)

{
  return;
}

// OnPathfindingQuery @ 146fc08d0

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
UPathFollowingComponent::OnPathfindingQuery
          (UPathFollowingComponent *this,FPathFindingQuery *param_1)

{
  return;
}

// OnRegister @ 146fc1db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnRegister(UPathFollowingComponent *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      TMulticastDelegateRegistration<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
      AddUObject<UPathFollowingComponent>
                ((TMulticastDelegateRegistration<void___cdecl(APawn_*),FDefaultDelegateUserPolicy> *
                 )(lVar2 + 0x330),(UPathFollowingComponent *)&stack0x00000008,(pmf_9c125055 *)this);
    }
  }
  return;
}

// OnSegmentFinished @ 146fc1e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnSegmentFinished(UPathFollowingComponent *this)

{
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Verbose,
               L"OnSegmentFinished");
    return;
  }
  return;
}

// OnStartedFalling @ 146fc1e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnStartedFalling(UPathFollowingComponent *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&(this->CurrentDestination).Position.field0_0x0 + 6);
  *pbVar1 = *pbVar1 & 0xfd;
  return;
}

// OnUnableToMove @ 146fc1ec0

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
UPathFollowingComponent::OnUnableToMove(UPathFollowingComponent *this,UObject *param_1)

{
  (**(code **)(*(longlong *)&this[-1].PreciseAcceptanceRadiusCheckStartNodeIndex + 0x518))
            (&this[-1].PreciseAcceptanceRadiusCheckStartNodeIndex,param_1,0x40,
             FAIRequestID::CurrentRequest.RequestID,0);
  return;
}

// OnWaitingPathTimeout @ 146fc2010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::OnWaitingPathTimeout(UPathFollowingComponent *this)

{
  ushort local_res8;
  undefined1 local_resa;
  
  if ((this->Status).Value == '\x01') {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Warning,
                 L"Waiting for path timeout! Aborting current move");
    }
    local_res8 = CodeLookup[5];
    local_resa = 5;
    (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
  }
  return;
}

// PauseMove @ 146fc2520

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
UPathFollowingComponent::PauseMove
          (UPathFollowingComponent *this,FAIRequestID param_1,EPathFollowingVelocityMode param_2)

{
  uint uVar1;
  double dVar2;
  bool bVar3;
  INavMovementInterface *pIVar4;
  double *pdVar5;
  FNavigationPath *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"PauseMove: RequestID(%u)");
  }
  if ((this->Status).Value == '\x02') {
    return;
  }
  uVar1 = (this->CurrentRequestId).RequestID;
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (param_1.RequestID == 0xffffffff) {
    return;
  }
  if (((param_1.RequestID != uVar1) && (param_1.RequestID != 0)) && (uVar1 != 0)) {
    return;
  }
  if (param_2 == Reset) {
    if ((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) {
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
      if ((bVar3) && (bVar3 = HasMovementAuthority(this), bVar3)) {
        pIVar4 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        (**(code **)((longlong)*pIVar4 + 0x100))(pIVar4);
      }
      goto LAB_146fc25e0;
    }
  }
  else {
LAB_146fc25e0:
    if (((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar3)) {
      pIVar4 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
      pdVar5 = (double *)(**(code **)((longlong)*pIVar4 + 0x80))(pIVar4,local_20);
      goto LAB_146fc263c;
    }
  }
  pdVar5 = &local_38;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fc263c:
  dVar2 = pdVar5[1];
  pFVar6 = (this->Path).Object;
  (this->LocationWhenPaused).field0_0x0._s_0.X = *pdVar5;
  (this->LocationWhenPaused).field0_0x0._s_0.Y = dVar2;
  (this->LocationWhenPaused).field0_0x0._s_0.Z = pdVar5[2];
  if (pFVar6 == (FNavigationPath *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    pFVar6 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    uVar7 = SUB84(pFVar6->LastUpdateTimeStamp,0);
    uVar8 = (undefined4)((ulonglong)pFVar6->LastUpdateTimeStamp >> 0x20);
  }
  this->PathTimeWhenPaused = (double)CONCAT44(uVar8,uVar7);
  (this->Status).Value = '\x02';
  (**(code **)(this->_padding_ + 0x630))(this);
  return;
}

// RequestMove @ 146fcc7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAIRequestID __thiscall
UPathFollowingComponent::RequestMove
          (UPathFollowingComponent *this,FAIMoveRequest *param_1,
          TSharedPtr<FNavigationPath,1> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  float fVar6;
  ushort uVar7;
  FWeakObjectPtr FVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  AActor *pAVar14;
  FNavigationPath *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  INavMovementInterface *pIVar18;
  longlong lVar19;
  UClass *pUVar20;
  UObject *pUVar21;
  FMetaNavMeshPath *pFVar22;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar23;
  UObject *this_00;
  double *pdVar24;
  UWorld *this_01;
  FTimerManager *this_02;
  byte bVar25;
  Type TVar26;
  TSharedPtr<FNavigationPath,1> *in_R9;
  wchar_t *pwVar27;
  undefined1 auVar28 [16];
  float fVar29;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  TSharedPtr<FNavigationPath,1> local_c8 [2];
  void *local_a8;
  FMRSWRecursiveAccessDetector *pFStack_a0;
  bool local_98;
  undefined1 *local_90;
  undefined1 local_88 [80];
  
  if (FVisualLogger::bIsRecording != 0) {
    FAIMoveRequest::ToString((FAIMoveRequest *)param_2,(FString *)local_88);
    local_c8[0].Object = in_R9->Object;
    local_c8[0].SharedReferenceCount.ReferenceController =
         (in_R9->SharedReferenceCount).ReferenceController;
    if ((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController !=
        (FNavigationPath *)0x0) {
      LOCK();
      *(atomic<int> *)
       &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->_padding_ =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->
                   _padding_ + 1);
      UNLOCK();
    }
    GetPathDescHelper((FString *)&local_a8,local_c8);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"RequestMove: Path(%s) %s");
    if (local_a8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((atomic<unsigned___int64>)local_88._0_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  if (((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) == 0) {
    pAVar14 = (AActor *)0x0;
  }
  else {
    pAVar14 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  }
  pTVar4 = (in_R9->SharedReferenceCount).ReferenceController;
  pFVar15 = in_R9->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar15 != (FNavigationPath *)0x0) {
    LogPathHelper((AActor *)this->_padding_,pFVar15,pAVar14);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  fVar6 = __real_bf800000;
  if ((this->ResourceLock).Locks != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      FAIResourceLock::GetLockPriorityName(&this->ResourceLock,(FString *)local_88);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                 L"Rejecting move request due to resource lock by %s");
      if ((atomic<unsigned___int64>)local_88._0_8_ != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
    pTVar4 = (in_R9->SharedReferenceCount).ReferenceController;
    (param_1->GoalActor).WeakPtr.ObjectIndex = FAIRequestID::InvalidRequest.RequestID;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    goto LAB_146fcd23e;
  }
  fVar29 = *(float *)((longlong)&param_2[2].SharedReferenceCount.ReferenceController + 4);
  if (fVar29 == __real_bf800000) {
    fVar29 = this->MyDefaultAcceptanceRadius;
  }
  if ((in_R9->Object == (FNavigationPath *)0x0) || (fVar29 < 0.0)) {
    if (FVisualLogger::bIsRecording != 0) {
      pwVar27 = L"RequestMove: invalid request";
      TVar26 = Log;
LAB_146fcd207:
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,TVar26,pwVar27);
    }
LAB_146fcd21a:
    (param_1->GoalActor).WeakPtr.ObjectIndex = FAIRequestID::InvalidRequest.RequestID;
  }
  else {
    cVar10 = (**(code **)(this->_padding_ + 0x618))(this,0);
    if (cVar10 == '\0') {
      if (FVisualLogger::bIsRecording != 0) {
        pwVar27 = L"RequestMove: missing movement component";
        TVar26 = Warning;
        goto LAB_146fcd207;
      }
      goto LAB_146fcd21a;
    }
    uVar3 = (this->CurrentRequestId).RequestID;
    if ((((this->Status).Value == '\x02') &&
        (pFVar15 = (this->Path).Object, pFVar15 != (FNavigationPath *)0x0)) &&
       (in_R9->Object == pFVar15)) {
      if (((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) == 0) {
        pAVar14 = (AActor *)0x0;
      }
      else {
        pAVar14 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      }
      bVar11 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                         (&this->DestinationActor,pAVar14);
      if (!bVar11) goto LAB_146fcca34;
      (**(code **)(this->_padding_ + 0x528))(this,FAIRequestID::CurrentRequest.RequestID);
      (param_1->GoalActor).WeakPtr.ObjectIndex = uVar3;
    }
    else {
LAB_146fcca34:
      FVar8 = local_res8;
      uVar7 = CodeLookup[3];
      if ((this->Status).Value != '\0') {
        this->bStopMovementOnFinish = '\0';
        local_res8.ObjectIndex._0_2_ = uVar7 | 0x80;
        local_res8._3_5_ = FVar8._3_5_;
        local_res8.ObjectIndex._2_1_ = 3;
        (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
      }
      this->bStopMovementOnFinish = '\x01';
      (**(code **)(this->_padding_ + 0x5a8))(this);
      uVar3 = NextRequestId;
      uVar9 = NextRequestId + 1;
      (this->CurrentRequestId).RequestID = NextRequestId;
      NextRequestId = uVar9;
      local_c8[0].Object = in_R9->Object;
      local_c8[0].SharedReferenceCount.ReferenceController =
           (in_R9->SharedReferenceCount).ReferenceController;
      if (local_c8[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        (local_c8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
        ;
        UNLOCK();
      }
      pTVar4 = (this->Path).SharedReferenceCount.ReferenceController;
      (this->Path).Object = local_c8[0].Object;
      (this->Path).SharedReferenceCount.ReferenceController =
           local_c8[0].SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar15 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      local_c8[0].Object = (FNavigationPath *)OnPathEvent;
      local_c8[0].SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)local_88._12_4_ << 0x20);
      local_88._0_8_ = (atomic<unsigned___int64>)0x0;
      local_88._8_8_ = (TReferenceControllerBase<1> *)0x0;
      local_88._16_8_ = (ulonglong)(uint)local_88._20_4_ << 0x20;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                 (FWriteAccessScope *)&local_a8);
      local_90 = local_88 + 8;
      puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_88 + 8));
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar16[2] = uVar17;
        *puVar16 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUPathFollowingComponent____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar16[3] = 0;
        local_res8 = (FWeakObjectPtr)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_res8);
        puVar16[4] = local_c8[0].Object;
        puVar16[5] = local_c8[0].SharedReferenceCount.ReferenceController;
      }
      if (local_98 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  (pFStack_a0,(FDestructionSentinel *)&local_a8);
      }
      TMulticastDelegateRegistration<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
      ::Add(&pFVar15->ObserverDelegate,
            (TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy>
             *)&local_res8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
      if (((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) &&
         (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar11))
      {
        pIVar18 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        lVar19 = (**(code **)((longlong)*pIVar18 + 0x90))(pIVar18);
        if (lVar19 != 0) {
          pIVar18 = TWeakInterfacePtr<INavMovementInterface>::operator->
                              (&this->NavMovementInterface);
          pAVar14 = (AActor *)(**(code **)((longlong)*pIVar18 + 0x90))(pIVar18);
          if (pAVar14 != (AActor *)0x0) {
            pUVar20 = Z_Construct_UClass_AActor_NoRegister();
            iVar12 = (int)pUVar20->_padding_;
            if ((iVar12 <= *(int *)(pAVar14->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
                &pUVar20->_padding_)) {
              pFVar15 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
              FNavigationPath::SetSourceActor(pFVar15,pAVar14);
            }
          }
        }
      }
      if ((((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) == 0) ||
         (pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2), pUVar21 == (UObject *)0x0)) {
        local_88._0_8_ = (param_2->SharedReferenceCount).ReferenceController;
        local_88._8_8_ = param_2[1].Object;
        local_88._16_8_ = param_2[1].SharedReferenceCount.ReferenceController;
      }
      else {
        if (((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) == 0) {
          pUVar21 = (UObject *)0x0;
        }
        else {
          pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
        }
        lVar19 = *(longlong *)(pUVar21 + 0xb);
        if (lVar19 == 0) {
          local_88._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_88._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_88._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          local_88._0_8_ = *(atomic<unsigned___int64> *)(lVar19 + 0x210);
          local_88._8_8_ = *(double *)(lVar19 + 0x218);
          local_88._16_8_ = *(double *)(lVar19 + 0x220);
        }
      }
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X = (double)local_88._0_8_;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y = (double)local_88._8_8_;
      (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z = (double)local_88._16_8_;
      pFVar15 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      pFVar22 = FNavigationPath::CastPath<FMetaNavMeshPath>(pFVar15);
      if (pFVar22 != (FMetaNavMeshPath *)0x0) {
        this->bIsUsingMetaPath = '\x01';
        if (((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
           (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar11
           )) {
          puVar16 = (undefined8 *)local_88;
          local_88._0_8_ = FAISystem::InvalidLocation.field0_0x0._s_0.X;
          local_88._8_8_ = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
          local_88._16_8_ = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
        }
        else {
          pIVar18 = TWeakInterfacePtr<INavMovementInterface>::operator->
                              (&this->NavMovementInterface);
          puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar18 + 0x80))(pIVar18,local_c8);
        }
        local_a8 = (void *)*puVar16;
        pFStack_a0 = (FMRSWRecursiveAccessDetector *)puVar16[1];
        _local_98 = puVar16[2];
        (**(code **)(pFVar22->_padding_ + 0x80))(pFVar22,&local_a8);
      }
      local_c8[0].Object = (this->Path).Object;
      local_c8[0].SharedReferenceCount.ReferenceController =
           (this->Path).SharedReferenceCount.ReferenceController;
      if ((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController !=
          (FNavigationPath *)0x0) {
        LOCK();
        *(atomic<int> *)
         &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->_padding_ =
             (atomic<int>)
             ((int)*(atomic<int> *)
                    &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->
                     _padding_ + 1);
        UNLOCK();
      }
      pTVar23 = ExtractNavigationFilter
                          (this,(TSharedPtr<FNavigationQueryFilter_const_,1> *)local_88,
                           (FAIMoveRequest *)param_2,local_c8);
      pUVar21 = (UObject *)0x0;
      if (&this->NavigationFilter != pTVar23) {
        (this->NavigationFilter).Object = pTVar23->Object;
        pTVar23->Object = (FNavigationQueryFilter *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->NavigationFilter).SharedReferenceCount,&pTVar23->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88._8_8_);
      this->PathTimeWhenPaused = 0.0;
      (**(code **)(this->_padding_ + 0x540))(this);
      if ((this->CurrentRequestId).RequestID == uVar3) {
        this->AcceptanceRadius = fVar29;
        bVar25 = ((byte)((uint)*(undefined4 *)&param_2[2].SharedReferenceCount.ReferenceController
                        >> 8) ^ this->bReachTestIncludesAgentRadius) & 1 ^ this->field_0x265;
        this->field_0x265 = bVar25;
        this->field_0x265 =
             ((char)(*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 9) * '\x02' ^
             bVar25) & 2 ^ bVar25;
        local_c8[0].Object = (FNavigationPath *)param_2[3].SharedReferenceCount.ReferenceController;
        local_c8[0].SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)param_2[4].Object;
        if ((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController !=
            (FNavigationPath *)0x0) {
          LOCK();
          *(atomic<int> *)
           &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->_padding_ =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      &((FNavigationPath *)local_c8[0].SharedReferenceCount.ReferenceController)->
                       _padding_ + 1);
          UNLOCK();
        }
        pTVar4 = (this->GameData).SharedReferenceCount.ReferenceController;
        (this->GameData).Object = (FMoveRequestCustomData *)local_c8[0].Object;
        (this->GameData).SharedReferenceCount.ReferenceController =
             local_c8[0].SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        this_00 = pUVar21;
        if (((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) != 0) {
          this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(this_00);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18[0] = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
          (this->DestinationActor).WeakPtr = local_res8;
          if (this_00 != (UObject *)0x0) goto LAB_146fccf08;
        }
        else {
          UE::GC::MarkAsReachable(this_00);
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
          (this->DestinationActor).WeakPtr = local_res8;
LAB_146fccf08:
          pUVar20 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
          pUVar21 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar20);
        }
        this->DestinationAgent = (INavAgentInterface *)pUVar21;
        if (pUVar21 == (UObject *)0x0) {
          pdVar24 = (double *)local_88;
          local_88._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_88._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_88._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          pdVar24 = (double *)
                    (**(code **)((longlong)*(INavAgentInterface *)pUVar21 + 0x28))
                              (pUVar21,local_88,this->_padding_);
        }
        pFVar15 = (this->Path).Object;
        dVar2 = pdVar24[1];
        (this->MoveOffset).field0_0x0._s_0.X = *pdVar24;
        (this->MoveOffset).field0_0x0._s_0.Y = dVar2;
        (this->MoveOffset).field0_0x0._s_0.Z = pdVar24[2];
        this->AcceptanceRadius = fVar29;
        if (pFVar15 != (FNavigationPath *)0x0) {
          pFVar15 = (this->Path).Object;
          if ((((((pFVar15->bIsReady != 0) && (1 < (pFVar15->PathPoints).ArrayNum)) &&
                (pFVar15->bUpToDate != 0)) &&
               ((dVar2 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X,
                __real_c7efffffe0000000 < dVar2 && (dVar2 < __real_47efffffe0000000)))) &&
              ((dVar2 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y,
               __real_c7efffffe0000000 < dVar2 &&
               ((dVar2 < __real_47efffffe0000000 &&
                (dVar2 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z,
                __real_c7efffffe0000000 < dVar2)))))) && (dVar2 < __real_47efffffe0000000)) {
            pFVar15 = TSharedPtr<FNavigationPath,1>::operator*<FNavigationPath>(&this->Path);
            iVar12 = FindPreciseAcceptanceRadiusTestsStartNodeIndex
                               (this,pFVar15,&this->OriginalMoveRequestGoalLocation);
            this->PreciseAcceptanceRadiusCheckStartNodeIndex = iVar12;
          }
        }
        (**(code **)(this->_padding_ + 0x5e8))(this);
        if (((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
           (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar11
           )) {
          pdVar24 = (double *)local_88;
          local_88._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_88._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_88._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          pIVar18 = TWeakInterfacePtr<INavMovementInterface>::operator->
                              (&this->NavMovementInterface);
          pdVar24 = (double *)(**(code **)((longlong)*pIVar18 + 0x80))(pIVar18,&local_a8);
        }
        dVar2 = *pdVar24;
        dVar5 = pdVar24[1];
        pTVar4 = (TReferenceControllerBase<1> *)pdVar24[2];
        pFVar15 = TSharedPtr<FNavigationPath,1>::operator->(in_R9);
        FNavigationPath::GetDestinationLocation(pFVar15,(TVector<double> *)local_88);
        local_88._16_8_ = pTVar4;
        if (FVisualLogger::bIsRecording != 0) {
          auVar28._0_8_ =
               ((double)local_88._8_8_ - dVar5) * ((double)local_88._8_8_ - dVar5) +
               ((double)local_88._0_8_ - dVar2) * ((double)local_88._0_8_ - dVar2);
          auVar28._8_8_ = 0;
          sqrtpd(auVar28,auVar28);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                     L"RequestMove: accepted, ID(%u) dist2D(%.0f) distZ(%.0f)");
        }
        if ((this->bIsUsingMetaPath == 0) && ((this->Path).Object != (FNavigationPath *)0x0)) {
          pFVar15 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
          if ((pFVar15->bIsReady != 0) &&
             ((1 < (pFVar15->PathPoints).ArrayNum && (pFVar15->bUpToDate != 0)))) {
            SetStatus(this,Moving);
            uVar13 = (**(code **)(this->_padding_ + 0x608))(this,in_R9->Object);
            (**(code **)(this->_padding_ + 0x5c0))(this,uVar13);
            (param_1->GoalActor).WeakPtr.ObjectIndex = uVar3;
            goto LAB_146fcd224;
          }
        }
        SetStatus(this,Waiting);
        this_01 = (UWorld *)this->_padding_;
        if (this_01 == (UWorld *)0x0) {
          this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        this_02 = UWorld::GetTimerManager(this_01);
        local_c8[0].Object = (FNavigationPath *)_vcall__1576__flat______;
        local_c8[0].SharedReferenceCount.ReferenceController =
             local_c8[0].SharedReferenceCount.ReferenceController & 0xffffffff00000000;
        local_88._0_8_ = _vcall__1576__flat______;
        local_88._8_8_ = local_c8[0].SharedReferenceCount.ReferenceController;
        FTimerManager::SetTimer<UPathFollowingComponent>
                  (this_02,&this->WaitingForPathTimer,this,(pmf_b679f9f2 *)local_88,
                   this->WaitingTimeout,false,fVar6);
      }
      (param_1->GoalActor).WeakPtr.ObjectIndex = uVar3;
    }
  }
LAB_146fcd224:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((in_R9->SharedReferenceCount).ReferenceController);
LAB_146fcd23e:
  return (FAIRequestID)(uint)param_1;
}

// RequestMoveWithImmediateFinish @ 146fcd260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAIRequestID __thiscall
UPathFollowingComponent::RequestMoveWithImmediateFinish
          (UPathFollowingComponent *this,Type param_1,EPathFollowingVelocityMode param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 in_register_00000014;
  undefined3 in_register_00000081;
  char in_R9B;
  ushort local_res20;
  EPathFollowingVelocityMode local_res22;
  
  this->bStopMovementOnFinish = '\0';
  bVar2 = 0;
  if (in_R9B == '\0') {
    bVar2 = 0x80;
  }
  this->field_0x265 = this->field_0x265 | bVar2;
  if ((this->Status).Value != '\0') {
    local_res20 = CodeLookup[3] | 0x80;
    local_res22 = 3;
    (**(code **)(this->_padding_ + 0x530))(this,&local_res20);
  }
  *(uint *)CONCAT44(in_register_00000014,param_1) = NextRequestId;
  uVar1 = NextRequestId + 1;
  (this->CurrentRequestId).RequestID = NextRequestId;
  NextRequestId = uVar1;
  local_res20 = CodeLookup[CONCAT31(in_register_00000081,param_2)];
  local_res22 = param_2;
  (**(code **)(this->_padding_ + 0x530))(this,&local_res20);
  return (FAIRequestID)param_1;
}

// Reset @ 146fcd750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::Reset(UPathFollowingComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FTimerHandle *pFVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar7;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->DecelerationSegmentIndex = -1;
  (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
  (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
  this->bMoveSegmentIsUsingCustomLinkReachCondition = '\0';
  this->MoveSegmentStartIndex = 0;
  this->MoveSegmentStartRef = 0;
  this->MoveSegmentEndRef = 0;
  piVar1 = &(this->LocationSamples).ArrayMax;
  (this->LocationSamples).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->LocationSamples).AllocatorInstance,0,piVar1);
  }
  this->LastSampleTime = 0.0;
  this->NextSampleIdx = 0;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Path != (TSharedPtr<FNavigationPath,1> *)&local_28) {
    (this->Path).Object = (FNavigationPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Path).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GameData != (TSharedPtr<FMoveRequestCustomData,1> *)&local_18) {
    (this->GameData).Object = (FMoveRequestCustomData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (this->DestinationActor).WeakPtr = (FWeakObjectPtr)0x0;
  FBasedPosition::Clear(&this->CurrentDestination);
  this->bIsUsingMetaPath = '\0';
  this->bWalkingNavLinkStart = '\0';
  this->AcceptanceRadius = this->MyDefaultAcceptanceRadius;
  this->PreciseAcceptanceRadiusCheckStartNodeIndex = -1;
  puVar3 = &this->field_0x265;
  this->bReachTestIncludesAgentRadius = '\x01';
  uVar6 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  this->bCollidedWithGoal = '\0';
  this->bReachTestIncludesGoalRadius = '\x01';
  (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X =
       FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y = (double)uVar6;
  (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z =
       FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->CurrentRequestId).RequestID = FAIRequestID::InvalidRequest.RequestID;
  (this->Status).Value = '\0';
  if ((this->bTickComponentOnlyWhenMoving != '\0') && ((this->_padding_ & 0x100000) != 0)) {
    (**(code **)(this->_padding_ + 0x2c0))(this);
  }
  pFVar4 = &this->WaitingForPathTimer;
  if (pFVar4->Handle != 0) {
    this_00 = (UWorld *)this->_padding_;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_01 = UWorld::GetTimerManager(this_00);
    pFVar7 = FTimerManager::FindTimer(this_01,pFVar4);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)pFVar4->Handle);
    }
    pFVar4->Handle = 0;
  }
  return;
}

// ResetBlockDetectionData @ 146fcd930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::ResetBlockDetectionData(UPathFollowingComponent *this)

{
  int *piVar1;
  
  this->LastSampleTime = 0.0;
  this->NextSampleIdx = 0;
  piVar1 = &(this->LocationSamples).ArrayMax;
  (this->LocationSamples).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->LocationSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetMoveSegmentCustomLinkCache @ 146fcd980

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
UPathFollowingComponent::ResetMoveSegmentCustomLinkCache(UPathFollowingComponent *this)

{
  this->bMoveSegmentIsUsingCustomLinkReachCondition = '\0';
  (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
  (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
  return;
}

// ResumeMove @ 146fce040

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
UPathFollowingComponent::ResumeMove(UPathFollowingComponent *this,FAIRequestID param_1)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  FNavigationPath *pFVar7;
  UObject *pUVar8;
  ushort local_res8;
  undefined1 local_resa;
  
  uVar2 = (this->CurrentRequestId).RequestID;
  if (((uVar2 == 0xffffffff) || (param_1.RequestID == 0xffffffff)) ||
     ((param_1.RequestID != uVar2 && ((param_1.RequestID != 0 && (uVar2 != 0)))))) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                 L"ResumeMove: RequestID(%u) is neither \'AnyRequest\' not CurrentRequestId(%u). Ignoring."
                );
      return;
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                 L"ResumeMove: RequestID(%u)");
    }
    cVar4 = (**(code **)(this->_padding_ + 0x5b8))(this);
    cVar5 = (**(code **)(this->_padding_ + 0x600))(this);
    if (cVar5 == '\0') {
      if ((this->Path).Object != (FNavigationPath *)0x0) {
        pFVar7 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
        if (((pFVar7->bIsReady != 0) && (1 < (pFVar7->PathPoints).ArrayNum)) &&
           (pFVar7->bUpToDate != 0)) {
          pFVar7 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
          pUVar8 = FWeakObjectPtr::Get(&(pFVar7->NavigationDataUsed).WeakPtr);
          if (pUVar8 == (UObject *)0x0) {
            SetStatus(this,Moving);
            goto LAB_146fce1ba;
          }
        }
      }
      local_res8 = CodeLookup[2];
      local_resa = 2;
      (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
      return;
    }
    (this->Status).Value = '\x03';
    if ((this->bTickComponentOnlyWhenMoving != '\0') && ((this->_padding_ & 0x100000) == 0)) {
      (**(code **)(this->_padding_ + 0x2b8))(this,0);
    }
    if ((this->Path).Object == (FNavigationPath *)0x0) {
      bVar3 = false;
    }
    else {
      pFVar7 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      bVar3 = this->PathTimeWhenPaused < pFVar7->LastUpdateTimeStamp;
    }
    if ((cVar4 == '\0') && (!bVar3)) {
LAB_146fce1ba:
                    /* WARNING: Could not recover jumptable at 0x000146fce1cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x630))(this);
      return;
    }
    uVar6 = (**(code **)(this->_padding_ + 0x608))(this,(this->Path).Object);
    (**(code **)(this->_padding_ + 0x5c0))(this,uVar6);
  }
  return;
}

// SetAcceptanceRadius @ 146fce990

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
UPathFollowingComponent::SetAcceptanceRadius(UPathFollowingComponent *this,float param_1)

{
  double dVar1;
  int iVar2;
  FNavigationPath *pFVar3;
  
  pFVar3 = (this->Path).Object;
  this->AcceptanceRadius = param_1;
  if ((((((pFVar3 != (FNavigationPath *)0x0) && (pFVar3->bIsReady != 0)) &&
        (1 < (pFVar3->PathPoints).ArrayNum)) &&
       ((pFVar3->bUpToDate != 0 &&
        (dVar1 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X,
        __real_c7efffffe0000000 < dVar1)))) &&
      ((dVar1 < __real_47efffffe0000000 &&
       ((dVar1 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y,
        __real_c7efffffe0000000 < dVar1 && (dVar1 < __real_47efffffe0000000)))))) &&
     ((dVar1 = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z,
      __real_c7efffffe0000000 < dVar1 && (dVar1 < __real_47efffffe0000000)))) {
    pFVar3 = TSharedPtr<FNavigationPath,1>::operator*<FNavigationPath>(&this->Path);
    iVar2 = FindPreciseAcceptanceRadiusTestsStartNodeIndex
                      (this,pFVar3,&this->OriginalMoveRequestGoalLocation);
    this->PreciseAcceptanceRadiusCheckStartNodeIndex = iVar2;
  }
  return;
}

// SetBlockDetection @ 146fcf9c0

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
UPathFollowingComponent::SetBlockDetection
          (UPathFollowingComponent *this,float param_1,float param_2,int param_3)

{
  int *piVar1;
  
  this->BlockDetectionSampleCount = param_3;
  this->LastSampleTime = 0.0;
  this->NextSampleIdx = 0;
  this->BlockDetectionDistance = param_1;
  this->BlockDetectionInterval = param_2;
  piVar1 = &(this->LocationSamples).ArrayMax;
  (this->LocationSamples).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->LocationSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetBlockDetectionState @ 146fcfa30

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
UPathFollowingComponent::SetBlockDetectionState(UPathFollowingComponent *this,bool param_1)

{
  int *piVar1;
  
  this->bUseBlockDetection = '\0';
  this->field_0x265 = this->field_0x265 | param_1 << 4;
  this->LastSampleTime = 0.0;
  this->NextSampleIdx = 0;
  piVar1 = &(this->LocationSamples).ArrayMax;
  (this->LocationSamples).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->LocationSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetDestinationActor @ 146fd0000

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
UPathFollowingComponent::SetDestinationActor(UPathFollowingComponent *this,AActor *param_1)

{
  double dVar1;
  UClass *pUVar2;
  INavAgentInterface *pIVar3;
  double *pdVar4;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  double local_28;
  double dStack_20;
  double local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pIVar3 = (INavAgentInterface *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (AActor *)0x0)) {
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->DestinationActor).WeakPtr = local_res8;
    if (param_1 == (AActor *)0x0) goto LAB_146fd00a1;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->DestinationActor).WeakPtr = local_res8;
  }
  pUVar2 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
LAB_146fd00a1:
  this->DestinationAgent = pIVar3;
  if (pIVar3 == (INavAgentInterface *)0x0) {
    pdVar4 = &local_28;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar4 = (double *)(**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,&local_28,this->_padding_);
  }
  dVar1 = pdVar4[1];
  (this->MoveOffset).field0_0x0._s_0.X = *pdVar4;
  (this->MoveOffset).field0_0x0._s_0.Y = dVar1;
  (this->MoveOffset).field0_0x0._s_0.Z = pdVar4[2];
  return;
}

// SetLastMoveAtGoal @ 146fd05c0

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
UPathFollowingComponent::SetLastMoveAtGoal(UPathFollowingComponent *this,bool param_1)

{
  if ((this->Status).Value == '\0') {
    this->bLastMoveReachedGoal = '\0';
    this->field_0x265 = this->field_0x265 | param_1 << 6;
  }
  return;
}

// SetMoveSegment @ 146fd11d0

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

void __thiscall UPathFollowingComponent::SetMoveSegment(UPathFollowingComponent *this,int param_1)

{
  float fVar1;
  byte bVar2;
  FNavigationPath *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  UClass *pUVar14;
  FBasedPosition *pFVar15;
  TVector<double> *pTVar16;
  UWorld *pUVar17;
  INavLinkCustomInterface *pIVar18;
  longlong lVar19;
  UNavigationSystemV1 *pUVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  UObject *local_res8;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  FBasedPosition local_188;
  FBasedPosition local_120;
  FBasedPosition local_b8;
  
  pUVar14 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar14);
  }
  fVar23 = *(float *)&(pUVar14->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x24;
  pUVar14 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar14);
  }
  this_00 = (this->Path).Object;
  fVar1 = *(float *)((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr + 5);
  if (this_00 == (FNavigationPath *)0x0) {
    return;
  }
  if (param_1 < 0) {
    return;
  }
  iVar13 = (this_00->PathPoints).ArrayNum;
  if (iVar13 <= param_1) {
    return;
  }
  if (iVar13 <= param_1 + 1) {
    return;
  }
  iVar13 = (**(code **)(this->_padding_ + 0x610))(this,param_1);
  this->MoveSegmentEndIndex = iVar13;
  this->MoveSegmentStartIndex = param_1;
  if (((this_00->PathPoints).ArrayNum <= param_1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = this->MoveSegmentEndIndex;
  lVar19 = (longlong)(int)uVar21;
  pFVar3 = (this_00->PathPoints).AllocatorInstance.Data;
  uVar22 = 0;
  if ((int)uVar21 < (this_00->PathPoints).ArrayNum) {
    uVar22 = ~uVar21 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this_00->PathPoints).AllocatorInstance.Data;
  this->MoveSegmentStartRef = *(ulong64 *)(pFVar3 + (longlong)param_1 * 0x30 + 0x18);
  this->MoveSegmentEndRef = *(ulong64 *)(pFVar4 + lVar19 * 0x30 + 0x18);
  pFVar15 = FNavigationPath::GetPathPointLocation(this_00,&local_188,this->MoveSegmentEndIndex);
  FBasedPosition::operator=(&this->CurrentDestination,pFVar15);
  pFVar15 = FNavigationPath::GetPathPointLocation(this_00,&local_120,this->MoveSegmentStartIndex);
  FBasedPosition::operator*(pFVar15,(TVector<double> *)&local_210._s_0);
  FBasedPosition::operator*(&this->CurrentDestination,(TVector<double> *)&local_228._s_0);
  auVar26 = ___xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = local_210._s_0.X - (double)CONCAT44(local_228._4_4_,local_228._0_4_);
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = SUB84(dVar6,0) & uVar22;
  uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)((ulonglong)dVar6 >> 0x20) & uVar25;
  if (((((double)CONCAT44(uVar24,uVar21) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar24,uVar21) == __real_3f1a36e2e0000000) &&
       (uVar21 = SUB84(local_210._s_0.Y - local_228._s_0.Y,0) & uVar22,
       uVar24 = (uint)((ulonglong)(local_210._s_0.Y - local_228._s_0.Y) >> 0x20) & uVar25,
       (double)CONCAT44(uVar24,uVar21) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar24,uVar21) == __real_3f1a36e2e0000000)) &&
      (uVar22 = SUB84(local_210._s_0.Z - local_228._s_0.Z,0) & uVar22,
      uVar25 = (uint)((ulonglong)(local_210._s_0.Z - local_228._s_0.Z) >> 0x20) & uVar25,
      (double)CONCAT44(uVar25,uVar22) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar25,uVar22) == __real_3f1a36e2e0000000)) &&
     ((uVar21 = this->MoveSegmentEndIndex + 1, -1 < (int)uVar21 &&
      ((int)uVar21 < (this_00->PathPoints).ArrayNum)))) {
    this->MoveSegmentEndIndex = uVar21;
    pFVar15 = FNavigationPath::GetPathPointLocation(this_00,&local_b8,uVar21);
    FBasedPosition::operator=(&this->CurrentDestination,pFVar15);
    pTVar16 = FBasedPosition::operator*(&this->CurrentDestination,&local_1b8);
    local_228._0_4_ = *(undefined4 *)&pTVar16->field0_0x0;
    local_228._4_4_ = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 4);
    local_228._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
    auVar7._4_8_ = auVar26._8_8_;
    auVar7._0_4_ = local_228._4_4_;
    auVar26._0_8_ = auVar7._0_8_ << 0x20;
    auVar26._8_4_ = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 8);
    auVar26._12_4_ = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 0xc);
    local_228._s_0.Y = (double)auVar26._8_8_;
  }
  if (*(ulong64 *)(pFVar4 + lVar19 * 0x30 + 0x28) == FNavLinkId::Invalid.Id) {
    (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
    (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
    this->bMoveSegmentIsUsingCustomLinkReachCondition = '\0';
  }
  else {
    pUVar17 = (UWorld *)this->_padding_;
    if (((pUVar17 == (UWorld *)0x0) &&
        (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar17 == (UWorld *)0x0)) ||
       (pUVar20 = (UNavigationSystemV1 *)(pUVar17->NavigationSystem).field0_0x0.DebugPtr,
       pUVar20 == (UNavigationSystemV1 *)0x0)) {
LAB_146fd14d5:
      pUVar20 = (UNavigationSystemV1 *)0x0;
    }
    else {
      pUVar14 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar13 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar14->_padding_)) goto LAB_146fd14d5;
    }
    pIVar18 = UNavigationSystemV1::GetCustomLink
                        (pUVar20,(FNavLinkId)*(ulong64 *)(pFVar4 + lVar19 * 0x30 + 0x28));
    if (pIVar18 == (INavLinkCustomInterface *)0x0) {
      (this->MoveSegmentCustomLinkOb).ObjectIndex = 0;
      (this->MoveSegmentCustomLinkOb).ObjectSerialNumber = 0;
      this->bMoveSegmentIsUsingCustomLinkReachCondition = '\0';
    }
    else {
      local_res8 = (UObject *)(**(code **)((longlong)*pIVar18 + 8))(pIVar18);
      if (local_res8 == (UObject *)0x0) {
LAB_146fd1528:
        local_res8 = (UObject *)0x0;
      }
      else {
        pUVar14 = Z_Construct_UClass_UObject_NoRegister();
        iVar13 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)&local_res8->field_0x10 + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar14->_padding_)) goto LAB_146fd1528;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(&this->MoveSegmentCustomLinkOb,(FObjectPtr)&local_res8);
      cVar12 = (**(code **)((longlong)*pIVar18 + 0x70))(pIVar18,this);
      this->field_0x266 = (cVar12 << 3 ^ this->field_0x266) & 8U ^ this->field_0x266;
    }
  }
  if ((this_00->PathPoints).ArrayNum == this->MoveSegmentEndIndex + 1) {
    local_1d8._s_0.X = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.X;
    local_1d8._s_0.Y = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Y;
    local_1d8._s_0.Z = (this->OriginalMoveRequestGoalLocation).field0_0x0._s_0.Z;
    fVar23 = GetFinalAcceptanceRadius
                       (this,this_00,(TVector<double> *)&local_1d8._s_0,(TVector<double> *)0x0);
  }
  else if (((byte)pFVar4[lVar19 * 0x30 + 0x20] & 4) != 0) {
    fVar23 = fVar1;
  }
  dVar6 = __real_3e45798ee0000000;
  local_1f8._s_0.X = (double)CONCAT44(local_228._4_4_,local_228._0_4_) - local_210._s_0.X;
  local_1f8._s_0.Y = local_228._s_0.Y - local_210._s_0.Y;
  local_1f8._s_0.Z = local_228._s_0.Z - local_210._s_0.Z;
  this->CurrentAcceptanceRadius = fVar23;
  pTVar16 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_1f8._s_0,&local_1a0,dVar6,
                       &UE::Math::TVector<double>::ZeroVector);
  uVar8 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 4);
  uVar9 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 8);
  uVar10 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 0xc);
  *(undefined4 *)&(this->MoveSegmentDirection).field0_0x0 = *(undefined4 *)&pTVar16->field0_0x0;
  *(undefined4 *)((longlong)&(this->MoveSegmentDirection).field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&(this->MoveSegmentDirection).field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&(this->MoveSegmentDirection).field0_0x0 + 0xc) = uVar10;
  bVar2 = this->field_0x266;
  (this->MoveSegmentDirection).field0_0x0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
  this->field_0x266 = ((byte)pFVar3[(longlong)param_1 * 0x30 + 0x20] >> 1 ^ bVar2) & 2 ^ bVar2;
  if (*(ulong64 *)(pFVar3 + (longlong)param_1 * 0x30 + 0x28) == FNavLinkId::Invalid.Id)
  goto LAB_146fd170e;
  pUVar17 = (UWorld *)this->_padding_;
  if (((pUVar17 == (UWorld *)0x0) &&
      (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar17 == (UWorld *)0x0)) ||
     (pUVar20 = (UNavigationSystemV1 *)(pUVar17->NavigationSystem).field0_0x0.DebugPtr,
     pUVar20 == (UNavigationSystemV1 *)0x0)) {
LAB_146fd16e7:
    pUVar20 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar13 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar14->_padding_)) goto LAB_146fd16e7;
  }
  pIVar18 = UNavigationSystemV1::GetCustomLink
                      (pUVar20,(FNavLinkId)*(ulong64 *)(pFVar3 + (longlong)param_1 * 0x30 + 0x28));
  (**(code **)(this->_padding_ + 0x5d8))(this,pIVar18,&local_228);
LAB_146fd170e:
  (**(code **)(this->_padding_ + 0x630))(this);
  (**(code **)(this->_padding_ + 0x5e8))(this);
  return;
}

// SetMovementComponent @ 146fd1760

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
UPathFollowingComponent::SetMovementComponent
          (UPathFollowingComponent *this,UNavMovementComponent *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UClass *pUVar1;
  void *pvVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x550);
  if (param_1 == (UNavMovementComponent *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pUVar1 = Z_Construct_UClass_UNavMovementInterface_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146fd17b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pvVar2);
  return;
}

// SetNavMovementInterface @ 146fd1950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPathFollowingComponent::SetNavMovementInterface
          (UPathFollowingComponent *this,INavMovementInterface *param_1)

{
  INavMovementInterface **ppIVar1;
  int iVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  UObject *pUVar6;
  INavMovementInterface *pIVar7;
  longlong lVar8;
  UClass *pUVar9;
  void *pvVar10;
  UWorld *pUVar11;
  undefined8 uVar12;
  ANavigationData *pAVar13;
  UObject *pUVar14;
  UFunction *pUVar15;
  UObject *pUVar16;
  <lambda_1> local_res8 [8];
  undefined8 local_res10;
  FName local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_108;
  INavMovementInterface *pIStack_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName local_e0;
  UPathFollowingComponent *local_d8;
  FName *local_d0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_c8;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [48];
  FReadAccessScope local_70;
  undefined1 local_58 [32];
  
  pUVar14 = (UObject *)0x0;
  if (param_1 == (INavMovementInterface *)0x0) {
    if (((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) &&
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar5)) {
      pUVar16 = (UObject *)&this->_padding_;
      if (this == (UPathFollowingComponent *)0x0) {
        pUVar16 = pUVar14;
      }
      if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar5))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                ,0x8d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = (UObject *)
               (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x50))();
      if (pUVar6 != pUVar16) goto LAB_146fd1a24;
      pIVar7 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
      (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,0);
    }
    local_108.ObjectIndex = 0;
    local_108.ObjectSerialNumber = 0;
    pIStack_100 = (INavMovementInterface *)0x0;
LAB_146fd1a4b:
    local_res20 = pUVar14;
  }
  else {
LAB_146fd1a24:
    local_108.ObjectIndex = 0;
    local_108.ObjectSerialNumber = 0;
    pIStack_100 = (INavMovementInterface *)0x0;
    if ((param_1 == (INavMovementInterface *)0x0) ||
       (local_res20 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1),
       local_res20 == (UObject *)0x0)) goto LAB_146fd1a4b;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_res20);
  bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_108,(void *)0x0);
  if (!bVar5) {
    pIStack_100 = param_1;
  }
  ppIVar1 = &(this->NavMovementInterface).InterfaceInstance;
  (this->NavMovementInterface).ObjectInstance.WeakPtr = local_108;
  (this->NavMovementInterface).InterfaceInstance = pIStack_100;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  if (*ppIVar1 == (INavMovementInterface *)0x0) {
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
  if (!bVar5) {
    return;
  }
  if (((*ppIVar1 == (INavMovementInterface *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (**(code **)((longlong)**ppIVar1 + 0x38))();
  this->MyDefaultAcceptanceRadius = *(float *)(lVar8 + 4) * __real_3dcccccd;
  if (((*ppIVar1 == (INavMovementInterface *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar7 = *ppIVar1;
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x40);
  pUVar9 = Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
  pvVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar9);
  (*pcVar3)(pIVar7,pvVar10);
  pUVar11 = (UWorld *)this->_padding_;
  if (((pUVar11 == (UWorld *)0x0) &&
      (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar11 == (UWorld *)0x0)) ||
     (pUVar16 = (UObject *)(pUVar11->NavigationSystem).field0_0x0.DebugPtr,
     pUVar16 == (UObject *)0x0)) {
LAB_146fd1bd5:
    pUVar16 = pUVar14;
  }
  else {
    pUVar9 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) goto LAB_146fd1bd5;
  }
  if (pUVar16 == (UObject *)0x0) {
    return;
  }
  pcVar3 = *(code **)(*(longlong *)pUVar16 + 0x350);
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar7 = (this->NavMovementInterface).InterfaceInstance;
  uVar12 = (**(code **)((longlong)*pIVar7 + 0x78))(pIVar7,local_58);
  pAVar13 = (ANavigationData *)
            (*pcVar3)(pUVar16,lVar8,uVar12,&UE::Math::TVector<double>::ZeroVector);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar13 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar13);
    (this->MyNavData).field0_0x0.DebugPtr = pAVar13;
    return;
  }
  (this->MyNavData).field0_0x0.DebugPtr = pAVar13;
  if (pAVar13 != (ANavigationData *)0x0) {
    return;
  }
  if ((pUVar16[0x1f].field_0x22 & 4) == 0) {
    pIStack_100 = (INavMovementInterface *)((ulonglong)pIStack_100 & 0xffffffff00000000);
    local_108 = (FWeakObjectPtr)_vcall__1600__flat______;
    local_a0._8_8_ = _vcall__1600__flat______;
    local_a0._16_8_ = pIStack_100;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UPathFollowingComponent>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (pUVar16 + 8),(UPathFollowingComponent *)local_a0,(pmf_b679f9f2 *)this);
    return;
  }
  pUVar6 = (UObject *)strstr("&UPathFollowingComponent::OnNavDataRegistered","::");
  while (pUVar4 = pUVar6, pUVar4 != (UObject *)0x0) {
    pUVar6 = (UObject *)strstr(&pUVar4->field_0x1,"::");
    pUVar14 = pUVar4;
  }
  if (((pUVar14 == (UObject *)0x0) || (pUVar14->field_0x2 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_e0,&pUVar14->field_0x2);
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_res18 = local_e0;
  local_d8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_d8);
  local_e8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_f8,(FReadAccessScope *)(local_a0 + 0x18));
  local_res10 = 0;
  if ((local_e8 == (FName)0x0) ||
     (pUVar14 = FWeakObjectPtr::Get(&local_f0), pUVar14 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x18));
  }
  else {
    pUVar15 = UObject::FindFunction(pUVar14,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x18));
    if (pUVar15 != (UFunction *)0x0) goto LAB_146fd1dfc;
  }
  local_d0 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,ANavigationData_*>::
  __Internal_BindDynamic<UPathFollowingComponent>'::__l2::<lambda_1>::operator()(&local_d0);
LAB_146fd1dfc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_70);
  local_c8.Object = local_f0;
  local_c8.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[6].field_0x20,
             (FWriteAccessScope *)&local_b8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(pUVar16 + 7),&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(pUVar16 + 7),local_res8,Default);
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  return;
}

// SetPreciseReachThreshold @ 146fd2190

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
UPathFollowingComponent::SetPreciseReachThreshold
          (UPathFollowingComponent *this,float param_1,float param_2)

{
  this->MinAgentRadiusPct = param_1;
  this->MinAgentHalfHeightPct = param_2;
  return;
}

// SetStatus @ 146fd2620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::SetStatus(UPathFollowingComponent *this,Type param_1)

{
  undefined1 uVar1;
  byte bVar2;
  
  (this->Status).Value = (uchar)param_1;
  if (this->bTickComponentOnlyWhenMoving != '\0') {
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2) & 0x10;
    if ((uchar)param_1 == '\x03') {
      if (bVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146fd2646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x2b8))(this,0);
        return;
      }
    }
    else if (bVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146fd2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2c0))();
      return;
    }
  }
  return;
}

// ShouldCheckPathOnResume @ 146fd2e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::ShouldCheckPathOnResume(UPathFollowingComponent *this)

{
  TWeakInterfacePtr<INavMovementInterface> *this_00;
  INavMovementInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_res8 [2];
  float local_res10 [2];
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = &this->NavMovementInterface;
  bVar3 = TWeakInterfacePtr<INavMovementInterface>::operator==(this_00,(void *)0x0);
  if (!bVar3) {
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->NavMovementInterface).InterfaceInstance;
    (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,local_res8,local_res10);
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->NavMovementInterface).InterfaceInstance;
    (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,&local_28);
    local_28 = local_28 - (this->LocationWhenPaused).field0_0x0._s_0.X;
    local_20 = local_20 - (this->LocationWhenPaused).field0_0x0._s_0.Y;
    if (local_20 * local_20 + local_28 * local_28 < (double)(local_res8[0] * local_res8[0])) {
      local_18 = local_18 - (this->LocationWhenPaused).field0_0x0._s_0.Z;
      return (double)(local_res10[0] * __real_3f000000) <=
             (double)CONCAT44((uint)((ulonglong)local_18 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    }
  }
  return true;
}

// ShouldStopMovementOnPathFinished @ 146fd2fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::ShouldStopMovementOnPathFinished(UPathFollowingComponent *this)

{
  bool bVar1;
  INavMovementInterface *this_00;
  
  if (((bool)this->bStopMovementOnFinish) &&
     ((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0)) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface);
    if (bVar1) {
      bVar1 = HasMovementAuthority(this);
      if (bVar1) {
        this_00 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
        bVar1 = INavMovementInterface::UseAccelerationForPathFollowing(this_00);
        if (!bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// StartUsingCustomLink @ 146fd3220

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
UPathFollowingComponent::StartUsingCustomLink
          (UPathFollowingComponent *this,INavLinkCustomInterface *param_1,TVector<double> *param_2)

{
  FWeakObjectPtr *this_00;
  char cVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UObject *local_res8;
  FString local_28;
  
  this_00 = &this->CurrentCustomLinkOb;
  pUVar2 = FWeakObjectPtr::Get(this_00);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar2,pUVar3);
    if (plVar4 != (longlong *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        pUVar2 = FWeakObjectPtr::Get(this_00);
        if (pUVar2 == (UObject *)0x0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_28,(UObject *)0x0);
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Force finish custom move using navlink: %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*plVar4 + 0x68))(plVar4,this);
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
    }
  }
  if ((param_1 != (INavLinkCustomInterface *)0x0) &&
     (pUVar2 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1), pUVar2 != (UObject *)0x0))
  {
    local_res8 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    cVar1 = (**(code **)((longlong)*param_1 + 0x60))(param_1,this);
    if (FVisualLogger::bIsRecording != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar2,&local_28,(UObject *)0x0);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                 L"%s navlink: %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (cVar1 == '\0') {
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    }
  }
  return;
}

// StaticRegisterNativesUPathFollowingComponent @ 146fd3740

void __cdecl UPathFollowingComponent::StaticRegisterNativesUPathFollowingComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPathFollowingComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146fd95d0

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
UPathFollowingComponent::TickComponent
          (UPathFollowingComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->Status).Value == '\x03') {
    (**(code **)(this->_padding_ + 0x5d0))(this);
    if ((this->Status).Value == '\x03') {
      (**(code **)(this->_padding_ + 0x5c8))(this,param_1);
    }
  }
  return;
}

// UpdateBlockDetection @ 146fdf720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPathFollowingComponent::UpdateBlockDetection(UPathFollowingComponent *this)

{
  int *piVar1;
  TArray<FBasedPosition,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UWorld *pUVar9;
  FScriptContainerElement *pFVar10;
  INavMovementInterface *pIVar11;
  FBasedPosition *pFVar12;
  uint uVar13;
  undefined1 local_98 [128];
  
  pUVar9 = (UWorld *)this->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  dVar3 = pUVar9->TimeSeconds;
  if ((((this->bUseBlockDetection == '\0') ||
       ((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0)) ||
      (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar6)) ||
     ((dVar3 <= (double)this->BlockDetectionInterval + this->LastSampleTime ||
      (this->BlockDetectionSampleCount < 1)))) {
    bVar6 = false;
  }
  else {
    piVar1 = &(this->LocationSamples).ArrayNum;
    pTVar2 = &this->LocationSamples;
    this->LastSampleTime = dVar3;
    if (*piVar1 == this->NextSampleIdx) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x68,8,1,&pTVar2->AllocatorInstance,piVar1,
                         &(this->LocationSamples).ArrayMax);
      pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x68;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)(pFVar10 + 8) = 0;
      *(undefined8 *)(pFVar10 + 0x10) = 0;
      *(undefined8 *)(pFVar10 + 0x18) = 0;
      *(undefined8 *)(pFVar10 + 0x20) = 0;
      *(undefined8 *)(pFVar10 + 0x28) = 0;
      *(undefined8 *)(pFVar10 + 0x30) = 0;
      *(undefined8 *)(pFVar10 + 0x38) = 0;
      *(undefined8 *)(pFVar10 + 0x40) = 0;
      *(undefined8 *)(pFVar10 + 0x48) = 0;
      *(undefined8 *)(pFVar10 + 0x50) = 0;
      *(undefined8 *)(pFVar10 + 0x58) = 0;
      *(undefined8 *)(pFVar10 + 0x60) = 0;
    }
    pIVar11 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
    pFVar12 = (FBasedPosition *)(**(code **)((longlong)*pIVar11 + 0x88))(pIVar11,local_98);
    uVar4 = this->NextSampleIdx;
    uVar13 = 0;
    if ((int)uVar4 < (this->LocationSamples).ArrayNum) {
      uVar13 = ~uVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FBasedPosition::operator=
              ((FBasedPosition *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x68),
               pFVar12);
    bVar6 = true;
    this->NextSampleIdx = (this->NextSampleIdx + 1) % this->BlockDetectionSampleCount;
  }
  return bVar6;
}

// UpdateCachedComponents @ 146fdf930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::UpdateCachedComponents(UPathFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146fdf935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x618))(this,1);
  return;
}

// UpdateDecelerationData @ 146fdfcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::UpdateDecelerationData(UPathFollowingComponent *this)

{
  float fVar1;
  FNavigationPath *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  INavMovementInterface *pIVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  bVar7 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if ((!bVar7) && ((bool)this->bStopMovementOnFinish)) {
    if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
        (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), !bVar7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 200))();
    iVar11 = this->DecelerationSegmentIndex;
    if ((float)uVar14 == this->CachedBrakingMaxSpeed) {
      if (iVar11 != -1) {
        return;
      }
    }
    else {
      fVar1 = this->CachedBrakingDistance;
      pIVar9 = TWeakInterfacePtr<INavMovementInterface>::operator->(&this->NavMovementInterface);
      fVar13 = (float)(**(code **)((longlong)*pIVar9 + 0x108))(pIVar9,uVar14);
      this->CachedBrakingDistance = fVar13;
      this->CachedBrakingMaxSpeed = (float)uVar14;
      if ((iVar11 != -1) && (fVar1 == fVar13)) {
        return;
      }
    }
    pFVar2 = (this->Path).Object;
    if (pFVar2 != (FNavigationPath *)0x0) {
      this->DecelerationSegmentIndex = 0;
      dVar6 = 0.0;
      iVar11 = (pFVar2->PathPoints).ArrayNum;
      uVar10 = iVar11 - 1;
      if (0 < (int)uVar10) {
        iVar11 = iVar11 + -2;
        lVar12 = (longlong)(int)uVar10 * 0x30;
        do {
          uVar8 = 0;
          if (iVar11 < (pFVar2->PathPoints).ArrayNum) {
            uVar8 = -uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (pFVar2->PathPoints).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar10 < (pFVar2->PathPoints).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pFVar2->PathPoints).AllocatorInstance.Data;
          auVar15._0_8_ =
               (*(double *)(pFVar3 + lVar12 + -0x20) - *(double *)(pFVar4 + lVar12 + 0x10)) *
               (*(double *)(pFVar3 + lVar12 + -0x20) - *(double *)(pFVar4 + lVar12 + 0x10));
          auVar15._8_8_ = 0;
          auVar16._8_8_ = 0;
          auVar16._0_8_ =
               (*(double *)(pFVar3 + lVar12 + -0x28) - *(double *)(pFVar4 + lVar12 + 8)) *
               (*(double *)(pFVar3 + lVar12 + -0x28) - *(double *)(pFVar4 + lVar12 + 8)) +
               (*(double *)(pFVar3 + lVar12 + -0x30) - *(double *)(pFVar4 + lVar12)) *
               (*(double *)(pFVar3 + lVar12 + -0x30) - *(double *)(pFVar4 + lVar12)) + auVar15._0_8_
          ;
          auVar16 = sqrtpd(auVar15,auVar16);
          dVar6 = dVar6 + auVar16._0_8_;
          if ((double)this->CachedBrakingDistance < dVar6) {
            this->DecelerationSegmentIndex = iVar11;
            break;
          }
          uVar10 = uVar10 - 1;
          iVar11 = iVar11 + -1;
          lVar12 = lVar12 + -0x30;
        } while (0 < (int)uVar10);
      }
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Updated deceleration segment: %d (MaxSpeed:%.2f, BrakingDistance:%.2f");
      }
    }
  }
  return;
}

// UpdateMoveFocus @ 146fe06e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPathFollowingComponent::UpdateMoveFocus(UPathFollowingComponent *this)

{
  uchar uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  UClass *pUVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    pUVar5 = Z_Construct_UClass_AAIController_NoRegister();
    lVar4 = plVar3[2];
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      uVar1 = (this->Status).Value;
      if (uVar1 == '\x03') {
        (**(code **)(this->_padding_ + 0x558))
                  (this,&local_48,*(uint *)(plVar3 + 0x75) >> 4 & 0xffffff01);
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        local_18 = local_38;
        (**(code **)(*plVar3 + 0x928))(plVar3,&local_28,1);
        return;
      }
      if (uVar1 == '\0') {
        (**(code **)(*plVar3 + 0x938))(plVar3,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
      }
    }
  }
  return;
}

// UpdateMovementComponent @ 146fe0860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UPathFollowingComponent::UpdateMovementComponent(UPathFollowingComponent *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  char *pcVar10;
  UObjectBaseUtility *this_00;
  UObject *pUVar11;
  FName local_res8;
  UClass *local_res18;
  code *local_38;
  undefined8 uStack_30;
  
  bVar7 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  if ((!bVar7) && (!param_1)) goto LAB_146fe0a75;
  pUVar11 = (UObject *)this->_padding_;
  if (pUVar11 == (UObject *)0x0) {
LAB_146fe08b8:
    lVar2 = this->_padding_;
    if (lVar2 == 0) goto LAB_146fe0a75;
    pUVar9 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) goto LAB_146fe0a75;
    pUVar11 = *(UObject **)(lVar2 + 0x310);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 == (UObject *)0x0) goto LAB_146fe0a75;
    }
    else {
      if (pUVar11 == (UObject *)0x0) goto LAB_146fe0a75;
      UE::GC::MarkAsReachable(pUVar11);
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) goto LAB_146fe08b8;
  }
  pcVar10 = strstr("&UPathFollowingComponent::OnActorBump","::");
  pcVar6 = (char *)0x0;
  while (pcVar5 = pcVar10, pcVar5 != (char *)0x0) {
    pcVar10 = strstr(pcVar5 + 1,"::");
    pcVar6 = pcVar5;
  }
  if (((pcVar6 == (char *)0x0) || (pcVar6[2] == '0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_res8,pcVar6 + 2);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = _vcall__1416__flat______;
  TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::
  __Internal_AddUniqueDynamic<UPathFollowingComponent>
            ((TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>
              *)&pUVar11[0xd].field_0xd,this,(pmf_6f6bde34 *)&local_38,local_res8);
  pcVar4 = *(code **)(this->_padding_ + 0x550);
  pcVar3 = *(code **)(*(longlong *)pUVar11 + 0x740);
  local_res18 = Z_Construct_UClass_UNavMovementInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  this_00 = (UObjectBaseUtility *)(*pcVar3)(pUVar11,&local_res18);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar9 = Z_Construct_UClass_UNavMovementInterface_NoRegister();
    UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
  }
  (*pcVar4)(this);
LAB_146fe0a75:
  bVar7 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    (&this->NavMovementInterface,(void *)0x0);
  return !bVar7;
}

// UpdatePathSegment @ 146fe1f20

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

void __thiscall UPathFollowingComponent::UpdatePathSegment(UPathFollowingComponent *this)

{
  TWeakInterfacePtr<INavMovementInterface> *this_00;
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  INavAgentInterface *pIVar9;
  longlong lVar10;
  FNavigationQueryFilter *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  ANavigationData *pAVar13;
  _func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
  *p_Var14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  FNavigationPath *pFVar22;
  FMetaNavMeshPath *pFVar23;
  double *pdVar24;
  UObject *pUVar25;
  TQuatRotationTranslationMatrix<double> *pTVar26;
  FBasedPosition *pFVar27;
  TVector<double> *pTVar28;
  TVector<double> *pTVar29;
  FMetaNavMeshPath *pFVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ushort local_2b8;
  undefined1 local_2b6;
  ushort local_2b4;
  undefined1 local_2b2;
  ushort local_2b0;
  undefined1 local_2ae;
  ushort local_2ac;
  undefined1 local_2aa;
  ushort local_2a8;
  undefined1 local_2a6;
  TVector<double>_u_0 local_2a0;
  TVector<double> local_288;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_270;
  double local_260;
  double dStack_258;
  double local_250;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TQuat<double> local_218;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [24];
  TVector<double> local_1c8;
  TVector<double> local_1b0;
  FBasedPosition local_198;
  FBasedPosition local_130;
  TQuatRotationTranslationMatrix<double> local_c8;
  
  this->DEBUG_bMovingDirectlyToGoal = '\0';
  if ((((this->Path).Object == (FNavigationPath *)0x0) ||
      (this_00 = &this->NavMovementInterface,
      (this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0)) ||
     (bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar19)) {
    if (((FVisualLogger::bIsRecording != 0) && ((this->Path).Object == (FNavigationPath *)0x0)) &&
       (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                 L"Aborting move due to not having a valid path object");
    }
    local_2a8 = CodeLookup[3] | 0x20;
    local_2a6 = 3;
    (**(code **)(this->_padding_ + 0x530))(this,&local_2a8);
    return;
  }
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar19)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NavMovementInterface.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\PathFollowingComponent.cpp"
                          ,0x3de,
                          L"Temporary comment: if you hit this, check other threads to see what could stump the NavMovementInterface."
                         ), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((((this->NavMovementInterface).InterfaceInstance == (INavMovementInterface *)0x0) ||
      (bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar19)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                          ,0x8d,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  (**(code **)((longlong)*(this->NavMovementInterface).InterfaceInstance + 0x80))();
  bVar19 = HasMovementAuthority(this);
  if (((this->Path).Object == (FNavigationPath *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar22 = (this->Path).Object;
  if (((pFVar22->bIsReady == 0) || ((pFVar22->PathPoints).ArrayNum < 2)) ||
     (pFVar22->bUpToDate == 0)) {
    pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    if (pFVar22->bWaitingForRepath == 0) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Aborting move due to path being invalid and not waiting for repath");
      }
      local_2b8 = CodeLookup[3] | 0x20;
      local_2b6 = 3;
      (**(code **)(this->_padding_ + 0x530))(this,&local_2b8);
      return;
    }
    if (((this->bWalkingNavLinkStart == '\0') || (!bVar19)) || ((this->Status).Value != '\x03')) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Updating path points in invalid & pending path!");
      }
    }
    else {
      cVar21 = (**(code **)(this->_padding_ + 0x5f8))(this);
      if (cVar21 != '\0') {
        (**(code **)(this->_padding_ + 0x538))(this);
        (**(code **)(this->_padding_ + 0x5c0))(this);
      }
    }
  }
  pFVar30 = (FMetaNavMeshPath *)0x0;
  pFVar23 = pFVar30;
  if (this->bIsUsingMetaPath != 0) {
    pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    pFVar23 = FNavigationPath::CastPath<FMetaNavMeshPath>(pFVar22);
  }
  uVar5 = (this->CurrentRequestId).RequestID;
  if (!bVar19) {
    return;
  }
  if ((this->Status).Value != '\x03') {
    return;
  }
  pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
  iVar6 = this->MoveSegmentEndIndex;
  iVar7 = (pFVar22->PathPoints).ArrayNum;
  if ((pFVar23 == (FMetaNavMeshPath *)0x0) ||
     ((iVar8 = (pFVar23->Waypoints).ArrayNum, pFVar23->TargetWaypointIdx == iVar8 + -1 &&
      (0 < iVar8)))) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  if (this->bCollidedWithGoal == '\0') {
    if ((this->PreciseAcceptanceRadiusCheckStartNodeIndex < iVar6) &&
       (cVar21 = (**(code **)(this->_padding_ + 0x5f0))(this), cVar21 != '\0')) {
      (**(code **)(this->_padding_ + 0x538))(this);
      local_2b0 = CodeLookup[0];
      local_2ae = 0;
      (**(code **)(this->_padding_ + 0x530))(this);
    }
    else if ((iVar6 < iVar7 + -1) || ((this->bMoveToGoalOnLastSegment == '\0' || (!bVar19)))) {
      cVar21 = (**(code **)(this->_padding_ + 0x5f8))(this);
      if (cVar21 != '\0') {
        (**(code **)(this->_padding_ + 0x538))(this);
        (**(code **)(this->_padding_ + 0x5c0))(this);
      }
    }
    else {
      bVar19 = FWeakObjectPtr::IsValid(&(this->DestinationActor).WeakPtr);
      if ((bVar19) &&
         (pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path), pFVar22->bIsPartial == 0
         )) {
        pIVar9 = this->DestinationAgent;
        if (pIVar9 == (INavAgentInterface *)0x0) {
          pUVar25 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
          lVar10 = *(longlong *)(pUVar25 + 0xb);
          local_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (lVar10 != 0) {
            local_1f8 = *(double *)(lVar10 + 0x210);
            dStack_1f0 = *(double *)(lVar10 + 0x218);
            local_1e8 = *(double *)(lVar10 + 0x220);
            local_250 = *(double *)(lVar10 + 0x220);
            local_260 = *(double *)(lVar10 + 0x210);
            dStack_258 = *(double *)(lVar10 + 0x218);
          }
          pdVar24 = &local_260;
        }
        else {
          pdVar24 = (double *)(**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,local_1e0);
        }
        local_248._s_0.X = *pdVar24;
        local_248._s_0.Y = pdVar24[1];
        local_248._s_0.Z = pdVar24[2];
        pUVar25 = FWeakObjectPtr::Get(&(this->DestinationActor).WeakPtr);
        dVar18 = __real_3ff0000000000000;
        lVar10 = *(longlong *)(pUVar25 + 0xb);
        if (lVar10 == 0) {
          local_218.X._0_4_ = 0;
          local_218.X._4_4_ = 0;
          local_218.Y._0_4_ = 0;
          local_218.Y._4_4_ = 0;
          local_218.Z = ___xmm_3ff00000000000000000000000000000;
          local_218.W = _UNK_15061cbc8;
        }
        else {
          local_218.X._0_4_ = *(undefined4 *)(lVar10 + 0x1f0);
          local_218.X._4_4_ = *(undefined4 *)(lVar10 + 500);
          local_218.Y._0_4_ = *(undefined4 *)(lVar10 + 0x1f8);
          local_218.Y._4_4_ = *(undefined4 *)(lVar10 + 0x1fc);
          local_218.Z = *(double *)(lVar10 + 0x200);
          local_218.W = *(double *)(lVar10 + 0x208);
        }
        pTVar26 = UE::Math::TQuatRotationTranslationMatrix<double>::
                  TQuatRotationTranslationMatrix<double>
                            (&local_c8,&local_218,(TVector<double> *)&local_248._s_0);
        dVar16 = (this->MoveOffset).field0_0x0._s_0.X;
        dVar17 = (this->MoveOffset).field0_0x0._s_0.Y;
        dVar4 = (this->MoveOffset).field0_0x0._s_0.Z;
        auVar31._8_4_ = SUB84(dVar4,0);
        auVar31._0_8_ = dVar4;
        auVar31._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        auVar32._8_4_ = SUB84(dVar18,0);
        auVar32._0_8_ = dVar18;
        auVar32._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_2a0._s_0.X =
             dVar17 * *(double *)&pTVar26->field_0x20 + dVar16 * *(double *)pTVar26 +
             dVar4 * *(double *)&pTVar26->field_0x40 + dVar18 * *(double *)&pTVar26->field_0x60;
        local_2a0._s_0.Y =
             dVar17 * *(double *)&pTVar26->field_0x28 + dVar16 * *(double *)&pTVar26->field_0x8 +
             auVar31._8_8_ * *(double *)&pTVar26->field_0x48 +
             auVar32._8_8_ * *(double *)&pTVar26->field_0x68;
        local_2a0._s_0.Z =
             *(double *)&pTVar26->field_0x10 * dVar16 + *(double *)&pTVar26->field_0x30 * dVar17 +
             *(double *)&pTVar26->field_0x50 * dVar4 + *(double *)&pTVar26->field_0x70 * dVar18;
        if ((this->bMoveToGoalClampedToNavigation != '\0') &&
           (pFVar11 = (this->NavigationFilter).Object, pFVar11 != (FNavigationQueryFilter *)0x0)) {
          pTVar12 = (this->NavigationFilter).SharedReferenceCount.ReferenceController;
          pAVar13 = (this->MyNavData).field0_0x0.DebugPtr;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pAVar13->RaycastImplementationWithAdditionalResults ==
               (_func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
                *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RaycastImplementationWithAdditionalResults",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                                  ,0x37d,L""), bVar19)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          p_Var14 = pAVar13->RaycastImplementationWithAdditionalResults;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_270.Object = pFVar11;
          local_270.SharedReferenceCount.ReferenceController = pTVar12;
          bVar19 = (*p_Var14)(pAVar13,&local_288,(TVector<double> *)&local_2a0,
                              (TVector<double> *)&local_230._s_0,
                              (FNavigationRaycastAdditionalResults *)0x0,&local_270,(UObject *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          if (bVar19) {
            local_2a0._s_0.X = local_230._s_0.X;
            local_2a0._s_0.Y = local_230._s_0.Y;
            local_2a0._s_0.Z = local_230._s_0.Z;
          }
        }
        FBasedPosition::Set(&this->CurrentDestination,(AActor *)0x0,
                            (TVector<double> *)&local_2a0._s_0);
        if (((FVisualLogger::bIsRecording != 0) &&
            (FVisualLogger::CategorizedLogfImpl
                       ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                        L"Moving directly to move goal rather than following last path segment"),
            FVisualLogger::bIsRecording != 0)) &&
           (FVisualLogger::LocationLogfImpl
                      ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,All,
                       (TVector<double> *)&local_2a0._s_0,0x1e,&FColor::Green,
                       L"Last-segment-to-actor"), FVisualLogger::bIsRecording != 0)) {
          FVisualLogger::SegmentLogfImpl
                    ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,All,&local_288,
                     (TVector<double> *)&local_2a0._s_0,&FColor::Green,0,L"");
        }
      }
      (**(code **)(this->_padding_ + 0x630))(this);
      this->DEBUG_bMovingDirectlyToGoal = '\x01';
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x538))(this);
    local_2b4 = CodeLookup[0];
    local_2b2 = 0;
    (**(code **)(this->_padding_ + 0x530))(this);
  }
  if ((this->Status).Value != '\x03') {
    return;
  }
  if (uVar5 != (this->CurrentRequestId).RequestID) {
    return;
  }
  if (pFVar23 != (FMetaNavMeshPath *)0x0) {
    (**(code **)(pFVar23->_padding_ + 0x88))(pFVar23,&local_288,1);
  }
  cVar21 = (**(code **)(this->_padding_ + 0x5e0))(this);
  if (cVar21 == '\0') {
    return;
  }
  bVar19 = IsBlocked(this);
  if (!bVar19) {
    return;
  }
  pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
  if ((-1 < this->MoveSegmentEndIndex) &&
     (this->MoveSegmentEndIndex < (pFVar22->PathPoints).ArrayNum)) {
    pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    if ((-1 < this->MoveSegmentStartIndex) &&
       (this->MoveSegmentStartIndex < (pFVar22->PathPoints).ArrayNum)) {
      pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      pFVar27 = FNavigationPath::GetPathPointLocation(pFVar22,&local_198,this->MoveSegmentEndIndex);
      pTVar28 = FBasedPosition::operator*(pFVar27,&local_1c8);
      pFVar22 = TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
      pFVar27 = FNavigationPath::GetPathPointLocation
                          (pFVar22,&local_130,this->MoveSegmentStartIndex);
      pTVar29 = FBasedPosition::operator*(pFVar27,&local_1b0);
      fVar2 = this->MinAgentHalfHeightPct;
      fVar3 = this->MinAgentRadiusPct;
      if (((this->NavMovementInterface).InterfaceInstance != (INavMovementInterface *)0x0) &&
         (bVar19 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->NavMovementInterface), bVar19))
      {
        pFVar30 = (FMetaNavMeshPath *)(this->NavMovementInterface).InterfaceInstance;
      }
      LogBlockHelper((AActor *)this->_padding_,(INavMovementInterface *)pFVar30,fVar3,fVar2,pTVar29,
                     pTVar28);
      goto LAB_146fe27d1;
    }
  }
  if (((this->_padding_ != 0) &&
      (bVar19 = TWeakInterfacePtr<INavMovementInterface>::operator==
                          (&this->NavMovementInterface,(void *)0x0), !bVar19)) &&
     (FVisualLogger::bIsRecording != 0)) {
    TSharedPtr<FNavigationPath,1>::operator->(&this->Path);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Verbose,
               L"Path blocked, but move segment indices are not valid: start %d, end %d of %d");
  }
LAB_146fe27d1:
  local_2ac = CodeLookup[1];
  local_2aa = 1;
  (**(code **)(this->_padding_ + 0x530))(this,&local_2ac);
  return;
}

// _getUObject @ 146fe40e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall UPathFollowingComponent::_getUObject(UPathFollowingComponent *this)

{
  return (UObject *)&this[-1].CurrentNavLocation;
}

// _getUObject`adjustor{152}' @ 146fe40ec

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UPathFollowingComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UPathFollowingComponent::_getUObject_adjustor_152__(UPathFollowingComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPathFollowingComponent *)&this[-1].LocationSamples.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{160}' @ 146fe4100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UPathFollowingComponent::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall
UPathFollowingComponent::_getUObject_adjustor_160__(UPathFollowingComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPathFollowingComponent *)&this[-1].LocationSamples);
  return (UObject *)pUVar1;
}

// execGetPathActionType @ 146fe55c0

void __cdecl
UPathFollowingComponent::execGetPathActionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  FAbstractNavigationPath *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = param_1[0xf].field_0xc;
  if (cVar1 == '\0') {
    *(undefined1 *)param_3 = 1;
    return;
  }
  if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) &&
     (*(FNavigationPath **)&param_1[7].field_0x20 != (FNavigationPath *)0x0)) {
    pFVar2 = FNavigationPath::CastPath<FAbstractNavigationPath>
                       (*(FNavigationPath **)&param_1[7].field_0x20);
    if (pFVar2 != (FAbstractNavigationPath *)0x0) {
      *(undefined1 *)param_3 = 2;
      return;
    }
    *(char *)param_3 = '\x04' - ((*(uint *)(*(longlong *)&param_1[7].field_0x20 + 0xa0) & 4) != 0);
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetPathDestination @ 146fe5670

void __cdecl
UPathFollowingComponent::execGetPathDestination(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FNavigationPath **)&param_1[7].field_0x20 == (FNavigationPath *)0x0) {
    pTVar3 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &FNavigationPath::GetDestinationLocation
                        (*(FNavigationPath **)&param_1[7].field_0x20,
                         (TVector<double> *)&local_28._s_0)->field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  *(double *)param_3 = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execOnActorBump @ 146fe5ec0

void __cdecl
UPathFollowingComponent::execOnActorBump(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  uchar local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  memset(local_118,0,0x100);
  uStack_13b = 0;
  uStack_139 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_148 = 0;
  uStack_140 = 0xffffffff;
  uStack_13c = 0;
  uStack_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  puVar2 = local_118;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_158 = local_138;
  uStack_154 = uStack_134;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  local_148 = local_128;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x588))(param_1,local_res10,local_res8,&local_158,puVar2);
  return;
}

// execOnNavDataRegistered @ 146fe60a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPathFollowingComponent::execOnNavDataRegistered(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  UNavigationSystemBase *pUVar10;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 7) == 0) {
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[6].field_0x20);
  if (!bVar5) {
    return;
  }
  if (((*(longlong *)(param_1 + 7) == 0) ||
      (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[6].field_0x20), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 7) + 0x38))();
  cVar6 = (**(code **)(*(longlong *)pUVar4 + 0x7c8))(pUVar4,uVar7);
  if (cVar6 == '\0') {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&param_1[7].field_0x18 = pUVar4;
  pUVar8 = *(UWorld **)&param_1[4].field_0x10;
  if ((pUVar8 == (UWorld *)0x0) &&
     (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar8 == (UWorld *)0x0)) {
    pUVar10 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar10 = (pUVar8->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar10 == (UNavigationSystemBase *)0x0) {
LAB_146fe6204:
      pUVar10 = (UNavigationSystemBase *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) goto LAB_146fe6204;
    }
    if (pUVar10 != (UNavigationSystemBase *)0x0) goto LAB_146fe6235;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("NavSys",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\PathFollowingComponent.cpp"
                     ,0x2ef,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146fe6235:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar10[6].field_0x20,param_1)
  ;
  return;
}

// operator() @ 1504ffe00

bool __thiscall
`UPathFollowingComponent::HasReachedCurrentTarget'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<429579682598356221>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0xa8) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0xa8) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<429579682598356221>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ffe9b;
    }
  }
  bVar2 = false;
LAB_1504ffe9b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

