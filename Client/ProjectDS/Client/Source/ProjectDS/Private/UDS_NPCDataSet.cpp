// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b53dfa0

UClass * __cdecl UDS_NPCDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCDataSet",
               &Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton,
               StaticRegisterNativesUDS_NPCDataSet,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCDataSet>,InternalVTableHelperCtorCaller<UDS_NPCDataSet>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton;
}

// UDS_NPCDataSet @ 14b540230

UDS_NPCDataSet * __thiscall
UDS_NPCDataSet::UDS_NPCDataSet(UDS_NPCDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCDataSet__6B_;
  (this->QuestIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestIDList).ArrayNum = 0;
  (this->QuestIDList).ArrayMax = 0;
  this->BubbleTalkConditionGroupID = 0;
  this->BubbleTalkDistance = 0;
  this->BubbleTalkOutputProbability = 0;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  (this->OwnerNickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnerNickName).Data.ArrayNum = 0;
  (this->OwnerNickName).Data.ArrayMax = 0;
  return this;
}

// ~UDS_NPCDataSet @ 14b541490

void __thiscall UDS_NPCDataSet::~UDS_NPCDataSet(UDS_NPCDataSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCDataSet__6B_;
  pFVar1 = (this->OwnerNickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QuestIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b542b80

UClass * __cdecl UDS_NPCDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCDataSet",
               &Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton,
               StaticRegisterNativesUDS_NPCDataSet,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCDataSet>,InternalVTableHelperCtorCaller<UDS_NPCDataSet>,
               local_res8,UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCDataSet @ 14b543a70

void __cdecl UDS_NPCDataSet::StaticRegisterNativesUDS_NPCDataSet(void)

{
  return;
}

// UDS_NPCDataSet @ 14ba91b40

UDS_NPCDataSet * __thiscall
UDS_NPCDataSet::UDS_NPCDataSet(UDS_NPCDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCDataSet__6B_;
  (this->QuestIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestIDList).ArrayNum = 0;
  (this->QuestIDList).ArrayMax = 0;
  this->BubbleTalkConditionGroupID = 0;
  this->BubbleTalkDistance = 0;
  this->BubbleTalkOutputProbability = 0;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  (this->OwnerNickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnerNickName).Data.ArrayNum = 0;
  (this->OwnerNickName).Data.ArrayMax = 0;
  return this;
}

// GetFunctionData @ 14baaa660

FDS_InteractionFunctionData * __thiscall
UDS_NPCDataSet::GetFunctionData
          (UDS_NPCDataSet *this,FDS_InteractionFunctionData *__return_storage_ptr__,int param_1,
          EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_18 [2];
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)local_18,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (!bVar1) {
    __return_storage_ptr__->InteractionFunctionType = None;
    __return_storage_ptr__->FunctionValue1 = 0;
    __return_storage_ptr__->FunctionValue2 = 0;
    __return_storage_ptr__->NameID = 0;
    __return_storage_ptr__->IconID = 0;
    __return_storage_ptr__->CameraID = 0;
    __return_storage_ptr__->NpcFrameID = 0;
    return __return_storage_ptr__;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(local_18);
  UDS_InteractionData::GetFunctionDataByType(this_00,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetFunctionDataList @ 14baaa700

TArray<FDS_InteractionFunctionData,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCDataSet::GetFunctionDataList
          (UDS_NPCDataSet *this,
          TArray<FDS_InteractionFunctionData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res20;
  
  uVar4 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar4,SUB41(param_1,0));
  piVar1 = &__return_storage_ptr__->ArrayMax;
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar3) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res20);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(pUVar5 + 4);
  _Src = *(void **)&pUVar5[3].field_0x20;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x28);
  }
  return __return_storage_ptr__;
}

// GetFunctionIconID @ 14baaa7e0

int __thiscall
UDS_NPCDataSet::GetFunctionIconID
          (UDS_NPCDataSet *this,int param_1,EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res20;
  FDS_InteractionFunctionData local_38;
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_res20);
  UDS_InteractionData::GetFunctionDataByType(this_00,&local_38,param_2);
  return local_38.IconID;
}

// GetFunctionNameID @ 14baaa860

long64 __thiscall
UDS_NPCDataSet::GetFunctionNameID
          (UDS_NPCDataSet *this,int param_1,EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res20;
  FDS_InteractionFunctionData local_38;
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_res20);
  UDS_InteractionData::GetFunctionDataByType(this_00,&local_38,param_2);
  return local_38.NameID;
}

