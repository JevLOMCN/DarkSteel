// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b448990

UClass * __cdecl UDS_CharLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharLocalSave",
               &Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_CharLocalSave,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharLocalSave>,
               InternalVTableHelperCtorCaller<UDS_CharLocalSave>,local_res8,USaveGame::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton;
}

// UDS_CharLocalSave @ 14b44d020

UDS_CharLocalSave * __thiscall
UDS_CharLocalSave::UDS_CharLocalSave(UDS_CharLocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharLocalSave__6B_;
  *(undefined8 *)&this->PropertyDelegate_SlotIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_SlotIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_SlotIndex).field_0x10 = 0;
  this->LastSelectSlotIndex = 0;
  this->AllMoveToWarehouse = false;
  return this;
}

// ~UDS_CharLocalSave @ 14b44fe60

void __thiscall UDS_CharLocalSave::~UDS_CharLocalSave(UDS_CharLocalSave *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CharLocalSave__6B_;
  pvVar1 = *(void **)&(this->PropertyDelegate_SlotIndex).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_SlotIndex);
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b453d00

UClass * __cdecl UDS_CharLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharLocalSave",
               &Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_CharLocalSave,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharLocalSave>,
               InternalVTableHelperCtorCaller<UDS_CharLocalSave>,local_res8,USaveGame::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_CharLocalSave @ 14b4550e0

void __cdecl UDS_CharLocalSave::StaticRegisterNativesUDS_CharLocalSave(void)

{
  return;
}

// UDS_CharLocalSave @ 14b9997a0

UDS_CharLocalSave * __thiscall
UDS_CharLocalSave::UDS_CharLocalSave(UDS_CharLocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharLocalSave__6B_;
  *(undefined8 *)&this->PropertyDelegate_SlotIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_SlotIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_SlotIndex).field_0x10 = 0;
  this->LastSelectSlotIndex = 0;
  this->AllMoveToWarehouse = false;
  return this;
}

// GetInst @ 14b9aed50

TWeakObjectPtr<UDS_CharLocalSave,FWeakObjectPtr> __cdecl UDS_CharLocalSave::GetInst(void)

{
  UDS_CharLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_CharLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_CharLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->CharLocalSave).field0_0x0.DebugPtr ==
        (UDS_CharLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->CharLocalSave);
    }
    pUVar1 = (pUVar2->CharLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_CharLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_CharLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CharLocalSave *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_CharLocalSave,FWeakObjectPtr>)in_RCX;
}

// IsAllMoveToWarehouse @ 14b9b6f60

bool __thiscall UDS_CharLocalSave::IsAllMoveToWarehouse(UDS_CharLocalSave *this)

{
  return this->AllMoveToWarehouse;
}

// Load @ 14b9b85e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_CharLocalSave::Load(TObjectPtr<UDS_CharLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_CharLocalSave *pUVar3;
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
  ::FString::FString(&local_168,L"CharLocalSave");
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
    pUVar3 = (UDS_CharLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_CharLocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_CharLocalSave::Load",0x17,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x3f;
LAB_14b9b87ab:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_CharLocalSave_NoRegister();
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
                    (&local_148,"UDS_CharLocalSave::Load",0x17,Yes);
          pwVar8 = L"Failed to casting CharLocalSave. (%s)";
          uVar7 = 0x3a;
          goto LAB_14b9b87ab;
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
  if ((param_1->field0_0x0).DebugPtr == (UDS_CharLocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_CharLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_CharLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_CharLocalSave *)0x0) {
LAB_14b9b8833:
      pUVar3 = (UDS_CharLocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_CharLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b9b8833;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UDS_CharLocalSave *)0x0)
       ) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_CharLocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_CharLocalSave::Load",0x17,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x49,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b8850;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  bVar2 = true;
LAB_14b9b8850:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Save @ 14b9c3720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_CharLocalSave::Save(UDS_CharLocalSave *this)

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
  ::FString::FString(&local_158,L"CharLocalSave");
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
                (&local_138,"UDS_CharLocalSave::Save",0x17,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x22,L"Failed to save. (%s)");
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

// SetAllMoveToWarehouse @ 14b9c4090

void __thiscall UDS_CharLocalSave::SetAllMoveToWarehouse(UDS_CharLocalSave *this,bool param_1)

{
  this->AllMoveToWarehouse = param_1;
  Save(this);
  return;
}

// SetLastSelectSlotIndex @ 14b9c47f0

void __thiscall UDS_CharLocalSave::SetLastSelectSlotIndex(UDS_CharLocalSave *this,int param_1)

{
  int local_res10 [6];
  
  this->LastSelectSlotIndex = param_1;
  local_res10[0] = param_1;
  Save(this);
  FDS_ModelPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->PropertyDelegate_SlotIndex,local_res10);
  return;
}

