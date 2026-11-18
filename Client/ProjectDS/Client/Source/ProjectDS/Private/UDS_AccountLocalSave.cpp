// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b401430

UClass * __cdecl UDS_AccountLocalSave::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AccountLocalSave",
               &Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_AccountLocalSave,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AccountLocalSave>,
               InternalVTableHelperCtorCaller<UDS_AccountLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton;
}

// UDS_AccountLocalSave @ 14b406aa0

UDS_AccountLocalSave * __thiscall
UDS_AccountLocalSave::UDS_AccountLocalSave(UDS_AccountLocalSave *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AccountLocalSave__6B_;
  *(undefined8 *)&this->PropertyDelegate_RecentAccountID = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountID).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountID).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentAccountPW = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountPW).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountPW).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_AccountInfoNum = 0;
  *(undefined8 *)&(this->PropertyDelegate_AccountInfoNum).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_AccountInfoNum).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentServerIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentServerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentServerIndex).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentAPIServerIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAPIServerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAPIServerIndex).field_0x10 = 0;
  ::FString::FString(&this->RecentAccountID,L"");
  ::FString::FString(&this->RecentAccountPW,L"");
  *(undefined8 *)&this->AccountInfoMap = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x20 = 0;
  this->RecentAPIServerIndex = 0;
  this->RecentServerIndex = 0;
  this->RecentCharID = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccountInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccountInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x48 = 0;
  (this->GameOptionMap).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionMap).Data.ArrayNum = 0;
  (this->GameOptionMap).Data.ArrayMax = 0;
  this->bViewerManagerEnableLookAt = true;
  return this;
}

// ~UDS_AccountLocalSave @ 14b407cb0

void __thiscall UDS_AccountLocalSave::~UDS_AccountLocalSave(UDS_AccountLocalSave *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_AccountLocalSave__6B_;
  pFVar1 = (this->GameOptionMap).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AccountInfoMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AccountInfoMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FDS_AccountKey,FDS_AccountInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDS_AccountKey,FDS_AccountInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDS_AccountKey,FDS_AccountInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AccountInfoMap);
  pFVar1 = (this->RecentAccountPW).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RecentAccountID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PropertyDelegate_RecentAPIServerIndex).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_RecentAPIServerIndex);
  pvVar2 = *(void **)&(this->PropertyDelegate_RecentServerIndex).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_RecentServerIndex);
  pvVar2 = *(void **)&(this->PropertyDelegate_AccountInfoNum).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_AccountInfoNum);
  pvVar2 = *(void **)&(this->PropertyDelegate_RecentAccountPW).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_RecentAccountPW);
  pvVar2 = *(void **)&(this->PropertyDelegate_RecentAccountID).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PropertyDelegate_RecentAccountID);
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// GetPrivateStaticClass @ 14b409c00

UClass * __cdecl UDS_AccountLocalSave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AccountLocalSave",
               &Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton,
               StaticRegisterNativesUDS_AccountLocalSave,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AccountLocalSave>,
               InternalVTableHelperCtorCaller<UDS_AccountLocalSave>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AccountLocalSave.InnerSingleton;
}

// StaticRegisterNativesUDS_AccountLocalSave @ 14b40ae00

void __cdecl UDS_AccountLocalSave::StaticRegisterNativesUDS_AccountLocalSave(void)

{
  return;
}

// UDS_AccountLocalSave @ 14b999690

UDS_AccountLocalSave * __thiscall
UDS_AccountLocalSave::UDS_AccountLocalSave(UDS_AccountLocalSave *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AccountLocalSave__6B_;
  *(undefined8 *)&this->PropertyDelegate_RecentAccountID = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountID).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountID).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentAccountPW = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountPW).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAccountPW).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_AccountInfoNum = 0;
  *(undefined8 *)&(this->PropertyDelegate_AccountInfoNum).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_AccountInfoNum).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentServerIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentServerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentServerIndex).field_0x10 = 0;
  *(undefined8 *)&this->PropertyDelegate_RecentAPIServerIndex = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAPIServerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyDelegate_RecentAPIServerIndex).field_0x10 = 0;
  ::FString::FString(&this->RecentAccountID,L"");
  ::FString::FString(&this->RecentAccountPW,L"");
  *(undefined8 *)&this->AccountInfoMap = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x20 = 0;
  this->RecentAPIServerIndex = 0;
  this->RecentServerIndex = 0;
  this->RecentCharID = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccountInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccountInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->AccountInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->AccountInfoMap).field_0x48 = 0;
  (this->GameOptionMap).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameOptionMap).Data.ArrayNum = 0;
  (this->GameOptionMap).Data.ArrayMax = 0;
  this->bViewerManagerEnableLookAt = true;
  return this;
}

