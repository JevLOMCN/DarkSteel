// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b572210

UClass * __cdecl UDS_QuestSpawnActorManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestSpawnActorManager",
               &Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestSpawnActorManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_QuestSpawnActorManager>,
               InternalVTableHelperCtorCaller<UDS_QuestSpawnActorManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton;
}

// UDS_QuestSpawnActorManager @ 14b5759a0

UDS_QuestSpawnActorManager * __thiscall
UDS_QuestSpawnActorManager::UDS_QuestSpawnActorManager
          (UDS_QuestSpawnActorManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestSpawnActorManager__6B_;
  *(undefined8 *)&this->QuestActorMap = 0;
  *(undefined8 *)&(this->QuestActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestActorMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestActorMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x48 = 0;
  return this;
}

// UDS_QuestSpawnActorManager @ 14b5759f0

UDS_QuestSpawnActorManager * __thiscall
UDS_QuestSpawnActorManager::UDS_QuestSpawnActorManager
          (UDS_QuestSpawnActorManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestSpawnActorManager__6B_;
  *(undefined8 *)&this->QuestActorMap = 0;
  *(undefined8 *)&(this->QuestActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuestActorMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestActorMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuestActorMap).field_0x48 = 0;
  return this;
}

// ~UDS_QuestSpawnActorManager @ 14b576180

void __thiscall
UDS_QuestSpawnActorManager::~UDS_QuestSpawnActorManager(UDS_QuestSpawnActorManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuestSpawnActorManager__6B_;
  *(undefined4 *)&(this->QuestActorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestActorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,enum_EDS_QuestActorState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,enum_EDS_QuestActorState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->QuestActorMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b576dc0

UClass * __cdecl UDS_QuestSpawnActorManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestSpawnActorManager",
               &Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestSpawnActorManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_QuestSpawnActorManager>,
               InternalVTableHelperCtorCaller<UDS_QuestSpawnActorManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestSpawnActorManager.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestSpawnActorManager @ 14b576f40

void __cdecl UDS_QuestSpawnActorManager::StaticRegisterNativesUDS_QuestSpawnActorManager(void)

{
  return;
}

// CheckActorState_Npc @ 14bb54000

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

EDS_QuestActorState __thiscall
UDS_QuestSpawnActorManager::CheckActorState_Npc
          (UDS_QuestSpawnActorManager *this,FDS_EntityBase *param_1,int param_2,
          EDS_QuestDataType param_3)

{
  undefined8 uVar1;
  EDS_QuestSpawnConditionType EVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  EDS_QuestStateType EVar6;
  EDS_QuestType EVar7;
  EDS_QuestActorState EVar8;
  UDS_QuestManager *pUVar9;
  FDS_NpcSpawnQuestTableRow *this_00;
  
  pUVar9 = UDS_QuestManager::GetInst();
  if (pUVar9 == (UDS_QuestManager *)0x0) {
    return None;
  }
  this_00 = FDS_NpcSpawnQuestTableRow::GetRef((longlong)param_1->SpawnTableID,true);
  bVar5 = FDS_NpcSpawnQuestTableRow::IsValid(this_00);
  if (!bVar5) {
    return None;
  }
  iVar3 = this_00->ID_NpcShowQuest;
  iVar4 = this_00->ID_NpcHideQuest;
  EVar6 = UDS_QuestManager::GetQuestStateType(param_2);
  if (this_00->ShowQuestConditionType == ProgressSegment) {
    EVar7 = UDS_QuestManager::GetQuestType(param_2);
    bVar5 = EVar7 == Main;
  }
  else {
    bVar5 = param_2 == iVar3;
  }
  if (!bVar5) {
    return None;
  }
  if ((param_3 != Add) && (param_3 != Update)) {
    if (param_3 == Cancel) {
      return Hide;
    }
    if (param_3 != Complete) {
      return None;
    }
    if (param_2 != iVar4) {
      return None;
    }
    EVar8 = GetActorState(this,param_1->EntityID);
    if (EVar8 == Show) {
      uVar1 = *(undefined8 *)&(this_00->HideCoordinate).field0_0x0;
      if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          (uVar1 = *(undefined8 *)((longlong)&(this_00->HideCoordinate).field0_0x0 + 8),
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         (uVar1 = *(undefined8 *)((longlong)&(this_00->HideCoordinate).field0_0x0 + 0x10),
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) {
        return Hide;
      }
      return Hide_Act;
    }
    return None;
  }
  EVar2 = this_00->ShowQuestConditionType;
  if (EVar2 == ProgressSegment) {
    if (Complete < EVar6) {
      return None;
    }
    if (param_2 < iVar3) {
      return None;
    }
    if (iVar4 < param_2) {
      return None;
    }
    if (param_2 != iVar3) {
      return Show;
    }
  }
  else {
    if (EVar2 == Progress) {
      if (Complete < EVar6) {
        return None;
      }
      if (param_2 != iVar3) {
        return None;
      }
      EVar8 = GetActorState(this,param_1->EntityID);
      if (EVar8 != Hide) {
        return None;
      }
      uVar1 = *(undefined8 *)&(this_00->ShowCoordinate).field0_0x0;
      if (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        return Show_Act;
      }
      uVar1 = *(undefined8 *)((longlong)&(this_00->ShowCoordinate).field0_0x0 + 8);
      if (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        return Show_Act;
      }
      uVar1 = *(undefined8 *)((longlong)&(this_00->ShowCoordinate).field0_0x0 + 0x10);
      if ((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) {
        return Show;
      }
      return Show_Act;
    }
    if (EVar2 != AbleComplete) {
      return None;
    }
    if (EVar6 != Complete) {
      return None;
    }
    if (param_2 != iVar3) {
      return None;
    }
  }
  EVar8 = GetActorState(this,param_1->EntityID);
  if (EVar8 != Hide) {
    return None;
  }
  uVar1 = *(undefined8 *)&(this_00->ShowCoordinate).field0_0x0;
  if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar1 = *(undefined8 *)((longlong)&(this_00->ShowCoordinate).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&(this_00->ShowCoordinate).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return Show;
  }
  return Show_Act;
}

// CheckActorState_Stuff @ 14bb54250

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

EDS_QuestActorState __thiscall
UDS_QuestSpawnActorManager::CheckActorState_Stuff
          (UDS_QuestSpawnActorManager *this,FDS_EntityBase *param_1,int param_2,
          EDS_QuestDataType param_3)

{
  bool bVar1;
  EDS_QuestStateType EVar2;
  UDS_QuestManager *pUVar3;
  FDS_StuffSpawnQuestTableRow *this_00;
  EDS_QuestActorState EVar4;
  
  pUVar3 = UDS_QuestManager::GetInst();
  if (pUVar3 != (UDS_QuestManager *)0x0) {
    this_00 = FDS_StuffSpawnQuestTableRow::GetRef((longlong)param_1->SpawnTableID,true);
    bVar1 = FDS_StuffSpawnQuestTableRow::IsValid(this_00);
    if (bVar1) {
      EVar2 = UDS_QuestManager::GetQuestStateType(this_00->ID_StuffShowQuest);
      EVar4 = Hide;
      if (EVar2 == Progress) {
        EVar4 = Show;
      }
      return EVar4;
    }
  }
  return None;
}

// CheckQuestActorState @ 14bb54330

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
UDS_QuestSpawnActorManager::CheckQuestActorState
          (UDS_QuestSpawnActorManager *this,FDS_EntityBase *param_1,int param_2,
          EDS_QuestDataType param_3)

{
  EDS_EntityType EVar1;
  bool bVar2;
  EDS_QuestStateType EVar3;
  EDS_QuestActorState EVar4;
  UDS_QuestManager *pUVar5;
  FDS_StuffSpawnQuestTableRow *this_00;
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    EVar1 = param_1->EntityType;
    if (EVar1 == NPC) {
      EVar4 = CheckActorState_Npc(this,param_1,param_2,param_3);
    }
    else if (((((EVar1 == StuffGather) || (EVar1 == StuffWarpDevice)) || (EVar1 == StuffPortal)) ||
             (EVar4 = None, EVar1 == StuffQuestBoard)) &&
            (pUVar5 = UDS_QuestManager::GetInst(), EVar4 = None, pUVar5 != (UDS_QuestManager *)0x0))
    {
      this_00 = FDS_StuffSpawnQuestTableRow::GetRef((longlong)param_1->SpawnTableID,true);
      bVar2 = FDS_StuffSpawnQuestTableRow::IsValid(this_00);
      EVar4 = None;
      if (bVar2) {
        EVar3 = UDS_QuestManager::GetQuestStateType(this_00->ID_StuffShowQuest);
        EVar4 = Hide;
        if (EVar3 == Progress) {
          EVar4 = Show;
        }
      }
    }
    SetQuestActorState(this,param_1,EVar4);
  }
  return;
}

// Created @ 14bb5c9a0

void __thiscall UDS_QuestSpawnActorManager::Created(UDS_QuestSpawnActorManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5d8a0

void __thiscall UDS_QuestSpawnActorManager::Destroyed(UDS_QuestSpawnActorManager *this)

{
  return;
}

// GetActorState @ 14bb63300

EDS_QuestActorState __thiscall
UDS_QuestSpawnActorManager::GetActorState(UDS_QuestSpawnActorManager *this,ulong64 param_1)

{
  TMap<unsigned___int64,EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,EDS_QuestActorState,0>_>
  *this_00;
  int iVar1;
  EDS_QuestActorState *pEVar2;
  undefined1 *puVar3;
  
  this_00 = &this->QuestActorMap;
  if (*(int *)&(this->QuestActorMap).field_0x8 != *(int *)&(this->QuestActorMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->QuestActorMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->QuestActorMap).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->QuestActorMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)this_00 + (longlong)iVar1 * 0x18) == param_1) {
          pEVar2 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                   ::FindChecked(this_00,param_1);
          if (*pEVar2 != Hide) {
            pEVar2 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                     ::FindChecked(this_00,param_1);
            if (*pEVar2 != Hide_Act) {
              pEVar2 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                       ::FindChecked(this_00,param_1);
              if (*pEVar2 != Show) {
                pEVar2 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                         ::FindChecked(this_00,param_1);
                if (*pEVar2 != Show_Act) {
                  pEVar2 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                           ::FindChecked(this_00,param_1);
                  return *pEVar2;
                }
              }
              return Show;
            }
          }
          return Hide;
        }
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return None;
}

// GetInst @ 14bb65da0

UDS_QuestSpawnActorManager * __cdecl UDS_QuestSpawnActorManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_QuestSpawnActorManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_QuestSpawnActorManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_QuestSpawnActorManager_NoRegister();
  pUVar3 = (UDS_QuestSpawnActorManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_)
  ;
  if (pUVar3 != (UDS_QuestSpawnActorManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_QuestSpawnActorManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_QuestSpawnActorManager *)0x0;
}

// Init @ 14bb6a770

void __thiscall UDS_QuestSpawnActorManager::Init(UDS_QuestSpawnActorManager *this)

{
  UDS_QuestEvent *pUVar1;
  UDS_EntityManager *pUVar2;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_QuestSpawnActorManager>
              (&pUVar1->OnChanedQuestDelegate,(UDS_QuestSpawnActorManager *)&stack0x00000010,
               (pmf_5e2ac33a)this);
  }
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_QuestSpawnActorManager>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnSpawnEntityEvent,(UDS_QuestSpawnActorManager *)&stack0x00000010,
               (pmf_8d36027a)this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_QuestSpawnActorManager>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnRemoveEntityEvent,(UDS_QuestSpawnActorManager *)&stack0x00000010,
               (pmf_8d36027a)this);
  }
  return;
}

