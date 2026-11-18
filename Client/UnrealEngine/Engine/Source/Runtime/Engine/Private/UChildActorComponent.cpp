// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 147260da0

UClass * __cdecl UChildActorComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChildActorComponent",
               &Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton,
               StaticRegisterNativesUChildActorComponent,0x2b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChildActorComponent>,
               InternalVTableHelperCtorCaller<UChildActorComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton;
}

// UChildActorComponent @ 1478a84d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildActorComponent * __thiscall
UChildActorComponent::UChildActorComponent(UChildActorComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ChildActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ChildActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ChildActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ChildActorName).ComparisonIndex = 0;
  (this->ChildActorName).Number = 0;
  *(undefined8 *)&this->OnChildActorCreatedDelegate = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x18 = 2;
  return this;
}

// UChildActorComponent @ 1478a8550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildActorComponent * __thiscall
UChildActorComponent::UChildActorComponent(UChildActorComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->field_0x99 = this->field_0x99 & 0xbf;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bChildActorIsTransient = '\0';
  this->bChildActorNameIsExact = '\0';
  this->bNeedsRecreate = '\0';
  this->bSetOwner = '\0';
  (this->ChildActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ChildActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ChildActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ChildActorName).ComparisonIndex = 0;
  (this->ChildActorName).Number = 0;
  this->ActorOuter = (UObject *)0x0;
  this->CachedInstanceData = (FChildActorComponentInstanceData *)0x0;
  *(undefined8 *)&this->OnChildActorCreatedDelegate = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChildActorCreatedDelegate).field_0x18 = 2;
  return this;
}

// ~UChildActorComponent @ 1478aba30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::~UChildActorComponent(UChildActorComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChildActorCreatedDelegate).field_0x8,
             *(int *)&(this->OnChildActorCreatedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChildActorCreatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChildActorCreatedDelegate);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddReferencedObjects @ 1478b32b0

void __cdecl
UChildActorComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UChildActorComponent>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    plVar2 = *(longlong **)&param_1[0xf].field_0x20;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,param_2);
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar4 = GetTypeName<UChildActorComponent>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// ApplyComponentInstanceData @ 1478b4540

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
UChildActorComponent::ApplyComponentInstanceData
          (UChildActorComponent *this,FChildActorComponentInstanceData *param_1,
          ECacheApplyPhase param_2)

{
  TRotator<double> *this_00;
  int iVar1;
  UClass *pUVar2;
  FName FVar3;
  FActorInstanceData *this_01;
  FComponentInstanceDataCache *this_02;
  USceneComponent *pUVar4;
  USceneComponent *this_03;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  bool bVar11;
  char cVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  AActor *pAVar16;
  FPayload *pFVar17;
  TQuat<double> *pTVar18;
  UClass *pUVar19;
  ForAnyElementType FVar20;
  FWeakObjectPtr *this_04;
  FWeakObjectPtr *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar31;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 local_res8 [8];
  FString local_108;
  double local_f8;
  undefined1 local_e8 [32];
  undefined8 local_c8 [5];
  undefined8 local_a0;
  TQuat<double> local_78 [2];
  
  if ((param_1 == (FChildActorComponentInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChildActorInstanceData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ChildActorComponent.cpp"
                          ,0x1dc,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  pUVar19 = (UClass *)0x0;
  pUVar15 = pUVar19;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar13 = Z_Construct_UClass_AActor_NoRegister(), pUVar13 != (UClass *)0x0)) {
    iVar1 = (int)pUVar13->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar13->_padding_
       )) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      pUVar15 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar2 = (param_1->ChildActorClass).Class.field0_0x0.DebugPtr;
  pUVar13 = pUVar19;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar14 = Z_Construct_UClass_AActor_NoRegister(), pUVar14 != (UClass *)0x0)) {
    iVar1 = (int)pUVar14->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar14->_padding_
       )) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      pUVar13 = (param_1->ChildActorClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar15 == pUVar13) {
    this->ChildActorName = param_1->ChildActorName;
  }
  if ((this->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar15 = Z_Construct_UClass_AActor_NoRegister(), pUVar15 != (UClass *)0x0)) {
      iVar1 = (int)pUVar15->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar15->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        pUVar19 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
      }
    }
    if ((UClass *)((this->ChildActor).field0_0x0.DebugPtr)->_padding_ == pUVar19)
    goto LAB_1478b46ac;
  }
  local_c8[0] = 0;
  local_a0 = 0;
  (**(code **)(*(longlong *)this + 0x640))(this,local_c8);
