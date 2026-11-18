// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 119

// StaticClass @ 14b573410

UClass * __cdecl UDS_QuestManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestManager",
               &Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestManager,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuestManager>,
               InternalVTableHelperCtorCaller<UDS_QuestManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton;
}

// UDS_QuestManager @ 14b575640

UDS_QuestManager * __thiscall
UDS_QuestManager::UDS_QuestManager(UDS_QuestManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestManager__6B_;
  *(undefined8 *)&this->QuestCoordinateMap = 0;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x48 = 0;
  *(undefined8 *)&this->QuestInstanceLeaveGraceMap = 0;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x48 = 0;
  *(undefined8 *)&this->QuestConditionIconID_Map = 0;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x20 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x48 = 0;
  *(undefined8 *)&this->QuestConditionIconResourceColorID_Map = 0;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x20 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x48 = 0;
  *(undefined8 *)&this->CompletedQuest_Map = 0;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x8 = 0;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x20 = 0;
  this->TraceQuestID = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x28 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x34 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x40 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x48 = 0;
  this->RegisterQuestComplateEventQuestID = 0;
  *(undefined8 *)&this->QuestNewAbleCompleteSymbolMap = 0;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 = 0;
  return this;
}

// UDS_QuestManager @ 14b5757f0

UDS_QuestManager * __thiscall
UDS_QuestManager::UDS_QuestManager(UDS_QuestManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestManager__6B_;
  *(undefined8 *)&this->QuestCoordinateMap = 0;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestCoordinateMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x48 = 0;
  *(undefined8 *)&this->QuestInstanceLeaveGraceMap = 0;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestInstanceLeaveGraceMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x48 = 0;
  *(undefined8 *)&this->QuestConditionIconID_Map = 0;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x20 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestConditionIconID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x48 = 0;
  *(undefined8 *)&this->QuestConditionIconResourceColorID_Map = 0;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x20 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestConditionIconResourceColorID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x48 = 0;
  *(undefined8 *)&this->CompletedQuest_Map = 0;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x8 = 0;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x20 = 0;
  this->TraceQuestID = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x28 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x34 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CompletedQuest_Map).field_0x40 = 0;
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x48 = 0;
  this->RegisterQuestComplateEventQuestID = 0;
  *(undefined8 *)&this->QuestNewAbleCompleteSymbolMap = 0;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 = 0;
  return this;
}

// ~UDS_QuestManager @ 14b576070

