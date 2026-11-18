// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// FCameraActorTargetInfoReader @ 14d655180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorTargetInfoReader * __thiscall
UE::Cameras::FCameraActorTargetInfoReader::FCameraActorTargetInfoReader
          (FCameraActorTargetInfoReader *this,FCameraActorTargetInfo *param_1,
          FCameraContextDataID param_2)

{
  AActor *pAVar1;
  
  (this->DefaultTargetInfo).TargetSize = 10.0;
  (this->DefaultTargetInfo).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->DefaultTargetInfo).SocketName.ComparisonIndex = 0;
  (this->DefaultTargetInfo).SocketName.Number = 0;
  (this->DefaultTargetInfo).BoneName.ComparisonIndex = 0;
  (this->DefaultTargetInfo).BoneName.Number = 0;
  (this->DefaultTargetInfo).TargetShape = Point;
  (this->CachedTargetInfo).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->CachedTargetInfo).SocketName.ComparisonIndex = 0;
  (this->CachedTargetInfo).SocketName.Number = 0;
  (this->CachedTargetInfo).BoneName.ComparisonIndex = 0;
  (this->CachedTargetInfo).BoneName.Number = 0;
  (this->CachedTargetInfo).TargetShape = Point;
  this->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (this->CachedBoneName).ComparisonIndex = 0;
  (this->CachedBoneName).Number = 0;
  (this->CachedParentBoneName).ComparisonIndex = 0;
  (this->CachedParentBoneName).Number = 0;
  (this->DefaultTargetInfo).Weight = 1.0;
  (this->DataID).Value = 0xffffffff;
  (this->CachedTargetInfo).TargetSize = 10.0;
  (this->CachedTargetInfo).Weight = 1.0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar1 = (param_1->Actor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->DefaultTargetInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
  (this->DefaultTargetInfo).SocketName = param_1->SocketName;
  (this->DefaultTargetInfo).BoneName = param_1->BoneName;
  (this->DefaultTargetInfo).TargetShape = param_1->TargetShape;
  (this->DefaultTargetInfo).TargetSize = param_1->TargetSize;
  (this->DefaultTargetInfo).Weight = param_1->Weight;
  (this->DataID).Value = param_2.Value;
  CacheTargetInfo(this,&this->DefaultTargetInfo);
  return this;
}

// CacheTargetInfo @ 14d65d060

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
UE::Cameras::FCameraActorTargetInfoReader::CacheTargetInfo
          (FCameraActorTargetInfoReader *this,FCameraActorTargetInfo *param_1)

{
  AActor *pAVar1;
  code *pcVar2;
  USkeletalMeshComponent *this_00;
  FName FVar3;
  UClass *local_res8;
  
  pAVar1 = (param_1->Actor).field0_0x0.DebugPtr;
  if ((((((this->CachedTargetInfo).Actor.field0_0x0.DebugPtr != pAVar1) ||
        ((this->CachedTargetInfo).SocketName != param_1->SocketName)) ||
       ((this->CachedTargetInfo).BoneName != param_1->BoneName)) ||
      (((this->CachedTargetInfo).TargetShape != param_1->TargetShape ||
       (param_1->TargetSize != (this->CachedTargetInfo).TargetSize)))) ||
     (param_1->Weight != (this->CachedTargetInfo).Weight)) {
    if ((GC::GIsIncrementalReachabilityPending) && (pAVar1 != (AActor *)0x0)) {
      GC::MarkAsReachable((UObject *)pAVar1);
    }
    (this->CachedTargetInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
    (this->CachedTargetInfo).SocketName = param_1->SocketName;
    (this->CachedTargetInfo).BoneName = param_1->BoneName;
    (this->CachedTargetInfo).TargetShape = param_1->TargetShape;
    (this->CachedTargetInfo).TargetSize = param_1->TargetSize;
    (this->CachedTargetInfo).Weight = param_1->Weight;
    this->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
    pAVar1 = (param_1->Actor).field0_0x0.DebugPtr;
    this_00 = (USkeletalMeshComponent *)0x0;
    if ((pAVar1 != (AActor *)0x0) &&
       ((param_1->SocketName != (FName)0x0 ||
        (this_00 = (USkeletalMeshComponent *)0x0, param_1->BoneName != (FName)0x0)))) {
      pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
      local_res8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_res8);
      }
      this_00 = (USkeletalMeshComponent *)(*pcVar2)(pAVar1,&local_res8);
      this->CachedSkeletalMeshComponent = this_00;
    }
    local_res8 = (UClass *)0x0;
    (this->CachedBoneName).ComparisonIndex = 0;
    (this->CachedBoneName).Number = 0;
    (this->CachedParentBoneName).ComparisonIndex = 0;
    (this->CachedParentBoneName).Number = 0;
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      FVar3 = param_1->BoneName;
      this->CachedBoneName = FVar3;
      if (param_1->SocketName != (FName)0x0) {
        FVar3 = USkinnedMeshComponent::GetSocketBoneName
                          ((USkinnedMeshComponent *)this_00,(FName)&local_res8);
        FVar3 = *(FName *)FVar3;
        this->CachedBoneName = FVar3;
      }
      if (FVar3 != (FName)0x0) {
        FVar3 = USkinnedMeshComponent::GetParentBone
                          ((USkinnedMeshComponent *)this->CachedSkeletalMeshComponent,
                           (FName)&local_res8);
        this->CachedParentBoneName = *(FName *)FVar3;
      }
    }
  }
  return;
}

