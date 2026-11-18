// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 54

// StaticClass @ 14b57b110

UClass * __cdecl UDS_RecvMoveBaseProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveBaseProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveBaseProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveBaseProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveBaseProcess>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton;
}

// UDS_RecvMoveBaseProcess @ 14b57dbf0

UDS_RecvMoveBaseProcess * __thiscall
UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess
          (UDS_RecvMoveBaseProcess *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_RecvMoveBaseProcess__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->StopLerpTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EntityVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->EntityVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->EntityVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->bIsFallingLanded = false;
  this->FallingVelocity = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviousTargetDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousTargetDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviousTargetDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_RecvMoveBaseProcess @ 14b57e3d0

void __thiscall UDS_RecvMoveBaseProcess::~UDS_RecvMoveBaseProcess(UDS_RecvMoveBaseProcess *this)

{
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b57fe10

UClass * __cdecl UDS_RecvMoveBaseProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveBaseProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveBaseProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveBaseProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveBaseProcess>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveBaseProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveBaseProcess @ 14b580930

void __cdecl UDS_RecvMoveBaseProcess::StaticRegisterNativesUDS_RecvMoveBaseProcess(void)

{
  return;
}

// UDS_RecvMoveBaseProcess @ 14bb4cba0

UDS_RecvMoveBaseProcess * __thiscall
UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess
          (UDS_RecvMoveBaseProcess *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  UClass *pUVar4;
  FWeakObjectPtr FVar5;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  UDS_RecvProcessBase::UDS_RecvProcessBase((UDS_RecvProcessBase *)this,param_1);
  FVar5 = (FWeakObjectPtr)this->_padding_;
  FVar6.ObjectIndex = 0;
  FVar6.ObjectSerialNumber = 0;
  this->_padding_ = (longlong)&___7UDS_RecvMoveBaseProcess__6B_;
  this->StopLerpTime = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EntityVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->EntityVelocity).field0_0x0._s_0.Y = (double)uVar2;
  (this->EntityVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->bIsFallingLanded = false;
  this->FallingVelocity = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviousTargetDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousTargetDirection).field0_0x0._s_0.Y = (double)uVar2;
  (this->PreviousTargetDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (FVar5 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bb4cc3a;
  }
  FVar5 = FVar6;
LAB_14bb4cc3a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18 = FVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar3) {
    local_res20 = FWeakObjectPtr::Get(local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    UDS_RecvProcessBase::Initialize
              ((UDS_RecvProcessBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
  }
  return this;
}

// AdjustChildEntityToFloor @ 14bb4fc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::AdjustChildEntityToFloor
          (UDS_RecvMoveBaseProcess *this,FDS_EntityBase *param_1,TVector<double> *param_2)

{
  float fVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *pUVar5;
  TRotator<double> *this_00;
  longlong lVar6;
  FWeakObjectPtr local_res10;
  ulong64 local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  TArray<ECollisionChannel,TSizedDefaultAllocator<32>_> local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  TVector<double>_u_0 local_98;
  TRotator<double> local_78 [4];
  
  local_res20 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res20);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4);
    bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
      UDS_MovementCore::GetActorLocation(pUVar5,(TVector<double> *)&local_e8._s_0);
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
      this_00 = UDS_MovementCore::GetActorRotation(pUVar5,local_78);
      UE::Math::TRotator<double>::RotateVector(this_00,(TVector<double> *)&local_d0._s_0,param_2);
      fVar1 = param_1->ScaledCapsuleHalfHeight;
      local_78[0].Roll = local_d0._s_0.Z + local_e8._s_0.Z;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_108,(int *)((longlong)&local_100 + 4));
      _Src.Data = local_108.Data;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = iVar3 + 1;
      local_100 = CONCAT44(local_100._4_4_,local_f8.ArrayNum);
      *(undefined4 *)(local_108.Data + (longlong)iVar3 * 4) = 0x13;
      lVar6 = (longlong)local_f8.ArrayNum;
      if (local_f8.ArrayNum == 0) {
        local_f8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_f8.ArrayNum,0,&local_f8.AllocatorInstance,local_f8.ArrayNum,
                   &local_f8.ArrayMax);
        memcpy(local_f8.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
      }
      local_98._8_4_ = SUB84(local_e8._s_0.Y + local_d0._s_0.Y,0);
      local_98._0_8_ = local_e8._s_0.X + local_d0._s_0.X;
      local_98._12_4_ = (int)((ulonglong)(local_e8._s_0.Y + local_d0._s_0.Y) >> 0x20);
      local_98._s_0.Z = local_78[0].Roll;
      DS_Util::GetFloorLocationByLocation
                (&local_b8,(TVector<double> *)&local_98._s_0,&local_f8,fVar1 + fVar1,false);
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)local_b8.field0_0x0._0_8_ >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_b8.field0_0x0._s_0.X,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_b8.field0_0x0._8_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_b8.field0_0x0._s_0.Y,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_b8.field0_0x0._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_b8.field0_0x0._s_0.Z,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        (param_2->field0_0x0)._s_0.Z =
             ((double)fVar1 + local_b8.field0_0x0._s_0.Z) - local_e8._s_0.Z;
      }
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
    }
  }
  return;
}

// AdjustSpecialHeightLocation @ 14bb4fef0

void __thiscall
UDS_RecvMoveBaseProcess::AdjustSpecialHeightLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  bool bVar4;
  UDS_CharStateData *pUVar5;
  ADS_NetCharacter *this_00;
  ADS_DummyNetCharacter *this_01;
  UObject *pUVar6;
  double dVar7;
  double dVar8;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_38 [2];
  
  bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar4) {
LAB_14bb5003a:
    uVar3 = (param_1->StateFlags).Packed;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (((uVar3 >> 0x23 & 3) != 0) || (pUVar6[3].field_0x6 == '\x01')) {
      dVar7 = (param_1->ServerPosition).field0_0x0._s_0.Z;
      dVar1 = (param_3->field0_0x0)._s_0.Z;
      dVar8 = dVar7 - dVar1;
      if (__real_3e45798ee0000000 <= dVar8 * dVar8) {
        dVar7 = (double)(param_2 * __real_41200000);
        if (__real_3ff0000000000000 <= (double)(param_2 * __real_41200000)) {
          dVar7 = __real_3ff0000000000000;
        }
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        dVar7 = dVar7 * dVar8 + dVar1;
      }
      (param_3->field0_0x0)._s_0.Z = dVar7;
    }
    return;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8.ObjectIndex = 1;
  local_res8.ObjectSerialNumber = 0;
  bVar4 = UDS_CharStateData::HasCharState(pUVar5,(EDS_CharState *)&local_res8);
  if (!bVar4) goto LAB_14bb5003a;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8.ObjectIndex = 6;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res8);
  if (bVar4) {
    return;
  }
  cVar2 = (char)this->_padding_;
  if (cVar2 == '\x03') {
    ADS_NetCharacter::GetNetCharacter((ulong64)&local_res8);
    bVar4 = TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      this_00 = (ADS_NetCharacter *)FWeakObjectPtr::Get(&local_res8);
      ADS_NetCharacter::GetFluxSurfaceLocation(this_00,(TVector<double> *)&local_38[0]._s_0);
      goto LAB_14bb5000c;
    }
  }
  else if (cVar2 == '\x04') {
    ADS_DummyNetCharacter::GetDummyNetCharacter((ulong64)&local_res8,SUB81(this->_padding_,0));
    bVar4 = TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar4) {
      this_01 = (ADS_DummyNetCharacter *)FWeakObjectPtr::Get(&local_res8);
      ADS_DummyNetCharacter::GetFluxSurfaceLocation(this_01,(TVector<double> *)&local_38[0]._s_0);
      goto LAB_14bb5000c;
    }
  }
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_14bb5000c:
  if ((((double)local_38[0]._0_8_ == 0.0) && ((double)local_38[0]._8_8_ == 0.0)) &&
     ((double)local_38[0]._16_8_ == 0.0)) {
    return;
  }
  (param_3->field0_0x0)._s_0.Z = (double)local_38[0]._16_8_;
  return;
}

// AdjustToFloorLocation @ 14bb500d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::AdjustToFloorLocation
          (UDS_RecvMoveBaseProcess *this,FDS_EntityBase *param_1,FDS_NetSyncData *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double *pdVar2;
  float fVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined1 local_38 [48];
  
  local_58 = *(undefined4 *)&param_3->field0_0x0;
  uStack_54 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uStack_50 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uStack_4c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  local_48 = (param_3->field0_0x0)._s_0.Z;
  fVar3 = param_1->ScaledCapsuleHalfHeight + param_1->ScaledCapsuleHalfHeight;
  pdVar2 = (double *)(**(code **)(this->_padding_ + 0x350))(local_58,local_38,&local_58,fVar3);
  dVar1 = pdVar2[1];
  (param_3->field0_0x0)._s_0.X = *pdVar2;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = pdVar2[2];
  dVar1 = (param_2->ServerPosition).field0_0x0._s_0.Z;
  if (fVar3 < (float)((uint)(float)((param_3->field0_0x0)._s_0.Z - dVar1) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    (param_3->field0_0x0)._s_0.Z = dVar1;
  }
  return;
}

// AdjustVelocityOnDirectionChange @ 14bb50170

void __thiscall
UDS_RecvMoveBaseProcess::AdjustVelocityOnDirectionChange
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_b0;
  
  fVar9 = __real_3f800000;
  dVar16 = (param_1->VelocityVector).field0_0x0._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar17 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar17 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar17 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar17 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar17 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar17 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return;
  }
  dVar1 = (param_1->VelocityVector).field0_0x0._s_0.Y;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar19 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  dVar11 = dVar16 * dVar16 + dVar1 * dVar1;
  if (dVar11 == __real_3ff0000000000000) {
    if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
      auVar10 = *(undefined1 (*) [16])&(param_1->VelocityVector).field0_0x0;
      uVar14 = auVar10._0_4_;
      uVar15 = auVar10._4_4_;
      local_b0 = *(double *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10);
      uVar18 = SUB84(local_b0,0);
      uVar19 = (undefined4)((ulonglong)local_b0 >> 0x20);
      dVar16 = auVar10._0_8_;
      dVar1 = auVar10._8_8_;
      goto LAB_14bb502e1;
    }
  }
  else {
    if (dVar11 < __real_3e45798ee0000000) {
      local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      dVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      dVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      goto LAB_14bb502e1;
    }
    dVar16 = dVar16 * (__real_3ff0000000000000 / SQRT(dVar11));
    dVar1 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar11));
  }
  uVar14 = SUB84(dVar16,0);
  uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  uVar18 = 0;
  uVar19 = 0;
  local_b0 = 0.0;
