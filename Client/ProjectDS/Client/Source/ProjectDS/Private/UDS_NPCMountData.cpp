// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b545da0

UClass * __cdecl UDS_NPCMountData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountData",
               &Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_NPCMountData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton;
}

// UDS_NPCMountData @ 14b54a700

UDS_NPCMountData * __thiscall
UDS_NPCMountData::UDS_NPCMountData(UDS_NPCMountData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountData__6B_;
  (this->MountStatus).Riders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountStatus).Riders.ArrayNum = 0;
  (this->MountStatus).Riders.ArrayMax = 0;
  return this;
}

// UDS_NPCMountData @ 14b54a740

UDS_NPCMountData * __thiscall
UDS_NPCMountData::UDS_NPCMountData(UDS_NPCMountData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountData__6B_;
  (this->MountStatus).Riders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountStatus).Riders.ArrayNum = 0;
  (this->MountStatus).Riders.ArrayMax = 0;
  return this;
}

// ~UDS_NPCMountData @ 14b54b470

void __thiscall UDS_NPCMountData::~UDS_NPCMountData(UDS_NPCMountData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCMountData__6B_;
  pFVar1 = (this->MountStatus).Riders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54c8c0

UClass * __cdecl UDS_NPCMountData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountData",
               &Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_NPCMountData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCMountData @ 14b54d750

void __cdecl UDS_NPCMountData::StaticRegisterNativesUDS_NPCMountData(void)

{
  return;
}

// Deleted @ 14ba9dcc0

void __thiscall UDS_NPCMountData::Deleted(UDS_NPCMountData *this)

{
  return;
}

// GetData @ 14baa7600

TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> __cdecl UDS_NPCMountData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCMountData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa76a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa76a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDriverEntityID @ 14baa9600

ulong64 __thiscall UDS_NPCMountData::GetDriverEntityID(UDS_NPCMountData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MountStatus).Riders.ArrayNum;
  pFVar2 = (this->MountStatus).Riders.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MountStatus).Riders.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_MountRider,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 8) == 0) {
      return *(ulong64 *)pFVar2;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return 0;
}

// GetMountID @ 14baadc90

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

int __thiscall UDS_NPCMountData::GetMountID(UDS_NPCMountData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  FWeakObjectPtr *this_00;
  UObject *pUVar6;
  UClass *pUVar7;
  ADS_NPC *this_01;
  FDS_NpcBaseTableRow *pFVar8;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_278;
  ulong64 local_270;
  UObject *local_268;
  undefined1 local_260 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_270 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_270);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar5 = UDS_LogManager::GetInst();
    UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_NPCMountData::GetMountID",0x1c,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0x116,L"entityBase is nullptr. (&llu)");
    if ((void *)local_258._padding_ == (void *)0x0) {
      return 0;
    }
    FMemory::Free((void *)local_258._padding_);
    return 0;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_260);
  pUVar6 = FWeakObjectPtr::Get(this_00);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar3 = (int)pUVar7->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baaddb5;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baaddb5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_278.ObjectIndex = 0;
  local_278.ObjectSerialNumber = 0;
  local_268 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_278,(FObjectPtr)&local_268);
  bVar2 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_278,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCMountData::GetMountID",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x11d,L"npcActor is nullptr. (&llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<795358141410705694>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\NPC\\DS_NPCMountData.cpp"
                       ,0x11e,"false");
    if (!bVar2) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  this_01 = (ADS_NPC *)FWeakObjectPtr::Get(&local_278);
  pFVar8 = ADS_NPC::GetNpcBaseTable(this_01);
  return pFVar8->ID_MountBase;
}

// IsInteractionAvailable @ 14bab9550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NPCMountData::IsInteractionAvailable(UDS_NPCMountData *this,ulong64 param_1)

