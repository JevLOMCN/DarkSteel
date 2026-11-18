// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 37

// StaticClass @ 14b46d4b0

UClass * __cdecl UDS_ContentManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentManager",
               &Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton,
               StaticRegisterNativesUDS_ContentManager,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentManager>,
               InternalVTableHelperCtorCaller<UDS_ContentManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton;
}

// UDS_ContentManager @ 14b471bc0

UDS_ContentManager * __thiscall
UDS_ContentManager::UDS_ContentManager(UDS_ContentManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentManager__6B_;
  *(undefined8 *)&this->OpenContentEvent = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->CloseContentEvent = 0;
  *(undefined8 *)&(this->CloseContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->CloseContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOpenCloseContentFrameEvent = 0;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x10 = 0;
  *(undefined8 *)&this->ContentLockMap = 0;
  *(undefined8 *)&(this->ContentLockMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentLockMap).field_0x20 = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x18 = 2;
  *(undefined8 *)&(this->CloseContentEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x18 = 2;
  *(undefined4 *)&(this->ContentLockMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentLockMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentLockMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x48 = 0;
  *(undefined8 *)&this->ContentsFunctionMap = 0;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x48 = 0;
  *(undefined8 *)&this->ContentsFunctionMap_Twoway = 0;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x48 = 0;
  (this->ContentsController).field0_0x0.DebugPtr = (UDS_ContentsController *)0x0;
  return this;
}

// UDS_ContentManager @ 14b471d00

UDS_ContentManager * __thiscall
UDS_ContentManager::UDS_ContentManager(UDS_ContentManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentManager__6B_;
  *(undefined8 *)&this->OpenContentEvent = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->CloseContentEvent = 0;
  *(undefined8 *)&(this->CloseContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->CloseContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOpenCloseContentFrameEvent = 0;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x10 = 0;
  *(undefined8 *)&this->ContentLockMap = 0;
  *(undefined8 *)&(this->ContentLockMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentLockMap).field_0x20 = 0;
  *(undefined8 *)&(this->OpenContentEvent).field_0x18 = 2;
  *(undefined8 *)&(this->CloseContentEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnOpenCloseContentFrameEvent).field_0x18 = 2;
  *(undefined4 *)&(this->ContentLockMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentLockMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentLockMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentLockMap).field_0x48 = 0;
  *(undefined8 *)&this->ContentsFunctionMap = 0;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x48 = 0;
  *(undefined8 *)&this->ContentsFunctionMap_Twoway = 0;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x8 = 0;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x20 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x28 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x34 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentsFunctionMap_Twoway).field_0x40 = 0;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x48 = 0;
  (this->ContentsController).field0_0x0.DebugPtr = (UDS_ContentsController *)0x0;
  return this;
}

// ~UDS_ContentManager @ 14b472e80

void __thiscall UDS_ContentManager::~UDS_ContentManager(UDS_ContentManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ContentManager__6B_;
  *(undefined4 *)&(this->ContentsFunctionMap_Twoway).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentsFunctionMap_Twoway).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ContentsFunctionType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ContentsFunctionType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ContentsFunctionMap_Twoway);
  *(undefined4 *)&(this->ContentsFunctionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentsFunctionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ContentsFunctionType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ContentsFunctionType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ContentsFunctionMap);
  *(undefined4 *)&(this->ContentLockMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentLockMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContentLockMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpenCloseContentFrameEvent).field_0x8,
             *(int *)&(this->OnOpenCloseContentFrameEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnOpenCloseContentFrameEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenCloseContentFrameEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CloseContentEvent).field_0x8,*(int *)&(this->CloseContentEvent).field_0x10);
  pvVar1 = *(void **)&(this->CloseContentEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CloseContentEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OpenContentEvent).field_0x8,*(int *)&(this->OpenContentEvent).field_0x10);
  pvVar1 = *(void **)&(this->OpenContentEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OpenContentEvent);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b476770

UClass * __cdecl UDS_ContentManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentManager",
               &Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton,
               StaticRegisterNativesUDS_ContentManager,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentManager>,
               InternalVTableHelperCtorCaller<UDS_ContentManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentManager @ 14b476f20

void __cdecl UDS_ContentManager::StaticRegisterNativesUDS_ContentManager(void)

{
  return;
}

// CheckContentLock @ 14ba96070

void __thiscall UDS_ContentManager::CheckContentLock(UDS_ContentManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UDS_DataSetBase *this_00;
  UObject *pUVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  TArray<FDS_ContentsBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_40);
  bVar4 = FWeakObjectPtr::IsValid(&local_40);
  if (bVar4) {
    FDS_ContentsBaseTableRow::GetAll(&local_38);
    iVar3 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar7.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FDS_ContentsBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      if (*(int *)(*(longlong *)FVar7.Data + 8) != 0) {
        TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_res20);
        bVar4 = FWeakObjectPtr::IsValid(&local_res20);
        if (bVar4) {
          this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res20);
          UDS_DataSetBase::GetData(this_00,(ulong64)&local_48);
          bVar4 = FWeakObjectPtr::IsValid(&local_48);
          if (bVar4) {
            pUVar5 = FWeakObjectPtr::Get(&local_48);
            if (pUVar5 == (UObject *)0x0) {
LAB_14ba96185:
              pUVar5 = (UObject *)0x0;
            }
            else {
              pUVar6 = Z_Construct_UClass_UDS_ContentData_NoRegister();
              iVar2 = (int)pUVar6->_padding_;
              if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar6->_padding_)) goto LAB_14ba96185;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            local_res18.ObjectIndex = 0;
            local_res18.ObjectSerialNumber = 0;
            local_res10 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
            bVar4 = FWeakObjectPtr::IsValid(&local_res18);
            if ((bVar4) &&
               ((this->ContentsController).field0_0x0.DebugPtr != (UDS_ContentsController *)0x0))
            break;
          }
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// CheckContentLockAndLevel @ 14ba96230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ContentManager::CheckContentLockAndLevel(UDS_ContentManager *this,EDS_ContentsBaseType *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_ContentsBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  UDS_DataSetBase *this_00;
  UObject *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  void *pvVar10;
  undefined1 auStackY_458 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_418;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_408;
  FWeakObjectPtr local_3f8;
  FWeakObjectPtr local_3f0;
  FWeakObjectPtr local_3e8;
  FWeakObjectPtr local_3e0;
  FWeakObjectPtr local_3d8;
  UObject *local_3d0;
  FStringFormatArg local_3c8;
  FStringFormatArg local_3a8;
  FString local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar5 = FDS_ContentsBaseTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar5 == (FDS_ContentsBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_378._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_378,"UDS_ContentManager::CheckContentLockAndLevel",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_378.Ptr,0x331,
               L"contentsBaseTableRow is nullptr!! ContentID - %d");
    pvVar10 = (void *)local_378._padding_;