LAB_14bb502e1:
  dVar11 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  auVar10._0_8_ = dVar11 * dVar11;
  auVar10._8_8_ = 0;
  auVar12._0_8_ = dVar2 * dVar2 + auVar10._0_8_;
  auVar12._8_8_ = 0;
  auVar10 = sqrtpd(auVar10,auVar12);
  if (__real_3f800000 <= (float)auVar10._0_8_) {
    if (auVar12._0_8_ == __real_3ff0000000000000) {
      uVar17 = 0.0;
      dVar4 = dVar11;
      dVar13 = dVar2;
      if ((param_2->field0_0x0)._s_0.Z == 0.0) {
        uVar17 = (param_2->field0_0x0)._s_0.Z;
        dVar4 = (param_2->field0_0x0)._s_0.X;
        dVar13 = (param_2->field0_0x0)._s_0.Y;
      }
    }
    else {
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      dVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      if (__real_3e45798ee0000000 <= auVar12._0_8_) {
        uVar17 = 0.0;
        dVar4 = dVar11 * (__real_3ff0000000000000 / SQRT(auVar12._0_8_));
        dVar13 = (__real_3ff0000000000000 / SQRT(auVar12._0_8_)) * dVar2;
      }
    }
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    dVar5 = (double)(float)(dVar2 * dVar1 + dVar11 * dVar16 +
                           dVar3 * (double)CONCAT44(uVar19,uVar18));
    dVar6 = dVar5 * (double)CONCAT44(uVar19,uVar18);
    fVar7 = (float)(dVar13 * dVar1 + dVar4 * dVar16 +
                   (double)uVar17 * (double)CONCAT44(uVar19,uVar18));
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= __real_bf800000) {
      fVar7 = __real_bf800000;
    }
    fVar8 = __real_bf800000;
    if ((__real_bf800000 <= fVar7) && (fVar8 = fVar7, __real_3f800000 <= fVar7)) {
      fVar8 = __real_3f800000;
    }
    fVar8 = acosf(fVar8);
    fVar8 = fVar8 * __real_42652ee0;
    fVar7 = __real_3f666666;
    if (__real_41f00000 < fVar8) {
      if (__real_42b40000 < fVar8) {
        fVar7 = (fVar9 - (fVar8 - __real_42b40000) * __real_3c360b61) * __real_3e99999a;
      }
      else {
        fVar7 = __real_3f666666 - (fVar8 - __real_41f00000) * __real_3c23d70a;
      }
    }
    dVar4 = (double)fVar7;
    fVar9 = expf(param_3 * __real_c1200000);
    dVar13 = (double)fVar9;
    (param_2->field0_0x0)._s_0.X = dVar4 * (dVar11 - dVar5 * dVar16) * dVar13 + dVar5 * dVar16;
    (param_2->field0_0x0)._s_0.Y = dVar4 * (dVar2 - dVar5 * dVar1) * dVar13 + dVar5 * dVar1;
    (param_2->field0_0x0)._s_0.Z = dVar4 * (dVar3 - dVar6) * dVar13 + dVar6;
  }
  else {
    dVar11 = (double)(float)auVar10._0_8_;
    (param_2->field0_0x0)._s_0.X = dVar11 * dVar16;
    (param_2->field0_0x0)._s_0.Y = dVar11 * dVar1;
    (param_2->field0_0x0)._s_0.Z = dVar11 * (double)CONCAT44(uVar19,uVar18);
    *(undefined4 *)&(this->PreviousTargetDirection).field0_0x0 = uVar14;
    *(undefined4 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 4) = uVar15;
    (this->PreviousTargetDirection).field0_0x0._s_0.Y = dVar1;
    *(double *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 0x10) = local_b0;
  }
  return;
}

// ApplyAccelerationLimits @ 14bb50580

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::ApplyAccelerationLimits
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  dVar17 = (param_1->field0_0x0)._s_0.Z;
  dVar15 = (param_1->field0_0x0)._s_0.X;
  dVar16 = (param_1->field0_0x0)._s_0.Y;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = __real_3ff0000000000000;
  dVar4 = dVar16 * dVar16 + dVar15 * dVar15 + dVar17 * dVar17;
  if (dVar4 == __real_3ff0000000000000) {
    uVar5 = (param_1->field0_0x0)._s_0.X;
    uVar6 = (param_1->field0_0x0)._s_0.Y;
    uVar7 = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar4) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar4;
      dVar14 = __real_3ff0000000000000 / SQRT(dVar4);
      uVar5 = dVar15 * dVar14;
      uVar6 = dVar16 * dVar14;
      uVar7 = dVar17 * dVar14;
    }
  }
  dVar17 = (param_2->field0_0x0)._s_0.Z;
  dVar15 = (param_2->field0_0x0)._s_0.X;
  dVar16 = (param_2->field0_0x0)._s_0.Y;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar8 = sqrtpd(auVar8,auVar3);
  if (0.0 < (float)auVar8._0_8_) {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    fVar18 = param_4 * param_3;
    dVar4 = dVar15 * (double)uVar5 + dVar16 * (double)uVar6 + dVar17 * (double)uVar7;
    dVar15 = dVar15 - dVar4 * (double)uVar5;
    dVar16 = dVar16 - dVar4 * (double)uVar6;
    fVar11 = (float)dVar4;
    dVar17 = dVar17 - dVar4 * (double)uVar7;
    if (fVar11 <= 0.0) {
      if (param_5 <= 0.0) {
        param_5 = 0.0;
      }
      if (param_6 <= 0.0) {
        param_6 = 0.0;
      }
      fVar12 = param_5 * param_6 * param_3;
      fVar13 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar12 <= (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar13 = fVar12;
      }
      fVar13 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
    }
    else {
      fVar13 = fVar18;
      if (fVar11 <= fVar18) {
        fVar13 = fVar11;
      }
    }
    dVar4 = (double)fVar13;
    auVar10._0_8_ = dVar15 * dVar15;
    auVar10._8_8_ = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar16 * dVar16 + auVar10._0_8_ + dVar17 * dVar17;
    auVar8 = sqrtpd(auVar10,auVar2);
    fVar11 = (float)auVar8._0_8_;
    if ((0.0 < fVar11) && (fVar18 < fVar11)) {
      dVar14 = (double)(fVar18 / fVar11);
      dVar15 = dVar15 * dVar14;
      dVar16 = dVar16 * dVar14;
      dVar17 = dVar17 * dVar14;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar15 + dVar4 * (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16 + dVar4 * (double)uVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar17 + dVar4 * (double)uVar7;
  }
  else {
    auVar9._0_8_ = dVar15 * dVar15;
    auVar9._8_8_ = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar16 * dVar16 + auVar9._0_8_ + dVar17 * dVar17;
    auVar8 = sqrtpd(auVar9,auVar1);
    fVar11 = (float)auVar8._0_8_;
    if (0.0 < fVar11) {
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      if (param_4 * param_3 < fVar11) {
        dVar4 = (double)((param_4 * param_3) / fVar11);
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * dVar15;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * dVar16;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar17;
        return __return_storage_ptr__;
      }
    }
    dVar15 = (param_2->field0_0x0)._s_0.Y;
    dVar17 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar17;
  }
  return __return_storage_ptr__;
}

// ApplyHeightLocation @ 14bb50860

void __thiscall
UDS_RecvMoveBaseProcess::ApplyHeightLocation(UDS_RecvMoveBaseProcess *this,TVector<double> *param_1)

{
  longlong *this_00;
  UDS_MovementCore *this_01;
  UObject *pUVar1;
  TVector<double> local_38;
  undefined1 local_20 [16];
  double local_10;
  
  this_00 = &this->_padding_;
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_MovementCore::GetActorLocation(this_01,&local_38);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x330))(pUVar1,local_20);
  local_38.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_10 = local_38.field0_0x0._s_0.Z;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x358))(pUVar1,&local_38);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x380))(pUVar1,local_20);
  return;
}

// ApplyHysteresis @ 14bb50900

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::ApplyHysteresis
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (0.0 < param_2) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    auVar6._0_8_ = dVar1 * dVar1;
    auVar6._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar2 * dVar2 + auVar6._0_8_ + dVar3 * dVar3;
    auVar7 = sqrtpd(auVar6,auVar7);
    fVar5 = (float)auVar7._0_8_;
    if ((0.0 < fVar5) && (fVar5 < param_2)) {
      if (param_2 <= __real_358637bd) {
        param_2 = __real_358637bd;
      }
      fVar5 = expf((fVar5 / param_2) * __real_c0c00000);
      dVar4 = (double)(__real_3f800000 - fVar5);
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar3;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ApplyLandingLogic @ 14bb509f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::ApplyLandingLogic
          (UDS_RecvMoveBaseProcess *this,TVector<double> *param_1,FHitResult *param_2,float param_3,
          float param_4,FDS_EntityBase *param_5)

{
  UObject *pUVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar6;
  double dVar5;
  float fVar7;
  
  uVar3 = SUB84(__real_bff0000000000000,0);
  uVar6 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y *
          *(double *)&(param_2->ImpactNormal).field_0x8 +
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * *(double *)&param_2->ImpactNormal
          + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
            *(double *)&(param_2->ImpactNormal).field_0x10;
  if (__real_bff0000000000000 <= dVar4) {
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    uVar3 = SUB84(dVar4,0);
    uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar4 = acos((double)CONCAT44(uVar6,uVar3));
  fVar7 = (float)dVar4 * __real_42652ee0;
  fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x480))(pUVar1);
  if (fVar7 < fVar2) {
    dVar4 = (double)(param_3 * this->FallingVelocity + param_4);
    dVar5 = (double)(float)((double)param_5->ScaledCapsuleHalfHeight +
                           *(double *)&(param_2->ImpactPoint).field_0x10);
    (param_1->field0_0x0)._s_0.Z = dVar4;
    if (dVar4 < dVar5) {
      (param_1->field0_0x0)._s_0.Z = dVar5;
      this->bIsFallingLanded = true;
    }
  }
  return;
}

// CalculateSmoothTime @ 14bb537a0

float __thiscall
UDS_RecvMoveBaseProcess::CalculateSmoothTime(UDS_RecvMoveBaseProcess *this,float param_1)

{
  float fVar1;
  
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  fVar1 = __real_3f800000 / param_1;
  if (fVar1 <= __real_41f00000) {
    return __real_3e800000;
  }
  if (__real_42700000 <= fVar1) {
    return __real_3dcccccd;
  }
  return __real_3e800000 - (fVar1 - __real_41f00000) * __real_3ba3d70a;
}

// CheckLanding @ 14bb542b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_RecvMoveBaseProcess::CheckLanding
          (UDS_RecvMoveBaseProcess *this,TVector<double> *param_1,FHitResult *param_2,
          FDS_EntityBase *param_3)

{
  bool bVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._0_4_ = *(undefined4 *)&param_1->field0_0x0;
  local_38._4_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  local_38._8_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  local_38._12_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_20._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_38._s_0.Z = local_20._s_0.Z - ___real_40dd4c0000000000;
  local_20._0_4_ = local_38._0_4_;
  local_20._4_4_ = local_38._4_4_;
  local_20._8_4_ = local_38._8_4_;
  local_20._12_4_ = local_38._12_4_;
  pFVar2 = (FWeakObjectPtr *)(**(code **)(param_3->_padding_ + 0x160))(param_3,local_res8);
  bVar1 = DS_Util::GetNpcLocationSweepTest
                    ((TVector<double> *)&local_20._s_0,(TVector<double> *)&local_38._s_0,
                     (TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_,
                     (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)*pFVar2,param_2);
  return bVar1;
}

// CheckStopMove @ 14bb547d0

bool __thiscall
UDS_RecvMoveBaseProcess::CheckStopMove
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  return ((param_1->StateFlags).Packed & 3) == 0;
}

// DetectDirectionChange @ 14bb5da80

bool __thiscall
UDS_RecvMoveBaseProcess::DetectDirectionChange
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  dVar1 = (param_1->VelocityVector).field0_0x0._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar5 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar5 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return false;
  }
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&param_2->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && (uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
         (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
     (uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return false;
  }
  dVar2 = (param_1->VelocityVector).field0_0x0._s_0.Y;
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar4 == __real_3ff0000000000000) {
    if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
      uVar5 = (param_1->VelocityVector).field0_0x0._s_0.Y;
      uVar6 = (param_1->VelocityVector).field0_0x0._s_0.X;
      uVar7 = (param_1->VelocityVector).field0_0x0._s_0.Z;
      goto LAB_14bb5db96;
    }
  }
  else {
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar4 < __real_3e45798ee0000000) goto LAB_14bb5db96;
    dVar1 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar4));
    dVar2 = dVar2 * (__real_3ff0000000000000 / SQRT(dVar4));
  }
  uVar5 = dVar2;
  uVar6 = dVar1;
  uVar7 = 0.0;