void __thiscall UDS_QuestManager::~UDS_QuestManager(UDS_QuestManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuestManager__6B_;
  *(undefined4 *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestNewAbleCompleteSymbolMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->QuestNewAbleCompleteSymbolMap);
  *(undefined4 *)&(this->CompletedQuest_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompletedQuest_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CompletedQuest_Map);
  *(undefined4 *)&(this->QuestConditionIconResourceColorID_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestConditionIconResourceColorID_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestConditionType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestConditionType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->QuestConditionIconResourceColorID_Map);
  *(undefined4 *)&(this->QuestConditionIconID_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestConditionIconID_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestConditionType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_QuestConditionType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->QuestConditionIconID_Map);
  *(undefined4 *)&(this->QuestInstanceLeaveGraceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestInstanceLeaveGraceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuestInstanceLeaveGraceMap);
  *(undefined4 *)&(this->QuestCoordinateMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestCoordinateMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuestCoordinateMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b576d00

UClass * __cdecl UDS_QuestManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestManager",
               &Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestManager,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuestManager>,
               InternalVTableHelperCtorCaller<UDS_QuestManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestManager.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestManager @ 14b576f00

void __cdecl UDS_QuestManager::StaticRegisterNativesUDS_QuestManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_QuestManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeIsland @ 14b577e30

void __cdecl UDS_QuestManager::execOnChangeIsland(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeIsland((UDS_QuestManager *)param_1,puVar2);
  return;
}

// execOnChangeItemDataSet @ 14b577ed0

void __cdecl
UDS_QuestManager::execOnChangeItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeItemDataSet((UDS_QuestManager *)param_1,local_res10);
  return;
}

// operator() @ 14baee380

bool __thiscall
`UDS_QuestManager::GetNpcActiveQuestIDs'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  bool bVar1;
  EDS_QuestConditionType EVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UObject *pUVar4;
  FDS_QuestBaseTableRow *pFVar5;
  FDS_QuestRepeatTableRow *pFVar6;
  FDS_QuestLocalTableRow *pFVar7;
  int iVar8;
  longlong lVar9;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  undefined8 local_28 [2];
  
  lVar9 = (longlong)param_2;
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_38);
  bVar1 = FWeakObjectPtr::IsValid(&local_38);
  iVar8 = 0;
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_38);
    uVar3 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_30,uVar3,SUB41(param_2,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_30);
    if (bVar1) {
      local_res20 = local_30;
      goto LAB_14baee416;
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
LAB_14baee416:
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar4[2].field_0x19 == '\0') {
      pFVar5 = FDS_QuestBaseTableRow::GetRef(lVar9,true);
      bVar1 = FDS_QuestBaseTableRow::IsValid(pFVar5);
      if (bVar1) {
        if (pFVar5->QuestType == Local) {
          pFVar7 = FDS_QuestLocalTableRow::GetRef(lVar9,true);
          bVar1 = FDS_QuestLocalTableRow::IsValid(pFVar7);
          iVar8 = 0;
          if (bVar1) {
            iVar8 = pFVar7->ID_AcceptNpc;
          }
        }
        else if (pFVar5->QuestType == Repeat) {
          pFVar6 = FDS_QuestRepeatTableRow::GetRef(lVar9,true);
          bVar1 = FDS_QuestRepeatTableRow::IsValid(pFVar6);
          if (bVar1) {
            iVar8 = pFVar6->ID_AcceptNpc;
          }
        }
      }
    }
    else {
      if (pUVar4[2].field_0x19 != '\x01') {
        return false;
      }
      pFVar5 = FDS_QuestBaseTableRow::GetRef(lVar9,true);
      bVar1 = FDS_QuestBaseTableRow::IsValid(pFVar5);
      if (bVar1) {
        if (pFVar5->QuestType == Local) {
          pFVar7 = FDS_QuestLocalTableRow::GetRef(lVar9,true);
          bVar1 = FDS_QuestLocalTableRow::IsValid(pFVar7);
          iVar8 = 0;
          if (bVar1) {
            iVar8 = pFVar7->ID_CompleteNpc;
          }
        }
        else if (pFVar5->QuestType == Repeat) {
          pFVar6 = FDS_QuestRepeatTableRow::GetRef(lVar9,true);
          bVar1 = FDS_QuestRepeatTableRow::IsValid(pFVar6);
          if (bVar1) {
            iVar8 = pFVar6->ID_CompleteNpc;
          }
        }
      }
    }
    if (iVar8 == param_1) {
      return true;
    }
  }
  else {
    pFVar5 = FDS_QuestBaseTableRow::GetRef(lVar9,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(pFVar5);
    if (bVar1) {
      EVar2 = UDS_QuestManager::GetQuestConditionTypeByNpc
                        (*(UDS_QuestManager **)this,param_2,param_1);
      return EVar2 == AbleAccept;
    }
  }
  return false;
}

// operator() @ 14baee560

bool __thiscall
`UDS_QuestManager::SortQuestList'::__l2::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  UDS_QuestManager *this_00;
  EDS_QuestType EVar5;
  EDS_QuestType EVar6;
  EDS_QuestConditionSortOrder EVar7;
  EDS_QuestConditionSortOrder EVar8;
  ulonglong uVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  puVar4 = *(undefined8 **)this;
  iVar10 = 0;
  uVar3 = *(uint *)(puVar4 + 1);
  uVar9 = (ulonglong)(int)uVar3;
  pcVar11 = (char *)*puVar4;
  pcVar1 = pcVar11 + uVar9;
  while( true ) {
    if (*(int *)(puVar4 + 1) != (int)uVar9) {
      `TCheckedPointerIterator<enum_EDS_QuestSortType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pcVar11 == pcVar1) break;
    cVar2 = *pcVar11;
    if (cVar2 == '\x01') {
      this_00 = *(UDS_QuestManager **)((longlong)this + 8);
      EVar7 = UDS_QuestManager::GetQuestConditionSortOrder(this_00,*param_2);
      EVar8 = UDS_QuestManager::GetQuestConditionSortOrder(this_00,*param_1);
      bVar13 = EVar8 < EVar7;
      bVar12 = EVar8 == EVar7;
      if (bVar12) {
        iVar10 = 0;
      }
      else {
LAB_14baee622:
        iVar10 = -1;
        if (!bVar13 && !bVar12) {
          iVar10 = 1;
        }
      }
LAB_14baee62f:
      iVar10 = iVar10 * **(int **)((longlong)this + 0x10);
      bVar13 = iVar10 == 0;
      if (!bVar13) goto LAB_14baee648;
    }
    else {
      if (cVar2 == '\x02') {
        EVar5 = UDS_QuestManager::GetQuestType(*param_2);
        EVar6 = UDS_QuestManager::GetQuestType(*param_1);
        bVar13 = EVar6 < EVar5;
        bVar12 = EVar6 == EVar5;
        if (!bVar12) goto LAB_14baee622;
        iVar10 = 0;
        goto LAB_14baee62f;
      }
      if (cVar2 == '\x03') {
        if (*param_1 == *param_2) {
          iVar10 = 0;
        }
        else {
          iVar10 = -1;
          if (*param_2 <= *param_1) {
            iVar10 = 1;
          }
        }
        goto LAB_14baee62f;
      }
    }
    uVar9 = (ulonglong)uVar3;
    pcVar11 = pcVar11 + 1;
  }
  bVar13 = iVar10 == 0;
LAB_14baee648:
  return !bVar13 && -1 < iVar10;
}

// AddQuestCoordinate @ 14baf11f0

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
UDS_QuestManager::AddQuestCoordinate
          (UDS_QuestManager *this,int param_1,int param_2,TVector<double> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  UWorld *this_00;
  UClass *pUVar3;
  ADS_QuestCoordinate *pAVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_158 [32];
  ADS_QuestCoordinate *local_138;
  TObjectPtr<ADS_QuestCoordinate>_u_0 local_130;
  TPairInitializer<FDS_QuestCoordinate_Key_&,TObjectPtr<ADS_QuestCoordinate>_&> local_128;
  ADS_QuestCoordinate **local_118;
  undefined1 local_108 [112];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar7 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - param_2 ^ uVar7 << 8;
  uVar10 = (param_2 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar5 ^ uVar10 >> 0xc;
  uVar5 = (uVar5 - uVar10) - uVar7 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar5 ^ uVar10 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->QuestCoordinateMap).field_0x8 !=
      *(int *)&(this->QuestCoordinateMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->QuestCoordinateMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->QuestCoordinateMap).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->QuestCoordinateMap).field_0x48 - 1U &
                              ((uVar10 - uVar5) - uVar7 ^ uVar5 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&(this->QuestCoordinateMap).field_0x0;
      do {
        lVar2 = (longlong)iVar9;
        if (((*(int *)(lVar1 + lVar2 * 0x18) == param_1) &&
            (*(int *)(lVar1 + 4 + lVar2 * 0x18) != 0)) && (param_2 != 0)) {
          if (iVar9 != -1) {
            return;
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x10 + lVar2 * 0x18);
      } while (iVar9 != -1);
    }
  }
  local_98.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&param_3->field0_0x0;
  local_98.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  local_98.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  local_98.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc)
  ;
  local_98.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_98.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
  local_98.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_130._0_4_ = param_1;
  local_130._4_4_ = param_2;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pUVar3 = Z_Construct_UClass_ADS_QuestCoordinate_NoRegister();
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_108);
  local_108[0x32] = local_108[0x32] | 4;
  local_108._16_8_ = (AActor *)0x0;
  local_108._24_8_ = (APawn *)0x0;
  local_108[0x30] = AlwaysSpawn;
  local_108[0x31] = MultiplyWithRoot;
  if ((pUVar3 != (UClass *)0x0) &&
     (pAVar4 = (ADS_QuestCoordinate *)
               UWorld::SpawnActor(this_00,pUVar3,&local_98,(FActorSpawnParameters *)local_108),
     pAVar4 != (ADS_QuestCoordinate *)0x0)) {
    pUVar3 = Z_Construct_UClass_ADS_QuestCoordinate_NoRegister();
    iVar9 = (int)pUVar3->_padding_;
    if ((iVar9 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar3->_padding_)) goto LAB_14baf13c9;
  }
  pAVar4 = (ADS_QuestCoordinate *)0x0;
LAB_14baf13c9:
  if (local_108._64_8_ != 0) {
    plVar6 = (longlong *)(local_108 + 0x50);
    if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_108._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_138 = pAVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pAVar4 == (ADS_QuestCoordinate *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  if (local_138 != (ADS_QuestCoordinate *)0x0) {
    ADS_QuestCoordinate::SetData(local_138,param_1,param_2);
    UGameplayStatics::FinishSpawningActor((AActor *)local_138,&local_98,MultiplyWithRoot);
    local_128.Value = (TObjectPtr<ADS_QuestCoordinate> *)&local_130;
    local_118 = &local_138;
    TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FDS_QuestCoordinate_Key_&,TObjectPtr<ADS_QuestCoordinate>_&>_>
              ((TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
                *)&this->QuestCoordinateMap,&local_128,(bool *)&local_128.Value);
  }
  return;
}

// AddQuestNewAbleCompleteSymbol @ 14baf1480

void __thiscall UDS_QuestManager::AddQuestNewAbleCompleteSymbol(UDS_QuestManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_QuestEvent *pUVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  TMap<EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  EDS_QuestType local_res18 [8];
  int local_res20;
  ForAnyElementType local_28;
  undefined4 local_20;
  int local_1c;
  EDS_QuestType *local_18;
  ForAnyElementType *local_10;
  
  local_res18[0] = GetQuestType(param_1);
  if (local_res18[0] == None) {
    return;
  }
  this_00 = &this->QuestNewAbleCompleteSymbolMap;
  if (*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x8 !=
      *(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->QuestNewAbleCompleteSymbolMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->QuestNewAbleCompleteSymbolMap).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 - 1) &
                              (ulonglong)local_res18[0]) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_QuestType *)((longlong)iVar2 * 0x20 + *(longlong *)this_00) == local_res18[0]) {
          pTVar4 = TMapBase<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::Find(this_00,local_res18[0]);
          if (pTVar4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            return;
          }
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          iVar2 = pTVar4->ArrayNum;
          pFVar1 = pFVar5 + (longlong)iVar2 * 4;
          for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 4) {
            if (*(int *)pFVar5 == param_1) {
              return;
            }
          }
          if (iVar2 == pTVar4->ArrayMax) {
            iVar2 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          pTVar4->ArrayNum = iVar2 + 1;
          *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar2 * 4) = param_1;
          if (pTVar4->ArrayNum != 1) {
            return;
          }
          goto LAB_14baf1587;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar2 != -1);
    }
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 1;
  local_res20 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_28,1,&local_1c);
  *(int *)local_28.Data = param_1;
  local_18 = local_res18;
  local_10 = &local_28;
  TSet<TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestType_&,TArray<int,TSizedDefaultAllocator<32>_>_&>_>
            (this_00,(TPairInitializer<EDS_QuestType_&,TArray<int,TSizedDefaultAllocator<32>_>_&> *)
                     &local_res20,(bool *)&local_18);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14baf1587:
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_QuestType_const_>::Broadcast
              (&pUVar3->NewAbleCompleteQuestSymbolDelegate,local_res18[0]);
  }
  return;
}

// BindDelegate @ 14baf2c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_QuestManager::BindDelegate(UDS_QuestManager *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UDS_PhasingManager *pUVar6;
  UDS_ZoneManager *pUVar7;
  char *pcVar8;
  char *pcVar9;
  <lambda_1> local_res10 [8];
  <lambda_1> local_res18 [8];
  FWeakObjectPtr local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FWeakObjectPtr local_160;
  FName local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FWeakObjectPtr local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  UDS_QuestManager *local_120;
  FName *local_118;
  FName local_110;
  UDS_QuestManager *local_108;
  FName *local_100;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e8;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  undefined1 local_a8 [32];
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  pcVar9 = &DAT_00000002;
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    pcVar4 = strstr("&UDS_QuestManager::OnChangeItemDataSet","::");
    if (pcVar4 == (char *)0x0) {
LAB_14baf2cca:
      pcVar8 = &DAT_00000002;
LAB_14baf2ccd:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar8 = pcVar4;
        pcVar4 = strstr(pcVar8 + 1,"::");
      } while (pcVar4 != (char *)0x0);
      if (pcVar8 == (char *)0x0) goto LAB_14baf2cca;
      pcVar8 = pcVar8 + 2;
      if (*pcVar8 == '0') goto LAB_14baf2ccd;
    }
    ::FName::FName(&local_128,pcVar8);
    if ((this == (UDS_QuestManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x4c8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_160.ObjectIndex = 0;
    local_160.ObjectSerialNumber = 0;
    local_158.ComparisonIndex.Value = 0;
    local_158.Number = 0;
    local_138 = local_128;
    if ((this == (UDS_QuestManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x46d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_120 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_QuestManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_120);
    local_158 = local_138;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_168,(FReadAccessScope *)(local_a8 + 8));
    if ((local_158 == (FName)0x0) ||
       (this_00 = FWeakObjectPtr::Get(&local_160), this_00 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_a8 + 8));
LAB_14baf2e00:
      local_118 = &local_138;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
      __Internal_BindDynamic<UDS_QuestManager>'::__l2::<lambda_1>::operator()(&local_118);
    }
    else {
      pUVar5 = UObject::FindFunction(this_00,local_158);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_a8 + 8));
      if (pUVar5 == (UFunction *)0x0) goto LAB_14baf2e00;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_168,&local_70)
    ;
    local_f8.Object = local_160;
    local_f8.FunctionName = local_158;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
               (FWriteAccessScope *)&local_d8);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&pUVar3[1].field_0x8,local_res10,Default);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_f8);
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  }
  pUVar6 = UDS_PhasingManager::GetInst();
  if (pUVar6 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_QuestManager>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar6->PhasingStartOrEndDelegate,(UDS_QuestManager *)local_a8,(pmf_7d77db0a)this
              );
  }
  pUVar7 = UDS_ZoneManager::GetInst();
  if (pUVar7 == (UDS_ZoneManager *)0x0) {
    return;
  }
  pcVar4 = strstr("&UDS_QuestManager::OnChangeIsland","::");
  if (pcVar4 == (char *)0x0) {
LAB_14baf2f0a:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar4;
      pcVar4 = strstr(pcVar8 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar8 == (char *)0x0) || (pcVar9 = pcVar8 + 2, pcVar8[2] == '0')) goto LAB_14baf2f0a;
  }
  ::FName::FName(&local_110,pcVar9);
  if ((this == (UDS_QuestManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  local_130 = local_110;
  if ((this == (UDS_QuestManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_108 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_QuestManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_108);
  local_140 = local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_88);
  if ((local_140 == (FName)0x0) ||
     (pUVar3 = FWeakObjectPtr::Get(&local_148), pUVar3 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar5 = UObject::FindFunction(pUVar3,local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14baf3043;
  }
  local_100 = &local_130;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
  __Internal_BindDynamic<UDS_QuestManager>'::__l2::<lambda_1>::operator()(&local_100);
LAB_14baf3043:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_58);
  local_e8.Object = local_148;
  local_e8.FunctionName = local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar7->IslandIdChangeDelegate,(FWriteAccessScope *)&local_c0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar7->IslandIdChangeDelegate).field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->IslandIdChangeDelegate
             ,&local_e8);
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  return;
}

// CheckAcceptCondition @ 14baf6890

bool __thiscall
UDS_QuestManager::CheckAcceptCondition(UDS_QuestManager *this,int param_1,int param_2)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  UObject *pUVar2;
  UDS_NpcRelationData *this_01;
  UDS_PlayerData *this_02;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18 [2];
  
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar1) {
    switch(this_00->QuestOpenConditionType) {
    default:
      return true;
    case PlayerGrade:
      UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_res20);
        return this_00->QuestOpenConditionValue <= *(int *)&pUVar2[6].field_0x10;
      }
      break;
    case AppointQuest:
      bVar1 = IsQuestCompleted(this,this_00->QuestOpenConditionValue);
      return bVar1;
    case NpcRelationEvolveAble:
      if (param_2 != 0) {
        UDS_PlayerData::GetMainPlayerData();
        bVar1 = FWeakObjectPtr::IsValid(local_18);
        if (bVar1) {
          UDS_NpcRelationData::GetData
                    ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,SUB41(param_2,0));
          bVar1 = FWeakObjectPtr::IsValid(&local_res20);
          if ((bVar1) &&
             (pUVar2 = FWeakObjectPtr::Get(&local_res20),
             *(int *)&pUVar2[3].field_0x14 == this_00->QuestOpenConditionValue)) {
            this_01 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_res20);
            pUVar2 = FWeakObjectPtr::Get(local_18);
            bVar1 = UDS_NpcRelationData::IsEnableGradeUp(this_01,*(int *)&pUVar2[9].field_0x10);
            if (bVar1) {
              return true;
            }
          }
        }
      }
      break;
    case AppointAchievement:
      bVar1 = UDS_AchievementData::IsCompletedAchievement(this_00->QuestOpenConditionValue);
      return bVar1;
    case AppointCharacterGet:
      UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar1) {
        this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res20);
        bVar1 = UDS_PlayerData::IsHaveChar(this_02,this_00->QuestOpenConditionValue);
        return bVar1;
      }
    }
  }
  return false;
}

// CheckAceeptNpc @ 14baf6a90

bool __thiscall UDS_QuestManager::CheckAceeptNpc(UDS_QuestManager *this,int param_1,int param_2)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  UDS_ZoneManager *pUVar2;
  FDS_QuestLocalTableRow *this_02;
  longlong lVar3;
  
  if (param_2 == 0) {
    return true;
  }
  lVar3 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar3,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar1) {
    if (this_00->QuestType == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef(lVar3,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar1) {
        pUVar2 = UDS_ZoneManager::GetInst();
        if (((pUVar2 != (UDS_ZoneManager *)0x0) && (this_02->ID_AcceptNpc == param_2)) &&
           (this_02->ID_AcceptZone == pUVar2->ZoneID)) {
          return true;
        }
      }
    }
    else if (this_00->QuestType == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar3,true);
      bVar1 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar1) {
        pUVar2 = UDS_ZoneManager::GetInst();
        if (((pUVar2 != (UDS_ZoneManager *)0x0) && (this_01->ID_AcceptNpc == param_2)) &&
           (this_01->ID_AcceptZone == pUVar2->ZoneID)) {
          return true;
        }
      }
    }
  }
  return false;
}

// CheckCompleteNpc @ 14baf7440

bool __thiscall UDS_QuestManager::CheckCompleteNpc(UDS_QuestManager *this,int param_1,int param_2)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  UDS_ZoneManager *pUVar3;
  FDS_QuestLocalTableRow *this_02;
  FDS_QuestMainTableRow *this_03;
  longlong lVar4;
  
  if (param_2 == 0) {
    return true;
  }
  lVar4 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar4,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar2) {
    EVar1 = this_00->QuestType;
    if (EVar1 == Main) {
      this_03 = FDS_QuestMainTableRow::GetRef(lVar4,true);
      bVar2 = FDS_QuestMainTableRow::IsValid(this_03);
      if (bVar2) {
        pUVar3 = UDS_ZoneManager::GetInst();
        if (((pUVar3 != (UDS_ZoneManager *)0x0) && (this_03->ID_CompleteNpc == param_2)) &&
           (this_03->ID_CompleteZone == pUVar3->ZoneID)) {
          return true;
        }
      }
    }
    else if (EVar1 == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef(lVar4,true);
      bVar2 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar2) {
        pUVar3 = UDS_ZoneManager::GetInst();
        if (((pUVar3 != (UDS_ZoneManager *)0x0) && (this_02->ID_CompleteNpc == param_2)) &&
           (this_02->ID_CompleteZone == pUVar3->ZoneID)) {
          return true;
        }
      }
    }
    else if (EVar1 == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar4,true);
      bVar2 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar2) {
        pUVar3 = UDS_ZoneManager::GetInst();
        if (((pUVar3 != (UDS_ZoneManager *)0x0) && (this_01->ID_CompleteNpc == param_2)) &&
           (this_01->ID_CompleteZone == pUVar3->ZoneID)) {
          return true;
        }
      }
    }
  }
  return false;
}

// CheckExcludeCompleteHide @ 14baf7590

bool __thiscall UDS_QuestManager::CheckExcludeCompleteHide(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  EDS_QuestType EVar2;
  FDS_QuestLocalTableRow *this_00;
  
  bVar1 = IsQuestCompleted(this,param_1);
  if (bVar1) {
    EVar2 = GetQuestType(param_1);
    if (EVar2 == Local) {
      this_00 = FDS_QuestLocalTableRow::GetRef((longlong)param_1,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_00);
      if (bVar1) {
        return this_00->QuestCompleteHide;
      }
    }
  }
  return false;
}

// CheckExcludeLockInvisible @ 14baf75e0

bool __thiscall UDS_QuestManager::CheckExcludeLockInvisible(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  EDS_QuestType EVar2;
  FDS_QuestLocalTableRow *this_00;
  
  bVar1 = CheckAcceptCondition(this,param_1,0);
  if (!bVar1) {
    EVar2 = GetQuestType(param_1);
    if (EVar2 == Local) {
      this_00 = FDS_QuestLocalTableRow::GetRef((longlong)param_1,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_00);
      if (bVar1) {
        return this_00->LockInvisible;
      }
    }
  }
  return false;
}

// CheckQuestCoordinate @ 14baf76e0

void __thiscall UDS_QuestManager::CheckQuestCoordinate(UDS_QuestManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UDS_DataSetBase *this_00;
  ulong64 uVar5;
  UObject *pUVar6;
  UDS_ZoneManager *pUVar7;
  FDS_QuestBaseTableRow *this_01;
  FDS_QuestObjectiveTableRow *this_02;
  UDS_QuestData *this_03;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_88;
  undefined8 local_80;
  TVector<double>_u_0 local_78 [2];
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar5 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_88,uVar5,SUB41(param_1,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_88);
    if (bVar4) {
      local_res20 = local_88;
      goto LAB_14baf7768;
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_80 = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_80);
LAB_14baf7768:
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (((bVar4) && (pUVar6 = FWeakObjectPtr::Get(&local_res20), pUVar6[2].field_0x19 == '\0')) &&
     (pUVar7 = UDS_ZoneManager::GetInst(), pUVar7 != (UDS_ZoneManager *)0x0)) {
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar4 = FDS_QuestBaseTableRow::IsValid(this_01);
    if (bVar4) {
      pFVar8 = (this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_01->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_01->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res18);
        }
        if (pFVar8 == pFVar1) break;
        iVar3 = *(int *)pFVar8;
        this_02 = FDS_QuestObjectiveTableRow::GetRef((longlong)iVar3,true);
        bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_02);
        if ((bVar4) &&
           (((((this_02->ProgressCoordinate).field0_0x0._s_0.X != 0.0 ||
              ((this_02->ProgressCoordinate).field0_0x0._s_0.Y != 0.0)) ||
             ((this_02->ProgressCoordinate).field0_0x0._s_0.Z != 0.0)) &&
            (pUVar7->IslandID == this_02->ID_ProgressZone / 1000)))) {
          this_03 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res20);
          bVar4 = UDS_QuestData::IsGoalQuestObjective(this_03,iVar3);
          if ((!bVar4) &&
             ((this_02->QuestDefineType == MoveProgressCoordinate ||
              (0 < this_02->ID_ResourceEffect)))) {
            local_78[0]._0_8_ = (this_02->ProgressCoordinate).field0_0x0._s_0.X;
            local_78[0]._8_8_ = (this_02->ProgressCoordinate).field0_0x0._s_0.Y;
            local_78[0]._16_8_ = (this_02->ProgressCoordinate).field0_0x0._s_0.Z;
            AddQuestCoordinate(this,param_1,iVar3,(TVector<double> *)&local_78[0]._s_0);
          }
        }
        pFVar8 = pFVar8 + 4;
      }
    }
  }
  return;
}

// CheckQuestNewAbleCompleteSymbol @ 14baf78f0

void __thiscall
UDS_QuestManager::CheckQuestNewAbleCompleteSymbol(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  ulong64 uVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  undefined8 local_10;
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res20);
    uVar2 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_18,uVar2,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_18);
    if (bVar1) {
      local_res18 = local_18;
      goto LAB_14baf7983;
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_10 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_10);
LAB_14baf7983:
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res18);
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    if (pUVar3[2].field_0x19 == '\x01') {
      AddQuestNewAbleCompleteSymbol(this,param_1);
      return;
    }
    RemoveQuestNewAbleCompleteSymbol(this,param_1);
  }
  return;
}

// CheckQuestObjectiveTarget @ 14baf79e0

/* WARNING: Type propagation algorithm not settling */
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
UDS_QuestManager::CheckQuestObjectiveTarget
          (UDS_QuestManager *this,int param_1,FDS_EntityBase *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  EDS_NpcBattleGrade EVar5;
  int iVar6;
  FDS_QuestObjectiveTableRow *this_00;
  UDS_ZoneManager *pUVar7;
  FDS_NpcBaseTableRow *pFVar8;
  FDS_StuffBaseTableRow *this_01;
  UDS_StuffGatherData *pUVar9;
  EDS_NpcBattleGrade EVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res20;
  
  this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)param_1,true);
  bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_00);
  if ((bVar4) && (this_00->QuestTargetType != None)) {
    uVar2 = this_00->ID_ProgressZone;
    pUVar7 = UDS_ZoneManager::GetInst();
    if ((pUVar7 != (UDS_ZoneManager *)0x0) && ((uVar2 == 0 || (pUVar7->ZoneID == uVar2)))) {
      pFVar11 = (this_00->QuestTargetValue).AllocatorInstance.Data;
      iVar6 = (this_00->QuestTargetValue).ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar6 * 4;
      do {
        if ((this_00->QuestTargetValue).ArrayNum != iVar6) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar11 == pFVar1) {
          return false;
        }
        iVar3 = *(int *)pFVar11;
        if (0 < iVar3) {
          EVar10 = (EDS_NpcBattleGrade)iVar3;
          switch(this_00->QuestTargetType) {
          case NpcId:
            if (param_2->EntityType != NPC) {
              return false;
            }
LAB_14baf7a9f:
            return param_2->TableID == (longlong)iVar3;
          case NpcGroupId:
            if (param_2->EntityType != NPC) {
              return false;
            }
            pFVar8 = FDS_NpcBaseTableRow::GetRef(param_2->TableID,true);
            bVar4 = FDS_NpcBaseTableRow::IsValid(pFVar8);
            if (!bVar4) {
              return false;
            }
            pFVar11 = (pFVar8->NpcQuestGroup).AllocatorInstance.Data;
            pFVar1 = pFVar11 + (longlong)(pFVar8->NpcQuestGroup).ArrayNum * 4;
            while( true ) {
              if (pFVar11 == pFVar1) {
                return false;
              }
              if (*(int *)pFVar11 == iVar3) break;
              pFVar11 = pFVar11 + 4;
            }
            return true;
          case NpcGrade:
            if (param_2->EntityType != NPC) {
              return false;
            }
            pFVar8 = FDS_NpcBaseTableRow::GetRef(param_2->TableID,true);
            bVar4 = FDS_NpcBaseTableRow::IsValid(pFVar8);
            if (!bVar4) {
              return false;
            }
            return pFVar8->NpcBattleGrade == EVar10;
          case StuffId:
            if (param_2->EntityType != StuffGather) {
              return false;
            }
            goto LAB_14baf7a9f;
          case StuffGroupId:
            if (param_2->EntityType != StuffGather) {
              return false;
            }
            UDS_StuffGatherData::GetData((ulong64)&local_res20);
            bVar4 = FWeakObjectPtr::IsValid(&local_res20);
            if (!bVar4) {
              return false;
            }
            pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res20);
            iVar6 = UDS_StuffGatherData::GetStuffQuestGroup(pUVar9);
            return iVar6 == iVar3;
          case StuffGrade:
            if (param_2->EntityType != StuffGather) {
              return false;
            }
            this_01 = FDS_StuffBaseTableRow::GetRef(param_2->TableID,true);
            bVar4 = FDS_StuffBaseTableRow::IsValid(this_01);
            if (!bVar4) {
              return false;
            }
            return this_01->ID_GradeType == EVar10;
          case StuffType:
            if (param_2->EntityType != StuffGather) {
              return false;
            }
            UDS_StuffGatherData::GetData((ulong64)&local_res20);
            bVar4 = FWeakObjectPtr::IsValid(&local_res20);
            if (!bVar4) {
              return false;
            }
            pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res20);
            EVar5 = UDS_StuffGatherData::GetStuffGatherType(pUVar9);
            return EVar5 == EVar10;
          }
        }
        pFVar11 = pFVar11 + 4;
      } while( true );
    }
  }
  return false;
}

// CheckQuestTarget @ 14baf7c50

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
UDS_QuestManager::CheckQuestTarget
          (UDS_QuestManager *this,TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  FDS_QuestBaseTableRow *this_00;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 local_38 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar4) && (pUVar5 = FWeakObjectPtr::Get(&local_res10), pUVar5[2].field_0x19 != '\x01')) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x8,true);
    bVar4 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar4) {
      pFVar6 = (this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_00->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_00->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_38);
        }
        if (pFVar6 == pFVar1) break;
        iVar3 = *(int *)pFVar6;
        bVar4 = CheckQuestObjectiveTarget(this,iVar3,param_2);
        if (bVar4) {
          *param_3 = iVar3;
          return true;
        }
        pFVar6 = pFVar6 + 4;
      }
    }
  }
  return false;
}

// CompareTo @ 14bafa620

int __thiscall UDS_QuestManager::CompareTo(UDS_QuestManager *this,int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == *param_2) {
    return 0;
  }
  iVar1 = -1;
  if (*param_2 <= *param_1) {
    iVar1 = 1;
  }
  return iVar1;
}

// Created @ 14bb01ea0

void __thiscall UDS_QuestManager::Created(UDS_QuestManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb03040

void __thiscall UDS_QuestManager::Destroyed(UDS_QuestManager *this)

{
  return;
}

// GetAcceptNpcID @ 14bb09640

int __thiscall UDS_QuestManager::GetAcceptNpcID(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar2,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar1) {
    if (this_00->QuestType == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef(lVar2,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar1) {
        return this_02->ID_AcceptNpc;
      }
    }
    else if (this_00->QuestType == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar2,true);
      bVar1 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar1) {
        return this_01->ID_AcceptNpc;
      }
    }
  }
  return 0;
}

// GetCompleteNpcID @ 14bb09d80

int __thiscall UDS_QuestManager::GetCompleteNpcID(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar2,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar1) {
    if (this_00->QuestType == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef(lVar2,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar1) {
        return this_02->ID_CompleteNpc;
      }
    }
    else if (this_00->QuestType == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar2,true);
      bVar1 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar1) {
        return this_01->ID_CompleteNpc;
      }
    }
  }
  return 0;
}

// GetInst @ 14bb0bef0

UDS_QuestManager * __cdecl UDS_QuestManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_QuestManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_QuestManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
  pUVar3 = (UDS_QuestManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_QuestManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_QuestManager *)0x0;
}

// GetNpcActiveQuestIDs @ 14bb0c850

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

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_QuestManager::GetNpcActiveQuestIDs
          (UDS_QuestManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          long64 param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  UDS_DataSetBase *this_00;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  ulong64 local_res8;
  FWeakObjectPtr local_res10;
  UDS_QuestManager *local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res8 = param_1;
  local_res18[0] = this;
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res8);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = *(int *)&pUVar5[4].field_0x18;
      lVar8 = (longlong)local_40;
      _Src = *(void **)&pUVar5[4].field_0x10;
      if (local_40 == 0) {
        local_3c = 0;
        iVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_40,0,&local_48,local_40,&local_3c);
        memcpy(local_48.Data,_Src,lVar8 << 2);
        iVar6 = local_40;
      }
      pFVar1 = local_48.Data + (longlong)iVar6 * 4;
      FVar9.Data = local_48.Data;
      iVar7 = iVar6;
      while( true ) {
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (FVar9.Data == pFVar1) break;
        iVar7 = *(int *)FVar9.Data;
        bVar2 = IsQuestCompleted(this,iVar7);
        if (!bVar2) {
          this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10);
          iVar3 = UDS_DataSetBase::GetEntityTableID(this_00);
          bVar2 = `UDS_QuestManager::GetNpcActiveQuestIDs'::__l2::<lambda_1>::operator()
                            (local_res18,iVar3,iVar7);
          if (bVar2) {
            iVar3 = __return_storage_ptr__->ArrayNum;
            if (iVar3 == __return_storage_ptr__->ArrayMax) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar3 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 4) = iVar7
            ;
          }
        }
        FVar9.Data = FVar9.Data + 4;
        iVar7 = local_40;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetNpcConditionType @ 14bb0c9f0

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

EDS_QuestConditionType __thiscall
UDS_QuestManager::GetNpcConditionType(UDS_QuestManager *this,ulong64 param_1)

{
  FWeakObjectPtr *pFVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  EDS_QuestConditionType EVar4;
  UDS_QuestDataSet *this_00;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  FDS_QuestBaseTableRow *this_01;
  UDS_DataSetBase *this_02;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  longlong lVar10;
  EDS_QuestConditionType EVar11;
  ulong64 local_res10;
  int local_res18 [2];
  int local_res20 [2];
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  ulong64 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_50;
  
  local_res10 = param_1;
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_70);
  bVar2 = FWeakObjectPtr::IsValid(&local_70);
  if ((!bVar2) ||
     (local_60.Data = (FScriptContainerElement *)FDS_EntityBase::GetEntityBase(&local_res10),
     (FDS_EntityBase *)local_60.Data == (FDS_EntityBase *)0x0)) {
    return None;
  }
  this_00 = (UDS_QuestDataSet *)FWeakObjectPtr::Get(&local_70);
  UDS_QuestDataSet::GetAllData(this_00,&local_50);
  iVar7 = local_50.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar8.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    EVar4 = None;
    if ((FWeakObjectPtr *)FVar8.Data == pFVar1) break;
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)FVar8.Data);
    if (bVar2) {
      local_68 = local_res10;
      pFVar5 = FDS_EntityBase::GetEntityBase(&local_68);
      if ((pFVar5 != (FDS_EntityBase *)0x0) &&
         (bVar2 = IsQuestTarget(this,pFVar5,local_res20,local_res18), EVar4 = Objective, bVar2))
      break;
    }
    FVar8.Data = FVar8.Data + 8;
  }
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_78);
  bVar2 = FWeakObjectPtr::IsValid(&local_78);
  EVar11 = None;
  if ((bVar2) && (EVar11 = EVar4, EVar4 == None)) {
    pUVar6 = FWeakObjectPtr::Get(&local_78);
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = *(int *)&pUVar6[4].field_0x18;
    lVar10 = (longlong)local_58;
    _Src = *(void **)&pUVar6[4].field_0x10;
    if (local_58 == 0) {
      local_54 = 0;
      iVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58,0,&local_60,local_58,&local_54);
      memcpy(local_60.Data,_Src,lVar10 << 2);
      iVar7 = local_58;
    }
    pFVar5 = (FDS_EntityBase *)(local_60.Data + (longlong)iVar7 * 4);
    FVar8.Data = local_60.Data;
    iVar9 = iVar7;
    while( true ) {
      if (iVar9 != iVar7) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((FDS_EntityBase *)FVar8.Data == pFVar5) break;
      iVar9 = (int)((FDS_EntityBase *)FVar8.Data)->_padding_;
      this_01 = FDS_QuestBaseTableRow::GetRef((longlong)iVar9,true);
      bVar2 = FDS_QuestBaseTableRow::IsValid(this_01);
      if ((bVar2) && (bVar2 = IsQuestCompleted(this,iVar9), !bVar2)) {
        this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_78);
        iVar3 = UDS_DataSetBase::GetEntityTableID(this_02);
        EVar4 = GetQuestConditionTypeByNpc(this,iVar9,iVar3);
        if ((int)EVar4 < (int)EVar11) {
          EVar11 = EVar4;
        }
      }
      FVar8.Data = (FScriptContainerElement *)
                   ((longlong)&((FDS_EntityBase *)FVar8.Data)->_padding_ + 4);
      iVar9 = local_58;
    }
    if ((FDS_EntityBase *)local_60.Data != (FDS_EntityBase *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  if ((FWeakObjectPtr *)local_50.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return EVar11;
}

// GetNpcIconID @ 14bb0cc60

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

int __thiscall UDS_QuestManager::GetNpcIconID(UDS_QuestManager *this,ulong64 param_1)

{
  longlong lVar1;
  bool bVar2;
  EDS_QuestConditionType EVar3;
  int iVar4;
  FDS_EntityBase *pFVar5;
  int *piVar6;
  UDS_NPCDataSet *this_00;
  undefined1 *puVar7;
  ulong64 local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1;
  pFVar5 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    EVar3 = GetNpcConditionType(this,local_res10);
    if ((int)EVar3 < 3) {
      if (*(int *)&(this->QuestConditionIconID_Map).field_0x8 !=
          *(int *)&(this->QuestConditionIconID_Map).field_0x34) {
        puVar7 = *(undefined1 **)&(this->QuestConditionIconID_Map).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->QuestConditionIconID_Map).field_0x38;
        }
        iVar4 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->QuestConditionIconID_Map).field_0x48 -
                                   AbleComplete & EVar3) * 4);
        if (iVar4 != -1) {
          lVar1 = *(longlong *)&this->QuestConditionIconID_Map;
          do {
            if (*(EDS_QuestConditionType *)(lVar1 + (longlong)iVar4 * 0x10) == EVar3) {
              piVar6 = TMapBase<enum_EDS_QuestConditionType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>_>
                       ::FindChecked(&this->QuestConditionIconID_Map,EVar3);
              return *piVar6;
            }
            iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
          } while (iVar4 != -1);
        }
      }
    }
    else {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res18);
      bVar2 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar2) {
        this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res18);
        iVar4 = UDS_NPCDataSet::GetNpcRoleTypeIconID(this_00);
        return iVar4;
      }
    }
  }
  return 0;
}