// GetHandlingType @ 14baab140

EDS_HandlingType __thiscall UDS_NPCDataSet::GetHandlingType(UDS_NPCDataSet *this,int param_1)

{
  bool bVar1;
  EDS_HandlingType EVar2;
  int iVar3;
  UDS_InteractionDataSet *this_00;
  FDS_NpcBaseTableRow *pFVar4;
  FDS_ActionHandlingTableRow *pFVar5;
  FWeakObjectPtr local_res18 [2];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res18);
    iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
    if (0 < iVar3) {
      iVar3 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      pFVar4 = FDS_NpcBaseTableRow::Get((longlong)iVar3,true);
      if (pFVar4 != (FDS_NpcBaseTableRow *)0x0) {
        iVar3 = GetInteractionFunctionValue(this,param_1,Handling);
        if (0 < iVar3) {
          pFVar5 = FDS_ActionHandlingTableRow::Get((longlong)iVar3,true);
          if (pFVar5 != (FDS_ActionHandlingTableRow *)0x0) {
            EVar2 = pFVar5->HandlingType;
            if (pFVar5->HandlingType == HeavyLiftUp) {
              EVar2 = Max;
            }
            return EVar2;
          }
        }
      }
    }
  }
  return Max;
}

// GetInteractionFunctionValue @ 14baab700

int __thiscall
UDS_NPCDataSet::GetInteractionFunctionValue
          (UDS_NPCDataSet *this,int param_1,EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res20;
  FDS_InteractionFunctionData local_38;
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_res20);
  UDS_InteractionData::GetFunctionDataByType(this_00,&local_38,param_2);
  return local_38.FunctionValue1;
}

// GetNpcBasicCameraID @ 14baae550

int __thiscall UDS_NPCDataSet::GetNpcBasicCameraID(UDS_NPCDataSet *this,int param_1)

{
  bool bVar1;
  ulong64 uVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res18 [2];
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)local_res18,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(local_res18);
  return *(int *)&pUVar3[3].field_0x18;
}

// GetNpcCameraID @ 14baae5b0

int __thiscall
UDS_NPCDataSet::GetNpcCameraID(UDS_NPCDataSet *this,int param_1,EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res20;
  FDS_InteractionFunctionData local_38;
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_res20);
  UDS_InteractionData::GetFunctionDataByType(this_00,&local_38,param_2);
  return local_38.CameraID;
}

// GetNpcFrameID @ 14baae630

int __thiscall
UDS_NPCDataSet::GetNpcFrameID(UDS_NPCDataSet *this,int param_1,EDS_InteractionFunctionType param_2)

{
  bool bVar1;
  ulong64 uVar2;
  UDS_InteractionData *this_00;
  FWeakObjectPtr local_res20;
  FDS_InteractionFunctionData local_38;
  
  uVar2 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_InteractionData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_res20);
  UDS_InteractionData::GetFunctionDataByType(this_00,&local_38,param_2);
  return (int)local_38.NpcFrameID;
}

// GetNpcRoleTypeIconID @ 14baae6b0

int __thiscall UDS_NPCDataSet::GetNpcRoleTypeIconID(UDS_NPCDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FDS_NpcBaseTableRow *this_01;
  FDS_NpcRoleTypeTableRow *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
    if (0 < iVar2) {
      iVar2 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar2,true);
      bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
      if ((bVar1) && (this_01->RoleType != None)) {
        pFVar3 = FDS_NpcBaseTableRow::RoleTypeTable(this_01);
        bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
        if (bVar1) {
          return pFVar3->ID_RoleIcon;
        }
      }
    }
  }
  return 0;
}

// GetTriggerIDs @ 14bab0f30

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCDataSet::GetTriggerIDs
          (UDS_NPCDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FDS_NpcBaseTableRow *this_01;
  FWeakObjectPtr local_res10 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
    if (0 < iVar2) {
      iVar2 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar2,true);
      bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
      if (bVar1) {
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  (__return_storage_ptr__,&this_01->ID_Trigger);
      }
    }
  }
  return __return_storage_ptr__;
}

// HasInteractionData @ 14bab2660

