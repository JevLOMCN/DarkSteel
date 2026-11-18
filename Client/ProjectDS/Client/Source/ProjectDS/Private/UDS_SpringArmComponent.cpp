// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b5a06b0

UClass * __cdecl UDS_SpringArmComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpringArmComponent",
               &Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton,
               StaticRegisterNativesUDS_SpringArmComponent,0x3e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SpringArmComponent>,
               InternalVTableHelperCtorCaller<UDS_SpringArmComponent>,local_res8,
               USpringArmComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton;
}

// UDS_SpringArmComponent @ 14b5a2980

UDS_SpringArmComponent * __thiscall
UDS_SpringArmComponent::UDS_SpringArmComponent(UDS_SpringArmComponent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  USpringArmComponent::USpringArmComponent((USpringArmComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SpringArmData).BattleScreenRatio = 0.0;
  (this->SpringArmData).bPreTeleportMove = false;
  (this->SpringArmData).bTeleportMove = false;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z = (double)uVar1;
  (this->SpringArmData).bStartWorldToLocalCameraLag = false;
  (this->SpringArmData).bActiveBattleModeCamera = false;
  this->bFixedCollision = false;
  (this->CachedMainPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SpringArmComponent @ 14b5a2c40

void __thiscall UDS_SpringArmComponent::~UDS_SpringArmComponent(UDS_SpringArmComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USpringArmComponent::~USpringArmComponent((USpringArmComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b5a3520

UClass * __cdecl UDS_SpringArmComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpringArmComponent",
               &Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton,
               StaticRegisterNativesUDS_SpringArmComponent,0x3e0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SpringArmComponent>,
               InternalVTableHelperCtorCaller<UDS_SpringArmComponent>,local_res8,
               USpringArmComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SpringArmComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_SpringArmComponent @ 14b5a37e0

void __cdecl UDS_SpringArmComponent::StaticRegisterNativesUDS_SpringArmComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_SpringArmComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnTeleportMoveFinish @ 14b5a4580

void __cdecl
UDS_SpringArmComponent::execOnTeleportMoveFinish(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnTeleportMoveFinish((UDS_SpringArmComponent *)param_1);
  return;
}

// execOnTeleportMoveStart @ 14b5a45a0

void __cdecl
UDS_SpringArmComponent::execOnTeleportMoveStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnTeleportMoveStart((UDS_SpringArmComponent *)param_1);
  return;
}

// UDS_SpringArmComponent @ 14bc2b590

UDS_SpringArmComponent * __thiscall
UDS_SpringArmComponent::UDS_SpringArmComponent
          (UDS_SpringArmComponent *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  USpringArmComponent::USpringArmComponent((USpringArmComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SpringArmData).BattleScreenRatio = 0.0;
  (this->SpringArmData).bPreTeleportMove = false;
  (this->SpringArmData).bTeleportMove = false;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z = (double)uVar1;
  (this->SpringArmData).bStartWorldToLocalCameraLag = false;
  (this->SpringArmData).bActiveBattleModeCamera = false;
  this->bFixedCollision = false;
  (this->CachedMainPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// BattleModeCamera @ 14bc2daa0

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
UDS_SpringArmComponent::BattleModeCamera
          (UDS_SpringArmComponent *this,TVector<double> *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  USceneComponent *this_00;
  UClass *pUVar5;
  UObject *pUVar6;
  TRotator<double> *pTVar7;
  TVector<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float local_res8 [2];
  float local_res20 [2];
  TVector2<double>_u_0 local_d8;
  TVector<double>_u_0 local_c8;
  TVector2<double>_u_0 local_a8;
  TQuat<double> local_98;
  TVector<double> local_78 [3];
  
  ValidateCachedComponents(this);
  bVar4 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if ((bVar4) &&
     (this_00 = USceneComponent::GetChildComponent((USceneComponent *)this,0),
     this_00 != (USceneComponent *)0x0)) {
    pUVar5 = Z_Construct_UClass_UDS_CameraComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar6 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
      lVar2 = *(longlong *)&pUVar6[0x12].field_0x20;
      if (lVar2 != 0) {
        pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar5->_padding_)) && (*(longlong *)(lVar2 + 0x390) != 0)) {
          bVar4 = UE::Math::TVector<double>::IsNearlyZero
                            (&(this->SpringArmData).PreEntityLocation,__real_3f1a36e2e0000000);
          if (bVar4) {
            dVar3 = (param_1->field0_0x0)._s_0.Y;
            (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X
            ;
            (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
            (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z
            ;
          }
          dVar3 = (param_1->field0_0x0)._s_0.X -
                  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X;
          dVar15 = (param_1->field0_0x0)._s_0.Y -
                   (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y;
          pTVar7 = USceneComponent::GetComponentRotation(this_00,(TRotator<double> *)&local_c8._s_0)
          ;
          UE::Math::TRotator<double>::Quaternion(pTVar7,&local_98);
          dVar14 = __real_3ff0000000000000;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_98.X;
          dVar16 = (double)CONCAT44((uint)((ulonglong)local_98.Z >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(local_98.Z,0) ^
                                    (uint)__xmm_80000000000000008000000000000000);
          dVar16 = dVar16 + dVar16;
          dVar17 = (dVar16 * local_98.Z - (local_98.X + local_98.X) * local_98.X) +
                   __real_3ff0000000000000;
          local_c8._8_4_ = SUB84(dVar17,0);
          local_c8._0_8_ = dVar16 * local_98.W + (local_98.X + local_98.X) * local_98.Y;
          local_c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_a8._s_0.X = dVar3;
          local_a8._s_0.Y = dVar15;
          DS_Util::GetVectorProjDist
                    ((TVector2<double> *)&local_d8._s_0,(TVector2<double> *)&local_c8._s_0,
                     (TVector2<double> *)&local_a8._s_0);
          auVar9._0_8_ = local_d8._s_0.Y * local_d8._s_0.Y;
          auVar9._8_8_ = 0;
          auVar10._0_8_ = local_d8._s_0.X * local_d8._s_0.X + auVar9._0_8_;
          auVar10._8_8_ = 0;
          auVar9 = sqrtpd(auVar9,auVar10);
          if (__real_3e45798ee2308c3a < auVar9._0_8_) {
            pTVar7 = (TRotator<double> *)
                     (**(code **)(**(longlong **)(lVar2 + 0x390) + 0x840))
                               (*(longlong **)(lVar2 + 0x390),&local_c8);
            pTVar8 = UE::Math::TRotator<double>::Vector(pTVar7,local_78);
            dVar16 = dVar3 * dVar3 + dVar15 * dVar15;
            if (dVar16 <= __real_3e45798ee0000000) {
              dVar14 = 0.0;
              dVar15 = 0.0;
            }
            else {
              dVar14 = dVar14 / SQRT(dVar16);
              dVar15 = dVar14 * dVar15;
              dVar14 = dVar14 * dVar3;
            }
            fVar18 = __real_bf800000;
            if (0.0 < dVar15 * (pTVar8->field0_0x0)._s_0.X - dVar14 * (pTVar8->field0_0x0)._s_0.Y) {
              fVar18 = __real_3f800000;
            }
            local_c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
            local_c8._0_16_ = *(undefined1 (*) [16])&param_1->field0_0x0;
            local_res20[0] = 0.0;
            local_res8[0] = 0.0;
            ADS_CameraManager::CalculateLocalPositionXFromMargin
                      ((TVector<double> *)&local_c8._s_0,(this->SpringArmData).BattleScreenRatio,
                       local_res8,local_res20);
            if (local_res20[0] <=
                (float)((uint)local_res8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              if (((0.0 < fVar18) && (dVar3 = *(double *)&this->field_0x260, 0.0 < dVar3)) ||
                 ((fVar18 < 0.0 && (dVar3 = *(double *)&this->field_0x260, dVar3 < 0.0)))) {
                auVar12._0_8_ =
                     local_d8._s_0.X * local_d8._s_0.X + local_d8._s_0.Y * local_d8._s_0.Y;
                auVar12._8_8_ = 0;
                auVar9 = sqrtpd(auVar12,auVar12);
                *(double *)&this->field_0x260 = dVar3 - auVar9._0_8_ * (double)fVar18;
              }
            }
            else {
              auVar11._0_8_ = local_d8._s_0.X * local_d8._s_0.X + local_d8._s_0.Y * local_d8._s_0.Y;
              auVar11._8_8_ = 0;
              auVar9 = sqrtpd(auVar13,auVar11);
              *(double *)&this->field_0x260 =
                   *(double *)&this->field_0x260 - auVar9._0_8_ * (double)fVar18;
            }
          }
          dVar3 = (param_1->field0_0x0)._s_0.Y;
          (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
          (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
          (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        }
      }
    }
  }
  return;
}

// BeginPlay @ 14bc2e740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_SpringArmComponent::BeginPlay(UDS_SpringArmComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_res10 [3];
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  ValidateCachedComponents(this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
    ::FName::FName(local_res10,"OnTeleportMoveStart");
    if ((*(longlong *)&pUVar2[0x41].field_0x18 != 0) && (this != (UDS_SpringArmComponent *)0x0)) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUFunction<UObject>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (*(longlong *)&pUVar2[0x41].field_0x18 + 0xc0),(UObject *)(local_res10 + 1),
                 (FName *)this);
    }
    pUVar2 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
    ::FName::FName(local_res10,"OnTeleportMoveFinish");
    if ((*(longlong *)&pUVar2[0x41].field_0x18 != 0) && (this != (UDS_SpringArmComponent *)0x0)) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUFunction<UObject>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (*(longlong *)&pUVar2[0x41].field_0x18 + 0xe0),(UObject *)(local_res10 + 1),
                 (FName *)this);
    }
  }
  return;
}

// CalcFixedOffsets @ 14bc2f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_SpringArmComponent::CalcFixedOffsets
          (UDS_SpringArmComponent *this,bool param_1,TRotator<double> *param_2,float param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  AActor *this_00;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  UObject *pUVar14;
  TVector<double> *pTVar15;
  TRotationMatrix<double> *pTVar16;
  FName *pFVar17;
  UWorld *this_01;
  TVector<double> *pTVar18;
  TTransform<double> *pTVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined4 uVar40;
  undefined1 auStackY_318 [32];
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  FWeakObjectPtr local_288;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined2 uStack_22b;
  undefined1 uStack_229;
  undefined1 local_228 [24];
  double local_210;
  double local_208;
  int local_184;
  byte local_17b;
  FWeakObjectPtr local_170;
  FWeakObjectPtr FStack_168;
  IActorInstanceManagerInterface *local_160;
  undefined8 uStack_158;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_318;
  puVar1 = &this->field_0x270;
  local_2b8._s_0.Z = *(double *)&this->field_0x220 + *(double *)&this->field_0x280;
  local_2b8._s_0.X = *(double *)&this->field_0x210 + *(double *)puVar1;
  local_2b8._s_0.Y = *(double *)&this->field_0x218 + *(double *)&this->field_0x278;
  local_280._s_0.X = local_2b8._s_0.X;
  local_280._s_0.Y = local_2b8._s_0.Y;
  local_280._s_0.Z = local_2b8._s_0.Z;
  if ((param_1) && (bVar13 = IsAttachedParent(this), bVar13)) {
    ValidateCachedComponents(this);
    bVar13 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
    if ((bVar13) && (bVar13 = FWeakObjectPtr::IsValid(&(this->CachedMovementCore).WeakPtr), bVar13))
    {
      pUVar14 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
      (**(code **)(*(longlong *)&pUVar14[0x29].field_0x10 + 0x1d0))
                (&pUVar14[0x29].field_0x10,&local_288);
      bVar13 = FWeakObjectPtr::IsValid(&local_288);
      if (bVar13) {
        pUVar14 = FWeakObjectPtr::Get(&(this->CachedMovementCore).WeakPtr);
        local_2a0._s_0.X = (double)*(undefined8 *)&pUVar14[4].field_0x10;
        local_2a0._s_0.Y = (double)*(undefined8 *)&pUVar14[4].field_0x18;
        local_2a0._s_0.Z = (double)*(undefined8 *)&pUVar14[4].field_0x20;
        FMath::VInterpTo((TVector<double> *)&local_268._s_0,
                         &(this->SpringArmData).PreRelativeDesiredLoc,
                         (TVector<double> *)&local_2a0._s_0,param_3,*(float *)&this->field_0x294);
        pUVar14 = FWeakObjectPtr::Get(&local_288);
        if (*(longlong *)(pUVar14 + 0xb) == 0) {
          pTVar19 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar19 = (TTransform<double> *)(*(longlong *)(pUVar14 + 0xb) + 0x1f0);
        }
        auVar35 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
        dVar23 = auVar35._0_8_;
        dVar9 = (pTVar19->Rotation).ZW.m128d_f64[1];
        dVar7 = (local_268._s_0.Z - local_2a0._s_0.Z) * (pTVar19->Scale3D).ZW.m128d_f64[0];
        dVar8 = (pTVar19->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar24 = (local_268._s_0.X - local_2a0._s_0.X) * (pTVar19->Scale3D).XY.m128d_f64[0];
        dVar5 = (local_268._s_0.Y - local_2a0._s_0.Y) * (pTVar19->Scale3D).XY.m128d_f64[1];
        local_248._0_16_ = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        auVar25 = blendpd(local_248._0_16_,auVar35,2);
        dVar6 = dVar7 * local_248._8_8_ - dVar23 * dVar5;
        auVar36._8_4_ = SUB84(dVar6,0);
        auVar36._0_8_ = dVar5 * local_248._0_8_ - local_248._8_8_ * dVar24;
        auVar36._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar37._8_4_ = SUB84(dVar5,0);
        auVar37._0_8_ = dVar24;
        auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar20._8_4_ = SUB84(dVar8,0);
        auVar20._0_8_ = dVar7;
        auVar20._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar20 = blendpd(auVar37,auVar20,2);
        auVar30._0_8_ = auVar20._0_8_ * dVar23 - auVar25._0_8_ * dVar7;
        auVar30._8_8_ = auVar20._8_8_ * auVar35._8_8_ - auVar25._8_8_ * dVar8;
        auVar20 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
        auVar37 = blendpd(auVar36,auVar30,2);
        dVar6 = dVar6 + dVar6;
        dVar8 = auVar30._0_8_ + auVar30._0_8_;
        uVar40 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar38._0_8_ = auVar37._0_8_ + auVar37._0_8_;
        auVar38._8_8_ = auVar37._8_8_ + auVar37._8_8_;
        auVar33._8_4_ = SUB84(dVar8,0);
        auVar33._0_8_ = dVar6;
        auVar33._12_4_ = uVar40;
        auVar29._8_4_ = SUB84(dVar8,0);
        auVar29._0_8_ = dVar6;
        auVar29._12_4_ = uVar40;
        auVar30 = blendpd(auVar29,auVar38,2);
        auVar37 = blendpd(auVar20,auVar35,2);
        auVar34._0_8_ = auVar33._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar6;
        auVar34._8_8_ = auVar38._0_8_ * auVar20._8_8_ - dVar23 * dVar8;
        auVar25._8_4_ = SUB84(auVar34._8_8_,0);
        auVar25._0_8_ = auVar34._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
        auVar31._0_8_ = auVar30._0_8_ * dVar23 - auVar37._0_8_ * auVar38._0_8_;
        auVar31._8_8_ = auVar30._8_8_ * auVar35._8_8_ - auVar37._8_8_ * auVar38._8_8_;
        local_2b8._s_0.X = local_2b8._s_0.X + dVar6 * dVar9 + dVar24 + auVar25._8_8_;
        auVar35 = blendpd(auVar34,auVar31,2);
        local_248._s_0.Z = auVar38._0_8_ * dVar9 + dVar7 + auVar35._0_8_;
        local_2b8._s_0.Z = local_2b8._s_0.Z + local_248._s_0.Z;
        local_2b8._s_0.Y = local_2b8._s_0.Y + dVar8 * dVar9 + dVar5 + auVar31._0_8_;
      }
    }
  }
  uVar12 = local_280._s_0.Z;
  uVar11 = local_280._s_0.Y;
  uVar10 = local_280._s_0.X;
  fVar3 = *(float *)&this->field_0x2a0;
  fVar39 = 0.0;
  if (0.0 < fVar3) {
    local_2a0._s_0.Y = local_2b8._s_0.Y - local_280._s_0.Y;
    local_2a0._s_0.X = local_2b8._s_0.X - local_280._s_0.X;
    local_2a0._s_0.Z = local_2b8._s_0.Z - local_280._s_0.Z;
    if ((double)(fVar3 * fVar3) <
        local_2a0._s_0.X * local_2a0._s_0.X + local_2a0._s_0.Y * local_2a0._s_0.Y +
        local_2a0._s_0.Z * local_2a0._s_0.Z) {
      pTVar15 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_2a0._s_0,(TVector<double> *)&local_248._s_0,
                           (double)fVar3);
      local_2b8._s_0.Z = (double)uVar12 + (pTVar15->field0_0x0)._s_0.Z;
      local_2b8._s_0.Y = (double)uVar11 + (pTVar15->field0_0x0)._s_0.Y;
      local_2b8._s_0.X = (double)uVar10 + (pTVar15->field0_0x0)._s_0.X;
    }
  }
  pTVar15 = UE::Math::TRotator<double>::Vector(param_2,(TVector<double> *)&local_248._s_0);
  dVar24 = (double)*(float *)&this->field_0x250;
  local_2b8._s_0.X = local_2b8._s_0.X - dVar24 * (pTVar15->field0_0x0)._s_0.X;
  local_2b8._s_0.Y = local_2b8._s_0.Y - dVar24 * (pTVar15->field0_0x0)._s_0.Y;
  local_2b8._s_0.Z = local_2b8._s_0.Z - dVar24 * (pTVar15->field0_0x0)._s_0.Z;
  pTVar16 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
                      ((TRotationMatrix<double> *)&local_128,param_2);
  this_00 = *(AActor **)&this->field_0xa8;
  puVar2 = &this->field_0x258;
  dVar24 = *(double *)&this->field_0x268;
  auVar35 = *(undefined1 (*) [16])puVar2;
  dVar5 = auVar35._0_8_;
  dVar6 = auVar35._8_8_;
  auVar21._8_4_ = auVar35._8_4_;
  auVar21._0_8_ = dVar6;
  auVar21._12_4_ = auVar35._12_4_;
  local_2b8._s_0.X =
       local_2b8._s_0.X +
       dVar5 * *(double *)pTVar16 + dVar6 * *(double *)&pTVar16->field_0x20 +
       *(double *)&pTVar16->field_0x40 * dVar24 + *(double *)&pTVar16->field_0x60 * 0.0;
  local_2b8._s_0.Z =
       local_2b8._s_0.Z +
       *(double *)&pTVar16->field_0x30 * dVar6 + *(double *)&pTVar16->field_0x10 * dVar5 +
       *(double *)&pTVar16->field_0x50 * dVar24 + *(double *)&pTVar16->field_0x70 * 0.0;
  local_2b8._s_0.Y =
       local_2b8._s_0.Y +
       dVar5 * *(double *)&pTVar16->field_0x8 + auVar21._8_8_ * *(double *)&pTVar16->field_0x28 +
       *(double *)&pTVar16->field_0x48 * dVar24 + *(double *)&pTVar16->field_0x68 * 0.0;
  if (this_00 != (AActor *)0x0) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SpringArm =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_SpringArmComponent::CalcFixedOffsets(bool,UE::Math::TRotator<double>,float)_::_20_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
            )0x0;
      pFVar17 = ::FName::FName((FName *)&local_268._s_0,"SpringArm");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar17,L"SpringArm",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_288 = (FWeakObjectPtr)StatPtr_SpringArm;
    if (StatPtr_SpringArm ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_SpringArmComponent::CalcFixedOffsets(bool,UE::Math::TRotator<double>,float)_::_20_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
         )0x0) {
      pFVar17 = ::FName::FName((FName *)&local_268._s_0,"SpringArm");
      local_288 = (FWeakObjectPtr)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar17,L"SpringArm",
                             "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true
                             ,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SpringArm");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_128,::StaticName,(TStatId *)&local_288,false,this_00);
    local_2a0._s_0.X = 0.0;
    local_2a0._s_0.Y = 0.0;
    AActor::GetAttachedActors
              (this_00,(TArray<AActor_*,TSizedDefaultAllocator<32>_> *)&local_2a0._s_0,true,false);
    FCollisionQueryParams::AddIgnoredActors
              (&local_128,(TArray<AActor_*,TSizedDefaultAllocator<32>_> *)&local_2a0._s_0);
    memset(local_228,0,0x100);
    fVar3 = __real_3f800000;
    this_01 = *(UWorld **)&this->field_0xb0;
    uStack_22b = 0;
    uStack_229 = 0;
    local_248._s_0.Z = 0.0;
    uStack_22c = 0;
    uStack_230 = 0xffffffff;
    local_228._4_4_ = 1.0;
    local_184 = -1;
    local_170.ObjectIndex = 0;
    local_170.ObjectSerialNumber = 0;
    FStack_168.ObjectIndex = 0;
    FStack_168.ObjectSerialNumber = 0;
    uStack_158._0_4_ = -1;
    uStack_158._4_1_ = Invalid;
    uStack_158._5_3_ = 0;
    local_160 = (IActorInstanceManagerInterface *)0x0;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_268._4_4_ = *(undefined4 *)&this->field_0x288;
    local_268._0_4_ = 2;
    UWorld::SweepSingleByChannel
              (this_01,(FHitResult *)local_228,(TVector<double> *)&local_280._s_0,
               (TVector<double> *)&local_2b8._s_0,&UE::Math::TQuat<double>::Identity,
               (uint)(byte)this->field_0x28c,(FCollisionShape *)&local_268._s_0,&local_128,
               &FCollisionResponseParams::DefaultResponseParam);
    auVar35._0_8_ = (local_2b8._s_0.Y - local_280._s_0.Y) * (local_2b8._s_0.Y - local_280._s_0.Y);
    auVar35._8_8_ = 0;
    auVar26._0_8_ =
         (local_2b8._s_0.X - local_280._s_0.X) * (local_2b8._s_0.X - local_280._s_0.X) +
         auVar35._0_8_ +
         (local_2b8._s_0.Z - local_280._s_0.Z) * (local_2b8._s_0.Z - local_280._s_0.Z);
    auVar26._8_8_ = 0;
    auVar35 = sqrtpd(auVar35,auVar26);
    fVar32 = (float)auVar35._0_8_;
    if ((local_17b & 1) == 0) {
      bVar13 = false;
    }
    else {
      auVar22._0_8_ = (local_208 - local_280._s_0.Z) * (local_208 - local_280._s_0.Z);
      auVar22._8_8_ = 0;
      auVar27._0_8_ =
           (local_210 - local_280._s_0.Y) * (local_210 - local_280._s_0.Y) +
           ((double)local_228._16_8_ - local_280._s_0.X) *
           ((double)local_228._16_8_ - local_280._s_0.X) + auVar22._0_8_;
      auVar27._8_8_ = 0;
      auVar35 = sqrtpd(auVar22,auVar27);
      fVar28 = fVar32 - (float)auVar35._0_8_;
      bVar13 = fVar3 < fVar28;
      if ((fVar3 < fVar28) && (__real_38d1b717 < fVar32)) {
        fVar39 = fVar28 / fVar32;
        if (fVar3 <= fVar28 / fVar32) {
          fVar39 = fVar3;
        }
        if (fVar39 <= 0.0) {
          fVar39 = 0.0;
        }
      }
    }
    if ((void *)local_2a0._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2a0._s_0.X);
    }
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    fVar3 = __real_41a00000;
    if (bVar13) {
      dVar24 = (double)fVar39;
      local_2a0._s_0.X =
           (COLLISION_TARGET_OFFSET_END.field0_0x0._s_0.X - *(double *)puVar1) * dVar24 +
           *(double *)puVar1;
      local_2a0._s_0.Y =
           (COLLISION_TARGET_OFFSET_END.field0_0x0._s_0.Y - *(double *)&this->field_0x278) * dVar24
           + *(double *)&this->field_0x278;
      local_2a0._s_0.Z =
           (COLLISION_TARGET_OFFSET_END.field0_0x0._s_0.Z - *(double *)&this->field_0x280) * dVar24
           + *(double *)&this->field_0x280;
      local_268._s_0.Y =
           (COLLISION_SOCKET_OFFSET_END.field0_0x0._s_0.Y - *(double *)&this->field_0x260) * dVar24
           + *(double *)&this->field_0x260;
      local_268._s_0.X =
           (COLLISION_SOCKET_OFFSET_END.field0_0x0._s_0.X - *(double *)puVar2) * dVar24 +
           *(double *)puVar2;
      local_268._s_0.Z =
           (COLLISION_SOCKET_OFFSET_END.field0_0x0._s_0.Z - *(double *)&this->field_0x268) * dVar24
           + *(double *)&this->field_0x268;
      pTVar15 = FMath::VInterpTo((TVector<double> *)&local_248._s_0,&this->FixedTargetOffset,
                                 (TVector<double> *)&local_2a0._s_0,param_3,__real_41a00000);
      dVar24 = (pTVar15->field0_0x0)._s_0.Y;
      (this->FixedTargetOffset).field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
      (this->FixedTargetOffset).field0_0x0._s_0.Y = dVar24;
      (this->FixedTargetOffset).field0_0x0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
      pTVar15 = FMath::VInterpTo((TVector<double> *)&local_248._s_0,&this->FixedSocketOffset,
                                 (TVector<double> *)&local_268._s_0,param_3,fVar3);
      dVar24 = (pTVar15->field0_0x0)._s_0.Y;
      (this->FixedSocketOffset).field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
      (this->FixedSocketOffset).field0_0x0._s_0.Y = dVar24;
      (this->FixedSocketOffset).field0_0x0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
      this->bFixedCollision = true;
      return;
    }
  }
  fVar3 = __real_40a00000;
  pTVar18 = FMath::VInterpTo((TVector<double> *)&local_248._s_0,&this->FixedTargetOffset,
                             (TVector<double> *)puVar1,param_3,__real_40a00000);
  pTVar15 = &this->FixedSocketOffset;
  dVar24 = (pTVar18->field0_0x0)._s_0.Y;
  (this->FixedTargetOffset).field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
  (this->FixedTargetOffset).field0_0x0._s_0.Y = dVar24;
  (this->FixedTargetOffset).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
  pTVar18 = FMath::VInterpTo((TVector<double> *)&local_248._s_0,pTVar15,(TVector<double> *)puVar2,
                             param_3,fVar3);
  dVar5 = __real_3fb99999a0000000;
  dVar24 = (pTVar18->field0_0x0)._s_0.Y;
  (pTVar15->field0_0x0)._s_0.X = (pTVar18->field0_0x0)._s_0.X;
  (this->FixedSocketOffset).field0_0x0._s_0.Y = dVar24;
  (this->FixedSocketOffset).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
  dVar24 = (this->FixedTargetOffset).field0_0x0._s_0.X - *(double *)puVar1;
  if (((((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar5)
       && (dVar24 = (this->FixedTargetOffset).field0_0x0._s_0.Y - *(double *)&this->field_0x278,
          (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar5)
       ) && (dVar24 = (this->FixedTargetOffset).field0_0x0._s_0.Z - *(double *)&this->field_0x280,
            (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar5)) &&
     (((dVar24 = (pTVar15->field0_0x0)._s_0.X - *(double *)puVar2,
       (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar5 &&
       (dVar24 = (this->FixedSocketOffset).field0_0x0._s_0.Y - *(double *)&this->field_0x260,
       (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar5))
      && (dVar24 = (this->FixedSocketOffset).field0_0x0._s_0.Z - *(double *)&this->field_0x268,
         (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar5))
     )) {
    this->bFixedCollision = false;
  }
  return;
}

// CheckAndUpdate @ 14bc31440

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
UDS_SpringArmComponent::CheckAndUpdate
          (UDS_SpringArmComponent *this,TVector<double> *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  USceneComponent *this_00;
  UClass *pUVar5;
  UObject *pUVar6;
  TRotator<double> *pTVar7;
  TVector<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float afStackX_8 [2];
  float afStackX_20 [2];
  TVector2<double>_u_0 TStack_d8;
  TVector<double>_u_0 TStack_c8;
  TVector2<double>_u_0 TStack_a8;
  TQuat<double> TStack_98;
  TVector<double> aTStack_78 [3];
  
  if ((this->SpringArmData).bTeleportMove != true) {
    if ((this->SpringArmData).bPreTeleportMove == true) {
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      (this->SpringArmData).bPreTeleportMove = false;
    }
    if ((this->SpringArmData).bActiveBattleModeCamera == true) {
      ValidateCachedComponents(this);
      bVar4 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
      if ((bVar4) &&
         (this_00 = USceneComponent::GetChildComponent((USceneComponent *)this,0),
         this_00 != (USceneComponent *)0x0)) {
        pUVar5 = Z_Construct_UClass_UDS_CameraComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          pUVar6 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
          lVar2 = *(longlong *)&pUVar6[0x12].field_0x20;
          if (lVar2 != 0) {
            pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
                 &pUVar5->_padding_)) && (*(longlong *)(lVar2 + 0x390) != 0)) {
              bVar4 = UE::Math::TVector<double>::IsNearlyZero
                                (&(this->SpringArmData).PreEntityLocation,__real_3f1a36e2e0000000);
              if (bVar4) {
                dVar3 = (param_1->field0_0x0)._s_0.Y;
                (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X =
                     (param_1->field0_0x0)._s_0.X;
                (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
                (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z =
                     (param_1->field0_0x0)._s_0.Z;
              }
              dVar3 = (param_1->field0_0x0)._s_0.X -
                      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X;
              dVar15 = (param_1->field0_0x0)._s_0.Y -
                       (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y;
              pTVar7 = USceneComponent::GetComponentRotation
                                 (this_00,(TRotator<double> *)&TStack_c8._s_0);
              UE::Math::TRotator<double>::Quaternion(pTVar7,&TStack_98);
              dVar14 = __real_3ff0000000000000;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = TStack_98.X;
              dVar16 = (double)CONCAT44((uint)((ulonglong)TStack_98.Z >> 0x20) ^
                                        __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(TStack_98.Z,0) ^
                                        (uint)__xmm_80000000000000008000000000000000);
              dVar16 = dVar16 + dVar16;
              dVar17 = (dVar16 * TStack_98.Z - (TStack_98.X + TStack_98.X) * TStack_98.X) +
                       __real_3ff0000000000000;
              TStack_c8._8_4_ = SUB84(dVar17,0);
              TStack_c8._0_8_ = dVar16 * TStack_98.W + (TStack_98.X + TStack_98.X) * TStack_98.Y;
              TStack_c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
              TStack_a8._s_0.X = dVar3;
              TStack_a8._s_0.Y = dVar15;
              DS_Util::GetVectorProjDist
                        ((TVector2<double> *)&TStack_d8._s_0,(TVector2<double> *)&TStack_c8._s_0,
                         (TVector2<double> *)&TStack_a8._s_0);
              auVar9._0_8_ = TStack_d8._s_0.Y * TStack_d8._s_0.Y;
              auVar9._8_8_ = 0;
              auVar10._0_8_ = TStack_d8._s_0.X * TStack_d8._s_0.X + auVar9._0_8_;
              auVar10._8_8_ = 0;
              auVar9 = sqrtpd(auVar9,auVar10);
              if (__real_3e45798ee2308c3a < auVar9._0_8_) {
                pTVar7 = (TRotator<double> *)
                         (**(code **)(**(longlong **)(lVar2 + 0x390) + 0x840))
                                   (*(longlong **)(lVar2 + 0x390),&TStack_c8);
                pTVar8 = UE::Math::TRotator<double>::Vector(pTVar7,aTStack_78);
                dVar16 = dVar3 * dVar3 + dVar15 * dVar15;
                if (dVar16 <= __real_3e45798ee0000000) {
                  dVar14 = 0.0;
                  dVar15 = 0.0;
                }
                else {
                  dVar14 = dVar14 / SQRT(dVar16);
                  dVar15 = dVar14 * dVar15;
                  dVar14 = dVar14 * dVar3;
                }
                fVar18 = __real_bf800000;
                if (0.0 < dVar15 * (pTVar8->field0_0x0)._s_0.X -
                          dVar14 * (pTVar8->field0_0x0)._s_0.Y) {
                  fVar18 = __real_3f800000;
                }
                TStack_c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
                TStack_c8._0_16_ = *(undefined1 (*) [16])&param_1->field0_0x0;
                afStackX_20[0] = 0.0;
                afStackX_8[0] = 0.0;
                ADS_CameraManager::CalculateLocalPositionXFromMargin
                          ((TVector<double> *)&TStack_c8._s_0,
                           (this->SpringArmData).BattleScreenRatio,afStackX_8,afStackX_20);
                if (afStackX_20[0] <=
                    (float)((uint)afStackX_8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                  if (((0.0 < fVar18) && (dVar3 = *(double *)&this->field_0x260, 0.0 < dVar3)) ||
                     ((fVar18 < 0.0 && (dVar3 = *(double *)&this->field_0x260, dVar3 < 0.0)))) {
                    auVar12._0_8_ =
                         TStack_d8._s_0.X * TStack_d8._s_0.X + TStack_d8._s_0.Y * TStack_d8._s_0.Y;
                    auVar12._8_8_ = 0;
                    auVar9 = sqrtpd(auVar12,auVar12);
                    *(double *)&this->field_0x260 = dVar3 - auVar9._0_8_ * (double)fVar18;
                  }
                }
                else {
                  auVar11._0_8_ =
                       TStack_d8._s_0.X * TStack_d8._s_0.X + TStack_d8._s_0.Y * TStack_d8._s_0.Y;
                  auVar11._8_8_ = 0;
                  auVar9 = sqrtpd(auVar13,auVar11);
                  *(double *)&this->field_0x260 =
                       *(double *)&this->field_0x260 - auVar9._0_8_ * (double)fVar18;
                }
              }
              dVar3 = (param_1->field0_0x0)._s_0.Y;
              (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X =
                   (param_1->field0_0x0)._s_0.X;
              (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
              (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z =
                   (param_1->field0_0x0)._s_0.Z;
            }
          }
        }
      }
      return;
    }
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
    (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  return;
}

// CopyFromOtherSpringArm @ 14bc32b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SpringArmComponent::CopyFromOtherSpringArm
          (UDS_SpringArmComponent *this,
          TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined6 uVar9;
  bool bVar10;
  UDS_LogManager *pUVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UDS_MainCameraComponent *pUVar14;
  UDS_CameraStateBase *this_00;
  longlong lVar15;
  longlong lVar16;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1a8 [32];
  uint uVar17;
  wchar_t *pwVar18;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  UObject *local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_res10 = param_1.WeakPtr;
  bVar10 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar10) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SpringArmComponent::CopyFromOtherSpringArm",0x2e,Yes);
    pwVar18 = L"InOtherSpringArm is nullptr.";
    uVar17 = 0x19d;
    goto LAB_14bc332e4;
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x250 = *(undefined4 *)&pUVar12[0xe].field_0x20;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0xf].field_0x8;
  *(undefined8 *)&this->field_0x258 = *(undefined8 *)(pUVar12 + 0xf);
  *(undefined8 *)&this->field_0x260 = uVar2;
  *(undefined8 *)&this->field_0x268 = *(undefined8 *)&pUVar12[0xf].field_0x10;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0xf].field_0x20;
  *(undefined8 *)&this->field_0x270 = *(undefined8 *)&pUVar12[0xf].field_0x18;
  *(undefined8 *)&this->field_0x278 = uVar2;
  *(undefined8 *)&this->field_0x280 = *(undefined8 *)(pUVar12 + 0x10);
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x288 = *(undefined4 *)&pUVar12[0x10].field_0x8;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  this->field_0x28c = pUVar12[0x10].field_0xc;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 1 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 2 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 4 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 8 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 0x10 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 0x20 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 0x40 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 0x80 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x290 =
       (*(uint *)&this->field_0x290 ^ *(uint *)&pUVar12[0x10].field_0x10) & 0x100 ^
       *(uint *)&this->field_0x290;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x294 = *(undefined4 *)&pUVar12[0x10].field_0x14;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x298 = *(undefined4 *)&pUVar12[0x10].field_0x18;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x29c = *(undefined4 *)&pUVar12[0x10].field_0x1c;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(undefined4 *)&this->field_0x2a0 = *(undefined4 *)&pUVar12[0x10].field_0x20;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  *(uint *)&this->field_0x2a4 =
       (*(uint *)&this->field_0x2a4 ^ *(uint *)&pUVar12[0x10].field_0x24) & 1 ^
       *(uint *)&this->field_0x2a4;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  this->field_0x2a8 = *(undefined1 *)(pUVar12 + 0x11);
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0x11].field_0x10;
  *(undefined8 *)&this->field_0x2b0 = *(undefined8 *)&pUVar12[0x11].field_0x8;
  *(undefined8 *)&this->field_0x2b8 = uVar2;
  *(undefined8 *)&this->field_0x2c0 = *(undefined8 *)&pUVar12[0x11].field_0x18;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)(pUVar12 + 0x12);
  *(undefined8 *)&this->field_0x2c8 = *(undefined8 *)&pUVar12[0x11].field_0x20;
  *(undefined8 *)&this->field_0x2d0 = uVar2;
  *(undefined8 *)&this->field_0x2d8 = *(undefined8 *)&pUVar12[0x12].field_0x8;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0x12].field_0x18;
  *(undefined8 *)&this->field_0x2e0 = *(undefined8 *)&pUVar12[0x12].field_0x10;
  *(undefined8 *)&this->field_0x2e8 = uVar2;
  *(undefined8 *)&this->field_0x2f0 = *(undefined8 *)&pUVar12[0x12].field_0x20;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0x13].field_0x8;
  *(undefined8 *)&this->field_0x2f8 = *(undefined8 *)(pUVar12 + 0x13);
  *(undefined8 *)&this->field_0x300 = uVar2;
  *(undefined8 *)&this->field_0x308 = *(undefined8 *)&pUVar12[0x13].field_0x10;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0x13].field_0x20;
  *(undefined8 *)&this->field_0x310 = *(undefined8 *)&pUVar12[0x13].field_0x18;
  *(undefined8 *)&this->field_0x318 = uVar2;
  *(undefined8 *)&this->field_0x320 = *(undefined8 *)(pUVar12 + 0x14);
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  uVar2 = *(undefined8 *)&pUVar12[0x14].field_0x18;
  *(undefined8 *)&this->field_0x330 = *(undefined8 *)&pUVar12[0x14].field_0x10;
  *(undefined8 *)&this->field_0x338 = uVar2;
  uVar2 = *(undefined8 *)(pUVar12 + 0x15);
  *(undefined8 *)&this->field_0x340 = *(undefined8 *)&pUVar12[0x14].field_0x20;
  *(undefined8 *)&this->field_0x348 = uVar2;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  dVar3 = *(double *)&pUVar12[0x15].field_0x10;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = *(double *)&pUVar12[0x15].field_0x8;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar3;
  dVar3 = *(double *)&pUVar12[0x15].field_0x20;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = *(double *)&pUVar12[0x15].field_0x18;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.X = dVar3;
  dVar3 = *(double *)&pUVar12[0x16].field_0x8;
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y = *(double *)(pUVar12 + 0x16);
  (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z = dVar3;
  uVar4 = pUVar12[0x16].field_0x11;
  uVar5 = *(undefined2 *)&pUVar12[0x16].field_0x12;
  uVar6 = *(undefined4 *)&pUVar12[0x16].field_0x14;
  uVar7 = pUVar12[0x16].field_0x18;
  uVar8 = pUVar12[0x16].field_0x19;
  uVar9 = *(undefined6 *)&pUVar12[0x16].field_0x1a;
  (this->SpringArmData).bStartWorldToLocalCameraLag = (bool)pUVar12[0x16].field_0x10;
  (this->SpringArmData).bActiveBattleModeCamera = (bool)uVar4;
  *(undefined2 *)&(this->SpringArmData).field_0x32 = uVar5;
  (this->SpringArmData).BattleScreenRatio = (float)uVar6;
  (this->SpringArmData).bPreTeleportMove = (bool)uVar7;
  (this->SpringArmData).bTeleportMove = (bool)uVar8;
  *(undefined6 *)&(this->SpringArmData).field_0x3a = uVar9;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  (this->CachedMainPlayer).WeakPtr = *(FWeakObjectPtr *)&pUVar12[0x18].field_0x4;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  (this->CachedMovementCore).WeakPtr = *(FWeakObjectPtr *)&pUVar12[0x18].field_0xc;
  pUVar12 = FWeakObjectPtr::Get(&local_res10);
  lVar15 = *(longlong *)&pUVar12[4].field_0x8;
  if (lVar15 == 0) {
LAB_14bc3304f:
    lVar15 = 0;
  }
  else {
    pUVar13 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar13->_padding_)) goto LAB_14bc3304f;
  }
  lVar16 = *(longlong *)&this->field_0xa8;
  if (lVar16 == 0) {
LAB_14bc33081:
    lVar16 = 0;
  }
  else {
    pUVar13 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar13->_padding_)) goto LAB_14bc33081;
  }
  if ((lVar15 == 0) || (lVar16 == 0)) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SpringArmComponent::CopyFromOtherSpringArm",0x2e,Yes);
    pwVar18 = L"MainCharacter is nullptr.";
    uVar17 = 0x1c9;
  }
  else {
    pUVar12 = *(UObject **)(lVar15 + 0xa38);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar12 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_168 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_168);
    pUVar12 = *(UObject **)(lVar16 + 0xa38);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar12 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
    }
    local_170.ObjectIndex = 0;
    local_170.ObjectSerialNumber = 0;
    local_168 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_168);
    bVar10 = FWeakObjectPtr::IsValid(&local_178);
    if ((bVar10) && (bVar10 = FWeakObjectPtr::IsValid(&local_170), bVar10)) {
      pUVar14 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_178);
      UDS_MainCameraComponent::GetCameraState(pUVar14,(EDS_CameraStateType)local_158);
      pUVar14 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_170);
      UDS_MainCameraComponent::GetCameraState(pUVar14,(EDS_CameraStateType)&local_160);
      bVar10 = FWeakObjectPtr::IsValid(local_158);
      if ((bVar10) && (bVar10 = FWeakObjectPtr::IsValid(&local_160), bVar10)) {
        this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&local_160);
        UDS_CameraStateBase::CopyFromOtherCameraState
                  (this_00,(TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)local_158[0]);
        return;
      }
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar11 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_SpringArmComponent::CopyFromOtherSpringArm",0x2e,Yes);
      pwVar18 = L"CameraState is nullptr.";
      uVar17 = 0x1d9;
    }
    else {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar11 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_SpringArmComponent::CopyFromOtherSpringArm",0x2e,Yes);
      pwVar18 = L"MainCamera is nullptr.";
      uVar17 = 0x1d1;
    }
  }