LAB_14bb5db96:
  dVar1 = *(double *)&(this->PreviousTargetDirection).field0_0x0;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar3 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar3 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return false;
  }
  return (float)((double)uVar5 * (this->PreviousTargetDirection).field0_0x0._s_0.Y +
                 (double)uVar6 * dVar1 +
                (double)uVar7 * (this->PreviousTargetDirection).field0_0x0._s_0.Z) < __real_3f34fdf4
  ;
}

// GetEntityHeightLocation @ 14bb65200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall
UDS_RecvMoveBaseProcess::GetEntityHeightLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3,bool param_4)

{
  undefined8 uVar1;
  FDS_EntityBase *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TVector<double>_u_0 local_38 [2];
  
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar2 == (FDS_EntityBase *)0x0) || (0 < (param_1->HeightMoveDataList).ArrayNum)) {
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    uVar3 = (undefined4)uVar1;
    uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    local_38[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
    local_38[0]._16_8_ = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
    if (param_4) {
      AdjustToFloorLocation(this,pFVar2,param_1,(TVector<double> *)&local_38[0]._s_0);
      uVar3 = (undefined4)local_38[0]._s_0.Z;
      uVar4 = (undefined4)((ulonglong)local_38[0]._16_8_ >> 0x20);
    }
    else {
      AdjustSpecialHeightLocation(this,param_1,param_2,(TVector<double> *)&local_38[0]._s_0);
      uVar3 = (undefined4)local_38[0]._s_0.Z;
      uVar4 = (undefined4)((ulonglong)local_38[0]._16_8_ >> 0x20);
    }
  }
  return (float)(double)CONCAT44(uVar4,uVar3);
}

// GetEntityLocation @ 14bb652b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::GetEntityLocation
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  UDS_MovementCore *pUVar3;
  
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
              (**(code **)(pFVar2->_padding_ + 0x1d0))(pFVar2);
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorRelativeLocation(pUVar3,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorLocation(pUVar3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEntityRotation @ 14bb65340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TRotator<double> * __thiscall
UDS_RecvMoveBaseProcess::GetEntityRotation
          (UDS_RecvMoveBaseProcess *this,TRotator<double> *__return_storage_ptr__)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  UDS_MovementCore *pUVar3;
  
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
              (**(code **)(pFVar2->_padding_ + 0x1d0))(pFVar2);
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorRelativeRotation(pUVar3,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorRotation(pUVar3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNearFloorLocation @ 14bb66c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::GetNearFloorLocation
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  FDS_EntityBase *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [4];
  
  pFVar6 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_68[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_68[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    local_68[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
    auVar10 = ZEXT416((uint)__real_43160000);
    fVar1 = pFVar6->ScaledCapsuleHalfHeight;
    DS_Util::GetNPCFloorLocationByLocation
              ((TVector<double> *)&local_88._s_0,(TVector<double> *)&local_68[0]._s_0,
               __real_43160000,false);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_88._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_88._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
        || (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)local_88._8_8_ >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_88._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                            ))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_88._16_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_88._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
    {
      dVar2 = (param_1->field0_0x0)._s_0.X;
      auVar7._0_8_ = dVar2 * dVar2;
      auVar7._8_8_ = 0;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_88._s_0.Y * local_88._s_0.Y + local_88._s_0.X * local_88._s_0.X;
      auVar8 = sqrtpd(auVar7,auVar8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar3 * dVar3 + auVar7._0_8_;
      auVar10 = sqrtpd(auVar10,auVar4);
      dVar9 = auVar10._0_8_ - auVar8._0_8_;
      if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f50624de0000000) {
        local_88._s_0.X = dVar2;
        local_88._s_0.Y = dVar3;
      }
      dVar2 = (double)fVar1 + local_88._s_0.Z;
    }
    else {
      local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_88._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_88._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  }
  return __return_storage_ptr__;
}

// GetNowMoveStateType @ 14bb66dd0

EDS_MoveStateType __thiscall
UDS_RecvMoveBaseProcess::GetNowMoveStateType(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1->StateFlags).Packed >> 4;
  if (((byte)uVar2 & 0x7f) == 9) {
    return ConstantVelocity;
  }
  if ((uVar2 & 0x7f) != 0) {
    uVar1 = *(undefined8 *)&(param_1->VelocityVector).field0_0x0;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      if (param_1->AccelerationValue < 0.0) {
        return Deceleration;
      }
      return (param_1->AccelerationValue <= 0.0) + Acceleration;
    }
  }
  return Stop;
}

// GetRotationInterpSpeed @ 14bb67d30

float __thiscall UDS_RecvMoveBaseProcess::GetRotationInterpSpeed(UDS_RecvMoveBaseProcess *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = SkillMode_Aim;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
    if (bVar1) {
      return __real_41a00000;
    }
  }
  return __real_41200000;
}

// GetWaterSurfaceLocation @ 14bb68550

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::GetWaterSurfaceLocation
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  ADS_NetCharacter *this_00;
  ADS_DummyNetCharacter *this_01;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (char)this->_padding_;
  if (cVar1 == '\x03') {
    ADS_NetCharacter::GetNetCharacter((ulong64)local_res8);
    bVar3 = TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar3) {
      this_00 = (ADS_NetCharacter *)FWeakObjectPtr::Get(local_res8);
      ADS_NetCharacter::GetFluxSurfaceLocation(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  else if (cVar1 == '\x04') {
    ADS_DummyNetCharacter::GetDummyNetCharacter((ulong64)local_res8,SUB81(this->_padding_,0));
    bVar3 = TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar3) {
      this_01 = (ADS_DummyNetCharacter *)FWeakObjectPtr::Get(local_res8);
      ADS_DummyNetCharacter::GetFluxSurfaceLocation(this_01,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// HandleChildEntityLocation @ 14bb694a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::HandleChildEntityLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3,bool param_4,FDS_EntityBase *param_5)

{
  uint uVar1;
  byte bVar2;
  UObject *pUVar3;
  double *pdVar4;
  longlong *this_00;
  double dVar5;
  undefined1 local_28 [32];
  
  if (!param_4) {
    uVar1 = (uint)(param_1->StateFlags).Packed >> 4;
    bVar2 = (byte)uVar1 & 0x7f;
    if (((uVar1 & 0x7f) != 0) &&
       ((0x20 < bVar2 || ((0x160000006U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0))))
    goto LAB_14bb694f1;
  }
  AdjustChildEntityToFloor(this,param_5,param_3);
LAB_14bb694f1:
  this_00 = &this->_padding_;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar3 + 0x368))(pUVar3,param_3);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pdVar4 = (double *)(**(code **)(*(longlong *)pUVar3 + 0x330))(pUVar3,local_28);
  dVar5 = *pdVar4 - (param_1->ServerPosition).field0_0x0._s_0.X;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar5 = pdVar4[1] - (param_1->ServerPosition).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar5 = pdVar4[2] - (param_1->ServerPosition).field0_0x0._s_0.Z,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    (**(code **)(*(longlong *)pUVar3 + 0x380))(pUVar3,&param_1->ServerPosition);
  }
  return;
}

// HandleDebugInfo @ 14bb69740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::HandleDebugInfo(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  long64 lVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  FDS_EntityBase *this_00;
  UDS_MovementCore *pUVar10;
  TVector<double> *pTVar11;
  FDS_EntityBase *pFVar12;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_01;
  FWeakObjectPtr *this_02;
  UDS_CharStatusData *pUVar13;
  FDS_StatusInfo *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  UDS_EntityData *pUVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  int aiStackX_8 [2];
  int iStackX_18;
  int iStackX_20;
  FString FStack_e8;
  FString FStack_d8;
  ulong64 uStack_c8;
  FString FStack_c0;
  TVector<double>_u_0 TStack_a8;
  FString FStack_88;
  TVector<double> aTStack_78 [2];
  
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if ((this_00 != (FDS_EntityBase *)0x0) &&
     (bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0), !bVar8)) {
    bVar8 = UDS_GameInstance::IsNameTagDebug();
    FDS_EntityBase::ShowDebugUI(this_00,bVar8);
    if (bVar8) {
      pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar11 = UDS_MovementCore::GetActorLocation(pUVar10,aTStack_78);
      TStack_a8._s_0.X = (pTVar11->field0_0x0)._s_0.X;
      TStack_a8._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
      TStack_a8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
      bVar8 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&TStack_a8._s_0);
      if (bVar8) {
        uStack_c8 = this->_padding_;
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&TStack_a8._s_0);
        fVar24 = param_1->ServerMoveSpeed;
        dVar1 = (pTVar11->field0_0x0)._s_0.X;
        dVar2 = (pTVar11->field0_0x0)._s_0.Y;
        auVar20._0_8_ = dVar1 * dVar1;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar2 * dVar2 + auVar20._0_8_;
        auVar21 = sqrtpd(auVar20,auVar21);
        fVar23 = (float)auVar21._0_8_;
        if (((char)this->_padding_ == '\x04') &&
           (pFVar12 = FDS_EntityBase::GetMainPlayerEntityBase(true),
           pFVar12 != (FDS_EntityBase *)0x0)) {
          uStack_c8 = pFVar12->EntityID;
          this_01 = (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                    (**(code **)(pFVar12->_padding_ + 0x78))(pFVar12);
          bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
          if (!bVar8) {
            this_02 = (FWeakObjectPtr *)(**(code **)(pFVar12->_padding_ + 0x78))(pFVar12,aiStackX_8)
            ;
            pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(this_02);
            pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&TStack_a8._s_0);
            fVar24 = param_1->ServerMoveSpeed;
            dVar1 = (pTVar11->field0_0x0)._s_0.X;
            dVar2 = (pTVar11->field0_0x0)._s_0.Y;
            auVar22._0_8_ = dVar1 * dVar1;
            auVar22._8_8_ = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar2 * dVar2 + auVar22._0_8_;
            auVar21 = sqrtpd(auVar22,auVar7);
            fVar23 = (float)auVar21._0_8_;
          }
        }
        iVar19 = 0;
        iStackX_20 = 0;
        iStackX_18 = 0;
        aiStackX_8[0] = 0;
        bVar8 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                           (void *)0x0);
        if (!bVar8) {
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Hp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            iVar19 = pFVar14->CurrentValue;
            iStackX_20 = (int)pFVar14->MaxValue;
          }
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Mp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            iStackX_18 = pFVar14->CurrentValue;
            aiStackX_8[0] = (int)pFVar14->MaxValue;
          }
        }
        uVar4 = (param_1->StateFlags).Packed;
        ::FString::FString(&FStack_e8,"EDS_HeightConditionType");
        pFVar15 = DS_Util::GetEnumToString
                            ((FString *)aTStack_78,&FStack_e8,(ulonglong)((uint)(uVar4 >> 0x23) & 3)
                            );
        cVar9 = (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
        uVar5 = (param_1->StateFlags).Packed;
        ::FString::FString(&FStack_d8,"EDS_MoveMode");
        pFVar16 = DS_Util::GetEnumToString
                            ((FString *)&TStack_a8._s_0,&FStack_d8,
                             (ulonglong)((uint)(uVar5 >> 4) & 0x7f));
        ::FString::FString(&FStack_88,
                           L"Moving - ID:{1}\nMoveMode: {2}\nBattleMode: {3}\nheightType: {4}\nSpeed {5} {6}"
                          );
        pwVar18 = L"False";
        if (cVar9 == '\x01') {
          pwVar18 = L"True";
        }
        DS_Util::GetFormatString<unsigned___int64,FString,wchar_t_const_*,FString,int,int>
                  (&FStack_c0,&FStack_88,uStack_c8,pFVar16,pwVar18,pFVar15,(int)fVar24,(int)fVar23);
        if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
        }
        if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
        }
        if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
        }
        if ((char)this->_padding_ == '\x05') {
          iVar3 = this_00->SpawnTableID;
          lVar6 = this_00->TableID;
          ::FString::FString(&FStack_e8,L"NpcBaseID:{1}, SpawnID:{2}\n");
          pFVar15 = DS_Util::GetFormatString<__int64,int>(&FStack_d8,&FStack_e8,lVar6,iVar3);
          ::FString::InsertAt(&FStack_c0,0,pFVar15);
          if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
          }
          if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
          }
        }
        ::FString::FString(&FStack_e8,L"HP:{1}/{2}, MP:{3}/{4}\n");
        pFVar15 = DS_Util::GetFormatString<int,int,int,int>
                            (&FStack_d8,&FStack_e8,iVar19,iStackX_20,iStackX_18,aiStackX_8[0]);
        ::FString::InsertAt(&FStack_c0,0,pFVar15);
        if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
        }
        if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
        }
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_EntityData::SetDebugString(pUVar17,&FStack_c0);
      }
      else {
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pFVar15 = ::FString::FString(&FStack_e8,"");
        UDS_EntityData::SetDebugString(pUVar17,pFVar15);
        FStack_c0.Data.AllocatorInstance.Data = FStack_e8.Data.AllocatorInstance.Data;
      }
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleNormalEntityLocation @ 14bb69760

