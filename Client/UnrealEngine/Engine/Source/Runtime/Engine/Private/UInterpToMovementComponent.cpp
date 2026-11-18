// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// StaticClass @ 14788a330

UClass * __cdecl UInterpToMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InterpToMovementComponent",
               &Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton,
               StaticRegisterNativesUInterpToMovementComponent,0x208,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterpToMovementComponent>,
               InternalVTableHelperCtorCaller<UInterpToMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton;
}

// UInterpToMovementComponent @ 1478a94b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterpToMovementComponent * __thiscall
UInterpToMovementComponent::UInterpToMovementComponent
          (UInterpToMovementComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bSweep = true;
  this->TeleportType = None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = 0;
  this->bCheckIfStillInWorld = true;
  *(undefined8 *)&this->OnInterpToReverse = 0;
  *(undefined8 *)&(this->OnInterpToReverse).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpToReverse).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpToStop = 0;
  *(undefined8 *)&(this->OnInterpToStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpToStop).field_0x10 = 0;
  *(undefined8 *)&this->OnWaitBeginDelegate = 0;
  *(undefined8 *)&(this->OnWaitBeginDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnWaitBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnWaitEndDelegate = 0;
  *(undefined8 *)&(this->OnWaitEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnWaitEndDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnResetDelegate = 0;
  *(undefined8 *)&(this->OnResetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnResetDelegate).field_0x10 = 0;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  return this;
}

// UInterpToMovementComponent @ 1478a9590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterpToMovementComponent * __thiscall
UInterpToMovementComponent::UInterpToMovementComponent
          (UInterpToMovementComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  this->bForceSubStepping = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x3e;
  *(undefined8 *)&this->OnInterpToReverse = 0;
  *(undefined8 *)&(this->OnInterpToReverse).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpToReverse).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpToStop = 0;
  *(undefined8 *)&(this->OnInterpToStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpToStop).field_0x10 = 0;
  *(undefined8 *)&this->OnWaitBeginDelegate = 0;
  *(undefined8 *)&(this->OnWaitBeginDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnWaitBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnWaitEndDelegate = 0;
  *(undefined8 *)&(this->OnWaitEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnWaitEndDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnResetDelegate = 0;
  *(undefined8 *)&(this->OnResetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnResetDelegate).field_0x10 = 0;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  this->bIsWaiting = false;
  this->bStopped = false;
  this->CurrentTime = 0.0;
  this->bPointsFinalized = false;
  this->bSweep = true;
  this->TeleportType = None;
  this->bCheckIfStillInWorld = true;
  this->MaxSimulationTimeStep = 0.05;
  this->MaxSimulationIterations = 8;
  this->TimeMultiplier = 1.0;
  this->Duration = 1.0;
  this->CurrentDirection = 1.0;
  return this;
}

// ~UInterpToMovementComponent @ 1478abeb0

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
UInterpToMovementComponent::~UInterpToMovementComponent(UInterpToMovementComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ControlPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnResetDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnResetDelegate);
  pvVar2 = *(void **)&(this->OnWaitEndDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWaitEndDelegate);
  pvVar2 = *(void **)&(this->OnWaitBeginDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWaitBeginDelegate);
  pvVar2 = *(void **)&(this->OnInterpToStop).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterpToStop);
  pvVar2 = *(void **)&(this->OnInterpToReverse).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterpToReverse);
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddControlPointPosition @ 1478b21a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterpToMovementComponent::AddControlPointPosition
          (UInterpToMovementComponent *this,TVector<double> *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TArray<FInterpControlPoint,TSizedDefaultAllocator<32>_> *pTVar7;
  FString local_48;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined8 local_18;
  
  if (5 < (byte)LogInterpToMovementComponent._0_1_) {
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogInterpToMovementComponent);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  pTVar7 = &this->ControlPoints;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  uStack_20 = param_2;
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2 + (longlong)(this->ControlPoints).ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->ControlPoints).ArrayNum;
  piVar1 = &(this->ControlPoints).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar7->AllocatorInstance,piVar1);
  }
  lVar6 = (longlong)iVar5;
  (this->ControlPoints).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  *(double *)(pFVar2 + lVar6 * 0x28) = local_38;
  *(double *)(pFVar2 + lVar6 * 0x28 + 8) = dStack_30;
  *(double *)(pFVar2 + lVar6 * 0x28 + 0x10) = local_28;
  *(ulonglong *)(pFVar2 + lVar6 * 0x28 + 0x10 + 8) = CONCAT71(uStack_1f,uStack_20);
  *(undefined8 *)(pFVar2 + lVar6 * 0x28 + 0x20) = local_18;
  return;
}

// ApplyWorldOffset @ 1478b4ca0

void __thiscall
UInterpToMovementComponent::ApplyWorldOffset
          (UInterpToMovementComponent *this,TVector<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (this->StartLocation).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->StartLocation).field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y + (this->StartLocation).field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.Z =
       (this->StartLocation).field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (this->ControlPoints).AllocatorInstance.Data;
  iVar2 = (this->ControlPoints).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ControlPoints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInterpControlPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3[0x18] == (FScriptContainerElement)0x0) {
      *(double *)pFVar3 = *(double *)pFVar3 + (param_1->field0_0x0)._s_0.X;
      *(double *)(pFVar3 + 8) = *(double *)(pFVar3 + 8) + (param_1->field0_0x0)._s_0.Y;
      *(double *)(pFVar3 + 0x10) = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar3 + 0x10);
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

// BeginPlay @ 1478b6650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterpToMovementComponent::BeginPlay(UInterpToMovementComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  FinaliseControlPoints(this);
  return;
}

// CalculateNewTime @ 1478b8350

float __thiscall
UInterpToMovementComponent::CalculateNewTime
          (UInterpToMovementComponent *this,float param_1,float param_2,FHitResult *param_3,
          bool param_4,bool *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  FHitResult local_128;
  
  *param_6 = 0.0;
  *param_5 = false;
  fVar2 = __real_3f800000;
  if (this->bIsWaiting != false) {
    return param_1;
  }
  fVar1 = param_2 * this->TimeMultiplier * this->CurrentDirection + param_1;
  if (fVar1 < __real_3f800000) {
    if (0.0 <= fVar1) {
      return fVar1;
    }
    *param_6 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
    if (this->BehaviourType == OneShot_Reverse) {
      *param_5 = true;
      if (!param_4) {
        return 0.0;
      }
      FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,param_3,0.0);
      return 0.0;
    }
    if (this->BehaviourType != PingPong) {
      return fVar1;
    }
    memset(&local_128,0,0x100);
    fVar2 = 0.0;
  }
  else {
    *param_6 = fVar1 - __real_3f800000;
    if (this->BehaviourType == OneShot) {
      *param_5 = true;
      if (!param_4) {
        return fVar2;
      }
      FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,param_3,fVar2);
      return fVar2;
    }
    if (this->BehaviourType == Loop_Reset) {
      if (!param_4) {
        return 0.0;
      }
      FOnInterpToResetDelegate::Broadcast(&this->OnResetDelegate,param_3,0.0);
      return 0.0;
    }
    memset(&local_128,0,0x100);
  }
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  ReverseDirection(this,&local_128,fVar2,param_4);
  return fVar2;
}