bool __thiscall UDS_NPCDataSet::HasInteractionData(UDS_NPCDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
  iVar2 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
  return 0 < iVar2;
}

// HasInteractionFunctionType @ 14bab2700

bool __thiscall
UDS_NPCDataSet::HasInteractionFunctionType(UDS_NPCDataSet *this,EDS_InteractionFunctionType param_1)

{
  bool bVar1;
  UDS_InteractionDataSet *this_00;
  FWeakObjectPtr local_res18 [2];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res18);
  bVar1 = UDS_InteractionDataSet::HasFunctionType(this_00,param_1);
  return bVar1;
}

// HasLing @ 14bab2750

bool __thiscall UDS_NPCDataSet::HasLing(UDS_NPCDataSet *this)

{
  bool bVar1;
  UDS_InteractionDataSet *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
  bVar1 = UDS_InteractionDataSet::HasFunctionType(this_00,LingSkillUse);
  return bVar1;
}

// HasQuest @ 14bab28f0

bool __thiscall UDS_NPCDataSet::HasQuest(UDS_NPCDataSet *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->QuestIDList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->QuestIDList).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// IsCamp @ 14bab6e40

bool __thiscall UDS_NPCDataSet::IsCamp(UDS_NPCDataSet *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_InteractionDataSet *this_00;
  int iVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  FWeakObjectPtr local_res10;
  TArray<FDS_CampBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_res10);
    bVar2 = UDS_InteractionDataSet::HasFunctionType(this_00,CampSitting);
    if (bVar2) {
      bVar2 = false;
      iVar3 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      FDS_CampBaseTableRow::GetAll(&local_28);
      iVar4 = local_28.ArrayNum;
      pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
      uVar5 = local_28._8_8_;
      FVar6.Data = local_28.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar5 != iVar4) {
          `TCheckedPointerIterator<FDS_CampBaseTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res10);
          uVar5 = local_28._8_8_;
        }
        if (FVar6.Data == pFVar1) goto LAB_14bab6eee;
        if (*(int *)(*(longlong *)FVar6.Data + 0x14) == iVar3) break;
        FVar6.Data = FVar6.Data + 8;
      }
      bVar2 = true;
LAB_14bab6eee:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return bVar2;
    }
  }
  return false;
}

// IsGimmickInteraction @ 14bab8820

bool __thiscall UDS_NPCDataSet::IsGimmickInteraction(UDS_NPCDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *pUVar3;
  FDS_NpcBaseTableRow *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar3 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_InteractionDataSet::HasFunctionType(pUVar3,GimmickInteraction);
    if (bVar1) goto LAB_14bab889c;
  }
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  pUVar3 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
  bVar1 = UDS_InteractionDataSet::HasFunctionType(pUVar3,SummonBossAltar);
  if (!bVar1) {
    return false;
  }
LAB_14bab889c:
  iVar2 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
  pFVar4 = FDS_NpcBaseTableRow::Get((longlong)iVar2,true);
  if (pFVar4 == (FDS_NpcBaseTableRow *)0x0) {
    return false;
  }
  return pFVar4->NpcGimmickType != None;
}

// IsHandlingNPC @ 14bab89e0

bool __thiscall UDS_NPCDataSet::IsHandlingNPC(UDS_NPCDataSet *this)

{
  bool bVar1;
  UDS_InteractionDataSet *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
  bVar1 = UDS_InteractionDataSet::HasFunctionType(this_00,Handling);
  return bVar1;
}

// IsInteractionAvailable @ 14bab8dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NPCDataSet::IsInteractionAvailable(UDS_NPCDataSet *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UDS_InteractionDataSet *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_CharStateData *pUVar7;
  FDS_NpcBaseTableRow *pFVar8;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UDS_NPCCampData *this_00;
  UDS_DataBase *this_01;
  UDS_NPCMountData *this_02;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_1c8 [32];
  uint uVar14;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  TArray<FDS_CampBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [8];
  FWeakObjectPtr local_170;
  ulong64 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168[0] = param_1;
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_198);
  bVar2 = FWeakObjectPtr::IsValid(&local_198);
  if (!bVar2) {
    return false;
  }
  pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_198);
  iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(pUVar5);
  if (iVar3 < 1) {
    return false;
  }
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  UDS_CharStateData::GetData((ulong64)&local_170);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_170,(void *)0x0);
  if (bVar2) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCDataSet::IsInteractionAvailable",0x26,Yes);
    uVar14 = 0x1e9;
    goto LAB_14bab8ea4;
  }
  pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_170);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x8000000;
  bVar2 = UDS_CharStateData::HasCharState(pUVar7,(EDS_CharState *)&local_188);
  if (bVar2) {
    return false;
  }
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_198);
  bVar2 = FWeakObjectPtr::IsValid(&local_198);
  if (bVar2) {
    pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_198);
    bVar2 = UDS_InteractionDataSet::HasFunctionType(pUVar5,Handling);
    if (bVar2) {
      pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_170);
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0xc000100;
      bVar2 = UDS_CharStateData::HasCharState(pUVar7,(EDS_CharState *)&local_188);
      goto LAB_14bab953b;
    }
  }
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_198);
  bVar2 = FWeakObjectPtr::IsValid(&local_198);
  if (bVar2) {
    pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_198);
    bVar2 = UDS_InteractionDataSet::HasFunctionType(pUVar5,GimmickInteraction);
    if (!bVar2) goto LAB_14bab8fb2;
LAB_14bab8ff5:
    iVar3 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
    pFVar8 = FDS_NpcBaseTableRow::Get((longlong)iVar3,true);
    if ((pFVar8 != (FDS_NpcBaseTableRow *)0x0) && (pFVar8->NpcGimmickType != None)) {
      TVar9 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_198);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar9.WeakPtr);
      if (pUVar10 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_UDS_NPCGimmickData_NoRegister();
        iVar3 = (int)pUVar11->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar11->_padding_)) goto LAB_14bab9068;
      }
      pUVar10 = (UObject *)0x0;
LAB_14bab9068:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_188);
      bVar2 = TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr> *)&local_190,(void *)0x0
                        );
      if (bVar2) {
        return false;
      }
      pUVar10 = FWeakObjectPtr::Get(&local_190);
      return (bool)pUVar10[10].field_0x1b;
    }
  }
  else {
LAB_14bab8fb2:
    UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_198);
    bVar2 = FWeakObjectPtr::IsValid(&local_198);
    if (bVar2) {
      pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_198);
      bVar2 = UDS_InteractionDataSet::HasFunctionType(pUVar5,SummonBossAltar);
      if (bVar2) goto LAB_14bab8ff5;
    }
  }
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_198);
  bVar2 = FWeakObjectPtr::IsValid(&local_198);
  if (bVar2) {
    pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_198);
    bVar2 = UDS_InteractionDataSet::HasFunctionType(pUVar5,CampSitting);
    if (bVar2) {
      iVar4 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      FDS_CampBaseTableRow::GetAll(&local_188);
      iVar3 = local_188.ArrayNum;
      uVar12 = (ulonglong)local_188.ArrayNum;
      pFVar1 = local_188.AllocatorInstance.Data + uVar12 * 8;
      FVar13.Data = local_188.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar12 != iVar3) {
          `TCheckedPointerIterator<FDS_CampBaseTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_178);
          uVar12 = (ulonglong)(uint)local_188.ArrayNum;
        }
        if (FVar13.Data == pFVar1) {
          if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
          }
          goto LAB_14bab9250;
        }
        if (*(int *)(*(longlong *)FVar13.Data + 0x14) == iVar4) break;
        FVar13.Data = FVar13.Data + 8;
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      TVar9 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_198);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar9.WeakPtr);
      if (pUVar10 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_UDS_NPCCampData_NoRegister();
        iVar3 = (int)pUVar11->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar11->_padding_)) goto LAB_14bab91c8;
      }
      pUVar10 = (UObject *)0x0;