// AddAccountInfo @ 14b99abc0

void __thiscall
UDS_AccountLocalSave::AddAccountInfo
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,FDS_AccountInfo *param_2)

{
  TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&> local_res8 [2];
  FDS_AccountKey *local_18;
  FDS_AccountInfo *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&>_>
            ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
              *)&this->AccountInfoMap,local_res8,(bool *)&local_18);
  local_res8[0].Key._0_4_ =
       *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34;
  FDS_ModelPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->PropertyDelegate_AccountInfoNum,(int *)local_res8);
  return;
}

// GetAccountInfo @ 14b9ac260

FDS_AccountInfo * __thiscall
UDS_AccountLocalSave::GetAccountInfo(UDS_AccountLocalSave *this,FDS_AccountKey *param_1)

{
  uint uVar1;
  int iVar2;
  FDS_AccountInfo *pFVar3;
  FDS_AccountInfo *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar1,param_1);
  pFVar4 = (FDS_AccountInfo *)0x0;
  if (iVar2 != -1) {
    pFVar4 = (FDS_AccountInfo *)
             ((longlong)iVar2 * 0x78 + *(longlong *)&(this->AccountInfoMap).field_0x0);
  }
  pFVar3 = (FDS_AccountInfo *)&(pFVar4->AccountPW).Data.ArrayNum;
  if (pFVar4 == (FDS_AccountInfo *)0x0) {
    pFVar3 = (FDS_AccountInfo *)0x0;
  }
  return pFVar3;
}

// GetAccountList @ 14b9ac2c0

TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
* __thiscall UDS_AccountLocalSave::GetAccountList(UDS_AccountLocalSave *this)

{
  return &this->AccountInfoMap;
}

// GetAccountListNum @ 14b9ac2d0

int __thiscall UDS_AccountLocalSave::GetAccountListNum(UDS_AccountLocalSave *this)

{
  return *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34;
}

// GetGameOption @ 14b9ae130

FString * __thiscall
UDS_AccountLocalSave::GetGameOption(UDS_AccountLocalSave *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->GameOptionMap);
  return __return_storage_ptr__;
}

// GetInst @ 14b9aec90

TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> __cdecl UDS_AccountLocalSave::GetInst(void)

{
  UDS_AccountLocalSave *pUVar1;
  UDS_GameInstance *pUVar2;
  FWeakObjectPtr in_RCX;
  UDS_AccountLocalSave *local_res10 [3];
  
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = (UDS_AccountLocalSave *)0x0;
  }
  else {
    if ((UDS_GameInstance::StaticInstance->AccountLocalSave).field0_0x0.DebugPtr ==
        (UDS_AccountLocalSave *)0x0) {
      Load(&UDS_GameInstance::StaticInstance->AccountLocalSave);
    }
    pUVar1 = (pUVar2->AccountLocalSave).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_AccountLocalSave *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_AccountLocalSave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    *(undefined8 *)in_RCX = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_AccountLocalSave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>)in_RCX;
}

// GetRecentAPIServerIndex @ 14b9b1200

int __thiscall UDS_AccountLocalSave::GetRecentAPIServerIndex(UDS_AccountLocalSave *this)

{
  return this->RecentAPIServerIndex;
}

// GetRecentAccountID @ 14b9b1210

FString * __thiscall UDS_AccountLocalSave::GetRecentAccountID(UDS_AccountLocalSave *this)

{
  return &this->RecentAccountID;
}

// GetRecentAccountPW @ 14b9b1220

FString * __thiscall UDS_AccountLocalSave::GetRecentAccountPW(UDS_AccountLocalSave *this)

{
  return &this->RecentAccountPW;
}

// GetRecentCharID @ 14b9b1230