// CheckStillInWorld @ 1478b8a20

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

bool __thiscall UInterpToMovementComponent::CheckStillInWorld(UInterpToMovementComponent *this)

{
  double dVar1;
  int iVar2;
  AActor *this_00;
  USceneComponent *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  UWorld *this_01;
  AWorldSettings *pAVar8;
  UClass *pUVar9;
  UDamageType *pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_168 [16];
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FName local_148 [2];
  FHitResult local_138;
  
  if ((this->_padding_ == 0) ||
     ((this_01 = (UWorld *)this->_padding_, this_01 == (UWorld *)0x0 &&
      (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_01 == (UWorld *)0x0)))) {
LAB_1478b8bba:
    bVar7 = false;
  }
  else {
    pAVar8 = UWorld::GetWorldSettings(this_01,true,true);
    if (pAVar8->bEnableWorldBoundsChecks == '\0') goto LAB_1478b8d97;
    this_00 = *(AActor **)(this->_padding_ + 0xa8);
    if ((this_00 == (AActor *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0))
    goto LAB_1478b8bba;
    if (this->bCheckIfStillInWorld != false) {
      pUVar3 = (this_00->RootComponent).field0_0x0.DebugPtr;
      if (pUVar3 == (USceneComponent *)0x0) {
        local_168._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_168._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar12 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      else {
        local_168._0_8_ = (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[0];
        local_168._8_8_ = (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[1];
        dVar1 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
        uVar11 = SUB84(dVar1,0);
        uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      local_158 = (double)CONCAT44(uVar12,uVar11);
      if (local_158 < (double)pAVar8->KillZ) {
        pUVar4 = (pAVar8->KillZDamageType).Class.field0_0x0.DebugPtr;
        if ((pUVar4 == (UClass *)0x0) ||
           (pUVar9 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_1478b8ba6:
          pUVar10 = GetDefault<UDamageType>();
        }
        else {
          iVar2 = (int)pUVar9->_padding_;
          if (((int)pUVar4->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar9->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((!bVar7) ||
             (pUVar4 = (pAVar8->KillZDamageType).Class.field0_0x0.DebugPtr, pUVar4 == (UClass *)0x0)
             ) goto LAB_1478b8ba6;
          pUVar9 = Z_Construct_UClass_UDamageType_NoRegister();
          if (pUVar9 == (UClass *)0x0) {
LAB_1478b8b9b:
            pUVar10 = UClass::GetDefaultObject<UDamageType>((UClass *)0x0);
          }
          else {
            iVar2 = (int)pUVar9->_padding_;
            if (((int)pUVar4->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_1478b8b9b;
            pUVar10 = UClass::GetDefaultObject<UDamageType>
                                ((pAVar8->KillZDamageType).Class.field0_0x0.DebugPtr);
          }
        }
        (**(code **)(this_00->_padding_ + 0x660))(this_00,pUVar10);
        goto LAB_1478b8bba;
      }
      lVar5 = this->_padding_;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x98) & 1) != 0)) {
        if (((*(double *)(lVar5 + 0x110) - *(double *)(lVar5 + 0x128) < __real_c290000000000000) ||
            (((__real_4290000000000000 < *(double *)(lVar5 + 0x110) + *(double *)(lVar5 + 0x128) ||
              (*(double *)(lVar5 + 0x118) - *(double *)(lVar5 + 0x130) < __real_c290000000000000))
             || (__real_4290000000000000 < *(double *)(lVar5 + 0x118) + *(double *)(lVar5 + 0x130)))
            )) || ((*(double *)(lVar5 + 0x120) - *(double *)(lVar5 + 0x138) <
                    __real_c290000000000000 ||
                   (__real_4290000000000000 <
                    *(double *)(lVar5 + 0x120) + *(double *)(lVar5 + 0x138))))) {
          if (2 < (byte)LogInterpToMovementComponent._0_1_) {
            local_148[0] = (FName)this_00->_padding_;
            ::FName::ToString(local_148,(FString *)local_168);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterpToMovementComponent);
            if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_168._0_8_);
            }
          }
          (**(code **)(this_00->_padding_ + 0x668))(this_00);
          AActor::SetActorEnableCollision(this_00,false);
          memset(&local_138,0,0x100);
          uStack_150 = 0xffffffff;
          local_158 = 0.0;
          uStack_14c = 0;
          local_138.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
          local_138.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
          local_138.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
          local_138.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
          local_138.MyItem = -1;
          local_138.Time = 1.0;
          local_138.HitObjectHandle.ManagerInterface.InterfaceInstance._0_4_ = 0;
          local_138.HitObjectHandle.ManagerInterface.InterfaceInstance._4_4_ = 0;
          local_138.HitObjectHandle.InstanceIndex = -1;
          local_138.HitObjectHandle.ResolutionStatus = Invalid;
          local_138.HitObjectHandle._29_3_ = 0;
          (**(code **)(this->_padding_ + 0x530))(this,0);
          uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          this->_padding_ = uVar6;
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,&local_138,this->CurrentTime);
          goto LAB_1478b8bba;
        }
      }
    }
LAB_1478b8d97:
    bVar7 = true;
  }
  return bVar7;
}

// ComputeMoveDelta @ 1478bc230

TVector<double> * __thiscall
UInterpToMovementComponent::ComputeMoveDelta
          (UInterpToMovementComponent *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  TArray<FInterpControlPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  FPayload *pFVar12;
  TRotator<double> *pTVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  int iVar16;
  uint uVar17;
  FRotationConversionCache *this_00;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  TVector<double> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  TQuat<double> local_108;
  TRotator<double> local_e8;
  TVector<double>_u_0 local_d0;
  TRotator<double> local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [3];
  
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar20 = 0;
  fVar25 = 0.0;
  bVar10 = param_1 < __real_3f800000;
  iVar16 = (this->ControlPoints).ArrayNum;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_118;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_110;
  uVar17 = 0;
  pTVar14 = __return_storage_ptr__;
  if (bVar10) {
    uVar23 = uVar20;
    uVar11 = 0xffffffff;
    if (0 < iVar16) {
      do {
        iVar16 = (this->ControlPoints).ArrayNum;
        pTVar14 = (TVector<double> *)(longlong)iVar16;
        uVar19 = (uint)uVar20;
        uVar11 = uVar17;
        if ((int)uVar19 < iVar16) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if (uVar11 == 0) {
          pTVar14 = (TVector<double> *)0x1506109c0;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TVector<double> *)(*pcVar5)();
            return pTVar14;
          }
        }
        fVar25 = fVar25 + *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar23 + 0x24);
        uVar11 = uVar19;
        if (param_1 < fVar25) break;
        uVar20 = (ulonglong)(uVar19 + 1);
        uVar23 = uVar23 + 0x28;
        uVar11 = 0xffffffff;
      } while ((int)(uVar19 + 1) < (this->ControlPoints).ArrayNum);
    }
  }
  else {
    uVar11 = iVar16 - 1;
  }
  uVar18 = SUB84(pTVar14,0);
  if (uVar11 != 0xffffffff) {
    lVar24 = this->_padding_;
    local_108.X = *(double *)(lVar24 + 0x1f0);
    local_108.Y = *(double *)(lVar24 + 0x1f8);
    local_108.Z = *(double *)(lVar24 + 0x200);
    local_108.W = *(double *)(lVar24 + 0x208);
    this_00 = (FRotationConversionCache *)(lVar24 + 0x1e0);
    pFVar12 = FRotationConversionCache::GetOrCreatePayload(this_00);
    lVar24 = -(ulonglong)((pFVar12->CachedQuat).W != local_108.W);
    auVar6._8_4_ = (int)lVar24;
    auVar6._0_8_ = -(ulonglong)((pFVar12->CachedQuat).Z != local_108.Z);
    auVar6._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
    uVar19 = movmskpd(uVar18,auVar6);
    lVar24 = -(ulonglong)(local_108.Y != (pFVar12->CachedQuat).Y);
    auVar7._8_4_ = (int)lVar24;
    auVar7._0_8_ = -(ulonglong)(local_108.X != (pFVar12->CachedQuat).X);
    auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
    iVar16 = movmskpd((int)this_00,auVar7);
    if ((uVar19 & 0x3fffffff) != 0 || iVar16 != 0) {
      (pFVar12->CachedQuat).X = local_108.X;
      (pFVar12->CachedQuat).Y = local_108.Y;
      (pFVar12->CachedQuat).Z = local_108.Z;
      (pFVar12->CachedQuat).W = local_108.W;
      pTVar13 = UE::Math::TQuat<double>::Rotator(&local_108,&local_b8);
      dVar8 = pTVar13->Yaw;
      (pFVar12->CachedRotator).Pitch = pTVar13->Pitch;
      (pFVar12->CachedRotator).Yaw = dVar8;
      (pFVar12->CachedRotator).Roll = pTVar13->Roll;
    }
    pTVar1 = &this->ControlPoints;
    uVar22 = ~uVar11 >> 0x1f;
    local_e8.Pitch = (pFVar12->CachedRotator).Pitch;
    local_e8.Yaw = (pFVar12->CachedRotator).Yaw;
    local_e8.Roll = (pFVar12->CachedRotator).Roll;
    uVar19 = uVar17;
    if ((int)uVar11 < (this->ControlPoints).ArrayNum) {
      uVar19 = uVar22;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    lVar24 = (longlong)(int)uVar11;
    fVar25 = *(float *)((pTVar1->AllocatorInstance).Data + lVar24 * 0x28 + 0x1c);
    if ((int)uVar11 < (this->ControlPoints).ArrayNum) {
      uVar17 = uVar22;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    fVar3 = *(float *)((pTVar1->AllocatorInstance).Data + lVar24 * 0x28 + 0x24);
    uVar19 = 0;
    uVar17 = uVar19;
    if ((int)uVar11 < (this->ControlPoints).ArrayNum) {
      uVar17 = uVar22;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar2 = pFVar4 + lVar24 * 0x28;
    local_138._s_0.X = (double)*(undefined8 *)pFVar2;
    local_138._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
    local_138._s_0.Z = (double)*(undefined8 *)(pFVar4 + lVar24 * 0x28 + 0x10);
    pTVar14 = UE::Math::TRotator<double>::RotateVector
                        (&local_e8,&local_a0,(TVector<double> *)&local_138._s_0);
    uVar17 = uVar19;
    if ((int)uVar11 < (this->ControlPoints).ArrayNum) {
      uVar17 = uVar22;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    pTVar21 = &UE::Math::TVector<double>::ZeroVector;
    pTVar15 = &this->StartLocation;
    if ((pTVar1->AllocatorInstance).Data[lVar24 * 0x28 + 0x18] != (FScriptContainerElement)0x1) {
      pTVar15 = &UE::Math::TVector<double>::ZeroVector;
    }
    local_138._s_0.Y = (pTVar14->field0_0x0)._s_0.Y + (pTVar15->field0_0x0)._s_0.Y;
    local_138._s_0.Z = (pTVar14->field0_0x0)._s_0.Z + (pTVar15->field0_0x0)._s_0.Z;
    local_138._s_0.X = (pTVar15->field0_0x0)._s_0.X + (pTVar14->field0_0x0)._s_0.X;
    iVar16 = (this->ControlPoints).ArrayNum;
    uVar17 = iVar16 - 1;
    if ((int)(uVar11 + 1) < (int)uVar17) {
      uVar17 = uVar11 + 1;
    }
    uVar11 = 0;
    if (0 < (int)uVar17) {
      uVar11 = uVar17;
    }
    uVar17 = uVar19;
    if ((int)uVar11 < iVar16) {
      uVar17 = ~uVar11 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    pFVar4 = (this->ControlPoints).AllocatorInstance.Data;
    lVar24 = (longlong)(int)uVar11;
    pFVar2 = pFVar4 + lVar24 * 0x28;
    local_d0._s_0.X = (double)*(undefined8 *)pFVar2;
    local_d0._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
    local_d0._s_0.Z = (double)*(undefined8 *)(pFVar4 + lVar24 * 0x28 + 0x10);
    pTVar14 = UE::Math::TRotator<double>::RotateVector
                        (&local_e8,local_88,(TVector<double> *)&local_d0._s_0);
    if ((int)uVar11 < (this->ControlPoints).ArrayNum) {
      uVar19 = ~uVar11 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    if ((this->ControlPoints).AllocatorInstance.Data[lVar24 * 0x28 + 0x18] ==
        (FScriptContainerElement)0x1) {
      pTVar21 = &this->StartLocation;
    }
    dVar8 = (double)((param_1 - fVar25) / fVar3);
    dStack_118 = (((pTVar14->field0_0x0)._s_0.Y + (pTVar21->field0_0x0)._s_0.Y) - local_138._s_0.Y)
                 * dVar8 + local_138._s_0.Y;
    local_110 = (((pTVar14->field0_0x0)._s_0.Z + (pTVar21->field0_0x0)._s_0.Z) - local_138._s_0.Z) *
                dVar8 + local_138._s_0.Z;
    local_120 = (((pTVar21->field0_0x0)._s_0.X + (pTVar14->field0_0x0)._s_0.X) - local_138._s_0.X) *
                dVar8 + local_138._s_0.X;
  }
  lVar24 = this->_padding_;
  dVar8 = *(double *)(lVar24 + 0x218);
  dVar9 = *(double *)(lVar24 + 0x220);
  if (((*(double *)(lVar24 + 0x210) != local_120) || (dVar8 != dStack_118)) || (dVar9 != local_110))
  {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_120 - *(double *)(lVar24 + 0x210);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_118 - dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_110 - dVar9;
  }
  return __return_storage_ptr__;
}

// FOnInterpToResetDelegate_DelegateWrapper @ 1478cd000

void __cdecl
UInterpToMovementComponent::FOnInterpToResetDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FOnInterpToReverseDelegate_DelegateWrapper @ 1478cd0d0

void __cdecl
UInterpToMovementComponent::FOnInterpToReverseDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FOnInterpToStopDelegate_DelegateWrapper @ 1478cd1a0

void __cdecl
UInterpToMovementComponent::FOnInterpToStopDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FOnInterpToWaitBeginDelegate_DelegateWrapper @ 1478cd270

void __cdecl
UInterpToMovementComponent::FOnInterpToWaitBeginDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FOnInterpToWaitEndDelegate_DelegateWrapper @ 1478cd340

void __cdecl
UInterpToMovementComponent::FOnInterpToWaitEndDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FinaliseControlPoints @ 1478cd970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterpToMovementComponent::FinaliseControlPoints(UInterpToMovementComponent *this)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  TRotator<double> local_138;
  TVector<double> local_120;
  FHitResult local_108;
  
  lVar3 = this->_padding_;
  if ((lVar3 != 0) && (this->bPointsFinalized != true)) {
    iVar2 = (this->ControlPoints).ArrayNum;
    dVar4 = *(double *)(lVar3 + 0x218);
    dVar1 = *(double *)(lVar3 + 0x220);
    (this->StartLocation).field0_0x0._s_0.X = *(double *)(lVar3 + 0x210);
    (this->StartLocation).field0_0x0._s_0.Y = dVar4;
    fVar5 = __real_3f800000 / this->Duration;
    (this->StartLocation).field0_0x0._s_0.Z = dVar1;
    this->TimeMultiplier = fVar5;
    if (iVar2 != 0) {
      (**(code **)(this->_padding_ + 0x620))(SUB84(dVar1,0),1);
      (**(code **)(this->_padding_ + 0x618))(this,&local_120,0);
      USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,&local_138);
      memset(&local_108,0,0x100);
      local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      local_108.MyItem = -1;
      local_108.HitObjectHandle.InstanceIndex = -1;
      local_108.HitObjectHandle.ResolutionStatus = Invalid;
      local_108.HitObjectHandle._29_3_ = 0;
      local_108.Time = 1.0;
      local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      USceneComponent::MoveComponent
                ((USceneComponent *)this->_padding_,&local_120,&local_138,false,&local_108,
                 MOVECOMP_NoFlags,None);
      this->bPointsFinalized = true;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1478d9470

UClass * __cdecl UInterpToMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InterpToMovementComponent",
               &Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton,
               StaticRegisterNativesUInterpToMovementComponent,0x208,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterpToMovementComponent>,
               InternalVTableHelperCtorCaller<UInterpToMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterpToMovementComponent.InnerSingleton;
}

// GetSimulationTimeStep @ 1478db7d0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UInterpToMovementComponent::GetSimulationTimeStep
          (UInterpToMovementComponent *this,float param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  FString local_28 [2];
  
  fVar1 = this->MaxSimulationTimeStep;
  fVar3 = param_1;
  if (fVar1 < param_1) {
    if (param_2 < this->MaxSimulationIterations) {
      fVar3 = param_1 * __real_3f000000;
      if (fVar1 <= param_1 * __real_3f000000) {
        fVar3 = fVar1;
      }
    }
    else {
      uVar2 = s_WarningCount + 1;
      if (((s_WarningCount < 100) || (s_WarningCount = uVar2, ((byte)GFrameCounter & 0xf) == 0)) &&
         (s_WarningCount = uVar2, 2 < (byte)LogInterpToMovementComponent._0_1_)) {
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,local_28,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInterpToMovementComponent);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (fVar3 <= __real_3951b717) {
    fVar3 = __real_3951b717;
  }
  return fVar3;
}

// HandleHitWall @ 1478df160

bool __thiscall
UInterpToMovementComponent::HandleHitWall
          (UInterpToMovementComponent *this,FHitResult *param_1,float param_2,
          TVector<double> *param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (this->_padding_ != 0) {
    lVar2 = *(longlong *)(this->_padding_ + 0xa8);
  }
  cVar1 = (**(code **)(this->_padding_ + 0x600))();
  if ((((cVar1 != '\0') && (lVar2 != 0)) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
     (((**(code **)(this->_padding_ + 0x548))(this,param_1,param_2,param_3),
      (*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0 && (this->_padding_ != 0)))) {
    return false;
  }
  return true;
}

// HandleImpact @ 1478df210

void __thiscall
UInterpToMovementComponent::HandleImpact
          (UInterpToMovementComponent *this,FHitResult *param_1,float param_2,
          TVector<double> *param_3)

{
  EInterpToBehaviourType EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_128 [32];
  float local_28;
  
  if (this->bPauseOnImpact != 0) {
    if (this->bIsWaiting != false) {
      return;
    }
    memset(local_128,0,0x100);
    lVar7 = 2;
    puVar6 = local_128;
    do {
      uVar2 = *(undefined8 *)&param_1->Distance;
      uVar3 = *(undefined8 *)&param_1->Location;
      uVar4 = *(undefined8 *)&(param_1->Location).field_0x8;
      *puVar6 = *(undefined8 *)param_1;
      puVar6[1] = uVar2;
      uVar2 = *(undefined8 *)&(param_1->Location).field_0x10;
      uVar5 = *(undefined8 *)&param_1->ImpactPoint;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
      uVar4 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
      puVar6[4] = uVar2;
      puVar6[5] = uVar5;
      uVar2 = *(undefined8 *)&param_1->Normal;
      uVar5 = *(undefined8 *)&(param_1->Normal).field_0x8;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      uVar3 = *(undefined8 *)&(param_1->Normal).field_0x10;
      uVar4 = *(undefined8 *)&param_1->ImpactNormal;
      puVar6[8] = uVar2;
      puVar6[9] = uVar5;
      uVar2 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
      uVar5 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
      puVar6[10] = uVar3;
      puVar6[0xb] = uVar4;
      uVar3 = *(undefined8 *)&param_1->TraceStart;
      uVar4 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
      puVar6[0xc] = uVar2;
      puVar6[0xd] = uVar5;
      puVar6[0xe] = uVar3;
      puVar6[0xf] = uVar4;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 0x10;
      param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
    } while (lVar7 != 0);
    local_28 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnWaitBeginDelegate,
               local_128);
    this->bIsWaiting = true;
    return;
  }
  EVar1 = this->BehaviourType;
  if (EVar1 == OneShot) {
LAB_1478df28b:
    FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,param_1,param_2);
    this->bStopped = true;
    StopSimulating(this,param_1);
  }
  else {
    if (EVar1 == OneShot_Reverse) {
      if (__real_bf800000 == this->CurrentDirection) goto LAB_1478df28b;
    }
    else if (EVar1 == Loop_Reset) {
      this->CurrentTime = 0.0;
      FOnInterpToResetDelegate::Broadcast(&this->OnResetDelegate,param_1,0.0);
      return;
    }
    ReverseDirection(this,param_1,param_2,true);
  }
  return;
}

// ResetControlPoints @ 1478ebdd0

void __thiscall UInterpToMovementComponent::ResetControlPoints(UInterpToMovementComponent *this)

{
  int *piVar1;
  
  this->bStopped = true;
  piVar1 = &(this->ControlPoints).ArrayMax;
  (this->ControlPoints).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ControlPoints).AllocatorInstance,0,piVar1);
    this->bPointsFinalized = false;
    return;
  }
  this->bPointsFinalized = false;
  return;
}

// RestartMovement @ 1478ece70

void __thiscall
UInterpToMovementComponent::RestartMovement(UInterpToMovementComponent *this,float param_1)

{
  this->CurrentDirection = param_1;
  this->CurrentTime = 0.0;
  this->bIsWaiting = false;
  this->bStopped = false;
  return;
}

// ReverseDirection @ 1478ecea0

void __thiscall
UInterpToMovementComponent::ReverseDirection
          (UInterpToMovementComponent *this,FHitResult *param_1,float param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  if (param_3) {
    memset(local_128,0,0x100);
    lVar6 = 2;
    puVar5 = local_128;
    do {
      uVar1 = *(undefined8 *)&param_1->Distance;
      uVar2 = *(undefined8 *)&param_1->Location;
      uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
      *puVar5 = *(undefined8 *)param_1;
      puVar5[1] = uVar1;
      uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
      uVar4 = *(undefined8 *)&param_1->ImpactPoint;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
      uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
      puVar5[4] = uVar1;
      puVar5[5] = uVar4;
      uVar1 = *(undefined8 *)&param_1->Normal;
      uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
      uVar3 = *(undefined8 *)&param_1->ImpactNormal;
      puVar5[8] = uVar1;
      puVar5[9] = uVar4;
      uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
      uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      uVar2 = *(undefined8 *)&param_1->TraceStart;
      uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
      puVar5[0xc] = uVar1;
      puVar5[0xd] = uVar4;
      puVar5[0xe] = uVar2;
      puVar5[0xf] = uVar3;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 0x10;
      param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
    } while (lVar6 != 0);
    local_28 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInterpToReverse,
               local_128);
  }
  this->CurrentDirection =
       (float)((uint)this->CurrentDirection ^ __xmm_80000000800000008000000080000000);
  return;
}

// ShouldUseSubStepping @ 1478f77a0

bool __thiscall UInterpToMovementComponent::ShouldUseSubStepping(UInterpToMovementComponent *this)

{
  return this->bForceSubStepping;
}

// StaticRegisterNativesUInterpToMovementComponent @ 1478f7f50

void __cdecl UInterpToMovementComponent::StaticRegisterNativesUInterpToMovementComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UInterpToMovementComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopMovementImmediately @ 1478f84d0

void __thiscall
UInterpToMovementComponent::StopMovementImmediately(UInterpToMovementComponent *this)

{
  undefined8 uVar1;
  FHitResult local_108;
  
  this->bStopped = true;
  memset(&local_108,0,0x100);
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.Time = 1.0;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,&local_108,this->CurrentTime);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x0001478f8581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x550))(this);
  return;
}