void __thiscall
UDS_RecvMoveBaseProcess::HandleNormalEntityLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3,bool param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UObject *pUVar5;
  double *pdVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  local_48 = *(undefined4 *)&param_3->field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  local_38 = (param_3->field0_0x0)._s_0.Z;
  pcVar1 = *(code **)(this->_padding_ + 0x348);
  fVar7 = (float)(*pcVar1)(local_48,local_38,pcVar1,&local_48,param_4);
  dVar4 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = (param_1->NowPosition).field0_0x0._s_0.X - (param_3->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Z = (double)fVar7;
  uVar8 = SUB84(dVar2,0) & uVar9;
  uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11;
  if (((dVar4 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar4) ||
      (dVar2 = (param_1->NowPosition).field0_0x0._s_0.Y - (param_3->field0_0x0)._s_0.Y,
      uVar8 = SUB84(dVar2,0) & uVar9, uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
      dVar4 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar4)) ||
     (dVar2 = (param_1->NowPosition).field0_0x0._s_0.Z - (double)fVar7,
     uVar8 = SUB84(dVar2,0) & uVar9, uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
     dVar4 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar4)) {
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    (param_1->NowPosition).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_1->NowPosition).field0_0x0._s_0.Y = dVar3;
    (param_1->NowPosition).field0_0x0._s_0.Z = dVar2;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,param_3);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pdVar6 = (double *)(**(code **)(*(longlong *)pUVar5 + 0x330))(pUVar5,&local_48);
  dVar2 = *pdVar6 - (param_1->ServerPosition).field0_0x0._s_0.X;
  uVar8 = SUB84(dVar2,0) & uVar9;
  uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11;
  if (((dVar4 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar4) ||
      (dVar2 = pdVar6[1] - (param_1->ServerPosition).field0_0x0._s_0.Y,
      uVar8 = SUB84(dVar2,0) & uVar9, uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
      dVar4 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar4)) ||
     (dVar2 = pdVar6[2] - (param_1->ServerPosition).field0_0x0._s_0.Z,
     uVar9 = SUB84(dVar2,0) & uVar9, uVar11 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
     dVar4 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar4)) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5,&param_1->ServerPosition);
  }
  return;
}

// HasManualAnimStateTag @ 14bb69ae0

bool __thiscall
UDS_RecvMoveBaseProcess::HasManualAnimStateTag
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar1 = (param_1->StateFlags).Packed;
  uVar3 = uVar1 >> 4;
  bVar2 = (byte)(uVar1 >> 0x12) & 0x7f;
  if (bVar2 == 6) {
    if ((uVar3 & 0x7f) == 0) {
      return true;
    }
  }
  else if (bVar2 == 7) {
    return (uVar3 & 0x7f) == 0;
  }
  return false;
}

// Initialize @ 14bb6dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::Initialize
          (UDS_RecvMoveBaseProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  longlong *plVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this->_padding_ = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    *(EDS_EntityType *)&this->_padding_ = EVar1;
    this->_padding_ = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,this->_padding_);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
  }
  return;
}

// InitializeFallingVelocity @ 14bb6de00

void __thiscall
UDS_RecvMoveBaseProcess::InitializeFallingVelocity
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  
  uVar1 = (param_1->StateFlags).Packed;
  bVar3 = (byte)(uVar1 >> 0xb) & 0x7f;
  bVar2 = (byte)(uVar1 >> 4) & 0x7f;
  if (((bVar2 == 6) || (bVar2 == 0x21)) && (bVar3 != bVar2)) {
LAB_14bb6de33:
    this->FallingVelocity = 830.0;
    return;
  }
  if (bVar2 == 0x22) {
    if (bVar3 != 0x22) goto LAB_14bb6de33;
  }
  else if ((bVar2 == 7) && (bVar3 != 7)) {
    this->FallingVelocity = 1080.0;
    return;
  }
  if ((bVar2 == 9) && (bVar3 != 9)) {
    this->FallingVelocity = 0.0;
  }
  return;
}

// IsActiveRecvProcess @ 14bb6e1e0

bool __thiscall
UDS_RecvMoveBaseProcess::IsActiveRecvProcess(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  return true;
}

// IsGroundAttachMoveMode @ 14bb6ec80

bool __thiscall
UDS_RecvMoveBaseProcess::IsGroundAttachMoveMode(UDS_RecvMoveBaseProcess *this,EDS_MoveMode param_1)

{
  if ((param_1 < MountJump) && ((0x160000007U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return false;
}

// IsOvershoot @ 14bb6f050

bool __thiscall
UDS_RecvMoveBaseProcess::IsOvershoot
          (UDS_RecvMoveBaseProcess *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  return ((param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) *
         ((param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) +
         ((param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) *
         ((param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) +
         ((param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) *
         ((param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) < 0.0;
}

// OnEnter @ 14bb732b0

void __thiscall
UDS_RecvMoveBaseProcess::OnEnter(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EntityVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->EntityVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->EntityVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviousTargetDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousTargetDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreviousTargetDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// OnExit @ 14bb735c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::OnExit(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_InputData *this_00;
  FWeakObjectPtr local_res18 [2];
  
  UDS_RecvProcessBase::OnExit((UDS_RecvProcessBase *)this,param_1);
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      (**(code **)(pFVar2->_padding_ + 0x1b8))(pFVar2);
      bVar1 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar1) {
        this_00 = (UDS_InputData *)FWeakObjectPtr::Get(local_res18);
        UDS_InputData::SetIsActiveInput(this_00,false);
      }
    }
  }
  return;
}

// OnOffMoveStateTag @ 14bb74920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::OnOffMoveStateTag
          (UDS_RecvMoveBaseProcess *this,EDS_StateTagType param_1,EDS_StateTagType param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  EDS_StateTagType local_res10 [8];
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x178))(pFVar2,&local_res20);
    bVar1 = UDS_AbilitySystemComponent::HasStateTag
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res20,
                       local_res10);
    if (!bVar1) {
      UDS_AbilitySystemComponent::AddStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res20,local_res10)
      ;
    }
    bVar1 = UDS_AbilitySystemComponent::HasStateTag
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res20,
                       local_res18);
    if (bVar1) {
      UDS_AbilitySystemComponent::RemoveStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res20,local_res18)
      ;
    }
  }
  return;
}

// PostProcessData @ 14bb7e090

void __thiscall
UDS_RecvMoveBaseProcess::PostProcessData
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  
  UDS_RecvProcessBase::PostProcessData((UDS_RecvProcessBase *)this,param_1,param_2);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    uVar1 = (param_1->StateFlags).Packed;
    bVar4 = (byte)(uVar1 >> 0xb) & 0x7f;
    bVar3 = (byte)(uVar1 >> 4) & 0x7f;
    if (((bVar3 == 6) || (bVar3 == 0x21)) && (bVar4 != bVar3)) {
LAB_14bb7e0e1:
      this->FallingVelocity = 830.0;
      return;
    }
    if (bVar3 == 0x22) {
      if (bVar4 != 0x22) goto LAB_14bb7e0e1;
    }
    else if ((bVar3 == 7) && (bVar4 != 7)) {
      this->FallingVelocity = 1080.0;
      return;
    }
    if ((bVar3 == 9) && (bVar4 != 9)) {
      this->FallingVelocity = 0.0;
    }
  }
  return;
}

// PrepareSmoothDampParams @ 14bb7e610

FDS_SmoothDampParams * __thiscall
UDS_RecvMoveBaseProcess::PrepareSmoothDampParams
          (UDS_RecvMoveBaseProcess *this,FDS_SmoothDampParams *__return_storage_ptr__,float param_1)

{
  float fVar1;
  bool bVar2;
  UDS_MovementCore *this_00;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_41f00000;
  fVar3 = __real_3f800000;
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  __return_storage_ptr__->MaxAcceleration = 1000.0;
  fVar3 = fVar3 / param_1;
  fVar4 = __real_3e800000;
  if ((fVar1 < fVar3) && (fVar4 = __real_3dcccccd, fVar3 < __real_42700000)) {
    fVar4 = __real_3e800000 - (fVar3 - fVar1) * __real_3ba3d70a;
  }
  __return_storage_ptr__->SmoothTime = fVar4;
  __return_storage_ptr__->MaxSpeed = 5000.0;
  __return_storage_ptr__->HysteresisThreshold = 15.0;
  __return_storage_ptr__->DecelerationFactor = 1.0;
  __return_storage_ptr__->ZeroVelocityThreshold = 0.01;
  __return_storage_ptr__->MaxDeceleration = 3.4028235e+38;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar3 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    __return_storage_ptr__->MaxAcceleration = fVar3 * __real_3f99999a;
  }
  return __return_storage_ptr__;
}

// ProcessFalling @ 14bb7ebd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::ProcessFalling
          (UDS_RecvMoveBaseProcess *this,TVector<double> *param_1,FDS_NetSyncData *param_2,
          float param_3,float param_4,FDS_EntityBase *param_5)