{
  ulong64 uVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  UDS_LogManager *pUVar5;
  UDS_CharStateData *pUVar6;
  undefined1 auStackY_188 [32];
  EDS_CharState local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 != 0) {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_148);
    bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_148);
      uVar1 = *(ulong64 *)(pUVar3 + 5);
      uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      if (uVar1 == uVar4) {
        UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
        UDS_CharStateData::GetData((ulong64)&local_150);
        bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_150,
                           (void *)0x0);
        if (bVar2) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_NPCMountData::IsInteractionAvailable",0x28,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Display,local_138.Ptr,0x80,L"charStateData is nullptr.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
        }
        else {
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          local_158 = Mount;
          bVar2 = UDS_CharStateData::HasCharState(pUVar6,&local_158);
          if (!bVar2) {
            return true;
          }
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          local_158._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
          bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_158);
          if (!bVar2) {
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
            local_158._0_4_ = Skill|Avoid|AutoMove|Swim;
            bVar2 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_158);
            if (!bVar2) {
              pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
              local_158._0_4_ = ToggleSkill|Shield|Swim;
              bVar2 = UDS_CharStateData::HasCharDetailState
                                (pUVar6,(EDS_CharDetailState *)&local_158);
              if (!bVar2) {
                pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
                local_158 = CONCAT44(local_158._4_4_,0x22);
                bVar2 = UDS_CharStateData::HasCharDetailState
                                  (pUVar6,(EDS_CharDetailState *)&local_158);
                return !bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// IsMainPlayerMountData @ 14baba010

bool __thiscall UDS_NPCMountData::IsMainPlayerMountData(UDS_NPCMountData *this)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MountStatus).Riders.ArrayNum;
  pFVar3 = (this->MountStatus).Riders.AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MountStatus).Riders.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_MountRider,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar5) break;
    if (*(int *)(pFVar3 + 8) == 0) {
      uVar4 = *(ulong64 *)pFVar3;
LAB_14baba067:
      uVar2 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      return uVar4 == uVar2;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  uVar4 = 0;
  goto LAB_14baba067;
}

// IsTamingAble @ 14babaf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NPCMountData::IsTamingAble(UDS_NPCMountData *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  undefined1 auStackY_178 [32];
  EDS_CharDetailState local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_CharStateData::GetData((ulong64)&local_140);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCMountData::IsTamingAble",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x62,L"charStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
  local_148[0] = Taming_Eat;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_148);
  return bVar1;
}

// OnChangedCurrentCharacter @ 14babe6f0

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
UDS_NPCMountData::OnChangedCurrentCharacter
          (UDS_NPCMountData *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MountStatus).Riders.ArrayNum;
  pFVar2 = (this->MountStatus).Riders.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MountStatus).Riders.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_MountRider,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 8) == 0) {
      *(ulong64 *)pFVar2 = param_2->EntityID;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// OnChangedMaxValue_MountLoadCapacity_MoveSpeed @ 14babe780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NPCMountData::OnChangedMaxValue_MountLoadCapacity_MoveSpeed
          (UDS_NPCMountData *this,float param_1)

{
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_MountEvent *pUVar2;
  undefined1 auStackY_178 [32];
  EDS_StatusType local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
          return;
        }
      }
    }
    else {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this_00);
      if (pUVar2 != (UDS_MountEvent *)0x0) {
        local_148[0] = MountLoadCapacity;
        FDS_FilteredEventDelegate<enum_EDS_StatusType_const_>::Broadcast
                  (&pUVar2->OnChangedMountStatus_Filtered,local_148);
      }
    }
  }
  return;
}

// OnTryMountAbility @ 14bac28f0

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
UDS_NPCMountData::OnTryMountAbility
          (UDS_NPCMountData *this,FDS_EntityBase *param_1,FDS_MountRider *param_2)

{
  FDS_MountInfo *pFVar1;
  FDS_MountInfo local_18;
  
  pFVar1 = FDS_MountInfo::FDS_MountInfo(&local_18,&param_1->EntityID,&param_2->SeatIndex);
  UDS_MountAbility::TryActivate(param_2->EntityID,pFVar1);
  return;
}

// RemoveEntity @ 14bac7b20

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

void __thiscall UDS_NPCMountData::RemoveEntity(UDS_NPCMountData *this)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  
  iVar1 = (this->MountStatus).Riders.ArrayNum;
  pFVar5 = (this->MountStatus).Riders.AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MountStatus).Riders.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_MountRider,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)pFVar5);
      if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar3->EntityType == MainCharacter)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
        UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        UDS_CharStatusData::GetData((ulong64)&local_res10);
        bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res10,
                           (void *)0x0);
        if (!bVar2) {
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res10);
          pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,MountLoadCapacity);
          if (pFVar4 != (FDS_StatusInfo *)0x0) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pFVar4->ChangeMaxValueDelegate,this);
            OnChangedMaxValue_MountLoadCapacity_MoveSpeed(this,pFVar4->MaxValue);
          }
        }
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// UpdateByMountStatus @ 14bad6220

void __thiscall UDS_NPCMountData::UpdateByMountStatus(UDS_NPCMountData *this,ulong64 *param_1)

{
  UDS_EntityManager *pUVar1;
  
  pUVar1 = UDS_EntityManager::GetInst();
  if (pUVar1 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSpawnEntityEvent,
               this);
  }
  UpdateByMountStatus(this);
  return;
}

// UpdateByMountStatus @ 14bad6260

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