int __thiscall UDS_AccountLocalSave::GetRecentCharID(UDS_AccountLocalSave *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < this->RecentCharID) {
    iVar1 = this->RecentCharID;
  }
  return iVar1;
}

// GetRecentServerIndex @ 14b9b1250

int __thiscall UDS_AccountLocalSave::GetRecentServerIndex(UDS_AccountLocalSave *this)

{
  return this->RecentServerIndex;
}

// GetViewerManagerEnableLookAt @ 14b9b4630

bool __thiscall UDS_AccountLocalSave::GetViewerManagerEnableLookAt(UDS_AccountLocalSave *this)

{
  return this->bViewerManagerEnableLookAt;
}

// Load @ 14b9b8270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_AccountLocalSave::Load(TObjectPtr<UDS_AccountLocalSave> *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_AccountLocalSave *pUVar3;
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
  ::FString::FString(&local_168,L"AccountLocalSave");
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
    pUVar3 = (UDS_AccountLocalSave *)UGameplayStatics::LoadGameFromSlot(&local_158,0);
    if ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (pUVar3 == (UDS_AccountLocalSave *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_AccountLocalSave::Load",0x1a,Yes);
        pwVar8 = L"Failed to LoadGameFromSlot. (%s)";
        uVar7 = 0x3f;
LAB_14b9b843b:
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_AccountLocalSave_NoRegister();
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
                    (&local_148,"UDS_AccountLocalSave::Load",0x1a,Yes);
          pwVar8 = L"Failed to casting AccountLocalSave. (%s)";
          uVar7 = 0x3a;
          goto LAB_14b9b843b;
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
  pUVar3 = (param_1->field0_0x0).DebugPtr;
  if (pUVar3 == (UDS_AccountLocalSave *)0x0) {
    local_158.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UDS_AccountLocalSave_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_158.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_158.Data.AllocatorInstance.Data);
    }
    pUVar3 = (UDS_AccountLocalSave *)
             UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_158);
    if (pUVar3 == (UDS_AccountLocalSave *)0x0) {
LAB_14b9b84c4:
      pUVar3 = (UDS_AccountLocalSave *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDS_AccountLocalSave_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14b9b84c4;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UDS_AccountLocalSave *)0x0)) {
      (param_1->field0_0x0).DebugPtr = pUVar3;
      if (pUVar3 == (UDS_AccountLocalSave *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_AccountLocalSave::Load",0x1a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_148.Ptr,0x49,L"Failed to CreateSaveGameObject. (%s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar2 = false;
        goto LAB_14b9b850a;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (param_1->field0_0x0).DebugPtr = pUVar3;
    }
  }
  SetRecentAccount(pUVar3);
  pUVar3 = (param_1->field0_0x0).DebugPtr;
  local_158.Data.AllocatorInstance.Data._0_4_ =
       *(int *)&(pUVar3->AccountInfoMap).field_0x8 - *(int *)&(pUVar3->AccountInfoMap).field_0x34;
  FDS_ModelPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->PropertyDelegate_AccountInfoNum,(int *)&local_158);
  bVar2 = true;
LAB_14b9b850a:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// OnRegisterAccount @ 14b9be440

void __thiscall
UDS_AccountLocalSave::OnRegisterAccount
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  int local_res8 [2];
  FDS_AccountKey *local_98;
  FString *local_90;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  uVar2 = ::GetTypeHash(param_1);
  iVar3 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar2,param_1);
  if (iVar3 == -1) {
    ::FString::FString(&local_88,"");
    ::FString::FString(&local_78,"");
    FText::FromString(&local_68,"Memo");
    ::FString::FString(&local_58,"None");
    local_3c = 0xffffffffffffffff;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    if (&local_88 != &param_1->AccountID) {
      iVar3 = (param_1->AccountID).Data.ArrayNum;
      pFVar1 = (param_1->AccountID).Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (local_88.Data.ArrayMax == 0)) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,local_88.Data.ArrayMax,(ForAnyElementType *)&local_88,iVar3,
                   &local_88.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_88.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar3 * 2);
        }
      }
    }
    if (&local_78 != param_2) {
      iVar3 = (param_2->Data).ArrayNum;
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      local_78.Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (local_78.Data.ArrayMax == 0)) {
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,local_78.Data.ArrayMax,(ForAnyElementType *)&local_78,iVar3,
                   &local_78.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_78.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar3 * 2);
        }
      }
    }
    local_3c = CONCAT44(local_3c._4_4_,param_1->APIServerIndex);
    local_90 = &local_88;
    local_98 = param_1;
    TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&>_>
              ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                *)&this->AccountInfoMap,
               (TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&> *)local_res8,
               (bool *)&local_98);
    local_res8[0] =
         *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34;
    FDS_ModelPropertyDelegate_int32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PropertyDelegate_AccountInfoNum,local_res8);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  Save(this);
  return;
}