// GetNpcNormalTalkIDs @ 14bb0cd50

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_QuestManager::GetNpcNormalTalkIDs
          (UDS_QuestManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_TalkType EVar2;
  FDS_NpcNormalTalkTableRow *this_00;
  bool bVar3;
  EDS_QuestStateType EVar4;
  int iVar5;
  UDS_QuestLocalSave *this_01;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res20;
  TArray<FDS_NpcNormalTalkTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_NpcNormalTalkTableRow::GetAll(&local_38);
  iVar6 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  do {
    if (local_38.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FDS_NpcNormalTalkTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar7.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    this_00 = *(FDS_NpcNormalTalkTableRow **)FVar7.Data;
    bVar3 = FDS_NpcNormalTalkTableRow::IsValid(this_00);
    if ((bVar3) && (this_00->GroupId == param_1)) {
      EVar2 = this_00->TalkType;
      if (EVar2 != Always) {
        if (EVar2 == Once) {
          UDS_QuestLocalSave::GetInst();
          bVar3 = FWeakObjectPtr::IsValid(&local_res20);
          if (!bVar3) goto LAB_14bb0ce19;
          this_01 = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&local_res20);
          EVar4 = UDS_QuestLocalSave::HasTalkedToNpc(this_01,this_00->ID);
        }
        else {
          if (EVar2 != Quest) goto LAB_14bb0ce44;
          EVar4 = GetQuestStateType(this_00->TalkTypeCondition);
        }
        if (EVar4 != Progress) goto LAB_14bb0ce44;
      }
LAB_14bb0ce19:
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = this_00->ID
      ;
    }
LAB_14bb0ce44:
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetNpcQuestList @ 14bb0ce90

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_QuestManager::GetNpcQuestList
          (UDS_QuestManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,EDS_QuestConditionType param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  EDS_QuestConditionType EVar4;
  int iVar5;
  FDS_QuestBaseNpcTableRow *this_00;
  ulonglong uVar6;
  FDS_QuestBaseTableRow *this_01;
  UDS_DataSetBase *this_02;
  ulong64 uVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_res10;
  int local_res18;
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FScriptContainerElement *local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  this_00 = FDS_QuestBaseNpcTableRow::GetRef((longlong)param_1,true);
  bVar3 = FDS_QuestBaseNpcTableRow::IsValid(this_00);
  if (bVar3) {
    uVar1 = (this_00->ID_QuestBaseRequest).ArrayNum;
    uVar6 = (ulonglong)(int)uVar1;
    pFVar10 = (this_00->ID_QuestBaseRequest).AllocatorInstance.Data;
    pFVar9 = pFVar10 + uVar6 * 4;
    local_48 = pFVar9;
    while( true ) {
      if ((this_00->ID_QuestBaseRequest).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar10 == pFVar9) break;
      iVar2 = *(int *)pFVar10;
      bVar3 = IsQuestCompleted(this,iVar2);
      if (bVar3) goto LAB_14bb0d084;
      if (param_2 == AbleComplete) {
LAB_14bb0cf46:
        TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_58);
        bVar3 = FWeakObjectPtr::IsValid(&local_58);
        if (bVar3) {
          this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_58);
          uVar7 = UDS_DataSetBase::GetEntityID(this_02);
          UDS_QuestData::GetData((ulong64)&local_50,uVar7,SUB41(iVar2,0));
          bVar3 = FWeakObjectPtr::IsValid(&local_50);
          if (bVar3) {
            local_60 = local_50;
            pFVar9 = local_48;
          }
          else {
            local_60.ObjectIndex = 0;
            local_60.ObjectSerialNumber = 0;
            local_res10 = 0;
            FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res10);
            pFVar9 = local_48;
          }
        }
        else {
          local_60.ObjectIndex = 0;
          local_60.ObjectSerialNumber = 0;
          local_res10 = 0;
          FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res10);
        }
        bVar3 = FWeakObjectPtr::IsValid(&local_60);
        if (bVar3) {
          if (param_2 == InProgress) {
            pUVar8 = FWeakObjectPtr::Get(&local_60);
            bVar3 = pUVar8[2].field_0x19 == '\0';
          }
          else {
            if (param_2 != AbleComplete) goto LAB_14bb0d084;
            pUVar8 = FWeakObjectPtr::Get(&local_60);
            bVar3 = pUVar8[2].field_0x19 == '\x01';
          }
LAB_14bb0d05a:
          if (bVar3) {
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == __return_storage_ptr__->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = iVar2
            ;
          }
        }
      }
      else if (param_2 == AbleAccept) {
        this_01 = FDS_QuestBaseTableRow::GetRef((longlong)iVar2,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_01);
        if (bVar3) {
          EVar4 = GetQuestConditionTypeByNpc(this,iVar2,local_res18);
          bVar3 = EVar4 == AbleAccept;
          goto LAB_14bb0d05a;
        }
      }
      else if (param_2 == InProgress) goto LAB_14bb0cf46;
LAB_14bb0d084:
      uVar6 = (ulonglong)uVar1;
      pFVar10 = pFVar10 + 4;
    }
  }
  return __return_storage_ptr__;
}

// GetProgressMainQuestID @ 14bb0d490

int __cdecl UDS_QuestManager::GetProgressMainQuestID(void)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  size_t _Size;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_58;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  local_res8[0] = 1;
  local_70 = 1;
  iVar5 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_78,1,&local_6c);
  memcpy(local_78.Data,local_res8,1);
  local_res10[0] = 0x100;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_68,2,&local_5c);
  memcpy(local_68.Data,local_res10,2);
  FVar2.Data = local_68.Data;
  _Size = (size_t)local_60;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = local_60;
  if (local_60 == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,FVar2.Data,_Size);
  }
  iVar3 = local_70;
  FVar2.Data = local_78.Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = local_70;
  if (local_70 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70,0,&local_48.AllocatorInstance,local_70,&local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,FVar2.Data,(longlong)iVar3);
  }
  GetQuestListByInProgress(&local_38,&local_48,&local_58,false);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_38.ArrayNum != 0) {
    if ((local_38.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    iVar5 = *(int *)local_38.AllocatorInstance.Data;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return iVar5;
}

// GetQuestCategory @ 14bb0dcd0

int __thiscall UDS_QuestManager::GetQuestCategory(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar3,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  if (this_00->QuestType == Local) {
    this_02 = FDS_QuestLocalTableRow::GetRef(lVar3,true);
    bVar1 = FDS_QuestLocalTableRow::IsValid(this_02);
    iVar2 = 0;
    if (bVar1) {
      iVar2 = this_02->ID_QuestCategory;
    }
  }
  else {
    iVar2 = 0;
    if (this_00->QuestType == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar3,true);
      bVar1 = FDS_QuestRepeatTableRow::IsValid(this_01);
      iVar2 = 0;
      if (bVar1) {
        return this_01->ID_QuestCategory;
      }
    }
  }
  return iVar2;
}

// GetQuestCompleteCoordinate @ 14bb0dd80

TVector<double> * __thiscall
UDS_QuestManager::GetQuestCompleteCoordinate
          (UDS_QuestManager *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  EDS_QuestType EVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  FDS_QuestMainTableRow *this_03;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar6,true);
  bVar5 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar5) {
    EVar2 = this_00->QuestType;
    if (EVar2 == Main) {
      this_03 = FDS_QuestMainTableRow::GetRef(lVar6,true);
      bVar5 = FDS_QuestMainTableRow::IsValid(this_03);
      if (bVar5) {
        dVar3 = (this_03->CompleteCoordinate).field0_0x0._s_0.Y;
        dVar1 = (this_03->CompleteCoordinate).field0_0x0._s_0.Z;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (this_03->CompleteCoordinate).field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
    }
    else if (EVar2 == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef(lVar6,true);
      bVar5 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar5) {
        dVar3 = (this_02->CompleteCoordinate).field0_0x0._s_0.Y;
        dVar1 = (this_02->CompleteCoordinate).field0_0x0._s_0.Z;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (this_02->CompleteCoordinate).field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
    }
    else if (EVar2 == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar6,true);
      bVar5 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar5) {
        dVar3 = (this_01->CompleteCoordinate).field0_0x0._s_0.Y;
        dVar1 = (this_01->CompleteCoordinate).field0_0x0._s_0.Z;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (this_01->CompleteCoordinate).field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
        return __return_storage_ptr__;
      }
    }
  }
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetQuestConditionIconID @ 14bb0dec0

int __thiscall UDS_QuestManager::GetQuestConditionIconID(UDS_QuestManager *this,int param_1)

{
  longlong lVar1;
  EDS_QuestConditionType EVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  EVar2 = GetQuestConditionType(this,param_1,0);
  if (*(int *)&(this->QuestConditionIconID_Map).field_0x8 !=
      *(int *)&(this->QuestConditionIconID_Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->QuestConditionIconID_Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->QuestConditionIconID_Map).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->QuestConditionIconID_Map).field_0x48 - AbleComplete &
                              EVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->QuestConditionIconID_Map;
      do {
        if (*(EDS_QuestConditionType *)(lVar1 + (longlong)iVar3 * 0x10) == EVar2) {
          piVar4 = TMapBase<enum_EDS_QuestConditionType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>_>
                   ::FindChecked(&this->QuestConditionIconID_Map,EVar2);
          return *piVar4;
        }
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0;
}

// GetQuestConditionIconID @ 14bb0df50

int __thiscall
UDS_QuestManager::GetQuestConditionIconID(UDS_QuestManager *this,EDS_QuestConditionType param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->QuestConditionIconID_Map).field_0x8 !=
      *(int *)&(this->QuestConditionIconID_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->QuestConditionIconID_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->QuestConditionIconID_Map).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->QuestConditionIconID_Map).field_0x48 - AbleComplete &
                              param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->QuestConditionIconID_Map;
      do {
        if (*(EDS_QuestConditionType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_QuestConditionType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>_>
                   ::FindChecked(&this->QuestConditionIconID_Map,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetQuestConditionIconIdByNpc @ 14bb0dfd0

int __thiscall
UDS_QuestManager::GetQuestConditionIconIdByNpc(UDS_QuestManager *this,int param_1,int param_2)

{
  longlong lVar1;
  EDS_QuestConditionType EVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  EVar2 = GetQuestConditionTypeByNpc(this,param_1,param_2);
  if (*(int *)&(this->QuestConditionIconID_Map).field_0x8 !=
      *(int *)&(this->QuestConditionIconID_Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->QuestConditionIconID_Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->QuestConditionIconID_Map).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->QuestConditionIconID_Map).field_0x48 - AbleComplete &
                              EVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->QuestConditionIconID_Map;
      do {
        if (*(EDS_QuestConditionType *)(lVar1 + (longlong)iVar3 * 0x10) == EVar2) {
          piVar4 = TMapBase<enum_EDS_QuestConditionType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>_>
                   ::FindChecked(&this->QuestConditionIconID_Map,EVar2);
          return *piVar4;
        }
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0;
}

// GetQuestConditionSortOrder @ 14bb0e050

EDS_QuestConditionSortOrder __thiscall
UDS_QuestManager::GetQuestConditionSortOrder(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  if (this->TraceQuestID == param_1) {
    return Traced;
  }
  bVar1 = IsQuestCompleted(this,param_1);
  if (bVar1) {
    return Completed;
  }
  GetQuestData((int)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar1) {
    bVar1 = CheckAcceptCondition(this,param_1,0);
    return !bVar1 + AbleAccept;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar2[2].field_0x19 != '\0') {
    if (pUVar2[2].field_0x19 != '\x01') {
      return NotAbleAccept;
    }
    return AbleCompleted;
  }
  return InProgress;
}

// GetQuestConditionType @ 14bb0e110

EDS_QuestConditionType __thiscall
UDS_QuestManager::GetQuestConditionType(UDS_QuestManager *this,int param_1,int param_2)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  ulong64 uVar2;
  UObject *pUVar3;
  EDS_QuestConditionType EVar4;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  undefined8 local_18 [2];
  
  bVar1 = IsQuestCompleted(this,param_1);
  if (bVar1) {
    return Completed;
  }
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_28);
  bVar1 = FWeakObjectPtr::IsValid(&local_28);
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_28);
    uVar2 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_20,uVar2,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_20);
    if (bVar1) {
      local_res20 = local_20;
      goto LAB_14bb0e1cb;
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
LAB_14bb0e1cb:
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    bVar1 = CheckAcceptCondition(this,param_1,param_2);
    EVar4 = NotAbleAccept;
    if (bVar1) {
      EVar4 = AbleAccept;
    }
    return EVar4;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar3[2].field_0x19 != '\0') {
    if (pUVar3[2].field_0x19 == '\x01') {
      return AbleComplete;
    }
    return None;
  }
  return InProgress;
}

// GetQuestConditionTypeByNpc @ 14bb0e260

EDS_QuestConditionType __thiscall
UDS_QuestManager::GetQuestConditionTypeByNpc(UDS_QuestManager *this,int param_1,int param_2)

{
  bool bVar1;
  EDS_QuestConditionType EVar2;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  UDS_ZoneManager *pUVar3;
  FDS_QuestLocalTableRow *this_02;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  EVar2 = GetQuestConditionType(this,param_1,param_2);
  if (EVar2 == AbleComplete) {
    bVar1 = CheckCompleteNpc(this,param_1,param_2);
    EVar2 = None;
    if (bVar1) {
      EVar2 = AbleComplete;
    }
  }
  else if (EVar2 == AbleAccept) {
    if (param_2 == 0) {
      return AbleAccept;
    }
    this_00 = FDS_QuestBaseTableRow::GetRef(lVar4,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar1) {
      if (this_00->QuestType == Local) {
        this_02 = FDS_QuestLocalTableRow::GetRef(lVar4,true);
        bVar1 = FDS_QuestLocalTableRow::IsValid(this_02);
        if ((((bVar1) && (pUVar3 = UDS_ZoneManager::GetInst(), pUVar3 != (UDS_ZoneManager *)0x0)) &&
            (this_02->ID_AcceptNpc == param_2)) && (this_02->ID_AcceptZone == pUVar3->ZoneID)) {
          return AbleAccept;
        }
      }
      else if (this_00->QuestType == Repeat) {
        this_01 = FDS_QuestRepeatTableRow::GetRef(lVar4,true);
        bVar1 = FDS_QuestRepeatTableRow::IsValid(this_01);
        if (((bVar1) && (pUVar3 = UDS_ZoneManager::GetInst(), pUVar3 != (UDS_ZoneManager *)0x0)) &&
           ((this_01->ID_AcceptNpc == param_2 && (this_01->ID_AcceptZone == pUVar3->ZoneID)))) {
          return AbleAccept;
        }
      }
    }
    return NotAbleAccept;
  }
  return EVar2;
}

// GetQuestData @ 14bb0e390

TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> __cdecl UDS_QuestManager::GetQuestData(int param_1)

{
  bool bVar1;
  UDS_DataSetBase *this;
  ulong64 uVar2;
  int in_register_0000000c;
  FWeakObjectPtr this_00;
  bool in_DL;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  this_00.ObjectSerialNumber = in_register_0000000c;
  this_00.ObjectIndex = param_1;
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar2 = UDS_DataSetBase::GetEntityID(this);
    UDS_QuestData::GetData((ulong64)&local_res20,uVar2,in_DL);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      *(FWeakObjectPtr *)this_00 = local_res20;
      return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)this_00;
    }
  }
  *(undefined8 *)this_00 = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)local_18);
  return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)this_00;
}

// GetQuestIsland @ 14bb0e6f0

int __thiscall UDS_QuestManager::GetQuestIsland(UDS_QuestManager *this,int param_1)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  FDS_QuestMainTableRow *this_03;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar5,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (!bVar2) {
    return 0;
  }
  EVar1 = this_00->QuestType;
  iVar3 = 0;
  iVar4 = iVar3;
  if (EVar1 == Main) {
    this_03 = FDS_QuestMainTableRow::GetRef(lVar5,true);
    bVar2 = FDS_QuestMainTableRow::IsValid(this_03);
    if (bVar2) {
      iVar4 = this_03->ID_CompleteZone / 1000;
    }
  }
  else if (EVar1 == Local) {
    this_02 = FDS_QuestLocalTableRow::GetRef(lVar5,true);
    bVar2 = FDS_QuestLocalTableRow::IsValid(this_02);
    if (bVar2) {
      return this_02->ID_CompleteZone / 1000;
    }
  }
  else {
    iVar4 = 0;
    if (EVar1 == Repeat) {
      this_01 = FDS_QuestRepeatTableRow::GetRef(lVar5,true);
      bVar2 = FDS_QuestRepeatTableRow::IsValid(this_01);
      iVar4 = iVar3;
      if (bVar2) {
        return this_01->ID_CompleteZone / 1000;
      }
    }
  }
  return iVar4;
}