LAB_14ba962eb:
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    return false;
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_3e8);
  bVar3 = FWeakObjectPtr::IsValid(&local_3e8);
  if (!bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_ContentManager::CheckContentLockAndLevel",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_258.Ptr,0x338,L"Not found UDS_ContentDataSet!!")
    ;
    pvVar10 = (void *)local_258._padding_;
    goto LAB_14ba962eb;
  }
  UDS_PlayerData::GetData((ulong64)&local_3f0,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_3f0);
  if (!bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ContentManager::CheckContentLockAndLevel",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x33f,L"mainPlayerData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5284082703602287424>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_ContentManager.cpp"
                       ,0x340,"false");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FWeakObjectPtr::Get(&local_3f0);
  UDS_CharInfoData::GetData((ulong64)&local_3d8);
  bVar3 = FWeakObjectPtr::IsValid(&local_3d8);
  if (!bVar3) {
    return false;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_3e8);
  UDS_DataSetBase::GetData(this_00,(ulong64)&local_3e0);
  bVar3 = FWeakObjectPtr::IsValid(&local_3e0);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_3e0);
    if (pUVar7 == (UObject *)0x0) {
LAB_14ba96518:
      pUVar7 = (UObject *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UDS_ContentData_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_14ba96518;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    local_3f8.ObjectIndex = 0;
    local_3f8.ObjectSerialNumber = 0;
    local_3d0 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_3d0);
    bVar3 = FWeakObjectPtr::IsValid(&local_3f8);
    if (bVar3) {
      pFVar9 = (FString *)(**(code **)((pFVar5->ID_Name)._padding_ + 8))(&pFVar5->ID_Name);
      pFVar9 = ::FString::FString(&local_388,pFVar9);
      FStringFormatArg::FStringFormatArg(&local_3c8,pFVar9);
      local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_418.AllocatorInstance,1,&local_418.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_418.AllocatorInstance.Data,&local_3c8,1);
      UDS_UIMessageManager::OpenMsgByStringUi
                ((pFVar5->ID_ContentsLockString).ID,Alert_None_01,&local_418,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_418.AllocatorInstance.Data,local_418.ArrayNum);
      local_3a8.StringValue.Data.AllocatorInstance.Data =
           local_3c8.StringValue.Data.AllocatorInstance.Data;
      if ((FStringFormatArg *)local_418.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_418.AllocatorInstance.Data);
        local_3a8.StringValue.Data.AllocatorInstance.Data =
             local_3c8.StringValue.Data.AllocatorInstance.Data;
      }
      goto LAB_14ba966d7;
    }
  }
  pUVar7 = FWeakObjectPtr::Get(&local_3d8);
  if (pFVar5->OpenLevel <= *(int *)&pUVar7[8].field_0xc) {
    return false;
  }
  FStringFormatArg::FStringFormatArg(&local_3a8,pFVar5->OpenLevel);
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_408.AllocatorInstance,1,&local_408.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_408.AllocatorInstance.Data,&local_3a8,1);
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x57c,Alert_None_01,&local_408,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_408.AllocatorInstance.Data,local_408.ArrayNum);
  if ((FStringFormatArg *)local_408.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
LAB_14ba966d7:
  if (local_3a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// CheckValidPacket @ 14ba971c0

bool __thiscall UDS_ContentManager::CheckValidPacket(UDS_ContentManager *this,Message *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  basic_string_view<char,std::char_traits<char>_> *pbVar7;
  EDS_ContentsFunctionType *pEVar8;
  UDS_ContentDataSet *pUVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  PkModeChangeRequestDefaultTypeInternal *pPVar14;
  EDS_ContentsFunctionType local_res18 [2];
  EDS_ContentsFunctionType local_res20 [2];
  ForAnyElementType local_a8;
  uint local_a0;
  uint local_9c [3];
  FWeakObjectPtr local_90;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FDS_ContentsFunctionData local_78;
  PkModeChangeRequest local_48;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (UDS_PlayerData::MainPlayerEntityID == 0) {
    return true;
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_90);
  bVar3 = FWeakObjectPtr::IsValid(&local_90);
  if (!bVar3) {
    return true;
  }
  uVar13 = 0;
  local_78.FunctionType = None;
  local_78.FunctionLockType = None;
  local_78.FunctionLockMessageID = 0;
  local_78.ContentsName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContentsName.Data.ArrayNum = 0;
  local_78.ContentsName.Data.ArrayMax = 0;
  local_78.FunctionLockValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.FunctionLockValues.ArrayNum = 0;
  local_78.FunctionLockValues.ArrayMax = 0;
  pbVar7 = google::protobuf::MessageLite::GetTypeName((MessageLite *)param_1,&local_28);
  if (pbVar7->_Mysize == 0x26) {
    iVar5 = memcmp(pbVar7->_Mydata,"client_msg_twoway.ClientMessagesTwoway",0x26);
    uVar6 = *(uint *)&param_1[1].field_0xc;
    if (iVar5 == 0) {
      if (*(int *)&(this->ContentsFunctionMap_Twoway).field_0x8 !=
          *(int *)&(this->ContentsFunctionMap_Twoway).field_0x34) {
        puVar10 = *(undefined1 **)&(this->ContentsFunctionMap_Twoway).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->ContentsFunctionMap_Twoway).field_0x38;
        }
        iVar5 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(this->ContentsFunctionMap_Twoway).field_0x48 - 1U & uVar6) * 4);
        if (iVar5 != -1) {
          lVar1 = *(longlong *)&this->ContentsFunctionMap_Twoway;
          do {
            if (*(uint *)(lVar1 + (longlong)iVar5 * 0x10) == uVar6) {
              pEVar8 = TMapBase<int,enum_EDS_ContentsFunctionType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>_>
                       ::FindChecked(&this->ContentsFunctionMap_Twoway,uVar6);
              local_res18[0] = *pEVar8;
              pUVar9 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(&local_90);
              bVar3 = UDS_ContentDataSet::TryGetContentsFunctionData(pUVar9,local_res18,&local_78);
              if (bVar3) {
                local_a0 = 0;
                local_a8.Data = (FScriptContainerElement *)0x0;
                local_9c[0] = 0;
                uVar11 = uVar13;
                if (local_78.FunctionType == PkModeChange) {
                  if (*(int *)&param_1[1].field_0xc == 0x46) {
                    pPVar14 = *(PkModeChangeRequestDefaultTypeInternal **)(param_1 + 1);
                  }
                  else {
                    pPVar14 = &client_msg_twoway::_PkModeChangeRequest_default_instance_;
                  }
                  client_msg_twoway::PkModeChangeRequest::PkModeChangeRequest
                            (&local_48,(Arena *)0x0,&pPVar14->_instance);
                  local_48._padding_ = (longlong)&___7PkModeChangeRequest_client_msg_twoway__6B_;
                  if (local_a0 == local_9c[0]) {
                    local_a0 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_a8,(int *)local_9c);
                  }
                  *(int *)(local_a8.Data + (longlong)(int)local_a0 * 4) =
                       local_48._impl_.pk_mode_type_;
                  local_a0 = local_a0 + 1;
                  client_msg_twoway::PkModeChangeRequest::~PkModeChangeRequest(&local_48);
                  uVar11 = (ulonglong)local_a0;
                }
                iVar5 = (int)uVar11;
                if (0 < iVar5) goto LAB_14ba973e0;
                local_9c[1] = 0;
                bVar3 = HasContentsFunction(this,local_res18,(int *)(local_9c + 1));
                local_88.AllocatorInstance.Data = local_a8.Data;
                if (bVar3) goto LAB_14ba97465;
                goto LAB_14ba9757f;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
          } while (iVar5 != -1);
        }
      }
      goto LAB_14ba97589;
    }
  }
  else {
    uVar6 = *(uint *)&param_1[1].field_0xc;
  }
  if (*(int *)&(this->ContentsFunctionMap).field_0x8 !=
      *(int *)&(this->ContentsFunctionMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ContentsFunctionMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ContentsFunctionMap).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->ContentsFunctionMap).field_0x48 - 1U & uVar6) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->ContentsFunctionMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar5 * 0x10) == uVar6) {
          pEVar8 = TMapBase<int,enum_EDS_ContentsFunctionType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>_>
                   ::FindChecked(&this->ContentsFunctionMap,uVar6);
          local_res20[0] = *pEVar8;
          pUVar9 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(&local_90);
          bVar3 = UDS_ContentDataSet::TryGetContentsFunctionData(pUVar9,local_res20,&local_78);
          if (bVar3) {
            GetContentsFunctionValues(this,&local_88,(ClientMessages *)param_1,&local_78);
            iVar5 = local_88.ArrayNum;
            if (0 < iVar5) goto LAB_14ba974e0;
            local_9c[2] = 0;
            bVar3 = HasContentsFunction(this,local_res20,(int *)(local_9c + 2));
            if (bVar3) goto LAB_14ba97566;
            goto LAB_14ba9757f;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  goto LAB_14ba97589;
LAB_14ba973e0:
  uVar12 = (uint)uVar13;
  uVar6 = 0;
  if ((int)uVar12 < (int)uVar11) {
    uVar6 = ~uVar12 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = HasContentsFunction(this,local_res18,(int *)(local_a8.Data + uVar13 * 4));
  if (bVar3) goto LAB_14ba97465;
  uVar13 = (ulonglong)(uVar12 + 1);
  local_88.AllocatorInstance.Data = local_a8.Data;
  if (iVar5 <= (int)(uVar12 + 1)) goto LAB_14ba9757f;
  uVar11 = (ulonglong)local_a0;
  goto LAB_14ba973e0;
LAB_14ba97465:
  OnAlertMessage_ContentsFunction(this,local_res18);
  local_88.AllocatorInstance.Data = local_a8.Data;
  goto LAB_14ba97475;
LAB_14ba97566:
  OnAlertMessage_ContentsFunction(this,local_res20);
LAB_14ba97475:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  bVar3 = false;
  goto LAB_14ba9758b;
  while (uVar13 = (ulonglong)(uVar12 + 1), (int)(uVar12 + 1) < iVar5) {
LAB_14ba974e0:
    uVar12 = (uint)uVar13;
    uVar6 = 0;
    if ((int)uVar12 < local_88.ArrayNum) {
      uVar6 = ~uVar12 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = HasContentsFunction(this,local_res20,
                                (int *)(local_88.AllocatorInstance.Data + uVar13 * 4));
    if (bVar3) goto LAB_14ba97566;
  }
LAB_14ba9757f:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
LAB_14ba97589:
  bVar3 = true;
LAB_14ba9758b:
  if (local_78.FunctionLockValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.FunctionLockValues.AllocatorInstance.Data);
  }
  if (local_78.ContentsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContentsName.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CloseContent @ 14ba98a00

void __thiscall
UDS_ContentManager::CloseContent(UDS_ContentManager *this,EDS_ContentsTabFrameType *param_1)

{
  UDS_ContentsController *this_00;
  EDS_ContentsTabFrameType local_res8 [8];
  
  this_00 = (this->ContentsController).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ContentsController *)0x0) {
    local_res8[0] = *param_1;
    UDS_ContentsController::CloseContent(this_00,(int *)local_res8);
  }
  return;
}

// CloseContent @ 14ba98a30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ContentManager::CloseContent(UDS_ContentManager *this)

{
  UDS_W_B_ContentsFrame *this_00;
  UDS_ContentsController *pUVar1;
  bool bVar2;
  char cVar3;
  UDS_WindowManager *this_01;
  UObject *pUVar4;
  float afStackX_8 [2];
  uint auStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  
  pUVar1 = (this->ContentsController).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ContentsController *)0x0) {
    if ((pUVar1->CurrentTabFrameID != None) &&
       (this_01 = UDS_WindowManager::GetInst(), this_01 != (UDS_WindowManager *)0x0)) {
      UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)&FStackX_18);
      bVar2 = FWeakObjectPtr::IsValid(&FStackX_18);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&FStackX_18);
        cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        if (cVar3 != '\0') {
          this_00 = (pUVar1->TabFrameWidget).field0_0x0.DebugPtr;
          afStackX_8[0] = (float)this_00->ChildWindowWidget;
          UDS_UserWidget::UnbindInputAction
                    ((UDS_UserWidget *)this_00,(EDS_WindowWidget *)afStackX_8);
          UDS_W_B_ContentsFrame::RemoveChildWidget((pUVar1->TabFrameWidget).field0_0x0.DebugPtr);
          afStackX_8[0] = 0.0;
          auStackX_10[0] = 0;
          UDS_WindowManager::CloseWindow(this_01,ContentsTabFrame,auStackX_10,afStackX_8);
        }
      }
    }
    return;
  }
  return;
}