LAB_1478b46ac:
  pAVar16 = (this->ChildActor).field0_0x0.DebugPtr;
  if (pAVar16 != (AActor *)0x0) {
    FVar3 = this->ChildActorName;
    if ((FVar3 != (FName)0x0) && ((FName)pAVar16->_padding_ != FVar3)) {
      ::FName::ToString(&this->ChildActorName,&local_108);
      pAVar16 = (this->ChildActor).field0_0x0.DebugPtr;
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar20.Data = local_108.Data.AllocatorInstance.Data;
      }
      cVar12 = (**(code **)(pAVar16->_padding_ + 0x170))(pAVar16,FVar20.Data,0,2);
      if (cVar12 != '\0') {
        pAVar16 = (this->ChildActor).field0_0x0.DebugPtr;
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar20.Data = local_108.Data.AllocatorInstance.Data;
        }
        (**(code **)(pAVar16->_padding_ + 0x170))(pAVar16,FVar20.Data,0,4);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    this_01 = (param_1->ActorInstanceData).Object;
    if (this_01 != (FActorInstanceData *)0x0) {
      FActorInstanceData::ApplyToActor(this_01,(this->ChildActor).field0_0x0.DebugPtr,param_2);
    }
    this_02 = (param_1->ComponentInstanceData).Object;
    if (this_02 != (FComponentInstanceDataCache *)0x0) {
      FComponentInstanceDataCache::ApplyToActor
                (this_02,(this->ChildActor).field0_0x0.DebugPtr,param_2);
    }
    pUVar4 = (((this->ChildActor).field0_0x0.DebugPtr)->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 != (USceneComponent *)0x0) {
      iVar1 = (param_1->AttachedActors).ArrayNum;
      this_04 = (FWeakObjectPtr *)(param_1->AttachedActors).AllocatorInstance.Data;
      pFVar21 = this_04 + (longlong)iVar1 * 0xe;
      while( true ) {
        if ((param_1->AttachedActors).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FChildActorAttachedActorInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (this_04 == pFVar21) break;
        pAVar16 = (AActor *)FWeakObjectPtr::Get(this_04);
        if ((pAVar16 != (AActor *)0x0) &&
           (this_03 = (pAVar16->RootComponent).field0_0x0.DebugPtr,
           this_03 != (USceneComponent *)0x0)) {
          AActor::DetachFromActor(pAVar16,&FDetachmentTransformRules::KeepWorldTransform);
          (**(code **)(this_03->_padding_ + 0x508))(this_03,pUVar4);
          USceneComponent::SetRelativeTransform
                    (this_03,(TTransform<double> *)(this_04 + 2),false,(FHitResult *)0x0,None);
          dVar40 = (this_03->RelativeRotation).Roll;
          auVar35._0_8_ = (this_03->RelativeRotation).Pitch;
          auVar35._8_8_ = (this_03->RelativeRotation).Yaw;
          local_f8 = dVar40;
          pFVar17 = FRotationConversionCache::GetOrCreatePayload(&this_03->RelativeRotationCache);
          this_00 = &pFVar17->CachedRotator;
          if (((double)auVar35._0_8_ != (pFVar17->CachedRotator).Pitch) ||
             ((auVar10._4_8_ = extraout_XMM0_Qb,
              auVar10._0_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20),
              auVar26._0_8_ = auVar10._0_8_ << 0x20, auVar26._8_4_ = (int)auVar35._8_8_,
              auVar26._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20),
              auVar26._8_8_ != (pFVar17->CachedRotator).Yaw ||
              (local_f8 != (pFVar17->CachedRotator).Roll)))) {
            auVar26 = divpd(auVar35,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64)
            ;
            auVar33 = roundpd(in_XMM1,auVar26,3);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar40;
            auVar26 = divpd(auVar27,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
            auVar34._0_8_ = auVar33._0_8_ * dVar6;
            dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
            auVar34._8_8_ = auVar33._8_8_ * dVar7;
            dVar32 = (double)auVar35._0_8_ - auVar34._0_8_;
            dVar9 = (double)auVar35._8_8_ - auVar34._8_8_;
            auVar35 = roundpd(auVar34,auVar26,3);
            dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
            auVar28._8_4_ = SUB84(dVar9,0);
            auVar28._0_8_ = dVar32;
            auVar28._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            dVar40 = dVar40 - auVar35._0_8_ * dVar8;
            dVar41 = 0.0 - auVar35._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            dVar31 = auVar28._8_8_ + dVar7;
            uVar22 = -(ulonglong)(0.0 <= dVar32);
            uVar24 = -(ulonglong)(0.0 <= dVar9);
            auVar36._0_8_ = uVar22 & (ulonglong)dVar32;
            auVar36._8_4_ = (undefined4)(uVar24 & (ulonglong)dVar9);
            auVar36._12_4_ = (undefined4)((uVar24 & (ulonglong)dVar9) >> 0x20);
            auVar38._0_4_ = ~(uint)uVar22 & SUB84(dVar32 + dVar6,0);
            auVar38._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar6) >> 0x20);
            auVar38._8_4_ = ~(uint)uVar24 & SUB84(dVar31,0);
            auVar38._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar31 >> 0x20);
            auVar29._8_4_ = SUB84(dVar41,0);
            auVar29._0_8_ = dVar40;
            auVar29._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            dVar32 = auVar29._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            auVar38 = auVar38 | auVar36;
            uVar22 = -(ulonglong)(0.0 <= dVar40);
            uVar24 = -(ulonglong)(0.0 <= dVar41);
            auVar39._0_4_ = ~(uint)uVar22 & SUB84(dVar40 + dVar8,0);
            auVar39._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar40 + dVar8) >> 0x20);
            auVar39._8_4_ = ~(uint)uVar24 & SUB84(dVar32,0);
            auVar39._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
            auVar33._8_4_ = (int)((ulonglong)dVar41 & uVar24);
            auVar33._0_8_ = (ulonglong)dVar40 & uVar22;
            auVar33._12_4_ = (int)(((ulonglong)dVar41 & uVar24) >> 0x20);
            auVar39 = auVar39 | auVar33;
            uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
            uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
            uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar39._0_8_);
            auVar37._0_8_ = uVar24 & (ulonglong)(auVar38._0_8_ - dVar6);
            uVar22 = uVar25 & (ulonglong)(auVar38._8_8_ - dVar7);
            auVar37._8_4_ = (undefined4)uVar22;
            auVar37._12_4_ = (undefined4)(uVar22 >> 0x20);
            auVar30._0_4_ = ~(uint)uVar24 & auVar38._0_4_;
            auVar30._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar38._4_4_;
            auVar30._8_4_ = ~(uint)uVar25 & auVar38._8_4_;
            auVar30._12_4_ = ~(uint)(uVar25 >> 0x20) & auVar38._12_4_;
            this_00->Pitch = (double)SUB168(auVar37 | auVar30,0);
            this_00->Yaw = (double)SUB168(auVar37 | auVar30,8);
            (pFVar17->CachedRotator).Roll =
                 (double)(uVar23 & (ulonglong)(auVar39._0_8_ - dVar8) |
                         CONCAT44(~(uint)(uVar23 >> 0x20) & auVar39._4_4_,
                                  ~(uint)uVar23 & auVar39._0_4_));
            pTVar18 = UE::Math::TRotator<double>::Quaternion(this_00,local_78);
            dVar40 = pTVar18->Y;
            (pFVar17->CachedQuat).X = pTVar18->X;
            (pFVar17->CachedQuat).Y = dVar40;
            dVar40 = pTVar18->W;
            (pFVar17->CachedQuat).Z = pTVar18->Z;
            (pFVar17->CachedQuat).W = dVar40;
          }
          local_e8._0_8_ = (pFVar17->CachedQuat).X;
          local_e8._8_8_ = (pFVar17->CachedQuat).Y;
          in_XMM1._0_8_ = (pFVar17->CachedQuat).Z;
          in_XMM1._8_8_ = (pFVar17->CachedQuat).W;
          local_e8._16_16_ = in_XMM1;
          USceneComponent::UpdateComponentToWorldWithParent
                    (this_03,(this_03->AttachParent).field0_0x0.DebugPtr,this_03->AttachSocketName,
                     None,(TQuat<double> *)local_e8,None);
        }
        this_04 = this_04 + 0xe;
      }
    }
  }
  return;
}

// BeginDestroy @ 1478b6200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::BeginDestroy(UChildActorComponent *this)