LAB_14bc332e4:
  UDS_LogManager::PrintLog(pUVar11,1,Warning,local_148.Ptr,uVar17,pwVar18);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// DefaultCamera @ 14bc38620

void __thiscall
UDS_SpringArmComponent::DefaultCamera
          (UDS_SpringArmComponent *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = dVar1;
  (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// GetRealDistance @ 14bc435c0

float __thiscall UDS_SpringArmComponent::GetRealDistance(UDS_SpringArmComponent *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = *(double *)&this->field_0x310 * *(double *)&this->field_0x310;
  auVar1._8_8_ = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(double *)&this->field_0x318 * *(double *)&this->field_0x318 + auVar1._0_8_ +
                 *(double *)&this->field_0x320 * *(double *)&this->field_0x320;
  auVar2 = sqrtpd(auVar1,auVar2);
  return (float)auVar2._0_8_;
}

// GetRelativeSocketLocation @ 14bc43600

TVector<double> * __thiscall
UDS_SpringArmComponent::GetRelativeSocketLocation
          (UDS_SpringArmComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)&this->field_0x318;
  dVar1 = *(double *)&this->field_0x320;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->field_0x310;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// HandleLocalCameraLag @ 14bc458c0

TVector<double> * __thiscall
UDS_SpringArmComponent::HandleLocalCameraLag
          (UDS_SpringArmComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  UObject *pUVar11;
  TVector<double> *pTVar12;
  TTransform<double> *pTVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_88;
  TVector<double> local_68 [4];
  
  ValidateCachedComponents(this);
  bVar10 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if ((bVar10) && (bVar10 = FWeakObjectPtr::IsValid(&(this->CachedMovementCore).WeakPtr), bVar10)) {
    pUVar11 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
    (**(code **)(*(longlong *)&pUVar11[0x29].field_0x10 + 0x1d0))
              (&pUVar11[0x29].field_0x10,&local_res8);
    bVar10 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar10) {
      pUVar11 = FWeakObjectPtr::Get(&(this->CachedMovementCore).WeakPtr);
      pTVar1 = &(this->SpringArmData).PreRelativeDesiredLoc;
      local_88._s_0.X = (double)*(undefined8 *)&pUVar11[4].field_0x10;
      local_88._s_0.Y = (double)*(undefined8 *)&pUVar11[4].field_0x18;
      local_88._s_0.Z = (double)*(undefined8 *)&pUVar11[4].field_0x20;
      if ((this->SpringArmData).bStartWorldToLocalCameraLag == false) {
        (this->SpringArmData).bStartWorldToLocalCameraLag = true;
        dVar2 = *(double *)&this->field_0x2d0;
        dVar22 = *(double *)&this->field_0x2e8;
        dVar3 = *(double *)&this->field_0x2d8;
        dVar4 = *(double *)&this->field_0x2f0;
        (pTVar1->field0_0x0)._s_0.X =
             (*(double *)&this->field_0x2c8 - *(double *)&this->field_0x2e0) + local_88._s_0.X;
        (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y =
             (dVar2 - dVar22) + local_88._s_0.Y;
        (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z =
             (dVar3 - dVar4) + local_88._s_0.Z;
      }
      pTVar12 = FMath::VInterpTo(local_68,pTVar1,(TVector<double> *)&local_88._s_0,param_2,
                                 *(float *)&this->field_0x294);
      dVar2 = (pTVar12->field0_0x0)._s_0.Y;
      (pTVar1->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
      (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y = dVar2;
      (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
      local_68[0].field0_0x0._16_8_ =
           (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Z - local_88._s_0.Z;
      dVar2 = (pTVar1->field0_0x0)._s_0.X - local_88._s_0.X;
      dVar22 = (this->SpringArmData).PreRelativeDesiredLoc.field0_0x0._s_0.Y - local_88._s_0.Y;
      pUVar11 = FWeakObjectPtr::Get(&local_res8);
      if (*(longlong *)(pUVar11 + 0xb) == 0) {
        pTVar13 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar13 = (TTransform<double> *)(*(longlong *)(pUVar11 + 0xb) + 0x1f0);
      }
      auVar5 = *(undefined1 (*) [16])(pTVar13->Rotation).ZW.m128d_f64;
      auVar14 = *(undefined1 (*) [16])(pTVar13->Rotation).XY.m128d_f64;
      dVar7 = (double)local_68[0].field0_0x0._16_8_ * (pTVar13->Scale3D).ZW.m128d_f64[0];
      dVar4 = (pTVar13->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar2 = (pTVar13->Scale3D).XY.m128d_f64[0] * dVar2;
      dVar22 = (pTVar13->Scale3D).XY.m128d_f64[1] * dVar22;
      uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
      dVar8 = (pTVar13->Rotation).ZW.m128d_f64[1];
      auVar16 = blendpd(auVar14,auVar5,2);
      auVar23._8_4_ = SUB84(dVar22,0);
      auVar23._0_8_ = dVar2;
      auVar23._12_4_ = uVar21;
      dVar3 = auVar5._0_8_;
      auVar24._0_8_ = auVar23._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
      auVar24._8_8_ = dVar7 * auVar14._8_8_ - dVar3 * dVar22;
      auVar25._8_4_ = SUB84(dVar22,0);
      auVar25._0_8_ = dVar2;
      auVar25._12_4_ = uVar21;
      auVar14._8_4_ = SUB84(dVar4,0);
      auVar14._0_8_ = dVar7;
      auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar14 = blendpd(auVar25,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar3 - auVar16._0_8_ * dVar7;
      auVar15._8_8_ = auVar14._8_8_ * auVar5._8_8_ - auVar16._8_8_ * dVar4;
      auVar14 = *(undefined1 (*) [16])(pTVar13->Rotation).XY.m128d_f64;
      auVar25 = blendpd(auVar24,auVar15,2);
      auVar26._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar26._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      dVar4 = auVar24._8_8_ + auVar24._8_8_;
      dVar6 = auVar15._0_8_ + auVar15._0_8_;
      uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar19._8_4_ = SUB84(dVar6,0);
      auVar19._0_8_ = dVar4;
      auVar19._12_4_ = uVar21;
      auVar17._8_4_ = SUB84(dVar6,0);
      auVar17._0_8_ = dVar4;
      auVar17._12_4_ = uVar21;
      auVar25 = blendpd(auVar17,auVar26,2);
      auVar20._0_8_ = auVar19._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar4;
      auVar20._8_8_ = auVar26._0_8_ * auVar14._8_8_ - dVar3 * dVar6;
      auVar16._8_4_ = SUB84(auVar20._8_8_,0);
      auVar16._0_8_ = auVar20._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar14 = blendpd(auVar14,auVar5,2);
      auVar18._0_8_ = auVar25._0_8_ * dVar3 - auVar14._0_8_ * auVar26._0_8_;
      auVar18._8_8_ = auVar25._8_8_ * auVar5._8_8_ - auVar14._8_8_ * auVar26._8_8_;
      auVar14 = blendpd(auVar20,auVar18,2);
      dVar22 = dVar6 * dVar8 + dVar22 + auVar18._0_8_;
      auVar5._8_4_ = SUB84(dVar22,0);
      auVar5._0_8_ = dVar4 * dVar8 + dVar2 + auVar16._8_8_;
      auVar5._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar26._0_8_ * dVar8 + dVar7 + auVar14._0_8_;
      return __return_storage_ptr__;
    }
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// HandleWorldCameraLag @ 14bc45bc0

TVector<double> * __thiscall
UDS_SpringArmComponent::HandleWorldCameraLag
          (UDS_SpringArmComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  TVector<double> *pTVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double> local_78 [4];
  
  bVar2 = this->field_0x290;
  local_90._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_90._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_90._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_90._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_90._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_90._s_0.Z;
  fVar7 = __real_38d1b717;
  if ((((bVar2 & 0x80) == 0) ||
      (param_2 < *(float *)&this->field_0x29c || param_2 == *(float *)&this->field_0x29c)) ||
     (*(float *)&this->field_0x294 <= 0.0)) {
    pTVar8 = FMath::VInterpTo(local_78,(TVector<double> *)&this->field_0x2c8,
                              (TVector<double> *)&local_90._s_0,param_2,*(float *)&this->field_0x294
                             );
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    dVar3 = (pTVar8->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  else {
    puVar1 = &this->field_0x2c8;
    dVar4 = local_90._s_0.X - *(double *)puVar1;
    dVar5 = local_90._s_0.Z - *(double *)&this->field_0x2d8;
    dVar3 = local_90._s_0.Y - *(double *)&this->field_0x2d0;
    dVar9 = (double)(__real_3f800000 / param_2);
    local_a8._s_0.X = (double)*(undefined8 *)puVar1;
    local_a8._s_0.Y = (double)*(undefined8 *)&this->field_0x2d0;
    local_a8._s_0.Z = (double)*(undefined8 *)&this->field_0x2d8;
    for (; fVar7 < param_2; param_2 = param_2 - fVar11) {
      fVar11 = *(float *)&this->field_0x29c;
      if (param_2 <= *(float *)&this->field_0x29c) {
        fVar11 = param_2;
      }
      dVar10 = (double)fVar11;
      local_a8._s_0.X = local_a8._s_0.X + dVar10 * dVar4 * dVar9;
      local_a8._s_0.Y = local_a8._s_0.Y + dVar10 * dVar3 * dVar9;
      local_a8._s_0.Z = local_a8._s_0.Z + dVar10 * dVar5 * dVar9;
      pTVar8 = FMath::VInterpTo(local_78,(TVector<double> *)puVar1,(TVector<double> *)&local_a8._s_0
                                ,fVar11,*(float *)&this->field_0x294);
      dVar6 = (pTVar8->field0_0x0)._s_0.Y;
      dVar10 = (pTVar8->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
      dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
      *(double *)puVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
      *(double *)&this->field_0x2d0 = dVar6;
      *(double *)&this->field_0x2d8 = dVar10;
    }
  }
  return __return_storage_ptr__;
}

// IsAttachedParent @ 14bc4a0a0

bool __thiscall UDS_SpringArmComponent::IsAttachedParent(UDS_SpringArmComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMovementCore).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
      this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
                (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x1d0))();
      bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}

// OnTeleportMoveFinish @ 14bc531c0

void __thiscall UDS_SpringArmComponent::OnTeleportMoveFinish(UDS_SpringArmComponent *this)

{
  (this->SpringArmData).bTeleportMove = false;
  return;
}

// OnTeleportMoveStart @ 14bc531d0

void __thiscall UDS_SpringArmComponent::OnTeleportMoveStart(UDS_SpringArmComponent *this)

{
  (this->SpringArmData).bPreTeleportMove = true;
  (this->SpringArmData).bTeleportMove = true;
  return;
}

// SetActiveBattleMode @ 14bc5bed0

void __thiscall
UDS_SpringArmComponent::SetActiveBattleMode(UDS_SpringArmComponent *this,bool param_1)

{
  (this->SpringArmData).bActiveBattleModeCamera = param_1;
  return;
}

// SetBattleModeRatio @ 14bc5cc60

void __thiscall
UDS_SpringArmComponent::SetBattleModeRatio(UDS_SpringArmComponent *this,float param_1)

{
  (this->SpringArmData).BattleScreenRatio = param_1;
  return;
}

// UpdateDesiredArmLocation @ 14bc6bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_SpringArmComponent::UpdateDesiredArmLocation
          (UDS_SpringArmComponent *this,bool param_1,bool param_2,bool param_3,float param_4)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  UObject *pUVar6;
  AActor *this_00;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  bool bVar14;
  UClass *pUVar15;
  TQuat<double> *pTVar16;
  TRotator<double> *pTVar17;
  TVector<double> *pTVar18;
  UWorld *pUVar19;
  UDS_GameInstance *pUVar20;
  TRotationMatrix<double> *pTVar21;
  UDS_LogManager *pUVar22;
  FName *pFVar23;
  double *pdVar24;
  FString *pFVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStackY_918 [32];
  undefined1 local_8b8 [24];
  TVector<double>_u_0 local_8a0;
  FColor_u_0 local_888 [2];
  TRotator<double> local_880;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_868;
  TRotator<double> local_858;
  TVector<double>_u_0 local_840;
  TStatId local_828;
  TVector<double>_u_0 local_820;
  FCollisionShape local_808 [2];
  undefined8 local_7e8;
  undefined4 uStack_7e0;
  undefined1 uStack_7dc;
  undefined2 uStack_7db;
  undefined1 uStack_7d9;
  TVector<double>_u_0 local_7d8;
  TVector<double>_u_0 local_7c0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  TVector<double>_u_0 local_790;
  FName local_778;
  FName local_770;
  TRotator<double> local_768;
  TVector<double>_u_0 local_748;
  undefined1 local_730 [16];
  double local_720;
  TQuat<double> local_718;
  TQuat<double> local_6f8;
  TQuat<double> local_6d8;
  TQuat<double> local_6b8;
  double local_698;
  double dStack_690;
  double local_688;
  FString local_680;
  FString local_670;
  FString local_660;
  TRotator<double> local_650;
  TVector<double> local_638;
  TVector<double> local_620;
  TVector<double> local_608;
  TVector<double> local_5f0;
  undefined1 local_5d8 [24];
  TRotator<double> local_5c0;
  TQuat<double> local_5a8;
  TQuat<double> local_588;
  TQuat<double> local_568;
  TQuat<double> local_548;
  TQuat<double> local_528;
  TQuat<double> local_508;
  TQuat<double> local_4e8;
  FHitResult local_4c8;
  TRotationMatrix<double> local_3c8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  FCollisionQueryParams local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_918;
  USpringArmComponent::GetTargetRotation((USpringArmComponent *)this,&local_880);
  fVar60 = param_4;
  if ((*(uint *)&this->field_0x2a4 & 1) != 0) {
    pUVar15 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    pUVar6 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar6 == (UObject *)0x0) {
      pFVar25 = GetTypeName<UPhysicsSettings>(&local_660);
      if ((pFVar25->Data).ArrayNum == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar26);
    }
    pUVar15 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar5 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar15->_padding_)) {
      pFVar25 = GetTypeName<UPhysicsSettings>(&local_680);
      pwVar26 = L"";
      if ((pFVar25->Data).ArrayNum == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
      }
      pFVar25 = GetFullNameForCastLogError<UObject>(&local_670,pUVar6);
      if ((pFVar25->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar26,pwVar27);
    }
    fVar60 = *(float *)(pUVar6 + 10);
    if (param_4 <= *(float *)(pUVar6 + 10)) {
      fVar60 = param_4;
    }
  }
  fVar59 = __real_3f800000;
  fVar3 = __real_38d1b717;
  if (param_3) {
    if ((((this->field_0x290 & 0x80) == 0) ||
        (fVar60 < *(float *)&this->field_0x29c || fVar60 == *(float *)&this->field_0x29c)) ||
       (*(float *)&this->field_0x298 <= 0.0)) {
      fVar58 = *(float *)&this->field_0x298;
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_880,&local_548);
      local_6d8.X = pTVar16->X;
      local_6d8.Y = pTVar16->Y;
      local_6d8.Z = pTVar16->Z;
      local_6d8.W = pTVar16->W;
      pTVar16 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&this->field_0x2f8,&local_528);
      local_6b8.X = pTVar16->X;
      local_6b8.Y = pTVar16->Y;
      local_6b8.Z = pTVar16->Z;
      local_6b8.W = pTVar16->W;
      pTVar16 = FMath::QInterpTo<double>(&local_508,&local_6b8,&local_6d8,fVar60,fVar58);
      pTVar17 = UE::Math::TRotator<double>::TRotator<double>(&local_5c0,pTVar16);
      local_880.Pitch = pTVar17->Pitch;
      local_880.Yaw = pTVar17->Yaw;
      local_880.Roll = pTVar17->Roll;
    }
    else {
      puVar1 = &this->field_0x2f8;
      local_698 = local_880.Pitch - *(double *)puVar1;
      dStack_690 = local_880.Yaw - *(double *)&this->field_0x300;
      local_688 = local_880.Roll - *(double *)&this->field_0x308;
      auVar32._8_4_ = SUB84(dStack_690,0);
      auVar32._0_8_ = local_698;
      auVar32._12_4_ = (int)((ulonglong)dStack_690 >> 0x20);
      auVar32 = divpd(auVar32,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = local_688;
      auVar32 = roundpd(auVar41,auVar32,3);
      dVar40 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar42._0_8_ = auVar32._0_8_ * dVar40;
      dVar39 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar42._8_8_ = auVar32._8_8_ * dVar39;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = local_688;
      auVar32 = divpd(auVar33,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar49 = local_698 - auVar42._0_8_;
      dVar51 = dStack_690 - auVar42._8_8_;
      auVar32 = roundpd(auVar42,auVar32,3);
      dVar46 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar34._8_4_ = SUB84(dVar51,0);
      auVar34._0_8_ = dVar49;
      auVar34._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      dVar52 = local_688 - auVar32._0_8_ * dVar46;
      dVar53 = 0.0 - auVar32._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar38 = auVar34._8_8_ + dVar39;
      uVar28 = -(ulonglong)(0.0 <= dVar49);
      uVar30 = -(ulonglong)(0.0 <= dVar51);
      auVar43._0_8_ = uVar28 & (ulonglong)dVar49;
      auVar43._8_4_ = (undefined4)(uVar30 & (ulonglong)dVar51);
      auVar43._12_4_ = (undefined4)((uVar30 & (ulonglong)dVar51) >> 0x20);
      auVar47._0_4_ = ~(uint)uVar28 & SUB84(dVar49 + dVar40,0);
      auVar47._4_4_ = ~(uint)(uVar28 >> 0x20) & (uint)((ulonglong)(dVar49 + dVar40) >> 0x20);
      auVar47._8_4_ = ~(uint)uVar30 & SUB84(dVar38,0);
      auVar47._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar35._8_4_ = SUB84(dVar53,0);
      auVar35._0_8_ = dVar52;
      auVar35._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar47 = auVar47 | auVar43;
      dVar38 = auVar35._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar28 = -(ulonglong)(0.0 <= dVar52);
      uVar30 = -(ulonglong)(0.0 <= dVar53);
      auVar50._0_4_ = ~(uint)uVar28 & SUB84(dVar52 + dVar46,0);
      auVar50._4_4_ = ~(uint)(uVar28 >> 0x20) & (uint)((ulonglong)(dVar52 + dVar46) >> 0x20);
      auVar50._8_4_ = ~(uint)uVar30 & SUB84(dVar38,0);
      auVar50._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar44._0_8_ = uVar28 & (ulonglong)dVar52;
      auVar44._8_4_ = (undefined4)(uVar30 & (ulonglong)dVar53);
      auVar44._12_4_ = (undefined4)((uVar30 & (ulonglong)dVar53) >> 0x20);
      auVar50 = auVar50 | auVar44;
      uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar47._0_8_);
      uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar47._8_8_);
      uVar29 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar50._0_8_);
      local_730._0_8_ = uVar30 & (ulonglong)(auVar47._0_8_ - dVar40);
      uVar28 = uVar31 & (ulonglong)(auVar47._8_8_ - dVar39);
      local_730._8_4_ = (undefined4)uVar28;
      local_730._12_4_ = (undefined4)(uVar28 >> 0x20);
      auVar36._0_4_ = ~(uint)uVar30 & auVar47._0_4_;
      auVar36._4_4_ = ~(uint)(uVar30 >> 0x20) & auVar47._4_4_;
      auVar36._8_4_ = ~(uint)uVar31 & auVar47._8_4_;
      auVar36._12_4_ = ~(uint)(uVar31 >> 0x20) & auVar47._12_4_;
      local_730 = local_730 | auVar36;
      local_720 = (double)(uVar29 & (ulonglong)(auVar50._0_8_ - dVar46) |
                          CONCAT44(~(uint)(uVar29 >> 0x20) & auVar50._4_4_,
                                   ~(uint)uVar29 & auVar50._0_4_));
      dVar39 = (double)(__real_3f800000 / fVar60);
      local_858.Pitch = *(double *)puVar1;
      local_858.Yaw = *(double *)&this->field_0x300;
      dVar38 = local_720 * dVar39;
      dVar40 = local_730._8_8_;
      dVar46 = local_730._0_8_;
      local_858.Roll = *(double *)&this->field_0x308;
      for (fVar58 = fVar60; fVar3 < fVar58; fVar58 = fVar58 - fVar54) {
        fVar2 = *(float *)&this->field_0x298;
        fVar54 = *(float *)&this->field_0x29c;
        if (fVar58 <= *(float *)&this->field_0x29c) {
          fVar54 = fVar58;
        }
        dVar49 = (double)fVar54;
        local_858.Pitch = local_858.Pitch + dVar46 * dVar39 * dVar49;
        local_858.Yaw = local_858.Yaw + dVar49 * dVar40 * dVar39;
        local_858.Roll = local_858.Roll + dVar49 * dVar38;
        pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_858,&local_5a8);
        local_718.X = pTVar16->X;
        local_718.Y = pTVar16->Y;
        local_718.Z = pTVar16->Z;
        local_718.W = pTVar16->W;
        pTVar16 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)puVar1,&local_588);
        local_6f8.X = pTVar16->X;
        local_6f8.Y = pTVar16->Y;
        local_6f8.Z = pTVar16->Z;
        local_6f8.W = pTVar16->W;
        pTVar16 = FMath::QInterpTo<double>(&local_568,&local_6f8,&local_718,fVar54,fVar2);
        pTVar17 = UE::Math::TRotator<double>::TRotator<double>(&local_650,pTVar16);
        local_880.Pitch = pTVar17->Pitch;
        local_880.Yaw = pTVar17->Yaw;
        local_880.Roll = pTVar17->Roll;
        *(double *)puVar1 = local_880.Pitch;
        *(double *)&this->field_0x300 = local_880.Yaw;
        *(double *)&this->field_0x308 = local_880.Roll;
      }
    }
  }
  *(double *)&this->field_0x2f8 = local_880.Pitch;
  *(double *)&this->field_0x300 = local_880.Yaw;
  auVar32 = ZEXT416((uint)fVar60);
  *(double *)&this->field_0x308 = local_880.Roll;
  local_768.Pitch = local_880.Pitch;
  local_768.Yaw = local_880.Yaw;
  local_768.Roll = local_880.Roll;
  CalcFixedOffsets(this,param_2,&local_768,fVar60);
  local_7a8 = *(double *)&this->field_0x210;
  dStack_7a0 = *(double *)&this->field_0x218;
  local_798 = *(double *)&this->field_0x220;
  local_8b8._16_8_ = local_798 + (this->FixedTargetOffset).field0_0x0._s_0.Z;
  uVar11 = local_7a8 + (this->FixedTargetOffset).field0_0x0._s_0.X;
  uVar10 = dStack_7a0 + (this->FixedTargetOffset).field0_0x0._s_0.Y;
  uVar55 = (undefined4)uVar10;
  uVar56 = (undefined4)((ulonglong)uVar10 >> 0x20);
  auVar45._8_4_ = uVar55;
  auVar45._0_8_ = uVar11;
  auVar45._12_4_ = uVar56;
  local_8a0._8_4_ = uVar55;
  local_8a0._s_0.X = (double)uVar11;
  local_8a0._12_4_ = uVar56;
  local_8b8._8_4_ = uVar55;
  local_8b8._0_8_ = uVar11;
  local_8b8._12_4_ = uVar56;
  local_8a0._s_0.Z = (double)local_8b8._16_8_;
  if (!param_2) {
    auVar13._4_8_ = auVar32._8_8_;
    auVar13._0_4_ = (int)((ulonglong)uVar11 >> 0x20);
    auVar48._0_8_ = auVar13._0_8_ << 0x20;
    auVar48._8_4_ = uVar55;
    auVar48._12_4_ = uVar56;
    dVar39 = auVar48._8_8_;
    dVar40 = (double)uVar11;
    goto LAB_14bc6c28f;
  }
  bVar14 = IsAttachedParent(this);
  if (bVar14 == param_2) {
    HandleLocalCameraLag
              (this,(TVector<double> *)&local_790._s_0,(TVector<double> *)&local_8a0._s_0,fVar60);
    dVar39 = (double)local_8b8._8_8_ + local_790._s_0.Y;
    auVar45._8_8_ = dVar39;
    auVar45._0_8_ = (double)local_8b8._0_8_ + local_790._s_0.X;
    uVar11 = local_8a0._s_0.X;
    uVar10 = local_8a0._s_0.Y;
    dVar40 = (double)local_8b8._0_8_ + local_790._s_0.X;
    local_8b8._0_16_ = auVar45;
    local_8b8._16_8_ = (double)local_8b8._16_8_ + local_790._s_0.Z;
    goto LAB_14bc6c28f;
  }
  uVar55 = local_8a0._0_4_;
  uVar56 = local_8a0._4_4_;
  uVar57 = local_8a0._12_4_;
  local_748._s_0.Z = local_8a0._s_0.Z;
  local_748._0_16_ = local_8a0._0_16_;
  if ((((this->field_0x290 & 0x80) == 0) ||
      (fVar60 < *(float *)&this->field_0x29c || fVar60 == *(float *)&this->field_0x29c)) ||
     (*(float *)&this->field_0x294 <= 0.0)) {
    pTVar18 = FMath::VInterpTo(&local_620,(TVector<double> *)&this->field_0x2c8,
                               (TVector<double> *)&local_748._s_0,fVar60,
                               *(float *)&this->field_0x294);
    auVar45 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
    uVar4 = (pTVar18->field0_0x0)._s_0.Z;
LAB_14bc6c24e:
    uVar55 = local_8a0._0_4_;
    uVar56 = local_8a0._4_4_;
    uVar57 = local_8a0._12_4_;
  }
  else {
    puVar1 = &this->field_0x2c8;
    dVar49 = local_8a0._s_0.Z - *(double *)&this->field_0x2d8;
    auVar12._4_8_ = extraout_XMM0_Qb;
    auVar12._0_4_ = uVar56;
    auVar37._0_8_ = auVar12._0_8_ << 0x20;
    auVar37._8_4_ = local_8a0._8_4_;
    auVar37._12_4_ = uVar57;
    dVar40 = *(double *)puVar1;
    dVar46 = local_8a0._0_8_;
    dVar38 = (double)(fVar59 / fVar60);
    dVar39 = *(double *)&this->field_0x2d0;
    local_840._s_0.X = (double)*(undefined8 *)puVar1;
    local_840._s_0.Y = (double)*(undefined8 *)&this->field_0x2d0;
    local_840._s_0.Z = (double)*(undefined8 *)&this->field_0x2d8;
    auVar45 = local_8a0._0_16_;
    fVar59 = fVar60;
    uVar4 = local_8a0._s_0.Z;
    if (fVar3 < fVar60) {
      do {
        fVar58 = fVar59;
        if (*(float *)&this->field_0x29c <= fVar59) {
          fVar58 = *(float *)&this->field_0x29c;
        }
        dVar51 = (double)fVar58;
        fVar59 = fVar59 - fVar58;
        local_840._s_0.X = local_840._s_0.X + dVar51 * (dVar46 - dVar40) * dVar38;
        local_840._s_0.Y = local_840._s_0.Y + (auVar37._8_8_ - dVar39) * dVar38 * dVar51;
        local_840._s_0.Z = local_840._s_0.Z + dVar49 * dVar38 * dVar51;
        pTVar18 = FMath::VInterpTo(&local_638,(TVector<double> *)puVar1,
                                   (TVector<double> *)&local_840._s_0,fVar58,
                                   *(float *)&this->field_0x294);
        auVar45 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
        uVar4 = (pTVar18->field0_0x0)._s_0.Z;
        *(undefined1 (*) [16])puVar1 = auVar45;
        *(undefined8 *)&this->field_0x2d8 = uVar4;
      } while (fVar3 < fVar59);
      goto LAB_14bc6c24e;
    }
  }
  uVar10 = CONCAT44(uVar57,local_8a0._8_4_);
  uVar11 = CONCAT44(uVar56,uVar55);
  (this->SpringArmData).bStartWorldToLocalCameraLag = false;
  dVar39 = auVar45._8_8_;
  dVar40 = auVar45._0_8_;
  local_8b8._0_16_ = auVar45;
  local_8b8._16_8_ = uVar4;
LAB_14bc6c28f:
  uVar4 = local_8a0._s_0.Z;
  fVar3 = *(float *)&this->field_0x2a0;
  bVar14 = false;
  if (0.0 < fVar3) {
    local_7d8._s_0.X = dVar40 - (double)uVar11;
    local_7d8._s_0.Y = dVar39 - (double)uVar10;
    local_7d8._s_0.Z = (double)local_8b8._16_8_ - local_8a0._s_0.Z;
    if ((double)(fVar3 * fVar3) <
        local_7d8._s_0.X * local_7d8._s_0.X + local_7d8._s_0.Y * local_7d8._s_0.Y +
        local_7d8._s_0.Z * local_7d8._s_0.Z) {
      pTVar18 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_7d8._s_0,&local_608,(double)fVar3);
      bVar14 = true;
      local_8b8._16_8_ = (double)uVar4 + (pTVar18->field0_0x0)._s_0.Z;
      auVar45._8_8_ = (double)uVar10 + (pTVar18->field0_0x0)._s_0.Y;
      auVar45._0_8_ = (double)uVar11 + (pTVar18->field0_0x0)._s_0.X;
      local_8b8._0_16_ = auVar45;
      local_820._s_0.Z = (double)local_8b8._16_8_;
    }
  }
  if ((*(uint *)&this->field_0x290 & 0x100) != 0) {
    pUVar19 = *(UWorld **)&this->field_0xb0;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar59 = __real_bf800000;
    fVar3 = __real_40a00000;
    DrawDebugSphere(pUVar19,(TVector<double> *)&local_8a0._s_0,__real_40a00000,8,&FColor::Green,
                    false,__real_bf800000,'\0',0.0);
    pUVar19 = *(UWorld **)&this->field_0xb0;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugSphere(pUVar19,(TVector<double> *)local_8b8,fVar3,8,&FColor::Yellow,false,fVar59,'\0',
                    0.0);
    local_888[0] = FColor::Green.field0_0x0;
    if (bVar14) {
      local_888[0] = FColor::Red.field0_0x0;
    }
    dVar40 = (local_8a0._s_0.X - (double)local_8b8._0_8_) * __real_3fe0000000000000;
    pUVar19 = *(UWorld **)&this->field_0xb0;
    dVar46 = (local_8a0._s_0.Z - (double)local_8b8._16_8_) * __real_3fe0000000000000;
    dVar39 = (local_8a0._s_0.Y - (double)local_8b8._8_8_) * __real_3fe0000000000000;
    local_7c0._s_0.X = dVar40 + (double)local_8b8._0_8_;
    local_7c0._s_0.Z = (double)local_8b8._16_8_ + dVar46;
    local_7c0._s_0.Y = (double)local_8b8._8_8_ + dVar39;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar3 = __real_40f00000;
    DrawDebugDirectionalArrow
              (pUVar19,(TVector<double> *)local_8b8,(TVector<double> *)&local_7c0._s_0,
               __real_40f00000,(FColor *)&local_888[0]._s_0,false,fVar59,'\0',0.0);
    local_820._s_0.X = dVar40 + (double)local_8b8._0_8_;
    local_820._s_0.Y = dVar39 + (double)local_8b8._8_8_;
    local_820._s_0.Z = dVar46 + (double)local_8b8._16_8_;
    pUVar19 = *(UWorld **)&this->field_0xb0;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugDirectionalArrow
              (pUVar19,(TVector<double> *)&local_820._s_0,(TVector<double> *)&local_8a0._s_0,fVar3,
               (FColor *)&local_888[0]._s_0,false,fVar59,'\0',0.0);
    auVar45 = local_8b8._0_16_;
    uVar11 = local_8a0._s_0.X;
    uVar10 = local_8a0._s_0.Y;
  }
  auVar9._8_4_ = (int)uVar10;
  auVar9._0_8_ = uVar11;
  auVar9._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x2e0 = auVar9;
  *(double *)&this->field_0x2f0 = local_8a0._s_0.Z;
  *(undefined1 (*) [16])&this->field_0x2c8 = auVar45;
  *(undefined8 *)&this->field_0x2d8 = local_8b8._16_8_;
  pUVar20 = UDS_GameInstance::GetInst();
  if ((pUVar20 != (UDS_GameInstance *)0x0) && ((this->SpringArmData).bTeleportMove != true)) {
    if ((this->SpringArmData).bPreTeleportMove == true) {
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (double)local_8b8._0_8_;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = (double)local_8b8._8_8_;
      (this->SpringArmData).bPreTeleportMove = false;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (double)local_8b8._16_8_;
    }
    if ((this->SpringArmData).bActiveBattleModeCamera == true) {
      BattleModeCamera(this,(TVector<double> *)local_8b8,fVar60);
    }
    else {
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.X = (double)local_8b8._0_8_;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Y = (double)local_8b8._8_8_;
      (this->SpringArmData).PreEntityLocation.field0_0x0._s_0.Z = (double)local_8b8._16_8_;
    }
  }
  pTVar18 = UE::Math::TRotator<double>::Vector(&local_880,&local_5f0);
  dVar40 = (double)*(float *)&this->field_0x250;
  local_8b8._8_8_ = (double)local_8b8._8_8_ - dVar40 * (pTVar18->field0_0x0)._s_0.Y;
  local_8b8._16_8_ = (double)local_8b8._16_8_ - dVar40 * (pTVar18->field0_0x0)._s_0.Z;
  local_8b8._0_8_ = (double)local_8b8._0_8_ - dVar40 * (pTVar18->field0_0x0)._s_0.X;
  pTVar21 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_3c8,&local_880);
  dVar40 = (this->FixedSocketOffset).field0_0x0._s_0.Z;
  dVar38 = (this->FixedSocketOffset).field0_0x0._s_0.X;
  dVar49 = (this->FixedSocketOffset).field0_0x0._s_0.Y;
  dVar39 = (double)local_8b8._0_8_ +
           *(double *)&pTVar21->field_0x20 * dVar49 + *(double *)pTVar21 * dVar38 +
           *(double *)&pTVar21->field_0x40 * dVar40 + *(double *)&pTVar21->field_0x60 * 0.0;
  dVar46 = (double)local_8b8._8_8_ +
           *(double *)&pTVar21->field_0x28 * dVar49 + *(double *)&pTVar21->field_0x8 * dVar38 +
           *(double *)&pTVar21->field_0x48 * dVar40 + *(double *)&pTVar21->field_0x68 * 0.0;
  local_8b8._8_8_ = dVar46;
  local_8b8._0_8_ = dVar39;
  local_8b8._16_8_ =
       (double)local_8b8._16_8_ +
       *(double *)&pTVar21->field_0x30 * dVar49 + *(double *)&pTVar21->field_0x10 * dVar38 +
       *(double *)&pTVar21->field_0x50 * dVar40 + *(double *)&pTVar21->field_0x70 * 0.0;
  if (((param_1) && (*(float *)&this->field_0x250 != 0.0)) && (this->bFixedCollision == param_1)) {
    this->field_0x2a8 = param_1;
    this_00 = *(AActor **)&this->field_0xa8;
    if (this_00 == (AActor *)0x0) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6126741534592204972>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Camera\\DS_SpringArmComponent.cpp"
                          ,0xac,"false");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar22 = UDS_LogManager::GetInst();
      if (pUVar22 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar22 = UDS_LogManager::GetInst();
      local_1f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1f8,"UDS_SpringArmComponent::UpdateDesiredArmLocation",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar22,1,Warning,local_1f8.Ptr,0xad,L"ownerActor is nullptr.");
      if ((void *)local_1f8._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_1f8._padding_);
      return;
    }
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SpringArm =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UDS_SpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_38_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
            )0x0;
      pFVar23 = ::FName::FName(&local_778,"SpringArm");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar23,L"SpringArm",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_828.StatIdPtr = (TStatIdData *)StatPtr_SpringArm;
    if (StatPtr_SpringArm ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UDS_SpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_38_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
         )0x0) {
      pFVar23 = ::FName::FName(&local_770,"SpringArm");
      local_828.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar23,L"SpringArm",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SpringArm");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_288,::StaticName,&local_828,false,this_00);
    local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.ArrayNum = 0;
    local_868.ArrayMax = 0;
    AActor::GetAttachedActors(this_00,&local_868,true,false);
    FCollisionQueryParams::AddIgnoredActors(&local_288,&local_868);
    memset(&local_4c8,0,0x100);
    pUVar19 = *(UWorld **)&this->field_0xb0;
    uStack_7db = 0;
    uStack_7d9 = 0;
    local_7e8 = 0;
    uStack_7e0 = 0xffffffff;
    uStack_7dc = 0;
    local_4c8.Time = 1.0;
    local_4c8.MyItem = -1;
    local_4c8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_4c8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_4c8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_4c8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_4c8.HitObjectHandle.InstanceIndex = -1;
    local_4c8.HitObjectHandle.ResolutionStatus = Invalid;
    local_4c8.HitObjectHandle._29_3_ = 0;
    local_4c8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_808[0].field1_0x4._0_4_ = *(undefined4 *)&this->field_0x288;
    local_808[0].ShapeType = Sphere;
    UWorld::SweepSingleByChannel
              (pUVar19,&local_4c8,(TVector<double> *)&local_8a0._s_0,(TVector<double> *)local_8b8,
               &UE::Math::TQuat<double>::Identity,(uint)(byte)this->field_0x28c,local_808,&local_288
               ,&FCollisionResponseParams::DefaultResponseParam);
    *(undefined8 *)&this->field_0x2b0 = local_8b8._0_8_;
    *(undefined8 *)&this->field_0x2b8 = local_8b8._8_8_;
    *(undefined8 *)&this->field_0x2c0 = local_8b8._16_8_;
    pdVar24 = (double *)
              (**(code **)(*(longlong *)this + 0x650))(this,local_5d8,local_8b8,&local_4c8.Location)
    ;
    dVar39 = *pdVar24;
    dVar46 = pdVar24[1];
    dVar40 = pdVar24[2];
    if (((dVar39 == (double)local_8b8._0_8_) && (dVar46 == (double)local_8b8._8_8_)) &&
       (dVar40 == (double)local_8b8._16_8_)) {
      this->field_0x2a8 = 0;
    }
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
    if (local_288.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_288.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_288.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_288.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  else {
    this->field_0x2a8 = 0;
    *(double *)&this->field_0x2b0 = dVar39;
    *(double *)&this->field_0x2b8 = dVar46;
    *(undefined8 *)&this->field_0x2c0 = local_8b8._16_8_;
    dVar40 = (double)local_8b8._16_8_;
  }
  pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_880,&local_4e8);
  local_348.Rotation.XY.m128d_f64[0] = pTVar16->X;
  local_348.Rotation.XY.m128d_f64[1] = pTVar16->Y;
  local_348.Rotation.ZW.m128d_f64[0] = pTVar16->Z;
  local_348.Rotation.ZW.m128d_f64[1] = pTVar16->W;
  local_348.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_348.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_348.Translation.ZW.m128d_f64[1] = 0.0;
  local_348.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_348.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_348.Translation.XY.m128d_f64[0] = dVar39;
  local_348.Translation.XY.m128d_f64[1] = dVar46;
  local_348.Translation.ZW.m128d_f64[0] = dVar40;
  UE::Math::TTransform<double>::GetRelativeTransform
            (&local_348,&local_2e8,(TTransform<double> *)&this->field_0x1f0);
  *(double *)&this->field_0x310 = local_2e8.Translation.XY.m128d_f64[0];
  *(double *)&this->field_0x318 = local_2e8.Translation.XY.m128d_f64[1];
  *(double *)&this->field_0x330 = local_2e8.Rotation.XY.m128d_f64[0];
  *(double *)&this->field_0x338 = local_2e8.Rotation.XY.m128d_f64[1];
  *(double *)&this->field_0x320 = local_2e8.Translation.ZW.m128d_f64[0];
  *(double *)&this->field_0x340 = local_2e8.Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0x348 = local_2e8.Rotation.ZW.m128d_f64[1];
  USceneComponent::UpdateChildTransforms((USceneComponent *)this,None,None);
  return;
}

// ValidateCachedComponents @ 14bc6f1e0

void __thiscall UDS_SpringArmComponent::ValidateCachedComponents(UDS_SpringArmComponent *this)

{
  bool bVar1;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> TVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if (!bVar1) {
    TVar2 = ADS_MainCharacter::GetMainPlayer();
                    /* WARNING: Load size is inaccurate */
    (this->CachedMainPlayer).WeakPtr = *TVar2.WeakPtr;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMainPlayer).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CachedMovementCore).WeakPtr);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->CachedMainPlayer).WeakPtr);
      pFVar4 = (FWeakObjectPtr *)
               (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x78))
                         (&pUVar3[0x29].field_0x10,&local_res8);
      (this->CachedMovementCore).WeakPtr = *pFVar4;
      return;
    }
  }
  else {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->CachedMovementCore).WeakPtr = local_res8;
  }
  return;
}

