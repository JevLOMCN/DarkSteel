// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b7553f0

UClass * __cdecl UDS_WalletLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WalletLocalSave",
               &Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_WalletLocalSave,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WalletLocalSave>,
               InternalVTableHelperCtorCaller<UDS_WalletLocalSave>,local_res8,USaveGame::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton;
}

// UDS_WalletLocalSave @ 14b75ae10

UDS_WalletLocalSave * __thiscall
UDS_WalletLocalSave::UDS_WalletLocalSave(UDS_WalletLocalSave *this,FVTableHelper *param_1)

{
  TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined2 local_res8 [4];
  
  USaveGame::USaveGame((USaveGame *)this,param_1);
  local_res8[0] = 0xb01;
  pTVar1 = &this->SelectedMoneyTypeList;
  this->_padding_ = (longlong)&___7UDS_WalletLocalSave__6B_;
  *(undefined8 *)&this->ChangeSelectTypeList_Delegate = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x18 = 2;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SelectedMoneyTypeList).ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&pTVar1->AllocatorInstance,2,&(this->SelectedMoneyTypeList).ArrayMax);
  memcpy((pTVar1->AllocatorInstance).Data,local_res8,2);
  return this;
}

// ~UDS_WalletLocalSave @ 14b75c1d0

void __thiscall UDS_WalletLocalSave::~UDS_WalletLocalSave(UDS_WalletLocalSave *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_WalletLocalSave__6B_;
  pFVar1 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeSelectTypeList_Delegate).field_0x8,
             *(int *)&(this->ChangeSelectTypeList_Delegate).field_0x10);
  pvVar2 = *(void **)&(this->ChangeSelectTypeList_Delegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeSelectTypeList_Delegate);
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b75ed30

UClass * __cdecl UDS_WalletLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WalletLocalSave",
               &Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_WalletLocalSave,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WalletLocalSave>,
               InternalVTableHelperCtorCaller<UDS_WalletLocalSave>,local_res8,USaveGame::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WalletLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_WalletLocalSave @ 14b75f090

void __cdecl UDS_WalletLocalSave::StaticRegisterNativesUDS_WalletLocalSave(void)

{
  return;
}

// UDS_WalletLocalSave @ 14b999d70

UDS_WalletLocalSave * __thiscall
UDS_WalletLocalSave::UDS_WalletLocalSave(UDS_WalletLocalSave *this,FObjectInitializer *param_1)

{
  TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined2 local_res8 [4];
  
  USaveGame::USaveGame((USaveGame *)this,param_1);
  local_res8[0] = 0xb01;
  pTVar1 = &this->SelectedMoneyTypeList;
  this->_padding_ = (longlong)&___7UDS_WalletLocalSave__6B_;
  *(undefined8 *)&this->ChangeSelectTypeList_Delegate = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeSelectTypeList_Delegate).field_0x18 = 2;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SelectedMoneyTypeList).ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&pTVar1->AllocatorInstance,2,&(this->SelectedMoneyTypeList).ArrayMax);
  memcpy((pTVar1->AllocatorInstance).Data,local_res8,2);
  return this;
}

// GetInst @ 14b9af5f0

TWeakObjectPtr<UDS_WalletLocalSave,FWeakObjectPtr> __cdecl UDS_WalletLocalSave::GetInst(void)

{
  UDS_WalletLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_WalletLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_WalletLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->WalletLocalSave).field0_0x0.DebugPtr ==
        (UDS_WalletLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->WalletLocalSave);
    }
    pUVar1 = (pUVar2->WalletLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_WalletLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_WalletLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_WalletLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_WalletLocalSave,FWeakObjectPtr>)in_RCX;
}

// IsSelectedMoneyType @ 14b9b7980

bool __thiscall
UDS_WalletLocalSave::IsSelectedMoneyType(UDS_WalletLocalSave *this,EDS_MoneyType param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->SelectedMoneyTypeList).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return false;
    }
    if (*pFVar1 == (FScriptContainerElement)param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return true;
}

