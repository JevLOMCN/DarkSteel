// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b768830

UClass * __cdecl UDS_WorldMapLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapLocalSave",
               &Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapLocalSave,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapLocalSave>,
               InternalVTableHelperCtorCaller<UDS_WorldMapLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton;
}

// UDS_WorldMapLocalSave @ 14b76f0b0

UDS_WorldMapLocalSave * __thiscall
UDS_WorldMapLocalSave::UDS_WorldMapLocalSave(UDS_WorldMapLocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapLocalSave__6B_;
  *(undefined8 *)&this->MapIndexGroupChecked = 0;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x20 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x28 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x34 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x40 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x48 = 0;
  this->LocationSwitcherIndex = 0;
  return this;
}

// ~UDS_WorldMapLocalSave @ 14b771b30

void __thiscall UDS_WorldMapLocalSave::~UDS_WorldMapLocalSave(UDS_WorldMapLocalSave *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WorldMapLocalSave__6B_;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapIndexGroupChecked).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapIndexGroupChecked);
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b7759a0

UClass * __cdecl UDS_WorldMapLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapLocalSave",
               &Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapLocalSave,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapLocalSave>,
               InternalVTableHelperCtorCaller<UDS_WorldMapLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldMapLocalSave @ 14b777c50

void __cdecl UDS_WorldMapLocalSave::StaticRegisterNativesUDS_WorldMapLocalSave(void)

{
  return;
}

// UDS_WorldMapLocalSave @ 14b999e10

UDS_WorldMapLocalSave * __thiscall
UDS_WorldMapLocalSave::UDS_WorldMapLocalSave
          (UDS_WorldMapLocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapLocalSave__6B_;
  *(undefined8 *)&this->MapIndexGroupChecked = 0;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x8 = 0;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x20 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x28 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x34 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapIndexGroupChecked).field_0x40 = 0;
  *(undefined4 *)&(this->MapIndexGroupChecked).field_0x48 = 0;
  this->LocationSwitcherIndex = 0;
  return this;
}

// ChangeMapIndexGroupChecked @ 14b99c660

void __thiscall
UDS_WorldMapLocalSave::ChangeMapIndexGroupChecked
          (UDS_WorldMapLocalSave *this,int param_1,bool param_2)

{
  int iVar1;
  bool *pbVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->MapIndexGroupChecked).field_0x8 !=
      *(int *)&(this->MapIndexGroupChecked).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MapIndexGroupChecked).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MapIndexGroupChecked).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->MapIndexGroupChecked).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      while (*(int *)(*(longlong *)&this->MapIndexGroupChecked + (longlong)iVar1 * 0x10) != param_1)
      {
        iVar1 = *(int *)(*(longlong *)&this->MapIndexGroupChecked + 8 + (longlong)iVar1 * 0x10);
        if (iVar1 == -1) {
          Save(this);
          return;
        }
      }
      pbVar2 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>::
               FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                            *)&this->MapIndexGroupChecked,param_1);
      *pbVar2 = param_2;
    }
  }
  Save(this);
  return;
}

// GetInst @ 14b9af6b0

TWeakObjectPtr<UDS_WorldMapLocalSave,FWeakObjectPtr> __cdecl UDS_WorldMapLocalSave::GetInst(void)

{
  UDS_WorldMapLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_WorldMapLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_WorldMapLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->WorldMapLocalSave).field0_0x0.DebugPtr ==
        (UDS_WorldMapLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->WorldMapLocalSave);
    }
    pUVar1 = (pUVar2->WorldMapLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_WorldMapLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_WorldMapLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_WorldMapLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_WorldMapLocalSave,FWeakObjectPtr>)in_RCX;
}

// GetLocationSwitcherIndex @ 14b9b0110

int __thiscall UDS_WorldMapLocalSave::GetLocationSwitcherIndex(UDS_WorldMapLocalSave *this)

{
  return this->LocationSwitcherIndex;
}

// GetMapIndexGroupChecked @ 14b9b05d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_WorldMapLocalSave::GetMapIndexGroupChecked(UDS_WorldMapLocalSave *this,int param_1)

{
  int iVar1;
  FDS_MapIndexGroupTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  bool *pbVar4;
  undefined1 *puVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = FDS_MapIndexGroupTableRow::Get((longlong)param_1,true);
  if (pFVar2 == (FDS_MapIndexGroupTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapLocalSave::GetMapIndexGroupChecked",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x7c,L"FDS_MapIndexGroupTableRow  nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return false;
      }
    }
  }
  else if (pFVar2->IsFilterable != false) {
    if ((pFVar2->MapIndexCategoryType != None) &&
       (*(int *)&(this->MapIndexGroupChecked).field_0x8 !=
        *(int *)&(this->MapIndexGroupChecked).field_0x34)) {
      puVar5 = *(undefined1 **)&(this->MapIndexGroupChecked).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->MapIndexGroupChecked).field_0x38;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->MapIndexGroupChecked).field_0x48 - 1U & param_1) *
                                4);
      if (iVar1 != -1) {
        do {
          if (*(int *)(*(longlong *)&this->MapIndexGroupChecked + (longlong)iVar1 * 0x10) == param_1
             ) {
            pbVar4 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                     ::FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                                    *)&this->MapIndexGroupChecked,param_1);
            return *pbVar4;
          }
          iVar1 = *(int *)(*(longlong *)&this->MapIndexGroupChecked + 8 + (longlong)iVar1 * 0x10);
        } while (iVar1 != -1);
      }
    }
    return true;
  }
  return false;
}

// IsContainMapIndexGroupChecked @ 14b9b72f0