// GetQuestList @ 14bb0e810

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_QuestManager::GetQuestList
          (UDS_QuestManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_QuestType param_1,int param_2,bool param_3,bool param_4,bool param_5)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  EDS_QuestType EVar4;
  int iVar5;
  FDS_QuestLocalTableRow *pFVar6;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  ulonglong uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined4 local_res10 [2];
  EDS_QuestType local_res18;
  int local_res20;
  undefined1 in_stack_00000039;
  ForAnyElementType local_70;
  undefined4 local_68;
  int local_64;
  TArray<FDS_QuestBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_60;
  ForAnyElementType *local_50;
  UDS_QuestManager *local_48;
  undefined4 *local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  FDS_QuestBaseTableRow::GetAll(&local_60);
  iVar2 = local_60.ArrayNum;
  uVar7 = (ulonglong)local_60.ArrayNum;
  FVar9.Data = local_60.AllocatorInstance.Data + uVar7 * 8;
  FVar11.Data = local_60.AllocatorInstance.Data;
  local_70.Data = FVar9.Data;
  do {
    if (local_60.ArrayNum != (uint)uVar7) {
      `TCheckedPointerIterator<FDS_QuestBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar11.Data == FVar9.Data) {
      if (param_5 != false) {
        _param_5 = 0x301;
        local_68 = 2;
        local_70.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,2,0,&local_70,2,&local_64);
        memcpy(local_70.Data,&param_5,2);
        local_50 = &local_70;
        local_40 = local_res10;
        local_res10[0] = 0xffffffff;
        local_48 = this;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
                  ((int *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum,(FIdentityFunctor)param_5,
                   (<lambda_1> *)&local_50);
        if (local_70.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data);
        }
      }
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar1 = *(longlong *)FVar11.Data;
    if ((lVar1 != 0) &&
       ((!param_4 ||
        (bVar3 = IsQuestCompleted(this,*(int *)(lVar1 + 8)), FVar9.Data = local_70.Data, !bVar3))))
    {
      if (param_3) {
        iVar5 = *(int *)(lVar1 + 8);
        bVar3 = IsQuestCompleted(this,iVar5);
        if ((bVar3) && (EVar4 = GetQuestType(iVar5), EVar4 == Local)) {
          pFVar6 = FDS_QuestLocalTableRow::GetRef((longlong)iVar5,true);
          bVar3 = FDS_QuestLocalTableRow::IsValid(pFVar6);
          if ((bVar3) && (FVar9.Data = local_70.Data, pFVar6->QuestCompleteHide == true))
          goto LAB_14bb0ea01;
        }
        iVar5 = *(int *)(lVar1 + 8);
        bVar3 = CheckAcceptCondition(this,iVar5,0);
        if ((!bVar3) && (EVar4 = GetQuestType(iVar5), EVar4 == Local)) {
          pFVar6 = FDS_QuestLocalTableRow::GetRef((longlong)iVar5,true);
          bVar3 = FDS_QuestLocalTableRow::IsValid(pFVar6);
          if ((bVar3) && (FVar9.Data = local_70.Data, pFVar6->LockInvisible == true))
          goto LAB_14bb0ea01;
        }
      }
      FVar9.Data = local_70.Data;
      if (*(EDS_QuestType *)(lVar1 + 0x20) == param_1) {
        lVar10 = (longlong)*(int *)(lVar1 + 8);
        this_00 = FDS_QuestBaseTableRow::GetRef(lVar10,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
        iVar8 = 0;
        iVar5 = 0;
        if (bVar3) {
          iVar5 = iVar8;
          if (this_00->QuestType == Local) {
            pFVar6 = FDS_QuestLocalTableRow::GetRef(lVar10,true);
            bVar3 = FDS_QuestLocalTableRow::IsValid(pFVar6);
            if (bVar3) {
              iVar5 = pFVar6->ID_QuestCategory;
            }
          }
          else if (this_00->QuestType == Repeat) {
            this_01 = FDS_QuestRepeatTableRow::GetRef(lVar10,true);
            bVar3 = FDS_QuestRepeatTableRow::IsValid(this_01);
            if (bVar3) {
              iVar5 = this_01->ID_QuestCategory;
            }
          }
        }
        FVar9.Data = local_70.Data;
        param_1 = local_res18;
        if (iVar5 == local_res20) {
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               *(undefined4 *)(lVar1 + 8);
          FVar9.Data = local_70.Data;
          param_1 = local_res18;
        }
      }
    }
LAB_14bb0ea01:
    uVar7 = (ulonglong)(uint)iVar2;
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// GetQuestList @ 14bb0eb20

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UDS_QuestManager::GetQuestList
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,EDS_QuestType param_1,
          EDS_QuestStateType param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  EDS_QuestStateType EVar4;
  int iVar5;
  UDS_GameInstance *this;
  UClass *pUVar6;
  UDS_ManagerBase *pUVar7;
  ForAnyElementType FVar8;
  uint local_res8 [2];
  undefined2 local_res20 [4];
  ForAnyElementType local_78;
  undefined4 local_70;
  int local_6c;
  TArray<FDS_QuestBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType *local_58;
  UDS_ManagerBase *local_50;
  uint *local_48;
  
  local_res20[0] = CONCAT11(local_res20[0]._1_1_,param_3);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_QuestBaseTableRow::GetAll(&local_68);
  iVar2 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar8.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar2) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FDS_QuestBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar8.Data;
    if ((lVar3 != 0) && (*(EDS_QuestType *)(lVar3 + 0x20) == param_1)) {
      EVar4 = GetQuestStateType(*(int *)(lVar3 + 8));
      if (EVar4 == param_2) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
             *(undefined4 *)(lVar3 + 8);
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_res20[0]._0_1_ == (FIdentityFunctor)0x0) goto LAB_14bb0ecf1;
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) goto LAB_14bb0ecf1;
  pUVar6 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
  pUVar7 = UDS_GameInstance::GetManager(this,(FName)pUVar6->_padding_);
  if (pUVar7 == (UDS_ManagerBase *)0x0) {
LAB_14bb0ec5b:
    pUVar7 = (UDS_ManagerBase *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) goto LAB_14bb0ec5b;
  }
  if (pUVar7 != (UDS_ManagerBase *)0x0) {
    local_res20[0] = 0x301;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_78,2,&local_6c);
    memcpy(local_78.Data,local_res20,2);
    local_58 = &local_78;
    local_48 = local_res8;
    local_res8[0] = 0xffffffff;
    local_50 = pUVar7;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
              ((int *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum,local_res20[0]._0_1_,(<lambda_1> *)&local_58);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
LAB_14bb0ecf1:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetQuestList @ 14bb0ed30

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UDS_QuestManager::GetQuestList
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,EDS_QuestType param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  UDS_GameInstance *this;
  UClass *pUVar5;
  UDS_ManagerBase *pUVar6;
  ForAnyElementType FVar7;
  uint local_res8 [2];
  undefined2 local_res18 [8];
  ForAnyElementType local_78;
  undefined4 local_70;
  int local_6c;
  TArray<FDS_QuestBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType *local_58;
  UDS_ManagerBase *local_50;
  uint *local_48;
  
  local_res18[0] = CONCAT11(local_res18[0]._1_1_,param_2);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_QuestBaseTableRow::GetAll(&local_68);
  iVar2 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar7.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar2) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FDS_QuestBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar7.Data;
    if ((lVar3 != 0) && (*(EDS_QuestType *)(lVar3 + 0x20) == param_1)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) =
           *(undefined4 *)(lVar3 + 8);
    }
    FVar7.Data = FVar7.Data + 8;
  }
  if ((local_res18[0]._0_1_ == (FIdentityFunctor)0x0) ||
     (this = UDS_GameInstance::GetInst(), this == (UDS_GameInstance *)0x0)) goto LAB_14bb0eeba;
  pUVar5 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
  pUVar6 = UDS_GameInstance::GetManager(this,(FName)pUVar5->_padding_);
  if (pUVar6 == (UDS_ManagerBase *)0x0) {
LAB_14bb0ee26:
    pUVar6 = (UDS_ManagerBase *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) goto LAB_14bb0ee26;
  }
  if (pUVar6 != (UDS_ManagerBase *)0x0) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_res18[0] = 0x301;
    local_70 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_78,2,&local_6c);
    memcpy(local_78.Data,local_res18,2);
    local_58 = &local_78;
    local_48 = local_res8;
    local_res8[0] = 0xffffffff;
    local_50 = pUVar6;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
              ((int *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum,local_res18[0]._0_1_,(<lambda_1> *)&local_58);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
LAB_14bb0eeba:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetQuestListByInProgress @ 14bb0eef0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UDS_QuestManager::GetQuestListByInProgress
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UDS_QuestDataSet *this;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  UDS_GameInstance *this_00;
  UClass *pUVar7;
  UDS_ManagerBase *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType this_01;
  FWeakObjectPtr *pFVar11;
  ushort local_res8;
  undefined1 local_resa;
  FWeakObjectPtr *local_88;
  FWeakObjectPtr local_80;
  ForAnyElementType local_78;
  undefined4 local_70;
  int local_6c;
  TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType *local_58;
  UDS_ManagerBase *local_50;
  FWeakObjectPtr **local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_80);
  bVar3 = FWeakObjectPtr::IsValid(&local_80);
  if (!bVar3) goto LAB_14bb0f174;
  this = (UDS_QuestDataSet *)FWeakObjectPtr::Get(&local_80);
  UDS_QuestDataSet::GetAllData(this,&local_68);
  iVar2 = local_68.ArrayNum;
  uVar9 = (ulonglong)local_68.ArrayNum;
  pFVar11 = (FWeakObjectPtr *)(local_68.AllocatorInstance.Data + uVar9 * 8);
  this_01.Data = local_68.AllocatorInstance.Data;
  local_88 = pFVar11;
LAB_14bb0ef80:
  if ((uint)uVar9 != iVar2) {
    local_res8 = local_res8 & 0xff00;
    `TCheckedPointerIterator<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(&local_res8);
  }
  if ((FWeakObjectPtr *)this_01.Data != pFVar11) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01.Data);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar10 = pFVar6 + param_1->ArrayNum;
      if (pFVar6 != pFVar10) {
        do {
          if (*pFVar6 == (FScriptContainerElement)pUVar5[2].field_0x18) {
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
            pFVar6 = (param_2->AllocatorInstance).Data;
            pFVar10 = pFVar6 + param_2->ArrayNum;
            if (pFVar6 == pFVar10) goto LAB_14bb0f051;
            goto LAB_14bb0f002;
          }
          pFVar6 = pFVar6 + 1;
        } while (pFVar6 != pFVar10);
        uVar9 = (ulonglong)(uint)local_68.ArrayNum;
        this_01.Data = this_01.Data + 8;
        goto LAB_14bb0ef80;
      }
    }
LAB_14bb0f051:
    uVar9 = (ulonglong)(uint)local_68.ArrayNum;
    this_01.Data = this_01.Data + 8;
    goto LAB_14bb0ef80;
  }
  if ((param_3) && (this_00 = UDS_GameInstance::GetInst(), this_00 != (UDS_GameInstance *)0x0)) {
    pUVar7 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
    pUVar8 = UDS_GameInstance::GetManager(this_00,(FName)pUVar7->_padding_);
    if (pUVar8 == (UDS_ManagerBase *)0x0) {
LAB_14bb0f0bc:
      pUVar8 = (UDS_ManagerBase *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UDS_QuestManager_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) goto LAB_14bb0f0bc;
    }
    if (pUVar8 != (UDS_ManagerBase *)0x0) {
      local_res8 = 0x201;
      local_resa = 3;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&local_78,3,&local_6c);
      memcpy(local_78.Data,&local_res8,3);
      local_58 = &local_78;
      local_48 = &local_88;
      local_88 = (FWeakObjectPtr *)CONCAT44(local_88._4_4_,0xffffffff);
      local_50 = pUVar8;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
                ((int *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum,local_res8._0_1_,(<lambda_1> *)&local_58);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
    }
  }
  if ((FWeakObjectPtr *)local_68.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
LAB_14bb0f174:
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return __return_storage_ptr__;
  while (pFVar6 = pFVar6 + 1, pFVar6 != pFVar10) {
LAB_14bb0f002:
    if (*pFVar6 == (FScriptContainerElement)pUVar5[2].field_0x19) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
      uVar1 = *(undefined4 *)&pUVar5[2].field_0x8;
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) =
           uVar1;
      pFVar11 = local_88;
      goto LAB_14bb0f051;
    }
  }
  uVar9 = (ulonglong)(uint)local_68.ArrayNum;
  this_01.Data = this_01.Data + 8;
  goto LAB_14bb0ef80;
}

// GetQuestListByInProgress @ 14bb0f1b0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UDS_QuestManager::GetQuestListByInProgress
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  size_t sVar2;
  undefined2 local_res8 [4];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_48;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_38;
  
  local_res8[0] = 0x100;
  local_50 = 2;
  local_58.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_58,2,&local_4c);
  memcpy(local_58.Data,local_res8,2);
  _Src.Data = local_58.Data;
  sVar2 = (size_t)local_50;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = local_50;
  if (local_50 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_48.AllocatorInstance,local_50,&local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src.Data,sVar2);
  }
  local_38.ArrayNum = param_1->ArrayNum;
  sVar2 = (size_t)local_38.ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.ArrayNum == 0) {
    local_38.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
               &local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,pFVar1,sVar2);
  }
  GetQuestListByInProgress(__return_storage_ptr__,&local_38,&local_48,param_2);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetQuestListByInProgress @ 14bb0f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UDS_QuestManager::GetQuestListByInProgress
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  size_t _Size;
  undefined1 auStackY_b8 [32];
  undefined2 local_78 [4];
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_50;
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x908070605020100;
  local_68 = 8;
  local_70.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,8,0,&local_70,8,&local_64);
  memcpy(local_70.Data,&local_40,8);
  local_78[0] = 0x100;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_60,2,&local_54);
  memcpy(local_60.Data,local_78,2);
  FVar1.Data = local_60.Data;
  _Size = (size_t)local_58;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = local_58;
  if (local_58 == 0) {
    local_40.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_58,0,&local_40.AllocatorInstance,local_58,&local_40.ArrayMax);
    memcpy(local_40.AllocatorInstance.Data,FVar1.Data,_Size);
  }
  iVar2 = local_68;
  FVar1.Data = local_70.Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_68;
  if (local_68 == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_68,0,&local_50.AllocatorInstance,local_68,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2);
  }
  GetQuestListByInProgress(__return_storage_ptr__,&local_50,&local_40,param_1);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return __return_storage_ptr__;
}

// GetQuestRepeatCount @ 14bb0f4f0

int __thiscall UDS_QuestManager::GetQuestRepeatCount(UDS_QuestManager *this,int param_1)

{
  longlong lVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
      *(int *)&(this->CompletedQuest_Map).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CompletedQuest_Map).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->CompletedQuest_Map).field_0x48 - 1U & 9) *
                              4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->CompletedQuest_Map;
      do {
        if (*(char *)((longlong)iVar4 * 0x60 + lVar1) == '\t') {
          this_00 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                    ::FindChecked(&this->CompletedQuest_Map,Repeat);
          if (*(int *)&this_00->field_0x8 == *(int *)&this_00->field_0x34) {
            return 0;
          }
          puVar3 = *(undefined1 **)&this_00->field_0x40;
          if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
            puVar3 = &this_00->field_0x38;
          }
          iVar4 = *(int *)(puVar3 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & param_1) * 4);
          if (iVar4 == -1) {
            return 0;
          }
          do {
            if (*(int *)(*(longlong *)this_00 + (longlong)iVar4 * 0x10) == param_1) {
              piVar2 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                       ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)this_00,param_1);
              return *piVar2;
            }
            iVar4 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar4 * 0x10);
          } while (iVar4 != -1);
          return 0;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar1);
      } while (iVar4 != -1);
    }
  }
  return 0;
}

// GetQuestStateType @ 14bb0f5d0

EDS_QuestStateType __cdecl UDS_QuestManager::GetQuestStateType(int param_1)

{
  bool bVar1;
  UDS_DataSetBase *this;
  ulong64 uVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar2 = UDS_DataSetBase::GetEntityID(this);
    UDS_QuestData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      local_res10 = local_res20;
      goto LAB_14bb0f652;
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_18);
LAB_14bb0f652:
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return Max;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  return pUVar3[2].field_0x19;
}

// GetQuestType @ 14bb0f690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_QuestType __cdecl UDS_QuestManager::GetQuestType(int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_QuestBaseTableRow *this;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return None;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_QuestManager::GetQuestType",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x609,L"quest ID zero");
  }
  else {
    this = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this);
    if (bVar1) {
      return this->QuestType;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return None;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_QuestManager::GetQuestType",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x610,L"Invalid quest ID %d");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return None;
}

// GetQuestZoneID @ 14bb0f800