// StopSimulating @ 1478f8590

void __thiscall
UInterpToMovementComponent::StopSimulating(UInterpToMovementComponent *this,FHitResult *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(this->_padding_ + 0x530))(this,0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FOnInterpToStopDelegate::Broadcast(&this->OnInterpToStop,param_1,this->CurrentTime);
  return;
}

// TickComponent @ 1478f97a0

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
UInterpToMovementComponent::TickComponent
          (UInterpToMovementComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  ETeleportType EVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  char cVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UInterpToMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_InterpToMovementComponent_TickComponent>
  FVar22;
  FPayload *pFVar23;
  TRotator<double> *pTVar24;
  TQuat<double> *pTVar25;
  undefined8 *puVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar27;
  FRotationConversionCache *this_02;
  FHitResult *pFVar28;
  FNameEntryId FVar29;
  FName FVar30;
  FName FVar31;
  int iVar32;
  undefined1 uVar33;
  int iVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  LARGE_INTEGER local_res8;
  int local_368;
  ulonglong local_360;
  FStatMessage local_358;
  FName local_348;
  FName local_340;
  double local_330;
  double dStack_328;
  double local_320;
  TQuat<double> local_318;
  TRotator<double> local_2f8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  TRotator<double> local_2d8;
  FHitResult local_2b8;
  undefined8 local_1b8 [32];
  float local_b8;
  
  iVar34 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_InterpToMovementComponent_TickComponent ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UInterpToMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_InterpToMovementComponent_TickComponent>
         )0x0) {
      pFVar21 = ::FName::FName((FName *)&local_res8.s,"STAT_InterpToMovementComponent_TickComponent"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpToMovementComponent_TickComponent,
                 *pFVar21,L"STAT_InterpToMovementComponent_TickComponent","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_InterpToMovementComponent_TickComponent;
  if (StatPtr_STAT_InterpToMovementComponent_TickComponent ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UInterpToMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_InterpToMovementComponent_TickComponent>
       )0x0) {
    pFVar21 = ::FName::FName(&local_348,"STAT_InterpToMovementComponent_TickComponent");
    FVar22 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UInterpToMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_InterpToMovementComponent_TickComponent>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_InterpToMovementComponent_TickComponent,*pFVar21,
                          L"STAT_InterpToMovementComponent_TickComponent","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar22;
  uVar33 = 0;
  local_340.ComparisonIndex.Value = 0;
  local_340.Number = 0;
  local_res8.s.LowPart = local_res8.s.LowPart & 0xffffff00;
  FVar29 = FVar31.ComparisonIndex.Value;
  uVar27 = FVar31.Number;
  if ((FVar29.Value != 0) || (FVar30 = local_340, uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar22 + 0x10));
      uVar33 = 1;
      local_res8.s.LowPart._0_1_ = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar29.Value;
        local_res8.s.HighPart = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InterpToMovementComponent.cpp"
                   ,0x31);
        uVar33 = 3;
        local_res8.s.LowPart._0_1_ = 3;
      }
    }
    FVar30 = local_340;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar29.Value;
      local_res8.s.HighPart = uVar27;
      local_340 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      local_res8.s.LowPart = CONCAT31(local_res8.s.LowPart._1_3_,uVar33) | 4;
      FVar30 = FVar31;
    }
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0)) {
    (**(code **)(this->_padding_ + 0x530))(this,0);
  }
  if ((((this->_padding_ != 0) &&
       (cVar19 = (**(code **)(this->_padding_ + 0x518))(this,param_1), cVar19 == '\0')) &&
      (FVar31 = *(FName *)(this->_padding_ + 0xa8), local_348 = FVar31, FVar31 != (FName)0x0)) &&
     (cVar19 = (**(code **)(this->_padding_ + 0x600))(this), cVar19 != '\0')) {
    local_360 = 0;
    cVar19 = (**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
    if (((cVar19 == '\0') && (this->bStopped != true)) &&
       (((*(uint *)((longlong)FVar31 + 8) >> 0x1e & 1) == 0 && ((this->ControlPoints).ArrayNum != 0)
        ))) {
      (**(code **)(this->_padding_ + 0x620))(this);
      if (0.0 < this->SpeedMultiplier) {
        param_1 = this->SpeedMultiplier * param_1;
      }
      local_368 = 0;
      memset(&local_2b8,0,0x100);
      fVar17 = __real_3951b717;
      fVar16 = __real_3f000000;
      fVar15 = __real_3f800000;
      dVar14 = __real_3ff0000000000000;
      local_2f8.Roll = 0.0;
      uStack_2dc = 0;
      uStack_2e0 = 0xffffffff;
      local_2b8.MyItem = -1;
      local_2b8.Time = 1.0;
      local_2b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_2b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_2b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_2b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      local_2b8.HitObjectHandle.ManagerInterface.InterfaceInstance._0_4_ = 0;
      local_2b8.HitObjectHandle.ManagerInterface.InterfaceInstance._4_4_ = 0;
      local_2b8.HitObjectHandle.InstanceIndex = -1;
      local_2b8.HitObjectHandle.ResolutionStatus = Invalid;
      local_2b8.HitObjectHandle._29_3_ = 0;
      iVar32 = iVar34;
joined_r0x0001478f9afe:
      iVar13 = iVar32;
      if (((param_1 < fVar17) || (this->MaxSimulationIterations <= iVar13)) ||
         (((*(uint *)((longlong)FVar31 + 8) >> 0x1e & 1) != 0 ||
          ((this->_padding_ == 0 || ((this->_padding_ & 0x100000) == 0)))))) goto LAB_1478fa077;
      iVar32 = iVar13 + 1;
      cVar19 = (**(code **)(this->_padding_ + 0x608))(this);
      fVar38 = param_1;
      if (cVar19 != '\0') {
        fVar37 = this->MaxSimulationTimeStep;
        if (fVar37 < param_1) {
          if (iVar32 < this->MaxSimulationIterations) {
            fVar38 = param_1 * fVar16;
            if (fVar37 <= param_1 * fVar16) {
              fVar38 = fVar37;
            }
          }
          else {
            uVar27 = s_WarningCount + 1;
            if (((s_WarningCount < 100) ||
                (s_WarningCount = uVar27, ((byte)GFrameCounter & 0xf) == 0)) &&
               (s_WarningCount = uVar27, 2 < (byte)LogInterpToMovementComponent._0_1_)) {
              if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
                ::FString::FString((FString *)&local_358,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this->_padding_,(FString *)&local_358,
                           (UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterpToMovementComponent);
              if (local_358.StatData.Pad != (uchar  [8])0x0) {
                FMemory::Free((void *)local_358.StatData.Pad);
              }
            }
          }
        }
        if (fVar38 <= fVar17) {
          fVar38 = fVar17;
        }
      }
      param_1 = param_1 - fVar38;
      fVar37 = fVar38 * this->TimeMultiplier * this->CurrentDirection + this->CurrentTime;
      if (fVar15 <= fVar37) {
        fVar37 = fVar15;
      }
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      (**(code **)(this->_padding_ + 0x618))(this,&local_330,fVar37);
      dVar8 = dVar14 / (double)fVar38;
      auVar5._8_4_ = SUB84(dStack_328 * dVar8,0);
      auVar5._0_8_ = local_330 * dVar8;
      auVar5._12_4_ = (int)((ulonglong)(dStack_328 * dVar8) >> 0x20);
      this->_padding_ = (longlong)(local_330 * dVar8);
      this->_padding_ = auVar5._8_8_;
      this->_padding_ = (longlong)(local_320 * dVar8);
      lVar35 = this->_padding_;
      local_318.X = *(double *)(lVar35 + 0x1f0);
      local_318.Y = *(double *)(lVar35 + 0x1f8);
      local_318.Z = *(double *)(lVar35 + 0x200);
      local_318.W = *(double *)(lVar35 + 0x208);
      this_02 = (FRotationConversionCache *)(lVar35 + 0x1e0);
      pFVar23 = FRotationConversionCache::GetOrCreatePayload(this_02);
      lVar35 = -(ulonglong)((pFVar23->CachedQuat).W != local_318.W);
      auVar6._8_4_ = (int)lVar35;
      auVar6._0_8_ = -(ulonglong)((pFVar23->CachedQuat).Z != local_318.Z);
      auVar6._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar27 = movmskpd((int)this_02,auVar6);
      lVar35 = -(ulonglong)(local_318.Y != (pFVar23->CachedQuat).Y);
      auVar7._8_4_ = (int)lVar35;
      auVar7._0_8_ = -(ulonglong)(local_318.X != (pFVar23->CachedQuat).X);
      auVar7._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      iVar20 = movmskpd((int)pFVar23,auVar7);
      if ((uVar27 & 0x3fffffff) != 0 || iVar20 != 0) {
        (pFVar23->CachedQuat).X = local_318.X;
        (pFVar23->CachedQuat).Y = local_318.Y;
        (pFVar23->CachedQuat).Z = local_318.Z;
        (pFVar23->CachedQuat).W = local_318.W;
        pTVar24 = UE::Math::TQuat<double>::Rotator(&local_318,&local_2f8);
        dVar8 = pTVar24->Yaw;
        (pFVar23->CachedRotator).Pitch = pTVar24->Pitch;
        (pFVar23->CachedRotator).Yaw = dVar8;
        (pFVar23->CachedRotator).Roll = pTVar24->Roll;
      }
      local_2d8.Pitch = (pFVar23->CachedRotator).Pitch;
      local_2d8.Yaw = (pFVar23->CachedRotator).Yaw;
      local_2d8.Roll = (pFVar23->CachedRotator).Roll;
      if ((this->bPauseOnImpact == 0) && (this->BehaviourType != OneShot)) {
        EVar2 = this->TeleportType;
        bVar3 = this->bSweep;
        pcVar4 = *(code **)(this->_padding_ + 0x570);
        pTVar25 = UE::Math::TRotator<double>::Quaternion(&local_2d8,&local_318);
        (*pcVar4)(this,&local_330,pTVar25,bVar3,&local_2b8,EVar2);
      }
      else {
        uVar27 = (uint)this->_padding_;
        *(uint *)&this->_padding_ = uVar27 | 4;
        EVar2 = this->TeleportType;
        bVar3 = this->bSweep;
        pcVar4 = *(code **)(this->_padding_ + 0x568);
        pTVar25 = UE::Math::TRotator<double>::Quaternion(&local_2d8,&local_318);
        (*pcVar4)(this,&local_330,pTVar25,bVar3,&local_2b8,EVar2);
        *(uint *)&this->_padding_ = uVar27;
        iVar34 = local_368;
      }
      FVar31 = local_348;
      if ((((*(uint *)((longlong)local_348 + 8) >> 0x1e & 1) != 0) || (this->_padding_ == 0)) ||
         ((this->_padding_ & 0x100000) == 0)) goto LAB_1478fa0c2;
      local_360 = local_360 & 0xffffffff00000000;
      fVar37 = 0.0;
      if (this->bIsWaiting == false) {
        fVar37 = CalculateNewTime(this,this->CurrentTime,local_2b8.Time * fVar38,&local_2b8,true,
                                  &this->bStopped,(float *)&local_360);
        this->CurrentTime = fVar37;
        fVar37 = (float)local_360;
      }
      if ((local_2b8.Time != 0.0) && (this->bIsWaiting == true)) {
        lVar35 = 2;
        puVar26 = local_1b8;
        pFVar28 = &local_2b8;
        do {
          uVar9 = *(undefined8 *)&pFVar28->Distance;
          uVar10 = *(undefined8 *)&pFVar28->Location;
          uVar11 = *(undefined8 *)&(pFVar28->Location).field_0x8;
          *puVar26 = *(undefined8 *)pFVar28;
          puVar26[1] = uVar9;
          uVar9 = *(undefined8 *)&(pFVar28->Location).field_0x10;
          uVar12 = *(undefined8 *)&pFVar28->ImpactPoint;
          puVar26[2] = uVar10;
          puVar26[3] = uVar11;
          uVar10 = *(undefined8 *)&(pFVar28->ImpactPoint).field_0x8;
          uVar11 = *(undefined8 *)&(pFVar28->ImpactPoint).field_0x10;
          puVar26[4] = uVar9;
          puVar26[5] = uVar12;
          uVar9 = *(undefined8 *)&pFVar28->Normal;
          uVar12 = *(undefined8 *)&(pFVar28->Normal).field_0x8;
          puVar26[6] = uVar10;
          puVar26[7] = uVar11;
          uVar10 = *(undefined8 *)&(pFVar28->Normal).field_0x10;
          uVar11 = *(undefined8 *)&pFVar28->ImpactNormal;
          puVar26[8] = uVar9;
          puVar26[9] = uVar12;
          uVar9 = *(undefined8 *)&(pFVar28->ImpactNormal).field_0x8;
          uVar12 = *(undefined8 *)&(pFVar28->ImpactNormal).field_0x10;
          puVar26[10] = uVar10;
          puVar26[0xb] = uVar11;
          uVar10 = *(undefined8 *)&pFVar28->TraceStart;
          uVar11 = *(undefined8 *)&(pFVar28->TraceStart).field_0x8;
          puVar26[0xc] = uVar9;
          puVar26[0xd] = uVar12;
          puVar26[0xe] = uVar10;
          puVar26[0xf] = uVar11;
          lVar35 = lVar35 + -1;
          puVar26 = puVar26 + 0x10;
          pFVar28 = (FHitResult *)&(pFVar28->TraceStart).field_0x10;
        } while (lVar35 != 0);
        local_b8 = this->CurrentTime;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnWaitEndDelegate,
                   local_1b8);
        this->bIsWaiting = false;
      }
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      fVar36 = 0.0;
      if (local_2b8.bBlockingHit == 0) {
        if (this->bStopped == true) {
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          this->_padding_ = uVar9;
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_1478fa077:
          (**(code **)(this->_padding_ + 0x550))(this);
          goto LAB_1478fa0c2;
        }
        if (fVar37 != 0.0) {
          fVar36 = fVar37 * this->Duration;
          goto LAB_1478fa02e;
        }
      }
      else {
        lVar35 = 0;
        if (this->_padding_ != 0) {
          lVar35 = *(longlong *)(this->_padding_ + 0xa8);
        }
        cVar19 = (**(code **)(this->_padding_ + 0x600))(this);
        if ((((cVar19 == '\0') || (lVar35 == 0)) || ((*(uint *)(lVar35 + 8) >> 0x1e & 1) != 0)) ||
           (((**(code **)(this->_padding_ + 0x548))(this,&local_2b8,fVar38,&local_330),
            (*(uint *)(lVar35 + 8) >> 0x1e & 1) != 0 || (this->_padding_ == 0))))
        goto LAB_1478fa077;
        fVar36 = (fVar15 - local_2b8.Time) * fVar38;
        FVar31 = local_348;
LAB_1478fa02e:
        iVar34 = iVar34 + 1;
        local_368 = iVar34;
      }
      if ((iVar34 < 3) && (fVar17 <= fVar36)) {
        param_1 = param_1 + fVar36;
        iVar32 = iVar13;
      }
      goto joined_r0x0001478f9afe;
    }
  }
LAB_1478fa0c2:
  uVar18 = local_res8.s.LowPart;
  if ((local_res8.s.LowPart & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar18 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((uVar18 & 4) != 0) && (FVar30 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_358.NameAndInfo.Index.Value = local_340.ComparisonIndex.Value;
      local_358.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_358.StatData.Pad[4] = '\0';
      local_358.StatData.Pad[5] = '\0';
      local_358.StatData.Pad[6] = '\0';
      local_358.StatData.Pad[7] = '\0';
      local_358.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_358.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_358.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_358.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_358);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateControlPoints @ 1478fb1c0

void __thiscall
UInterpToMovementComponent::UpdateControlPoints(UInterpToMovementComponent *this,bool param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  
  lVar5 = this->_padding_;
  if ((lVar5 != 0) && (param_1)) {
    dVar12 = *(double *)(lVar5 + 0x210);
    dVar13 = *(double *)(lVar5 + 0x218);
    dVar11 = *(double *)(lVar5 + 0x220);
    uVar21 = 0;
    this->TotalDistance = 0.0;
    if (((this->ControlPoints).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->ControlPoints).AllocatorInstance.Data;
    dVar10 = *(double *)pFVar6;
    dVar9 = *(double *)(pFVar6 + 8);
    dVar3 = *(double *)(pFVar6 + 0x10);
    if (((this->ControlPoints).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->ControlPoints).AllocatorInstance.Data[0x18] == (FScriptContainerElement)0x1) {
      dVar10 = dVar10 + dVar12;
      dVar9 = dVar9 + dVar13;
      dVar3 = dVar3 + dVar11;
    }
    iVar16 = (this->ControlPoints).ArrayNum;
    uVar15 = 0;
    if (0 < iVar16) {
      iVar22 = 1;
      uVar18 = uVar21;
      uVar20 = uVar21;
      do {
        uVar19 = (uint)uVar20;
        if (iVar22 < iVar16) {
          uVar23 = uVar19 + 1;
          uVar17 = 0;
          if ((int)uVar23 < iVar16) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->ControlPoints).AllocatorInstance.Data;
          auVar4 = *(undefined1 (*) [16])(pFVar6 + uVar18 + 0x28);
          uVar26 = auVar4._8_4_;
          uVar27 = auVar4._12_4_;
          dVar8 = auVar4._8_8_;
          dVar24 = *(double *)(pFVar6 + uVar18 + 0x38);
          uVar17 = uVar15;
          if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar25 = auVar4._0_8_;
          if ((this->ControlPoints).AllocatorInstance.Data[uVar18 + 0x40] ==
              (FScriptContainerElement)0x1) {
            dVar24 = dVar24 + dVar11;
            dVar25 = dVar25 + dVar12;
            dVar8 = dVar8 + dVar13;
            uVar26 = SUB84(dVar8,0);
            uVar27 = (undefined4)((ulonglong)dVar8 >> 0x20);
          }
          uVar17 = uVar15;
          if ((int)uVar19 < (this->ControlPoints).ArrayNum) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x20) =
               (float)SQRT((dVar8 - dVar9) * (dVar8 - dVar9) + (dVar25 - dVar10) * (dVar25 - dVar10)
                           + (dVar24 - dVar3) * (dVar24 - dVar3));
          uVar17 = uVar15;
          if ((int)uVar19 < (this->ControlPoints).ArrayNum) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this->TotalDistance =
               *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x20) +
               this->TotalDistance;
          dVar9 = (double)CONCAT44(uVar27,uVar26);
          dVar3 = dVar24;
          dVar10 = dVar25;
        }
        else {
          uVar23 = ~uVar19 >> 0x1f;
          uVar17 = uVar15;
          if ((int)uVar19 < iVar16) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x20) = 0;
          uVar17 = uVar15;
          if ((int)uVar19 < (this->ControlPoints).ArrayNum) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x24) = 0x3f800000
          ;
          uVar17 = uVar15;
          if ((int)uVar19 < (this->ControlPoints).ArrayNum) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x1c) = 0x3f800000
          ;
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        iVar16 = (this->ControlPoints).ArrayNum;
        uVar18 = uVar18 + 0x28;
        iVar22 = iVar22 + 1;
      } while ((int)(uVar19 + 1) < iVar16);
    }
    fVar28 = 0.0;
    uVar18 = uVar21;
    if (0 < iVar16) {
      do {
        uVar23 = (uint)uVar21;
        uVar17 = ~uVar23 >> 0x1f;
        uVar19 = uVar15;
        if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x1c) = fVar28;
        uVar19 = uVar15;
        if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x20) != 0.0) {
          uVar19 = uVar15;
          if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
            uVar19 = uVar17;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar1 = *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x20);
          fVar2 = this->TotalDistance;
          uVar19 = uVar15;
          if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
            uVar19 = uVar17;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x24) = fVar1 / fVar2;
          uVar19 = uVar15;
          if ((int)uVar23 < (this->ControlPoints).ArrayNum) {
            uVar19 = uVar17;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar28 = fVar28 + *(float *)((this->ControlPoints).AllocatorInstance.Data + uVar18 + 0x24)
          ;
        }
        uVar21 = (ulonglong)(uVar23 + 1);
        uVar18 = uVar18 + 0x28;
      } while ((int)(uVar23 + 1) < (this->ControlPoints).ArrayNum);
    }
  }
  return;
}