{
  FChildActorComponentInstanceData *pFVar1;
  
  USceneComponent::BeginDestroy((USceneComponent *)this);
  pFVar1 = this->CachedInstanceData;
  if (pFVar1 != (FChildActorComponentInstanceData *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->CachedInstanceData = (FChildActorComponentInstanceData *)0x0;
  }
  return;
}

// BeginPlay @ 1478b65b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::BeginPlay(UChildActorComponent *this)

{
  AActor *this_00;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  this_00 = (this->ChildActor).field0_0x0.DebugPtr;
  if ((this_00 != (AActor *)0x0) && (this_00->ActorHasBegunPlay != HasBegunPlay)) {
    if (*(longlong *)&this->field_0xa8 != 0) {
      AActor::DispatchBeginPlay
                (this_00,(bool)(*(byte *)(*(longlong *)&this->field_0xa8 + 0x5c) >> 2 & 1));
      return;
    }
    AActor::DispatchBeginPlay(this_00,false);
    return;
  }
  return;
}

// CreateChildActor @ 1478bff70

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

void __thiscall
UChildActorComponent::CreateChildActor
          (UChildActorComponent *this,TFunction<void___cdecl(AActor_*)> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  FChildActorComponentInstanceData *pFVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  TFunction<void___cdecl(AActor_*)> *pTVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UChildActorComponent::CreateChildActor(TFunction<void___cdecl(AActor_*)>)_::_2_::FStat_STAT_CreateChildActor>
  FVar19;
  UClass *pUVar20;
  FName this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  UClass *pUVar21;
  AActor *pAVar22;
  UClass *pUVar23;
  undefined8 uVar24;
  AActor *pAVar25;
  longlong *plVar26;
  TObjectPtr<AActor>_u_0 this_03;
  longlong *plVar27;
  UClass *pUVar28;
  uint uVar29;
  FWeakObjectPtr *this_04;
  FName FVar30;
  FWeakObjectPtr *pFVar31;
  longlong lVar32;
  undefined1 auStackY_218 [32];
  undefined1 local_1b7 [7];
  FName local_1b0;
  FColor_u_0 local_1a8 [2];
  FName local_1a0;
  TFunction<void___cdecl(AActor_*)> *local_198;
  FName local_190;
  FString local_180;
  LARGE_INTEGER local_170;
  FName local_168;
  TObjectPtr<AActor>_u_0 local_160;
  FStatMessage local_158;
  FString local_148;
  FDestructionSentinel local_138;
  FName local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  TVector<double>_u_0 local_f0;
  TRotator<double> local_d8;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pAVar25 = *(AActor **)&this->field_0xa8;
  local_198 = param_1;
  if ((((pAVar25 != (AActor *)0x0) && ((pAVar25->Role).Value != '\x03')) &&
      (bVar13 = IsChildActorReplicated(this), bVar13)) &&
     (GIsReconstructingBlueprintInstances == false)) {
    if (*(longlong *)param_1 == 0) {
      return;
    }
    plVar26 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar26 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar26 + 0x10))();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CreateChildActor ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UChildActorComponent::CreateChildActor(TFunction<void___cdecl(AActor_*)>)_::_2_::FStat_STAT_CreateChildActor>
         )0x0) {
      pFVar18 = ::FName::FName(&local_120,"STAT_CreateChildActor");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateChildActor,*pFVar18,
                 L"STAT_CreateChildActor","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_CreateChildActor;
  if (StatPtr_STAT_CreateChildActor ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UChildActorComponent::CreateChildActor(TFunction<void___cdecl(AActor_*)>)_::_2_::FStat_STAT_CreateChildActor>
       )0x0) {
    pFVar18 = ::FName::FName(&local_118,"STAT_CreateChildActor");
    FVar19 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UChildActorComponent::CreateChildActor(TFunction<void___cdecl(AActor_*)>)_::_2_::FStat_STAT_CreateChildActor>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateChildActor,*pFVar18,
                          L"STAT_CreateChildActor","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar13 = false;
  bVar16 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar8 = false;
  bVar10 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_1478c0162:
    bVar9 = false;
    FVar30 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar16 = true;
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ChildActorComponent.cpp"
                   ,0x2ef);
        bVar13 = true;
        bVar16 = true;
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478c0162;
    local_1b0 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar9 = true;
    bVar8 = bVar13;
    bVar10 = bVar16;
  }
  DestroyChildActor(this);
  pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar21 != (UClass *)0x0) &&
     (pUVar20 = Z_Construct_UClass_AActor_NoRegister(), pUVar20 != (UClass *)0x0)) {
    iVar4 = (int)pUVar20->_padding_;
    if (((int)pUVar21->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar20->_padding_)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (((bVar14) && ((this->ChildActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
       ((this_00.ComparisonIndex.Value = *(uint *)&this->field_0xb0,
        this_00.Number = *(uint *)&this->field_0xb4, this_00 != (FName)0x0 ||
        (local_1b0 = this_00,
        this_00 = (FName)UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        local_1b0 = this_00, this_00 != (FName)0x0)))) {
      local_1b0 = this_00;
      bVar14 = UWorld::IsPlayingReplay((UWorld *)this_00);
      if ((((bVar14) && (*(char *)(*(longlong *)((longlong)this_00 + 0x140) + 0xb12) != '\0')) &&
          (pAVar25 != (AActor *)0x0)) && (bVar14 = AActor::IsNetStartupActor(pAVar25), bVar14)) {
        pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        if ((pUVar21 != (UClass *)0x0) &&
           (pUVar20 = Z_Construct_UClass_AActor_NoRegister(), pUVar20 != (UClass *)0x0)) {
          iVar4 = (int)pUVar20->_padding_;
          if (((int)pUVar21->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar20->_padding_)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (bVar14) {
            if ((this->ChildActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0) {
              if (3 < (byte)LogChildActorComponent._0_1_) {
                pAVar25 = (this->ChildActor).field0_0x0.DebugPtr;
                if (pAVar25 == (AActor *)0x0) {
                  ::FString::FString(&local_180,L"None");
                }
                else {
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pAVar25,&local_180,(UObject *)0x0);
                }
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_110,(UObject *)0x0);
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogChildActorComponent);
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
                if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data.AllocatorInstance.Data);
                }
              }
              if (bVar16) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar13) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (((bVar9) && (FVar30 != (FName)0x0)) &&
                 ((FThreadStats::bPrimaryDisableForever == false &&
                  (FThreadStats::TlsSlot != 0xffffffff)))) {
                this_01 = TlsGetValue(FThreadStats::TlsSlot);
                if (this_01 == (FThreadStats *)0x0) {
                  this_02 = FThreadStatsPool::Get();
                  this_01 = FThreadStatsPool::GetFromPool(this_02);
                }
                if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
                  local_158.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
                  local_158.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
                  QueryPerformanceCounter(&local_170);
                  local_158.StatData.Pad[4] = '\0';
                  local_158.StatData.Pad[5] = '\0';
                  local_158.StatData.Pad[6] = '\0';
                  local_158.StatData.Pad[7] = '\0';
                  local_158.StatData.Pad[0] = local_170.s.LowPart._0_1_;
                  local_158.StatData.Pad[1] = local_170.s.LowPart._1_1_;
                  local_158.StatData.Pad[2] = local_170.s.LowPart._2_1_;
                  local_158.StatData.Pad[3] = local_170.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(this_01,&local_158);
                  piVar1 = &this_01->ScopeCount;
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FThreadStats::Flush(this_01,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(this_01,false,false);
                  }
                }
              }
              if (*(longlong *)param_1 == 0) {
                return;
              }
              plVar26 = *(longlong **)&param_1->field_0x28;
              goto LAB_1478c0a69;
            }
            goto LAB_1478c0405;
          }
        }
LAB_1478c0414:
        bVar13 = true;
        pAVar22 = pAVar25;
        do {
          if (!bVar13) goto LAB_1478c0926;
          pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          if ((pUVar21 == (UClass *)0x0) ||
             (pUVar20 = Z_Construct_UClass_AActor_NoRegister(), pUVar20 == (UClass *)0x0)) {
LAB_1478c046c:
            pUVar21 = (UClass *)0x0;
          }
          else {
            iVar4 = (int)pUVar20->_padding_;
            if (((int)pUVar21->_padding_ < iVar4) ||
               ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar4 * 8) !=
                &pUVar20->_padding_)) {
              bVar16 = false;
            }
            else {
              bVar16 = true;
            }
            if (!bVar16) goto LAB_1478c046c;
            pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          }
          if (((UClass *)pAVar22->_padding_ == pUVar21) &&
             (bVar13 = false, 1 < (byte)LogChildActorComponent._0_1_)) {
            pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
            if ((pUVar21 == (UClass *)0x0) ||
               (pUVar20 = Z_Construct_UClass_AActor_NoRegister(), pUVar20 == (UClass *)0x0)) {
LAB_1478c04cb:
              pUVar21 = (UClass *)0x0;
            }
            else {
              iVar4 = (int)pUVar20->_padding_;
              if (((int)pUVar21->_padding_ < iVar4) ||
                 ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar4 * 8) !=
                  &pUVar20->_padding_)) {
                bVar16 = false;
              }
              else {
                bVar16 = true;
              }
              if (!bVar16) goto LAB_1478c04cb;
              pUVar21 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
            }
            local_168 = (FName)pUVar21->_padding_;
            ::FName::ToString(&local_168,&local_148);
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_100,(UObject *)0x0);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogChildActorComponent);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          pAVar22 = AActor::GetParentActor(pAVar22);
        } while (pAVar22 != (AActor *)0x0);
        this_00 = local_1b0;
        if (!bVar13) goto LAB_1478c0926;
      }
      else {
LAB_1478c0405:
        if (pAVar25 != (AActor *)0x0) goto LAB_1478c0414;
      }
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
      local_b8[0x32] = local_b8[0x32] | 0xc;
      local_b8[0x30] = AlwaysSpawn;
      if (pAVar25 == (AActor *)0x0) {
        local_b8._32_8_ = (ULevel *)0x0;
      }
      else {
        local_b8._32_8_ = AActor::GetLevel(pAVar25);
      }
      pUVar21 = (UClass *)0x0;
      local_b8._0_8_ = this->ChildActorName;
      if (this->bChildActorNameIsExact == '\0') {
        local_b8[0x33] = Requested;
      }
      if (this->bSetOwner != '\0') {
        local_b8._16_8_ = pAVar25;
      }
      if (((this->bChildActorIsTransient != 0) || ((*(uint *)&this->field_0x8 & 0x40) != 0)) ||
         ((pAVar25 != (AActor *)0x0 && ((pAVar25->_padding_ & 0x40) != 0)))) {
        local_b8._52_4_ = local_b8._52_4_ | RF_Transient;
      }
      local_b8._40_8_ = this;
      if ((this->ChildActorTemplate).field0_0x0.DebugPtr != (AActor *)0x0) {
        pUVar20 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        pUVar28 = pUVar21;
        if ((pUVar20 != (UClass *)0x0) &&
           (pUVar23 = Z_Construct_UClass_AActor_NoRegister(), pUVar23 != (UClass *)0x0)) {
          iVar4 = (int)pUVar23->_padding_;
          if (((int)pUVar20->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar23->_padding_)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            pUVar28 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          }
        }
        pAVar22 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
        if ((UClass *)pAVar22->_padding_ == pUVar28) {
          local_b8._8_8_ = pAVar22;
        }
      }
      if ((*(uint *)&this->field_0x8 & 8) == 0) {
        local_b8._52_4_ =
             local_b8._52_4_ &
             (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
              RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
              RF_StrongRefOnFrame|RF_DuplicateTransient|RF_InheritableComponentTemplate|
              RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
              RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
              RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
              RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
              RF_ArchetypeObject|RF_ClassDefaultObject|RF_MarkAsNative|RF_Standalone|RF_Public);
      }
      local_b8._52_4_ = local_b8._52_4_ | (RF_DuplicateTransient|RF_TextExportTransient);
      if ((this->field_0x1a8 & 1) == 0) {
        USceneComponent::UpdateComponentToWorld((USceneComponent *)this,None,None);
      }
      local_f0._s_0.X = (double)*(undefined8 *)&this->field_0x210;
      local_f0._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
      local_f0._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
      USceneComponent::GetComponentRotation((USceneComponent *)this,&local_d8);
      pUVar20 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
      pUVar28 = pUVar21;
      if ((pUVar20 != (UClass *)0x0) &&
         (pUVar23 = Z_Construct_UClass_AActor_NoRegister(), pUVar23 != (UClass *)0x0)) {
        iVar4 = (int)pUVar23->_padding_;
        if (((int)pUVar20->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar23->_padding_)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          pUVar28 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        }
      }
      pAVar22 = UWorld::SpawnActor((UWorld *)this_00,pUVar28,(TVector<double> *)&local_f0._s_0,
                                   &local_d8,(FActorSpawnParameters *)local_b8);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar22 == (AActor *)0x0)) {
        (this->ChildActor).field0_0x0.DebugPtr = pAVar22;
        if (pAVar22 != (AActor *)0x0) goto LAB_1478c0742;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pAVar22);
        (this->ChildActor).field0_0x0.DebugPtr = pAVar22;
