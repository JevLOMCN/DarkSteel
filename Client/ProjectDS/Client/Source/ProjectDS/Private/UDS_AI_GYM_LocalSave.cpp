// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b416b70

UClass * __cdecl UDS_AI_GYM_LocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_LocalSave",
               &Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_LocalSave,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_LocalSave>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_LocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton;
}

// UDS_AI_GYM_LocalSave @ 14b41ae00

UDS_AI_GYM_LocalSave * __thiscall
UDS_AI_GYM_LocalSave::UDS_AI_GYM_LocalSave(UDS_AI_GYM_LocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AI_GYM_LocalSave__6B_;
  ::FString::FString(&this->ServerAddr,"");
  return this;
}

// UDS_AI_GYM_LocalSave @ 14b41ae40

UDS_AI_GYM_LocalSave * __thiscall
UDS_AI_GYM_LocalSave::UDS_AI_GYM_LocalSave(UDS_AI_GYM_LocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AI_GYM_LocalSave__6B_;
  ::FString::FString(&this->ServerAddr,"");
  return this;
}

// ~UDS_AI_GYM_LocalSave @ 14b41b940

void __thiscall UDS_AI_GYM_LocalSave::~UDS_AI_GYM_LocalSave(UDS_AI_GYM_LocalSave *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AI_GYM_LocalSave__6B_;
  pFVar1 = (this->ServerAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cdd0

UClass * __cdecl UDS_AI_GYM_LocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_LocalSave",
               &Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton,
               StaticRegisterNativesUDS_AI_GYM_LocalSave,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AI_GYM_LocalSave>,
               InternalVTableHelperCtorCaller<UDS_AI_GYM_LocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AI_GYM_LocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_AI_GYM_LocalSave @ 14b41e130

void __cdecl UDS_AI_GYM_LocalSave::StaticRegisterNativesUDS_AI_GYM_LocalSave(void)

{
  return;
}

// Load @ 14b87f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_AI_GYM_LocalSave::Load(TObjectPtr<UDS_AI_GYM_LocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_AI_GYM_LocalSave *pUVar3;
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
  ::FString::FString(&local_168,L"AILocalSave");
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
    pUVar3 = (UDS_AI_GYM_LocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_AI_GYM_LocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_AI_GYM_LocalSave::Load",0x1a,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x2d;
LAB_14b87f4eb:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_AI_GYM_LocalSave_NoRegister();
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
                    (&local_148,"UDS_AI_GYM_LocalSave::Load",0x1a,Yes);
          pwVar8 = L"Failed to casting UDS_AI_GYM_LocalSave. (%s)";
          uVar7 = 0x28;
          goto LAB_14b87f4eb;
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
  if ((param_1->field0_0x0).DebugPtr == (UDS_AI_GYM_LocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_AI_GYM_LocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_AI_GYM_LocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_AI_GYM_LocalSave *)0x0) {
LAB_14b87f573:
      pUVar3 = (UDS_AI_GYM_LocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_AI_GYM_LocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b87f573;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UDS_AI_GYM_LocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_AI_GYM_LocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_AI_GYM_LocalSave::Load",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x36,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b87f590;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  bVar2 = true;
LAB_14b87f590:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Save @ 14b898640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AI_GYM_LocalSave::Save(UDS_AI_GYM_LocalSave *this)

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
  ::FString::FString(&local_158,L"AILocalSave");
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
                (&local_138,"UDS_AI_GYM_LocalSave::Save",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x10,L"Failed to save. (%s)");
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

// SetServerAddr @ 14b8992c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_AI_GYM_LocalSave::SetServerAddr(UDS_AI_GYM_LocalSave *this,FString *param_1)

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
  ::FString::operator=(&this->ServerAddr,param_1);
  ::FString::FString(&local_158,L"AILocalSave");
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
              (&local_138,"UDS_AI_GYM_LocalSave::Save",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x10,L"Failed to save. (%s)");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

