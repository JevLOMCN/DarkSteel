// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b420c00

UClass * __cdecl UDS_AnimOpt_ControlWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_ControlWidget",
               &Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton,
               StaticRegisterNativesUDS_AnimOpt_ControlWidget,0x8c8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimOpt_ControlWidget>,
               InternalVTableHelperCtorCaller<UDS_AnimOpt_ControlWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton;
}

// UDS_AnimOpt_ControlWidget @ 14b423a20

UDS_AnimOpt_ControlWidget * __thiscall
UDS_AnimOpt_ControlWidget::UDS_AnimOpt_ControlWidget
          (UDS_AnimOpt_ControlWidget *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->LoopCheckBoxState = false;
  this->IsMoveStateFlag = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  *(undefined8 *)&(this->ResetButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->MoveButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->SkillButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->AttackButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopStopButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopCheckBox).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopInterval).WeakPtr.ObjectSerialNumber = 0;
  (this->LoopIntervalText).WeakPtr.ObjectSerialNumber = 0;
  (this->LoopTimerHandle).Handle = 0;
  this->MoveInverseFlag = false;
  this->LoopIntervalValue = 3.0;
  (this->ResetButton).WeakPtr.ObjectIndex = 0;
  return this;
}

// UDS_AnimOpt_ControlWidget @ 14b423ad0

UDS_AnimOpt_ControlWidget * __thiscall
UDS_AnimOpt_ControlWidget::UDS_AnimOpt_ControlWidget
          (UDS_AnimOpt_ControlWidget *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->LoopCheckBoxState = false;
  this->IsMoveStateFlag = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  *(undefined8 *)&(this->ResetButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->MoveButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->SkillButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->AttackButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopStopButton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopCheckBox).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->LoopInterval).WeakPtr.ObjectSerialNumber = 0;
  (this->LoopIntervalText).WeakPtr.ObjectSerialNumber = 0;
  (this->LoopTimerHandle).Handle = 0;
  this->MoveInverseFlag = false;
  this->LoopIntervalValue = 3.0;
  (this->ResetButton).WeakPtr.ObjectIndex = 0;
  return this;
}

// ~UDS_AnimOpt_ControlWidget @ 14b423f70

void __thiscall
UDS_AnimOpt_ControlWidget::~UDS_AnimOpt_ControlWidget(UDS_AnimOpt_ControlWidget *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b424db0

UClass * __cdecl UDS_AnimOpt_ControlWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_ControlWidget",
               &Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton,
               StaticRegisterNativesUDS_AnimOpt_ControlWidget,0x8c8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimOpt_ControlWidget>,
               InternalVTableHelperCtorCaller<UDS_AnimOpt_ControlWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimOpt_ControlWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimOpt_ControlWidget @ 14b425510

void __cdecl UDS_AnimOpt_ControlWidget::StaticRegisterNativesUDS_AnimOpt_ControlWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_AnimOpt_ControlWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedLoopIntervalValue @ 14b426b10

void __cdecl
UDS_AnimOpt_ControlWidget::execOnChangedLoopIntervalValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedLoopIntervalValue((UDS_AnimOpt_ControlWidget *)param_1,local_res10[0]);
  return;
}

// execOnClickAttack @ 14b426ba0

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickAttack(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickAttack((UDS_AnimOpt_ControlWidget *)param_1);
  return;
}

// execOnClickLoopCheckBox @ 14b426bc0

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickLoopCheckBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickLoopCheckBox((UDS_AnimOpt_ControlWidget *)param_1,local_res10[0] != 0);
  return;
}

// execOnClickLoopStop @ 14b426c50

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickLoopStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickLoopStop((UDS_AnimOpt_ControlWidget *)param_1);
  return;
}

// execOnClickMove @ 14b426c70

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickMove((UDS_AnimOpt_ControlWidget *)param_1);
  return;
}

// execOnClickReset @ 14b426c90

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickReset((UDS_AnimOpt_ControlWidget *)param_1);
  return;
}

// execOnClickSkill @ 14b426cb0

void __cdecl
UDS_AnimOpt_ControlWidget::execOnClickSkill(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickSkill((UDS_AnimOpt_ControlWidget *)param_1);
  return;
}

// ExecuteMoveMsg @ 14bbb7200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::ExecuteMoveMsg(UDS_AnimOpt_ControlWidget *this)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  UObject *pUVar2;
  code *local_18;
  undefined8 uStack_10;
  
  if ((this->LoopTimerHandle).Handle != 0) {
    LoopStop(this);
    this->IsMoveStateFlag = false;
    return;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_01 = UWorld::GetTimerManager(this_00);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = InvertMoveFlag;
  FTimerManager::SetTimer<UDS_AnimOpt_ControlWidget>
            (this_01,&this->LoopTimerHandle,this,(pmf_ae51bfb5 *)&local_18,this->LoopIntervalValue,
             true,__real_bf800000);
  this->IsMoveStateFlag = true;
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,(this->LoopTimerHandle).Handle != 0);
  }
  return;
}

// ExecuteNormalAttackMsg @ 14bbb72f0

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