LAB_14bab91c8:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_188);
      bVar2 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_190,(void *)0x0);
      if (bVar2) {
        return false;
      }
      this_00 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_190);
      bVar2 = UDS_NPCCampData::IsInteractionAvailable(this_00,local_168);
      return bVar2;
    }
  }
LAB_14bab9250:
  bVar2 = IsTaming(this);
  if (!bVar2) {
    bVar2 = IsMount(this);
    if ((!bVar2) || (local_168[0] == 0)) {
      bVar2 = HasInteractionData(this);
      if (!bVar2) {
        return false;
      }
      UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
      TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_188);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_188);
      if (!bVar2) {
        return true;
      }
      pUVar5 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_188);
      iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(pUVar5);
      if (iVar3 != 1) {
        return true;
      }
      bVar2 = HasInteractionFunctionType(this,MainQuest);
      if (!bVar2) {
        return true;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCDataSet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
      local_190 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NPCDataSet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_190);
      bVar2 = UDS_QuestManager::IsMainQuestCompletable
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)local_198);
      bVar2 = !bVar2;
LAB_14bab953b:
      if (bVar2) {
        return false;
      }
      return true;
    }
    TVar9 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_190);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar9.WeakPtr);
    if (pUVar10 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UDS_NPCMountData_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar11->_padding_)) goto LAB_14bab940f;
    }
    pUVar10 = (UObject *)0x0;