{
  bool bVar1;
  longlong lVar2;
  FWeakObjectPtr *pFVar3;
  UObject *pUVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_178;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  TVector<double>_u_0 local_158;
  undefined1 local_138 [88];
  double local_e0;
  double local_d8;
  double local_d0;
  int local_94;
  FWeakObjectPtr local_80;
  FWeakObjectPtr FStack_78;
  IActorInstanceManagerInterface *local_70;
  undefined8 uStack_68;
  
  if ((__real_322bcc77 <
       (float)((uint)this->FallingVelocity & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (lVar2 = (**(code **)(param_5->_padding_ + 0x1d8))(param_5), lVar2 == 0)) {
    memset(local_138,0,0x100);
    local_178._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    uStack_160 = 0xffffffff;
    local_80.ObjectIndex = 0;
    local_80.ObjectSerialNumber = 0;
    FStack_78.ObjectIndex = 0;
    FStack_78.ObjectSerialNumber = 0;
    uStack_15b = 0;
    uStack_159 = 0;
    uStack_15c = 0;
    uStack_68._0_4_ = -1;
    uStack_68._4_1_ = Invalid;
    uStack_68._5_3_ = 0;
    local_158._s_0.Z = local_178._s_0.Z - ___real_40dd4c0000000000;
    local_70 = (IActorInstanceManagerInterface *)0x0;
    local_138._4_4_ = 1.0;
    local_178._0_4_ = *(undefined4 *)&param_1->field0_0x0;
    local_178._4_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    local_178._8_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    local_178._12_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_94 = -1;
    local_158._0_4_ = local_178._0_4_;
    local_158._4_4_ = local_178._4_4_;
    local_158._8_4_ = local_178._8_4_;
    local_158._12_4_ = local_178._12_4_;
    pFVar3 = (FWeakObjectPtr *)(**(code **)(param_5->_padding_ + 0x160))(param_5,local_res8);
    bVar1 = DS_Util::GetNpcLocationSweepTest
                      ((TVector<double> *)&local_178._s_0,(TVector<double> *)&local_158._s_0,
                       (TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_,
                       (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)*pFVar3,
                       (FHitResult *)local_138);
    if (!bVar1) {
      return;
    }
    uVar6 = SUB84(__real_bff0000000000000,0);
    uVar9 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar7 = local_d8 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
            local_e0 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
            local_d0 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (__real_bff0000000000000 <= dVar7) {
      if (__real_3ff0000000000000 <= dVar7) {
        dVar7 = __real_3ff0000000000000;
      }
      uVar6 = SUB84(dVar7,0);
      uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar7 = acos((double)CONCAT44(uVar9,uVar6));
    fVar10 = (float)dVar7 * __real_42652ee0;
    fVar5 = (float)(**(code **)(*(longlong *)pUVar4 + 0x480))(pUVar4);
    if (fVar5 <= fVar10) {
      return;
    }
    dVar7 = (double)(param_3 * this->FallingVelocity + param_4);
    dVar8 = (double)(float)((double)param_5->ScaledCapsuleHalfHeight + (double)local_138._56_8_);
    (param_1->field0_0x0)._s_0.Z = dVar7;
    if (dVar8 <= dVar7) {
      return;
    }
    (param_1->field0_0x0)._s_0.Z = dVar8;
  }
  this->bIsFallingLanded = true;
  return;
}

// RecvSyncTick @ 14bb7f660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::RecvSyncTick
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_1d8 [32];
  float local_198 [2];
  TVector<double>_u_0 local_190;
  FString local_178;
  double local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_RecvProcessBase::RecvSyncTick((UDS_RecvProcessBase *)this,param_1,param_2);
  bVar1 = UDS_SyncRecvComponent::HasHeightMoveData(this->_padding_);
  if (bVar1) {
    local_190._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    local_190._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_198[0] = 0.0;
    local_190._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar1 = UDS_SyncRecvComponent::UpdateHeightMove
                      (this->_padding_,param_2,local_198,(TVector<double> *)&local_190._s_0);
    if (bVar1) {
      *(undefined4 *)&(param_1->ServerPosition).field0_0x0 = local_190._0_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 4) = local_190._4_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 8) = local_190._8_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 0xc) = local_190._12_4_;
      (param_1->ServerPosition).field0_0x0._s_0.Z = local_190._s_0.Z;
      local_178.Data.AllocatorInstance.Data._0_4_ = local_190._0_4_;
      local_178.Data.AllocatorInstance.Data._4_4_ = local_190._4_4_;
      local_178.Data.ArrayNum = local_190._8_4_;
      local_178.Data.ArrayMax = local_190._12_4_;
      local_168 = local_190._s_0.Z;
      (**(code **)(this->_padding_ + 800))(this,param_1,param_2,&local_178);
      pUVar2 = UDS_LogManager::GetInst();
      if ((pUVar2 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
        pUVar2 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&local_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_RecvMoveBaseProcess::RecvSyncTick",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,local_158.Ptr,0x67,L"OutDeltaZ: %f OutPosition: %s");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        if ((void *)CONCAT44(local_178.Data.AllocatorInstance.Data._4_4_,
                             local_178.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_178.Data.AllocatorInstance.Data._4_4_,
                                         local_178.Data.AllocatorInstance.Data._0_4_));
        }
      }
    }
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  return;
}

// SetEntityHeightLocation @ 14bb8a4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::SetEntityHeightLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3,bool param_4)

{
  FDS_EntityBase *pFVar1;
  UDS_MovementCore *this_00;
  UObject *pUVar2;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  undefined1 local_38 [16];
  double local_28;
  
  pFVar1 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar1 != (FDS_EntityBase *)0x0) && ((param_1->HeightMoveDataList).ArrayNum < 1)) {
    local_68._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    if (param_4) {
      AdjustToFloorLocation(this,pFVar1,param_1,(TVector<double> *)&local_68._s_0);
    }
    else {
      AdjustSpecialHeightLocation(this,param_1,param_2,(TVector<double> *)&local_68._s_0);
    }
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(this_00,&local_50);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x330))(pUVar2,local_38);
    local_50.field0_0x0._s_0.Z = local_68._s_0.Z;
    local_28 = local_68._s_0.Z;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x358))(pUVar2,&local_50);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x380))(pUVar2,local_38);
  }
  return;
}

// SetEntityLocation @ 14bb8a600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::SetEntityLocation
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2,
          TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  byte bVar4;
  FDS_EntityBase *pFVar5;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  UObject *pUVar6;
  double *pdVar7;
  longlong *this_01;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_XMM2_Db;
  TVector<double>_u_0 local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  pFVar5 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    return;
  }
  this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
            (**(code **)(pFVar5->_padding_ + 0x1d0))(pFVar5);
  bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  local_68._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_68._0_4_ = *(undefined4 *)&param_3->field0_0x0;
  local_68._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  local_68._8_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  local_68._12_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  if (bVar3) {
    local_48 = local_68._0_4_;
    uStack_44 = local_68._4_4_;
    uStack_40 = local_68._8_4_;
    uStack_3c = local_68._12_4_;
    local_38 = local_68._s_0.Z;
    fVar8 = (float)(**(code **)(this->_padding_ + 0x348))
                             (this,param_1,CONCAT44(in_XMM2_Db,param_2),&local_48,param_4);
    dVar2 = __real_3f1a36e2e0000000;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_68._s_0.Z = (double)fVar8;
    dVar1 = (param_1->NowPosition).field0_0x0._s_0.X -
            (double)CONCAT44(local_68._4_4_,local_68._0_4_);
    uVar9 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar9) &&
          (double)CONCAT44(uVar11,uVar9) != __real_3f1a36e2e0000000) ||
        (dVar1 = (param_1->NowPosition).field0_0x0._s_0.Y -
                 (double)CONCAT44(local_68._12_4_,local_68._8_4_),
        uVar9 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar9) &&
        (double)CONCAT44(uVar11,uVar9) != __real_3f1a36e2e0000000)) ||
       (dVar1 = (param_1->NowPosition).field0_0x0._s_0.Z - local_68._s_0.Z,
       uVar9 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar9) &&
       (double)CONCAT44(uVar11,uVar9) != __real_3f1a36e2e0000000)) {
      (param_1->NowPosition).field0_0x0._s_0.X = (double)CONCAT44(local_68._4_4_,local_68._0_4_);
      (param_1->NowPosition).field0_0x0._s_0.Y = (double)CONCAT44(local_68._12_4_,local_68._8_4_);
      (param_1->NowPosition).field0_0x0._s_0.Z = local_68._s_0.Z;
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&local_68);
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pdVar7 = (double *)(**(code **)(*(longlong *)pUVar6 + 0x330))(pUVar6,&local_48);
    dVar1 = *pdVar7 - (param_1->ServerPosition).field0_0x0._s_0.X;
    uVar9 = SUB84(dVar1,0) & uVar10;
    uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & uVar12;
    if ((((double)CONCAT44(uVar11,uVar9) < dVar2 || (double)CONCAT44(uVar11,uVar9) == dVar2) &&
        (dVar1 = pdVar7[1] - (param_1->ServerPosition).field0_0x0._s_0.Y,
        uVar9 = SUB84(dVar1,0) & uVar10, uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & uVar12,
        (double)CONCAT44(uVar11,uVar9) < dVar2 || (double)CONCAT44(uVar11,uVar9) == dVar2)) &&
       (dVar1 = pdVar7[2] - (param_1->ServerPosition).field0_0x0._s_0.Z,
       uVar10 = SUB84(dVar1,0) & uVar10, uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & uVar12,
       (double)CONCAT44(uVar12,uVar10) < dVar2 || (double)CONCAT44(uVar12,uVar10) == dVar2)) {
      return;
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6,&param_1->ServerPosition);
    return;
  }
  if (!param_4) {
    uVar10 = (uint)(param_1->StateFlags).Packed >> 4;
    bVar4 = (byte)uVar10 & 0x7f;
    if (((uVar10 & 0x7f) != 0) &&
       ((0x20 < bVar4 || ((0x160000006U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0))))
    goto LAB_14bb8a81e;
  }
  AdjustChildEntityToFloor(this,pFVar5,(TVector<double> *)&local_68._s_0);
LAB_14bb8a81e:
  this_01 = &this->_padding_;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
  (**(code **)(*(longlong *)pUVar6 + 0x368))(pUVar6,&local_68);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
  pdVar7 = (double *)(**(code **)(*(longlong *)pUVar6 + 0x330))(pUVar6,&local_48);
  dVar1 = *pdVar7 - (param_1->ServerPosition).field0_0x0._s_0.X;
  uVar10 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar10) &&
        (double)CONCAT44(uVar12,uVar10) != __real_3f1a36e2e0000000) ||
      (dVar1 = pdVar7[1] - (param_1->ServerPosition).field0_0x0._s_0.Y,
      uVar10 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar10) &&
      (double)CONCAT44(uVar12,uVar10) != __real_3f1a36e2e0000000)) ||
     (dVar1 = pdVar7[2] - (param_1->ServerPosition).field0_0x0._s_0.Z,
     uVar10 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar10) &&
     (double)CONCAT44(uVar12,uVar10) != __real_3f1a36e2e0000000)) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    (**(code **)(*(longlong *)pUVar6 + 0x380))(pUVar6,&param_1->ServerPosition);
  }
  return;
}