// OnSuccessAccess @ 14b9bf370

void __thiscall
UDS_AccountLocalSave::OnSuccessAccess
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,FDS_AccountInfo *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  FDS_AccountKey *local_18;
  FDS_AccountInfo *local_10;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x78 + *(longlong *)&this->AccountInfoMap;
    lVar4 = lVar3 + 0x18;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(long64 *)(lVar4 + 0x40) = (param_2->RecentLoginTime).Ticks;
      *(int *)(lVar4 + 0x50) = param_2->ServerIndex;
      ::FString::operator=((FString *)(lVar4 + 0x30),&param_2->ServerName);
      goto LAB_14b9bf426;
    }
  }
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&>_>
            ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
              *)&this->AccountInfoMap,
             (TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&> *)local_res8,
             (bool *)&local_18);
  local_res8[0] =
       *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34;
  FDS_ModelPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->PropertyDelegate_AccountInfoNum,local_res8);
LAB_14b9bf426:
  SetRecentAccount(this);
  SetRecentServerIndex(this,param_1);
  Save(this);
  return;
}

// OnSuccessLogIn @ 14b9bf460

void __thiscall
UDS_AccountLocalSave::OnSuccessLogIn
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,FDS_AccountInfo *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  FDS_AccountKey *local_18;
  FDS_AccountInfo *local_10;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x78 + *(longlong *)&this->AccountInfoMap;
    lVar4 = lVar3 + 0x18;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(long64 *)(lVar4 + 0x40) = (param_2->RecentLoginTime).Ticks;
      *(int *)(lVar4 + 0x4c) = param_1->APIServerIndex;
      *(int *)(lVar4 + 0x54) = param_2->CharID;
      goto LAB_14b9bf50d;
    }
  }
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&>_>
            ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
              *)&this->AccountInfoMap,
             (TPairInitializer<FDS_AccountKey_const_&,FDS_AccountInfo_const_&> *)local_res8,
             (bool *)&local_18);
  local_res8[0] =
       *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34;
  FDS_ModelPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->PropertyDelegate_AccountInfoNum,local_res8);
LAB_14b9bf50d:
  SetRecentAccount(this);
  SetRecentServerIndex(this,param_1);
  Save(this);
  return;
}

// Save @ 14b9c35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AccountLocalSave::Save(UDS_AccountLocalSave *this)

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
  ::FString::FString(&local_158,L"AccountLocalSave");
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
                (&local_138,"UDS_AccountLocalSave::Save",0x1a,Yes);
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

// SetAccountMemo @ 14b9c3fe0

void __thiscall
UDS_AccountLocalSave::SetAccountMemo
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar3,param_1);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x78 + *(longlong *)&this->AccountInfoMap;
    lVar6 = lVar5 + 0x18;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      pIVar1 = (param_2->TextData).Reference;
      pIVar2 = *(ITextData **)(lVar6 + 0x20);
      if (pIVar2 != pIVar1) {
        *(ITextData **)(lVar6 + 0x20) = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      *(uint *)(lVar6 + 0x28) = param_2->Flags;
      Save(this);
    }
  }
  return;
}

// SetGameOption @ 14b9c4370

void __thiscall UDS_AccountLocalSave::SetGameOption(UDS_AccountLocalSave *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange
            (&this->GameOptionMap,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  Save(this);
  return;
}

// SetRecentAPIServerIndex @ 14b9c4ce0

void __thiscall
UDS_AccountLocalSave::SetRecentAPIServerIndex(UDS_AccountLocalSave *this,int *param_1)

{
  if (this->RecentAPIServerIndex != *param_1) {
    this->RecentAPIServerIndex = *param_1;
    Save(this);
    FDS_ModelPropertyDelegate_int32_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PropertyDelegate_RecentAPIServerIndex,&this->RecentAPIServerIndex);
  }
  return;
}