// execAddControlPointPosition @ 1479002a0

void __cdecl
UInterpToMovementComponent::execAddControlPointPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
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
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x610))(param_1,&local_28,local_res8[0] != 0);
  return;
}

// execFinaliseControlPoints @ 1479027d0

void __cdecl
UInterpToMovementComponent::execFinaliseControlPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FinaliseControlPoints((UInterpToMovementComponent *)param_1);
  return;
}

// execResetControlPoints @ 147907f40

void __cdecl
UInterpToMovementComponent::execResetControlPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x25 = 1;
  *(undefined4 *)&param_1[0xb].field_0x10 = 0;
  if (*(int *)&param_1[0xb].field_0x14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&param_1[0xb].field_0x8,0,
               (int *)&param_1[0xb].field_0x14);
    param_1[0xc].field_0x20 = 0;
    return;
  }
  param_1[0xc].field_0x20 = 0;
  return;
}

// execRestartMovement @ 147907fc0

void __cdecl
UInterpToMovementComponent::execRestartMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xb].field_0x20 = local_res8[0];
  *(undefined4 *)&param_1[0xb].field_0x18 = 0;
  *(undefined2 *)&param_1[0xb].field_0x24 = 0;
  return;
}

// execStopSimulating @ 147913d40

void __cdecl
UInterpToMovementComponent::execStopSimulating(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FHitResult *pFVar4;
  FHitResult local_108;
  
  memset(&local_108,0,0x100);
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.Time = 1.0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pFVar4 = &local_108;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar4 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x530))(param_1,0);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar1 = *(float *)&param_1[0xb].field_0x18;
  *(double *)&param_1[5].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_1[5].field_0x18 = uVar3;
  *(double *)&param_1[5].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FOnInterpToStopDelegate::Broadcast((FOnInterpToStopDelegate *)&param_1[8].field_0x10,pFVar4,fVar1)
  ;
  return;
}