int __thiscall UDS_QuestManager::GetQuestZoneID(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestLocalTableRow *this_01;
  FDS_QuestMainTableRow *this_02;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1;
  this_00 = FDS_QuestBaseTableRow::GetRef(lVar3,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  if (this_00->QuestType == Main) {
    this_02 = FDS_QuestMainTableRow::GetRef(lVar3,true);
    bVar1 = FDS_QuestMainTableRow::IsValid(this_02);
    iVar2 = 0;
    if (bVar1) {
      iVar2 = this_02->ID_CompleteZone;
    }
  }
  else {
    iVar2 = 0;
    if (this_00->QuestType == Local) {
      this_01 = FDS_QuestLocalTableRow::GetRef(lVar3,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_01);
      iVar2 = 0;
      if (bVar1) {
        return this_01->ID_CompleteZone;
      }
    }
  }
  return iVar2;
}

// GetQuestidFromDBWorkItem @ 14bb0f8b0

int __thiscall
UDS_QuestManager::GetQuestidFromDBWorkItem(UDS_QuestManager *this,DbWorkItem *param_1)

{
  int iVar1;
  SqlLocalQuestTable local_58;
  
  iVar1 = 0;
  switch((param_1->_impl_)._oneof_case_[0]) {
  case 0x55:
    ds_game::SqlMainQuestTable::SqlMainQuestTable
              ((SqlMainQuestTable *)&local_58,(Arena *)0x0,
               (SqlMainQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlMainQuestTable_ds_game__6B_;
    ds_game::SqlMainQuestTable::~SqlMainQuestTable((SqlMainQuestTable *)&local_58);
    return local_58._impl_.quest_id_;
  case 0x56:
    ds_game::SqlLocalQuestTable::SqlLocalQuestTable
              (&local_58,(Arena *)0x0,(SqlLocalQuestTable *)(param_1->_impl_).Item_.characterlevel_)
    ;
    local_58._padding_ = (longlong)&___7SqlLocalQuestTable_ds_game__6B_;
    ds_game::SqlLocalQuestTable::~SqlLocalQuestTable(&local_58);
    return local_58._impl_.quest_id_;
  case 0x57:
    ds_game::SqlDailyQuestTable::SqlDailyQuestTable
              ((SqlDailyQuestTable *)&local_58,(Arena *)0x0,
               (SqlDailyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlDailyQuestTable_ds_game__6B_;
    ds_game::SqlDailyQuestTable::~SqlDailyQuestTable((SqlDailyQuestTable *)&local_58);
    return local_58._impl_.quest_id_;
  case 0x60:
    ds_game::SqlWeeklyQuestTable::SqlWeeklyQuestTable
              ((SqlWeeklyQuestTable *)&local_58,(Arena *)0x0,
               (SqlWeeklyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlWeeklyQuestTable_ds_game__6B_;
    ds_game::SqlWeeklyQuestTable::~SqlWeeklyQuestTable((SqlWeeklyQuestTable *)&local_58);
    return local_58._impl_.quest_id_;
  case 0x61:
    ds_game::SqlMonthlyQuestTable::SqlMonthlyQuestTable
              ((SqlMonthlyQuestTable *)&local_58,(Arena *)0x0,
               (SqlMonthlyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlMonthlyQuestTable_ds_game__6B_;
    ds_game::SqlMonthlyQuestTable::~SqlMonthlyQuestTable((SqlMonthlyQuestTable *)&local_58);
    return local_58._impl_.quest_id_;
  case 0x62:
    ds_game::SqlInstanceQuestTable::SqlInstanceQuestTable
              ((SqlInstanceQuestTable *)&local_58,(Arena *)0x0,
               (SqlInstanceQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
    ds_game::SqlInstanceQuestTable::~SqlInstanceQuestTable((SqlInstanceQuestTable *)&local_58);
    return local_58._impl_.quest_id_;
  case 0x68:
    ds_game::SqlRepeatQuestTable::SqlRepeatQuestTable
              ((SqlRepeatQuestTable *)&local_58,(Arena *)0x0,
               (SqlRepeatQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_58._padding_ = (longlong)&___7SqlRepeatQuestTable_ds_game__6B_;
    ds_game::SqlRepeatQuestTable::~SqlRepeatQuestTable((SqlRepeatQuestTable *)&local_58);
    iVar1 = local_58._impl_.quest_id_;
  }
  return iVar1;
}

// GetTotalQuestRepeatCount @ 14bb10c70

int __thiscall UDS_QuestManager::GetTotalQuestRepeatCount(UDS_QuestManager *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  iVar6 = iVar11;
  if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
      *(int *)&(this->CompletedQuest_Map).field_0x34) {
    puVar8 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->CompletedQuest_Map).field_0x38;
    }
    iVar12 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->CompletedQuest_Map).field_0x48 - 1U & 9)
                               * 4);
    iVar6 = 0;
    if (iVar12 != -1) {
      lVar9 = *(longlong *)&this->CompletedQuest_Map;
      while (*(char *)((longlong)iVar12 * 0x60 + lVar9) != '\t') {
        iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 + lVar9);
        if (iVar12 == -1) {
          return 0;
        }
      }
      pTVar7 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
               ::FindChecked(&this->CompletedQuest_Map,Repeat);
      iVar6 = *(int *)&pTVar7->field_0x28;
      iVar12 = 0;
      uVar4 = 1;
      iVar14 = 0;
      puVar8 = &pTVar7->field_0x10;
      iVar5 = 0;
      if (iVar6 != 0) {
        puVar15 = *(uint **)&pTVar7->field_0x20;
        if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
          puVar15 = (uint *)puVar8;
        }
        uVar10 = *puVar15;
        iVar12 = 0;
        iVar14 = 0;
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar12;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar12 + 1;
          iVar5 = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb10d9d;
          uVar10 = puVar15[lVar9 + 1];
        }
        uVar4 = -uVar10 & uVar10;
        uVar1 = (ulonglong)uVar4 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res10 = (int)lVar9;
        iVar5 = iVar14 + -1 + local_res10;
        if (iVar6 < iVar5) {
          iVar5 = iVar6;
        }
      }
LAB_14bb10d9d:
      uVar10 = *(uint *)&pTVar7->field_0x28;
      uVar16 = uVar10 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar4,iVar12);
      TStack_60.CurrentBitIndex = iVar5;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar10 >> 5;
      TStack_60._28_4_ = iVar5;
      TStack_60.BaseBitIndex = iVar14;
      uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
      if ((((int)uVar10 < 0) || (iVar6 < (int)uVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      uVar4 = *(uint *)&pTVar7->field_0x28;
      iVar6 = iVar11;
      if (uVar10 != uVar4) {
        puVar13 = *(undefined1 **)&pTVar7->field_0x20;
        if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
          puVar13 = puVar8;
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar12;
          uVar16 = uVar16 + 0x20;
          iVar12 = iVar12 + 1;
          uVar10 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14bb10eb0;
          uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar10 = (int)lVar9 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar10) {
          uVar10 = uVar4;
        }
      }
LAB_14bb10eb0:
      while( true ) {
        if (*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar10) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) break;
        iVar11 = *(int *)((longlong)TStack_60.CurrentBitIndex * 0x10 + 4 + *(longlong *)pTVar7);
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        iVar6 = iVar6 + iVar11;
      }
    }
  }
  return iVar6;
}

// GetTraceQuestID @ 14bb10f30

int __thiscall UDS_QuestManager::GetTraceQuestID(UDS_QuestManager *this)

{
  return this->TraceQuestID;
}

// HasQuestData @ 14bb113f0

bool __cdecl UDS_QuestManager::HasQuestData(int param_1)

{
  bool bVar1;
  UDS_DataSetBase *this;
  ulong64 uVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar2 = UDS_DataSetBase::GetEntityID(this);
    UDS_QuestData::GetData((ulong64)&local_res20,uVar2,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      local_res10 = local_res20;
      goto LAB_14bb11472;
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_18);
LAB_14bb11472:
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  return bVar1;
}

// HasQuestNewAbleCompleteSymbol @ 14bb11490

bool __thiscall
UDS_QuestManager::HasQuestNewAbleCompleteSymbol(UDS_QuestManager *this,EDS_QuestType param_1)

{
  undefined4 uVar1;
  EDS_QuestType *pEVar2;
  EDS_QuestType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x8 !=
      *(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->QuestNewAbleCompleteSymbolMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->QuestNewAbleCompleteSymbolMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EDS_QuestType *)
                 ((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->QuestNewAbleCompleteSymbolMap);
        if (*pEVar3 == param_1) {
          pEVar2 = pEVar3 + 8;
          if (pEVar3 == (EDS_QuestType *)0x0) {
            pEVar2 = (EDS_QuestType *)0x0;
          }
          if (pEVar2 == (EDS_QuestType *)0x0) {
            return false;
          }
          return 0 < (int)*(undefined4 *)(pEVar2 + 8);
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// HasQuestRewardItem @ 14bb11520

bool __thiscall UDS_QuestManager::HasQuestRewardItem(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  
  if (0 < param_1) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar1) {
      return 0 < this_00->ID_QuestRewardId;
    }
  }
  return false;
}

// Init @ 14bb13c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_QuestManager::Init(UDS_QuestManager *this)

{
  ulonglong uVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [4];
  int local_84;
  int local_80;
  undefined1 local_7c [4];
  int *local_78;
  ForAnyElementType *local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_80 = DS_CommonDataHelper::QuestAcceptIcon();
  local_78 = &local_84;
  local_84 = 2;
  local_70 = (ForAnyElementType *)&local_80;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestConditionType_&&,int_&&>_>
            (&this->QuestConditionIconID_Map,
             (TPairInitializer<EDS_QuestConditionType_&&,int_&&> *)local_7c,(bool *)(local_7c + 4));
  local_84 = DS_CommonDataHelper::QuestNotAcceptIcon();
  local_78 = &local_80;
  local_80 = 4;
  local_70 = (ForAnyElementType *)&local_84;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestConditionType_&&,int_&&>_>
            (&this->QuestConditionIconID_Map,
             (TPairInitializer<EDS_QuestConditionType_&&,int_&&> *)local_7c,(bool *)(local_7c + 4));
  local_84 = DS_CommonDataHelper::QuestOngoingIcon();
  local_78 = &local_80;
  local_80 = 3;
  local_70 = (ForAnyElementType *)&local_84;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestConditionType_&&,int_&&>_>
            (&this->QuestConditionIconID_Map,
             (TPairInitializer<EDS_QuestConditionType_&&,int_&&> *)local_7c,(bool *)(local_7c + 4));
  local_84 = DS_CommonDataHelper::QuestCompleteIcon();
  local_78 = &local_80;
  local_80 = 1;
  local_70 = (ForAnyElementType *)&local_84;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestConditionType_&&,int_&&>_>
            (&this->QuestConditionIconID_Map,
             (TPairInitializer<EDS_QuestConditionType_&&,int_&&> *)local_7c,(bool *)(local_7c + 4));
  local_84 = DS_CommonDataHelper::QuestObjectiveIcon();
  local_78 = &local_80;
  local_70 = (ForAnyElementType *)&local_84;
  local_80 = 0;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_QuestConditionType_&&,int_&&>_>
            (&this->QuestConditionIconID_Map,
             (TPairInitializer<EDS_QuestConditionType_&&,int_&&> *)local_7c,(bool *)(local_7c + 4));
  local_78 = (int *)local_88;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_70 = &local_68;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_88[0] = 2;
  TSet<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_QuestType_&&,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_&>_>
            (&this->CompletedQuest_Map,
             (TPairInitializer<EDS_QuestType_&&,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_&>
              *)local_7c,(bool *)(local_7c + 4));
  local_78 = (int *)local_88;
  local_88[0] = 9;
  local_70 = &local_68;
  TSet<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_QuestType_&&,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_&>_>
            (&this->CompletedQuest_Map,
             (TPairInitializer<EDS_QuestType_&&,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_&>
              *)local_7c,(bool *)(local_7c + 4));
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar1 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// IsMainQuestCompletable @ 14bb15790

bool __cdecl
UDS_QuestManager::IsMainQuestCompletable(TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_QuestManager *this;
  UObject *pUVar4;
  UDS_NPCDataSet *this_00;
  UDS_DataSetBase *this_01;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  local_res8 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this = GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      iVar2 = GetProgressMainQuestID();
      GetQuestData((int)&local_res10);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar4[2].field_0x19 == '\x01') {
          this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res8);
          bVar1 = UDS_NPCDataSet::HasQuest(this_00,iVar2);
          if (bVar1) {
            this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res8);
            iVar3 = UDS_DataSetBase::GetEntityTableID(this_01);
            bVar1 = CheckCompleteNpc(this,iVar2,iVar3);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}

// IsQuestCompleted @ 14bb16020

bool __thiscall UDS_QuestManager::IsQuestCompleted(UDS_QuestManager *this,int param_1)

{
  EDS_QuestType EVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FDS_QuestBaseTableRow *this_00;
  UObject *pUVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  int *piVar7;
  FDS_QuestRepeatTableRow *this_01;
  undefined1 *puVar8;
  FWeakObjectPtr local_res18;
  
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
  bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar3) {
    EVar1 = this_00->QuestType;
    if (EVar1 == Main) {
      iVar4 = GetProgressMainQuestID();
      return param_1 < iVar4;
    }
    if (EVar1 == Local) {
      if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
          *(int *)&(this->CompletedQuest_Map).field_0x34) {
        puVar8 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->CompletedQuest_Map).field_0x38;
        }
        iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->CompletedQuest_Map).field_0x48 - 1) &
                                  2) * 4);
        if (iVar4 != -1) {
          while (*(char *)((longlong)iVar4 * 0x60 + *(longlong *)&this->CompletedQuest_Map) !=
                 '\x02') {
            iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *(longlong *)&this->CompletedQuest_Map)
            ;
            if (iVar4 == -1) {
              return false;
            }
          }
          pTVar6 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                   ::FindChecked(&this->CompletedQuest_Map,Local);
          if (*(int *)&pTVar6->field_0x8 != *(int *)&pTVar6->field_0x34) {
            puVar8 = *(undefined1 **)&pTVar6->field_0x40;
            if (*(undefined1 **)&pTVar6->field_0x40 == (undefined1 *)0x0) {
              puVar8 = &pTVar6->field_0x38;
            }
            iVar4 = *(int *)(puVar8 + (ulonglong)(*(int *)&pTVar6->field_0x48 - 1U & param_1) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)(*(longlong *)pTVar6 + (longlong)iVar4 * 0x10) == param_1) {
                  return true;
                }
                iVar4 = *(int *)(*(longlong *)pTVar6 + 8 + (longlong)iVar4 * 0x10);
              } while (iVar4 != -1);
              return false;
            }
          }
        }
      }
    }
    else if (EVar1 == Repeat) {
      if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
          *(int *)&(this->CompletedQuest_Map).field_0x34) {
        puVar8 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->CompletedQuest_Map).field_0x38;
        }
        iVar4 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(this->CompletedQuest_Map).field_0x48 - 1U & 9) * 4);
        if (iVar4 != -1) {
          lVar2 = *(longlong *)&this->CompletedQuest_Map;
          while (*(char *)((longlong)iVar4 * 0x60 + lVar2) != '\t') {
            iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar2);
            if (iVar4 == -1) {
              return false;
            }
          }
          pTVar6 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                   ::FindChecked(&this->CompletedQuest_Map,Repeat);
          if (*(int *)&pTVar6->field_0x8 != *(int *)&pTVar6->field_0x34) {
            puVar8 = *(undefined1 **)&pTVar6->field_0x40;
            if (*(undefined1 **)&pTVar6->field_0x40 == (undefined1 *)0x0) {
              puVar8 = &pTVar6->field_0x38;
            }
            iVar4 = *(int *)(puVar8 + (ulonglong)(*(int *)&pTVar6->field_0x48 - 1U & param_1) * 4);
            if (iVar4 != -1) {
              while (*(int *)(*(longlong *)pTVar6 + (longlong)iVar4 * 0x10) != param_1) {
                iVar4 = *(int *)(*(longlong *)pTVar6 + 8 + (longlong)iVar4 * 0x10);
                if (iVar4 == -1) {
                  return false;
                }
              }
              piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                       ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)pTVar6,param_1);
              iVar4 = *piVar7;
              this_01 = FDS_QuestRepeatTableRow::GetRef((longlong)param_1,true);
              bVar3 = FDS_QuestRepeatTableRow::IsValid(this_01);
              if (bVar3) {
                return this_01->RepeatCount <= iVar4;
              }
            }
          }
        }
      }
    }
    else {
      GetQuestData((int)&local_res18);
      bVar3 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_res18);
        return pUVar5[2].field_0x19 == '\x03';
      }
    }
  }
  return false;
}

// IsQuestTarget @ 14bb162a0

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

bool __thiscall UDS_QuestManager::IsQuestTarget(UDS_QuestManager *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  int local_res18 [2];
  int local_res20 [2];
  
  bVar1 = IsQuestTarget(this,param_1,local_res20,local_res18);
  return bVar1;
}

// IsQuestTarget @ 14bb162c0

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
UDS_QuestManager::IsQuestTarget
          (UDS_QuestManager *this,FDS_EntityBase *param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UDS_QuestDataSet *this_00;
  UObject *pUVar5;
  FDS_QuestBaseTableRow *this_01;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *pFVar8;
  ForAnyElementType this_02;
  undefined1 local_68 [4];
  uint local_64;
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr *local_50;
  TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_58);
  bVar4 = FWeakObjectPtr::IsValid(&local_58);
  if (!bVar4) {
    return false;
  }
  this_00 = (UDS_QuestDataSet *)FWeakObjectPtr::Get(&local_58);
  UDS_QuestDataSet::GetAllData(this_00,&local_48);
  local_64 = local_48.ArrayNum;
  uVar6 = (ulonglong)(int)local_64;
  pFVar8 = (FWeakObjectPtr *)(local_48.AllocatorInstance.Data + uVar6 * 8);
  this_02.Data = local_48.AllocatorInstance.Data;
  local_50 = pFVar8;
  while( true ) {
    if (local_48.ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_68);
    }
    if ((FWeakObjectPtr *)this_02.Data == pFVar8) break;
    local_60 = *(FWeakObjectPtr *)this_02.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_60);
    if ((bVar4) && (pUVar5 = FWeakObjectPtr::Get(&local_60), pUVar5[2].field_0x19 != '\x01')) {
      pUVar5 = FWeakObjectPtr::Get(&local_60);
      this_01 = FDS_QuestBaseTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x8,true);
      bVar4 = FDS_QuestBaseTableRow::IsValid(this_01);
      if (bVar4) {
        pFVar7 = (this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
        iVar2 = (this_01->ID_QuestObjectiveId).ArrayNum;
        pFVar1 = pFVar7 + (longlong)iVar2 * 4;
        while( true ) {
          if ((this_01->ID_QuestObjectiveId).ArrayNum != iVar2) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_68);
          }
          pFVar8 = local_50;
          if (pFVar7 == pFVar1) break;
          iVar3 = *(int *)pFVar7;
          bVar4 = CheckQuestObjectiveTarget(this,iVar3,param_1);
          if (bVar4) {
            *param_3 = iVar3;
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            bVar4 = true;
            *param_2 = *(int *)&pUVar5[2].field_0x8;
            goto LAB_14bb16429;
          }
          pFVar7 = pFVar7 + 4;
        }
      }
    }
    this_02.Data = this_02.Data + 8;
    uVar6 = (ulonglong)local_64;
  }
  bVar4 = false;
LAB_14bb16429:
  if ((FWeakObjectPtr *)local_48.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar4;
}

// IsQuestTarget @ 14bb16470

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

bool __thiscall UDS_QuestManager::IsQuestTarget(UDS_QuestManager *this,ulong64 param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  ulong64 local_res10;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res10 = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    return false;
  }
  bVar1 = IsQuestTarget(this,pFVar2,local_res20,local_res18);
  return bVar1;
}

// IsQuestTarget @ 14bb164c0

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
UDS_QuestManager::IsQuestTarget(UDS_QuestManager *this,ulong64 param_1,int *param_2,int *param_3)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  ulong64 local_res10;
  
  local_res10 = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    return false;
  }
  bVar1 = IsQuestTarget(this,pFVar2,param_2,param_3);
  return bVar1;
}

// IsQuestTargetByNpcNormalTalk @ 14bb16530

bool __thiscall
UDS_QuestManager::IsQuestTargetByNpcNormalTalk(UDS_QuestManager *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  EDS_QuestStateType EVar4;
  FDS_NpcNormalTalkTableRow *this_00;
  FDS_QuestBaseTableRow *this_01;
  FDS_QuestObjectiveTableRow *this_02;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  
  this_00 = FDS_NpcNormalTalkTableRow::GetRef((longlong)param_2,true);
  bVar3 = FDS_NpcNormalTalkTableRow::IsValid(this_00);
  if ((bVar3) && (EVar4 = GetQuestStateType(this_00->TalkTypeCondition), EVar4 == Progress)) {
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this_00->TalkTypeCondition,true);
    bVar3 = FDS_QuestBaseTableRow::IsValid(this_01);
    if (bVar3) {
      pFVar5 = (this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_01->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_01->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar5 == pFVar1) break;
        this_02 = FDS_QuestObjectiveTableRow::GetRef((longlong)*(int *)pFVar5,true);
        bVar3 = FDS_QuestObjectiveTableRow::IsValid(this_02);
        if ((((bVar3) && (this_02->QuestDefineType == TalkAppointNpc)) &&
            (this_02->QuestDefineTarget == param_1)) &&
           (this_02->QuestDefineParameter == this_00->ID_DialogueGroupId)) {
          return true;
        }
        pFVar5 = pFVar5 + 4;
      }
    }
  }
  return false;
}

// IsRewardPutinInventory @ 14bb16610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_QuestManager::IsRewardPutinInventory(UDS_QuestManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRewardTableRow *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_118 [32];
  int local_e8;
  undefined4 local_e4;
  TPairInitializer<int_&,int_&> local_e0;
  undefined4 *local_d0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_c8;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (!bVar2) {
    return false;
  }
  pFVar7 = FDS_QuestRewardTableRow::GetRef((longlong)this_00->ID_QuestRewardId,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (!bVar2) {
    return false;
  }
  uVar10 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_4_ = 0;
  uVar8 = 0;
  local_44 = 0;
  local_78._12_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  iVar5 = (pFVar7->ID_RewardItemId).ArrayNum;
  uVar11 = uVar10;
  if (0 < iVar5) {
    do {
      uVar9 = (uint)uVar10;
      if ((-1 < (int)uVar9) && ((int)uVar9 < iVar5)) {
        uVar12 = ~uVar9 >> 0x1f;
        uVar6 = uVar8;
        if ((int)uVar9 < (pFVar7->ID_RewardItemId).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((0 < *(int *)((pFVar7->ID_RewardItemId).AllocatorInstance.Data + uVar11)) &&
           ((int)uVar9 < (pFVar7->RewardItemCount).ArrayNum)) {
          uVar6 = uVar8;
          if ((int)uVar9 < (pFVar7->RewardItemCount).ArrayNum) {
            uVar6 = uVar12;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (0 < *(int *)((pFVar7->RewardItemCount).AllocatorInstance.Data + uVar11)) {
            uVar6 = uVar8;
            if ((int)uVar9 < (pFVar7->ID_RewardItemId).ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            local_e8 = *(int *)((pFVar7->ID_RewardItemId).AllocatorInstance.Data + uVar11);
            uVar6 = 0;
            if ((int)uVar9 < (pFVar7->RewardItemCount).ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            local_e4 = *(undefined4 *)((pFVar7->RewardItemCount).AllocatorInstance.Data + uVar11);
            local_e0.Value = &local_e8;
            local_d0 = &local_e4;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_&,int_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_78,&local_e0,(bool *)&local_e0.Value);
          }
        }
      }
      iVar5 = (pFVar7->ID_RewardItemId).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 4;
    } while ((int)(uVar9 + 1) < iVar5);
  }
  if (0 < local_78._8_4_ - local_44) {
    local_c8.Elements._0_8_ = 0;
    local_c8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_c8.Elements._48_8_ = _UNK_150631d98;
    local_c8.Elements._8_8_ = 0;
    local_c8.Elements._32_8_ = 0;
    local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_c8.HashSize = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
              (&local_c8,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_78);
    bVar4 = DS_ItemDataUtil::HasAvailableInventorySlots
                      (PlayerNormal,
                       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )&local_c8);
    bVar2 = true;
    if (bVar4) goto LAB_14bb168d9;
  }
  bVar2 = false;
LAB_14bb168d9:
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  local_78._8_4_ = 0;
  if (local_78._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_44 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
    return bVar2;
  }
  return bVar2;
}

// OnAddQuestEvent @ 14bb1abb0

void __thiscall UDS_QuestManager::OnAddQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnAddQuestDataDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnAddQuestDataDelegate).Delegate,param_1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar2->OnChanedQuestDelegate,param_1,Add);
  }
  CheckQuestNewAbleCompleteSymbol(this,param_1);
  return;
}

