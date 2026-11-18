// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b573310

UClass * __cdecl UDS_QuestLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestLocalSave",
               &Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_QuestLocalSave,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuestLocalSave>,
               InternalVTableHelperCtorCaller<UDS_QuestLocalSave>,local_res8,USaveGame::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton;
}

// UDS_QuestLocalSave @ 14b575600

UDS_QuestLocalSave * __thiscall
UDS_QuestLocalSave::UDS_QuestLocalSave(UDS_QuestLocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->ShowAllQuestLocalOption = true;
  this->ShowAllQuestRepeatOption = true;
  this->_padding_ = (longlong)&___7UDS_QuestLocalSave__6B_;
  (this->HasTalkedToNpcList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HasTalkedToNpcList).ArrayNum = 0;
  (this->HasTalkedToNpcList).ArrayMax = 0;
  return this;
}

// ~UDS_QuestLocalSave @ 14b576030

void __thiscall UDS_QuestLocalSave::~UDS_QuestLocalSave(UDS_QuestLocalSave *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuestLocalSave__6B_;
  pFVar1 = (this->HasTalkedToNpcList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b576c40

UClass * __cdecl UDS_QuestLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestLocalSave",
               &Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_QuestLocalSave,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuestLocalSave>,
               InternalVTableHelperCtorCaller<UDS_QuestLocalSave>,local_res8,USaveGame::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestLocalSave @ 14b576ef0

void __cdecl UDS_QuestLocalSave::StaticRegisterNativesUDS_QuestLocalSave(void)

{
  return;
}

// UDS_QuestLocalSave @ 14b999cd0

UDS_QuestLocalSave * __thiscall
UDS_QuestLocalSave::UDS_QuestLocalSave(UDS_QuestLocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->ShowAllQuestLocalOption = true;
  this->ShowAllQuestRepeatOption = true;
  this->_padding_ = (longlong)&___7UDS_QuestLocalSave__6B_;
  (this->HasTalkedToNpcList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HasTalkedToNpcList).ArrayNum = 0;
  (this->HasTalkedToNpcList).ArrayMax = 0;
  return this;
}

// GetInst @ 14b9af470

TWeakObjectPtr<UDS_QuestLocalSave,FWeakObjectPtr> __cdecl UDS_QuestLocalSave::GetInst(void)

{
  UDS_QuestLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_QuestLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_QuestLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->QuestLocalSave).field0_0x0.DebugPtr ==
        (UDS_QuestLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->QuestLocalSave);
    }
    pUVar1 = (pUVar2->QuestLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_QuestLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_QuestLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_QuestLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_QuestLocalSave,FWeakObjectPtr>)in_RCX;
}

// GetQuestLocalFileName @ 14b9b10c0