// Created @ 14ba9d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_ContentManager::Created(UDS_ContentManager *this)

{
  TMap<int,EDS_ContentsFunctionType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,EDS_ContentsFunctionType,0>_>
  *this_00;
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ContentsController *this_01;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  EDS_ContentsFunctionType local_b8 [2];
  TPairInitializer<int_&&,EDS_ContentsFunctionType_&&> local_b0;
  EDS_ContentsFunctionType *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_ContentsController_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this_01 = (UDS_ContentsController *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UDS_ContentsController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->ContentsController).field0_0x0.DebugPtr = this_01;
  UDS_ContentsController::Created(this_01);
  local_b0.Value = local_b8;
  local_b8[1] = 0x92ff5;
  this_00 = &this->ContentsFunctionMap;
  local_a0 = local_b8 + 1;
  local_b8[0] = 0x15;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = StuffGatherStart;
  local_a0 = local_b8;
  local_b8[1] = 0x16;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = TicketCharge;
  local_a0 = local_b8;
  local_b8[1] = 300;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = ChatZone;
  local_a0 = local_b8;
  local_b8[1] = 0x51a4;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = QuestAccept;
  local_a0 = local_b8;
  local_b8[1] = 0x4e21;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = QuestComplete;
  local_a0 = local_b8;
  local_b8[1] = 0x4e22;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (this_00,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = PkModeChange;
  local_a0 = local_b8;
  local_b8[1] = 0x46;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (&this->ContentsFunctionMap_Twoway,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = ForceAttackAdd;
  local_a0 = local_b8;
  local_b8[1] = 0x47;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (&this->ContentsFunctionMap_Twoway,&local_b0,(bool *)&local_b0.Value);
  local_b0.Value = local_b8 + 1;
  local_b8[0] = RaidPartyJoin;
  local_a0 = local_b8;
  local_b8[1] = 0x51ae;
  TSet<TTuple<int,enum_EDS_ContentsFunctionType>,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,enum_EDS_ContentsFunctionType_&&>_>
            (&this->ContentsFunctionMap_Twoway,&local_b0,(bool *)&local_b0.Value);
  return;
}

// Destroyed @ 14ba9e5d0

void __thiscall UDS_ContentManager::Destroyed(UDS_ContentManager *this)

{
  UDS_ContentsController *this_00;
  
  (**(code **)(this->_padding_ + 0x2d0))();
  this_00 = (this->ContentsController).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ContentsController *)0x0) {
    UDS_ContentsController::UnbindModel(this_00);
    (this->ContentsController).field0_0x0.DebugPtr = (UDS_ContentsController *)0x0;
  }
  return;
}