// Load @ 14b9b9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_WalletLocalSave::Load(TObjectPtr<UDS_WalletLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_WalletLocalSave *pUVar3;
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
  ::FString::FString(&local_168,L"WalletLocalSave");
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
    pUVar3 = (UDS_WalletLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_WalletLocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_WalletLocalSave::Load",0x19,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x3e;
LAB_14b9b923b:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_WalletLocalSave_NoRegister();
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
                    (&local_148,"UDS_WalletLocalSave::Load",0x19,Yes);
          pwVar8 = L"Failed to casting WalletLocalSave. (%s)";
          uVar7 = 0x39;
          goto LAB_14b9b923b;
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
  if ((param_1->field0_0x0).DebugPtr == (UDS_WalletLocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_WalletLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_WalletLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_WalletLocalSave *)0x0) {
LAB_14b9b92c3:
      pUVar3 = (UDS_WalletLocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_WalletLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b9b92c3;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UDS_WalletLocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_WalletLocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_WalletLocalSave::Load",0x19,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x48,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b92e0;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  bVar2 = true;
LAB_14b9b92e0:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// RemoveSelectMoneyType @ 14b9c2650

void __thiscall
UDS_WalletLocalSave::RemoveSelectMoneyType(UDS_WalletLocalSave *this,EDS_MoneyType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement FVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement local_res10 [8];
  
  pFVar2 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
  pFVar5 = pFVar2;
  if (pFVar2 != pFVar2 + (this->SelectedMoneyTypeList).ArrayNum) {
    while (*pFVar5 != (FScriptContainerElement)param_1) {
      pFVar5 = pFVar5 + 1;
      if (pFVar5 == pFVar2 + (this->SelectedMoneyTypeList).ArrayNum) {
        return;
      }
    }
    local_res10[0] = (FScriptContainerElement)param_1;
    if (((pFVar2 <= local_res10) && (local_res10 < pFVar2 + (this->SelectedMoneyTypeList).ArrayMax))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->SelectedMoneyTypeList).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
      bVar4 = *pFVar2 != local_res10[0];
      lVar7 = 0;
      FVar6 = local_res10[0];
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar4 == (pFVar2[lVar7] != FVar6));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar2 + iVar10,pFVar2 + iVar8,(longlong)(iVar9 - iVar8));
            FVar6 = local_res10[0];
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      (this->SelectedMoneyTypeList).ArrayNum = iVar10;
    }
    Save(this);
    TMulticastDelegate<void___cdecl(TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ChangeSelectTypeList_Delegate,&this->SelectedMoneyTypeList);
  }
  return;
}

// Save @ 14b9c3c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WalletLocalSave::Save(UDS_WalletLocalSave *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_198 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  ::FString::FString(&local_158,L"WalletLocalSave");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar3.Data = local_158.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_148,(wchar_t *)FVar3.Data);
  bVar1 = UGameplayStatics::SaveGameToSlot((USaveGame *)this,&local_148,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
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
                (&local_138,"UDS_WalletLocalSave::Save",0x19,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x21,L"Failed to save. (%s)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetSelectMoneyType @ 14b9c53a0

void __thiscall
UDS_WalletLocalSave::SetSelectMoneyType(UDS_WalletLocalSave *this,EDS_MoneyType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = (this->SelectedMoneyTypeList).ArrayNum;
  if (iVar2 < 3) {
    pFVar3 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
    pFVar1 = pFVar3 + iVar2;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == (FScriptContainerElement)param_1) {
        return;
      }
    }
    if (iVar2 == (this->SelectedMoneyTypeList).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->SelectedMoneyTypeList).AllocatorInstance,
                         &(this->SelectedMoneyTypeList).ArrayMax);
    }
    pFVar1 = (this->SelectedMoneyTypeList).AllocatorInstance.Data;
    (this->SelectedMoneyTypeList).ArrayNum = iVar2 + 1;
    pFVar1[iVar2] = (FScriptContainerElement)param_1;
    Save(this);
    TMulticastDelegate<void___cdecl(TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->ChangeSelectTypeList_Delegate,&this->SelectedMoneyTypeList);
  }
  return;
}