LAB_14bab940f:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    local_198.ObjectIndex = 0;
    local_198.ObjectSerialNumber = 0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_188);
    bVar2 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (bVar2) {
      return false;
    }
    this_02 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_198);
    bVar2 = UDS_NPCMountData::IsInteractionAvailable(this_02,local_168[0]);
    return bVar2;
  }
  TVar9 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_190);
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar9.WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
LAB_14bab92a8:
    pUVar10 = (UObject *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UDS_NPCMountData_NoRegister();
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) goto LAB_14bab92a8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_188);
  bVar2 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_198,(void *)0x0);
  if (bVar2) {
    return false;
  }
  this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_198);
  UDS_DataBase::GetDataContainerKey(this_01);
  UDS_CharStateData::GetData((ulong64)&local_188);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_188,(void *)0x0);
  if (!bVar2) {
    pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_188);
    local_190.ObjectIndex = 0x87;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar7,(EDS_CharDetailState *)&local_190);
    return bVar2;
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar6 = UDS_LogManager::GetInst();
  local_158._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_158,"UDS_NPCMountData::IsTamingAble",0x1e,Yes);
  uVar14 = 0x62;
LAB_14bab8ea4:
  UDS_LogManager::PrintLog(pUVar6,1,Display,local_158.Ptr,uVar14,L"charStateData is nullptr.");
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// IsMount @ 14baba290