// SetEntityRotation @ 14bb8a8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::SetEntityRotation(UDS_RecvMoveBaseProcess *this,TRotator<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  FDS_EntityBase *pFVar13;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  UDS_MovementCore *pUVar14;
  TRotator<double> *pTVar15;
  UObject *pUVar16;
  uint uVar17;
  TRotator<double> *pTVar18;
  code *pcVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar41;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  TRotator<double> local_58 [3];
  
  pFVar13 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar13 != (FDS_EntityBase *)0x0) {
    this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
              (**(code **)(pFVar13->_padding_ + 0x1d0))(pFVar13);
    bVar11 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar11) {
      pUVar14 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar18 = local_58;
      pTVar15 = UDS_MovementCore::GetActorRelativeRotation(pUVar14,pTVar18);
      local_58[0].Pitch = local_58[0].Pitch - param_1->Pitch;
      local_58[0].Yaw = local_58[0].Yaw - param_1->Yaw;
      local_58[0].Roll = local_58[0].Roll - param_1->Roll;
      auVar26._8_4_ = SUB84(local_58[0].Yaw,0);
      auVar26._0_8_ = local_58[0].Pitch;
      auVar26._12_4_ = (int)((ulonglong)local_58[0].Yaw >> 0x20);
      auVar27 = divpd(auVar26,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar27 = roundpd(in_XMM1,auVar27,3);
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar42._0_8_ = auVar27._0_8_ * dVar7;
      dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar42._8_8_ = auVar27._8_8_ * dVar8;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = local_58[0].Roll;
      local_58[0].Pitch = local_58[0].Pitch - auVar42._0_8_;
      local_58[0].Yaw = local_58[0].Yaw - auVar42._8_8_;
      auVar27 = divpd(auVar28,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar27 = roundpd(auVar42,auVar27,3);
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar29._8_4_ = SUB84(local_58[0].Yaw,0);
      auVar29._0_8_ = local_58[0].Pitch;
      auVar29._12_4_ = (int)((ulonglong)local_58[0].Yaw >> 0x20);
      local_58[0].Roll = local_58[0].Roll - auVar27._0_8_ * dVar5;
      dVar4 = 0.0 - auVar27._8_8_ * dVar6;
      uVar20 = -(ulonglong)(0.0 <= local_58[0].Pitch);
      uVar22 = -(ulonglong)(0.0 <= local_58[0].Yaw);
      auVar43._0_8_ = uVar20 & (ulonglong)local_58[0].Pitch;
      auVar43._8_4_ = (undefined4)(uVar22 & (ulonglong)local_58[0].Yaw);
      auVar43._12_4_ = (undefined4)((uVar22 & (ulonglong)local_58[0].Yaw) >> 0x20);
      dVar41 = auVar29._8_8_ + dVar8;
      uVar21 = -(ulonglong)(0.0 <= local_58[0].Roll);
      uVar23 = -(ulonglong)(0.0 <= dVar4);
      auVar56._0_4_ = ~(uint)uVar20 & SUB84(local_58[0].Pitch + dVar7,0);
      auVar56._4_4_ =
           ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)(local_58[0].Pitch + dVar7) >> 0x20);
      auVar56._8_4_ = ~(uint)uVar22 & SUB84(dVar41,0);
      auVar56._12_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
      auVar56 = auVar56 | auVar43;
      auVar30._8_4_ = SUB84(dVar4,0);
      auVar30._0_8_ = local_58[0].Roll;
      auVar30._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar41 = auVar30._8_8_ + dVar6;
      auVar54._0_4_ = ~(uint)uVar21 & SUB84(local_58[0].Roll + dVar5,0);
      auVar54._4_4_ =
           ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)(local_58[0].Roll + dVar5) >> 0x20);
      auVar54._8_4_ = ~(uint)uVar23 & SUB84(dVar41,0);
      auVar54._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
      auVar1._8_4_ = (int)((ulonglong)dVar4 & uVar23);
      auVar1._0_8_ = (ulonglong)local_58[0].Roll & uVar21;
      auVar1._12_4_ = (int)(((ulonglong)dVar4 & uVar23) >> 0x20);
      auVar54 = auVar54 | auVar1;
      uVar21 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar54._0_8_);
      uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar54._8_8_);
      uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar56._0_8_);
      uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar56._8_8_);
      auVar44._0_8_ = uVar21 & (ulonglong)(auVar54._0_8_ - dVar5);
      uVar20 = uVar23 & (ulonglong)(auVar54._8_8_ - dVar6);
      auVar44._8_4_ = (undefined4)uVar20;
      auVar44._12_4_ = (undefined4)(uVar20 >> 0x20);
      auVar31._0_4_ = ~(uint)uVar21 & auVar54._0_4_;
      auVar31._4_4_ = ~(uint)(uVar21 >> 0x20) & auVar54._4_4_;
      auVar31._8_4_ = ~(uint)uVar23 & auVar54._8_4_;
      auVar31._12_4_ = ~(uint)(uVar23 >> 0x20) & auVar54._12_4_;
      auVar44 = auVar44 | auVar31;
      auVar32._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar32._0_8_ = __real_3f1a36e2e0000000;
      auVar32._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar45._0_8_ =
           (double)CONCAT44(auVar44._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar44._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar45._8_4_ = auVar44._8_4_ & _UNK_15061cc88;
      auVar45._12_4_ = auVar44._12_4_ & _UNK_15061cc8c;
      auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < auVar45._8_8_);
      auVar33._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._0_8_);
      uVar17 = movmskpd((int)pTVar18,auVar33);
      auVar46._0_8_ = uVar22 & (ulonglong)(auVar56._0_8_ - dVar7);
      uVar20 = uVar24 & (ulonglong)(auVar56._8_8_ - dVar8);
      auVar46._8_4_ = (undefined4)uVar20;
      auVar46._12_4_ = (undefined4)(uVar20 >> 0x20);
      auVar2._4_4_ = ~(uint)(uVar22 >> 0x20) & auVar56._4_4_;
      auVar2._0_4_ = ~(uint)uVar22 & auVar56._0_4_;
      auVar2._8_4_ = ~(uint)uVar24 & auVar56._8_4_;
      auVar2._12_4_ = ~(uint)(uVar24 >> 0x20) & auVar56._12_4_;
      auVar46 = auVar46 | auVar2;
      auVar47._0_8_ =
           (double)CONCAT44(auVar46._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar46._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar47._8_4_ = auVar46._8_4_ & _UNK_15061cc88;
      auVar47._12_4_ = auVar46._12_4_ & _UNK_15061cc8c;
      lVar25 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar47._8_8_);
      auVar9._8_4_ = (int)lVar25;
      auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar47._0_8_);
      auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar12 = movmskpd((int)pTVar15,auVar9);
      if ((uVar17 & 0x3fffffff) == 0 && iVar12 == 0) {
        return;
      }
      pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pcVar19 = *(code **)(*(longlong *)pUVar16 + 0x378);
      goto LAB_14bb8ab7a;
    }
  }
  pUVar14 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar18 = local_58;
  pTVar15 = UDS_MovementCore::GetActorRotation(pUVar14,pTVar18);
  local_58[0].Pitch = local_58[0].Pitch - param_1->Pitch;
  local_58[0].Yaw = local_58[0].Yaw - param_1->Yaw;
  local_58[0].Roll = local_58[0].Roll - param_1->Roll;
  auVar34._8_4_ = SUB84(local_58[0].Yaw,0);
  auVar34._0_8_ = local_58[0].Pitch;
  auVar34._12_4_ = (int)((ulonglong)local_58[0].Yaw >> 0x20);
  auVar27 = divpd(auVar34,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar27 = roundpd(in_XMM1,auVar27,3);
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar48._0_8_ = auVar27._0_8_ * dVar7;
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar48._8_8_ = auVar27._8_8_ * dVar8;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_58[0].Roll;
  local_58[0].Pitch = local_58[0].Pitch - auVar48._0_8_;
  local_58[0].Yaw = local_58[0].Yaw - auVar48._8_8_;
  auVar27 = divpd(auVar35,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar27 = roundpd(auVar48,auVar27,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar36._8_4_ = SUB84(local_58[0].Yaw,0);
  auVar36._0_8_ = local_58[0].Pitch;
  auVar36._12_4_ = (int)((ulonglong)local_58[0].Yaw >> 0x20);
  local_58[0].Roll = local_58[0].Roll - auVar27._0_8_ * dVar5;
  dVar4 = 0.0 - auVar27._8_8_ * dVar6;
  uVar20 = -(ulonglong)(0.0 <= local_58[0].Pitch);
  uVar22 = -(ulonglong)(0.0 <= local_58[0].Yaw);
  auVar49._0_8_ = uVar20 & (ulonglong)local_58[0].Pitch;
  auVar49._8_4_ = (undefined4)(uVar22 & (ulonglong)local_58[0].Yaw);
  auVar49._12_4_ = (undefined4)((uVar22 & (ulonglong)local_58[0].Yaw) >> 0x20);
  dVar41 = auVar36._8_8_ + dVar8;
  uVar21 = -(ulonglong)(0.0 <= local_58[0].Roll);
  uVar23 = -(ulonglong)(0.0 <= dVar4);
  auVar57._0_4_ = ~(uint)uVar20 & SUB84(local_58[0].Pitch + dVar7,0);
  auVar57._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)(local_58[0].Pitch + dVar7) >> 0x20);
  auVar57._8_4_ = ~(uint)uVar22 & SUB84(dVar41,0);
  auVar57._12_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
  auVar57 = auVar57 | auVar49;
  auVar37._8_4_ = SUB84(dVar4,0);
  auVar37._0_8_ = local_58[0].Roll;
  auVar37._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar41 = auVar37._8_8_ + dVar6;
  auVar55._0_4_ = ~(uint)uVar21 & SUB84(local_58[0].Roll + dVar5,0);
  auVar55._4_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)(local_58[0].Roll + dVar5) >> 0x20);
  auVar55._8_4_ = ~(uint)uVar23 & SUB84(dVar41,0);
  auVar55._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
  auVar27._8_4_ = (int)((ulonglong)dVar4 & uVar23);
  auVar27._0_8_ = (ulonglong)local_58[0].Roll & uVar21;
  auVar27._12_4_ = (int)(((ulonglong)dVar4 & uVar23) >> 0x20);
  auVar55 = auVar55 | auVar27;
  uVar21 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar55._0_8_);
  uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar55._8_8_);
  uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar57._0_8_);
  uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar57._8_8_);
  auVar50._0_8_ = uVar21 & (ulonglong)(auVar55._0_8_ - dVar5);
  uVar20 = uVar23 & (ulonglong)(auVar55._8_8_ - dVar6);
  auVar50._8_4_ = (undefined4)uVar20;
  auVar50._12_4_ = (undefined4)(uVar20 >> 0x20);
  auVar38._0_4_ = ~(uint)uVar21 & auVar55._0_4_;
  auVar38._4_4_ = ~(uint)(uVar21 >> 0x20) & auVar55._4_4_;
  auVar38._8_4_ = ~(uint)uVar23 & auVar55._8_4_;
  auVar38._12_4_ = ~(uint)(uVar23 >> 0x20) & auVar55._12_4_;
  auVar50 = auVar50 | auVar38;
  auVar39._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar39._0_8_ = __real_3f1a36e2e0000000;
  auVar39._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar51._0_8_ =
       (double)CONCAT44(auVar50._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar50._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar51._8_4_ = auVar50._8_4_ & _UNK_15061cc88;
  auVar51._12_4_ = auVar50._12_4_ & _UNK_15061cc8c;
  auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < auVar51._8_8_);
  auVar40._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar51._0_8_);
  uVar17 = movmskpd((int)pTVar18,auVar40);
  auVar52._0_8_ = uVar22 & (ulonglong)(auVar57._0_8_ - dVar7);
  uVar20 = uVar24 & (ulonglong)(auVar57._8_8_ - dVar8);
  auVar52._8_4_ = (undefined4)uVar20;
  auVar52._12_4_ = (undefined4)(uVar20 >> 0x20);
  auVar3._4_4_ = ~(uint)(uVar22 >> 0x20) & auVar57._4_4_;
  auVar3._0_4_ = ~(uint)uVar22 & auVar57._0_4_;
  auVar3._8_4_ = ~(uint)uVar24 & auVar57._8_4_;
  auVar3._12_4_ = ~(uint)(uVar24 >> 0x20) & auVar57._12_4_;
  auVar52 = auVar52 | auVar3;
  auVar53._0_8_ =
       (double)CONCAT44(auVar52._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar52._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar53._8_4_ = auVar52._8_4_ & _UNK_15061cc88;
  auVar53._12_4_ = auVar52._12_4_ & _UNK_15061cc8c;
  lVar25 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar53._8_8_);
  auVar10._8_4_ = (int)lVar25;
  auVar10._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar53._0_8_);
  auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  iVar12 = movmskpd((int)pTVar15,auVar10);
  if ((uVar17 & 0x3fffffff) == 0 && iVar12 == 0) {
    return;
  }
  pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar19 = *(code **)(*(longlong *)pUVar16 + 0x370);
LAB_14bb8ab7a:
  (*pcVar19)(pUVar16,param_1);
  return;
}

// ShouldActivateSmoothDamp @ 14bb8e660