// GetContentBaseTypeFromTotalMenuID @ 14baa5b20

EDS_ContentsBaseType __thiscall
UDS_ContentManager::GetContentBaseTypeFromTotalMenuID
          (UDS_ContentManager *this,EDS_TotalMenuId *param_1)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar1 != (FDS_ContentsTotalMenuTableRow *)0x0) {
    return pFVar1->ID_ContentsBase;
  }
  return None;
}

// GetContentTabFrameFromTotalMenuID @ 14baa5b50

EDS_ContentsTabFrameType __thiscall
UDS_ContentManager::GetContentTabFrameFromTotalMenuID
          (UDS_ContentManager *this,EDS_TotalMenuId *param_1)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar1 != (FDS_ContentsTotalMenuTableRow *)0x0) {
    return pFVar1->ID_ContentsTabFrame;
  }
  return None;
}

// GetContentsFunctionValues @ 14baa5b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ContentManager::GetContentsFunctionValues
          (UDS_ContentManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ClientMessages *param_1,FDS_ContentsFunctionData *param_2)

{
  EDS_ContentsFunctionType EVar1;
  EDS_ItemType EVar2;
  bool bVar3;
  EDS_StuffGatherType EVar4;
  int iVar5;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataBase *this_02;
  FDS_StuffBaseTableRow *this_03;
  FDS_StuffGatherTableRow *pFVar8;
  FDS_ItemBaseTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  QuestCompleteRequestDefaultTypeInternal *pQVar11;
  QuestAcceptRequestDefaultTypeInternal *pQVar12;
  PkModeChangeRequestDefaultTypeInternal *pPVar13;
  StuffGatherStartRequestDefaultTypeInternal *pSVar14;
  ItemUseRequestDefaultTypeInternal *pIVar15;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1a8;
  UObject *local_1a0;
  StuffGatherStartRequest local_198;
  FWeakObjectPtr local_170;
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar1 = param_2->FunctionType;
  if (EVar1 == ItemUse) {
    if ((param_1->_impl_)._oneof_case_[0] == 0x15) {
      pIVar15 = (ItemUseRequestDefaultTypeInternal *)
                (param_1->_impl_).ClientMessage_.joincontinentreq_;
    }
    else {
      pIVar15 = &client_msg::_ItemUseRequest_default_instance_;
    }
    client_msg::ItemUseRequest::ItemUseRequest
              ((ItemUseRequest *)&local_198,(Arena *)0x0,&pIVar15->_instance);
    local_198._padding_ = (longlong)&___7ItemUseRequest_client_msg__6B_;
    pFVar9 = FDS_ItemBaseTableRow::Get((longlong)local_198._impl_.interaction_id_,true);
    if (pFVar9 == (FDS_ItemBaseTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ContentManager::GetContentsFunctionValues",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_158.Ptr,0x23c,L"Not found ItemBaseTableRow!! itemID - %d"
                  );
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      EVar2 = pFVar9->ItemType;
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(EDS_ItemType *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           EVar2;
    }
    client_msg::ItemUseRequest::~ItemUseRequest((ItemUseRequest *)&local_198);
    return __return_storage_ptr__;
  }
  if (EVar1 != StuffGatherStart) {
    if (EVar1 == PkModeChange) {
      if ((param_1->_impl_)._oneof_case_[0] == 0x46) {
        pPVar13 = (PkModeChangeRequestDefaultTypeInternal *)
                  (param_1->_impl_).ClientMessage_.joincontinentreq_;
      }
      else {
        pPVar13 = &client_msg::_PkModeChangeRequest_default_instance_;
      }
      client_msg::PkModeChangeRequest::PkModeChangeRequest
                ((PkModeChangeRequest *)&local_198,(Arena *)0x0,&pPVar13->_instance);
      local_198._padding_ = (longlong)&___7PkModeChangeRequest_client_msg__6B_;
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           (undefined4)local_198._impl_.stuff_entity_id_;
      client_msg::PkModeChangeRequest::~PkModeChangeRequest((PkModeChangeRequest *)&local_198);
      return __return_storage_ptr__;
    }
    if (EVar1 != QuestAccept) {
      if (EVar1 != QuestComplete) {
        return __return_storage_ptr__;
      }
      if ((param_1->_impl_)._oneof_case_[0] == 0x4e22) {
        pQVar11 = (QuestCompleteRequestDefaultTypeInternal *)
                  (param_1->_impl_).ClientMessage_.joincontinentreq_;
      }
      else {
        pQVar11 = &client_msg::_QuestCompleteRequest_default_instance_;
      }
      client_msg::QuestCompleteRequest::QuestCompleteRequest
                ((QuestCompleteRequest *)&local_198,(Arena *)0x0,&pQVar11->_instance);
      local_198._padding_ = (longlong)&___7QuestCompleteRequest_client_msg__6B_;
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           (undefined4)local_198._impl_.stuff_entity_id_;
      client_msg::QuestCompleteRequest::~QuestCompleteRequest((QuestCompleteRequest *)&local_198);
      return __return_storage_ptr__;
    }
    if ((param_1->_impl_)._oneof_case_[0] == 0x4e21) {
      pQVar12 = (QuestAcceptRequestDefaultTypeInternal *)
                (param_1->_impl_).ClientMessage_.joincontinentreq_;
    }
    else {
      pQVar12 = &client_msg::_QuestAcceptRequest_default_instance_;
    }
    client_msg::QuestAcceptRequest::QuestAcceptRequest
              ((QuestAcceptRequest *)&local_198,(Arena *)0x0,&pQVar12->_instance);
    local_198._padding_ = (longlong)&___7QuestAcceptRequest_client_msg__6B_;
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         (undefined4)local_198._impl_.stuff_entity_id_;
    client_msg::QuestAcceptRequest::~QuestAcceptRequest((QuestAcceptRequest *)&local_198);
    return __return_storage_ptr__;
  }
  if ((param_1->_impl_)._oneof_case_[0] == 0x16) {
    pSVar14 = (StuffGatherStartRequestDefaultTypeInternal *)
              (param_1->_impl_).ClientMessage_.joincontinentreq_;
  }
  else {
    pSVar14 = &client_msg::_StuffGatherStartRequest_default_instance_;
  }
  client_msg::StuffGatherStartRequest::StuffGatherStartRequest
            (&local_198,(Arena *)0x0,&pSVar14->_instance);
  local_198._padding_ = (longlong)&___7StuffGatherStartRequest_client_msg__6B_;
  TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_170);
  bVar3 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_170,(void *)0x0);
  if (bVar3) {
    local_1a8.ObjectIndex = 0;
    local_1a8.ObjectSerialNumber = 0;
    local_1a0 = (UObject *)0x0;
    goto LAB_14baa5e0a;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_170);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_168);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