// OnCancelQuestEvent @ 14bb1b730

void __thiscall UDS_QuestManager::OnCancelQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnCancelQuestDataDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnCancelQuestDataDelegate).Delegate,param_1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar2->OnChanedQuestDelegate,param_1,Cancel);
  }
  return;
}

// OnChangeIsland @ 14bb1b7a0

void __thiscall UDS_QuestManager::OnChangeIsland(UDS_QuestManager *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res18 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  RemoveAllQuestCoordinate(this);
  GetQuestListByInProgress(&local_18,false);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 4;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar3.Data == pFVar1) break;
    CheckQuestCoordinate(this,*(int *)FVar3.Data);
    FVar3.Data = FVar3.Data + 4;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnChangeItemDataSet @ 14bb1b840

void __thiscall
UDS_QuestManager::OnChangeItemDataSet(UDS_QuestManager *this,UDS_DataSetBase *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_QuestDataSet *this_00;
  UDS_QuestData *this_01;
  UObject *pUVar4;
  UDS_QuestEvent *pUVar5;
  int iVar6;
  ForAnyElementType this_02;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    this_00 = (UDS_QuestDataSet *)FWeakObjectPtr::Get(&local_res20);
    UDS_QuestDataSet::GetAllData(this_00,&local_38);
    iVar6 = local_38.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar6 * 8);
    this_02.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
      this_01 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
      bVar3 = UDS_QuestData::UpdateQuestObjectiveProgressByItem(this_01);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        iVar2 = *(int *)&pUVar4[2].field_0x8;
        pUVar5 = UDS_QuestEvent::GetEvent();
        if (pUVar5 != (UDS_QuestEvent *)0x0) {
          bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar5->OnUpdateQuestDataDelegate);
          if (bVar3) {
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar5->OnUpdateQuestDataDelegate).Delegate,iVar2);
          }
          FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
                    (&pUVar5->OnChanedQuestDelegate,iVar2,Update);
        }
        CheckQuestNewAbleCompleteSymbol(this,iVar2);
      }
      this_02.Data = this_02.Data + 8;
    }
    if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// OnChangeTraceQuestEvent @ 14bb1b970

void __thiscall UDS_QuestManager::OnChangeTraceQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedTraceQuestDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedTraceQuestDelegate).Delegate,param_1);
    }
  }
  return;
}

// OnChangedNpcTalking @ 14bb1cbb0

void __thiscall UDS_QuestManager::OnChangedNpcTalking(UDS_QuestManager *this,bool *param_1)

{
  SetQuestCoordinateShow(this,*param_1 == false);
  return;
}

// OnCompleteQuestEvent @ 14bb1d340

void __thiscall UDS_QuestManager::OnCompleteQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  if (this->RegisterQuestComplateEventQuestID == param_1) {
    this->RegisterQuestComplateEventQuestID = 0;
    pUVar2 = UDS_QuestEvent::GetEvent();
    if (pUVar2 != (UDS_QuestEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnCompleteQuestDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnCompleteQuestDelegate).Delegate,param_1);
      }
      FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
                (&pUVar2->OnChanedQuestDelegate,param_1,Complete);
    }
  }
  return;
}

// OnPhasingStartOrEndDelegate @ 14bb20b50

void __thiscall UDS_QuestManager::OnPhasingStartOrEndDelegate(UDS_QuestManager *this,bool *param_1)

{
  SetQuestCoordinateShow(this,*param_1 == false);
  return;
}

// OnRemoveQuestEvent @ 14bb21dd0

void __thiscall UDS_QuestManager::OnRemoveQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnRemoveQuestDataDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnRemoveQuestDataDelegate).Delegate,param_1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar2->OnChanedQuestDelegate,param_1,Remove);
  }
  RemoveQuestNewAbleCompleteSymbol(this,param_1);
  return;
}

// OnReqAcceptQuest @ 14bb21e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestManager::OnReqAcceptQuest(UDS_QuestManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_298 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (param_1 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6789033982785749468>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_QuestManager.cpp"
                       ,0x1dc,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar2) {
      bVar2 = IsQuestCompleted(this,param_1);
      if (bVar2) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_QuestManager::OnReqAcceptQuest",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x1e9,
                     L"this quest has already been completed. quest id = %d");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        FDS_QuestService::RequestQuestAccept(param_1);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_QuestManager::OnReqAcceptQuest",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x1e3,L"Invalid quest ID %d");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
  }
  return;
}

// OnReqAutoTracking @ 14bb22020

void __thiscall UDS_QuestManager::OnReqAutoTracking(UDS_QuestManager *this,int param_1,bool param_2)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  ulong64 uVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  undefined8 local_18 [2];
  
  if (param_1 < 1) {
    return;
  }
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_28);
  bVar1 = FWeakObjectPtr::IsValid(&local_28);
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_28);
    uVar2 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_20,uVar2,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_20);
    if (bVar1) {
      local_res20 = local_20;
      goto LAB_14bb220bc;
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
LAB_14bb220bc:
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar1) && (pUVar3 = FWeakObjectPtr::Get(&local_res20), (bool)pUVar3[2].field_0xc != param_2))
  {
    FDS_QuestService::ReqeustQuestAutoTracking(param_1,param_2);
  }
  return;
}

// OnReqCancelQuest @ 14bb22100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestManager::OnReqCancelQuest(UDS_QuestManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  undefined8 local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6789033982785749492>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_QuestManager.cpp"
                       ,500,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_160);
    bVar2 = FWeakObjectPtr::IsValid(&local_160);
    if (bVar2) {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_160);
      uVar3 = UDS_DataSetBase::GetEntityID(this_00);
      UDS_QuestData::GetData((ulong64)&local_158,uVar3,SUB41(param_1,0));
      bVar2 = FWeakObjectPtr::IsValid(&local_158);
      if (bVar2) {
        local_168 = local_158;
      }
      else {
        local_168.ObjectIndex = 0;
        local_168.ObjectSerialNumber = 0;
        local_148[0] = 0;
        FWeakObjectPtr::operator=(&local_168,(FObjectPtr)local_148);
      }
    }
    else {
      local_168.ObjectIndex = 0;
      local_168.ObjectSerialNumber = 0;
      local_150 = 0;
      FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_150);
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_168);
    if (bVar2) {
      FDS_QuestService::RequestQuestCancel(param_1);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_QuestManager::OnReqCancelQuest",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x1fb,L"not progress quest ID %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnReqNpcTalk @ 14bb222c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestManager::OnReqNpcTalk(UDS_QuestManager *this,ulong64 param_1,int param_2,int param_3)

{
  bool bVar1;
  FDS_QuestObjectiveTableRow *this_00;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)param_2,true);
  bVar1 = FDS_QuestObjectiveTableRow::IsValid(this_00);
  if (bVar1) {
    FDS_QuestService::RequestQuestNpcTalk(param_1,param_2,param_3);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestManager::OnReqNpcTalk",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x246,L"Invalid QuestObjective ID %d")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnReqQuestComplete @ 14bb223c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestManager::OnReqQuestComplete(UDS_QuestManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_QuestBaseTableRow *this_01;
  undefined1 auStackY_2e8 [32];
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr local_2a0;
  FWeakObjectPtr local_298;
  undefined8 local_290;
  undefined8 local_288;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (param_1 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6789033982785749510>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_QuestManager.cpp"
                       ,0x206,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_2a0);
    bVar2 = FWeakObjectPtr::IsValid(&local_2a0);
    if (bVar2) {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_2a0);
      uVar3 = UDS_DataSetBase::GetEntityID(this_00);
      UDS_QuestData::GetData((ulong64)&local_298,uVar3,SUB41(param_1,0));
      bVar2 = FWeakObjectPtr::IsValid(&local_298);
      if (bVar2) {
        local_2a8 = local_298;
      }
      else {
        local_2a8.ObjectIndex = 0;
        local_2a8.ObjectSerialNumber = 0;
        local_288 = 0;
        FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)&local_288);
      }
    }
    else {
      local_2a8.ObjectIndex = 0;
      local_2a8.ObjectSerialNumber = 0;
      local_290 = 0;
      FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)&local_290);
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_2a8);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_2a8);
      if (pUVar5[2].field_0x19 == '\x01') {
        this_01 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
        bVar2 = FDS_QuestBaseTableRow::IsValid(this_01);
        if (((!bVar2) || (this_01->ID_QuestRewardId < 1)) ||
           (bVar2 = IsRewardPutinInventory(this,param_1), bVar2)) {
          FDS_QuestService::RequestQuestComplete(param_1);
        }
        else {
          local_280._0_8_ = 0;
          local_280._8_8_ = 0;
          local_280._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x1111c,Alert_System_01,&local_280);
        }
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_QuestManager::OnReqQuestComplete",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x213,
                     L"not quest state in Complte (quest id = %d)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_QuestManager::OnReqQuestComplete",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x20d,L"not progress quest ID %d");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
  }
  return;
}

// OnReqQuestMove @ 14bb22690

void __thiscall UDS_QuestManager::OnReqQuestMove(UDS_QuestManager *this)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this_00;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> TStack_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> TStack_58;
  FDestructionSentinel FStack_48;
  undefined1 *puStack_30;
  FDestructionSentinel FStack_28;
  undefined1 *puStack_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&TStack_58);
  TStack_68.Object = pTVar4->Object;
  TStack_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = TStack_68.Object;
  if (((TStack_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4ee8) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(TStack_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4ee8;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::QuestMoveRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if (((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) &&
     (TStack_68.Object != (FDS_ClientMessage_Twoway *)0x0)) {
    if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = TStack_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(TStack_68.Object)->SuccessDel,(FWriteAccessScope *)&FStack_48);
    puStack_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = FDS_QuestService::ResponseQuestMove;
    }
    if (FStack_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
    }
    if (TStack_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = TStack_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(TStack_68.Object)->FailDel,(FWriteAccessScope *)&FStack_28);
    puStack_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = FDS_QuestService::ProcessError;
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::GetIsConnected(this_00);
      if (bVar3) {
        UDS_NetworkManager::SendTwoWayPacket(this_00,&TStack_68);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  return;
}

// OnReqQuestTrace @ 14bb226a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestManager::OnReqQuestTrace(UDS_QuestManager *this,int param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->TraceQuestID == param_1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuestManager::OnReqQuestTrace",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x235,L"tracking quest id same (questid = %d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    FDS_QuestService::ReqeustQuestTrace(param_1);
  }
  return;
}

// OnUpdateQuestEvent @ 14bb25120

void __thiscall UDS_QuestManager::OnUpdateQuestEvent(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnUpdateQuestDataDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnUpdateQuestDataDelegate).Delegate,param_1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar2->OnChanedQuestDelegate,param_1,Update);
  }
  CheckQuestNewAbleCompleteSymbol(this,param_1);
  return;
}

// OpenQuestContent @ 14bb26a90

void __thiscall UDS_QuestManager::OpenQuestContent(UDS_QuestManager *this,int param_1)

{
  EDS_QuestType EVar1;
  bool bVar2;
  int iVar3;
  UDS_DailyQuestManager *this_00;
  FDS_QuestDailySuggestTableRow *pFVar4;
  FDS_StuffBaseTableRow *this_01;
  FDS_StringWorldTableRow *this_02;
  FString *pFVar5;
  UDS_ContentManager *this_03;
  EDS_ContentsTabFrameType local_res18 [2];
  undefined8 local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  local_res18[0] = None;
  EVar1 = GetQuestType(param_1);
  if (EVar1 == Main) {
    local_res18[0] = QuestMain;
  }
  else if (EVar1 == Local) {
    local_res18[0] = QuestLocal;
  }
  else {
    if (EVar1 == Daily) {
      this_00 = UDS_DailyQuestManager::GetInst();
      if (this_00 == (UDS_DailyQuestManager *)0x0) {
        return;
      }
      iVar3 = UDS_DailyQuestManager::GetSuggestID(this_00,param_1);
      pFVar4 = FDS_QuestDailySuggestTableRow::Get((longlong)iVar3,true);
      if (pFVar4 == (FDS_QuestDailySuggestTableRow *)0x0) {
        return;
      }
      this_01 = FDS_StuffBaseTableRow::Get((longlong)pFVar4->ID_StuffBase,true);
      if (this_01 == (FDS_StuffBaseTableRow *)0x0) {
        return;
      }
      this_02 = FDS_StuffBaseTableRow::ID_NameTable(this_01);
      bVar2 = FDS_StringWorldTableRow::IsValid(this_02);
      if (!bVar2) {
        return;
      }
      pFVar5 = ::FString::FString(&local_38,&this_02->Text);
      FStringFormatArg::FStringFormatArg(&local_28,pFVar5);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_48.AllocatorInstance.Data,&local_28,1);
      if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x11119,Alert_None_01,&local_48,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if ((FStringFormatArg *)local_48.AllocatorInstance.Data == (FStringFormatArg *)0x0) {
        return;
      }
      FMemory::Free(local_48.AllocatorInstance.Data);
      return;
    }
    if (EVar1 == Repeat) {
      local_res18[0] = QuestRepeat;
    }
  }
  this_03 = UDS_ContentManager::GetInst();
  if (this_03 != (UDS_ContentManager *)0x0) {
    local_res20 = 0;
    UDS_ContentManager::OpenContent
              (this_03,local_res18,(TObjectPtr<UDS_ContentArguments>)&local_res20);
  }
  return;
}

// QuestAutoTrackingRespone @ 14bb29c50

void __thiscall
UDS_QuestManager::QuestAutoTrackingRespone
          (UDS_QuestManager *this,QuestAutoTrackingResponse *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UObject *pUVar4;
  UDS_QuestData *this_01;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  iVar1 = (param_1->_impl_).quest_id_;
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar3 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_res20,uVar3,SUB41(iVar1,0));
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      local_res10 = local_res20;
      goto LAB_14bb29cdb;
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_28);
LAB_14bb29cdb:
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    if ((bool)pUVar4[2].field_0xc != (param_1->_impl_).auto_tracking_) {
      this_01 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res10);
      UDS_QuestData::SetIsAutoTracking(this_01,(param_1->_impl_).auto_tracking_);
      OnUpdateQuestEvent(this,(param_1->_impl_).quest_id_);
    }
  }
  return;
}

// QuestCancelRespone @ 14bb29d30

void __thiscall
UDS_QuestManager::QuestCancelRespone(UDS_QuestManager *this,QuestCancelResponse *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  FDS_QuestBaseTableRow *this_00;
  FString *pFVar4;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  iVar1 = (param_1->_impl_).quest_id_;
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnCancelQuestDataDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnCancelQuestDataDelegate).Delegate,iVar1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar3->OnChanedQuestDelegate,iVar1,Cancel);
  }
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)iVar1,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
  if ((bVar2) && (this_00->QuestType == Instance)) {
    pFVar4 = FDS_QuestBaseTableRow::GetTitleString(this_00,&local_38);
    FStringFormatArg::FStringFormatArg(&local_28,pFVar4);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_48.AllocatorInstance.Data,&local_28,1);
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x11121,Complete_System_01,&local_48,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// QuestClaimRewardAllRespone @ 14bb29e90

void __thiscall
UDS_QuestManager::QuestClaimRewardAllRespone(UDS_QuestManager *this,ServerMessagesTwoway *param_1)

{
  return;
}

// QuestCompleteRespone @ 14bb29ea0

void __thiscall
UDS_QuestManager::QuestCompleteRespone(UDS_QuestManager *this,QuestCompleteResponse *param_1)

{
  int iVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *pFVar3;
  FString *pFVar4;
  UDS_SmallTalkManager *this_00;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  iVar1 = (param_1->_impl_).quest_id_;
  pFVar3 = FDS_QuestBaseTableRow::GetRef((longlong)iVar1,true);
  bVar2 = FDS_QuestBaseTableRow::IsValid(pFVar3);
  if (bVar2) {
    this->RegisterQuestComplateEventQuestID = iVar1;
    if (pFVar3->QuestCompleteMessage == true) {
      pFVar4 = FDS_QuestBaseTableRow::GetTitleString(pFVar3,&local_38);
      FStringFormatArg::FStringFormatArg(&local_28,pFVar4);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_48.AllocatorInstance.Data,&local_28,1);
      UDS_UIMessageManager::OpenMsgByStringUi
                (0xeac6,Complete_System_01,&local_48,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
      }
    }
    if (pFVar3->QuestType == Main) {
      if (0 < iVar1) {
        pFVar3 = FDS_QuestBaseTableRow::GetRef((longlong)iVar1,true);
        bVar2 = FDS_QuestBaseTableRow::IsValid(pFVar3);
        if ((bVar2) && (0 < pFVar3->ID_CompleteSmallTalk)) {
          this_00 = UDS_SmallTalkManager::GetInst();
          if (this_00 != (UDS_SmallTalkManager *)0x0) {
            UDS_SmallTalkManager::OnPlaySmallTalk(this_00,pFVar3->ID_CompleteSmallTalk,true);
          }
        }
      }
      OnCompleteQuestEvent(this,iVar1);
      RemoveQuestData(this,iVar1);
    }
  }
  return;
}

// QuestCompleteSmallTalk @ 14bb2a020

void __cdecl UDS_QuestManager::QuestCompleteSmallTalk(int *param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this;
  UDS_SmallTalkManager *this_00;
  
  if (0 < *param_1) {
    this = FDS_QuestBaseTableRow::GetRef((longlong)*param_1,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this);
    if (((bVar1) && (0 < this->ID_CompleteSmallTalk)) &&
       (this_00 = UDS_SmallTalkManager::GetInst(), this_00 != (UDS_SmallTalkManager *)0x0)) {
      UDS_SmallTalkManager::OnPlaySmallTalk(this_00,this->ID_CompleteSmallTalk,true);
      return;
    }
  }
  return;
}

// QuestInstanceLeaveGraceRespone @ 14bb2a080

void __thiscall
UDS_QuestManager::QuestInstanceLeaveGraceRespone
          (UDS_QuestManager *this,QuestLeaveGraceResponse *param_1)

{
  return;
}

// QuestObjectiveCountHudMsg @ 14bb2a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDS_QuestManager::QuestObjectiveCountHudMsg
          (int *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  FDS_QuestBaseTableRow *this;
  FDS_QuestObjectiveTableRow *this_00;
  FString *pFVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_120;
  undefined8 local_110;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((0 < *param_1) && (0 < *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34)) {
    this = FDS_QuestBaseTableRow::GetRef((longlong)*param_1,true);
    bVar7 = FDS_QuestBaseTableRow::IsValid(this);
    if ((bVar7) && (this->QuestCountMessage != false)) {
      iVar3 = *(int *)&param_2->field_0x28;
      uStack_fc = 1;
      iStack_100 = 0;
      puVar1 = &param_2->field_0x10;
      local_e8 = 0;
      iStack_ec = iStack_100;
      if (iVar3 != 0) {
        puVar14 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar14 = (uint *)puVar1;
        }
        uVar12 = *puVar14;
        local_e8 = 0;
        iStack_100 = 0;
        while (uVar12 == 0) {
          lVar9 = (longlong)iStack_100;
          local_e8 = local_e8 + 0x20;
          iStack_100 = iStack_100 + 1;
          iStack_ec = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_14bb2a1ae;
          uVar12 = puVar14[lVar9 + 1];
        }
        uStack_fc = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_fc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_ec = local_e8 + -1 + (int)lVar9;
        local_110 = CONCAT44(local_110._4_4_,(int)lVar9);
        if (iVar3 < iStack_ec) {
          iStack_ec = iVar3;
        }
      }
LAB_14bb2a1ae:
      uVar12 = *(uint *)&param_2->field_0x28;
      uVar11 = uVar12 & 0xffffffe0;
      iStack_e0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_f0 = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
      TStack_d0.CurrentBitIndex = iStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar10 = (int)uVar12 >> 5;
      TStack_d0._28_4_ = iStack_ec;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = param_2;
      local_f8 = puVar1;
      iStack_e4 = iStack_ec;
      local_d8 = param_2;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(uint *)&param_2->field_0x28;
      if (uVar12 != uVar4) {
        puVar13 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar13 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar10;
          uVar11 = uVar11 + 0x20;
          iVar10 = iVar10 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14bb2a2c0;
          uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar12 = (int)lVar9 + -1 + uVar11;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_14bb2a2c0:
      while( true ) {
        pTVar6 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_d0.CurrentBitIndex == uVar12) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar6 == param_2)) break;
        local_110 = *(undefined8 *)
                     (*(longlong *)pTVar6 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
        this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)(int)local_110,true);
        bVar7 = FDS_QuestObjectiveTableRow::IsValid(this_00);
        if (bVar7) {
          pFVar8 = (FString *)
                   (**(code **)((this_00->ID_QuestObjectiveId)._padding_ + 8))
                             (&this_00->ID_QuestObjectiveId);
          pFVar8 = ::FString::FString(&local_a8,pFVar8);
          FStringFormatArg::FStringFormatArg(&local_98,pFVar8);
          FStringFormatArg::FStringFormatArg(&local_78,local_110._4_4_);
          FStringFormatArg::FStringFormatArg(&local_58,this_00->QuestDefineCount);
          local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_120.AllocatorInstance,3,&local_120.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_120.AllocatorInstance.Data,&local_98,3);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0xeac5,Complete_None_01,&local_120,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
          if ((FStringFormatArg *)local_120.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
          if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
    }
  }
  return;
}