// SetRecentAccount @ 14b9c4d30

void __thiscall UDS_AccountLocalSave::SetRecentAccount(UDS_AccountLocalSave *this)

{
  FString *this_00;
  FString *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *pTVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  FDateTime FVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  FString local_128;
  FString local_118;
  undefined4 local_108;
  FString local_100;
  FDS_AccountInfo local_f0;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong uVar12;
  
  ::FString::FString(&local_128,"");
  FVar7.Ticks = 0;
  uVar11 = 0;
  this_00 = &this->RecentAccountID;
  if (this_00 != &local_128) {
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_00->Data).AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
    (this->RecentAccountID).Data.ArrayNum = local_128.Data.ArrayNum;
    (this->RecentAccountID).Data.ArrayMax = local_128.Data.ArrayMax;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_118,"");
  this_01 = &this->RecentAccountPW;
  if (this_01 != &local_118) {
    pFVar1 = (this_01->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this_01->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    (this->RecentAccountPW).Data.ArrayNum = local_118.Data.ArrayNum;
    (this->RecentAccountPW).Data.ArrayMax = local_118.Data.ArrayMax;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_88 = &(this->AccountInfoMap).field_0x10;
  this->RecentAPIServerIndex = 0;
  this->RecentCharID = 1;
  local_78 = 0;
  uVar8 = *(uint *)&(this->AccountInfoMap).field_0x28;
  uStack_8c = 1;
  uStack_7c = uVar11;
  if (uVar8 != 0) {
    puVar14 = *(uint **)&(this->AccountInfoMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_88;
    }
    uVar15 = *puVar14;
    uVar12 = FVar7.Ticks;
    uVar11 = 0;
    while (uVar15 == 0) {
      iVar9 = (int)uVar12;
      local_78 = local_78 + 0x20;
      uVar11 = iVar9 + 1;
      uVar12 = (ulonglong)uVar11;
      uStack_7c = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14b9c4ebe;
      uVar15 = puVar14[(longlong)iVar9 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar12 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uStack_7c = local_78 + -1 + local_res18;
    if ((int)uVar8 < (int)uStack_7c) {
      uStack_7c = uVar8;
    }
  }
LAB_14b9c4ebe:
  local_res10 = *(uint *)&(this->AccountInfoMap).field_0x28;
  local_98 = &this->AccountInfoMap;
  iStack_70 = *(int *)&(this->AccountInfoMap).field_0x8 - *(int *)&(this->AccountInfoMap).field_0x34
  ;
  uStack_80 = 0xffffffff;
  uVar15 = local_res10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,uVar11);
  iVar9 = (int)local_res10 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  bVar5 = (byte)local_res10;
  uStack_90 = uVar11;
  uStack_74 = uStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  if ((((int)local_res10 < 0) || ((int)uVar8 < (int)local_res10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = *(uint *)&(this->AccountInfoMap).field_0x28;
  if (local_res10 != uVar11) {
    puVar13 = *(undefined1 **)&(this->AccountInfoMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->AccountInfoMap).field_0x10;
    }
    uVar8 = -1 << (bVar5 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar9;
      uVar15 = uVar15 + 0x20;
      iVar9 = iVar9 + 1;
      local_res10 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14b9c4fdb;
      uVar8 = *(uint *)(puVar13 + lVar6 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6 + -1 + uVar15;
    if ((int)uVar11 < (int)local_res10) {
      local_res10 = uVar11;
    }
  }
LAB_14b9c4fdb:
  uVar11 = local_res10;
  do {
    pTVar3 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FDS_AccountKey,FDS_AccountInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->AccountInfoMap).field_0x10)) &&
       (pTVar3 == &this->AccountInfoMap)) {
      return;
    }
    puVar10 = (undefined4 *)(*(longlong *)pTVar3 + (longlong)TStack_60.CurrentBitIndex * 0x78);
    local_108 = *puVar10;
    ::FString::FString(&local_100,(FString *)(puVar10 + 2));
    FDS_AccountInfo::FDS_AccountInfo(&local_f0,(FDS_AccountInfo *)(puVar10 + 6));
    if (FVar7.Ticks == 0) {
      iVar9 = local_f0.AccountID.Data.ArrayNum + -1;
      if (local_f0.AccountID.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange
                (this_00,(wchar_t *)local_f0.AccountID.Data.AllocatorInstance.Data,iVar9);
      iVar9 = local_f0.AccountPW.Data.ArrayNum + -1;
      if (local_f0.AccountPW.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
LAB_14b9c50c1:
      ::FString::AssignRange
                (this_01,(wchar_t *)local_f0.AccountPW.Data.AllocatorInstance.Data,iVar9);
      this->RecentAPIServerIndex = local_f0.APIServerIndex;
      iVar9 = 1;
      if (0 < local_f0.CharID) {
        iVar9 = local_f0.CharID;
      }
      this->RecentCharID = iVar9;
      FVar7.Ticks = local_f0.RecentLoginTime.Ticks;
    }
    else if ((local_f0.RecentLoginTime.Ticks != 0) && (FVar7.Ticks < local_f0.RecentLoginTime.Ticks)
            ) {
      iVar9 = local_f0.AccountID.Data.ArrayNum + -1;
      if (local_f0.AccountID.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange
                (this_00,(wchar_t *)local_f0.AccountID.Data.AllocatorInstance.Data,iVar9);
      iVar9 = local_f0.AccountPW.Data.ArrayNum + -1;
      if (local_f0.AccountPW.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      goto LAB_14b9c50c1;
    }
    if (local_f0.ServerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.ServerName.Data.AllocatorInstance.Data);
    }
    if (local_f0.AccountMemo.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.AccountMemo.TextData.Reference + 0x10))();
    }
    if (local_f0.AccountPW.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AccountPW.Data.AllocatorInstance.Data);
    }
    if (local_f0.AccountID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AccountID.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// SetRecentAccountID @ 14b9c5180

void __thiscall
UDS_AccountLocalSave::SetRecentAccountID(UDS_AccountLocalSave *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->RecentAccountID).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->RecentAccountID).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    ::FString::operator=(&this->RecentAccountID,param_1);
    Save(this);
    FDS_ModelPropertyDelegate_FString_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PropertyDelegate_RecentAccountID,&this->RecentAccountID);
  }
  return;
}

// SetRecentAccountPW @ 14b9c5210

void __thiscall
UDS_AccountLocalSave::SetRecentAccountPW(UDS_AccountLocalSave *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->RecentAccountPW).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->RecentAccountPW).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    ::FString::operator=(&this->RecentAccountPW,param_1);
    Save(this);
    FDS_ModelPropertyDelegate_FString_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->PropertyDelegate_RecentAccountPW,&this->RecentAccountPW);
  }
  return;
}