// OnQuestChanged @ 14bb76e30

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
UDS_QuestSpawnActorManager::OnQuestChanged
          (UDS_QuestSpawnActorManager *this,int param_1,EDS_QuestDataType param_2)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  EDS_EntityType EVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  EDS_QuestDataType EVar8;
  TMap<unsigned___int64,EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,EDS_QuestActorState,0>_>
  *pTVar9;
  EDS_QuestType EVar10;
  bool bVar11;
  EDS_QuestStateType EVar12;
  EDS_QuestActorState EVar13;
  UDS_QuestManager *pUVar14;
  FDS_EntityBase *pFVar15;
  FDS_StuffSpawnQuestTableRow *this_00;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  EDS_QuestDataType local_res18;
  int local_res20;
  ulong64 local_a8;
  ulong64 uStack_a0;
  TMap<unsigned___int64,EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,EDS_QuestActorState,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<unsigned___int64,EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,EDS_QuestActorState,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((((0 < param_1) && (param_2 != Remove)) &&
      (local_res18 = param_2, pUVar14 = UDS_QuestManager::GetInst(),
      pUVar14 != (UDS_QuestManager *)0x0)) &&
     (EVar10 = UDS_QuestManager::GetQuestType(param_1), (byte)(EVar10 - Main) < 2)) {
    iVar5 = *(int *)&(this->QuestActorMap).field_0x28;
    iStack_90 = 0;
    local_78 = 0;
    local_98 = &this->QuestActorMap;
    puVar1 = &(this->QuestActorMap).field_0x10;
    uStack_8c = 1;
    iStack_7c = 0;
    if (iVar5 != 0) {
      puVar21 = *(uint **)&(this->QuestActorMap).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar19 = *puVar21;
      while (uVar19 == 0) {
        lVar16 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14bb76f2d;
        uVar19 = puVar21[lVar16 + 1];
      }
      uStack_8c = -uVar19 & uVar19;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_res20 = (int)lVar16;
      iStack_7c = local_78 + -1 + local_res20;
      if (iVar5 < iStack_7c) {
        iStack_7c = iVar5;
      }
    }
LAB_14bb76f2d:
    uVar19 = *(uint *)&(this->QuestActorMap).field_0x28;
    iStack_70 = *(int *)&(this->QuestActorMap).field_0x8 - *(int *)&(this->QuestActorMap).field_0x34
    ;
    uVar18 = uVar19 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    uStack_80 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar19 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar8 = local_res18;
    uVar6 = *(uint *)&(this->QuestActorMap).field_0x28;
    if (uVar19 != uVar6) {
      puVar20 = *(undefined1 **)&(this->QuestActorMap).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
      while (uVar19 == 0) {
        lVar16 = (longlong)iVar17;
        uVar18 = uVar18 + 0x20;
        iVar17 = iVar17 + 1;
        uVar19 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14bb77030;
        uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar19 = (int)lVar16 + -1 + uVar18;
      if ((int)uVar6 < (int)uVar19) {
        uVar19 = uVar6;
      }
    }
LAB_14bb77030:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,enum_EDS_QuestActorState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar19) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == &this->QuestActorMap)) break;
      puVar2 = (ulong64 *)(*(longlong *)pTVar9 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      local_a8 = *puVar2;
      uStack_a0 = puVar2[1];
      pFVar15 = FDS_EntityBase::GetEntityBase(&local_a8);
      if (pFVar15 != (FDS_EntityBase *)0x0) {
        EVar4 = pFVar15->EntityType;
        EVar13 = None;
        if (EVar4 == NPC) {
          EVar13 = CheckActorState_Npc(this,pFVar15,param_1,EVar8);
        }
        else if ((((EVar4 == StuffGather) || (EVar4 == StuffWarpDevice)) || (EVar4 == StuffPortal))
                || (EVar4 == StuffQuestBoard)) {
          pUVar14 = UDS_QuestManager::GetInst();
          if (pUVar14 == (UDS_QuestManager *)0x0) {
            EVar13 = None;
          }
          else {
            this_00 = FDS_StuffSpawnQuestTableRow::GetRef((longlong)pFVar15->SpawnTableID,true);
            bVar11 = FDS_StuffSpawnQuestTableRow::IsValid(this_00);
            if (bVar11) {
              EVar12 = UDS_QuestManager::GetQuestStateType(this_00->ID_StuffShowQuest);
              EVar13 = Hide;
              if (EVar12 == Progress) {
                EVar13 = Show;
              }
            }
            else {
              EVar13 = None;
            }
          }
        }
        SetQuestActorState(this,pFVar15,EVar13);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// OnRemoveEntity @ 14bb77a60

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
UDS_QuestSpawnActorManager::OnRemoveEntity(UDS_QuestSpawnActorManager *this,ulong64 *param_1)

{
  bool bVar1;
  int iVar2;
  FDS_EntityBase *this_00;
  undefined1 *puVar3;
  ulonglong local_res10 [3];
  
  if (*param_1 != 0) {
    this_00 = FDS_EntityBase::GetEntityBase(param_1);
    if (this_00 != (FDS_EntityBase *)0x0) {
      bVar1 = FDS_EntityBase::GetIsQuestActor(this_00);
      if (bVar1) {
        local_res10[0] = *param_1;
        if (*(int *)&(this->QuestActorMap).field_0x8 != *(int *)&(this->QuestActorMap).field_0x34) {
          puVar3 = *(undefined1 **)&(this->QuestActorMap).field_0x40;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &(this->QuestActorMap).field_0x38;
          }
          iVar2 = *(int *)(puVar3 + ((local_res10[0] >> 0x20) * 0x17 + local_res10[0] &
                                    (ulonglong)(*(int *)&(this->QuestActorMap).field_0x48 - 1)) * 4)
          ;
          if (iVar2 != -1) {
            while (*(ulonglong *)(*(longlong *)&this->QuestActorMap + (longlong)iVar2 * 0x18) !=
                   local_res10[0]) {
              iVar2 = *(int *)(*(longlong *)&this->QuestActorMap + 0x10 + (longlong)iVar2 * 0x18);
              if (iVar2 == -1) {
                return;
              }
            }
            TSet<TTuple<unsigned___int64,enum_EDS_QuestActorState>,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned___int64>
                      (&this->QuestActorMap,
                       (int)(local_res10[0] >> 0x20) * 0x17 + (int)local_res10[0],local_res10);
          }
        }
      }
    }
  }
  return;
}

// OnSpawnEntity @ 14bb78de0

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
UDS_QuestSpawnActorManager::OnSpawnEntity(UDS_QuestSpawnActorManager *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_EntityType EVar2;
  ulonglong uVar3;
  bool bVar4;
  EDS_QuestStateType EVar5;
  EDS_QuestActorState EVar6;
  FDS_EntityBase *this_00;
  UDS_QuestManager *pUVar7;
  FDS_StuffSpawnQuestTableRow *this_01;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  undefined4 local_res10 [4];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  
  if (((*param_1 != 0) &&
      (this_00 = FDS_EntityBase::GetEntityBase(param_1), this_00 != (FDS_EntityBase *)0x0)) &&
     (bVar4 = FDS_EntityBase::GetIsQuestActor(this_00), bVar4)) {
    uVar3 = *param_1;
    if (*(int *)&(this->QuestActorMap).field_0x8 != *(int *)&(this->QuestActorMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->QuestActorMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->QuestActorMap).field_0x38;
      }
      iVar8 = *(int *)(puVar10 +
                      ((uVar3 >> 0x20) * 0x17 + uVar3 &
                      (ulonglong)(*(int *)&(this->QuestActorMap).field_0x48 - 1)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&this->QuestActorMap + (longlong)iVar8 * 0x18) == uVar3) {
            return;
          }
          iVar8 = *(int *)(*(longlong *)&this->QuestActorMap + 0x10 + (longlong)iVar8 * 0x18);
        } while (iVar8 != -1);
      }
    }
    local_38._8_8_ = local_res10;
    local_res10[0] = 0;
    local_38._0_8_ = param_1;
    TSet<TTuple<unsigned___int64,enum_EDS_QuestActorState>,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,enum_EDS_QuestActorState_&&>_>
              (&this->QuestActorMap,
               (TPairInitializer<unsigned___int64_const_&,EDS_QuestActorState_&&> *)
               (local_res10 + 2),(bool *)local_38);
    SetQuestActorState(this,this_00,Hide);
    pUVar7 = UDS_QuestManager::GetInst();
    if (pUVar7 != (UDS_QuestManager *)0x0) {
      local_res10[0] = CONCAT22(local_res10[0]._2_2_,0x201);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,2,0,&local_48.AllocatorInstance,2,&local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,local_res10,2);
      UDS_QuestManager::GetQuestListByInProgress
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38,&local_48,false);
      iVar8 = (int)local_38._8_8_;
      pFVar1 = (FScriptContainerElement *)(local_38._0_8_ + (longlong)iVar8 * 4);
      pFVar9 = (FScriptContainerElement *)local_38._0_8_;
      while( true ) {
        if ((int)local_38._8_8_ != iVar8) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar9 == pFVar1) break;
        EVar2 = this_00->EntityType;
        EVar6 = None;
        if (EVar2 == NPC) {
          EVar6 = CheckActorState_Npc(this,this_00,*(int *)pFVar9,Update);
        }
        else if (((EVar2 == StuffGather) || (EVar2 == StuffWarpDevice)) ||
                ((EVar2 == StuffPortal || (EVar2 == StuffQuestBoard)))) {
          pUVar7 = UDS_QuestManager::GetInst();
          if (pUVar7 == (UDS_QuestManager *)0x0) {
            EVar6 = None;
          }
          else {
            this_01 = FDS_StuffSpawnQuestTableRow::GetRef((longlong)this_00->SpawnTableID,true);
            bVar4 = FDS_StuffSpawnQuestTableRow::IsValid(this_01);
            if (bVar4) {
              EVar5 = UDS_QuestManager::GetQuestStateType(this_01->ID_StuffShowQuest);
              EVar6 = Hide;
              if (EVar5 == Progress) {
                EVar6 = Show;
              }
            }
            else {
              EVar6 = None;
            }
          }
        }
        SetQuestActorState(this,this_00,EVar6);
        pFVar9 = pFVar9 + 4;
      }
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
  }
  return;
}

