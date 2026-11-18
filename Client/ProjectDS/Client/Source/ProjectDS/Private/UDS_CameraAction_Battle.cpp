// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b431aa0

UClass * __cdecl UDS_CameraAction_Battle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Battle",
               &Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Battle,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Battle>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Battle>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton;
}

// UDS_CameraAction_Battle @ 14b434560

UDS_CameraAction_Battle * __thiscall
UDS_CameraAction_Battle::UDS_CameraAction_Battle
          (UDS_CameraAction_Battle *this,FVTableHelper *param_1)

{
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->IsPlaySkill = true;
  this->_padding_ = (longlong)&___7UDS_CameraAction_Battle__6B_;
  this->RestoreTime = 0.0;
  this->TargetMedian = 0.0;
  this->ElapsedTime = 0.0;
  (this->CameraInterp).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  return this;
}

// ~UDS_CameraAction_Battle @ 14b434ee0

void __thiscall UDS_CameraAction_Battle::~UDS_CameraAction_Battle(UDS_CameraAction_Battle *this)

{
  this->_padding_ = (longlong)&___7UDS_CameraAction_Base__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b436920

UClass * __cdecl UDS_CameraAction_Battle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Battle",
               &Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Battle,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Battle>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Battle>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Battle.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraAction_Battle @ 14b437090

void __cdecl UDS_CameraAction_Battle::StaticRegisterNativesUDS_CameraAction_Battle(void)

{
  return;
}

// UDS_CameraAction_Battle @ 14b8b2360

UDS_CameraAction_Battle * __thiscall
UDS_CameraAction_Battle::UDS_CameraAction_Battle
          (UDS_CameraAction_Battle *this,FObjectInitializer *param_1)

{
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->IsPlaySkill = true;
  this->_padding_ = (longlong)&___7UDS_CameraAction_Battle__6B_;
  this->RestoreTime = 0.0;
  this->TargetMedian = 0.0;
  this->ElapsedTime = 0.0;
  (this->CameraInterp).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  return this;
}

// Initialize @ 14b8cac10

void __thiscall
UDS_CameraAction_Battle::Initialize
          (UDS_CameraAction_Battle *this,FDS_CameraPresetData *param_1,FDS_CameraCommonData *param_2
          )

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_CameraInterp *pUVar4;
  FString *pFVar5;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  UDS_CameraAction_Base::Initialize((UDS_CameraAction_Base *)this,param_1,param_2);
  pUVar4 = (this->CameraInterp).field0_0x0.DebugPtr;
  this->TargetMedian = __real_43340000 - *(float *)((longlong)&this->_padding_ + 4);
  if (pUVar4 == (UDS_CameraInterp *)0x0) {
    pUVar3 = GetTransientPackageAsObject();
    pUVar4 = NewObject<UDS_CameraInterp>(pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->CameraInterp).field0_0x0.DebugPtr = pUVar4;
  }
  pFVar5 = FWN_SoftObjectUtils::GetObjectPath(&local_38,&param_2->CameraBattleCurvePath,false);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar1 = (pFVar5->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  UDS_CameraInterp::Initialize((this->CameraInterp).field0_0x0.DebugPtr,&local_28);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_CameraAction_Battle>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar3[7].field_0x20,(UDS_CameraAction_Battle *)&stack0x00000008,
               (pmf_f331407e)this);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedCharState @ 14b8d4590

void __thiscall
UDS_CameraAction_Battle::OnChangedCharState
          (UDS_CameraAction_Battle *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FDS_CharStateInfo *pFVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  FWeakObjectPtr::Get(local_res10);
  pFVar1 = UDS_CharStateData::GetCharStateInfo(&param_2->StateTag);
  if (((this->IsPlaySkill == false) && (param_2->bIsStateTagOn == true)) && (pFVar1->State == Skill)
     ) {
    (**(code **)(this->_padding_ + 0x2c0))(this);
  }
  return;
}

// Reset @ 14b8e59b0

void __thiscall UDS_CameraAction_Battle::Reset(UDS_CameraAction_Battle *this)

{
  UDS_CameraInterp *pUVar1;
  undefined8 uVar2;
  double dVar3;
  
  pUVar1 = (this->CameraInterp).field0_0x0.DebugPtr;
  this->IsPlaySkill = true;
  this->ElapsedTime = 0.0;
  pUVar1->ElapsedTime = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (pUVar1->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (pUVar1->StartRotationValue).Yaw = dVar3;
  (pUVar1->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pUVar1->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pUVar1->StartVectorValue).field0_0x0._s_0.Y = (double)uVar2;
  (pUVar1->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar1->StartFloatValue = 0.0;
  return;
}

// UpdateCameraData @ 14b8f1e80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_CameraAction_Battle::UpdateCameraData
          (UDS_CameraAction_Battle *this,FDS_CameraControlData *param_1,float param_2)

{
  double *pdVar1;
  longlong *this_00;
  float fVar2;
  UDS_CameraInterp *pUVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  bool bVar8;
  UObject *pUVar9;
  TRotator<double> *pTVar10;
  TVector<double> *pTVar11;
  APlayerController *this_01;
  FSceneViewport *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar24;
  undefined1 auVar21 [16];
  uint uVar23;
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  FDeprecateSlateVector2D local_res8;
  TRotator<double> local_108;
  TVector<double>_u_0 local_e8;
  TRotator<double> local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98 [5];
  
  this_00 = &this->_padding_;
  bVar8 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (bVar8) {
    return;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pUVar9 = *(UObject **)&pUVar9[0x13].field_0x18;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (pUVar9 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar9);
  }
  bVar8 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar8) {
    return;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (((*(uint *)&pUVar9[0x34].field_0xc & 0x100) != 0) ||
     (pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
     (*(uint *)&pUVar9[0x34].field_0xc & 0x2000) != 0)) {
    this->IsPlaySkill = false;
  }
  if (this->IsPlaySkill == false) {
    this->ElapsedTime = 0.0;
    return;
  }
  fVar38 = 0.0;
  if (this->ElapsedTime == 0.0) {
    dVar17 = (param_1->CameraRotation).Yaw;
    pUVar3 = (this->CameraInterp).field0_0x0.DebugPtr;
    (this->StartRotation).Pitch = (param_1->CameraRotation).Pitch;
    (this->StartRotation).Yaw = dVar17;
    (this->StartRotation).Roll = (param_1->CameraRotation).Roll;
    pUVar3->ElapsedTime = 0.0;
    dVar17 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    (pUVar3->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    (pUVar3->StartRotationValue).Yaw = dVar17;
    (pUVar3->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    dVar17 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    (pUVar3->StartVectorValue).field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (pUVar3->StartVectorValue).field0_0x0._s_0.Y = dVar17;
    (pUVar3->StartVectorValue).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pUVar3->StartFloatValue = 0.0;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pUVar9 = *(UObject **)&pUVar9[0x13].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  lVar4 = *(longlong *)(pUVar9 + 0xb);
  uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar4 != 0) {
    uVar39 = *(undefined4 *)(lVar4 + 0x210);
    uVar40 = *(undefined4 *)(lVar4 + 0x214);
    uVar41 = *(undefined4 *)(lVar4 + 0x218);
    uVar42 = *(undefined4 *)(lVar4 + 0x21c);
    local_e8._s_0.Z = *(double *)(lVar4 + 0x220);
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pUVar9 = *(UObject **)&pUVar9[0x13].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  if (*(USceneComponent **)(pUVar9 + 0xb) == (USceneComponent *)0x0) {
    pTVar10 = &local_108;
    local_108.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_108.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_108.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar10 = USceneComponent::GetComponentRotation
                        (*(USceneComponent **)(pUVar9 + 0xb),(TRotator<double> *)&local_b0._s_0);
  }
  dVar33 = (this->StartRotation).Pitch - pTVar10->Pitch;
  local_c8.Pitch = pTVar10->Pitch;
  local_c8.Yaw = pTVar10->Yaw;
  local_c8.Roll = pTVar10->Roll;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_c8.Roll;
  dVar28 = (this->StartRotation).Yaw - pTVar10->Yaw;
  auVar19._0_8_ = (this->StartRotation).Roll - local_c8.Roll;
  auVar18._8_4_ = SUB84(dVar28,0);
  auVar18._0_8_ = dVar33;
  auVar18._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  auVar18 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar18 = roundpd(auVar25,auVar18,3);
  dVar17 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar26._0_8_ = auVar18._0_8_ * dVar17;
  dVar31 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar26._8_8_ = auVar18._8_8_ * dVar31;
  auVar19._8_8_ = 0;
  auVar18 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar33 = dVar33 - auVar26._0_8_;
  dVar28 = dVar28 - auVar26._8_8_;
  auVar18 = roundpd(auVar26,auVar18,3);
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar20._8_4_ = SUB84(dVar28,0);
  auVar20._0_8_ = dVar33;
  auVar20._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  dVar24 = auVar20._8_8_ + dVar31;
  dVar35 = auVar19._0_8_ - auVar18._0_8_ * dVar5;
  dVar36 = 0.0 - auVar18._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar13 = -(ulonglong)(0.0 <= dVar33);
  uVar15 = -(ulonglong)(0.0 <= dVar28);
  uVar14 = -(ulonglong)(0.0 <= dVar35);
  uVar16 = -(ulonglong)(0.0 <= dVar36);
  auVar27._0_8_ = uVar13 & (ulonglong)dVar33;
  auVar27._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar28);
  auVar27._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar28) >> 0x20);
  auVar32._0_4_ = ~(uint)uVar13 & SUB84(dVar33 + dVar17,0);
  auVar32._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar17) >> 0x20);
  auVar32._8_4_ = ~(uint)uVar15 & SUB84(dVar24,0);
  auVar32._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar29._0_8_ = uVar14 & (ulonglong)dVar35;
  auVar29._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar36);
  auVar29._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar36) >> 0x20);
  auVar32 = auVar32 | auVar27;
  auVar21._8_4_ = SUB84(dVar36,0);
  auVar21._0_8_ = dVar35;
  auVar21._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  dVar24 = auVar21._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar34._0_4_ = ~(uint)uVar14 & SUB84(dVar35 + dVar5,0);
  auVar34._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar5) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar16 & SUB84(dVar24,0);
  auVar34._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
  auVar34 = auVar34 | auVar29;
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar32._8_8_);
  dVar31 = auVar32._8_8_ - dVar31;
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
  uVar23 = (uint)(-(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar32._0_8_) >>
                 0x20);
  auVar6._4_8_ = dVar31;
  auVar6._0_4_ = (uint)((ulonglong)(auVar32._0_8_ - dVar17) >> 0x20) & uVar23;
  auVar30._0_8_ = auVar6._0_8_ << 0x20;
  uVar13 = uVar15 & (ulonglong)dVar31;
  auVar30._8_4_ = (undefined4)uVar13;
  auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar7._4_8_ = uVar15;
  auVar7._0_4_ = ~uVar23 & auVar32._4_4_;
  auVar22._0_8_ = auVar7._0_8_ << 0x20;
  auVar22._8_4_ = ~(uint)uVar15 & auVar32._8_4_;
  auVar22._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar32._12_4_;
  uVar13 = auVar30._8_8_ | auVar22._8_8_;
  local_108.Roll =
       (double)((ulonglong)(auVar34._0_8_ - dVar5) & uVar14 |
               CONCAT44(~(uint)(uVar14 >> 0x20) & auVar34._4_4_,~(uint)uVar14 & auVar34._0_4_));
  if ((float)(double)CONCAT44((uint)(uVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      *(float *)&this->_padding_) {
    return;
  }
  dVar17 = (this->StartRotation).Yaw;
  this->ElapsedTime = param_2 + this->ElapsedTime;
  DS_Util::GetForwardVectorFromYaw((TVector<double> *)&local_98[0]._s_0,(float)dVar17);
  pTVar11 = UE::Math::TRotator<double>::Vector(&local_c8,(TVector<double> *)&local_b0._s_0);
  fVar37 = 0.0;
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  local_108.Roll = local_e8._s_0.Z;
  dVar17 = (double)local_98[0]._8_8_ * (pTVar11->field0_0x0)._s_0.X -
           (double)local_98[0]._0_8_ * (pTVar11->field0_0x0)._s_0.Y;
  this_01 = (APlayerController *)
            (**(code **)(*(longlong *)ADS_CameraManager::StaticInstance + 0x7a8))();
  if (this_01 != (APlayerController *)0x0) {
    pUVar9 = (UObject *)this_01->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UObject *)0x0) goto LAB_14b8f2252;
    }
    else if (pUVar9 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar9);
