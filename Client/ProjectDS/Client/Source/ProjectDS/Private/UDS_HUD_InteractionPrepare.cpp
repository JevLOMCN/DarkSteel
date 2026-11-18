// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b4ac490

UClass * __cdecl UDS_HUD_InteractionPrepare::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_InteractionPrepare",
               &Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton,
               StaticRegisterNativesUDS_HUD_InteractionPrepare,0x888,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_InteractionPrepare>,
               InternalVTableHelperCtorCaller<UDS_HUD_InteractionPrepare>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton;
}

// UDS_HUD_InteractionPrepare @ 14b4b1d80

UDS_HUD_InteractionPrepare * __thiscall
UDS_HUD_InteractionPrepare::UDS_HUD_InteractionPrepare
          (UDS_HUD_InteractionPrepare *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->EntityID = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  this->bMainPlayerTalking = false;
  return this;
}

// UDS_HUD_InteractionPrepare @ 14b4b1de0

UDS_HUD_InteractionPrepare * __thiscall
UDS_HUD_InteractionPrepare::UDS_HUD_InteractionPrepare
          (UDS_HUD_InteractionPrepare *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->EntityID = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  this->bMainPlayerTalking = false;
  return this;
}

// ~UDS_HUD_InteractionPrepare @ 14b4b3450

void __thiscall
UDS_HUD_InteractionPrepare::~UDS_HUD_InteractionPrepare(UDS_HUD_InteractionPrepare *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6de0

UClass * __cdecl UDS_HUD_InteractionPrepare::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_InteractionPrepare",
               &Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton,
               StaticRegisterNativesUDS_HUD_InteractionPrepare,0x888,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_InteractionPrepare>,
               InternalVTableHelperCtorCaller<UDS_HUD_InteractionPrepare>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_InteractionPrepare.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_InteractionPrepare @ 14b4b8480

void __cdecl UDS_HUD_InteractionPrepare::StaticRegisterNativesUDS_HUD_InteractionPrepare(void)

{
  return;
}

// CheckMainPlayerState @ 14c06e9c0

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

bool __thiscall UDS_HUD_InteractionPrepare::CheckMainPlayerState(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  EDS_InteractionType local_res8 [8];
  
  if (this->bMainPlayerTalking != true) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_res8[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
      if (bVar1) {
        local_res8[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
        return !bVar1;
      }
    }
  }
  return false;
}

// CheckTargetState @ 14c06ed50

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

bool __thiscall UDS_HUD_InteractionPrepare::CheckTargetState(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  char cVar2;
  FDS_EntityBase *this_00;
  longlong lVar3;
  UDS_CharStateData *pUVar4;
  UDS_StuffGatherData *this_01;
  ulong64 uVar5;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (((this_00 != (FDS_EntityBase *)0x0) &&
      (bVar1 = FDS_EntityBase::IsHiddenPolicy(this_00), !bVar1)) &&
     (bVar1 = FDS_EntityBase::HasInteractionData(this_00), bVar1)) {
    lVar3 = (**(code **)(this_00->_padding_ + 0x1d8))(this_00);
    if ((lVar3 != 0) &&
       (cVar2 = (**(code **)(this_00->_padding_ + 0x1e0))(this_00), cVar2 != '\x02')) {
      return false;
    }
    if (this_00->EntityType != NPC) {
LAB_14c06eecd:
      UDS_StuffGatherData::GetData((ulong64)&local_res18);
      bVar1 = FWeakObjectPtr::IsValid(&local_res18);
      if (!bVar1) {
        return true;
      }
      this_01 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res18);
      uVar5 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      bVar1 = UDS_StuffGatherData::IsInteractingWithEntity(this_01,uVar5);
      return !bVar1;
    }
    FDS_EntityBase::GetCharStateData(this_00);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_res8 = ComeBack|Dead|Battle;
      bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_res8);
      if (!bVar1) {
        bVar1 = FDS_EntityBase::IsMountNPC(this_00);
        if ((bVar1) &&
           (bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,
                               (void *)0x0), !bVar1)) {
          pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_res8 = Mount;
          bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_res8);
          if (bVar1) {
            pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
            local_res8._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
            bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8)
            ;
            if (bVar1) {
              return false;
            }
            pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
            local_res8 = CONCAT44(local_res8._4_4_,0x6d);
            bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8)
            ;
            if (!bVar1) {
              return false;
            }
          }
        }
        bVar1 = FDS_EntityBase::IsHandlingNPC(this_00);
        if (bVar1) {
          pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_res8 = NPCClientControl;
          bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_res8);
          if (bVar1) {
            return false;
          }
        }
        goto LAB_14c06eecd;
      }
    }
  }
  return false;
}

