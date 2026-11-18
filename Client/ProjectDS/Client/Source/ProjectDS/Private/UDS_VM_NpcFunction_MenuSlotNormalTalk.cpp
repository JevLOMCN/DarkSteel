// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b6ad430

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotNormalTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotNormalTalk",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotNormalTalk,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotNormalTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotNormalTalk>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton;
}

// UDS_VM_NpcFunction_MenuSlotNormalTalk @ 14b6b2180

UDS_VM_NpcFunction_MenuSlotNormalTalk * __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::UDS_VM_NpcFunction_MenuSlotNormalTalk
          (UDS_VM_NpcFunction_MenuSlotNormalTalk *this,FVTableHelper *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->NpcNormalTalkTableID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotNormalTalk__6B_;
  return this;
}

// UDS_VM_NpcFunction_MenuSlotNormalTalk @ 14b6b21d0

UDS_VM_NpcFunction_MenuSlotNormalTalk * __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::UDS_VM_NpcFunction_MenuSlotNormalTalk
          (UDS_VM_NpcFunction_MenuSlotNormalTalk *this,FObjectInitializer *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->NpcNormalTalkTableID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotNormalTalk__6B_;
  return this;
}

// ~UDS_VM_NpcFunction_MenuSlotNormalTalk @ 14b6b3f50