// QuestObjectiveCountSmallTalk @ 14bb2a470

void __cdecl
UDS_QuestManager::QuestObjectiveCountSmallTalk
          (int *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FDS_QuestObjectiveTableRow *this;
  UDS_SmallTalkManager *this_00;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar17;
  undefined1 local_res8 [8];
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_res10;
  int local_res18;
  int local_res20;
  int iStack_b4;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if ((0 < *param_1) &&
     (iVar16 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34, 0 < iVar16)) {
    iVar12 = 0;
    iVar14 = 0;
    uVar7 = 1;
    puVar1 = &param_2->field_0x10;
    iVar3 = *(int *)&param_2->field_0x28;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb2a53d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = iVar14 + -1 + local_res18;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14bb2a53d:
    uVar11 = *(uint *)&param_2->field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar7,iVar12);
    TStack_70.CurrentBitIndex = iVar8;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = iVar8;
    TStack_70.BaseBitIndex = iVar14;
    uStack_50 = CONCAT44(uStack_7c,iVar16);
    iVar16 = (int)uVar11 >> 5;
    local_res10 = param_2;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&param_2->field_0x28;
    pTVar17 = param_2;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&param_2->field_0x20;
      if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar16;
        uVar10 = uVar10 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14bb2a630;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar11 = local_res20 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14bb2a630:
    while( true ) {
      if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_70.CurrentBitIndex == uVar11) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (param_2 == pTVar17)) break;
      uVar4 = *(undefined8 *)(*(longlong *)param_2 + (longlong)TStack_70.CurrentBitIndex * 0x10);
      this = FDS_QuestObjectiveTableRow::GetRef((longlong)(int)uVar4,true);
      bVar6 = FDS_QuestObjectiveTableRow::IsValid(this);
      if (bVar6) {
        iVar16 = (this->CountSmallTalk).ArrayNum;
        uVar7 = 0;
        if (0 < iVar16) {
          iStack_b4 = (int)((ulonglong)uVar4 >> 0x20);
          lVar9 = 0;
          do {
            if (((-1 < (int)uVar7) && ((int)uVar7 < iVar16)) &&
               ((int)uVar7 < (this->ID_CountSmallTalk).ArrayNum)) {
              uVar10 = 0;
              if ((int)uVar7 < (this->CountSmallTalk).ArrayNum) {
                uVar10 = ~uVar7 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((iStack_b4 == *(int *)((this->CountSmallTalk).AllocatorInstance.Data + lVar9)) &&
                 (this_00 = UDS_SmallTalkManager::GetInst(), this_00 != (UDS_SmallTalkManager *)0x0)
                 ) {
                uVar10 = 0;
                if ((int)uVar7 < (this->ID_CountSmallTalk).ArrayNum) {
                  uVar10 = ~uVar7 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                UDS_SmallTalkManager::PlaySmallTalk
                          (this_00,*(int *)((this->ID_CountSmallTalk).AllocatorInstance.Data + lVar9
                                           ));
              }
            }
            iVar16 = (this->CountSmallTalk).ArrayNum;
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 4;
            pTVar17 = local_res10;
          } while ((int)uVar7 < iVar16);
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  return;
}

// QuestRepeatResetRespone @ 14bb2a7f0

void __thiscall
UDS_QuestManager::QuestRepeatResetRespone(UDS_QuestManager *this,QuestRepeatResetResponse *param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnQuestRepeatResetDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnQuestRepeatResetDelegate).Delegate);
      return;
    }
  }
  return;
}

// RemoveAllQuestCoordinate @ 14bb30a90

void __thiscall UDS_QuestManager::RemoveAllQuestCoordinate(UDS_QuestManager *this)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar2 = *(int *)&(this->QuestCoordinateMap).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->QuestCoordinateMap).field_0x10;
  iVar11 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = iVar11;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->QuestCoordinateMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_70.Array;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb30b2e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = local_res10 + -1 + iVar13;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_14bb30b2e:
  uVar10 = *(uint *)&(this->QuestCoordinateMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  puVar15 = &(this->QuestCoordinateMap).field_0x10;
  TStack_70.CurrentBitIndex = iVar6;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar5,iVar11);
  iVar11 = (int)uVar10 >> 5;
  TStack_70._28_4_ = iVar6;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->QuestCoordinateMap).field_0x8 -
                       *(int *)&(this->QuestCoordinateMap).field_0x34);
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(this->QuestCoordinateMap).field_0x28;
  if (uVar10 != uVar5) {
    puVar12 = *(undefined1 **)&(this->QuestCoordinateMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar15;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb30c30;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_14bb30c30:
  while( true ) {
    if (*(int *)&(this->QuestCoordinateMap).field_0x8 -
        *(int *)&(this->QuestCoordinateMap).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar10) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) break;
    pUVar7 = *(UObject **)
              (*(longlong *)&(this->QuestCoordinateMap).field_0x0 + 8 +
              (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar7 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar7 + 0x658))(pUVar7);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
           *)&this->QuestCoordinateMap);
  return;
}

// RemoveQuestCompleteData @ 14bb31b30

bool __thiscall
UDS_QuestManager::RemoveQuestCompleteData(UDS_QuestManager *this,DbWorkItem *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  SqlRepeatQuestCompleteTable local_38;
  
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  uVar7 = 0;
  if (uVar1 == 0x29) {
    ds_game::SqlQuestCompleteTable::SqlQuestCompleteTable
              ((SqlQuestCompleteTable *)&local_38,(Arena *)0x0,
               (SqlQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
    local_38._padding_ = (longlong)&___7SqlQuestCompleteTable_ds_game__6B_;
    uVar7 = 2;
    ds_game::SqlQuestCompleteTable::~SqlQuestCompleteTable((SqlQuestCompleteTable *)&local_38);
    uVar6 = local_38._impl_.quest_id_;
  }
  else {
    uVar6 = 0;
    if (uVar1 == 0x69) {
      ds_game::SqlRepeatQuestCompleteTable::SqlRepeatQuestCompleteTable
                (&local_38,(Arena *)0x0,
                 (SqlRepeatQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
      local_38._padding_ = (longlong)&___7SqlRepeatQuestCompleteTable_ds_game__6B_;
      uVar7 = 9;
      ds_game::SqlRepeatQuestCompleteTable::~SqlRepeatQuestCompleteTable(&local_38);
      uVar6 = local_38._impl_.quest_id_;
    }
  }
  if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
      *(int *)&(this->CompletedQuest_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompletedQuest_Map).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (*(int *)&(this->CompletedQuest_Map).field_0x48 - 1 & uVar7) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->CompletedQuest_Map;
      while (*(EDS_QuestType *)((longlong)iVar3 * 0x60 + lVar2) != (EDS_QuestType)uVar7) {
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + lVar2);
        if (iVar3 == -1) {
          return false;
        }
      }
      this_00 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                 ::FindChecked(&this->CompletedQuest_Map,(EDS_QuestType)uVar7);
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        FVar5 = (this_00->Hash).SecondaryData;
        if (FVar5 == (ForElementType<FSetElementId>)0x0) {
          FVar5 = (ForElementType<FSetElementId>)&this_00->Hash;
        }
        iVar3 = *(int *)((longlong)FVar5 + (ulonglong)(this_00->HashSize - 1U & uVar6) * 4);
        if (iVar3 != -1) {
          while (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar3 * 0x10) != uVar6) {
            iVar3 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar3 * 0x10);
            if (iVar3 == -1) {
              return false;
            }
          }
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
                    (this_00,uVar6);
        }
      }
    }
  }
  return false;
}

// RemoveQuestCoordinate @ 14bb31cb0

void __thiscall UDS_QuestManager::RemoveQuestCoordinate(UDS_QuestManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FDS_QuestBaseTableRow *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (0 < param_1) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar3) {
      pFVar4 = (this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_00->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_00->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar4 == pFVar1) break;
        RemoveQuestCoordinate(this,param_1,*(int *)pFVar4);
        pFVar4 = pFVar4 + 4;
      }
    }
  }
  return;
}

// RemoveQuestCoordinate @ 14bb31d50

void __thiscall
UDS_QuestManager::RemoveQuestCoordinate(UDS_QuestManager *this,int param_1,int param_2)

{
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *this_00;
  longlong lVar1;
  ADS_QuestCoordinate *pAVar2;
  bool bVar3;
  longlong lVar4;
  TObjectPtr<ADS_QuestCoordinate> *pTVar5;
  UObject *pUVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  FDS_QuestCoordinate_Key local_res20;
  ADS_QuestCoordinate *local_18 [2];
  
  this_00 = &this->QuestCoordinateMap;
  uVar11 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar7 = (-0x61c88647 - uVar11) - param_2 ^ uVar11 << 8;
  uVar9 = (param_2 - uVar7) - uVar11 ^ uVar7 >> 0xd;
  uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar7 = (uVar7 - uVar11) - uVar9 ^ uVar11 << 0x10;
  uVar9 = (uVar9 - uVar7) - uVar11 ^ uVar7 >> 5;
  uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar11) - uVar9 ^ uVar11 << 10;
  uVar7 = (uVar9 - uVar11) - uVar7 ^ uVar7 >> 0xf;
  if (*(int *)&(this->QuestCoordinateMap).field_0x8 !=
      *(int *)&(this->QuestCoordinateMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->QuestCoordinateMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->QuestCoordinateMap).field_0x38;
    }
    iVar10 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&(this->QuestCoordinateMap).field_0x48 - 1U & uVar7) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this_00->field_0x0;
      while (((lVar4 = (longlong)iVar10, *(int *)(lVar1 + lVar4 * 0x18) != param_1 ||
              (*(int *)(lVar1 + 4 + lVar4 * 0x18) == 0)) || (param_2 == 0))) {
        iVar10 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
        if (iVar10 == -1) {
          return;
        }
      }
      if (iVar10 != -1) {
        local_res20.QuestID = param_1;
        local_res20.QuestObjectiveID = param_2;
        pTVar5 = TMapBase<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
                 ::FindChecked((TMapBase<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
                                *)this_00,&local_res20);
        pAVar2 = (pTVar5->field0_0x0).DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pAVar2 != (ADS_QuestCoordinate *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pAVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar2 != (ADS_QuestCoordinate *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar2);
          }
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_18[0] = pAVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar2 != (ADS_QuestCoordinate *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar2);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
        bVar3 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar3) {
          pUVar6 = FWeakObjectPtr::Get(&local_res8);
          (**(code **)(*(longlong *)pUVar6 + 0x658))(pUVar6);
        }
        if (*(int *)&(this->QuestCoordinateMap).field_0x8 !=
            *(int *)&(this->QuestCoordinateMap).field_0x34) {
          TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FDS_QuestCoordinate_Key>
                    ((TSet<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>,FDefaultSetAllocator>
                      *)this_00,uVar7,&local_res20);
        }
      }
    }
  }
  return;
}

// RemoveQuestData @ 14bb31f30

bool __thiscall UDS_QuestManager::RemoveQuestData(UDS_QuestManager *this,DbWorkItem *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetQuestidFromDBWorkItem(this,param_1);
  if (iVar2 < 1) {
    return false;
  }
  bVar1 = RemoveQuestData(this,iVar2);
  return bVar1;
}

// RemoveQuestData @ 14bb31f60

bool __thiscall UDS_QuestManager::RemoveQuestData(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  UDS_QuestEvent *pUVar2;
  FWeakObjectPtr local_res18;
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  UDS_DataSetBase::RemoveData(this_00,(longlong)param_1);
  RemoveQuestCoordinate(this,param_1);
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnRemoveQuestDataDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnRemoveQuestDataDelegate).Delegate,param_1);
    }
    FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
              (&pUVar2->OnChanedQuestDelegate,param_1,Remove);
  }
  RemoveQuestNewAbleCompleteSymbol(this,param_1);
  return true;
}

// RemoveQuestNewAbleCompleteSymbol @ 14bb32020

void __thiscall
UDS_QuestManager::RemoveQuestNewAbleCompleteSymbol(UDS_QuestManager *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  EDS_QuestType EVar3;
  bool bVar4;
  undefined4 uVar5;
  UDS_QuestEvent *pUVar6;
  EDS_QuestType *pEVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  EDS_QuestType *pEVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res10 [2];
  ulonglong uVar13;
  
  local_res10[0] = param_1;
  EVar3 = GetQuestType(param_1);
  if (*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x8 !=
      *(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->QuestNewAbleCompleteSymbolMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->QuestNewAbleCompleteSymbolMap).field_0x38;
    }
    uVar5 = *(undefined4 *)
             (puVar9 + ((ulonglong)(*(int *)&(this->QuestNewAbleCompleteSymbolMap).field_0x48 - 1) &
                       (ulonglong)EVar3) * 4);
    if (uVar5 != 0xffffffff) {
      while (pEVar7 = (EDS_QuestType *)
                      ((longlong)(int)uVar5 * 0x20 +
                      *(longlong *)&this->QuestNewAbleCompleteSymbolMap), *pEVar7 != EVar3) {
        uVar5 = *(undefined4 *)(pEVar7 + 0x18);
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      pEVar14 = pEVar7 + 8;
      if (pEVar7 == (EDS_QuestType *)0x0) {
        pEVar14 = (EDS_QuestType *)0x0;
      }
      if (pEVar14 != (EDS_QuestType *)0x0) {
        if (((*(int **)pEVar14 <= local_res10) &&
            (local_res10 < *(int **)pEVar14 + (int)*(undefined4 *)(pEVar14 + 0xc))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = 0;
        uVar5 = *(undefined4 *)(pEVar14 + 8);
        if (uVar5 != None) {
          piVar1 = *(int **)pEVar14;
          bVar4 = *piVar1 != local_res10[0];
          uVar13 = uVar10;
          uVar16 = uVar10;
          iVar8 = local_res10[0];
          do {
            uVar11 = (uint)uVar13;
            uVar12 = uVar11;
            do {
              uVar10 = uVar10 + 1;
              uVar12 = uVar12 + 1;
              uVar13 = (ulonglong)uVar12;
              if ((longlong)(int)uVar5 <= (longlong)uVar10) break;
            } while (bVar4 == (piVar1[uVar10] != iVar8));
            if (bVar4 != false) {
              uVar15 = (uint)uVar16;
              if (uVar15 != uVar11) {
                memmove(piVar1 + (int)uVar15,piVar1 + (int)uVar11,
                        (longlong)(int)(uVar12 - uVar11) << 2);
                iVar8 = local_res10[0];
              }
              uVar16 = (ulonglong)(uVar15 + (uVar12 - uVar11));
            }
            bVar4 = (bool)(bVar4 ^ 1);
          } while ((longlong)uVar10 < (longlong)(int)uVar5);
          *(int *)(pEVar14 + 8) = (int)uVar16;
          if ((int)uVar16 != None) {
            return;
          }
        }
        pUVar6 = UDS_QuestEvent::GetEvent();
        if (pUVar6 != (UDS_QuestEvent *)0x0) {
          FDS_EventDelegate<enum_EDS_QuestType_const_>::Broadcast
                    (&pUVar6->NewAbleCompleteQuestSymbolDelegate,EVar3);
        }
      }
    }
  }
  return;
}

// Reset @ 14bb332d0

void __thiscall UDS_QuestManager::Reset(UDS_QuestManager *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_PhasingManager *pUVar3;
  UDS_ZoneManager *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_PhasingManager::GetInst();
  if (pUVar3 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->PhasingStartOrEndDelegate,this);
  }
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar4->IslandIdChangeDelegate,(UObject *)this);
  }
  RemoveAllQuestCoordinate(this);
  this->TraceQuestID = 0;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestConditionIconID_Map);
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestConditionIconResourceColorID_Map);
  TSet<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->CompletedQuest_Map);
  TSet<TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestNewAbleCompleteSymbolMap);
  return;
}

// ResetVariables @ 14bb33950

void __thiscall UDS_QuestManager::ResetVariables(UDS_QuestManager *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_PhasingManager *pUVar3;
  UDS_ZoneManager *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_PhasingManager::GetInst();
  if (pUVar3 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->PhasingStartOrEndDelegate,this);
  }
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar4->IslandIdChangeDelegate,(UObject *)this);
  }
  RemoveAllQuestCoordinate(this);
  this->TraceQuestID = 0;
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestConditionIconID_Map);
  TSet<TTuple<enum_EDS_QuestConditionType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestConditionIconResourceColorID_Map);
  TSet<TTuple<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->CompletedQuest_Map);
  TSet<TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestNewAbleCompleteSymbolMap);
  return;
}

// SetQuestCoordinateShow @ 14bb37100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDS_QuestManager::SetQuestCoordinateShow(UDS_QuestManager *this,bool param_1)