bool __thiscall
UDS_WorldMapLocalSave::IsContainMapIndexGroupChecked(UDS_WorldMapLocalSave *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->MapIndexGroupChecked).field_0x8 !=
      *(int *)&(this->MapIndexGroupChecked).field_0x34) {
    puVar2 = *(undefined1 **)&(this->MapIndexGroupChecked).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->MapIndexGroupChecked).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->MapIndexGroupChecked).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MapIndexGroupChecked + (longlong)iVar1 * 0x10) == param_1)
        goto LAB_14b9b733b;
        iVar1 = *(int *)(*(longlong *)&this->MapIndexGroupChecked + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14b9b733b:
  return iVar1 != -1;
}

// Load @ 14b9b93b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_WorldMapLocalSave::Load(TObjectPtr<UDS_WorldMapLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_WorldMapLocalSave *pUVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ::FString::FString(&local_168,L"WorldMapLocalSave");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar6.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_158,(wchar_t *)FVar6.Data);
  bVar2 = UGameplayStatics::DoesSaveGameExist(&local_158,0);
  if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar6.Data = local_168.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_158,(wchar_t *)FVar6.Data);
    pUVar3 = (UDS_WorldMapLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_WorldMapLocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WorldMapLocalSave::Load",0x1b,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x46;
LAB_14b9b957b:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_WorldMapLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_WorldMapLocalSave::Load",0x1b,Yes);
          pwVar8 = L"Failed to casting AccountLocalSave. (%s)";
          uVar7 = 0x41;
          goto LAB_14b9b957b;
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (param_1->field0_0x0).DebugPtr = pUVar3;
      }
    }
  }
  if ((param_1->field0_0x0).DebugPtr == (UDS_WorldMapLocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_WorldMapLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_WorldMapLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_WorldMapLocalSave *)0x0) {
LAB_14b9b9603:
      pUVar3 = (UDS_WorldMapLocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_WorldMapLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b9b9603;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UDS_WorldMapLocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_WorldMapLocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_WorldMapLocalSave::Load",0x1b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x50,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b9620;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  bVar2 = true;
LAB_14b9b9620:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Save @ 14b9c3d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WorldMapLocalSave::Save(UDS_WorldMapLocalSave *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_EventManager *this_00;
  UDS_WorldMapEvent *pUVar4;
  ForAnyElementType FVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  FString local_160;
  void *local_150 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ::FString::FString(&local_160,L"WorldMapLocalSave");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar5.Data = local_160.Data.AllocatorInstance.Data;
  }
  ::FString::FString((FString *)local_150,(wchar_t *)FVar5.Data);
  bVar2 = UGameplayStatics::SaveGameToSlot((USaveGame *)this,(FString *)local_150,0);
  if (local_150[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150[0]);
  }
  if (bVar2) {
    this_00 = UDS_EventManager::GetInst();
    if (this_00 != (UDS_EventManager *)0x0) {
      if ((char)this_00->_padding_ == '\x01') {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x31,
                     L"Cannot access event during UDS_EventManager destruction.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar4 = UDS_EventManager::GetEventInternal<UDS_WorldMapEvent>(this_00);
        if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar4->MapIndexIconVisibilityDelegate,(FReadAccessScope *)local_150);
          iVar1 = *(int *)&(pUVar4->MapIndexIconVisibilityDelegate).Delegate.field_0x10;
          plVar6 = *(longlong **)&(pUVar4->MapIndexIconVisibilityDelegate).Delegate.field_0x8;
          plVar7 = plVar6 + (longlong)iVar1 * 2;
          while( true ) {
            if (*(int *)&(pUVar4->MapIndexIconVisibilityDelegate).Delegate.field_0x10 != iVar1) {
              `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_168);
            }
            if (plVar6 == plVar7) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope((FReadAccessScope *)local_150);
              goto LAB_14b9c3fa4;
            }
            if (((int)plVar6[1] != 0) && (*plVar6 != 0)) break;
            plVar6 = plVar6 + 2;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)local_150);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar4->MapIndexIconVisibilityDelegate).Delegate);
        }
      }
    }
LAB_14b9c3fa4:
    bVar2 = true;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapLocalSave::Save",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x24,L"Failed to save. (%s)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetLocationSwitcherIndex @ 14b9c48a0

void __thiscall
UDS_WorldMapLocalSave::SetLocationSwitcherIndex(UDS_WorldMapLocalSave *this,int param_1)

{
  this->LocationSwitcherIndex = param_1;
  Save(this);
  return;
}

// SetMapIndexGroup @ 14b9c48b0

void __thiscall UDS_WorldMapLocalSave::SetMapIndexGroup(UDS_WorldMapLocalSave *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  TPairInitializer<int_&,bool_&&> local_res18;
  int *local_18;
  undefined1 *local_10;
  
  if (*(int *)&(this->MapIndexGroupChecked).field_0x8 !=
      *(int *)&(this->MapIndexGroupChecked).field_0x34) {
    puVar2 = *(undefined1 **)&(this->MapIndexGroupChecked).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->MapIndexGroupChecked).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->MapIndexGroupChecked).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->MapIndexGroupChecked + (longlong)iVar1 * 0x10) == param_1)
        {
          return;
        }
        iVar1 = *(int *)(*(longlong *)&this->MapIndexGroupChecked + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  local_18 = local_res10;
  local_res8[0] = 1;
  local_10 = local_res8;
  local_res10[0] = param_1;
  TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&,bool_&&>_>
            ((TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *)
             &this->MapIndexGroupChecked,&local_res18,(bool *)&local_18);
  Save(this);
  return;
}