bool __thiscall UDS_NPCDataSet::IsMount(UDS_NPCDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FDS_NpcBaseTableRow *this_01;
  FDS_MountBaseTableRow *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_InteractionDataSet::HasFunctionType(this_00,MountInteraction);
    if (bVar1) {
      iVar2 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar2,true);
      bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
      if (bVar1) {
        pFVar3 = FDS_NpcBaseTableRow::ID_MountBaseTable(this_01);
        if (((this_01->ID_MountBase != 0) && (pFVar3->ID_NpcBase != 0)) &&
           (this_01->ID == pFVar3->ID_NpcBase)) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsTaming @ 14babae70

bool __thiscall UDS_NPCDataSet::IsTaming(UDS_NPCDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FDS_NpcBaseTableRow *pFVar3;
  FDS_MountBaseTableRow *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_InteractionDataSet::HasFunctionType(this_00,Taming);
    if (bVar1) {
      iVar2 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      pFVar3 = FDS_NpcBaseTableRow::Get((longlong)iVar2,true);
      if ((pFVar3 != (FDS_NpcBaseTableRow *)0x0) && (pFVar3->ID_MountBase != 0)) {
        pFVar4 = FDS_MountBaseTableRow::Get((longlong)pFVar3->ID_MountBase,true);
        return pFVar4 != (FDS_MountBaseTableRow *)0x0;
      }
    }
  }
  return false;
}

// OnAdded @ 14babcc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCDataSet::OnAdded(UDS_NPCDataSet *this)

{
  code *pcVar1;
  EDS_EntityType EVar2;
  bool bVar3;
  int iVar4;
  FDS_NpcBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_InteractionDataSet *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_9d8 [32];
  FWeakObjectPtr local_998;
  FWeakObjectPtr local_990;
  UObject *local_988;
  UObject *local_980;
  UObject *local_978;
  UObject *local_970;
  UObject *local_968 [2];
  undefined1 local_958 [128];
  undefined1 local_8d8 [128];
  undefined1 local_858 [128];
  undefined1 local_7d8 [128];
  undefined1 local_758 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  EVar2 = UDS_DataSetBase::GetEntityType((UDS_DataSetBase *)this);
  if (EVar2 == NPC) {
    iVar4 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
    pFVar5 = FDS_NpcBaseTableRow::Get((longlong)iVar4,true);
    if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
        local_6d8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_6d8,"UDS_NPCDataSet::OnAdded",0x17,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_6d8.Ptr,0x44,L"npcBaseTable is nullptr. (%d)");
        if ((void *)local_6d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_6d8._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4946445600657768517>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\NPC\\DS_NPCData.cpp"
                         ,0x45,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (0 < pFVar5->ID_NpcBattle) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_NPCBattleData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_958,pUVar8);
        local_958._8_8_ = pUVar7;
        local_988 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_958);
        if (local_958._64_8_ != 0) {
          plVar10 = (longlong *)(local_958 + 0x50);
          if ((longlong *)local_958._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_958._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_988 == (UObject *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_5b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_5b8,"UDS_NPCDataSet::OnAdded",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_5b8.Ptr,0x4c,L"Failed to create NPCData");
          if ((void *)local_5b8._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_5b8._padding_);
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_988);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,2,(TObjectPtr<UDS_DataBase>)&local_988);
      }
      UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
      TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_998);
      bVar3 = FWeakObjectPtr::IsValid(&local_998);
      if (bVar3) {
        pUVar9 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_998);
        iVar4 = UDS_InteractionDataSet::GetInteractionDataCount(pUVar9);
        if (0 < iVar4) {
          SetNpcInteractionData(this);
        }
      }
      if (pFVar5->NpcGimmickType != None) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_NPCGimmickData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_8d8,pUVar8);
        local_8d8._8_8_ = pUVar7;
        local_980 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_8d8);
        if (local_8d8._64_8_ != 0) {
          plVar10 = (longlong *)(local_8d8 + 0x50);
          if ((longlong *)local_8d8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_8d8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_980 == (UObject *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_498._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_498,"UDS_NPCDataSet::OnAdded",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_498.Ptr,0x59,L"Failed to create NPCData");
          if ((void *)local_498._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_498._padding_);
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_980);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,3,(TObjectPtr<UDS_DataBase>)&local_980);
      }
      UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
      TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_990);
      bVar3 = FWeakObjectPtr::IsValid(&local_990);
      if (bVar3) {
        pUVar9 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_990);
        bVar3 = UDS_InteractionDataSet::HasFunctionType(pUVar9,LingSkillUse);
        if (bVar3) {
          pUVar7 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar7,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar8 = Z_Construct_UClass_UDS_NPCLingData_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_858,pUVar8);
          local_858._8_8_ = pUVar7;
          local_978 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_858);
          if (local_858._64_8_ != 0) {
            plVar10 = (longlong *)(local_858 + 0x50);
            if ((longlong *)local_858._104_8_ != (longlong *)0x0) {
              plVar10 = (longlong *)local_858._104_8_;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          if (local_978 == (UObject *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_378._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_378,"UDS_NPCDataSet::OnAdded",0x17,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_378.Ptr,0x5f,L"Failed to create NPCData");
            if ((void *)local_378._padding_ == (void *)0x0) {
              return;
            }
            FMemory::Free((void *)local_378._padding_);
            return;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(local_978);
          }
          UDS_DataSetBase::AddData((UDS_DataSetBase *)this,5,(TObjectPtr<UDS_DataBase>)&local_978);
        }
      }
      bVar3 = IsTaming(this);
      if ((bVar3) || (bVar3 = IsMount(this), bVar3)) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_NPCMountData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_7d8,pUVar8);
        local_7d8._8_8_ = pUVar7;
        local_970 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_7d8);
        if (local_7d8._64_8_ != 0) {
          plVar10 = (longlong *)(local_7d8 + 0x50);
          if ((longlong *)local_7d8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_7d8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_970 == (UObject *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"UDS_NPCDataSet::OnAdded",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_258.Ptr,0x65,L"Failed to create NPCData");
          if ((void *)local_258._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_258._padding_);
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_970);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,6,(TObjectPtr<UDS_DataBase>)&local_970);
      }
      bVar3 = HasInteractionFunctionType(this,Handling);
      if (bVar3) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_NPCObjectHandlingData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_758,pUVar8);
        local_758._8_8_ = pUVar7;
        local_968[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_758)
        ;
        if (local_758._64_8_ != 0) {
          plVar10 = (longlong *)(local_758 + 0x50);
          if ((longlong *)local_758._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_758._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_968[0] == (UObject *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_NPCDataSet::OnAdded",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x6b,L"Failed to create NPCData");
          if ((void *)local_138._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_138._padding_);
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_968[0]);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,8,(TObjectPtr<UDS_DataBase>)local_968);
      }
      this->BubbleTalkDistance = pFVar5->BubbleTalkDistance;
      this->BubbleTalkConditionGroupID = pFVar5->BubbleTalkConditionGroupID;
      this->BubbleTalkOutputProbability = pFVar5->BubbleTalkOutputProbability;
    }
  }
  return;
}