FString * __thiscall
UDS_QuestLocalSave::GetQuestLocalFileName(UDS_QuestLocalSave *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  FString local_18;
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    ::FString::FString(__return_storage_ptr__,L"QuestLocalSave");
    return __return_storage_ptr__;
  }
  FWeakObjectPtr::Get(local_res18);
  ::FString::PrintfImpl(&local_18,L"%llu");
  ::FString::ConcatCF(__return_storage_ptr__,L"QuestLocalSave",&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasTalkedToNpc @ 14b9b4e40

bool __thiscall UDS_QuestLocalSave::HasTalkedToNpc(UDS_QuestLocalSave *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->HasTalkedToNpcList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->HasTalkedToNpcList).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// Load @ 14b9b8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_QuestLocalSave::Load(TObjectPtr<UDS_QuestLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_QuestLocalSave *pUVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_1b8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FString local_178;
  FString local_168;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_PlayerData::GetData((ulong64)local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_158);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestLocalSave::Load",0x18,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x36,
                 L"Failed to Load Quest Local Save. Invaild Player Data");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    return false;
  }
  FWeakObjectPtr::Get(local_158);
  ::FString::PrintfImpl(&local_168,L"%llu");
  ::FString::ConcatCF(&local_178,L"QuestLocalSave",&local_168);
  if ((UClass *)local_168.Data.AllocatorInstance.Data != (UClass *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar6.Data = local_178.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_168,(wchar_t *)FVar6.Data);
  bVar2 = UGameplayStatics::DoesSaveGameExist(&local_168,0);
  if ((UClass *)local_168.Data.AllocatorInstance.Data != (UClass *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar6.Data = local_178.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_168,(wchar_t *)FVar6.Data);
    pUVar4 = (UDS_QuestLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_168,0);
    if ((UClass *)local_168.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (pUVar4 == (UDS_QuestLocalSave *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_QuestLocalSave::Load",0x18,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x4e;
LAB_14b9b8bbd:
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_UDS_QuestLocalSave_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_QuestLocalSave::Load",0x18,Yes);
          pwVar8 = L"Failed to casting QuestLocalSave. (%s)";
          uVar7 = 0x49;
          goto LAB_14b9b8bbd;
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (param_1->field0_0x0).DebugPtr = pUVar4;
      }
    }
  }
  if ((param_1->field0_0x0).DebugPtr == (UDS_QuestLocalSave *)0x0) {
    local_168.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_QuestLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_168.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_168.Data.AllocatorInstance.Data);
    }
    pUVar4 = (UDS_QuestLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_168);
    if (pUVar4 == (UDS_QuestLocalSave *)0x0) {
LAB_14b9b8c45:
      pUVar4 = (UDS_QuestLocalSave *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UDS_QuestLocalSave_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14b9b8c45;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar4 == (UDS_QuestLocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar4;
      if (pUVar4 == (UDS_QuestLocalSave *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_QuestLocalSave::Load",0x18,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_148.Ptr,0x58,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b8c62;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (param_1->field0_0x0).DebugPtr = pUVar4;
    }
  }
  bVar2 = true;
LAB_14b9b8c62:
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Save @ 14b9c3870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_QuestLocalSave::Save(UDS_QuestLocalSave *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_PlayerData::GetData((ulong64)&local_168,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_168);
    ::FString::PrintfImpl(&local_150,L"%llu");
    ::FString::ConcatCF(&local_160,L"QuestLocalSave",&local_150);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar3.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_150,(wchar_t *)FVar3.Data);
    bVar1 = UGameplayStatics::SaveGameToSlot((USaveGame *)this,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      bVar1 = true;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_QuestLocalSave::Save",0x18,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2a,L"Failed to save. (%s)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar1 = false;
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuestLocalSave::Save",0x18,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x21,
                 L"Failed to Load Quest Local Save. Invaild Player Data");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// SetHasTalkedToNpc @ 14b9c43b0

void __thiscall UDS_QuestLocalSave::SetHasTalkedToNpc(UDS_QuestLocalSave *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->HasTalkedToNpcList).AllocatorInstance.Data;
  iVar2 = (this->HasTalkedToNpcList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (pFVar3 == pFVar1) {
      if (iVar2 == (this->HasTalkedToNpcList).ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->HasTalkedToNpcList).AllocatorInstance,
                           &(this->HasTalkedToNpcList).ArrayMax);
      }
      pFVar1 = (this->HasTalkedToNpcList).AllocatorInstance.Data;
      (this->HasTalkedToNpcList).ArrayNum = iVar2 + 1;
      *(int *)(pFVar1 + (longlong)iVar2 * 4) = param_1;
      Save(this);
      return;
    }
    if (*(int *)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// SetShowAllQuestLocalOption @ 14b9c5440

void __thiscall
UDS_QuestLocalSave::SetShowAllQuestLocalOption(UDS_QuestLocalSave *this,bool param_1)

{
  this->ShowAllQuestLocalOption = param_1;
  Save(this);
  return;
}

// SetShowAllQuestRepeatOption @ 14b9c5450

void __thiscall
UDS_QuestLocalSave::SetShowAllQuestRepeatOption(UDS_QuestLocalSave *this,bool param_1)

{
  this->ShowAllQuestRepeatOption = param_1;
  Save(this);
  return;
}

