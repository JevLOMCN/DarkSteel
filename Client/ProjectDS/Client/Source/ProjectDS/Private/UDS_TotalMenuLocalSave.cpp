// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b5c3750

UClass * __cdecl UDS_TotalMenuLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TotalMenuLocalSave",
               &Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_TotalMenuLocalSave,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TotalMenuLocalSave>,
               InternalVTableHelperCtorCaller<UDS_TotalMenuLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton;
}

// UDS_TotalMenuLocalSave @ 14b5c73a0

UDS_TotalMenuLocalSave * __thiscall
UDS_TotalMenuLocalSave::UDS_TotalMenuLocalSave(UDS_TotalMenuLocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TotalMenuLocalSave__6B_;
  return this;
}

// ~UDS_TotalMenuLocalSave @ 14b5c8c70

void __thiscall UDS_TotalMenuLocalSave::~UDS_TotalMenuLocalSave(UDS_TotalMenuLocalSave *this)

{
  this->_padding_ = (longlong)&___7UDS_TotalMenuLocalSave__6B_;
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc0e0

UClass * __cdecl UDS_TotalMenuLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TotalMenuLocalSave",
               &Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_TotalMenuLocalSave,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TotalMenuLocalSave>,
               InternalVTableHelperCtorCaller<UDS_TotalMenuLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TotalMenuLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_TotalMenuLocalSave @ 14b5ce010

void __cdecl UDS_TotalMenuLocalSave::StaticRegisterNativesUDS_TotalMenuLocalSave(void)

{
  return;
}

// UDS_TotalMenuLocalSave @ 14b999d40

UDS_TotalMenuLocalSave * __thiscall
UDS_TotalMenuLocalSave::UDS_TotalMenuLocalSave
          (UDS_TotalMenuLocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TotalMenuLocalSave__6B_;
  return this;
}

// GetInst @ 14b9af530

TWeakObjectPtr<UDS_TotalMenuLocalSave,FWeakObjectPtr> __cdecl UDS_TotalMenuLocalSave::GetInst(void)

{
  UDS_TotalMenuLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_TotalMenuLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_TotalMenuLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->TotalMenuLocalSave).field0_0x0.DebugPtr ==
        (UDS_TotalMenuLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->TotalMenuLocalSave);
    }
    pUVar1 = (pUVar2->TotalMenuLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_TotalMenuLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_TotalMenuLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_TotalMenuLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_TotalMenuLocalSave,FWeakObjectPtr>)in_RCX;
}

// Load @ 14b9b8d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_TotalMenuLocalSave::Load(TObjectPtr<UDS_TotalMenuLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_TotalMenuLocalSave *pUVar3;
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
  ::FString::FString(&local_168,L"TotalMenuLocalSave");
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
    pUVar3 = (UDS_TotalMenuLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_TotalMenuLocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_TotalMenuLocalSave::Load",0x1c,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x39;
LAB_14b9b8efb:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_TotalMenuLocalSave_NoRegister();
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
                    (&local_148,"UDS_TotalMenuLocalSave::Load",0x1c,Yes);
          pwVar8 = L"Failed to casting TotalMenuLocalSave. (%s)";
          uVar7 = 0x34;
          goto LAB_14b9b8efb;
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
  if ((param_1->field0_0x0).DebugPtr == (UDS_TotalMenuLocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_TotalMenuLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_TotalMenuLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_TotalMenuLocalSave *)0x0) {
LAB_14b9b8f83:
      pUVar3 = (UDS_TotalMenuLocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_TotalMenuLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b9b8f83;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UDS_TotalMenuLocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_TotalMenuLocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_TotalMenuLocalSave::Load",0x1c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x43,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b8fa0;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  bVar2 = true;
LAB_14b9b8fa0:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Save @ 14b9c3ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TotalMenuLocalSave::Save(UDS_TotalMenuLocalSave *this)

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
  ::FString::FString(&local_158,L"TotalMenuLocalSave");
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
                (&local_138,"UDS_TotalMenuLocalSave::Save",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1e,L"Failed to save. (%s)");
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

// SetTabIndex @ 14b9c54e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TotalMenuLocalSave::SetTabIndex(UDS_TotalMenuLocalSave *this,int *param_1)

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
  this->TabIndex = *param_1;
  ::FString::FString(&local_158,L"TotalMenuLocalSave");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar3.Data = local_158.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_148,(wchar_t *)FVar3.Data);
  bVar1 = UGameplayStatics::SaveGameToSlot((USaveGame *)this,&local_148,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TotalMenuLocalSave::Save",0x1c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1e,L"Failed to save. (%s)");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