LAB_14b8f2252:
      local_e8._s_0.Z = local_108.Roll;
      local_e8._0_4_ = uVar39;
      local_e8._4_4_ = uVar40;
      local_e8._8_4_ = uVar41;
      local_e8._12_4_ = uVar42;
      APlayerController::ProjectWorldLocationToScreenWithDistance
                (this_01,(TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_b0._s_0,false);
      pFVar12 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
      local_res8 = (pFVar12->CachedGeometry).Size;
      fVar37 = fVar2 * (float)local_res8._0_4_ * __real_3f000000 * __real_3c23d70a;
      fVar38 = (float)(local_b0._s_0.X - (double)((float)local_res8._0_4_ * __real_3f000000));
    }
  }
  if ((float)((uint)fVar38 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar37) {
LAB_14b8f2306:
    fVar38 = this->TargetMedian;
    if (0.0 < dVar17) goto LAB_14b8f231b;
  }
  else {
    pdVar1 = &(param_1->CameraSocketOffset).field0_0x0._s_0.Y;
    if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
      if (dVar17 < 0.0) {
        fVar38 = this->TargetMedian;
        goto LAB_14b8f231b;
      }
      goto LAB_14b8f2306;
    }
    if (dVar17 < 0.0) goto LAB_14b8f2306;
    fVar38 = this->TargetMedian;
  }
  fVar38 = (float)((uint)fVar38 ^ __xmm_80000000800000008000000080000000);
LAB_14b8f231b:
  local_108.Yaw = (double)fVar38 + local_c8.Yaw;
  local_108.Pitch = (double)*(float *)&this->_padding_;
  dVar17 = (this->TargetRotation).Yaw - local_108.Yaw;
  local_108.Roll = 0.0;
  if ((double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_4008000000000000) {
    local_res8._0_4_ = 0x3f800000;
    UDS_CameraInterp::UpdateRotation
              ((this->CameraInterp).field0_0x0.DebugPtr,&param_1->CameraRotation,param_2,
               &this->StartRotation,&local_108,(float *)((longlong)&this->_padding_ + 4),
               (float *)&local_res8);
  }
  else {
    (this->TargetRotation).Pitch = local_108.Pitch;
    (this->TargetRotation).Yaw = local_108.Yaw;
    (this->TargetRotation).Roll = 0.0;
    this->ElapsedTime = 0.0;
  }
  return;
}