bool __thiscall
UDS_RecvMoveBaseProcess::ShouldActivateSmoothDamp
          (UDS_RecvMoveBaseProcess *this,TVector<double> *param_1,FDS_NetSyncData *param_2,
          float param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar2 = __real_3f800000 / param_3;
  if (__real_42700000 <= __real_3f800000 / param_3) {
    fVar2 = __real_42700000;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Z - (param_2->ServerPosition).field0_0x0._s_0.Z;
  dVar4 = (double)(__real_43960000 / fVar2);
  if ((((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar4) &&
      (dVar3 = (param_1->field0_0x0)._s_0.X - (param_2->ServerPosition).field0_0x0._s_0.X,
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar4)) &&
     (dVar3 = (param_1->field0_0x0)._s_0.Y - (param_2->ServerPosition).field0_0x0._s_0.Y,
     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar4)) {
    dVar3 = (this->EntityVelocity).field0_0x0._s_0.X;
    dVar4 = (this->EntityVelocity).field0_0x0._s_0.Y;
    dVar1 = (this->EntityVelocity).field0_0x0._s_0.Z;
    return __real_4079000000000000 < dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1;
  }
  return true;
}

// ShouldCheckLanding @ 14bb8e710

bool __thiscall
UDS_RecvMoveBaseProcess::ShouldCheckLanding(UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  UObject *pUVar2;
  
  uVar1 = (param_1->StateFlags).Packed;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((((uVar1 >> 0x23 & 3) == 0) && (pUVar2[3].field_0x6 != '\x01')) &&
     (((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) != 8)) {
    return true;
  }
  return false;
}

// SmoothDamp @ 14bb907f0

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::SmoothDamp
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,FDS_SmoothDampParams *param_3,
          float param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TVector<double> *pTVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double> local_c0 [7];
  
  if (__real_3dcccccd <= param_4) {
    param_4 = __real_3dcccccd;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  fVar14 = param_3->SmoothTime;
  if (param_3->SmoothTime <= __real_3a83126f) {
    fVar14 = __real_3a83126f;
  }
  local_d8._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_d8._0_16_ = *(undefined1 (*) [16])&param_5->field0_0x0;
  dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar1 = (double)param_4;
  dVar16 = (double)(__real_40000000 / fVar14);
  dVar17 = local_d8._0_8_;
  dVar2 = local_d8._8_8_;
  dVar3 = (dVar6 * dVar16 + dVar17) * dVar1;
  dVar4 = (dVar7 * dVar16 + dVar2) * dVar1;
  dVar1 = (dVar8 * dVar16 + local_d8._s_0.Z) * dVar1;
  fVar13 = expf((float)((uint)(param_4 * (__real_40000000 / fVar14)) ^
                       __xmm_80000000800000008000000080000000));
  fVar14 = param_3->HysteresisThreshold;
  dVar5 = (double)fVar13;
  local_f8._s_0.X = (dVar17 - dVar3 * dVar16) * dVar5 - dVar17;
  local_f8._s_0.Y = (dVar2 - dVar4 * dVar16) * dVar5 - dVar2;
  local_f8._s_0.Z =
       ((param_5->field0_0x0)._s_0.Z - dVar1 * dVar16) * dVar5 - (param_5->field0_0x0)._s_0.Z;
  if (((0.0 < fVar14) &&
      (fVar13 = (float)SQRT(local_f8._s_0.X * local_f8._s_0.X + local_f8._s_0.Y * local_f8._s_0.Y +
                            local_f8._s_0.Z * local_f8._s_0.Z), 0.0 < fVar13)) && (fVar13 < fVar14))
  {
    if (fVar14 <= __real_358637bd) {
      fVar14 = __real_358637bd;
    }
    fVar14 = expf((fVar13 / fVar14) * __real_c0c00000);
    dVar16 = (double)(__real_3f800000 - fVar14);
    local_f8._s_0.Z = local_f8._s_0.Z * dVar16;
    local_f8._s_0.Y = local_f8._s_0.Y * dVar16;
    local_f8._s_0.X = local_f8._s_0.X * dVar16;
  }
  pTVar12 = ApplyAccelerationLimits
                      (this,local_c0,(TVector<double> *)&local_d8._s_0,
                       (TVector<double> *)&local_f8._s_0,param_4,param_3->MaxAcceleration,
                       param_3->MaxDeceleration,param_3->DecelerationFactor);
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  fVar14 = param_3->MaxSpeed;
  dVar16 = (pTVar12->field0_0x0)._s_0.Z + (param_5->field0_0x0)._s_0.Z;
  dVar17 = (pTVar12->field0_0x0)._s_0.X + (param_5->field0_0x0)._s_0.X;
  dVar2 = (pTVar12->field0_0x0)._s_0.Y + dVar2;
  fVar13 = (float)(dVar2 * dVar2 + dVar17 * dVar17 + dVar16 * dVar16);
  if (fVar14 * fVar14 < fVar13) {
    dVar15 = (double)(fVar14 / SQRT(fVar13));
    dVar17 = dVar17 * dVar15;
    dVar2 = dVar2 * dVar15;
    dVar16 = dVar16 * dVar15;
  }
  local_f8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_f8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_f8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_f8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((double)(param_3->ZeroVelocityThreshold * param_3->ZeroVelocityThreshold) <=
      dVar2 * dVar2 + dVar17 * dVar17 + dVar16 * dVar16) {
    local_f8._0_4_ = SUB84(dVar17,0);
    local_f8._4_4_ = (undefined4)((ulonglong)dVar17 >> 0x20);
    local_f8._8_4_ = SUB84(dVar2,0);
    local_f8._12_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    uVar18 = dVar16;
  }
  dVar3 = (dVar3 + dVar6) * dVar5;
  dVar17 = (dVar4 + dVar7) * dVar5;
  dVar5 = (dVar1 + dVar8) * dVar5;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar16 = (param_2->field0_0x0)._s_0.Z;
  if (0.0 <= dVar3 * dVar6 + dVar17 * dVar7 + dVar5 * dVar8) {
    *(undefined4 *)&param_5->field0_0x0 = local_f8._0_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 4) = local_f8._4_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 8) = local_f8._8_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc) = local_f8._12_4_;
    (param_5->field0_0x0)._s_0.Z = (double)uVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 + dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar17 + dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 + dVar16;
  }
  else {
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)&param_5->field0_0x0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 4) = uVar9;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 8) = uVar10;
    *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc) = uVar11;
    (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// StopMoveAction @ 14bb91a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_RecvMoveBaseProcess::StopMoveAction
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UDS_EntityData *this_00;
  UDS_InputData *this_01;
  float fVar5;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  pFVar4 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar4 == (FDS_EntityBase *)0x0) ||
     (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar1)) {
    bVar1 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x338))(this,&local_50);
    bVar1 = false;
    cVar2 = (**(code **)(this->_padding_ + 0x300))(this,param_1,param_2);
    if (cVar2 == '\x01') {
      fVar5 = param_2 * __real_40a00000 + this->StopLerpTime;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      this->StopLerpTime = fVar5;
      bVar1 = ShouldCheckLanding(this,param_1);
      if (bVar1) {
        DS_Util::SetSyncLocation
                  (this->_padding_,(TVector<double> *)&local_68._s_0,&param_1->ServerPosition,true);
        local_38 = local_68._0_4_;
        uStack_34 = local_68._4_4_;
        uStack_30 = local_68._8_4_;
        uStack_2c = local_68._12_4_;
        local_40 = local_68._s_0.Z;
        local_50 = local_68._0_4_;
        uStack_4c = local_68._4_4_;
        uStack_48 = local_68._8_4_;
        uStack_44 = local_68._12_4_;
        local_28 = local_68._s_0.Z;
        (**(code **)(this->_padding_ + 800))(this,param_1,param_2,&local_38,1);
      }
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_EntityData::SetMoveMode(this_00,Idle);
      bVar1 = true;
    }
    (**(code **)(pFVar4->_padding_ + 0x1b8))(pFVar4,&local_res20);
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      this_01 = (UDS_InputData *)FWeakObjectPtr::Get(&local_res20);
      UDS_InputData::SetIsActiveInput(this_01,(bool)(bVar1 ^ 1));
    }
  }
  return bVar1;
}

// UpdateAndClampVelocity @ 14bb96420

TVector<double> * __thiscall
UDS_RecvMoveBaseProcess::UpdateAndClampVelocity
          (UDS_RecvMoveBaseProcess *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
  fVar2 = (float)(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
  if (param_3 * param_3 < fVar2) {
    dVar3 = (double)(param_3 / SQRT(fVar2));
    dVar4 = dVar3 * dVar4;
    dVar6 = dVar3 * dVar6;
    dVar5 = dVar3 * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5 < (double)(param_4 * param_4)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// UpdateFallingVelocity @ 14bb96520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_RecvMoveBaseProcess::UpdateFallingVelocity(UDS_RecvMoveBaseProcess *this,float param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharDetailState local_res8 [2];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = Jump1;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res8);
    if (!bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8[0] = Jump2;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res8);
      if (!bVar1) {
        pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res8[0] = Falling;
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res8);
        if (!bVar1) {
          this->FallingVelocity = 0.0;
          this->bIsFallingLanded = false;
          return;
        }
      }
    }
    this->FallingVelocity = this->FallingVelocity - param_1 * ___real_44dac000;
  }
  return;
}

// UpdateInputState @ 14bb96790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::UpdateInputState
          (UDS_RecvMoveBaseProcess *this,FDS_EntityBase *param_1,bool param_2)

{
  bool bVar1;
  UDS_InputData *this_00;
  FWeakObjectPtr local_res10 [3];
  
  (**(code **)(param_1->_padding_ + 0x1b8))(param_1,local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_InputData *)FWeakObjectPtr::Get(local_res10);
    UDS_InputData::SetIsActiveInput(this_00,!param_2);
  }
  return;
}

// UpdateManualAnimStateTag @ 14bb96930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::UpdateManualAnimStateTag
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1)

{
  char cVar1;
  ulonglong uVar2;
  EDS_MoveMode EVar3;
  FDS_EntityBase *pFVar4;
  ulonglong uVar5;
  
  UDS_RecvProcessBase::UpdateManualAnimStateTag((UDS_RecvProcessBase *)this,param_1);
  pFVar4 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    uVar2 = (param_1->StateFlags).Packed;
    uVar5 = uVar2 >> 4;
    EVar3 = (EDS_MoveMode)(uVar2 >> 0x12) & 0x7f;
    if ((EVar3 == Jump1) && ((uVar5 & 0x7f) == 0)) {
      cVar1 = this->bIsFallingLanded;
    }
    else {
      if (EVar3 != Jump2) {
        return;
      }
      if ((uVar5 & 0x7f) != 0) {
        return;
      }
      cVar1 = this->bIsFallingLanded;
    }
    if (cVar1 == '\x01') {
      TDelegate<void___cdecl(enum_EDS_MoveMode,enum_EDS_MoveMode),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->_padding_,EVar3,Idle);
    }
  }
  return;
}

// UpdateRotation @ 14bb97e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TRotator<double> * __thiscall
UDS_RecvMoveBaseProcess::UpdateRotation
          (UDS_RecvMoveBaseProcess *this,TRotator<double> *__return_storage_ptr__,float param_1,
          TRotator<double> *param_2)

{
  double dVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_CharStateData *this_00;
  TRotator<double> *pTVar4;
  float fVar5;
  EDS_CharDetailState local_58 [2];
  TRotator<double> local_50;
  TRotator<double> local_38 [2];
  
  pFVar3 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar1;
    __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    (**(code **)(this->_padding_ + 0x340))(this);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    fVar5 = __real_41200000;
    if (!bVar2) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_58[0] = SkillMode_Aim;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_00,local_58);
      fVar5 = __real_41200000;
      if (bVar2) {
        fVar5 = __real_41a00000;
      }
    }
    pTVar4 = FMath::RInterpTo(local_38,&local_50,param_2,param_1,fVar5);
    __return_storage_ptr__->Roll = 0.0;
    dVar1 = pTVar4->Yaw;
    __return_storage_ptr__->Pitch = pTVar4->Pitch;
    __return_storage_ptr__->Yaw = dVar1;
  }
  return __return_storage_ptr__;
}