void __thiscall UDS_AnimOpt_ControlWidget::ExecuteNormalAttackMsg(UDS_AnimOpt_ControlWidget *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  SkillInfo *pSVar2;
  bool bVar3;
  uint uVar4;
  UDS_EntityManager *this_00;
  FDS_EntityBase *this_01;
  TRotator<double> *pTVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *pFVar7;
  FDS_SkillTableRow *pFVar8;
  FDS_SkillActLevelTableRow *pFVar9;
  Vector *pVVar10;
  VectorF *pVVar11;
  int iVar12;
  ulonglong uVar13;
  Arena *pAVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> TStack_178;
  ForAnyElementType FStack_168;
  int iStack_160;
  int iStack_15c;
  NetSyncResponse NStack_158;
  TVector<double>_u_0 TStack_d8;
  double dStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double dStack_98;
  TRotator<double> TStack_90;
  TRotator<double> aTStack_78 [2];
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    TStack_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_178.ArrayNum = 0;
    TStack_178.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&TStack_178);
    uVar13 = (ulonglong)TStack_178.ArrayNum;
    uVar19 = 0;
    if (0 < TStack_178.ArrayNum) {
      lVar18 = 0;
      uVar15 = uVar13;
      do {
        uVar20 = ~uVar19 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar19 < (int)uVar15) {
          uVar4 = uVar20;
        }
        iVar12 = (int)uVar15;
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar12 = TStack_178.ArrayNum;
        }
        if (*(longlong *)(TStack_178.AllocatorInstance.Data + lVar18 * 8) == 0) goto LAB_14bbb490e;
        uVar4 = 0;
        if ((int)uVar19 < iVar12) {
          uVar4 = uVar20;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = *(UObject **)(TStack_178.AllocatorInstance.Data + lVar18 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FStackX_8.ObjectIndex = 0;
        FStackX_8.ObjectSerialNumber = 0;
        pUStackX_20 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_20);
        this_01 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)FStackX_8);
        if (this_01 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_01->_padding_ + 400))(this_01);
          bVar3 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&FStackX_18,
                             (void *)0x0);
          if (!bVar3) {
            uVar4 = 0;
            if ((int)uVar19 < TStack_178.ArrayNum) {
              uVar4 = uVar20;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lVar17 = *(longlong *)
                      (*(longlong *)(TStack_178.AllocatorInstance.Data + lVar18 * 8) + 0x1b8);
            if (lVar17 == 0) {
              dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              TStack_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              TStack_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              TStack_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              TStack_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              dStack_b0 = *(double *)(lVar17 + 0x220);
              uStack_a8 = *(undefined4 *)(lVar17 + 0x210);
              uStack_a4 = *(undefined4 *)(lVar17 + 0x214);
              uStack_a0 = *(undefined4 *)(lVar17 + 0x218);
              uStack_9c = *(undefined4 *)(lVar17 + 0x21c);
              TStack_d8._0_4_ = uStack_a8;
              TStack_d8._4_4_ = uStack_a4;
              TStack_d8._8_4_ = uStack_a0;
              TStack_d8._12_4_ = uStack_9c;
              dStack_98 = dStack_b0;
            }
            TStack_d8._s_0.Z = dStack_b0 - (double)this_01->ScaledCapsuleHalfHeight;
            server_msg::NetSyncResponse::NetSyncResponse(&NStack_158,(Arena *)0x0);
            NStack_158._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
            NStack_158._impl_.entity_id_ = this_01->EntityID;
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 0x101);
            if (NStack_158._impl_.position_ == (Vector *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
              if (NStack_158._impl_.position_ != (Vector *)0x0) goto LAB_14bbb4561;
            }
            else {
LAB_14bbb4561:
              DS_Util::SetVector(NStack_158._impl_.position_,(TVector<double> *)&TStack_d8._s_0);
            }
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 2);
            if (NStack_158._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
              if (NStack_158._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb45aa;
            }
            else {
LAB_14bbb45aa:
              pVVar11 = NStack_158._impl_.direction_;
              uVar4 = 0;
              if ((int)uVar19 < TStack_178.ArrayNum) {
                uVar4 = uVar20;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pTVar5 = AActor::GetActorRotation
                                 (*(AActor **)(TStack_178.AllocatorInstance.Data + lVar18 * 8),
                                  &TStack_90);
              DS_Util::SetNetRotate(pVVar11,pTVar5);
            }
            dVar21 = UDS_TimeUtilManager::GetCurrentServerTime();
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 0x3810);
            NStack_158._impl_.move_mode_ = 0;
            NStack_158._impl_.sync_state_ = 0;
            NStack_158._impl_.ticks_ = dVar21;
            if (NStack_158._impl_.skill_info_ == (SkillInfo *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.skill_info_ =
                   google::protobuf::Arena::DefaultConstruct<server_msg::SkillInfo>(pAVar14);
              if (NStack_158._impl_.skill_info_ != (SkillInfo *)0x0) goto LAB_14bbb4668;
            }
            else {
LAB_14bbb4668:
              pSVar2 = NStack_158._impl_.skill_info_;
              FDS_EntityBase::GetCharInfoData(this_01);
              bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&FStackX_10,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar6 = FWeakObjectPtr::Get(&FStackX_10);
                pFVar7 = FDS_CharacterBaseTableRow::GetRef
                                   ((longlong)*(int *)&pUVar6[8].field_0x8,true);
                FStack_168.Data = (FScriptContainerElement *)0x0;
                iStack_160 = (pFVar7->ID_NormalAttack).ArrayNum;
                lVar17 = (longlong)iStack_160;
                _Src = (pFVar7->ID_NormalAttack).AllocatorInstance.Data;
                if (iStack_160 == 0) {
                  iStack_15c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iStack_160,0,&FStack_168,iStack_160,&iStack_15c);
                  memcpy(FStack_168.Data,_Src,lVar17 << 2);
                }
                if (0 < iStack_160) {
                  uVar16 = attackIndex % iStack_160;
                  uVar4 = 0;
                  if ((int)uVar16 < iStack_160) {
                    uVar4 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar4 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar12 = *(int *)(FStack_168.Data + (longlong)(int)uVar16 * 4);
                  (pSVar2->_impl_).skill_id_ = iVar12;
                  (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                       (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x100;
                  if (iVar12 != 0) {
                    pFVar8 = FDS_SkillTableRow::GetRef((longlong)iVar12,true);
                    if (pFVar8->ID_SkillActLevelGroup != 0) {
                      pFVar9 = FDS_SkillActLevelTableRow::GetRef
                                         ((longlong)pFVar8->ID_SkillActLevelGroup,true);
                      (pSVar2->_impl_).start_ticks_ = dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x80;
                      (pSVar2->_impl_).end_ticks_ = (double)pFVar9->AttackAniTime + dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x41;
                      pVVar10 = (pSVar2->_impl_).start_position_;
                      if (pVVar10 == (Vector *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar10 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
                        (pSVar2->_impl_).start_position_ = pVVar10;
                        if (pVVar10 != (Vector *)0x0) goto LAB_14bbb47fa;
                      }
                      else {
LAB_14bbb47fa:
                        DS_Util::SetVector(pVVar10,(TVector<double> *)&TStack_d8._s_0);
                      }
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 4;
                      pVVar11 = (pSVar2->_impl_).start_direction_;
                      if (pVVar11 == (VectorF *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar11 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
                        (pSVar2->_impl_).start_direction_ = pVVar11;
                        if (pVVar11 != (VectorF *)0x0) goto LAB_14bbb4835;
                      }
                      else {
LAB_14bbb4835:
                        uVar4 = 0;
                        if ((int)uVar19 < TStack_178.ArrayNum) {
                          uVar4 = uVar20;
                        }
                        if ((uVar4 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pTVar5 = AActor::GetActorRotation
                                           (*(AActor **)
                                             (TStack_178.AllocatorInstance.Data + lVar18 * 8),
                                            aTStack_78);
                        DS_Util::SetNetRotate(pVVar11,pTVar5);
                      }
                      pUVar6 = FWeakObjectPtr::Get(&FStackX_18);
                      (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,&NStack_158);
                    }
                  }
                }
                if (FStack_168.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_168.Data);
                }
              }
            }
            server_msg::NetSyncResponse::~NetSyncResponse(&NStack_158);
          }
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 1;
        if ((longlong)uVar13 <= lVar18) break;
        uVar15 = TStack_178._8_8_ & 0xffffffff;
      } while( true );
    }
    attackIndex = attackIndex + 1;
    if (0x7ffffffe < attackIndex) {
      attackIndex = 0;
    }
LAB_14bbb490e:
    if (TStack_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_178.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteSkillMsg @ 14bbb7300

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

void __thiscall UDS_AnimOpt_ControlWidget::ExecuteSkillMsg(UDS_AnimOpt_ControlWidget *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  SkillInfo *pSVar2;
  bool bVar3;
  uint uVar4;
  UDS_EntityManager *this_00;
  FDS_EntityBase *this_01;
  TRotator<double> *pTVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *pFVar7;
  FDS_SkillTableRow *pFVar8;
  FDS_SkillActLevelTableRow *pFVar9;
  Vector *pVVar10;
  VectorF *pVVar11;
  int iVar12;
  ulonglong uVar13;
  Arena *pAVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  UObject *pUStackX_20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> TStack_178;
  ForAnyElementType FStack_168;
  int iStack_160;
  int iStack_15c;
  NetSyncResponse NStack_158;
  TVector<double>_u_0 TStack_d8;
  double dStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double dStack_98;
  TRotator<double> TStack_90;
  TRotator<double> aTStack_78 [2];
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    TStack_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_178.ArrayNum = 0;
    TStack_178.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&TStack_178);
    uVar13 = (ulonglong)TStack_178.ArrayNum;
    uVar19 = 0;
    if (0 < TStack_178.ArrayNum) {
      lVar18 = 0;
      uVar15 = uVar13;
      do {
        uVar20 = ~uVar19 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar19 < (int)uVar15) {
          uVar4 = uVar20;
        }
        iVar12 = (int)uVar15;
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar12 = TStack_178.ArrayNum;
        }
        if (*(longlong *)(TStack_178.AllocatorInstance.Data + lVar18 * 8) == 0) goto LAB_14bbb500e;
        uVar4 = 0;
        if ((int)uVar19 < iVar12) {
          uVar4 = uVar20;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = *(UObject **)(TStack_178.AllocatorInstance.Data + lVar18 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FStackX_8.ObjectIndex = 0;
        FStackX_8.ObjectSerialNumber = 0;
        pUStackX_20 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_20);
        this_01 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)FStackX_8);
        if (this_01 != (FDS_EntityBase *)0x0) {
          (**(code **)(this_01->_padding_ + 400))(this_01);
          bVar3 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&FStackX_18,
                             (void *)0x0);
          if (!bVar3) {
            uVar4 = 0;
            if ((int)uVar19 < TStack_178.ArrayNum) {
              uVar4 = uVar20;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            lVar17 = *(longlong *)
                      (*(longlong *)(TStack_178.AllocatorInstance.Data + lVar18 * 8) + 0x1b8);
            if (lVar17 == 0) {
              dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              TStack_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              TStack_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              TStack_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              TStack_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              dStack_b0 = *(double *)(lVar17 + 0x220);
              uStack_a8 = *(undefined4 *)(lVar17 + 0x210);
              uStack_a4 = *(undefined4 *)(lVar17 + 0x214);
              uStack_a0 = *(undefined4 *)(lVar17 + 0x218);
              uStack_9c = *(undefined4 *)(lVar17 + 0x21c);
              TStack_d8._0_4_ = uStack_a8;
              TStack_d8._4_4_ = uStack_a4;
              TStack_d8._8_4_ = uStack_a0;
              TStack_d8._12_4_ = uStack_9c;
              dStack_98 = dStack_b0;
            }
            TStack_d8._s_0.Z = dStack_b0 - (double)this_01->ScaledCapsuleHalfHeight;
            server_msg::NetSyncResponse::NetSyncResponse(&NStack_158,(Arena *)0x0);
            NStack_158._padding_ = (longlong)&___7NetSyncResponse_server_msg__6B_;
            NStack_158._impl_.entity_id_ = this_01->EntityID;
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 0x101);
            if (NStack_158._impl_.position_ == (Vector *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
              if (NStack_158._impl_.position_ != (Vector *)0x0) goto LAB_14bbb4c61;
            }
            else {
LAB_14bbb4c61:
              DS_Util::SetVector(NStack_158._impl_.position_,(TVector<double> *)&TStack_d8._s_0);
            }
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 2);
            if (NStack_158._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
              if (NStack_158._impl_.direction_ != (VectorF *)0x0) goto LAB_14bbb4caa;
            }
            else {
LAB_14bbb4caa:
              pVVar11 = NStack_158._impl_.direction_;
              uVar4 = 0;
              if ((int)uVar19 < TStack_178.ArrayNum) {
                uVar4 = uVar20;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pTVar5 = AActor::GetActorRotation
                                 (*(AActor **)(TStack_178.AllocatorInstance.Data + lVar18 * 8),
                                  &TStack_90);
              DS_Util::SetNetRotate(pVVar11,pTVar5);
            }
            dVar21 = UDS_TimeUtilManager::GetCurrentServerTime();
            NStack_158._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)NStack_158._impl_._has_bits_.has_bits_[0] | 0x3810);
            NStack_158._impl_.move_mode_ = 0;
            NStack_158._impl_.sync_state_ = 0;
            NStack_158._impl_.ticks_ = dVar21;
            if (NStack_158._impl_.skill_info_ == (SkillInfo *)0x0) {
              if (((byte)NStack_158._padding_ & 1) == 0) {
                pAVar14 = (Arena *)(CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_)
                                   & 0xfffffffffffffffe);
              }
              else {
                pAVar14 = *(Arena **)
                           (CONCAT71(NStack_158._padding_._1_7_,(byte)NStack_158._padding_) &
                           0xfffffffffffffffe);
              }
              NStack_158._impl_.skill_info_ =
                   google::protobuf::Arena::DefaultConstruct<server_msg::SkillInfo>(pAVar14);
              if (NStack_158._impl_.skill_info_ != (SkillInfo *)0x0) goto LAB_14bbb4d68;
            }
            else {
LAB_14bbb4d68:
              pSVar2 = NStack_158._impl_.skill_info_;
              FDS_EntityBase::GetCharInfoData(this_01);
              bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&FStackX_10,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar6 = FWeakObjectPtr::Get(&FStackX_10);
                pFVar7 = FDS_CharacterBaseTableRow::GetRef
                                   ((longlong)*(int *)&pUVar6[8].field_0x8,true);
                FStack_168.Data = (FScriptContainerElement *)0x0;
                iStack_160 = (pFVar7->ID_DefaultSkill).ArrayNum;
                lVar17 = (longlong)iStack_160;
                _Src = (pFVar7->ID_DefaultSkill).AllocatorInstance.Data;
                if (iStack_160 == 0) {
                  iStack_15c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iStack_160,0,&FStack_168,iStack_160,&iStack_15c);
                  memcpy(FStack_168.Data,_Src,lVar17 << 2);
                }
                if (0 < iStack_160) {
                  uVar16 = skillIndex % iStack_160;
                  uVar4 = 0;
                  if ((int)uVar16 < iStack_160) {
                    uVar4 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar4 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  iVar12 = *(int *)(FStack_168.Data + (longlong)(int)uVar16 * 4);
                  (pSVar2->_impl_).skill_id_ = iVar12;
                  (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                       (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x100;
                  if (iVar12 != 0) {
                    pFVar8 = FDS_SkillTableRow::GetRef((longlong)iVar12,true);
                    if (pFVar8->ID_SkillActLevelGroup != 0) {
                      pFVar9 = FDS_SkillActLevelTableRow::GetRef
                                         ((longlong)pFVar8->ID_SkillActLevelGroup,true);
                      (pSVar2->_impl_).start_ticks_ = dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x80;
                      (pSVar2->_impl_).end_ticks_ = (double)pFVar9->AttackAniTime + dVar21;
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 0x41;
                      pVVar10 = (pSVar2->_impl_).start_position_;
                      if (pVVar10 == (Vector *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar10 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar14);
                        (pSVar2->_impl_).start_position_ = pVVar10;
                        if (pVVar10 != (Vector *)0x0) goto LAB_14bbb4efa;
                      }
                      else {
LAB_14bbb4efa:
                        DS_Util::SetVector(pVVar10,(TVector<double> *)&TStack_d8._s_0);
                      }
                      (pSVar2->_impl_)._has_bits_.has_bits_[0] =
                           (pSVar2->_impl_)._has_bits_.has_bits_[0] | 4;
                      pVVar11 = (pSVar2->_impl_).start_direction_;
                      if (pVVar11 == (VectorF *)0x0) {
                        pAVar14 = (Arena *)(pSVar2->_padding_ & 0xfffffffffffffffe);
                        if ((pSVar2->_padding_ & 1) != 0) {
                          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
                        }
                        pVVar11 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar14);
                        (pSVar2->_impl_).start_direction_ = pVVar11;
                        if (pVVar11 != (VectorF *)0x0) goto LAB_14bbb4f35;
                      }
                      else {
LAB_14bbb4f35:
                        uVar4 = 0;
                        if ((int)uVar19 < TStack_178.ArrayNum) {
                          uVar4 = uVar20;
                        }
                        if ((uVar4 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pTVar5 = AActor::GetActorRotation
                                           (*(AActor **)
                                             (TStack_178.AllocatorInstance.Data + lVar18 * 8),
                                            aTStack_78);
                        DS_Util::SetNetRotate(pVVar11,pTVar5);
                      }
                      pUVar6 = FWeakObjectPtr::Get(&FStackX_18);
                      (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,&NStack_158);
                    }
                  }
                }
                if (FStack_168.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_168.Data);
                }
              }
            }
            server_msg::NetSyncResponse::~NetSyncResponse(&NStack_158);
          }
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 1;
        if ((longlong)uVar13 <= lVar18) break;
        uVar15 = TStack_178._8_8_ & 0xffffffff;
      } while( true );
    }
    skillIndex = skillIndex + 1;
    if (0x7ffffffe < skillIndex) {
      skillIndex = 0;
    }
LAB_14bbb500e:
    if (TStack_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_178.AllocatorInstance.Data);
    }
  }
  return;
}