LAB_14baa5dcd:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_StuffGatherData_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) goto LAB_14baa5dcd;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1a8.ObjectIndex = 0;
  local_1a8.ObjectSerialNumber = 0;
  local_1a0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
LAB_14baa5e0a:
  FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_1a0);
  bVar3 = FWeakObjectPtr::IsValid(&local_1a8);
  if (bVar3) {
    this_02 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_1a8);
    iVar5 = UDS_DataBase::GetEntityTableID(this_02);
    this_03 = FDS_StuffBaseTableRow::GetRef((longlong)iVar5,true);
    bVar3 = FDS_StuffBaseTableRow::IsValid(this_03);
    if ((bVar3) && (this_03->StuffType == StuffGather)) {
      pFVar8 = FDS_StuffGatherTableRow::GetRef((longlong)this_03->ID_StuffValue,true);
      EVar4 = pFVar8->StuffGatherType;
    }
    else {
      EVar4 = None;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = (uint)EVar4;
  }
  client_msg::StuffGatherStartRequest::~StuffGatherStartRequest(&local_198);
  return __return_storage_ptr__;
}

// GetContentsFunctionValues @ 14baa5fd0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ContentManager::GetContentsFunctionValues
          (UDS_ContentManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ClientMessagesTwoway *param_1,FDS_ContentsFunctionData *param_2)

{
  int iVar1;
  PkModeChangeRequestDefaultTypeInternal *pPVar2;
  PkModeChangeRequest local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2->FunctionType == PkModeChange) {
    if ((param_1->_impl_)._oneof_case_[0] == 0x46) {
      pPVar2 = (PkModeChangeRequestDefaultTypeInternal *)
               (param_1->_impl_).ClientMessageTwoway_.pingreq_;
    }
    else {
      pPVar2 = &client_msg_twoway::_PkModeChangeRequest_default_instance_;
    }
    client_msg_twoway::PkModeChangeRequest::PkModeChangeRequest
              (&local_28,(Arena *)0x0,&pPVar2->_instance);
    local_28._padding_ = (longlong)&___7PkModeChangeRequest_client_msg_twoway__6B_;
    iVar1 = __return_storage_ptr__->ArrayNum;
    if (iVar1 == __return_storage_ptr__->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar1 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 4) =
         local_28._impl_.pk_mode_type_;
    client_msg_twoway::PkModeChangeRequest::~PkModeChangeRequest(&local_28);
  }
  return __return_storage_ptr__;
}

// GetCurrentTabFrameID @ 14baa60d0

EDS_ContentsTabFrameType __thiscall
UDS_ContentManager::GetCurrentTabFrameID(UDS_ContentManager *this)

{
  UDS_ContentsController *pUVar1;
  
  pUVar1 = (this->ContentsController).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ContentsController *)0x0) {
    return pUVar1->CurrentTabFrameID;
  }
  return None;
}

// GetInst @ 14baab540

UDS_ContentManager * __cdecl UDS_ContentManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ContentManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ContentManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ContentManager_NoRegister();
  pUVar3 = (UDS_ContentManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ContentManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ContentManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ContentManager *)0x0;
}

// GetOpenedContentsBaseType @ 14baaea90

EDS_ContentsBaseType __thiscall
UDS_ContentManager::GetOpenedContentsBaseType(UDS_ContentManager *this)

{
  UDS_ContentsController *this_00;
  EDS_ContentsBaseType EVar1;
  
  this_00 = (this->ContentsController).field0_0x0.DebugPtr;
  if (this_00 == (UDS_ContentsController *)0x0) {
    return None;
  }
  EVar1 = UDS_ContentsController::GetCurrentContentsBaseType(this_00);
  return EVar1;
}

// HasContentLock @ 14bab2130