// SetRecentCharSlotIndex @ 14b9c52a0

void __thiscall
UDS_AccountLocalSave::SetRecentCharSlotIndex
          (UDS_AccountLocalSave *this,FDS_AccountKey *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x78 + *(longlong *)&this->AccountInfoMap;
    lVar4 = lVar3 + 0x18;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x48) = param_2;
      Save(this);
    }
  }
  return;
}

// SetRecentServerIndex @ 14b9c5320

void __thiscall
UDS_AccountLocalSave::SetRecentServerIndex(UDS_AccountLocalSave *this,FDS_AccountKey *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FDS_AccountInfo *pFVar5;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>
                    ((TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
                      *)&this->AccountInfoMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x78 + *(longlong *)&this->AccountInfoMap;
    lVar4 = lVar3 + 0x18;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      pFVar5 = TMapBase<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
               ::FindChecked((TMapBase<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
                              *)&this->AccountInfoMap,param_1);
      this->RecentServerIndex = pFVar5->ServerIndex;
    }
  }
  return;
}

// SetViewerManagerEnableLookAt @ 14b9c5670

void __thiscall
UDS_AccountLocalSave::SetViewerManagerEnableLookAt(UDS_AccountLocalSave *this,bool *param_1)

{
  this->bViewerManagerEnableLookAt = *param_1;
  Save(this);
  return;
}