LAB_1478c0742:
        cVar15 = (**(code **)(*(longlong *)this + 0x120))(this);
        if ((cVar15 == '\0') &&
           ((pAVar25 == (AActor *)0x0 ||
            (cVar15 = (**(code **)(pAVar25->_padding_ + 0x120))(pAVar25), cVar15 == '\0')))) {
          RegisterChildActorDestroyedDelegate(this);
        }
        else {
          ((this->ChildActor).field0_0x0.DebugPtr)->bIsEditorOnlyActor = '\x01';
        }
        pTVar12 = local_198;
        this_03 = (TObjectPtr<AActor>_u_0)(this->ChildActor).field0_0x0.DebugPtr;
        uVar11 = *(undefined4 *)((longlong)((longlong)this_03 + 0x18) + 4);
        (this->ChildActorName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)((longlong)this_03 + 0x18);
        (this->ChildActorName).Number = uVar11;
        if (*(void **)local_198 != (void *)0x0) {
          local_160 = this_03;
          UE::Core::Private::Function::CheckCallable(*(void **)local_198);
          pcVar5 = *(code **)pTVar12;
          plVar26 = (longlong *)&pTVar12->field_0x10;
          if (*(longlong **)&pTVar12->field_0x28 != (longlong *)0x0) {
            plVar26 = *(longlong **)&pTVar12->field_0x28;
          }
          uVar24 = (**(code **)(*plVar26 + 8))();
          (*pcVar5)(uVar24,&local_160);
          this_03 = (TObjectPtr<AActor>_u_0)(this->ChildActor).field0_0x0.DebugPtr;
        }
        if (this->CachedInstanceData != (FChildActorComponentInstanceData *)0x0) {
          pUVar21 = (UClass *)(this->CachedInstanceData->ComponentInstanceData).Object;
        }
        AActor::FinishSpawning
                  (this_03.DebugPtr,(TTransform<double> *)&this->field_0x1f0,false,
                   (FComponentInstanceDataCache *)pUVar21,OverrideRootScale);
        plVar26 = *(longlong **)((longlong)(this->ChildActor).field0_0x0 + 0x1b8);
        if (plVar26 != (longlong *)0x0) {
          uVar3 = *(undefined1 *)((longlong)plVar26 + 0x1ab);
          *(undefined1 *)((longlong)plVar26 + 0x1ab) = this->field_0x1ab;
          local_1b0.ComparisonIndex.Value = 0;
          local_1b0.Number = 0;
          (**(code **)(*plVar26 + 0x508))
                    (plVar26,this,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,0);
          *(undefined1 *)((longlong)plVar26 + 0x1ab) = uVar3;
        }
        UActorComponent::SetIsReplicated
                  ((UActorComponent *)this,((this->ChildActor).field0_0x0.DebugPtr)->bReplicates);
        pFVar6 = this->CachedInstanceData;
        if (pFVar6 != (FChildActorComponentInstanceData *)0x0) {
          iVar4 = (pFVar6->AttachedActors).ArrayNum;
          this_04 = (FWeakObjectPtr *)(pFVar6->AttachedActors).AllocatorInstance.Data;
          pFVar31 = this_04 + (longlong)iVar4 * 0xe;
          while( true ) {
            if ((pFVar6->AttachedActors).ArrayNum != iVar4) {
              local_1b7[0] = 0;
              `TCheckedPointerIterator<FChildActorAttachedActorInfo,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1b7);
            }
            if (this_04 == pFVar31) break;
            pAVar25 = (AActor *)FWeakObjectPtr::Get(this_04);
            if ((pAVar25 != (AActor *)0x0) &&
               (pAVar22 = AActor::GetAttachParentActor(pAVar25), pAVar22 == (AActor *)0x0)) {
              AActor::AttachToActor
                        (pAVar25,(this->ChildActor).field0_0x0.DebugPtr,
                         &FAttachmentTransformRules::KeepWorldTransform,*(FName *)(this_04 + 1));
              AActor::SetActorRelativeTransform
                        (pAVar25,(TTransform<double> *)(this_04 + 2),false,(FHitResult *)0x0,None);
            }
            this_04 = this_04 + 0xe;
          }
        }
      }
      if (local_b8._64_8_ != 0) {
        plVar26 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar26 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
    }
  }
LAB_1478c0926:
  pFVar6 = this->CachedInstanceData;
  if (pFVar6 != (FChildActorComponentInstanceData *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
    this->CachedInstanceData = (FChildActorComponentInstanceData *)0x0;
  }
  if ((this->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnChildActorCreatedDelegate,(FWriteAccessScope *)&local_138);
    puVar2 = &(this->OnChildActorCreatedDelegate).field_0x1c;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    bVar13 = false;
    uVar29 = *(int *)&(this->OnChildActorCreatedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar29) {
      lVar32 = (longlong)(int)uVar29 << 4;
      bVar13 = false;
      do {
        uVar17 = 0;
        if ((int)uVar29 < *(int *)&(this->OnChildActorCreatedDelegate).field_0x10) {
          uVar17 = ~uVar29 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)&(this->OnChildActorCreatedDelegate).field_0x8;
        if (((*(int *)(lVar7 + 8 + lVar32) == 0) ||
            (plVar26 = *(longlong **)(lVar7 + lVar32), plVar26 == (longlong *)0x0)) ||
           (cVar15 = (**(code **)(*plVar26 + 0x68))(), cVar15 == '\0')) {
          bVar13 = true;
        }
        lVar32 = lVar32 + -0x10;
        uVar29 = uVar29 - 1;
      } while (-1 < (int)uVar29);
    }
    puVar2 = &(this->OnChildActorCreatedDelegate).field_0x1c;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    if (bVar13) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnChildActorCreatedDelegate,false);
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  if (*(longlong *)local_198 == 0) {
    return;
  }
  plVar26 = *(longlong **)&local_198->field_0x28;
  param_1 = local_198;
LAB_1478c0a69:
  plVar27 = (longlong *)&param_1->field_0x10;
  if (plVar26 != (longlong *)0x0) {
    plVar27 = plVar26;
  }
  (**(code **)(*plVar27 + 0x10))();
  return;
}

// DestroyChildActor @ 1478c28e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::DestroyChildActor(UChildActorComponent *this)

{
  int *piVar1;
  int iVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  ULevel *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_UChildActorComponent::DestroyChildActor(void)_::_29_::FStat_STAT_DestroyChildActor>
  FVar15;
  FUObjectItem *pFVar16;
  FChildActorComponentInstanceData *pFVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_70;
  FStatMessage local_60;
  FString local_50 [2];
  
  pUVar11 = *(UWorld **)&this->field_0xb0;
  if ((pUVar11 != (UWorld *)0x0) ||
     (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar11 != (UWorld *)0x0)) {
    pAVar3 = *(AActor **)&this->field_0xa8;
    bVar8 = UWorld::IsPlayingReplay(pUVar11);
    if (((bVar8) &&
        (((((pUVar11->DemoNetDriver).field0_0x0.DebugPtr)->bIsRestoringStartupActors != false &&
          (pAVar3 != (AActor *)0x0)) && (bVar8 = AActor::IsNetStartupActor(pAVar3), bVar8)))) &&
       ((pUVar4 = (this->ChildActorClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0 &&
        (pUVar12 = Z_Construct_UClass_AActor_NoRegister(), pUVar12 != (UClass *)0x0)))) {
      iVar2 = (int)pUVar12->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) && ((this->ChildActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        if ((byte)LogChildActorComponent._0_1_ < 4) {
          return;
        }
        pAVar3 = (this->ChildActor).field0_0x0.DebugPtr;
        if (pAVar3 == (AActor *)0x0) {
          ::FString::FString(&local_70,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pAVar3,&local_70,(UObject *)0x0);
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_50,(UObject *)0x0);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChildActorComponent)
        ;
        if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  pAVar3 = (this->ChildActor).field0_0x0.DebugPtr;
  if (((pAVar3 == (AActor *)0x0) ||
      (((pAVar3->Role).Value != '\x03' && (bVar8 = IsChildActorReplicated(this), bVar8)))) ||
     ((*(AActor **)&this->field_0xa8 != (AActor *)0x0 &&
      ((pUVar13 = AActor::GetLevel(*(AActor **)&this->field_0xa8), pUVar13 != (ULevel *)0x0 &&
       (pUVar13->bIsBeingRemoved != '\0')))))) {
    pAVar3 = (this->ChildActor).field0_0x0.DebugPtr;
    if ((pAVar3 != (AActor *)0x0) && (((uint)pAVar3->_padding_ >> 0x1e & 1) == 0)) {
      return;
    }
    (this->ChildActor).field0_0x0.DebugPtr = (AActor *)0x0;
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_DestroyChildActor ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UChildActorComponent::DestroyChildActor(void)_::_29_::FStat_STAT_DestroyChildActor>
         )0x0) {
      pFVar14 = ::FName::FName(&local_res20,"STAT_DestroyChildActor");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyChildActor,*pFVar14,
                 L"STAT_DestroyChildActor","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_DestroyChildActor;
  if (StatPtr_STAT_DestroyChildActor ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UChildActorComponent::DestroyChildActor(void)_::_29_::FStat_STAT_DestroyChildActor>
       )0x0) {
    pFVar14 = ::FName::FName(&local_88,"STAT_DestroyChildActor");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_UChildActorComponent::DestroyChildActor(void)_::_29_::FStat_STAT_DestroyChildActor>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyChildActor,*pFVar14,
                          L"STAT_DestroyChildActor","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar8 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar19.Value;
        local_res10.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ChildActorComponent.cpp"
                   ,0x39f);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar19.Value;
      local_res18.s.HighPart = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar6 = true;
      goto LAB_1478c2c12;
    }
  }
  bVar6 = false;
  FVar20 = local_80;
LAB_1478c2c12:
  if (GExitPurge == false) {
    pAVar3 = (this->ChildActor).field0_0x0.DebugPtr;
    if ((pAVar3 == (AActor *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((uint)pAVar3->_padding_ >> 0x1e & 1) == 0) &&
       (pFVar16 = FUObjectArray::IndexToObject
                            (&GUObjectArray,
                             *(int *)((longlong)&((this->ChildActor).field0_0x0.DebugPtr)->_padding_
                                     + 4)),
       ((uint)((ulonglong)(pFVar16->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      bVar9 = false;
      if ((this->CachedInstanceData != (FChildActorComponentInstanceData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!CachedInstanceData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ChildActorComponent.cpp"
                              ,0x3ae,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) &&
         (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar16->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        pFVar17 = ::operator_new(0xf8);
        if (pFVar17 == (FChildActorComponentInstanceData *)0x0) {
          this->CachedInstanceData = (FChildActorComponentInstanceData *)0x0;
        }
        else {
          pFVar17 = FChildActorComponentInstanceData::FChildActorComponentInstanceData(pFVar17,this)
          ;
          this->CachedInstanceData = pFVar17;
        }
      }
    }
    else {
      bVar9 = true;
    }
    pUVar11 = AActor::GetWorld((this->ChildActor).field0_0x0.DebugPtr);
    if ((pUVar11 != (UWorld *)0x0) && (!bVar9)) {
      UWorld::DestroyActor(pUVar11,(this->ChildActor).field0_0x0.DebugPtr,false,true);
    }
  }
  (this->ChildActor).field0_0x0.DebugPtr = (AActor *)0x0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
        return;
      }
    }
  }
  return;
}

// ExperimentalAllowPerInstanceChildActorProperties @ 1478cc9a0

bool __cdecl UChildActorComponent::ExperimentalAllowPerInstanceChildActorProperties(void)

{
  return GExperimentalAllowPerInstanceChildActorProperties != 0;
}

// GetComponentInstanceData @ 1478d0690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
UChildActorComponent::GetComponentInstanceData
          (UChildActorComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  UPackage *pUVar3;
  FChildActorComponentInstanceData *this_00;
  FChildActorComponentInstanceData *pFVar4;
  int iVar5;
  uint uVar6;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  pFVar4 = this->CachedInstanceData;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (pFVar4 == (FChildActorComponentInstanceData *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChildActorComponentInstanceData,
                           (UObject *)pUVar3,L"ChildActorComponentInstanceData");
      if (Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return __return_storage_ptr__;
      }
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton;
    local_res8 = Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)
                 Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
    iVar5 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
    uVar6 = (int)pUVar1->_padding_ + -1 + iVar5 & ~(iVar5 - 1U);
    uVar2 = 1;
    if (uVar6 != 0) {
      uVar2 = uVar6;
    }
    pFVar4 = FMemory::Malloc((longlong)(int)uVar2,0);
    *(FChildActorComponentInstanceData **)&__return_storage_ptr__->field_0x10 = pFVar4;
    FChildActorComponentInstanceData::FChildActorComponentInstanceData(pFVar4,this);
    __return_storage_ptr__->field_0x20 = 1;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChildActorComponentInstanceData,
                           (UObject *)pUVar3,L"ChildActorComponentInstanceData");
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton !=
        (UScriptStruct *)0x0) {
      local_res8 = Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton
                  );
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
      iVar5 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      uVar6 = (int)pUVar1->_padding_ + -1 + iVar5 & ~(iVar5 - 1U);
      uVar2 = 1;
      if (uVar6 != 0) {
        uVar2 = uVar6;
      }
      this_00 = FMemory::Malloc((longlong)(int)uVar2,0);
      *(FChildActorComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
      FChildActorComponentInstanceData::FChildActorComponentInstanceData(this_00,pFVar4);
      __return_storage_ptr__->field_0x20 = 1;
    }
    pFVar4 = this->CachedInstanceData;
    if (pFVar4 != (FChildActorComponentInstanceData *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    this->CachedInstanceData = (FChildActorComponentInstanceData *)0x0;
  }
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1478d5120

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
UChildActorComponent::GetLifetimeReplicatedProps
          (UChildActorComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,10,L"ChildActor",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 1478d8cf0

UClass * __cdecl UChildActorComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChildActorComponent",
               &Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton,
               StaticRegisterNativesUChildActorComponent,0x2b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChildActorComponent>,
               InternalVTableHelperCtorCaller<UChildActorComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChildActorComponent.InnerSingleton;
}

// GetSpawnableChildActorTemplate @ 1478dbb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UChildActorComponent::GetSpawnableChildActorTemplate(UChildActorComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  bool bVar4;
  UClass *pUVar5;
  AActor *pAVar6;
  AActor *this_00;
  
  this_00 = (AActor *)0x0;
  if ((this->ChildActorTemplate).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
    pAVar6 = this_00;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pAVar6 = (AActor *)(this->ChildActorClass).Class.field0_0x0.DebugPtr;
      }
    }
    pAVar3 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
    if ((AActor *)pAVar3->_padding_ == pAVar6) {
      return pAVar3;
    }
  }
  pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  pAVar6 = this_00;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr, pAVar6 = (AActor *)0x0,
       pUVar2 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          this_00 = (AActor *)(this->ChildActorClass).Class.field0_0x0.DebugPtr;
        }
      }
      pAVar6 = UClass::GetDefaultObject<AActor>((UClass *)this_00);
    }
  }
  return pAVar6;
}

// IsChildActorReplicated @ 1478e0e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChildActorComponent::IsChildActorReplicated(UChildActorComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  UClass *pUVar8;
  
  pUVar8 = (UClass *)0x0;
  pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 == (UClass *)0x0) ||
     (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_1478e0f01:
    bVar3 = false;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) ||
       (pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr, pUVar2 == (UClass *)0x0))
    goto LAB_1478e0f01;
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    pUVar5 = pUVar8;
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
      }
    }
    pAVar7 = UClass::GetDefaultObject<AActor>(pUVar5);
    if ((pAVar7 == (AActor *)0x0) || (pAVar7->bReplicates == '\0')) goto LAB_1478e0f01;
    bVar3 = true;
  }
  if ((this->ChildActorTemplate).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar2 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar8 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
      }
    }
    pAVar7 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
    if (((UClass *)pAVar7->_padding_ == pUVar8) && (pAVar7->bReplicates != '\0')) {
      bVar4 = true;
      goto LAB_1478e0f71;
    }
  }
  bVar4 = false;
LAB_1478e0f71:
  if ((!bVar3) && (!bVar4)) {
    return false;
  }
  return true;
}

// IsHLODRelevant @ 1478e1170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChildActorComponent::IsHLODRelevant(UChildActorComponent *this)

{
  AActor *pAVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = UActorComponent::CanBeHLODRelevant((UActorComponent *)this);
  if ((bVar2) && (pAVar1 = (this->ChildActor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    cVar3 = (**(code **)(pAVar1->_padding_ + 0x458))();
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLevelBeingRemoved @ 1478e12b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChildActorComponent::IsLevelBeingRemoved(UChildActorComponent *this)

{
  ULevel *pUVar1;
  
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel(*(AActor **)&this->field_0xa8);
    if (pUVar1 != (ULevel *)0x0) {
      return pUVar1->bIsBeingRemoved;
    }
  }
  return false;
}

// OnChildActorDestroyed @ 1478e5170

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
UChildActorComponent::OnChildActorDestroyed(UChildActorComponent *this,AActor *param_1)

{
  code *pcVar1;
  FChildActorComponentInstanceData *pFVar2;
  bool bVar3;
  ULevel *pUVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  FName FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res18 [2];
  undefined4 uVar11;
  FString local_48;
  undefined1 local_38 [16];
  
  if (!GExitPurge) {
    if ((((param_1 != (AActor *)0x0) &&
         (((param_1->Role).Value == '\x03' || (bVar3 = IsChildActorReplicated(this), !bVar3)))) &&
        ((*(AActor **)&this->field_0xa8 == (AActor *)0x0 ||
         ((pUVar4 = AActor::GetLevel(*(AActor **)&this->field_0xa8), pUVar4 == (ULevel *)0x0 ||
          (pUVar4->bIsBeingRemoved == '\0')))))) &&
       (pUVar5 = AActor::GetWorld(param_1), pUVar5 != (UWorld *)0x0)) {
      FVar7 = (FName)param_1->_padding_;
      if (GFastPathUniqueNameGeneration == false) {
        local_38._8_8_ = local_res18;
        local_38._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UChildActorComponent::OnChildActorDestroyed'::__l14::<lambda_1>,void,int_&>
             ::Call;
        local_res18[0] = (FName)param_1;
        UpdateSuffixForNextNewObject
                  ((UObject *)param_1->_padding_,(UClass *)FVar7,
                   (TFunctionRef<void___cdecl(int_&)> *)local_38);
      }
      if (GIsGarbageCollecting == false) {
        local_res18[0] = *(FName *)((longlong)FVar7 + 0x18);
        ::FName::ToString(local_res18,&local_48);
        pwVar10 = L"";
        ::FString::PrintfImpl((FString *)local_38,L"DESTROYED_%s_CHILDACTOR");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pwVar9 = L"";
        if (local_38._8_4_ != 0) {
          pwVar9 = (wchar_t *)local_38._0_8_;
        }
        pcVar1 = *(code **)(param_1->_padding_ + 0x170);
        pFVar6 = ::FName::FName(local_res18,pwVar9);
        uVar11 = 0;
        FVar7 = MakeUniqueObjectName
                          ((UObject *)(local_res18 + 1),(UClass *)param_1->_padding_,FVar7,
                           (*pFVar6).ComparisonIndex.Value);
        pFVar8 = ::FName::ToString((FName *)FVar7,&local_48);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        (*pcVar1)(param_1,pwVar10,0,4,uVar11);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_38._0_8_);
        }
      }
      else {
        pFVar2 = this->CachedInstanceData;
        (this->ChildActorName).ComparisonIndex = 0;
        (this->ChildActorName).Number = 0;
        if (pFVar2 != (FChildActorComponentInstanceData *)0x0) {
          (pFVar2->ChildActorName).ComparisonIndex = 0;
          (pFVar2->ChildActorName).Number = 0;
        }
      }
    }
    if (GIsReinstancing == (atomic<bool>)0x0) {
      (this->ChildActor).field0_0x0.DebugPtr = (AActor *)0x0;
    }
  }
  return;
}

// OnComponentDestroyed @ 1478e5390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::OnComponentDestroyed(UChildActorComponent *this,bool param_1)

{
  USceneComponent::OnComponentDestroyed((USceneComponent *)this,param_1);
  DestroyChildActor(this);
  return;
}

// OnRegister @ 1478e5c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::OnRegister(UChildActorComponent *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  bool bVar6;
  UClass *pUVar7;
  FName FVar8;
  UPackage *pUVar9;
  FName FVar10;
  undefined8 local_res8;
  undefined8 local_48 [5];
  undefined8 local_20;
  
  USceneComponent::OnRegister((USceneComponent *)this);
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  if (this->ActorOuter != (UObject *)0x0) {
    if (this->ActorOuter != *(UObject **)(*(longlong *)&this->field_0xa8 + 0x20)) {
      local_res8 = 0;
      (this->ChildActorName).ComparisonIndex = 0;
      (this->ChildActorName).Number = 0;
    }
    this->ActorOuter = (UObject *)0x0;
  }
  pUVar4 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  if ((this->ChildActor).field0_0x0.DebugPtr == (AActor *)0x0) {
    if ((pUVar4 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_AActor_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar3 = (int)pUVar7->_padding_;
      if (((int)pUVar4->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((this->ChildActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_48[0] = 0;
        local_20 = 0;
        (**(code **)(*(longlong *)this + 0x640))(this,local_48);
      }
    }
    return;
  }
  FVar8 = FVar10;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_AActor_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar3 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FVar8 = (FName)(this->ChildActorClass).Class.field0_0x0.DebugPtr;
    }
  }
  pAVar5 = (this->ChildActor).field0_0x0.DebugPtr;
  if ((FName)pAVar5->_padding_ == FVar8) {
    FVar10 = (FName)pAVar5->_padding_;
    this->ChildActorName = FVar10;
  }
  else {
    this->bNeedsRecreate = '\x01';
    (this->ChildActorName).ComparisonIndex = 0;
    (this->ChildActorName).Number = 0;
    local_res8 = 0;
  }
  if (this->bNeedsRecreate == '\0') {
    UActorComponent::SetIsReplicated((UActorComponent *)this,pAVar5->bReplicates);
    RegisterChildActorDestroyedDelegate(this);
    return;
  }
  this->field_0x280 = this->field_0x280 & 0xfb;
  pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pAVar5);
  pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  UE::Net::FScopedIgnoreStaticActorDestruction::FScopedIgnoreStaticActorDestruction
            ((FScopedIgnoreStaticActorDestruction *)&local_res8);
  DestroyChildActor(this);
  local_48[0] = 0;
  local_20 = 0;
  (**(code **)(*(longlong *)this + 0x640))(this,local_48);
  pAVar5 = (this->ChildActor).field0_0x0.DebugPtr;
  if ((pAVar5 != (AActor *)0x0) && (this->ChildActorName == FVar10)) {
    pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pAVar5);
    UPackage::SetDirtyFlag(pUVar9,pUVar9->bDirty);
    pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    UPackage::SetDirtyFlag(pUVar9,pUVar9->bDirty);
  }
  UE::Net::FScopedIgnoreStaticActorDestruction::~FScopedIgnoreStaticActorDestruction
            ((FScopedIgnoreStaticActorDestruction *)&local_res8);
  return;
}

// OnRep_ChildActor @ 1478e6270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::OnRep_ChildActor(UChildActorComponent *this)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  FName FStackX_8;
  code *pcStack_28;
  undefined8 uStack_20;
  
  pAVar1 = (this->ChildActor).field0_0x0.DebugPtr;
  if (pAVar1 == (AActor *)0x0) {
    return;
  }
  pcVar4 = strstr("&ThisClass::OnChildActorDestroyed","::");
  if (pcVar4 == (char *)0x0) {
LAB_1478e8f3b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_1478e8f3b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_1478e8f6e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1478e8f6e:
  ::FName::FName(&FStackX_8,pcVar5);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  pcStack_28 = OnChildActorDestroyed;
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  ::__Internal_AddUniqueDynamic<UChildActorComponent>
            ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
              *)&pAVar1->OnDestroyed,this,(pmf_f34bcc77 *)&pcStack_28,FStackX_8);
  return;
}

// OnUnregister @ 1478e6480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::OnUnregister(UChildActorComponent *this)

{
  USceneComponent::OnUnregister((USceneComponent *)this);
  this->ActorOuter = *(UObject **)(*(longlong *)&this->field_0xa8 + 0x20);
  DestroyChildActor(this);
  return;
}

// PostRepNotifies @ 1478e7b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::PostRepNotifies(UChildActorComponent *this)

{
  AActor *pAVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  UChildActorComponent *local_res8;
  
  USceneComponent::PostRepNotifies((USceneComponent *)this);
  pAVar1 = (this->ChildActor).field0_0x0.DebugPtr;
  if (pAVar1 != (AActor *)0x0) {
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pAVar1->ParentComponent).WeakPtr,(FObjectPtr)&local_res8);
    pUVar2 = (UClass *)((this->ChildActor).field0_0x0.DebugPtr)->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ChildActorClass).Class.field0_0x0.DebugPtr = pUVar2;
    pAVar1 = (this->ChildActor).field0_0x0.DebugPtr;
    uVar3 = *(undefined4 *)((longlong)&pAVar1->_padding_ + 4);
    (this->ChildActorName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pAVar1->_padding_;
    (this->ChildActorName).Number = uVar3;
    return;
  }
  (this->ChildActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ChildActorName).ComparisonIndex = 0;
  (this->ChildActorName).Number = 0;
  return;
}

// RegisterChildActorDestroyedDelegate @ 1478e8ec0

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
UChildActorComponent::RegisterChildActorDestroyedDelegate(UChildActorComponent *this)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  FName local_res8;
  code *local_28;
  undefined8 uStack_20;
  
  pAVar1 = (this->ChildActor).field0_0x0.DebugPtr;
  if (pAVar1 == (AActor *)0x0) {
    return;
  }
  pcVar4 = strstr("&ThisClass::OnChildActorDestroyed","::");
  if (pcVar4 == (char *)0x0) {
LAB_1478e8f3b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_1478e8f3b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_1478e8f6e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1478e8f6e:
  ::FName::FName(&local_res8,pcVar5);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnChildActorDestroyed;
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  ::__Internal_AddUniqueDynamic<UChildActorComponent>
            ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
              *)&pAVar1->OnDestroyed,this,(pmf_f34bcc77 *)&local_28,local_res8);
  return;
}

// RegisterReplicationFragments @ 1478e91a0

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
UChildActorComponent::RegisterReplicationFragments
          (UChildActorComponent *this,FFragmentRegistrationContext *param_1,
          EFragmentRegistrationFlags param_2)

{
  UActorComponent::RegisterReplicationFragments
            ((UActorComponent *)this,param_1,param_2 | InitializeDefaultStateFromClassDefaults);
  return;
}

// Serialize @ 1478edce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::Serialize(UChildActorComponent *this,FArchive *param_1)

{
  bool bVar1;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  if ((*(uint *)&param_1->field_0x34 >> 0x16 & 1) == 0) {
    if ((*(uint *)&param_1->field_0x34 >> 0xc & 1) == 0) {
      return;
    }
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar1 = FIsDuplicatingClassForReinstancing::operator_bool
                          (&GIsDuplicatingClassForReinstancing), !bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0001478edd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ChildActorTemplate,8);
      return;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ChildActorTemplate);
  return;
}

// Serialize @ 1478edd70

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
UChildActorComponent::Serialize(UChildActorComponent *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,pFVar2);
  if ((*(uint *)&pFVar2->field_0x34 >> 0x16 & 1) != 0) {
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&this->ChildActorTemplate);
    return;
  }
  if ((*(uint *)&pFVar2->field_0x34 >> 0xc & 1) != 0) {
    if ((pFVar2->field_0x28 & 1) == 0) {
      bVar1 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing)
      ;
      if (!bVar1) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&this->ChildActorTemplate,8);
        return;
      }
    }
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&this->ChildActorTemplate);
  }
  return;
}

// SetChildActorClass @ 1478f0640

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UChildActorComponent::SetChildActorClass
          (UChildActorComponent *this,TSubclassOf<AActor> param_1,AActor *param_2)

{
  int iVar1;
  AActor *pAVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  AActor *pAVar10;
  FCopyPropertiesForUnrelatedObjectsParams *pFVar11;
  UClass *pUVar12;
  size_t sVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  int iVar18;
  undefined1 auStack_188 [32];
  FName local_168 [2];
  TStringView<wchar_t> local_158;
  FString local_148;
  FString local_138;
  FCopyPropertiesForUnrelatedObjectsParams local_128;
  undefined8 local_100;
  FCopyPropertiesForUnrelatedObjectsParams local_f8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->ChildActorClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  bVar6 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar6) {
    pUVar14 = (UClass *)0x0;
    if ((this->ChildActorTemplate).field0_0x0.DebugPtr != (AActor *)0x0) {
      pUVar7 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
      if ((pUVar7 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_AActor_NoRegister(), pUVar12 != (UClass *)0x0)) {
        iVar18 = (int)pUVar12->_padding_;
        if (((int)pUVar7->_padding_ < iVar18) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar18 * 8) !=
            &pUVar12->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar14 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        }
      }
      if ((UClass *)((this->ChildActorTemplate).field0_0x0.DebugPtr)->_padding_ != pUVar14) {
        (this->ChildActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
      }
    }
    if ((this->field_0x98 & 1) != 0) {
      local_168[0].ComparisonIndex.Value = 0;
      local_168[0].Number = 0;
      (this->ChildActorName).ComparisonIndex = 0;
      (this->ChildActorName).Number = 0;
      DestroyChildActor(this);
      if (param_2 == (AActor *)0x0) {
        param_2 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      pAVar10 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pAVar10 != (AActor *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pAVar10);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
      }
      (this->ChildActorTemplate).field0_0x0.DebugPtr = param_2;
      local_128.bAggressiveDefaultSubobjectReplacement = false;
      local_128.bDoDelta = false;
      local_128.bReplaceObjectClassReferences = false;
      local_128.bCopyDeprecatedProperties = false;
      local_128.bPreserveRootComponent = false;
      local_128.bPerformDuplication = false;
      local_128.bOnlyHandleDirectSubObjects = false;
      local_128.bSkipCompilerGeneratedDefaults = false;
      local_100 = 0;
      (**(code **)(*(longlong *)this + 0x640))(this,&local_128);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar10 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar10);
      }
      (this->ChildActorTemplate).field0_0x0.DebugPtr = pAVar10;
      return;
    }
    if (param_2 == (AActor *)0x0) {
      return;
    }
    if ((byte)LogChildActorComponent._0_1_ < 3) {
      return;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_138,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(FString *)&local_158,(UObject *)0x0)
    ;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChildActorComponent);
    if (local_158.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_158.DataPtr);
    }
    if (local_138.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
    return;
  }
  pUVar14 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar14 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_AActor_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar18 = (int)pUVar7->_padding_;
    if (((int)pUVar14->_padding_ < iVar18) ||
       ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar18 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar10 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
      if ((this->ChildActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0) {
        pUVar14 = (UClass *)0x0;
        iVar18 = 0;
        if ((pAVar10 != (AActor *)0x0) && (param_2 == (AActor *)0x0)) {
          pUVar7 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          pUVar8 = Z_Construct_UClass_AActor_NoRegister();
          pUVar12 = pUVar14;
          if (pUVar8 != (UClass *)0x0) {
            iVar1 = (int)pUVar8->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar12 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
            }
          }
          if ((UClass *)((this->ChildActorTemplate).field0_0x0.DebugPtr)->_padding_ == pUVar12) {
            return;
          }
        }
        pUVar7 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        local_168[0].ComparisonIndex.Value = 0;
        local_168[0].Number = 0;
        pUVar12 = pUVar14;
        if ((pUVar7 != (UClass *)0x0) &&
           (pUVar8 = Z_Construct_UClass_AActor_NoRegister(), pUVar8 != (UClass *)0x0)) {
          iVar1 = (int)pUVar8->_padding_;
          if (((int)pUVar7->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pUVar12 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          }
        }
        pUVar9 = GetTransientPackage();
        FVar4 = local_168[0];
        if (local_168[0] == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar9,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar7 = Z_Construct_UClass_AActor_NoRegister();
        CheckIsClassChildOf_Internal(pUVar7,pUVar12);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar12);
        FVar5 = local_168[0];
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_168[0].ComparisonIndex = FVar4.ComparisonIndex.Value;
        local_168[0].Number = FVar4.Number;
        local_c8._16_4_ = local_168[0].ComparisonIndex.Value;
        local_c8._20_4_ = local_168[0].Number;
        local_c8._24_4_ = RF_ArchetypeObject|RF_Transactional|RF_Public;
        local_c8[0x20] = false;
        local_168[0] = FVar5;
        local_c8._8_8_ = pUVar9;
        local_c8._40_8_ = param_2;
        pAVar10 = (AActor *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar16 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if ((this->ChildActorTemplate).field0_0x0.DebugPtr != (AActor *)0x0) {
          if (param_2 == (AActor *)0x0) {
            UEngine::FCopyPropertiesForUnrelatedObjectsParams::
            FCopyPropertiesForUnrelatedObjectsParams(&local_f8);
            local_f8.bNotifyObjectReplacement = true;
            pFVar11 = UEngine::FCopyPropertiesForUnrelatedObjectsParams::
                      FCopyPropertiesForUnrelatedObjectsParams(&local_128,&local_f8);
            UEngine::CopyPropertiesForUnrelatedObjects
                      ((UObject *)(this->ChildActorTemplate).field0_0x0.DebugPtr,(UObject *)pAVar10,
                       pFVar11);
          }
          pAVar2 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
          pcVar3 = *(code **)(pAVar2->_padding_ + 0x170);
          pUVar9 = GetTransientPackage();
          (*pcVar3)(pAVar2,0,pUVar9,0x10);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar10 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar10);
        }
        (this->ChildActorTemplate).field0_0x0.DebugPtr = pAVar10;
        pUVar7 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
        if ((pUVar7 != (UClass *)0x0) &&
           (pUVar12 = Z_Construct_UClass_AActor_NoRegister(), pUVar12 != (UClass *)0x0)) {
          iVar1 = (int)pUVar12->_padding_;
          if (((int)pUVar7->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar12->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pUVar14 = (this->ChildActorClass).Class.field0_0x0.DebugPtr;
          }
        }
        local_168[0] = (FName)pUVar14->_padding_;
        ::FName::ToString(local_168,(FString *)&local_158);
        local_168[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_168[0].Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(local_168,&local_138);
        ::FString::PrintfImpl(&local_148,L"%s_%s_CAT");
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_158.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_158.DataPtr);
        }
        if (local_148.Data.ArrayNum == 0) {
          local_158.DataPtr = L"";
        }
        else {
          local_158.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
          if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_1478f09b6;
        }
        sVar13 = wcslen(local_158.DataPtr);
        iVar18 = (int)sVar13;
LAB_1478f09b6:
        local_158.Size = iVar18;
        pUVar14 = Z_Construct_UClass_AActor_NoRegister();
        pUVar15 = StaticFindObject(pUVar14,(UObject *)this,&local_158,None);
        if (pUVar15 != (UObject *)0x0) {
          pcVar3 = *(code **)(*(longlong *)pUVar15 + 0x170);
          pUVar9 = GetTransientPackage();
          (*pcVar3)(pUVar15,0,pUVar9,0x10);
        }
        pAVar10 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_148.Data.ArrayNum != 0) {
          FVar17.Data = local_148.Data.AllocatorInstance.Data;
        }
        (**(code **)(pAVar10->_padding_ + 0x170))(pAVar10,FVar17.Data,this,0x14);
        if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
        return;
      }
      goto LAB_1478f0a6a;
    }
  }
  pAVar10 = (this->ChildActorTemplate).field0_0x0.DebugPtr;
LAB_1478f0a6a:
  if (pAVar10 != (AActor *)0x0) {
    pcVar3 = *(code **)(pAVar10->_padding_ + 0x170);
    pUVar9 = GetTransientPackage();
    (*pcVar3)(pAVar10,0,pUVar9,0x10);
    (this->ChildActorTemplate).field0_0x0.DebugPtr = (AActor *)0x0;
  }
  return;
}

// SetChildActorName @ 1478f0c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildActorComponent::SetChildActorName(UChildActorComponent *this,FName param_1)

{
  this->ChildActorName = param_1;
  return;
}

// SetChildActorNameIsExact @ 1478f0c70

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
UChildActorComponent::SetChildActorNameIsExact(UChildActorComponent *this,bool param_1)

{
  this->bChildActorNameIsExact = '\0';
  this->field_0x280 = this->field_0x280 | param_1 << 3;
  return;
}

// StaticRegisterNativesUChildActorComponent @ 1478f7d30

void __cdecl UChildActorComponent::StaticRegisterNativesUChildActorComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UChildActorComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 1478fe480

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
UChildActorComponent::ValidateGeneratedRepEnums
          (UChildActorComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_ChildActor,L"ChildActor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_ChildActor != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ChildActorComponent.gen.cpp"
                       ,0x24c,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChildActorComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execOnChildActorDestroyed @ 1479071e0

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
UChildActorComponent::execOnChildActorDestroyed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName this;
  bool bVar3;
  ULevel *pUVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  FName FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res10;
  FName local_res20;
  undefined4 uVar11;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  FString local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GExitPurge == false) {
    if ((((local_res10 != (FName)0x0) &&
         ((((TEnumAsByte<ENetRole> *)((longlong)local_res10 + 0x168))->Value == '\x03' ||
          (bVar3 = IsChildActorReplicated((UChildActorComponent *)param_1), !bVar3)))) &&
        ((*(AActor **)&param_1[4].field_0x8 == (AActor *)0x0 ||
         ((pUVar4 = AActor::GetLevel(*(AActor **)&param_1[4].field_0x8), pUVar4 == (ULevel *)0x0 ||
          (pUVar4->bIsBeingRemoved == '\0')))))) &&
       (pUVar5 = AActor::GetWorld((AActor *)this), pUVar5 != (UWorld *)0x0)) {
      FVar7 = *(FName *)((longlong)this + 0x10);
      if (GFastPathUniqueNameGeneration == false) {
        local_48._8_8_ = &local_res20;
        local_res20 = this;
        local_48._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UChildActorComponent::OnChildActorDestroyed'::__l14::<lambda_1>,void,int_&>
             ::Call;
        UpdateSuffixForNextNewObject
                  (*(UObject **)((longlong)this + 0x20),(UClass *)FVar7,
                   (TFunctionRef<void___cdecl(int_&)> *)local_48);
      }
      if (GIsGarbageCollecting == false) {
        local_res20 = *(FName *)((longlong)FVar7 + 0x18);
        ::FName::ToString(&local_res20,(FString *)local_58);
        pwVar10 = L"";
        ::FString::PrintfImpl((FString *)local_48,L"DESTROYED_%s_CHILDACTOR");
        if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_58._0_8_);
        }
        pwVar9 = L"";
        if (local_48._8_4_ != 0) {
          pwVar9 = (wchar_t *)local_48._0_8_;
        }
        pcVar2 = *(code **)(*(longlong *)this + 0x170);
        pFVar6 = ::FName::FName(&local_res20,pwVar9);
        uVar11 = 0;
        FVar7 = MakeUniqueObjectName
                          ((UObject *)local_58,*(UClass **)((longlong)this + 0x20),FVar7,
                           (*pFVar6).ComparisonIndex.Value);
        pFVar8 = ::FName::ToString((FName *)FVar7,&local_38);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        (*pcVar2)(this,pwVar10,0,4,uVar11);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_48._0_8_);
        }
      }
      else {
        *(undefined8 *)&param_1[0xf].field_0x10 = 0;
        if (*(longlong *)&param_1[0xf].field_0x20 != 0) {
          *(undefined8 *)(*(longlong *)&param_1[0xf].field_0x20 + 0xc0) = 0;
        }
      }
    }
    if (GIsReinstancing == (atomic<bool>)0x0) {
      *(undefined8 *)(param_1 + 0xf) = 0;
    }
  }
  return;
}

// execOnRep_ChildActor @ 147907500

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
UChildActorComponent::execOnRep_ChildActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterChildActorDestroyedDelegate((UChildActorComponent *)param_1);
  return;
}

// execSetChildActorClass @ 14790a0a0

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
UChildActorComponent::execSetChildActorClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  SetChildActorClass((UChildActorComponent *)param_1,(TSubclassOf<AActor>)&local_res20,(AActor *)0x0
                    );
  return;
}