{
  FWeakObjectPtr *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UDS_GameInstance *this_01;
  UClass *pUVar10;
  UDS_ManagerBase *pUVar11;
  FDS_EffectList *pFVar12;
  UPrimitiveComponent *pUVar13;
  int iVar14;
  UDS_ManagerBase *pUVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *pTVar21;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *local_b0;
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  UObject *local_78;
  FWeakObjectPtr local_70;
  TMap<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar21 = &this->QuestCoordinateMap;
  iStack_a0 = 0;
  iVar8 = *(int *)&(this->QuestCoordinateMap).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->QuestCoordinateMap).field_0x10;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(this->QuestCoordinateMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      iStack_a0 = iStack_a0 + 1;
      local_88 = local_88 + 0x20;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14bb371ac;
      uVar17 = puVar19[iStack_a0];
    }
    uStack_9c = ~(uVar17 - 1) & uVar17;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_8c = (int)lVar4 + -1 + local_88;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_14bb371ac:
  uVar17 = *(uint *)&(this->QuestCoordinateMap).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_80 = *(int *)&(this->QuestCoordinateMap).field_0x8 -
              *(int *)&(this->QuestCoordinateMap).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_b8 = pTVar20;
  local_b0 = pTVar21;
  local_a8 = pTVar21;
  local_98 = (undefined1 *)pTVar20;
  iStack_84 = iStack_8c;
  local_68 = pTVar21;
  TStack_60.Array = pTVar20;
  if ((((int)uVar17 < 0) || (iVar8 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(this->QuestCoordinateMap).field_0x28;
  if (uVar17 != uVar2) {
    puVar3 = *(undefined1 **)&(this->QuestCoordinateMap).field_0x20;
    puVar18 = (undefined1 *)pTVar20;
    if (puVar3 != (undefined1 *)0x0) {
      puVar18 = puVar3;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      iVar14 = iVar14 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar14) goto LAB_14bb372b0;
      uVar17 = *(uint *)(puVar18 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = (int)lVar4 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar17) {
      uVar17 = uVar2;
    }
  }
LAB_14bb372b0:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar17) && (TStack_60.Array == pTVar20)) &&
       (pTVar6 == pTVar21)) {
      return;
    }
    pUVar9 = *(UObject **)(*(longlong *)pTVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar9 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
      }
    }
    pUVar15 = (UDS_ManagerBase *)0x0;
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_78 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_78);
    bVar7 = FWeakObjectPtr::IsValid(&local_c8);
    if (bVar7) {
      pUVar9 = FWeakObjectPtr::Get(&local_c8);
      (**(code **)(*(longlong *)pUVar9 + 0x368))(pUVar9,!param_1);
      this_01 = UDS_GameInstance::GetInst();
      if (this_01 != (UDS_GameInstance *)0x0) {
        pUVar10 = Z_Construct_UClass_UDS_EffectManager_NoRegister();
        pUVar11 = UDS_GameInstance::GetManager(this_01,(FName)pUVar10->_padding_);
        if (pUVar11 == (UDS_ManagerBase *)0x0) {
LAB_14bb373e5:
          pUVar11 = pUVar15;
        }
        else {
          pUVar10 = Z_Construct_UClass_UDS_EffectManager_NoRegister();
          iVar8 = (int)pUVar10->_padding_;
          if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar10->_padding_)) goto LAB_14bb373e5;
        }
        if (pUVar11 != (UDS_ManagerBase *)0x0) {
          local_c0 = local_c8;
          bVar7 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_c0,(void *)0x0);
          if (!bVar7) {
            local_70 = local_c0;
            iVar8 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                              ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                                *)(pUVar11 + 1),local_c0.ObjectSerialNumber ^ local_c0.ObjectIndex,
                               (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_70);
            if (iVar8 != -1) {
              pFVar12 = TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
                        ::FindChecked((TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
                                       *)(pUVar11 + 1),
                                      (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_c0);
              iVar8 = (pFVar12->NiagaraComponentList).ArrayNum;
              pUVar11 = pUVar15;
              pTVar20 = local_b8;
              pTVar21 = local_b0;
              if (0 < iVar8) {
                do {
                  if (((pFVar12->NiagaraComponentList).ArrayNum <= (int)pUVar15) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  this_00 = (FWeakObjectPtr *)
                            ((pFVar12->NiagaraComponentList).AllocatorInstance.Data +
                            (longlong)pUVar11 * 8);
                  bVar7 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)this_00,
                                     (void *)0x0);
                  if (!bVar7) {
                    pUVar13 = (UPrimitiveComponent *)FWeakObjectPtr::Get(this_00);
                    if (param_1) {
                      WN_UnregisterHiddenPrimitive(pUVar13,true);
                    }
                    else {
                      WN_RegisterHiddenPrimitive(pUVar13,true);
                    }
                  }
                  uVar16 = (int)pUVar15 + 1;
                  pUVar15 = (UDS_ManagerBase *)(ulonglong)uVar16;
                  pUVar11 = (UDS_ManagerBase *)((longlong)&pUVar11->_padding_ + 1);
                  pTVar20 = local_b8;
                  pTVar21 = local_b0;
                } while ((int)uVar16 < iVar8);
              }
            }
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SetTraceQuestID @ 14bb37ab0

void __thiscall UDS_QuestManager::SetTraceQuestID(UDS_QuestManager *this,int param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  
  if (this->TraceQuestID != param_1) {
    this->TraceQuestID = param_1;
    pUVar2 = UDS_QuestEvent::GetEvent();
    if (pUVar2 != (UDS_QuestEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangedTraceQuestDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangedTraceQuestDelegate).Delegate,param_1);
      }
    }
  }
  return;
}

// SortQuestCondition @ 14bb38240

int __thiscall
UDS_QuestManager::SortQuestCondition(UDS_QuestManager *this,int *param_1,int *param_2)

{
  EDS_QuestConditionSortOrder EVar1;
  EDS_QuestConditionSortOrder EVar2;
  int iVar3;
  
  EVar1 = GetQuestConditionSortOrder(this,*param_2);
  EVar2 = GetQuestConditionSortOrder(this,*param_1);
  if (EVar2 == EVar1) {
    return 0;
  }
  iVar3 = -1;
  if (EVar1 < EVar2) {
    iVar3 = 1;
  }
  return iVar3;
}

// SortQuestList @ 14bb382b0

void __thiscall
UDS_QuestManager::SortQuestList
          (UDS_QuestManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EDS_QuestSortType,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int local_res20 [2];
  TArray<EDS_QuestSortType,TSizedDefaultAllocator<32>_> *local_28;
  UDS_QuestManager *local_20;
  int *local_18;
  
  local_res20[0] = (param_3 ^ 1) * 2 + -1;
  local_18 = local_res20;
  local_28 = param_2;
  local_20 = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_QuestManager::SortQuestList_::__l2::<lambda_1>_>_>
            ((int *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res20[0]._0_1_,
             (<lambda_1> *)&local_28);
  return;
}

// SortQuestTID @ 14bb38300

int __thiscall UDS_QuestManager::SortQuestTID(UDS_QuestManager *this,int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == *param_2) {
    return 0;
  }
  iVar1 = -1;
  if (*param_2 <= *param_1) {
    iVar1 = 1;
  }
  return iVar1;
}

// SortQuestType @ 14bb38320

int __thiscall UDS_QuestManager::SortQuestType(UDS_QuestManager *this,int *param_1,int *param_2)

{
  EDS_QuestType EVar1;
  EDS_QuestType EVar2;
  int iVar3;
  
  EVar1 = GetQuestType(*param_2);
  EVar2 = GetQuestType(*param_1);
  if (EVar2 == EVar1) {
    return 0;
  }
  iVar3 = -1;
  if (EVar1 < EVar2) {
    iVar3 = 1;
  }
  return iVar3;
}

// UnbindDelegate @ 14bb3bc10

void __thiscall UDS_QuestManager::UnbindDelegate(UDS_QuestManager *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_PhasingManager *pUVar3;
  UDS_ZoneManager *pUVar4;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_PhasingManager::GetInst();
  if (pUVar3 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->PhasingStartOrEndDelegate,this);
  }
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar4->IslandIdChangeDelegate,(UObject *)this);
  }
  return;
}

// UpdateQuestCompleteData @ 14bb3f500

bool __thiscall
UDS_QuestManager::UpdateQuestCompleteData(UDS_QuestManager *this,DbWorkItem *param_1)

{
  TMap<EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *this_00;
  uint uVar1;
  int iVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_01;
  int *piVar4;
  undefined1 *puVar5;
  EDS_QuestType EVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  int local_res18 [4];
  uint *local_58;
  int *local_50;
  SqlRepeatQuestCompleteTable local_48;
  
  uVar7 = 0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 0x29) {
    ds_game::SqlQuestCompleteTable::SqlQuestCompleteTable
              ((SqlQuestCompleteTable *)&local_48,(Arena *)0x0,
               (SqlQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
    uVar7 = 2;
    local_48._padding_ = (longlong)&___7SqlQuestCompleteTable_ds_game__6B_;
    local_res10[0] = local_48._impl_.quest_id_;
    ds_game::SqlQuestCompleteTable::~SqlQuestCompleteTable((SqlQuestCompleteTable *)&local_48);
  }
  else if (uVar1 == 0x69) {
    ds_game::SqlRepeatQuestCompleteTable::SqlRepeatQuestCompleteTable
              (&local_48,(Arena *)0x0,
               (SqlRepeatQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
    uVar7 = 9;
    local_48._padding_ = (longlong)&___7SqlRepeatQuestCompleteTable_ds_game__6B_;
    local_res10[0] = local_48._impl_.quest_id_;
    local_res18[0] = local_48._impl_.complete_count_;
    ds_game::SqlRepeatQuestCompleteTable::~SqlRepeatQuestCompleteTable(&local_48);
  }
  if ((int)local_res10[0] < 1) {
    return false;
  }
  this_00 = &this->CompletedQuest_Map;
  if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
      *(int *)&(this->CompletedQuest_Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CompletedQuest_Map).field_0x38;
    }
    EVar6 = (EDS_QuestType)uVar7;
    iVar2 = *(int *)(puVar5 + (*(int *)&(this->CompletedQuest_Map).field_0x48 - 1 & uVar7) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_QuestType *)((longlong)iVar2 * 0x60 + *(longlong *)this_00) == EVar6) {
          pTVar3 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                   ::FindChecked(this_00,EVar6);
          if (*(int *)&pTVar3->field_0x8 == *(int *)&pTVar3->field_0x34) goto LAB_14bb3f649;
          puVar5 = *(undefined1 **)&pTVar3->field_0x40;
          if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
            puVar5 = &pTVar3->field_0x38;
          }
          iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&pTVar3->field_0x48 - 1U & local_res10[0]) *
                                    4);
          if (iVar2 == -1) goto LAB_14bb3f649;
          goto LAB_14bb3f634;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + *(longlong *)this_00);
      } while (iVar2 != -1);
    }
  }
  goto LAB_14bb3f677;
  while (iVar2 = *(int *)(*(longlong *)pTVar3 + 8 + (longlong)iVar2 * 0x10), iVar2 != -1) {
LAB_14bb3f634:
    if (*(uint *)(*(longlong *)pTVar3 + (longlong)iVar2 * 0x10) == local_res10[0]) {
      if (iVar2 != -1) {
        pTVar3 = TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                 ::FindChecked(this_00,EVar6);
        iVar2 = local_res18[0];
        piVar4 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                 FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)pTVar3,local_res10[0]);
        *piVar4 = iVar2;
        goto LAB_14bb3f677;
      }
      break;
    }
  }
LAB_14bb3f649:
  this_01 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
            ::FindChecked(this_00,EVar6);
  local_58 = local_res10;
  local_50 = local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&,int_&>_>
            (this_01,(TPairInitializer<int_&,int_&> *)(local_res18 + 2),(bool *)&local_58);
LAB_14bb3f677:
  OnCompleteQuestEvent(this,local_res10[0]);
  return true;
}

// UpdateQuestCoordinate @ 14bb3f6c0

void __thiscall UDS_QuestManager::UpdateQuestCoordinate(UDS_QuestManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UDS_DataSetBase *this_00;
  ulong64 uVar5;
  FDS_QuestBaseTableRow *this_01;
  UObject *pUVar6;
  UDS_QuestData *this_02;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  
  if (param_1 < 1) {
    return;
  }
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res20);
    uVar5 = UDS_DataSetBase::GetEntityID(this_00);
    UDS_QuestData::GetData((ulong64)&local_48,uVar5,SUB41(param_1,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_48);
    if (bVar4) {
      local_res18 = local_48;
      goto LAB_14bb3f768;
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
LAB_14bb3f768:
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
    bVar4 = FDS_QuestBaseTableRow::IsValid(this_01);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      if (pUVar6[2].field_0x19 == '\x01') {
        RemoveQuestCoordinate(this,param_1);
        return;
      }
      pFVar7 = (this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_01->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_01->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar7 == pFVar1) break;
        iVar3 = *(int *)pFVar7;
        this_02 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res18);
        bVar4 = UDS_QuestData::IsGoalQuestObjective(this_02,iVar3);
        if (bVar4) {
          RemoveQuestCoordinate(this,param_1,iVar3);
        }
        pFVar7 = pFVar7 + 4;
      }
    }
  }
  return;
}

// UpdateQuestData @ 14bb3f860

bool __thiscall UDS_QuestManager::UpdateQuestData(UDS_QuestManager *this,DbWorkItem *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  UDS_DataSetBase *pUVar7;
  ulong64 uVar8;
  UDS_QuestData *pUVar9;
  UDS_QuestEvent *pUVar10;
  FDS_QuestBaseTableRow *this_00;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  undefined8 local_48 [2];
  
  iVar6 = GetQuestidFromDBWorkItem(this,param_1);
  if (iVar6 < 1) {
    return false;
  }
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_60);
  bVar4 = FWeakObjectPtr::IsValid(&local_60);
  if (!bVar4) {
    return false;
  }
  pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_60);
  bVar4 = UDS_DataSetBase::HasData(pUVar7,(longlong)iVar6);
  pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_60);
  uVar8 = UDS_DataSetBase::GetEntityID(pUVar7);
  UDS_QuestData::GetData((ulong64)&local_58,uVar8,SUB41(iVar6,0));
  bVar5 = FWeakObjectPtr::IsValid(&local_58);
  if (!bVar5) {
    return false;
  }
  pUVar9 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_58);
  if (!bVar4) {
    UDS_QuestData::InitQuestData(pUVar9,param_1);
    pUVar10 = UDS_QuestEvent::GetEvent();
    if (pUVar10 != (UDS_QuestEvent *)0x0) {
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar10->OnAddQuestDataDelegate);
      if (bVar4) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar10->OnAddQuestDataDelegate).Delegate,iVar6);
      }
      FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
                (&pUVar10->OnChanedQuestDelegate,iVar6,Add);
    }
    CheckQuestNewAbleCompleteSymbol(this,iVar6);
    CheckQuestCoordinate(this,iVar6);
    return true;
  }
  UDS_QuestData::UpdateQuestData(pUVar9,param_1);
  OnUpdateQuestEvent(this,iVar6);
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res20);
    uVar8 = UDS_DataSetBase::GetEntityID(pUVar7);
    UDS_QuestData::GetData((ulong64)&local_50,uVar8,SUB41(iVar6,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_50);
    if (bVar4) {
      local_68 = local_50;
      goto LAB_14bb3f9ee;
    }
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_48[0] = 0;
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)local_48);
LAB_14bb3f9ee:
  bVar4 = FWeakObjectPtr::IsValid(&local_68);
  if (bVar4) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)iVar6,true);
    bVar4 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar4) {
      pUVar11 = FWeakObjectPtr::Get(&local_68);
      if (pUVar11[2].field_0x19 == '\x01') {
        RemoveQuestCoordinate(this,iVar6);
        return false;
      }
      pFVar12 = (this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      iVar2 = (this_00->ID_QuestObjectiveId).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this_00->ID_QuestObjectiveId).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res20);
        }
        if (pFVar12 == pFVar1) break;
        iVar3 = *(int *)pFVar12;
        pUVar9 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_68);
        bVar4 = UDS_QuestData::IsGoalQuestObjective(pUVar9,iVar3);
        if (bVar4) {
          RemoveQuestCoordinate(this,iVar6,iVar3);
        }
        pFVar12 = pFVar12 + 4;
      }
    }
  }
  return false;
}

// UpdateQuestProgressByItemDataSetUpdate @ 14bb3fae0

void __thiscall UDS_QuestManager::UpdateQuestProgressByItemDataSetUpdate(UDS_QuestManager *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_QuestDataSet *this_00;
  UDS_QuestData *this_01;
  UObject *pUVar4;
  UDS_QuestEvent *pUVar5;
  int iVar6;
  ForAnyElementType this_02;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    this_00 = (UDS_QuestDataSet *)FWeakObjectPtr::Get(&local_res18);
    UDS_QuestDataSet::GetAllData(this_00,&local_38);
    iVar6 = local_38.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar6 * 8);
    this_02.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
      this_01 = (UDS_QuestData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
      bVar3 = UDS_QuestData::UpdateQuestObjectiveProgressByItem(this_01);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        iVar2 = *(int *)&pUVar4[2].field_0x8;
        pUVar5 = UDS_QuestEvent::GetEvent();
        if (pUVar5 != (UDS_QuestEvent *)0x0) {
          bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar5->OnUpdateQuestDataDelegate);
          if (bVar3) {
            TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar5->OnUpdateQuestDataDelegate).Delegate,iVar2);
          }
          FDS_EventDelegate<int_const_,enum_EDS_QuestDataType_const_>::Broadcast
                    (&pUVar5->OnChanedQuestDelegate,iVar2,Update);
        }
        CheckQuestNewAbleCompleteSymbol(this,iVar2);
      }
      this_02.Data = this_02.Data + 8;
    }
    if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateQuestTracking @ 14bb3fc10

void __thiscall UDS_QuestManager::UpdateQuestTracking(UDS_QuestManager *this,DbWorkItem *param_1)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  SqlQuestTrackingTableDefaultTypeInternal *pSVar3;
  SqlQuestTrackingTable local_38;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x53) {
    pSVar3 = (SqlQuestTrackingTableDefaultTypeInternal *)(param_1->_impl_).Item_.characterlevel_;
  }
  else {
    pSVar3 = &ds_game::_SqlQuestTrackingTable_default_instance_;
  }
  ds_game::SqlQuestTrackingTable::SqlQuestTrackingTable(&local_38,(Arena *)0x0,&pSVar3->_instance);
  local_38._padding_ = (longlong)&___7SqlQuestTrackingTable_ds_game__6B_;
  if (this->TraceQuestID != local_38._impl_.quest_id_) {
    this->TraceQuestID = local_38._impl_.quest_id_;
    pUVar2 = UDS_QuestEvent::GetEvent();
    if (pUVar2 != (UDS_QuestEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->OnChangedTraceQuestDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->OnChangedTraceQuestDelegate).Delegate,local_38._impl_.quest_id_);
      }
    }
  }
  ds_game::SqlQuestTrackingTable::~SqlQuestTrackingTable(&local_38);
  return;
}

// UpdateQuestsCompleted @ 14bb3fca0

void __thiscall UDS_QuestManager::UpdateQuestsCompleted(UDS_QuestManager *this,DbWorkItem *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  SqlRepeatQuestCompleteTable local_38;
  
  if ((param_1->_impl_).dirty_flag_ != 5) {
    UpdateQuestCompleteData(this,param_1);
    return;
  }
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  uVar7 = 0;
  if (uVar1 == 0x29) {
    ds_game::SqlQuestCompleteTable::SqlQuestCompleteTable
              ((SqlQuestCompleteTable *)&local_38,(Arena *)0x0,
               (SqlQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
    local_38._padding_ = (longlong)&___7SqlQuestCompleteTable_ds_game__6B_;
    uVar7 = 2;
    ds_game::SqlQuestCompleteTable::~SqlQuestCompleteTable((SqlQuestCompleteTable *)&local_38);
    uVar6 = local_38._impl_.quest_id_;
  }
  else {
    uVar6 = 0;
    if (uVar1 == 0x69) {
      ds_game::SqlRepeatQuestCompleteTable::SqlRepeatQuestCompleteTable
                (&local_38,(Arena *)0x0,
                 (SqlRepeatQuestCompleteTable *)(param_1->_impl_).Item_.characterlevel_);
      local_38._padding_ = (longlong)&___7SqlRepeatQuestCompleteTable_ds_game__6B_;
      uVar7 = 9;
      ds_game::SqlRepeatQuestCompleteTable::~SqlRepeatQuestCompleteTable(&local_38);
      uVar6 = local_38._impl_.quest_id_;
    }
  }
  if (*(int *)&(this->CompletedQuest_Map).field_0x8 !=
      *(int *)&(this->CompletedQuest_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CompletedQuest_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompletedQuest_Map).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (*(int *)&(this->CompletedQuest_Map).field_0x48 - 1 & uVar7) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->CompletedQuest_Map;
      do {
        if (*(EDS_QuestType *)((longlong)iVar3 * 0x60 + lVar2) == (EDS_QuestType)uVar7) {
          this_00 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                       ::FindChecked(&this->CompletedQuest_Map,(EDS_QuestType)uVar7);
          if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
            return;
          }
          FVar5 = (this_00->Hash).SecondaryData;
          if (FVar5 == (ForElementType<FSetElementId>)0x0) {
            FVar5 = (ForElementType<FSetElementId>)&this_00->Hash;
          }
          iVar3 = *(int *)((longlong)FVar5 + (ulonglong)(this_00->HashSize - 1U & uVar6) * 4);
          if (iVar3 == -1) {
            return;
          }
          do {
            if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar3 * 0x10) == uVar6) {
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Remove(this_00,uVar6);
              return;
            }
            iVar3 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return;
}

// UpdateQuestsInProgress @ 14bb3fe30

void __thiscall UDS_QuestManager::UpdateQuestsInProgress(UDS_QuestManager *this,DbWorkItem *param_1)

{
  int iVar1;
  
  if ((param_1->_impl_).dirty_flag_ != 5) {
    UpdateQuestData(this,param_1);
    return;
  }
  iVar1 = GetQuestidFromDBWorkItem(this,param_1);
  if (0 < iVar1) {
    RemoveQuestData(this,iVar1);
    return;
  }
  return;
}