bool __thiscall
UDS_ContentManager::HasContentLock(UDS_ContentManager *this,EDS_ContentsBaseType *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  if (*param_1 == None) {
    return false;
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return false;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  UDS_DataSetBase::GetData(this_00,(ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_ContentData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bab21c7;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bab21c7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_18[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  return bVar2;
}

// HasContentsFunction @ 14bab2240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ContentManager::HasContentsFunction
          (UDS_ContentManager *this,EDS_ContentsFunctionType *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  UDS_ContentDataSet *this_00;
  UDS_LogManager *pUVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_1c8 [32];
  FDS_ContentsFunctionData local_188;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)local_158);
  bVar2 = FWeakObjectPtr::IsValid(local_158);
  if (!bVar2) {
    return bVar2;
  }
  uVar9 = 0;
  local_188.FunctionType = None;
  local_188.FunctionLockType = None;
  local_188.FunctionLockMessageID = 0;
  local_188.ContentsName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ContentsName.Data.ArrayNum = 0;
  local_188.ContentsName.Data.ArrayMax = 0;
  local_188.FunctionLockValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.FunctionLockValues.ArrayNum = 0;
  local_188.FunctionLockValues.ArrayMax = 0;
  this_00 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(local_158);
  bVar2 = UDS_ContentDataSet::TryGetContentsFunctionData(this_00,param_1,&local_188);
  if ((bVar2) && (local_188.FunctionLockType != None)) {
    if (local_188.FunctionLockType == All) {
      bVar2 = true;
      goto LAB_14bab2436;
    }
    if (local_188.FunctionLockType == LockValue) {
      uVar6 = (ulonglong)local_188.FunctionLockValues.ArrayNum;
      uVar7 = uVar6;
      uVar10 = uVar9;
      if (0 < local_188.FunctionLockValues.ArrayNum) {
        do {
          uVar8 = (uint)uVar9;
          if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uVar7)) {
            uVar4 = 0;
            if ((int)uVar8 < (int)uVar7) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              uVar7 = local_188.FunctionLockValues._8_8_ & 0xffffffff;
            }
            if (*(int *)(local_188.FunctionLockValues.AllocatorInstance.Data + uVar10 * 4) ==
                *param_2) {
              bVar2 = true;
              goto LAB_14bab2436;
            }
          }
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < (longlong)uVar6);
      }
      bVar2 = false;
      goto LAB_14bab2436;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ContentManager::HasContentsFunction",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x1d7,
                 L"Invalid FunctionLockType!! FunctionLockType:%d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  bVar2 = false;
LAB_14bab2436:
  if (local_188.FunctionLockValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.FunctionLockValues.AllocatorInstance.Data);
  }
  if (local_188.ContentsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.ContentsName.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Init @ 14bab3cb0

void __thiscall UDS_ContentManager::Init(UDS_ContentManager *this)

{
  pmf_35984de9 pVar1;
  UDS_HistoryManager *pUVar2;
  
  pVar1 = (pmf_35984de9)(this->ContentsController).field0_0x0.ObjectPtr.field0_0x0.Handle;
  if (pVar1 == (pmf_35984de9)0x0) {
    return;
  }
  pUVar2 = UDS_HistoryManager::GetInst();
  if (pUVar2 != (UDS_HistoryManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ContentsController>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnHistoryBackEvent,(UDS_ContentsController *)&stack0x00000010,pVar1);
  }
  return;
}

// IsContentsFunctionValueProcess @ 14bab7460

bool __thiscall
UDS_ContentManager::IsContentsFunctionValueProcess
          (UDS_ContentManager *this,FDS_ContentsFunctionData *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (param_1->FunctionLockValues).ArrayNum;
  uVar6 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      if ((-1 < (int)uVar6) && ((int)uVar6 < (param_1->FunctionLockValues).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar6 < (param_1->FunctionLockValues).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((param_1->FunctionLockValues).AllocatorInstance.Data + lVar7 * 4) == *param_2)
        {
          return true;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  return false;
}

// IsManualCondition_TotalMenu @ 14baba090

bool __thiscall
UDS_ContentManager::IsManualCondition_TotalMenu(UDS_ContentManager *this,EDS_TotalMenuId param_1)

{
  return param_1 == Guild;
}

// IsOpenContent @ 14baba3e0

bool __thiscall
UDS_ContentManager::IsOpenContent(UDS_ContentManager *this,EDS_ContentsTabFrameType *param_1)

{
  UDS_ContentsController *pUVar1;
  
  pUVar1 = (this->ContentsController).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_ContentsController *)0x0) {
    return false;
  }
  return pUVar1->CurrentTabFrameID == *param_1;
}

// IsTabFilter @ 14babad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ContentManager::IsTabFilter(UDS_ContentManager *this,EDS_TotalMenuId *param_1)

{
  EDS_TotalMenuId EVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  EVar1 = *param_1;
  if (((int)EVar1 < 0x2714) && (EVar1 == ((int)EVar1 / 1000) * 1000)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ContentManager::IsTabFilter",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x327,L"IsTabFilter!! ContentID - %d")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// OnAlertMessage_ContentsFunction @ 14babdb50

void __thiscall
UDS_ContentManager::OnAlertMessage_ContentsFunction
          (UDS_ContentManager *this,EDS_ContentsFunctionType *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  UDS_ContentDataSet *this_00;
  longlong lVar2;
  FWeakObjectPtr local_res18;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FStringFormatArg local_58;
  FDS_ContentsFunctionData local_38;
  
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    local_38.FunctionType = None;
    local_38.FunctionLockType = None;
    local_38.FunctionLockMessageID = 0;
    local_38.ContentsName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ContentsName.Data.ArrayNum = 0;
    local_38.ContentsName.Data.ArrayMax = 0;
    local_38.FunctionLockValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.FunctionLockValues.ArrayNum = 0;
    local_38.FunctionLockValues.ArrayMax = 0;
    this_00 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(&local_res18);
    bVar1 = UDS_ContentDataSet::TryGetContentsFunctionData(this_00,param_1,&local_38);
    _Src.Data = local_38.ContentsName.Data.AllocatorInstance.Data;
    if (bVar1) {
      lVar2 = (longlong)local_38.ContentsName.Data.ArrayNum;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = local_38.ContentsName.Data.ArrayNum;
      if (local_38.ContentsName.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.ContentsName.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_38.ContentsName.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar2 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_58,&local_68);
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_78.AllocatorInstance.Data,&local_58,1);
      UDS_UIMessageManager::OpenMsgByStringUi
                (local_38.FunctionLockMessageID,Alert_None_01,&local_78,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
    }
    if (local_38.FunctionLockValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.FunctionLockValues.AllocatorInstance.Data);
    }
    if (local_38.ContentsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ContentsName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnAlertMessage_TotalMenu @ 14babdd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ContentManager::OnAlertMessage_TotalMenu(UDS_ContentManager *this,EDS_TotalMenuId *param_1)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar1 == (FDS_ContentsTotalMenuTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ContentManager::OnAlertMessage_TotalMenu",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x363,
                 L"contentsTotalMenuTableRow is nullptr!! ContentID - %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              ((pFVar1->ID_DisabledMessage).ID,Alert_None_01,&local_158);
  }
  return;
}

// OnBroadcast @ 14babde20

void __thiscall UDS_ContentManager::OnBroadcast(UDS_ContentManager *this)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UDS_DataSetBase *this_01;
  FWeakObjectPtr FVar8;
  UClass *pUVar9;
  FWeakObjectPtr *this_02;
  ForAnyElementType FVar10;
  uint uVar11;
  FWeakObjectPtr FVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<FDS_ContentsBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  int iStack_9c;
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FWeakObjectPtr local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  this_00 = &this->ContentLockMap;
  if (0 < *(int *)&(this->ContentLockMap).field_0x8 - *(int *)&(this->ContentLockMap).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_70,
               (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                *)this_00);
    local_80 = 0;
    stack0xffffffffffffff58 = local_70._16_16_;
    local_b8 = (longlong *)local_70._0_8_;
    auStack_b0._0_8_ = local_70._8_8_;
    local_98 = local_50;
    pTStack_90 = pTStack_48;
    iVar7 = local_70._28_4_;
    local_88 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                *)this_00;
    if (iVar7 < *(int *)(local_70._16_8_ + 0x18)) {
      do {
        plVar5 = local_b8;
        this_02 = (FWeakObjectPtr *)(*local_b8 + (longlong)iVar7 * 0x18);
        bVar6 = FWeakObjectPtr::IsValid(this_02);
        if (bVar6) {
          (**(code **)**(undefined8 **)((longlong)iVar7 * 0x18 + 8 + *plVar5))();
        }
        else {
          local_res8 = *this_02;
          if (*(int *)&(this->ContentLockMap).field_0x8 !=
              *(int *)&(this->ContentLockMap).field_0x34) {
            TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                        *)this_00,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
          }
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        iVar7 = iStack_9c;
      } while (iStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar7 = 1;
        }
        else {
          uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
          local_88->HashSize = iVar7;
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
  }
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_78);
  bVar6 = FWeakObjectPtr::IsValid(&local_78);
  if (bVar6) {
    FDS_ContentsBaseTableRow::GetAll(&local_c8);
    iVar7 = local_c8.ArrayNum;
    FVar12.ObjectIndex = 0;
    FVar12.ObjectSerialNumber = 0;
    pFVar1 = local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 8;
    FVar10.Data = local_c8.AllocatorInstance.Data;
    while( true ) {
      if (local_c8.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FDS_ContentsBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (FVar10.Data == pFVar1) break;
      if (*(int *)(*(longlong *)FVar10.Data + 8) != 0) {
        TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_res18);
        bVar6 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar6) {
          this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
          UDS_DataSetBase::GetData(this_01,(ulong64)&local_res20);
          bVar6 = FWeakObjectPtr::IsValid(&local_res20);
          if (bVar6) {
            FVar8 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res20);
            if (FVar8 == (FWeakObjectPtr)0x0) {
LAB_14babe054:
              FVar8 = FVar12;
            }
            else {
              pUVar9 = Z_Construct_UClass_UDS_ContentData_NoRegister();
              iVar3 = (int)pUVar9->_padding_;
              if ((*(int *)(*(longlong *)((longlong)FVar8 + 0x10) + 0x38) < iVar3) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)FVar8 + 0x10) + 0x30) +
                   (longlong)iVar3 * 8) != &pUVar9->_padding_)) goto LAB_14babe054;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (FVar8 != (FWeakObjectPtr)0x0)) {
              UE::GC::MarkAsReachable((UObject *)FVar8);
            }
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_res8 = FVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (FVar8 != (FWeakObjectPtr)0x0)) {
              UE::GC::MarkAsReachable((UObject *)FVar8);
            }
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
            bVar6 = FWeakObjectPtr::IsValid(&local_res10);
            if ((bVar6) &&
               ((this->ContentsController).field0_0x0.DebugPtr != (UDS_ContentsController *)0x0))
            break;
          }
        }
      }
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  return;
}