// Reset @ 14bb86200

void __thiscall UDS_QuestSpawnActorManager::Reset(UDS_QuestSpawnActorManager *this)

{
  UDS_QuestEvent *pUVar1;
  UDS_EntityManager *pUVar2;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
  }
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnRemoveEntityEvent,
               this);
  }
  TSet<TTuple<unsigned___int64,enum_EDS_QuestActorState>,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>,FDefaultSetAllocator>
  ::Reset(&this->QuestActorMap);
  return;
}

// SetQuestActorState @ 14bb8bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_QuestSpawnActorManager::SetQuestActorState
          (UDS_QuestSpawnActorManager *this,FDS_EntityBase *param_1,EDS_QuestActorState param_2)

{
  TMap<unsigned___int64,EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,EDS_QuestActorState,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  EDS_QuestActorState *pEVar4;
  FDS_NpcBaseTableRow *pFVar5;
  FDS_NpcSpawnTableRow *pFVar6;
  FDS_NpcSpawnQuestTableRow *pFVar7;
  undefined1 *puVar8;
  undefined1 auStackY_198 [32];
  uint uVar9;
  wchar_t *pwVar10;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)param_1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestSpawnActorManager::SetQuestActorState",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xc2,L"InEntityBase is nullptr.");
      if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if (param_2 != None) {
    uVar1 = param_1->EntityID;
    this_00 = &this->QuestActorMap;
    if (*(int *)&(this->QuestActorMap).field_0x8 != *(int *)&(this->QuestActorMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->QuestActorMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->QuestActorMap).field_0x38;
      }
      iVar2 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->QuestActorMap).field_0x48 - 1) &
                                (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)this_00 + (longlong)iVar2 * 0x18) == uVar1) {
            pEVar4 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                     ::FindChecked(this_00,uVar1);
            if (*pEVar4 == param_2) {
              return;
            }
            pEVar4 = TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
                     ::FindChecked(this_00,param_1->EntityID);
            *pEVar4 = param_2;
            if (param_1->EntityType == NPC) {
              pFVar5 = FDS_NpcBaseTableRow::Get(param_1->TableID,true);
              if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
                pUVar3 = UDS_LogManager::GetInst();
                if (pUVar3 == (UDS_LogManager *)0x0) {
                  return;
                }
                pUVar3 = UDS_LogManager::GetInst();
                local_148._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_148,"UDS_QuestSpawnActorManager::SetQuestActorState",0x2e,Yes);
                pwVar10 = L"npcBaseTable is nullptr. (%d)";
                uVar9 = 0xd8;
              }
              else {
                pFVar6 = FDS_NpcSpawnTableRow::Get((longlong)param_1->SpawnTableID,true);
                if (pFVar6 == (FDS_NpcSpawnTableRow *)0x0) {
                  pUVar3 = UDS_LogManager::GetInst();
                  if (pUVar3 == (UDS_LogManager *)0x0) {
                    return;
                  }
                  pUVar3 = UDS_LogManager::GetInst();
                  local_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_148,"UDS_QuestSpawnActorManager::SetQuestActorState",0x2e,Yes);
                  pwVar10 = L"npcSpawnTable is nullptr. (%d)";
                  uVar9 = 0xdf;
                }
                else {
                  pFVar7 = FDS_NpcSpawnQuestTableRow::Get((longlong)param_1->SpawnTableID,true);
                  if (pFVar7 != (FDS_NpcSpawnQuestTableRow *)0x0) {
                    if (param_2 == Show) goto LAB_14bb8bf2f;
                    if (param_2 == Show_Act) {
                      UDS_NPCClientControlAbility_Show::TryActivate
                                (&param_1->EntityID,&pFVar7->ShowCoordinate,&pFVar6->Location,
                                 &pFVar7->ShowMoveAnimType,&pFVar6->RotateYaw,&pFVar7->ShowDelayTime
                                );
                      return;
                    }
                    if (param_2 != Hide) {
                      if (param_2 != Hide_Act) {
                        return;
                      }
                      UDS_NPCClientControlAbility_Hide::TryActivate
                                (&param_1->EntityID,&pFVar6->Location,&pFVar7->HideCoordinate,
                                 &pFVar7->HideMoveAnimType,&pFVar7->HideDelayTime);
                      return;
                    }
                    goto LAB_14bb8bf13;
                  }
                  pUVar3 = UDS_LogManager::GetInst();
                  if (pUVar3 == (UDS_LogManager *)0x0) {
                    return;
                  }
                  pUVar3 = UDS_LogManager::GetInst();
                  local_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_148,"UDS_QuestSpawnActorManager::SetQuestActorState",0x2e,Yes);
                  pwVar10 = L"npcSpawnQuestTable is nullptr. (%d)";
                  uVar9 = 0xe6;
                }
              }
              UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar9,pwVar10);
              if ((void *)local_148._padding_ == (void *)0x0) {
                return;
              }
              FMemory::Free((void *)local_148._padding_);
              return;
            }
            if ((param_2 == Show) || (param_2 == Show_Act)) {
LAB_14bb8bf2f:
              local_158[0] = 4;
              (**(code **)(param_1->_padding_ + 0x60))(param_1,local_158,0);
              return;
            }
            if ((param_2 != Hide) && (param_2 != Hide_Act)) {
              return;
            }
LAB_14bb8bf13:
            local_158[0] = 4;
            (**(code **)(param_1->_padding_ + 0x58))(param_1,local_158,0);
            return;
          }
          iVar2 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
  }
  return;
}