// InvertMoveFlag @ 14bbc2d80

void __thiscall UDS_AnimOpt_ControlWidget::InvertMoveFlag(UDS_AnimOpt_ControlWidget *this)

{
  this->MoveInverseFlag = this->MoveInverseFlag == false;
  return;
}

// LoopStop @ 14bbc59a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::LoopStop(UDS_AnimOpt_ControlWidget *this)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  UObject *pUVar3;
  
  if ((this->LoopTimerHandle).Handle != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_01 = UWorld::GetTimerManager(this_00);
    pFVar2 = FTimerManager::FindTimer(this_01,&this->LoopTimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->LoopTimerHandle).Handle);
    }
    (this->LoopTimerHandle).Handle = 0;
  }
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,(this->LoopTimerHandle).Handle != 0);
  }
  this->IsMoveStateFlag = false;
  this->MoveInverseFlag = false;
  return;
}

// NativeDestruct @ 14bbc5d80

void __thiscall UDS_AnimOpt_ControlWidget::NativeDestruct(UDS_AnimOpt_ControlWidget *this)

{
  LoopStop(this);
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativeOnInitialized @ 14bbc5db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::NativeOnInitialized(UDS_AnimOpt_ControlWidget *this)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  UDS_AnimOpt_ControlWidget *pUVar4;
  bool bVar5;
  UWidget *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UDS_AnimOpt_ControlWidget *pUVar9;
  UObject *pUVar10;
  UFunction *pUVar11;
  UCheckBox *this_00;
  USlider *this_01;
  UDS_AnimOpt_ControlWidget *pUVar12;
  FText *pFVar13;
  UDS_AnimOpt_ControlWidget *pUVar14;
  <lambda_1> local_res10 [8];
  <lambda_1> local_res18 [8];
  undefined8 local_res20;
  uint uStack_27c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_278;
  FWeakObjectPtr local_270;
  FName local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  FWeakObjectPtr local_258;
  FName local_250;
  FName local_248;
  undefined8 local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  UWidget *local_220;
  FName local_218;
  FName local_210;
  UWidget *local_208;
  FName local_200;
  FName local_1f8;
  UWidget *local_1f0;
  FName local_1e8;
  FName local_1e0;
  UWidget *local_1d8;
  FName local_1d0;
  UWidget *local_1c8;
  FName local_1c0;
  UDS_AnimOpt_ControlWidget *local_1b8;
  FName *local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  UDS_AnimOpt_ControlWidget *local_190;
  FName *local_188;
  FName local_180;
  UWidget *local_178;
  UWidget *local_170;
  FName local_168;
  UWidget *local_160;
  TSharedPtr<FCulture,1> local_158;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_148;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_138;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FText local_48;
  
  UUserWidget::NativeOnInitialized((UUserWidget *)this);
  ::FName::FName(&local_168,L"ResetButton");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_168);
  pUVar14 = (UDS_AnimOpt_ControlWidget *)0x0;
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UButton_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_160 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->ResetButton).WeakPtr,(FObjectPtr)&local_160);
      pUVar8 = FWeakObjectPtr::Get(&(this->ResetButton).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)strstr("&UDS_AnimOpt_ControlWidget::OnClickReset","::");
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_230,pcVar1);
      lStack_f0 = (ulonglong)uStack_27c << 0x20;
      local_f8 = OnClickReset;
      TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
      __Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
                ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                 &pUVar8[0x23].field_0x10,this,(pmf_ae51bfb5 *)&local_f8,local_230);
    }
  }
  ::FName::FName(&local_228,L"MoveButton");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_228);
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UButton_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_220 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->MoveButton).WeakPtr,(FObjectPtr)&local_220);
      pUVar8 = FWeakObjectPtr::Get(&(this->MoveButton).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)strstr("&UDS_AnimOpt_ControlWidget::OnClickMove","::");
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_218,pcVar1);
      lStack_b0 = (ulonglong)uStack_27c << 0x20;
      local_b8 = OnClickMove;
      TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
      __Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
                ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                 &pUVar8[0x23].field_0x10,this,(pmf_ae51bfb5 *)&local_b8,local_218);
    }
  }
  ::FName::FName(&local_210,L"SkillButton");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_210);
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UButton_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_208 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->SkillButton).WeakPtr,(FObjectPtr)&local_208);
      pUVar8 = FWeakObjectPtr::Get(&(this->SkillButton).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)strstr("&UDS_AnimOpt_ControlWidget::OnClickSkill","::");
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_200,pcVar1);
      lStack_e0 = (ulonglong)uStack_27c << 0x20;
      local_e8 = OnClickSkill;
      TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
      __Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
                ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                 &pUVar8[0x23].field_0x10,this,(pmf_ae51bfb5 *)&local_e8,local_200);
    }
  }
  ::FName::FName(&local_1f8,L"AttackBtn");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_1f8);
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UButton_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_1f0 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->AttackButton).WeakPtr,(FObjectPtr)&local_1f0);
      pUVar8 = FWeakObjectPtr::Get(&(this->AttackButton).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)strstr("&UDS_AnimOpt_ControlWidget::OnClickAttack","::")
      ;
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_1e8,pcVar1);
      lStack_d0 = (ulonglong)uStack_27c << 0x20;
      local_d8 = OnClickAttack;
      TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
      __Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
                ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                 &pUVar8[0x23].field_0x10,this,(pmf_ae51bfb5 *)&local_d8,local_1e8);
    }
  }
  ::FName::FName(&local_1e0,L"LoopStopButton");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_1e0);
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UButton_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_1d8 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->LoopStopButton).WeakPtr,(FObjectPtr)&local_1d8);
      pUVar8 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)
               strstr("&UDS_AnimOpt_ControlWidget::OnClickLoopStop","::");
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_1d0,pcVar1);
      lStack_c0 = (ulonglong)uStack_27c << 0x20;
      local_c8 = OnClickLoopStop;
      TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
      __Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
                ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
                 &pUVar8[0x23].field_0x10,this,(pmf_ae51bfb5 *)&local_c8,local_1d0);
      pUVar8 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
      (**(code **)(*(longlong *)pUVar8 + 0x2b8))(pUVar8,(this->LoopTimerHandle).Handle != 0);
    }
  }
  ::FName::FName(&local_1a0,L"LoopCheckBox");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_1a0);
  if (pUVar6 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UCheckBox_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_1c8 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&(this->LoopCheckBox).WeakPtr,(FObjectPtr)&local_1c8);
      pUVar8 = FWeakObjectPtr::Get(&(this->LoopCheckBox).WeakPtr);
      pUVar9 = (UDS_AnimOpt_ControlWidget *)
               strstr("&UDS_AnimOpt_ControlWidget::OnClickLoopCheckBox","::");
      pUVar12 = pUVar14;
      while (pUVar4 = pUVar9, pUVar4 != (UDS_AnimOpt_ControlWidget *)0x0) {
        pUVar9 = (UDS_AnimOpt_ControlWidget *)
                 strstr((char *)((longlong)&pUVar4->_padding_ + 1),"::");
        pUVar12 = pUVar4;
      }
      pcVar1 = (char *)((longlong)&pUVar12->_padding_ + 2);
      if (((pUVar12 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_1c0,pcVar1);
      if ((this == (UDS_AnimOpt_ControlWidget *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x4c8,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_258.ObjectIndex = 0;
      local_258.ObjectSerialNumber = 0;
      local_250.ComparisonIndex.Value = 0;
      local_250.Number = 0;
      local_248 = local_1c0;
      local_1b8 = this;
      if ((this == (UDS_AnimOpt_ControlWidget *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && InMethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                             ,0x46d,L""), local_1b8 = pUVar14, bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1b8 != (UDS_AnimOpt_ControlWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1b8);
      }
      FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_1b8);
      local_250 = local_248;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_260,&local_a8);
      local_res20 = 0;
      if ((local_250 == (FName)0x0) ||
         (pUVar10 = FWeakObjectPtr::Get(&local_258), pUVar10 == (UObject *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_a8);
LAB_14bbc6662:
        local_1b0 = &local_248;
        `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
        __Internal_BindDynamic<UDS_AnimOpt_ControlWidget>'::__l2::<lambda_1>::operator()(&local_1b0)
        ;
      }
      else {
        pUVar11 = UObject::FindFunction(pUVar10,local_250);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_a8);
        if (pUVar11 == (UFunction *)0x0) goto LAB_14bbc6662;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_260,&local_78);
      local_148.Object = local_258;
      local_148.FunctionName = local_250;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar8[0x48].field_0x8,
                 (FWriteAccessScope *)&local_128);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  *)&pUVar8[0x48].field_0x10,local_res10,Default);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar8[0x48].field_0x8,
                 &local_148);
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
      this_00 = (UCheckBox *)FWeakObjectPtr::Get(&(this->LoopCheckBox).WeakPtr);
      bVar5 = UCheckBox::IsChecked(this_00);
      this->LoopCheckBoxState = bVar5;
    }
  }
  ::FName::FName(&local_1a8,L"LoopInterval");
  pUVar6 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_1a8);
  if (pUVar6 == (UWidget *)0x0) goto LAB_14bbc6987;
  pUVar7 = Z_Construct_UClass_USlider_NoRegister();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) goto LAB_14bbc6987;
  local_170 = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&(this->LoopInterval).WeakPtr,(FObjectPtr)&local_170);
  this_01 = (USlider *)FWeakObjectPtr::Get(&(this->LoopInterval).WeakPtr);
  USlider::SetValue(this_01,this->LoopIntervalValue);
  pUVar8 = FWeakObjectPtr::Get(&(this->LoopInterval).WeakPtr);
  pUVar12 = (UDS_AnimOpt_ControlWidget *)
            strstr("&UDS_AnimOpt_ControlWidget::OnChangedLoopIntervalValue","::");
  while (pUVar9 = pUVar12, pUVar9 != (UDS_AnimOpt_ControlWidget *)0x0) {
    pUVar12 = (UDS_AnimOpt_ControlWidget *)strstr((char *)((longlong)&pUVar9->_padding_ + 1),"::");
    pUVar14 = pUVar9;
  }
  pcVar1 = (char *)((longlong)&pUVar14->_padding_ + 2);
  if (((pUVar14 == (UDS_AnimOpt_ControlWidget *)0x0) || (*pcVar1 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_198,pcVar1);
  local_278.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_270.ObjectIndex = 0;
  local_270.ObjectSerialNumber = 0;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  local_238 = local_198;
  local_190 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_270,(FObjectPtr)&local_190);
  local_268 = local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_278,&local_90);
  local_240 = 0;
  if ((local_268 == (FName)0x0) ||
     (pUVar10 = FWeakObjectPtr::Get(&local_270), pUVar10 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
LAB_14bbc68df:
    local_188 = &local_238;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,float>::
    __Internal_BindDynamic<UDS_AnimOpt_ControlWidget>'::__l2::<lambda_1>::operator()(&local_188);
  }
  else {
    pUVar11 = UObject::FindFunction(pUVar10,local_268);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    if (pUVar11 == (UFunction *)0x0) goto LAB_14bbc68df;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_278,&local_60);
  local_138.Object = local_270;
  local_138.FunctionName = local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar8[0x2a].field_0x20,
             (FWriteAccessScope *)&local_110);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(pUVar8 + 0x2b),local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar8[0x2a].field_0x20,
             &local_138);
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_278.AccessDetector);
LAB_14bbc6987:
  ::FName::FName(&local_180,L"LoopIntervalText");
  local_178 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_180);
  if (local_178 != (UWidget *)0x0) {
    pUVar7 = Z_Construct_UClass_UTextBlock_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(local_178->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_178->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_178);
      }
      FWeakObjectPtr::operator=(&(this->LoopIntervalText).WeakPtr,(FObjectPtr)&local_178);
      pUVar8 = FWeakObjectPtr::Get(&(this->LoopIntervalText).WeakPtr);
      local_158.Object = (FCulture *)0x0;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pcVar3 = *(code **)(*(longlong *)pUVar8 + 0x358);
      pFVar13 = FText::AsNumber(&local_48,this->LoopIntervalValue,(FNumberFormattingOptions *)0x0,
                                &local_158);
      (*pcVar3)(pUVar8,pFVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// NativeTick @ 14bbc6a70

void __thiscall
UDS_AnimOpt_ControlWidget::NativeTick
          (UDS_AnimOpt_ControlWidget *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  float local_res18 [4];
  TVector<double>_u_0 local_28;
  
  local_res18[0] = param_2;
  UDS_UserWidget::NativeTick((UDS_UserWidget *)this,param_1,param_2);
  if (this->IsMoveStateFlag == true) {
    iVar1 = 1;
    if (this->MoveInverseFlag != false) {
      iVar1 = -1;
    }
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z = 0.0;
    local_28._s_0.X = (double)((float)iVar1 * __real_42c80000);
    ADS_AnimOpt_GameMode::EntityMoveMsg(local_res18,(TVector<double> *)&local_28._s_0);
  }
  return;
}

// OnChangedLoopIntervalValue @ 14bbc7ce0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_AnimOpt_ControlWidget::OnChangedLoopIntervalValue(UDS_AnimOpt_ControlWidget *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FText *pFVar4;
  TSharedPtr<FCulture,1> local_28;
  FText local_18;
  
  this->LoopIntervalValue = param_1;
  bVar2 = TWeakObjectPtr<UTextBlock,FWeakObjectPtr>::UEOpEquals(&this->LoopIntervalText,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->LoopIntervalText).WeakPtr);
    local_28.Object = (FCulture *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x358);
    pFVar4 = FText::AsNumber(&local_18,this->LoopIntervalValue,(FNumberFormattingOptions *)0x0,
                             &local_28);
    (*pcVar1)(pUVar3,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickAttack @ 14bbc84e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::OnClickAttack(UDS_AnimOpt_ControlWidget *this)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  UObject *pUVar2;
  code *local_18;
  undefined8 uStack_10;
  
  if (this->LoopCheckBoxState == true) {
    if ((this->LoopTimerHandle).Handle != 0) {
      LoopStop(this);
      return;
    }
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_01 = UWorld::GetTimerManager(this_00);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = ExecuteNormalAttackMsg;
    FTimerManager::SetTimer<UDS_AnimOpt_ControlWidget>
              (this_01,&this->LoopTimerHandle,this,(pmf_ae51bfb5 *)&local_18,this->LoopIntervalValue
               ,true,__real_bf800000);
  }
  ADS_AnimOpt_GameMode::EntityNormalAttackMsg();
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,(this->LoopTimerHandle).Handle != 0);
  }
  return;
}

// OnClickLoopCheckBox @ 14bbc85d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_AnimOpt_ControlWidget::OnClickLoopCheckBox(UDS_AnimOpt_ControlWidget *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  UObject *pUVar3;
  
  this->LoopCheckBoxState = param_1;
  if (param_1) {
    return;
  }
  if ((this->LoopTimerHandle).Handle != 0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_01 = UWorld::GetTimerManager(this_00);
    pFVar2 = FTimerManager::FindTimer(this_01,&this->LoopTimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->LoopTimerHandle).Handle);
    }
    (this->LoopTimerHandle).Handle = 0;
  }
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,(this->LoopTimerHandle).Handle != 0);
  }
  this->IsMoveStateFlag = false;
  this->MoveInverseFlag = false;
  return;
}

// OnClickLoopStop @ 14bbc85f0

void __thiscall UDS_AnimOpt_ControlWidget::OnClickLoopStop(UDS_AnimOpt_ControlWidget *this)

{
  LoopStop(this);
  ADS_AnimOpt_GameMode::EntityIdleMsg();
  return;
}

// OnClickMove @ 14bbc8610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::OnClickMove(UDS_AnimOpt_ControlWidget *this)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  UObject *pUVar2;
  code *local_18;
  undefined8 uStack_10;
  
  if ((this->LoopTimerHandle).Handle != 0) {
    LoopStop(this);
    this->IsMoveStateFlag = false;
    return;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_01 = UWorld::GetTimerManager(this_00);
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = InvertMoveFlag;
  FTimerManager::SetTimer<UDS_AnimOpt_ControlWidget>
            (this_01,&this->LoopTimerHandle,this,(pmf_ae51bfb5 *)&local_18,this->LoopIntervalValue,
             true,__real_bf800000);
  this->IsMoveStateFlag = true;
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,(this->LoopTimerHandle).Handle != 0);
  }
  return;
}

// OnClickReset @ 14bbc8700

void __thiscall UDS_AnimOpt_ControlWidget::OnClickReset(UDS_AnimOpt_ControlWidget *this)

{
  LoopStop(this);
  ADS_AnimOpt_GameMode::EntityIdleMsg();
  ADS_AnimOpt_GameMode::ResetEntity();
  return;
}

// OnClickSkill @ 14bbc8720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AnimOpt_ControlWidget::OnClickSkill(UDS_AnimOpt_ControlWidget *this)

{
  bool bVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  UObject *pUVar2;
  code *local_18;
  undefined8 uStack_10;
  
  if (this->LoopCheckBoxState == true) {
    if ((this->LoopTimerHandle).Handle != 0) {
      LoopStop(this);
      return;
    }
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_01 = UWorld::GetTimerManager(this_00);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = ExecuteSkillMsg;
    FTimerManager::SetTimer<UDS_AnimOpt_ControlWidget>
              (this_01,&this->LoopTimerHandle,this,(pmf_ae51bfb5 *)&local_18,this->LoopIntervalValue
               ,true,__real_bf800000);
  }
  ADS_AnimOpt_GameMode::EntitySkillAttackMsg();
  bVar1 = TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals(&this->LoopStopButton,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->LoopStopButton).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,(this->LoopTimerHandle).Handle != 0);
  }
  return;
}

// Reset @ 14bbdc440

void __thiscall UDS_AnimOpt_ControlWidget::Reset(UDS_AnimOpt_ControlWidget *this)

{
  LoopStop(this);
  ADS_AnimOpt_GameMode::EntityIdleMsg();
  return;
}