void __thiscall UDS_NPCMountData::UpdateByMountStatus(UDS_NPCMountData *this)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  FDS_EntityBase *pFVar4;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar5;
  FDS_MountInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_78 [3];
  undefined1 local_60 [40];
  
  local_res20 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_res20);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3);
    iVar1 = (this->MountStatus).Riders.ArrayNum;
    pFVar7 = (this->MountStatus).Riders.AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->MountStatus).Riders.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_MountRider,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar7 == pFVar8) break;
      if (((*(int *)(pFVar7 + 8) == 0) &&
          (pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)pFVar7),
          pFVar4 != (FDS_EntityBase *)0x0)) && (pFVar4->EntityType == MainCharacter)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_NPCMountData>
                  ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                    *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                   (UDS_NPCMountData *)(local_78 + 1),(pmf_5cc36e9b)this);
        UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        UDS_CharStatusData::GetData((ulong64)&local_res18);
        bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res18,
                           (void *)0x0);
        if (!bVar2) {
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res18);
          pFVar5 = UDS_CharStatusData::GetStatusInfo(this_00,MountLoadCapacity);
          if (pFVar5 != (FDS_StatusInfo *)0x0) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pFVar5->ChangeMaxValueDelegate,this);
            TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
            AddUObject<UDS_NPCMountData>
                      ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                        *)&pFVar5->ChangeMaxValueDelegate,(UDS_NPCMountData *)(local_78 + 2),
                       (pmf_cb94f63e)this);
            OnChangedMaxValue_MountLoadCapacity_MoveSpeed(this,pFVar5->MaxValue);
          }
        }
      }
      if (*(longlong *)pFVar7 == 0) {
LAB_14bad6436:
        pFVar7 = pFVar7 + 0x10;
      }
      else {
        bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          (local_78,(void *)0x0);
        if (!bVar2) {
          local_60._8_8_ = *(undefined8 *)pFVar7;
          local_60._16_8_ = *(undefined8 *)(pFVar7 + 8);
          pFVar6 = FDS_MountInfo::FDS_MountInfo
                             ((FDS_MountInfo *)(local_60 + 0x18),&pFVar3->EntityID,
                              (uint *)(local_60 + 0x10));
          UDS_MountAbility::TryActivate(local_60._8_8_,pFVar6);
          goto LAB_14bad6436;
        }
        TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_NPCMountData,FDS_MountRider_const_&>
                  ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                    *)&pFVar3->OnLoadCompletePartsSystemControl,(UDS_NPCMountData *)local_60,
                   (pmf_cc8b4f82)this,(FDS_MountRider *)OnTryMountAbility);
        pFVar7 = pFVar7 + 0x10;
      }
    }
  }
  return;
}

// UpdateByRiderInfo @ 14bad6480

void __thiscall
UDS_NPCMountData::UpdateByRiderInfo(UDS_NPCMountData *this,RiderStatus *param_1,bool param_2)

{
  int iVar1;
  FDS_MountStatus *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  UDS_EntityManager *pUVar5;
  ulonglong uVar6;
  longlong lVar7;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = *(uint *)&(param_1->_impl_).riders_.field_0x8;
  lVar7 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&local_38,0,&iStack_2c);
    do {
      uVar6 = *(ulonglong *)&(param_1->_impl_).riders_;
      if ((uVar6 & 1) != 0) {
        uVar6 = *(ulonglong *)(uVar6 + 7 + lVar7 * 8);
      }
      local_28 = *(undefined8 *)(uVar6 + 0x18);
      uStack_20 = *(undefined4 *)(uVar6 + 0x20);
      if (local_30 == iStack_2c) {
        local_30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_38,&iStack_2c);
      }
      iVar1 = local_30 + 1;
      lVar7 = lVar7 + 1;
      *(undefined8 *)(local_38.Data + (longlong)local_30 * 0x10) = local_28;
      *(ulonglong *)(local_38.Data + (longlong)local_30 * 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
      local_30 = iVar1;
    } while (lVar7 < (int)uVar3);
  }
  pFVar2 = &this->MountStatus;
  if (pFVar2 != (FDS_MountStatus *)&local_38) {
    pFVar4 = (pFVar2->Riders).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Riders).AllocatorInstance.Data = local_38.Data;
    (this->MountStatus).Riders.ArrayNum = local_30;
    (this->MountStatus).Riders.ArrayMax = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (param_2) {
    UpdateByMountStatus(this);
  }
  else {
    pUVar5 = UDS_EntityManager::GetInst();
    if (pUVar5 != (UDS_EntityManager *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnSpawnEntityEvent,
                 this);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_NPCMountData>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar5->OnSpawnEntityEvent,(UDS_NPCMountData *)&stack0x00000010,
                 (pmf_8c164849)this);
    }
  }
  return;
}