// ComputeTargetBounds @ 14d65d950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UE::Cameras::FCameraActorTargetInfoReader::ComputeTargetBounds
          (FCameraActorTargetInfoReader *this,TVector<double> *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  ECameraTargetShape EVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar10;
  undefined1 auVar9 [16];
  float fVar11;
  double dVar12;
  TVector<double>_u_0 local_88 [5];
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  EVar1 = (this->CachedTargetInfo).TargetShape;
  if (EVar1 == Point) {
    (param_2->Origin).field0_0x0._s_0.X = 0.0;
    (param_2->Origin).field0_0x0._s_0.Y = 0.0;
    (param_2->Origin).field0_0x0._s_0.Z = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.X = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.Y = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.Z = 0.0;
    param_2->SphereRadius = 0.0;
  }
  else if (EVar1 == AutomaticBounds) {
    if ((this->CachedSkeletalMeshComponent != (USkeletalMeshComponent *)0x0) &&
       (this->CachedParentBoneName != (FName)0x0)) {
      USkinnedMeshComponent::GetBoneLocation
                ((USkinnedMeshComponent *)this->CachedSkeletalMeshComponent,
                 (TVector<double> *)&local_88[0]._s_0,this->CachedParentBoneName,WorldSpace);
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      auVar3 = ___xmm_7fffffffffffffff7fffffffffffffff;
      dVar5 = (param_1->field0_0x0)._s_0.Y - (double)local_88[0]._8_8_;
      dVar12 = (param_1->field0_0x0)._s_0.X - (double)local_88[0]._0_8_;
      dVar4 = (param_1->field0_0x0)._s_0.Z - (double)local_88[0]._16_8_;
      uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      (param_2->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Y = (double)uVar6;
      (param_2->Origin).field0_0x0._s_0.Z = (double)uVar7;
      (param_2->BoxExtent).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar10,SUB84(dVar12,0) & uVar8);
      *(uint *)((longlong)&(param_2->BoxExtent).field0_0x0 + 8) = SUB84(dVar5,0) & uVar8;
      *(uint *)((longlong)&(param_2->BoxExtent).field0_0x0 + 0xc) =
           (uint)((ulonglong)dVar5 >> 0x20) & uVar10;
      *(uint *)((longlong)&(param_2->BoxExtent).field0_0x0 + 0x10) = SUB84(dVar4,0) & uVar8;
      *(uint *)((longlong)&(param_2->BoxExtent).field0_0x0 + 0x14) =
           (uint)((ulonglong)dVar4 >> 0x20) & uVar10;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (double)CONCAT44((uint)((ulonglong)(dVar5 * dVar5) >> 0x20) & uVar10,
                                      SUB84(dVar5 * dVar5,0) & uVar8) +
                     (double)CONCAT44((uint)((ulonglong)(dVar12 * dVar12) >> 0x20) & uVar10,
                                      SUB84(dVar12 * dVar12,0) & uVar8) +
                     (double)CONCAT44((uint)((ulonglong)(dVar4 * dVar4) >> 0x20) & uVar10,
                                      SUB84(dVar4 * dVar4,0) & uVar8);
      auVar9 = sqrtpd(auVar3,auVar9);
      param_2->SphereRadius = (double)(float)auVar9._0_8_;
      return;
    }
    (param_2->Origin).field0_0x0._s_0.X = 0.0;
    (param_2->Origin).field0_0x0._s_0.Y = 0.0;
    (param_2->Origin).field0_0x0._s_0.Z = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.X = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.Y = 0.0;
    (param_2->BoxExtent).field0_0x0._s_0.Z = 0.0;
    param_2->SphereRadius = 0.0;
    lVar2 = *(longlong *)((longlong)(this->CachedTargetInfo).Actor.field0_0x0 + 0x1b8);
    if (lVar2 != 0) {
      dVar12 = *(double *)(lVar2 + 0x118);
      (param_2->Origin).field0_0x0._s_0.X = *(double *)(lVar2 + 0x110);
      (param_2->Origin).field0_0x0._s_0.Y = dVar12;
      dVar12 = *(double *)(lVar2 + 0x128);
      (param_2->Origin).field0_0x0._s_0.Z = *(double *)(lVar2 + 0x120);
      (param_2->BoxExtent).field0_0x0._s_0.X = dVar12;
      dVar12 = *(double *)(lVar2 + 0x138);
      (param_2->BoxExtent).field0_0x0._s_0.Y = *(double *)(lVar2 + 0x130);
      (param_2->BoxExtent).field0_0x0._s_0.Z = dVar12;
      param_2->SphereRadius = *(double *)(lVar2 + 0x140);
      return;
    }
  }
  else if (EVar1 == ManualBounds) {
    fVar11 = (this->CachedTargetInfo).TargetSize;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    (param_2->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Y = (double)uVar6;
    dVar12 = (double)fVar11;
    (param_2->Origin).field0_0x0._s_0.Z = (double)uVar7;
    *(double *)&(param_2->BoxExtent).field0_0x0 = dVar12;
    auVar3._8_4_ = SUB84(dVar12,0);
    auVar3._0_8_ = dVar12;
    auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_2->BoxExtent).field0_0x0 + 8) = auVar3;
    param_2->SphereRadius = dVar12;
    return;
  }
  return;
}