// OnInputActionToContent @ 14babf8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ContentManager::OnInputActionToContent
          (UDS_ContentManager *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  EDS_ContentsTabFrameType EVar1;
  longlong *plVar2;
  UDS_ContentsController *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FDS_ContentsTabFrameTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  UDS_WindowManager *this_00;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr FStack_188;
  FDestructionSentinel FStack_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  pUVar3 = (this->ContentsController).field0_0x0.DebugPtr;
  if ((pUVar3 == (UDS_ContentsController *)0x0) || (*param_1 == None)) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  EVar1 = pUVar3->CurrentTabFrameID;
  if (EVar1 != None) {
    pFVar9 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)EVar1,true);
    if (pFVar9 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        TStack_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_168,"UDS_ContentsController::OnInputActionToContent",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,TStack_168.Ptr,0x119,
                   L"contentsTabFrameTableRow is nullptr. ContentsTabFrameID - %d");
        if ((void *)TStack_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_168._padding_);
        }
      }
    }
    else {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&FStack_188);
        bVar5 = FWeakObjectPtr::IsValid(&FStack_188);
        if (bVar5) {
          pUVar11 = FWeakObjectPtr::Get(&FStack_188);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar11[5].field_0x18,(FWriteAccessScope *)&FStack_180);
          *(int *)&pUVar11[6].field_0xc = *(int *)&pUVar11[6].field_0xc + 1;
          bVar5 = false;
          uVar12 = *(int *)(pUVar11 + 6) - 1;
          if (-1 < (int)uVar12) {
            lVar13 = (longlong)(int)uVar12 << 4;
            bVar5 = false;
            do {
              uVar8 = 0;
              if ((int)uVar12 < *(int *)(pUVar11 + 6)) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (((*(int *)(*(longlong *)&pUVar11[5].field_0x20 + 8 + lVar13) == 0) ||
                  (plVar2 = *(longlong **)(*(longlong *)&pUVar11[5].field_0x20 + lVar13),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2), cVar7 == '\0')) {
                bVar5 = true;
              }
              lVar13 = lVar13 + -0x10;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          *(int *)&pUVar11[6].field_0xc = *(int *)&pUVar11[6].field_0xc + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar11[5].field_0x18,
                       false);
          }
          if (FStack_180.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_180.Accessor,&FStack_180);
          }
        }
      }
    }
  }
  return;
}

// OnRegisterContentLock @ 14bac2040

void __thiscall
UDS_ContentManager::OnRegisterContentLock
          (UDS_ContentManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,
          FDS_ContentLock *param_2)

{
  bool bVar1;
  int iVar2;
  FWeakObjectPtr local_res10;
  FDS_ContentLock *local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr *local_18;
  FDS_ContentLock **local_10;
  
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    local_res20 = local_res10;
    iVar2 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                        *)&this->ContentLockMap,
                       local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20);
    if (iVar2 == -1) {
      local_18 = &local_res10;
      local_10 = &local_res18;
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&,FDS_ContentLock_*_&>_>
                ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                  *)&this->ContentLockMap,
                 (TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&,FDS_ContentLock_*_&> *)
                 &local_res20,(bool *)&local_18);
    }
  }
  return;
}

// OnUnregisterContentLock @ 14bac2930

void __thiscall
UDS_ContentManager::OnUnregisterContentLock
          (UDS_ContentManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  bool bVar1;
  int iVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    local_res18[0] = local_res10;
    iVar2 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                        *)&this->ContentLockMap,
                       local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_res18);
    if (iVar2 != -1) {
      local_res18[0] = local_res10;
      if (*(int *)&(this->ContentLockMap).field_0x8 != *(int *)&(this->ContentLockMap).field_0x34) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                    *)&this->ContentLockMap,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex
                   ,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_res18);
      }
    }
  }
  return;
}

// OpenContent @ 14bac29c0

bool __thiscall UDS_ContentManager::OpenContent(UDS_ContentManager *this,int *param_1)