// InitWithData @ 14c08cf50

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
UDS_HUD_InteractionPrepare::InitWithData
          (UDS_HUD_InteractionPrepare *this,FDS_WidgetContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong64 uVar4;
  FDS_EntityBase *this_00;
  UObject *pUVar5;
  UDS_InteractionEvent *pUVar6;
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  bVar2 = UDS_UserWidget::InitWithData((UDS_UserWidget *)this,param_1);
  if (bVar2) {
    ::FName::FName((FName *)(local_e8 + 0x10),"entityID");
    uVar4 = FDS_WidgetContext::GetUint64(param_1,(FName *)(local_e8 + 0x10));
    this->EntityID = uVar4;
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_e8._0_8_ = OnInteractionOverlaped;
      local_e8._8_4_ = 0;
      lStack_90 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
      local_98 = OnInteractionOverlaped;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_InteractionType,unsigned___int64,bool),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_HUD_InteractionPrepare>
                (&this_00->InteractionOverlapDelegate,
                 (UDS_HUD_InteractionPrepare *)(local_e8 + 0x18),(pmf_169409cd *)this);
      UDS_StuffGatherData::GetData((ulong64)&stack0x00000018);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0x00000018);
      if (bVar2) {
        local_e8._8_4_ = 0;
        local_e8._0_8_ = OnInteractionStart;
        lStack_80 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
        local_88 = OnInteractionStart;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000018);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_HUD_InteractionPrepare>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar5[8].field_0x8,(UDS_HUD_InteractionPrepare *)local_c8,
                   (pmf_f0757d48 *)this);
        local_e8._8_4_ = 0;
        local_e8._0_8_ = OnInteractionCancel;
        lStack_70 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
        local_78 = OnInteractionCancel;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000018);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_HUD_InteractionPrepare>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                    *)(pUVar5 + 9),(UDS_HUD_InteractionPrepare *)(local_c8 + 8),(pmf_f0757d48 *)this
                  );
        local_e8._8_4_ = 0;
        local_e8._0_8_ = OnInteractionComplete;
        lStack_60 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
        local_68 = OnInteractionComplete;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000018);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_HUD_InteractionPrepare>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar5[9].field_0x20,(UDS_HUD_InteractionPrepare *)local_b8,
                   (pmf_2f6242aa *)this);
      }
      pUVar6 = UDS_InteractionEvent::GetEvent();
      if (pUVar6 != (UDS_InteractionEvent *)0x0) {
        local_e8._8_4_ = 0;
        local_e8._0_8_ = OnInteractionNpcTalkStart;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->InteractionNpcTalkStartDelegate,this);
        lStack_50 = CONCAT44(local_e8._12_4_,local_e8._8_4_);
        local_58 = (code *)local_e8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_HUD_InteractionPrepare>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar6->InteractionNpcTalkStartDelegate,
                   (UDS_HUD_InteractionPrepare *)(local_b8 + 8),(pmf_f2039e84 *)this);
        local_e8._8_4_ = 0;
        local_e8._0_8_ = OnInteractionNpcTalkEnd;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->InteractionNpcTalkEndDelegate,this);
        lStack_40 = CONCAT44(local_e8._12_4_,local_e8._8_4_);
        local_48 = (code *)local_e8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_HUD_InteractionPrepare>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar6->InteractionNpcTalkEndDelegate,
                   (UDS_HUD_InteractionPrepare *)&stack0xffffffffffffff58,(pmf_f2039e84 *)this);
      }
      bVar2 = FDS_EntityBase::IsMountNPC(this_00);
      if (bVar2) {
        FDS_EntityBase::GetCharStateData(this_00);
        bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&stack0x00000020,
                           (void *)0x0);
        if (!bVar2) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000020);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[7].field_0x20,
                     this);
          local_e8._8_4_ = 0;
          local_e8._0_8_ = OnChangedState;
          lStack_30 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
          local_38 = OnChangedState;
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0x00000020);
          TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_HUD_InteractionPrepare>
                    ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar5[7].field_0x20,(UDS_HUD_InteractionPrepare *)local_e8,
                     (pmf_7f1c773d *)this);
        }
      }
      Refresh(this);
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7048954163610255332>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Hud\\DS_HUD_InteractionPrepare.cpp"
                       ,0x1c,"entityBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// NativeTick @ 14c091420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_HUD_InteractionPrepare::NativeTick
          (UDS_HUD_InteractionPrepare *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  FLatentActionManager *this_01;
  UFunction *pUVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong lStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [16];
  FGeometry FStack_b8;
  FGeometry FStack_78;
  float fStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((char)this->_padding_ == '\0') {
    auStack_c8[0] = 0;
    bVar4 = `UUserWidget::NativeTick'::__l3::<lambda_1>::operator()(auStack_c8);
    if (!bVar4) {
      return;
    }
  }
  GInitRunaway();
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar7 = 0;
    do {
      iVar1 = (int)this->_padding_;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        lStack_d8 = (longlong)(int)uVar8;
        lStack_d0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(lVar7 + this->_padding_);
      (**(code **)(*plVar2 + 0x2e0))(plVar2,param_1,param_2);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  if ((UUMGSequenceTickManager *)this->_padding_ != (UUMGSequenceTickManager *)0x0) {
    UUMGSequenceTickManager::OnWidgetTicked
              ((UUMGSequenceTickManager *)this->_padding_,(UUserWidget *)this);
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    FStack_b8.Size = param_1->Size;
    FStack_b8._8_8_ = *(undefined8 *)&param_1->Scale;
    FStack_b8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    FStack_b8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    FStack_b8.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    FStack_b8.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    FStack_b8._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    FGeometry::FGeometry(&FStack_78);
    FGeometry::operator=(&FStack_78,&FStack_b8);
    fStack_40 = param_2;
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Tick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&FStack_78);
  }
  return;
}

// OnChangedState @ 14c092a60

void __thiscall
UDS_HUD_InteractionPrepare::OnChangedState
          (UDS_HUD_InteractionPrepare *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1
          ,FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10 [2];
  EDS_CharState local_res20;
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = Mount;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res20);
    if ((bVar1) || (param_2->RemovedCharState == Mount)) {
      Refresh(this);
    }
  }
  return;
}

// OnCloseInit @ 14c092f20

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

void __thiscall UDS_HUD_InteractionPrepare::OnCloseInit(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UObject *pUVar2;
  UDS_InteractionEvent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (this_00 != (FDS_EntityBase *)0x0) {
    bVar1 = FDS_EntityBase::IsMountNPC(this_00);
    if (bVar1) {
      FDS_EntityBase::GetCharStateData(this_00);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_res10);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this)
        ;
      }
    }
  }
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 9),this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[9].field_0x20,this);
  }
  pUVar3 = UDS_InteractionEvent::GetEvent();
  if (pUVar3 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkStartDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkEndDelegate,this);
  }
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  return;
}

// OnInteractionCancel @ 14c096230

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
UDS_HUD_InteractionPrepare::OnInteractionCancel(UDS_HUD_InteractionPrepare *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType aEStackX_10 [6];
  
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      aEStackX_10[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
      if (bVar1) {
        aEStackX_10[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c09fbf9;
      }
    }
  }
  uVar2 = 1;
LAB_14c09fbf9:
                    /* WARNING: Could not recover jumptable at 0x00014c09fc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

// OnInteractionComplete @ 14c096240

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
UDS_HUD_InteractionPrepare::OnInteractionComplete
          (UDS_HUD_InteractionPrepare *this,ulong64 *param_1,bool *param_2,bool *param_3)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType aEStackX_10 [6];
  
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      aEStackX_10[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
      if (bVar1) {
        aEStackX_10[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c09fbf9;
      }
    }
  }
  uVar2 = 1;
LAB_14c09fbf9:
                    /* WARNING: Could not recover jumptable at 0x00014c09fc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

// OnInteractionNpcTalkBeginOrEnd @ 14c096250

void __thiscall
UDS_HUD_InteractionPrepare::OnInteractionNpcTalkBeginOrEnd
          (UDS_HUD_InteractionPrepare *this,bool *param_1)

{
  this->bMainPlayerTalking = *param_1;
  Refresh(this);
  return;
}

// OnInteractionNpcTalkEnd @ 14c096270

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
UDS_HUD_InteractionPrepare::OnInteractionNpcTalkEnd(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType local_res8 [2];
  
  this->bMainPlayerTalking = false;
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_res8[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
      if (bVar1) {
        local_res8[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c0962e0;
      }
    }
  }
  uVar2 = 1;
LAB_14c0962e0:
                    /* WARNING: Could not recover jumptable at 0x00014c0962f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

// OnInteractionNpcTalkStart @ 14c096300

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
UDS_HUD_InteractionPrepare::OnInteractionNpcTalkStart(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType local_res8 [2];
  
  this->bMainPlayerTalking = true;
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_res8[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
      if (bVar1) {
        local_res8[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res8);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c096370;
      }
    }
  }
  uVar2 = 1;
LAB_14c096370:
                    /* WARNING: Could not recover jumptable at 0x00014c096380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

// OnInteractionOverlaped @ 14c0963c0

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
UDS_HUD_InteractionPrepare::OnInteractionOverlaped
          (UDS_HUD_InteractionPrepare *this,EDS_InteractionType param_1,ulong64 param_2,bool param_3
          )

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  
  pFVar3 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    Refresh(this);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7048954163610255127>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Hud\\DS_HUD_InteractionPrepare.cpp"
                     ,0xe9,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnInteractionStart @ 14c096430

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
UDS_HUD_InteractionPrepare::OnInteractionStart(UDS_HUD_InteractionPrepare *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType aEStackX_10 [6];
  
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      aEStackX_10[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
      if (bVar1) {
        aEStackX_10[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,aEStackX_10);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c09fbf9;
      }
    }
  }
  uVar2 = 1;
LAB_14c09fbf9:
                    /* WARNING: Could not recover jumptable at 0x00014c09fc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

// Refresh @ 14c09fb90

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

void __thiscall UDS_HUD_InteractionPrepare::Refresh(UDS_HUD_InteractionPrepare *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  undefined8 uVar2;
  EDS_InteractionType local_res10 [6];
  
  bVar1 = CheckTargetState(this);
  if ((bVar1) && (this->bMainPlayerTalking != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->EntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      local_res10[0] = Prepare;
      bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res10);
      if (bVar1) {
        local_res10[0] = Icon;
        bVar1 = FDS_EntityBase::IsMainPlayerInteractionOverlapped(this_00,local_res10);
        uVar2 = 4;
        if (!bVar1) goto LAB_14c09fbf9;
      }
    }
  }
  uVar2 = 1;
LAB_14c09fbf9:
                    /* WARNING: Could not recover jumptable at 0x00014c09fc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,uVar2);
  return;
}