// UpdateVelocity @ 14bb985b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveBaseProcess::UpdateVelocity
          (UDS_RecvMoveBaseProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  TVector<double> *pTVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  UDS_CharStateData *pUVar13;
  UDS_MovementCore *this_00;
  double *pdVar14;
  FDS_EntityBase *pFVar15;
  longlong lVar16;
  FWeakObjectPtr *pFVar17;
  UObject *pUVar18;
  double *pdVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined4 in_XMM2_Db;
  undefined8 uVar24;
  double dVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double local_res8;
  EDS_CharDetailState local_res18 [2];
  FHitResult *in_stack_fffffffffffffda8;
  double local_238;
  double dStack_230;
  double local_228;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  undefined1 local_1d8 [68];
  undefined4 local_194;
  double local_160;
  double local_140;
  double local_138;
  double local_130;
  int local_f4;
  FName local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  bVar11 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                      (void *)0x0);
  if (!bVar11) {
    pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res18[0] = Jump1;
    bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res18);
    if (!bVar11) {
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res18[0] = Jump2;
      bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res18);
      if (!bVar11) {
        pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res18[0] = Falling;
        bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res18);
        if (!bVar11) {
          this->FallingVelocity = 0.0;
          this->bIsFallingLanded = false;
          goto LAB_14bb986ad;
        }
      }
    }
    this->FallingVelocity = this->FallingVelocity - param_2 * ___real_44dac000;
  }
LAB_14bb986ad:
  (**(code **)(this->_padding_ + 0x338))(this,&local_238);
  dVar22 = __real_3f1a36e2e0000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  dVar23 = 0.0;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    dVar3 = (param_1->VelocityVector).field0_0x0._s_0.Y;
    dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    auVar7._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar7._0_8_ = dVar6;
    auVar7._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar5 = dVar25 * dVar25 + dVar3 * dVar3;
    if (dVar5 == __real_3ff0000000000000) {
      if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
        dVar3 = *(double *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8);
        uVar24 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        dVar6 = (param_1->VelocityVector).field0_0x0._s_0.X;
      }
      else {
LAB_14bb987e6:
        local_218._s_0.Z = 0.0;
        uVar24 = 0.0;
        dVar6 = dVar25;
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar5) {
        local_res8 = __real_3ff0000000000000 / SQRT(dVar5);
        dVar25 = dVar25 * local_res8;
        dVar3 = dVar3 * local_res8;
        goto LAB_14bb987e6;
      }
      dVar3 = auVar7._8_8_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    uVar2 = *(undefined8 *)&(this->PreviousTargetDirection).field0_0x0;
    if ((((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) &&
        (uVar2 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 8),
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (uVar2 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      auVar4._8_4_ = SUB84(dVar3,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])&(this->PreviousTargetDirection).field0_0x0 = auVar4;
      (this->PreviousTargetDirection).field0_0x0._s_0.Z = (double)uVar24;
      uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar28 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
  }
  else {
    dVar25 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    (this->PreviousTargetDirection).field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (this->PreviousTargetDirection).field0_0x0._s_0.Y = dVar25;
    (this->PreviousTargetDirection).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  pdVar19 = &(param_1->VelocityVector).field0_0x0._s_0.Y;
  pdVar14 = &(param_1->VelocityVector).field0_0x0._s_0.Z;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  pTVar1 = &this->EntityVelocity;
  if (((((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,SUB84(dVar25,0) & uVar9) <=
         dVar22) &&
       (dVar3 = *pdVar19,
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar10,SUB84(dVar3,0) & uVar9) <= dVar22)
       ) && (dVar3 = *pdVar14,
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar10,SUB84(dVar3,0) & uVar9) <=
            dVar22)) ||
     ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field0_0x0 >> 0x20) & uVar10,
                         (uint)*(undefined8 *)&pTVar1->field0_0x0 & uVar9) <= dVar22 &&
       (uVar24 = *(undefined8 *)((longlong)&(this->EntityVelocity).field0_0x0 + 8),
       (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) & uVar10,(uint)uVar24 & uVar9) <= dVar22))
      && (uVar24 = *(undefined8 *)((longlong)&(this->EntityVelocity).field0_0x0 + 0x10),
         (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) & uVar10,(uint)uVar24 & uVar9) <= dVar22
         )))) {
    bVar11 = false;
  }
  else {
    dVar3 = *pdVar19;
    dVar5 = dVar3 * dVar3 + dVar25 * dVar25;
    if (dVar5 == dVar8) {
      if (*pdVar14 == 0.0) {
        dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
        dVar3 = (param_1->VelocityVector).field0_0x0._s_0.Y;
        dVar23 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        local_218._s_0.Z = dVar23;
      }
    }
    else if (__real_3e45798ee0000000 <= dVar5) {
      local_res8 = dVar8 / SQRT(dVar5);
      dVar25 = dVar25 * local_res8;
      dVar3 = dVar3 * local_res8;
    }
    else {
      local_218._s_0.Z = (double)CONCAT44(uVar28,uVar27);
      dVar23 = (double)CONCAT44(uVar28,uVar27);
      dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      dVar25 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    }
    dVar5 = *(double *)&(this->PreviousTargetDirection).field0_0x0;
    if (((dVar22 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,SUB84(dVar5,0) & uVar9
                                   )) ||
        (uVar24 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 8),
        dVar22 < (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) & uVar10,(uint)uVar24 & uVar9)))
       || (uVar24 = *(undefined8 *)((longlong)&(this->PreviousTargetDirection).field0_0x0 + 0x10),
          dVar22 < (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) & uVar10,(uint)uVar24 & uVar9)
          )) {
      bVar11 = (float)(dVar3 * (this->PreviousTargetDirection).field0_0x0._s_0.Y + dVar5 * dVar25 +
                      dVar23 * (this->PreviousTargetDirection).field0_0x0._s_0.Z) < __real_3f34fdf4;
      if (bVar11) {
        AdjustVelocityOnDirectionChange(this,param_1,pTVar1,param_2);
      }
    }
    else {
      bVar11 = false;
    }
  }
  fVar26 = __real_42700000;
  fVar21 = __real_3f800000;
  fVar20 = param_2;
  if (param_2 <= __real_38d1b717) {
    fVar20 = __real_38d1b717;
  }
  local_1d8._4_4_ = 1000.0;
  fVar20 = __real_3f800000 / fVar20;
  local_1d8._0_4_ = __real_3e800000;
  if ((__real_41f00000 < fVar20) && (local_1d8._0_4_ = __real_3dcccccd, fVar20 < __real_42700000)) {
    local_1d8._0_4_ = __real_3e800000 - (fVar20 - __real_41f00000) * __real_3ba3d70a;
  }
  local_1d8._12_8_ = ___xmm_3c23d70a3f80000041700000459c4000;
  local_1d8._20_8_ = _UNK_15278a2c8;
  local_1d8._8_4_ = 3.4028235e+38;
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar12) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_1d8._4_4_ = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    local_1d8._4_4_ = (float)local_1d8._4_4_ * __real_3f99999a;
  }
  dVar25 = local_228;
  if (bVar11) {
    local_1d8._0_4_ = (float)local_1d8._0_4_ * __real_3f000000;
  }
  fVar20 = fVar21 / param_2;
  if (fVar26 <= fVar21 / param_2) {
    fVar20 = fVar26;
  }
  dVar23 = (double)(__real_43960000 / fVar20);
  dVar22 = local_228 - (param_1->ServerPosition).field0_0x0._s_0.Z;
  if (((dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9
                                 )) ||
      (dVar22 = local_238 - (param_1->ServerPosition).field0_0x0._s_0.X,
      dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9))
      ) || (dVar22 = dStack_230 - (param_1->ServerPosition).field0_0x0._s_0.Y,
           dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,
                                     SUB84(dVar22,0) & uVar9))) {
    lVar16 = this->_padding_;
LAB_14bb98b69:
    (**(code **)(lVar16 + 0x310))(this,0x82,0x83);
    local_1f8._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    local_1f8._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
    in_stack_fffffffffffffda8 = (FHitResult *)local_1d8;
    local_1f8._s_0.Z = (param_1->ServerPosition).field0_0x0._s_0.Z;
    local_218._s_0.X = local_238;
    local_218._s_0.Y = dStack_230;
    local_218._s_0.Z = local_228;
    pdVar14 = (double *)
              (**(code **)(this->_padding_ + 0x368))
                        (this,local_1d8 + 0x20,&local_218,&local_1f8,in_stack_fffffffffffffda8,
                         param_2,pTVar1);
    local_238 = *pdVar14;
    dStack_230 = pdVar14[1];
    local_228 = pdVar14[2];
  }
  else {
    dVar23 = (pTVar1->field0_0x0)._s_0.X;
    dVar22 = (this->EntityVelocity).field0_0x0._s_0.Y;
    dVar3 = (this->EntityVelocity).field0_0x0._s_0.Z;
    lVar16 = this->_padding_;
    if (__real_4079000000000000 < dVar22 * dVar22 + dVar23 * dVar23 + dVar3 * dVar3)
    goto LAB_14bb98b69;
    (**(code **)(lVar16 + 0x310))(this,0x83,0x82);
  }
  pFVar15 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar15 == (FDS_EntityBase *)0x0) {
    return;
  }
  if ((__real_322bcc77 <
       (float)((uint)this->FallingVelocity & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (lVar16 = (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15), lVar16 == 0)) {
    memset(local_1d8 + 0x40,0,0x100);
    local_1d8._61_2_ = 0;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    uStack_d8 = 0;
    local_1d8[0x3f] = 0;
    local_1f8._s_0.X = local_238;
    local_218._s_0.X = local_238;
    local_218._s_0.Y = dStack_230;
    local_1d8._48_8_ = 0;
    local_1d8._56_4_ = 0xffffffff;
    local_1d8[0x3c] = 0;
    uStack_c8 = 0xffffffff;
    local_194 = 0x3f800000;
    local_1f8._s_0.Y = dStack_230;
    local_d0 = 0;
    local_f4 = -1;
    local_218._s_0.Z = local_228;
    local_1f8._s_0.Z = local_228 - ___real_40dd4c0000000000;
    pFVar17 = (FWeakObjectPtr *)(**(code **)(pFVar15->_padding_ + 0x160))(pFVar15,&local_res8);
    in_stack_fffffffffffffda8 = (FHitResult *)(local_1d8 + 0x40);
    bVar11 = DS_Util::GetNpcLocationSweepTest
                       ((TVector<double> *)&local_218._s_0,(TVector<double> *)&local_1f8._s_0,
                        (TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_,
                        (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)*pFVar17,
                        in_stack_fffffffffffffda8);
    dVar23 = local_228;
    if (!bVar11) goto LAB_14bb98dae;
    dVar22 = local_138 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             local_140 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             local_130 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar23 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar22) && (dVar23 = dVar22, dVar8 <= dVar22)) {
      dVar23 = dVar8;
    }
    pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar23 = acos(dVar23);
    fVar26 = (float)dVar23 * __real_42652ee0;
    fVar21 = (float)(**(code **)(*(longlong *)pUVar18 + 0x480))(pUVar18);
    dVar23 = local_228;
    if (fVar21 <= fVar26) goto LAB_14bb98dae;
    dVar23 = (double)(param_2 * this->FallingVelocity + (float)dVar25);
    local_228 = (double)(float)((double)pFVar15->ScaledCapsuleHalfHeight + local_160);
    if (local_228 <= dVar23) goto LAB_14bb98dae;
  }
  this->bIsFallingLanded = true;
  dVar23 = local_228;
LAB_14bb98dae:
  local_228 = dVar23;
  local_218._s_0.X = local_238;
  local_218._s_0.Y = dStack_230;
  local_218._s_0.Z = local_228;
  (**(code **)(this->_padding_ + 800))
            (this,param_1,CONCAT44(in_XMM2_Db,param_2),&local_218,
             (ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
  return;
}