{
  bool bVar1;
  EDS_TotalMenuId local_res10 [6];
  
  local_res10[0] = *param_1;
  bVar1 = OpenContent(this,local_res10);
  return bVar1;
}

// OpenContent @ 14bac29e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ContentManager::OpenContent
          (UDS_ContentManager *this,EDS_ContentsTabFrameType *param_1,
          TObjectPtr<UDS_ContentArguments> param_2)

{
  UDS_ContentsController *this_00;
  bool bVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  EDS_ContentsTabFrameType EVar4;
  undefined1 auStackY_198 [32];
  UObject *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ContentManager::OpenContent",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x11a,
                 L"contentsTabFrameTableRow is nullptr!! TabFrameID - %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    EVar4 = None;
  }
  else {
    bVar1 = CheckContentLockAndLevel(this,&pFVar2->ID_ContentsBase);
    if ((!bVar1) &&
       (this_00 = (this->ContentsController).field0_0x0.DebugPtr,
       this_00 != (UDS_ContentsController *)0x0)) {
      local_158[0] = *(UObject **)param_2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_158[0] != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(local_158[0]);
      }
      bVar1 = UDS_ContentsController::OpenContent
                        (this_00,param_1,(TObjectPtr<UDS_ContentArguments>)local_158);
      if (bVar1) {
        return true;
      }
    }
    EVar4 = *param_1;
  }
  TMulticastDelegate<void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OpenContentEvent,EVar4,false);
  return false;
}

// OpenContent @ 14bac2b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ContentManager::OpenContent(UDS_ContentManager *this,EDS_TotalMenuId *param_1)

{
  EDS_TotalMenuId EVar1;
  int iVar2;
  UDS_ContentsController *this_00;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_ContentsTotalMenuTableRow *pFVar5;
  FDS_OpenContentTotalMenuEvent *this_01;
  FDS_ContentsTabFrameTableRow *pFVar6;
  longlong lVar7;
  EDS_ContentsTabFrameType EVar8;
  undefined1 auStackY_1b8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  EDS_ContentsTabFrameType local_178 [2];
  undefined8 local_170;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (bVar3) {
    return false;
  }
  bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar3) {
    return false;
  }
  EVar1 = *param_1;
  if (((int)EVar1 < 0x2714) && (EVar1 == ((int)EVar1 / 1000) * 1000)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ContentManager::IsTabFilter",0x1f,Yes);
    pwVar10 = L"IsTabFilter!! ContentID - %d";
    uVar9 = 0x327;
  }
  else {
    pFVar5 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)EVar1,true);
    if (pFVar5 == (FDS_ContentsTotalMenuTableRow *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ContentManager::OpenContent",0x1f,Yes);
      pwVar10 = L"FDS_ContentsTotalMenuTableRow is nullptr. TotalMenuID - %d";
      uVar9 = 0xe2;
    }
    else {
      if (pFVar5->IsActivate != false) {
        if ((((pFVar5->Type != Function) && ((byte)(pFVar5->Type - Main) < 2)) &&
            (*param_1 == Guild)) &&
           (OnOpenContentTotalMenuEventMap._8_4_ != OnOpenContentTotalMenuEventMap._52_4_)) {
          lVar7 = 0x154cf7518;
          if (OnOpenContentTotalMenuEventMap._64_8_ != 0) {
            lVar7 = OnOpenContentTotalMenuEventMap._64_8_;
          }
          for (iVar2 = *(int *)(lVar7 + (ulonglong)
                                        (OnOpenContentTotalMenuEventMap._72_4_ - 1 & 0x1f6) * 4);
              iVar2 != -1;
              iVar2 = *(int *)(OnOpenContentTotalMenuEventMap._0_8_ + 0x28 + (longlong)iVar2 * 0x30)
              ) {
            if (*(int *)(OnOpenContentTotalMenuEventMap._0_8_ + (longlong)iVar2 * 0x30) == 0x1f6) {
              this_01 = TMapBase<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,0>_>
                        ::FindChecked(&OnOpenContentTotalMenuEventMap,Guild);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         this_01);
              return true;
            }
          }
        }
        pFVar5 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
        if (pFVar5 == (FDS_ContentsTotalMenuTableRow *)0x0) {
          return false;
        }
        if (pFVar5->ID_ContentsTabFrame == None) {
          return false;
        }
        pFVar5 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
        if (pFVar5 == (FDS_ContentsTotalMenuTableRow *)0x0) {
          local_178[0] = None;
        }
        else {
          local_178[0] = pFVar5->ID_ContentsTabFrame;
        }
        pFVar6 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)local_178[0],true);
        if (pFVar6 == (FDS_ContentsTabFrameTableRow *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_ContentManager::OpenContent",0x1f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_148.Ptr,0x11a,
                       L"contentsTabFrameTableRow is nullptr!! TabFrameID - %d");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
          EVar8 = None;
        }
        else {
          bVar3 = CheckContentLockAndLevel(this,&pFVar6->ID_ContentsBase);
          EVar8 = local_178[0];
          if ((!bVar3) &&
             (this_00 = (this->ContentsController).field0_0x0.DebugPtr,
             this_00 != (UDS_ContentsController *)0x0)) {
            local_170 = 0;
            bVar3 = UDS_ContentsController::OpenContent
                              (this_00,local_178,(TObjectPtr<UDS_ContentArguments>)&local_170);
            EVar8 = local_178[0];
            if (bVar3) {
              return true;
            }
          }
        }
        TMulticastDelegate<void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OpenContentEvent,EVar8,false);
        return false;
      }
      pFVar5 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)*param_1,true);
      if (pFVar5 != (FDS_ContentsTotalMenuTableRow *)0x0) {
        local_168._0_8_ = 0;
        local_168._8_8_ = 0;
        local_168._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi
                  ((pFVar5->ID_DisabledMessage).ID,Alert_None_01,&local_168);
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ContentManager::OnAlertMessage_TotalMenu",0x2c,Yes);
      pwVar10 = L"contentsTotalMenuTableRow is nullptr!! ContentID - %d";
      uVar9 = 0x363;
    }
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// Reset @ 14bac96a0

void __thiscall UDS_ContentManager::Reset(UDS_ContentManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  UDS_ContentsController *this_00;
  bool bVar3;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>_>
  *this_01;
  
  this_00 = (this->ContentsController).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ContentsController *)0x0) {
    UDS_ContentsController::Reset(this_00);
  }
  this_01 = &this->ContentLockMap;
  bVar3 = 1 < *(int *)&(this->ContentLockMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->ContentLockMap).field_0xc;
  *(undefined4 *)&(this->ContentLockMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ContentLockMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContentLockMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ContentLockMap).field_0x2c;
  *(undefined4 *)&(this->ContentLockMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ContentLockMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ContentLockMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ContentLockMap).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FDS_ContentLock_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