// GetTargetInfo @ 14d661980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraActorTargetInfoReader::GetTargetInfo
          (FCameraActorTargetInfoReader *this,FCameraContextDataTable *param_1,
          TTransform<double> *param_2,TBoxSphereBounds<double,double> *param_3)

{
  FCameraContextDataID FVar1;
  USkeletalMeshComponent *pUVar2;
  AActor *pAVar3;
  USceneComponent *pUVar4;
  double dVar5;
  UPackage *pUVar6;
  FCameraActorTargetInfoReader *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStack_e8 [32];
  TVector<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1.Value = (this->DataID).Value;
  if (FVar1.Value != 0xffffffff) {
    if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar6,
                           L"CameraActorTargetInfo");
    }
    pFVar7 = (FCameraActorTargetInfoReader *)
             FCameraContextDataTable::TryGetData
                       (param_1,FVar1,Struct,
                        (UObject *)
                        Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton,true
                       );
    if (pFVar7 == (FCameraActorTargetInfoReader *)0x0) {
      pFVar7 = this;
    }
    CacheTargetInfo(this,&pFVar7->DefaultTargetInfo);
  }
  pUVar2 = this->CachedSkeletalMeshComponent;
  if ((pUVar2 == (USkeletalMeshComponent *)0x0) || (this->CachedBoneName == (FName)0x0)) {
    pAVar3 = (this->CachedTargetInfo).Actor.field0_0x0.DebugPtr;
    if (pAVar3 == (AActor *)0x0) {
      return false;
    }
    pUVar4 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (USceneComponent *)0x0) {
      pTVar8 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar8 = &pUVar4->ComponentToWorld;
    }
    dVar5 = (pTVar8->Rotation).XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar8->Rotation).ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar8->Translation).XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar8->Translation).ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar8->Scale3D).XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar5;
    local_48 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
    uStack_44 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
    uStack_40 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
    uStack_3c = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
  }
  else {
    (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,&local_98,this->CachedBoneName,0);
    (param_2->Rotation).XY.m128d_f64[0] = local_98;
    (param_2->Rotation).XY.m128d_f64[1] = dStack_90;
    (param_2->Rotation).ZW.m128d_f64[0] = local_88;
    (param_2->Rotation).ZW.m128d_f64[1] = dStack_80;
    (param_2->Translation).XY.m128d_f64[0] = local_78;
    (param_2->Translation).XY.m128d_f64[1] = dStack_70;
    (param_2->Translation).ZW.m128d_f64[0] = local_68;
    (param_2->Translation).ZW.m128d_f64[1] = dStack_60;
    (param_2->Scale3D).XY.m128d_f64[0] = local_58;
    (param_2->Scale3D).XY.m128d_f64[1] = dStack_50;
  }
  *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64 = local_48;
  *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) = uStack_44;
  *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1) = uStack_40;
  *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) = uStack_3c;
  local_b8._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_b8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  ComputeTargetBounds(this,(TVector<double> *)&local_b8._s_0,param_3);
  return true;
}

// Initialize @ 14d662520

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
UE::Cameras::FCameraActorTargetInfoReader::Initialize
          (FCameraActorTargetInfoReader *this,FCameraActorTargetInfo *param_1,
          FCameraContextDataID param_2)

{
  AActor *pAVar1;
  
  if ((GC::GIsIncrementalReachabilityPending) &&
     (pAVar1 = (param_1->Actor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->DefaultTargetInfo).Actor.field0_0x0 = (param_1->Actor).field0_0x0;
  (this->DefaultTargetInfo).SocketName = param_1->SocketName;
  (this->DefaultTargetInfo).BoneName = param_1->BoneName;
  (this->DefaultTargetInfo).TargetShape = param_1->TargetShape;
  (this->DefaultTargetInfo).TargetSize = param_1->TargetSize;
  (this->DefaultTargetInfo).Weight = param_1->Weight;
  (this->DataID).Value = param_2.Value;
  CacheTargetInfo(this,&this->DefaultTargetInfo);
  return;
}