void __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::~UDS_VM_NpcFunction_MenuSlotNormalTalk
          (UDS_VM_NpcFunction_MenuSlotNormalTalk *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotNormalTalk__6B_;
  UDS_VM_NpcFunction_MenuSlotBase::~UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b6b7460

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotNormalTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotNormalTalk",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotNormalTalk,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotNormalTalk>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotNormalTalk>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotNormalTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotNormalTalk @ 14b6b7dd0

void __cdecl
UDS_VM_NpcFunction_MenuSlotNormalTalk::StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotNormalTalk
          (void)

{
  return;
}

// OnClickButton @ 14bef8980

void __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::OnClickButton
          (UDS_VM_NpcFunction_MenuSlotNormalTalk *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  EDS_QuestStateType EVar5;
  int iVar6;
  FDS_NpcNormalTalkTableRow *pFVar7;
  UDS_NpcFunctionEvent *pUVar8;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *this_02;
  FDS_QuestObjectiveTableRow *this_03;
  UDS_DataSetBase *pUVar9;
  ulong64 uVar10;
  UDS_QuestLocalSave *this_04;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr local_res8;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  local_res8 = (FWeakObjectPtr)this;
  pFVar7 = FDS_NpcNormalTalkTableRow::GetRef((longlong)this->NpcNormalTalkTableID,true);
  bVar4 = FDS_NpcNormalTalkTableRow::IsValid(pFVar7);
  if (bVar4) {
    pUVar8 = UDS_NpcFunctionEvent::GetEvent();
    if (pUVar8 != (UDS_NpcFunctionEvent *)0x0) {
      FDS_EventDelegate<int_const_&>::Broadcast
                (&pUVar8->OnSelectedNormalTalkDelegate,&this->NpcNormalTalkTableID);
    }
    if (pFVar7->TalkType == Once) {
      UDS_QuestLocalSave::GetInst();
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar4) {
        this_04 = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&local_res8);
        UDS_QuestLocalSave::SetHasTalkedToNpc(this_04,this->NpcNormalTalkTableID);
        return;
      }
    }
    else if (pFVar7->TalkType == Quest) {
      this_00 = &this->_padding_;
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if ((bVar4) && (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
        pFVar7 = FDS_NpcNormalTalkTableRow::GetRef((longlong)this->NpcNormalTalkTableID,true);
        bVar4 = FDS_NpcNormalTalkTableRow::IsValid(pFVar7);
        if ((bVar4) &&
           (EVar5 = UDS_QuestManager::GetQuestStateType(pFVar7->TalkTypeCondition),
           EVar5 == Progress)) {
          this_02 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar7->TalkTypeCondition,true);
          bVar4 = FDS_QuestBaseTableRow::IsValid(this_02);
          if (bVar4) {
            pFVar12 = (this_02->ID_QuestObjectiveId).AllocatorInstance.Data;
            iVar1 = (this_02->ID_QuestObjectiveId).ArrayNum;
            pFVar11 = pFVar12 + (longlong)iVar1 * 4;
            local_res20 = pFVar11;
            while( true ) {
              if ((this_02->ID_QuestObjectiveId).ArrayNum != iVar1) {
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              if (pFVar12 == pFVar11) break;
              iVar2 = *(int *)pFVar12;
              this_03 = FDS_QuestObjectiveTableRow::GetRef((longlong)iVar2,true);
              bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_03);
              if ((bVar4) && (this_03->QuestDefineType == TalkAppointNpc)) {
                pUVar9 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                iVar3 = this_03->QuestDefineTarget;
                iVar6 = UDS_DataSetBase::GetEntityTableID(pUVar9);
                pFVar11 = local_res20;
                if ((iVar3 == iVar6) &&
                   (this_03->QuestDefineParameter == pFVar7->ID_DialogueGroupId)) {
                  iVar3 = *(int *)((longlong)local_res8 + 0x188);
                  pUVar9 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                  uVar10 = UDS_DataSetBase::GetEntityID(pUVar9);
                  UDS_QuestManager::OnReqNpcTalk(this_01,uVar10,iVar2,iVar3);
                  pFVar11 = local_res20;
                }
              }
              pFVar12 = pFVar12 + 4;
            }
          }
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf08f90

void __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::OnSetViewModel
          (UDS_VM_NpcFunction_MenuSlotNormalTalk *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FDS_NpcNormalTalkTableRow *this_00;
  UDS_QuestManager *this_01;
  UDS_DataSetBase *this_02;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_NpcFunction_MenuSlotBase::OnSetViewModel((UDS_VM_NpcFunction_MenuSlotBase *)this,&local_28)
  ;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_38,&local_18);
  if (local_38.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      iVar3 = (local_38.Object)->Value;
      this->NpcNormalTalkTableID = iVar3;
      this_00 = FDS_NpcNormalTalkTableRow::GetRef((longlong)iVar3,true);
      bVar1 = FDS_NpcNormalTalkTableRow::IsValid(this_00);
      if (bVar1) {
        FDS_Text::SetTextFromStringID((FDS_Text *)&this->_padding_,&this_00->ID_TalkTitleId);
      }
      this_01 = UDS_QuestManager::GetInst();
      if (this_01 != (UDS_QuestManager *)0x0) {
        iVar3 = this->NpcNormalTalkTableID;
        this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        iVar2 = UDS_DataSetBase::GetEntityTableID(this_02);
        bVar1 = UDS_QuestManager::IsQuestTargetByNpcNormalTalk(this_01,iVar2,iVar3);
        if (bVar1) {
          iVar3 = UDS_QuestManager::GetQuestConditionIconID(this_01,Objective);
          UDS_VM_NpcFunction_MenuSlotBase::SetIconID((UDS_VM_NpcFunction_MenuSlotBase *)this,iVar3);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTalkType_Once @ 14bf0a850

void __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::OnTalkType_Once(UDS_VM_NpcFunction_MenuSlotNormalTalk *this)

{
  bool bVar1;
  UDS_QuestLocalSave *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_QuestLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(local_res10);
    UDS_QuestLocalSave::SetHasTalkedToNpc(this_00,this->NpcNormalTalkTableID);
  }
  return;
}

// OnTalkType_Quest @ 14bf0a8a0

void __thiscall
UDS_VM_NpcFunction_MenuSlotNormalTalk::OnTalkType_Quest(UDS_VM_NpcFunction_MenuSlotNormalTalk *this)

{
  longlong *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  EDS_QuestStateType EVar6;
  int iVar7;
  FDS_NpcNormalTalkTableRow *this_01;
  FDS_QuestBaseTableRow *this_02;
  FDS_QuestObjectiveTableRow *this_03;
  UDS_DataSetBase *pUVar8;
  ulong64 uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  UDS_QuestManager *local_res20;
  
  this_00 = &this->_padding_;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if ((bVar5) && (local_res20 = UDS_QuestManager::GetInst(), local_res20 != (UDS_QuestManager *)0x0)
     ) {
    this_01 = FDS_NpcNormalTalkTableRow::GetRef((longlong)this->NpcNormalTalkTableID,true);
    bVar5 = FDS_NpcNormalTalkTableRow::IsValid(this_01);
    if ((bVar5) &&
       (EVar6 = UDS_QuestManager::GetQuestStateType(this_01->TalkTypeCondition), EVar6 == Progress))
    {
      this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this_01->TalkTypeCondition,true);
      bVar5 = FDS_QuestBaseTableRow::IsValid(this_02);
      if (bVar5) {
        pFVar11 = (this_02->ID_QuestObjectiveId).AllocatorInstance.Data;
        iVar1 = (this_02->ID_QuestObjectiveId).ArrayNum;
        pFVar10 = pFVar11 + (longlong)iVar1 * 4;
        local_res18 = pFVar10;
        while( true ) {
          if ((this_02->ID_QuestObjectiveId).ArrayNum != iVar1) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (pFVar11 == pFVar10) break;
          iVar2 = *(int *)pFVar11;
          this_03 = FDS_QuestObjectiveTableRow::GetRef((longlong)iVar2,true);
          bVar5 = FDS_QuestObjectiveTableRow::IsValid(this_03);
          if ((bVar5) && (this_03->QuestDefineType == TalkAppointNpc)) {
            pUVar8 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            iVar3 = this_03->QuestDefineTarget;
            iVar7 = UDS_DataSetBase::GetEntityTableID(pUVar8);
            pFVar10 = local_res18;
            if ((iVar3 == iVar7) && (this_03->QuestDefineParameter == this_01->ID_DialogueGroupId))
            {
              lVar4 = this->_padding_;
              pUVar8 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
              uVar9 = UDS_DataSetBase::GetEntityID(pUVar8);
              UDS_QuestManager::OnReqNpcTalk(local_res20,uVar9,iVar2,(int)lVar4);
              pFVar10 = local_res18;
            }
          }
          pFVar11 = pFVar11 + 4;
        }
      }
    }
  }
  return;
}