// SetNpcInteractionData @ 14bacd8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCDataSet::SetNpcInteractionData(UDS_NPCDataSet *this)

{
  EDS_InteractionFunctionType EVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  UDS_InteractionDataSet *this_00;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  ulong64 uVar9;
  UClass *pUVar10;
  UDS_InteractionData *this_01;
  FDS_QuestBaseNpcTableRow *pFVar11;
  longlong *plVar12;
  ulonglong uVar13;
  EDS_InteractionFunctionType *pEVar14;
  FWeakObjectPtr *pFVar15;
  ForAnyElementType FVar16;
  EDS_InteractionFunctionType *pEVar17;
  undefined1 auStackY_298 [32];
  uint uVar18;
  undefined1 local_258 [8];
  FWeakObjectPtr local_250;
  EDS_InteractionFunctionType *local_248;
  UObject *local_240;
  uint local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr *local_220;
  TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_218;
  FWeakObjectPtr *local_208;
  FDS_InteractionFunctionData local_200;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_230);
  bVar4 = FWeakObjectPtr::IsValid(&local_230);
  if (bVar4) {
    this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_230);
    UDS_InteractionDataSet::GetAllInteractionData(this_00,&local_218);
    local_238 = local_218.ArrayNum;
    uVar13 = (ulonglong)(int)local_238;
    pFVar15 = (FWeakObjectPtr *)(local_218.AllocatorInstance.Data + uVar13 * 8);
    FVar16.Data = local_218.AllocatorInstance.Data;
    local_208 = pFVar15;
    while( true ) {
      local_220 = (FWeakObjectPtr *)FVar16.Data;
      if (local_218.ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_258);
      }
      if ((FWeakObjectPtr *)FVar16.Data == pFVar15) break;
      local_250 = *(FWeakObjectPtr *)FVar16.Data;
      bVar4 = FWeakObjectPtr::IsValid(&local_250);
      if (bVar4) {
        pUVar6 = FWeakObjectPtr::Get(&local_250);
        iVar2 = *(int *)(pUVar6 + 4);
        pEVar17 = *(EDS_InteractionFunctionType **)&pUVar6[3].field_0x20;
        local_248 = pEVar17 + (longlong)iVar2 * 0x28;
        pEVar14 = local_248;
        while( true ) {
          if (*(int *)(pUVar6 + 4) != iVar2) {
            `TCheckedPointerIterator<FDS_InteractionFunctionData_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_258);
          }
          pFVar15 = local_208;
          FVar16.Data = (FScriptContainerElement *)local_220;
          if (pEVar17 == pEVar14) break;
          EVar1 = *pEVar17;
          if (EVar1 == CampSitting) {
            bVar4 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,4);
            if ((bVar4) && (pUVar7 = UDS_LogManager::GetInst(), pUVar7 != (UDS_LogManager *)0x0)) {
              pUVar7 = UDS_LogManager::GetInst();
              FWeakObjectPtr::Get(&local_250);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_NPCDataSet::SetNpcInteractionData",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar7,1,Error,local_158.Ptr,0x1d1,
                         L"NPCCampData already created!! InteractionID: %d");
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
            pUVar8 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar8,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = Z_Construct_UClass_UDS_NPCCampData_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_1d8,pUVar10);
            local_1d8._8_8_ = pUVar8;
            pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
            if (local_1d8._64_8_ != 0) {
              plVar12 = (longlong *)(local_1d8 + 0x50);
              if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_1d8._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (pUVar8 == (UObject *)0x0) {
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 != (UDS_LogManager *)0x0) {
                pUVar7 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NPCDataSet::SetNpcInteractionData",0x25,Yes);
                uVar18 = 0x1d4;
                goto LAB_14bacde86;
              }
              goto LAB_14bacdeb1;
            }
            local_240 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar8);
            }
            UDS_DataSetBase::AddData((UDS_DataSetBase *)this,4,(TObjectPtr<UDS_DataBase>)&local_240)
            ;
            pEVar17 = pEVar17 + 0x28;
            pEVar14 = local_248;
          }
          else if ((EVar1 == RepeatQuest) || (EVar1 == MainQuest)) {
LAB_14bacda05:
            if ((0 < (this->QuestIDList).ArrayNum) &&
               (pUVar7 = UDS_LogManager::GetInst(), pUVar7 != (UDS_LogManager *)0x0)) {
              pUVar7 = UDS_LogManager::GetInst();
              FWeakObjectPtr::Get(&local_250);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_NPCDataSet::SetNpcInteractionData",0x25,Yes);
              UDS_LogManager::PrintLog
                        (pUVar7,1,Error,local_158.Ptr,0x1bc,
                         L"QuestIDList already added!! InteractionID: %d");
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
            EVar1 = *pEVar17;
            pUVar8 = FWeakObjectPtr::Get(&local_250);
            uVar3 = *(undefined4 *)&pUVar8[2].field_0x8;
            uVar9 = UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
            UDS_InteractionData::GetData((ulong64)&local_228,uVar9,SUB41(uVar3,0));
            bVar4 = FWeakObjectPtr::IsValid(&local_228);
            if (bVar4) {
              this_01 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_228);
              UDS_InteractionData::GetFunctionDataByType(this_01,&local_200,EVar1);
              iVar5 = local_200.FunctionValue1;
            }
            else {
              iVar5 = 0;
            }
            pEVar14 = local_248;
            if ((0 < iVar5) &&
               (pFVar11 = FDS_QuestBaseNpcTableRow::Get((longlong)iVar5,true), pEVar14 = local_248,
               pFVar11 != (FDS_QuestBaseNpcTableRow *)0x0)) {
              TArray<int,TSizedDefaultAllocator<32>_>::operator=
                        (&this->QuestIDList,&pFVar11->ID_QuestBaseRequest);
              pEVar14 = local_248;
            }
LAB_14bacdc43:
            pEVar17 = pEVar17 + 0x28;
          }
          else {
            if (EVar1 != Shop) {
              if (EVar1 == Quest) goto LAB_14bacda05;
              goto LAB_14bacdc43;
            }
            pUVar8 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar8,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = Z_Construct_UClass_UDS_NPCShopData_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_1d8,pUVar10);
            local_1d8._8_8_ = pUVar8;
            pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
            if (local_1d8._64_8_ != 0) {
              plVar12 = (longlong *)(local_1d8 + 0x50);
              if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_1d8._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (pUVar8 == (UObject *)0x0) {
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 != (UDS_LogManager *)0x0) {
                pUVar7 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NPCDataSet::SetNpcInteractionData",0x25,Yes);
                uVar18 = 0x1af;
LAB_14bacde86:
                UDS_LogManager::PrintLog
                          (pUVar7,1,Warning,local_158.Ptr,uVar18,L"Failed to create NPCData");
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              goto LAB_14bacdeb1;
            }
            local_240 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar8);
            }
            UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)&local_240)
            ;
            pUVar8 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar8,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = Z_Construct_UClass_UDS_NPCSellData_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_1d8,pUVar10);
            local_1d8._8_8_ = pUVar8;
            pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
            if (local_1d8._64_8_ != 0) {
              plVar12 = (longlong *)(local_1d8 + 0x50);
              if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_1d8._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (pUVar8 == (UObject *)0x0) {
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 != (UDS_LogManager *)0x0) {
                pUVar7 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_NPCDataSet::SetNpcInteractionData",0x25,Yes);
                uVar18 = 0x1b0;
                goto LAB_14bacde86;
              }
              goto LAB_14bacdeb1;
            }
            local_240 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar8);
            }
            UDS_DataSetBase::AddData((UDS_DataSetBase *)this,1,(TObjectPtr<UDS_DataBase>)&local_240)
            ;
            pEVar17 = pEVar17 + 0x28;
            pEVar14 = local_248;
          }
        }
      }
      FVar16.Data = FVar16.Data + 8;
      uVar13 = (ulonglong)local_238;
    }
LAB_14bacdeb1:
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  return;
}

