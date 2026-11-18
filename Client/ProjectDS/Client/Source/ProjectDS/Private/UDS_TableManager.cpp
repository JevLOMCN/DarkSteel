// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b5b9030

UClass * __cdecl UDS_TableManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TableManager",
               &Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton,
               StaticRegisterNativesUDS_TableManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_TableManager>,
               InternalVTableHelperCtorCaller<UDS_TableManager>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton;
}

// UDS_TableManager @ 14b5bcca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDS_TableManager * __thiscall
UDS_TableManager::UDS_TableManager(UDS_TableManager *this,FVTableHelper *param_1)

{
  TArray<EDS_TableType,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  pTVar1 = &this->StringTableTypeList;
  this->_padding_ = (longlong)&___7UDS_TableManager__6B_;
  (this->TableDefineDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableDefineDatas).ArrayNum = 0;
  (this->TableDefineDatas).ArrayMax = 0;
  *(undefined8 *)&this->LoadedTableMap = 0;
  *(undefined8 *)&(this->LoadedTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedTableMap).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedTableMap).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x48 = 0;
  this->IsInited = false;
  this->IsStringTableInited = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StringTableTypeList).ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&pTVar1->AllocatorInstance,9,&(this->StringTableTypeList).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar2 = 0x11a00000119;
  *(undefined8 *)(pFVar2 + 8) = 0x11c0000011b;
  *(undefined8 *)(pFVar2 + 0x10) = 0x11f0000011d;
  *(undefined8 *)(pFVar2 + 0x18) = 0x12100000120;
  *(undefined4 *)(pFVar2 + 0x20) = 0x11e;
  return this;
}

// UDS_TableManager @ 14b5bcdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDS_TableManager * __thiscall UDS_TableManager::UDS_TableManager(UDS_TableManager *this)

{
  TArray<EDS_TableType,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  pTVar1 = &this->StringTableTypeList;
  this->_padding_ = (longlong)&___7UDS_TableManager__6B_;
  (this->TableDefineDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableDefineDatas).ArrayNum = 0;
  (this->TableDefineDatas).ArrayMax = 0;
  *(undefined8 *)&this->LoadedTableMap = 0;
  *(undefined8 *)&(this->LoadedTableMap).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedTableMap).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedTableMap).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedTableMap).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedTableMap).field_0x48 = 0;
  this->IsInited = false;
  this->IsStringTableInited = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StringTableTypeList).ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&pTVar1->AllocatorInstance,9,&(this->StringTableTypeList).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)pFVar2 = 0x11a00000119;
  *(undefined8 *)(pFVar2 + 8) = 0x11c0000011b;
  *(undefined8 *)(pFVar2 + 0x10) = 0x11f0000011d;
  *(undefined8 *)(pFVar2 + 0x18) = 0x12100000120;
  *(undefined4 *)(pFVar2 + 0x20) = 0x11e;
  return this;
}

// ~UDS_TableManager @ 14b5bddf0

void __thiscall UDS_TableManager::~UDS_TableManager(UDS_TableManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_TableManager__6B_;
  pFVar1 = (this->StringTableTypeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->LoadedTableMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LoadedTableMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_TableType,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_TableType,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->LoadedTableMap);
  DestructItems<FDS_TableDefineData,int>
            ((FDS_TableDefineData *)(this->TableDefineDatas).AllocatorInstance.Data,
             (this->TableDefineDatas).ArrayNum);
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf660

UClass * __cdecl UDS_TableManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TableManager",
               &Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton,
               StaticRegisterNativesUDS_TableManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_TableManager>,
               InternalVTableHelperCtorCaller<UDS_TableManager>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TableManager.InnerSingleton;
}

// StaticRegisterNativesUDS_TableManager @ 14b5c0060

void __cdecl UDS_TableManager::StaticRegisterNativesUDS_TableManager(void)

{
  return;
}

// operator() @ 14bb4dba0

FString * __thiscall
`UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FString *param_1,EDS_ZoneSpawnType param_2,
          int param_3)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType _Src;
  int iVar3;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  _Src.Data = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  if (param_2 == Island) {
    FStringFormatArg::FStringFormatArg(&local_78,param_3);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_98.AllocatorInstance.Data,&local_78,1);
    pwVar2 = L"Island/{0}.{0}";
  }
  else if (param_2 == Dungeon) {
    FStringFormatArg::FStringFormatArg(&local_78,param_3);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_98.AllocatorInstance.Data,&local_78,1);
    pwVar2 = L"Dungeon/{0}";
  }
  else {
    if (param_2 != Phasing) goto LAB_14bb4dd5e;
    FStringFormatArg::FStringFormatArg(&local_78,param_3);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_98.AllocatorInstance.Data,&local_78,1);
    pwVar2 = L"Phasing/{0}";
  }
  ::FString::FormatImpl(&local_88,pwVar2,&local_98);
  iVar3 = local_88.Data.ArrayNum;
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
LAB_14bb4dd5e:
  pFVar1 = ::FString::FString((FString *)&local_78,param_1);
  FStringFormatArg::FStringFormatArg(&local_58,pFVar1);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_88,iVar3,&local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar3 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_38,&local_88);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_58,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0}/{1}",&local_98);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return __return_storage_ptr__;
}

// AddTableDefine @ 14bb4fa20

void __thiscall
UDS_TableManager::AddTableDefine(UDS_TableManager *this,EDS_TableType param_1,FString *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (0x150 < (int)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int32)InTableType < (int32)EDS_TableType::Max",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if ((int)param_1 < (this->TableDefineDatas).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->TableDefineDatas).AllocatorInstance.Data;
  lVar1 = (longlong)(int)param_1 * 3 + 1;
  *(EDS_TableType *)(pFVar2 + lVar1 * 8 + -8) = param_1;
  ::FString::operator=((FString *)(pFVar2 + lVar1 * 8),param_2);
  return;
}

// Clear @ 14bb549d0

void __thiscall UDS_TableManager::Clear(UDS_TableManager *this)

{
  int *piVar1;
  
  DestructItems<FDS_TableDefineData,int>
            ((FDS_TableDefineData *)(this->TableDefineDatas).AllocatorInstance.Data,
             (this->TableDefineDatas).ArrayNum);
  piVar1 = &(this->TableDefineDatas).ArrayMax;
  (this->TableDefineDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TableDefineDatas).AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<enum_EDS_TableType,UDataTable_*>,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>,FDefaultSetAllocator>
  ::Reset(&this->LoadedTableMap);
  return;
}

// GetDataTable @ 14bb64ef0

UDataTable * __thiscall UDS_TableManager::GetDataTable(UDS_TableManager *this,EDS_TableType param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDataTable *pUVar5;
  UDataTable **ppUVar6;
  atomic<unsigned_char> *paVar7;
  undefined1 *puVar8;
  
  if (*(int *)&(this->LoadedTableMap).field_0x8 != *(int *)&(this->LoadedTableMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->LoadedTableMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->LoadedTableMap).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->LoadedTableMap).field_0x48 - AccelWaitComplete &
                              param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->LoadedTableMap;
      do {
        if (*(EDS_TableType *)(lVar1 + (longlong)iVar4 * 0x18) == param_1) {
          ppUVar6 = TMapBase<enum_EDS_TableType,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>_>
                    ::FindChecked(&this->LoadedTableMap,param_1);
          if (*ppUVar6 != (UDataTable *)0x0) {
            return *ppUVar6;
          }
          iVar4 = 0xd1;
          paVar7 = &bGEnsureHasExecuted<407000610026553553>;
          goto LAB_14bb64f53;
        }
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = 0xca;
  paVar7 = &bGEnsureHasExecuted<407000610026553546>;
LAB_14bb64f53:
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                     ,iVar4,"false");
  if (!bVar3) {
    return (UDataTable *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pUVar5 = (UDataTable *)(*pcVar2)();
  return pUVar5;
}

// GetInst @ 14bb65fd0

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

UDS_TableManager * __cdecl UDS_TableManager::GetInst(void)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_TableManager *this;
  undefined1 auStackY_2c8 [32];
  longlong local_288;
  longlong local_280;
  FTimespan local_278;
  FString local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pUVar3 = UEngine::GetEngineSubsystem<UDS_TableManager>(GEngine);
  if (pUVar3 == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407000610026553371>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                       ,0x1b,"tableMgr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDS_TableManager *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UDS_TableManager *)0x0;
  }
  if (pUVar3->IsInited == false) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_TableManager::InitSync",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Display,local_258.Ptr,0x25,L"InitSync UDS_TableManager");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    this = UEngine::GetEngineSubsystem<UDS_TableManager>(GEngine);
    if (this == (UDS_TableManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<407000610026553385>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                         ,0x29,"false");
      if (bVar2) {
code_r0x00014bb66149:
        pcVar1 = (code *)swi(3);
        pUVar3 = (UDS_TableManager *)(*pcVar1)();
        return pUVar3;
      }
    }
    else {
      FDateTime::Now();
      bVar2 = InitSyncInternal(this);
      if (bVar2) {
        FDateTime::Now();
        local_278.Ticks = local_288 - local_280;
        FTimespan::ToString(&local_278,&local_270);
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_TableManager::InitSync",0x1a,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0x38,L"DataTable Init Time [%s]");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<407000610026553393>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                           ,0x31,"false");
        if (bVar2) goto code_r0x00014bb66149;
      }
    }
  }
  return pUVar3;
}

// GetInstInternal @ 14bb666b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_TableManager * __cdecl UDS_TableManager::GetInstInternal(void)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *pUVar3;
  
  pUVar3 = UEngine::GetEngineSubsystem<UDS_TableManager>(GEngine);
  if (pUVar3 == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407000610026553371>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                       ,0x1b,"tableMgr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDS_TableManager *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UDS_TableManager *)0x0;
  }
  return pUVar3;
}

// GetTableDefineData @ 14bb680f0

FDS_TableDefineData * __thiscall
UDS_TableManager::GetTableDefineData(UDS_TableManager *this,EDS_TableType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_TableDefineData *pFVar4;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->TableDefineDatas).ArrayNum)) {
    uVar3 = 0;
    if ((int)param_1 < (this->TableDefineDatas).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_TableDefineData *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FDS_TableDefineData *)
           ((this->TableDefineDatas).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<407000610026553673>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                     ,0x149,"TableDefineDatas.IsValidIndex(tableTypeIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDS_TableDefineData *)(*pcVar1)();
    return pFVar4;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_TableManager::GetTableDefineData'::__l5::
             _dynamic_atexit_destructor_for__DefaultTableDefineData__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultTableDefineData;
}

// InitAsync @ 14bb6aba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_TableManager::InitAsync(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TableManager *this;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                     ,0x40,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = UEngine::GetEngineSubsystem<UDS_TableManager>(GEngine);
  if (this == (UDS_TableManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407000610026553413>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                       ,0x45,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    Clear(this);
    InitTableInfos(this);
    this->IsInited = true;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// InitSync @ 14bb6be90

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

bool __cdecl UDS_TableManager::InitSync(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UDS_TableManager *this;
  atomic<unsigned_char> *paVar5;
  int iVar6;
  undefined1 auStackY_2c8 [32];
  longlong local_288;
  longlong local_280;
  FTimespan local_278;
  FString local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_TableManager::InitSync",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Display,local_258.Ptr,0x25,L"InitSync UDS_TableManager");
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  this = UEngine::GetEngineSubsystem<UDS_TableManager>(GEngine);
  if (this == (UDS_TableManager *)0x0) {
    iVar6 = 0x29;
    paVar5 = &bGEnsureHasExecuted<407000610026553385>;
  }
  else {
    FDateTime::Now();
    bVar2 = InitSyncInternal(this);
    if (bVar2) {
      FDateTime::Now();
      local_278.Ticks = local_288 - local_280;
      FTimespan::ToString(&local_278,&local_270);
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TableManager::InitSync",0x1a,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0x38,L"DataTable Init Time [%s]");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      return true;
    }
    iVar6 = 0x31;
    paVar5 = &bGEnsureHasExecuted<407000610026553393>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar5,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                     ,iVar6,"false");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// InitSyncInternal @ 14bb6c0a0

bool __thiscall UDS_TableManager::InitSyncInternal(UDS_TableManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType _Src;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TArray<EDS_TableType,TSizedDefaultAllocator<32>_> local_38;
  
  DestructItems<FDS_TableDefineData,int>
            ((FDS_TableDefineData *)(this->TableDefineDatas).AllocatorInstance.Data,
             (this->TableDefineDatas).ArrayNum);
  iVar7 = 0;
  piVar1 = &(this->TableDefineDatas).ArrayMax;
  (this->TableDefineDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TableDefineDatas).AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<enum_EDS_TableType,UDataTable_*>,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>,FDefaultSetAllocator>
  ::Reset(&this->LoadedTableMap);
  this->IsInited = true;
  InitTableInfos(this);
  iVar4 = (this->TableDefineDatas).ArrayNum;
  pFVar8 = (this->TableDefineDatas).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_3c = 0;
  pFVar2 = pFVar8 + (longlong)iVar4 * 0x18;
  do {
    iVar5 = iVar7;
    if ((this->TableDefineDatas).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_TableDefineData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar5 = local_40;
    }
    _Src.Data = local_48.Data;
    if (pFVar8 == pFVar2) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = iVar5;
      if (iVar5 == 0) {
        local_38.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar5,0,&local_38.AllocatorInstance,iVar5,&local_38.ArrayMax);
        memcpy(local_38.AllocatorInstance.Data,_Src.Data,(longlong)iVar5 << 2);
      }
      RequestSyncLoadTable(this,&local_38);
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return true;
    }
    pFVar6 = (this->StringTableTypeList).AllocatorInstance.Data;
    pFVar3 = pFVar6 + (longlong)(this->StringTableTypeList).ArrayNum * 4;
    if (pFVar6 != pFVar3) {
      do {
        iVar7 = iVar5;
        if (*(int *)pFVar6 == *(int *)pFVar8) goto LAB_14bb6c1a6;
        pFVar6 = pFVar6 + 4;
      } while (pFVar6 != pFVar3);
    }
    if (iVar5 == local_3c) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_48,&local_3c);
    }
    iVar7 = iVar5 + 1;
    *(int *)(local_48.Data + (longlong)iVar5 * 4) = *(int *)pFVar8;
    local_40 = iVar7;
LAB_14bb6c1a6:
    pFVar8 = pFVar8 + 0x18;
  } while( true );
}

// InitTableInfos @ 14bb6c240

void __thiscall UDS_TableManager::InitTableInfos(UDS_TableManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UEnum *this_00;
  int iVar7;
  EDS_TableType EVar8;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  
  iVar7 = (this->TableDefineDatas).ArrayNum;
  piVar1 = &(this->TableDefineDatas).ArrayNum;
  if (iVar7 < 0x151) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0x151 - iVar7,&(this->TableDefineDatas).AllocatorInstance,piVar1,
                       &(this->TableDefineDatas).ArrayMax);
    memset((this->TableDefineDatas).AllocatorInstance.Data + (longlong)iVar5 * 0x18,0,
           (longlong)(0x151 - iVar7) * 0x18);
  }
  else if (0x151 < iVar7) {
    iVar7 = iVar7 + -0x151;
    if (iVar7 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar7 == 0) goto LAB_14bb6c339;
    TArray<FDS_TableDefineData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->TableDefineDatas,0x151,iVar7);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->TableDefineDatas).AllocatorInstance,*piVar1,
               &(this->TableDefineDatas).ArrayMax);
  }
LAB_14bb6c339:
  EVar8 = AccelWaitComplete;
  while (EVar8 < ItemGemSocket) {
    if ((EVar8 != ItemGatherTool) && (EVar8 != None)) {
switchD_14bb6c441_caseD_a9:
      pFVar6 = (this->StringTableTypeList).AllocatorInstance.Data;
      pFVar2 = pFVar6 + (longlong)(this->StringTableTypeList).ArrayNum * 4;
      for (; pFVar6 != pFVar2; pFVar6 = pFVar6 + 4) {
        if (*(EDS_TableType *)pFVar6 == EVar8) goto switchD_14bb6c441_caseD_a8;
      }
      this_00 = StaticEnum<enum_EDS_TableType>();
      if ((this_00 == (UEnum *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UEnum::GetNameByValue(this_00,(long64)&local_res8);
      ::FName::ToString(&local_res8,&local_58);
      ::FString::Replace(&local_58,&local_78,L"EDS_TableType::",L"",IgnoreCase);
      _Src.Data = local_78.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = local_78.Data.ArrayNum;
      local_88.Data.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,(ForAnyElementType *)&local_88,iVar7,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_48,&local_88);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_48,1);
      ::FString::FormatImpl(&local_68,L"/Game/Datas/Common/{0}.{0}",&local_98);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      AddTableDefine(this,EVar8,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
switchD_14bb6c441_caseD_a8:
    EVar8 = EVar8 + AccelWaitComplete;
    if (EVar8 == Max) {
      return;
    }
  }
  switch(EVar8) {
  case NpcRareAction:
  case NpcSpawn:
  case NpcSpawnGroup:
  case NpcSpawnQuest:
  case PatrolBase:
  case PatrolStep:
  case SpawnTerritory:
  case StuffSpawn:
  case StuffSpawnGroup:
  case StuffSpawnQuest:
  case Max:
    goto switchD_14bb6c441_caseD_a8;
  default:
    goto switchD_14bb6c441_caseD_a9;
  }
}

// IsTableLoadRequiredOnInit @ 14bb6fa50

bool __thiscall
UDS_TableManager::IsTableLoadRequiredOnInit(UDS_TableManager *this,EDS_TableType param_1)

{
  if (param_1 < ItemGemSocket) {
    if ((param_1 == ItemGatherTool) || (param_1 == None)) {
switchD_14bb6fa87_caseD_a8:
      return false;
    }
  }
  else {
    switch(param_1) {
    case NpcRareAction:
    case NpcSpawn:
    case NpcSpawnGroup:
    case NpcSpawnQuest:
    case PatrolBase:
    case PatrolStep:
    case SpawnTerritory:
    case StuffSpawn:
    case StuffSpawnGroup:
    case StuffSpawnQuest:
    case Max:
      goto switchD_14bb6fa87_caseD_a8;
    }
  }
  return true;
}

// RefreshZoneTable @ 14bb7fda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_TableManager::RefreshZoneTable(UDS_TableManager *this,EDS_ZoneSpawnType param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  undefined1 auStackY_178 [32];
  UDS_TableManager *local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  TArray<EDS_TableType,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138 = this;
  ::FString::FString(&local_110,L"/Game/Datas/Common/NpcSpawn");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_b0,&local_110,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 0xb1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x1080) = 0xb0;
  ::FString::operator=((FString *)(pFVar1 + 0x1088),pFVar4);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_100,L"/Game/Datas/Common/PatrolBase");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_a0,&local_100,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 0xbe) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x11b8) = 0xbd;
  ::FString::operator=((FString *)(pFVar1 + 0x11c0),pFVar4);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f0,L"/Game/Datas/Common/PatrolStep");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_90,&local_f0,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 0xc0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x11e8) = 0xbf;
  ::FString::operator=((FString *)(pFVar1 + 0x11f0),pFVar4);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_e0,L"/Game/Datas/Common/NpcSpawnQuest");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_80,&local_e0,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 0xb4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x10c8) = 0xb3;
  ::FString::operator=((FString *)(pFVar1 + 0x10d0),pFVar4);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d0,L"/Game/Datas/Common/StuffSpawn");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_70,&local_d0,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 0x128) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x1ba8) = 0x127;
  ::FString::operator=((FString *)(pFVar1 + 0x1bb0),pFVar4);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c0,L"/Game/Datas/Common/StuffSpawnQuest");
  pFVar4 = `UDS_TableManager::RefreshZoneTable'::__l2::<lambda_1>::operator()
                     (&local_138,&local_60,&local_c0,param_1,param_2);
  if ((this->TableDefineDatas).ArrayNum < 299) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TableDefineDatas).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + 0x1bf0) = 0x12a;
  ::FString::operator=((FString *)(pFVar1 + 0x1bf8),pFVar4);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_50 = 0xb0;
  uStack_4c = 0xbd;
  uStack_48 = 0xbf;
  uStack_44 = 0xb3;
  local_40 = 0x127;
  uStack_3c = 0x12a;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_130,6,&local_124);
  _Src.Data = local_130.Data;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(ulonglong *)local_130.Data = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(local_130.Data + 8) = CONCAT44(uStack_44,uStack_48);
  *(ulonglong *)(local_130.Data + 0x10) = CONCAT44(uStack_3c,local_40);
  lVar5 = (longlong)local_128;
  local_120.ArrayNum = local_128;
  if (local_128 == 0) {
    local_120.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_128,0,&local_120.AllocatorInstance,local_128,&local_120.ArrayMax);
    memcpy(local_120.AllocatorInstance.Data,_Src.Data,lVar5 << 2);
  }
  RequestSyncLoadTable(this,&local_120);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  return;
}

// RequestSyncLoadStringTable @ 14bb852b0

void __thiscall
UDS_TableManager::RequestSyncLoadStringTable(UDS_TableManager *this,EDS_Language param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<EDS_TableType,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = (this->StringTableTypeList).ArrayNum;
  lVar2 = (longlong)local_18.ArrayNum;
  pFVar1 = (this->StringTableTypeList).AllocatorInstance.Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,pFVar1,lVar2 << 2);
  }
  RequestUnloadTable(this,&local_18);
  UpdateStringTableInfosByLanguage(this,param_1);
  local_18.ArrayNum = (this->StringTableTypeList).ArrayNum;
  lVar2 = (longlong)local_18.ArrayNum;
  pFVar1 = (this->StringTableTypeList).AllocatorInstance.Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,pFVar1,lVar2 << 2);
  }
  RequestSyncLoadTable(this,&local_18);
  this->IsStringTableInited = true;
  return;
}

// RequestSyncLoadTable @ 14bb853e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_TableManager::RequestSyncLoadTable
          (UDS_TableManager *this,TArray<EDS_TableType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FDS_TableDefineData *pFVar7;
  UAssetManager *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_LogManager *pUVar11;
  int iVar12;
  FSoftObjectPath *this_00;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [8];
  ForAnyElementType local_280;
  undefined8 local_278;
  int local_270 [2];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_268;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_258;
  UObject *local_248;
  FString local_240;
  FSoftObjectPath local_230;
  TPairInitializer<EDS_TableType_&,UDataTable_*_&> local_210;
  undefined4 local_200;
  undefined4 uStack_1fc;
  char *pcStack_1f8;
  char *local_1f0;
  FScriptContainerElement *local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  int *local_1d8;
  UObject **local_1d0;
  FString local_1c8;
  TStringView<wchar_t> local_1b8;
  TSharedPtr<FStreamableHandle,1> local_1a8;
  FString local_198;
  source_location local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pFVar14 = (param_1->AllocatorInstance).Data;
  uVar15 = 0;
  iVar12 = param_1->ArrayNum;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  pFVar1 = pFVar14 + (longlong)iVar12 * 4;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  local_210.Value = (UDataTable **)param_1;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_288[0] = 0;
      `TCheckedPointerIterator<enum_EDS_TableType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_288);
    }
    uVar16 = 0;
    if (pFVar14 == pFVar1) break;
    pFVar7 = GetTableDefineData(this,*(EDS_TableType *)pFVar14);
    if (pFVar7->TableType != None) {
      local_1e8 = (pFVar7->TablePath).Data.AllocatorInstance.Data;
      iVar5 = (pFVar7->TablePath).Data.ArrayNum;
      local_230.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_230.AssetPath.PackageName.Number = 0;
      local_230.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_230.AssetPath.AssetName.Number = 0;
      local_230.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uStack_1e0 = iVar5 - 1;
      if (iVar5 == 0) {
        uStack_1e0 = uVar16;
      }
      local_230.SubPathString.Data.ArrayNum = 0;
      local_230.SubPathString.Data.ArrayMax = 0;
      local_1b8._12_4_ = uStack_1dc;
      local_1b8.Size = uStack_1e0;
      local_1b8.DataPtr = (wchar_t *)local_1e8;
      FSoftObjectPath::SetPath(&local_230,&local_1b8);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                (&local_268,&local_230);
      if (local_230.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.SubPathString.Data.AllocatorInstance.Data);
      }
      if (((local_280.Data <= pFVar7) &&
          (pFVar7 < (FDS_TableDefineData *)(local_280.Data + (longlong)local_278._4_4_ * 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)local_278;
      if ((int)local_278 == local_278._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_280,(int *)((longlong)&local_278 + 4));
      }
      local_278 = CONCAT44(local_278._4_4_,iVar5 + 1);
      *(EDS_TableType *)(local_280.Data + (longlong)iVar5 * 4) = pFVar7->TableType;
    }
    pFVar14 = pFVar14 + 4;
  }
  pUVar8 = UAssetManager::Get();
  FVar3.Data = local_268.AllocatorInstance.Data;
  iVar12 = local_268.ArrayNum;
  local_200 = 0xf2;
  uStack_1fc = 0x28;
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcStack_1f8 = "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp";
  local_1f0 = 
  "void __cdecl UDS_TableManager::RequestSyncLoadTable(class TArray<enum EDS_TableType,class TSizedDefaultAllocator<32> >)"
  ;
  local_188._Function =
       "void __cdecl UDS_TableManager::RequestSyncLoadTable(class TArray<enum EDS_TableType,class TSizedDefaultAllocator<32> >)"
  ;
  local_240.Data.ArrayNum = 0;
  local_240.Data.ArrayMax = 0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = local_268.ArrayNum;
  local_188._Line = 0xf2;
  local_188._Column = 0x28;
  local_188._File =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp";
  if (local_268.ArrayNum == 0) {
    local_258.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_268.ArrayNum,0,&local_258.AllocatorInstance,local_268.ArrayNum,
               &local_258.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              (local_258.AllocatorInstance.Data,(FSoftObjectPath *)FVar3.Data,iVar12);
  }
  FStreamableManager::RequestSyncLoadInternal
            (&pUVar8->StreamableManager,&local_1a8,&local_258,false,&local_240,
             (FSourceLocation *)&local_188);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
  if ((FSoftObjectPath *)local_258.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  uVar17 = uVar15;
  if (0 < local_268.ArrayNum) {
    do {
      uVar13 = (uint)uVar15;
      uVar6 = uVar16;
      if ((int)uVar13 < local_268.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSoftObjectPath *)(local_268.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20)
      ;
      uVar6 = uVar16;
      if ((int)uVar13 < (int)local_278) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_270[0] = *(int *)(local_280.Data + uVar17);
      pUVar9 = FSoftObjectPath::ResolveObject(this_00);
      if (pUVar9 == (UObject *)0x0) {
LAB_14bb85787:
        local_248 = (UObject *)0x0;
        ::FString::FString(&local_1c8,"EDS_TableType");
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          DS_Util::GetEnumToString(&local_198,&local_1c8,(longlong)local_270[0]);
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_TableManager::RequestSyncLoadTable",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0xfd,L"[%s]dataTable is nullptr")
          ;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      else {
        pUVar10 = Z_Construct_UClass_UDataTable_NoRegister();
        iVar12 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bb85787;
        local_1d8 = local_270;
        local_1d0 = &local_248;
        local_248 = pUVar9;
        TSet<TTuple<enum_EDS_TableType,UDataTable_*>,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_TableType_&,UDataTable_*_&>_>
                  (&this->LoadedTableMap,&local_210,(bool *)&local_1d8);
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar17 + 4;
      param_1 = (TArray<EDS_TableType,TSizedDefaultAllocator<32>_> *)local_210.Value;
    } while ((int)(uVar13 + 1) < local_268.ArrayNum);
  }
  iVar12 = local_268.ArrayNum;
  if ((FDS_TableDefineData *)local_280.Data != (FDS_TableDefineData *)0x0) {
    FMemory::Free(local_280.Data);
    iVar12 = local_268.ArrayNum;
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_268.AllocatorInstance.Data,iVar12);
  if ((FSoftObjectPath *)local_268.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RequestSyncLoadTable @ 14bb858d0

/* WARNING: Type propagation algorithm not settling */

UDataTable * __thiscall
UDS_TableManager::RequestSyncLoadTable(UDS_TableManager *this,FSoftObjectPath *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UAssetManager *pUVar3;
  UDataTable *pUVar4;
  UClass *pUVar5;
  size_t _Size;
  undefined1 local_98 [12];
  int iStack_8c;
  char *local_88;
  FString local_80;
  TSharedPtr<FStreamableHandle,1> local_70;
  source_location local_58;
  FSoftObjectPath local_38;
  
  pUVar3 = UAssetManager::Get();
  local_38.SubPathString.Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_98._0_8_ = (FScriptContainerElement *)0x280000016e;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  stack0xffffffffffffff70 =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp";
  local_88 = 
  "class UDataTable *__cdecl UDS_TableManager::RequestSyncLoadTable(struct FSoftObjectPath)";
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_58._Function =
       "class UDataTable *__cdecl UDS_TableManager::RequestSyncLoadTable(struct FSoftObjectPath)";
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58._Line = 0x16e;
  local_58._Column = 0x28;
  local_58._File =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp";
  local_38.AssetPath.PackageName = (param_1->AssetPath).PackageName;
  local_38.AssetPath.AssetName = (param_1->AssetPath).AssetName;
  if (local_38.SubPathString.Data.ArrayNum == 0) {
    local_38.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_38.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_38.SubPathString,local_38.SubPathString.Data.ArrayNum,
               &local_38.SubPathString.Data.ArrayMax);
    memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,pFVar2,_Size);
  }
  local_98._0_8_ = (FSoftObjectPath *)0x0;
  local_98._8_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_98,1,&iStack_8c);
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)local_98._0_8_,&local_38,1);
  FStreamableManager::RequestSyncLoadInternal
            (&pUVar3->StreamableManager,&local_70,
             (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)local_98,false,&local_80,
             (FSourceLocation *)&local_58);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((FSoftObjectPath *)local_98._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  pUVar4 = (UDataTable *)FSoftObjectPath::ResolveObject(param_1);
  if (pUVar4 != (UDataTable *)0x0) {
    pUVar5 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return pUVar4;
      }
      FMemory::Free(pFVar2);
      return pUVar4;
    }
  }
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (UDataTable *)0x0;
}

// RequestUnloadTable @ 14bb85ad0

void __thiscall
UDS_TableManager::RequestUnloadTable
          (UDS_TableManager *this,TArray<EDS_TableType,TSizedDefaultAllocator<32>_> *param_1)

{
  EDS_TableType EVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FDS_TableDefineData *pFVar9;
  UAssetManager *pUVar10;
  undefined1 *puVar11;
  FSoftObjectPath *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  EDS_TableType local_res18 [4];
  ForAnyElementType local_98;
  undefined8 local_90;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FSoftObjectPath local_58;
  
  iVar8 = param_1->ArrayNum;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar14 + (longlong)iVar8 * 4;
  uVar15 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<enum_EDS_TableType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar14 == pFVar3) break;
    pFVar9 = GetTableDefineData(this,*(EDS_TableType *)pFVar14);
    if (pFVar9->TableType != None) {
      local_78 = (pFVar9->TablePath).Data.AllocatorInstance.Data;
      iVar6 = (pFVar9->TablePath).Data.ArrayNum;
      local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_58.AssetPath.PackageName.Number = 0;
      local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_58.AssetPath.AssetName.Number = 0;
      local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.SubPathString.Data.ArrayNum = 0;
      local_58.SubPathString.Data.ArrayMax = 0;
      iStack_70 = iVar6 + -1;
      if (iVar6 == 0) {
        iStack_70 = 0;
      }
      local_68._12_4_ = uStack_6c;
      local_68.Size = iStack_70;
      local_68.DataPtr = (wchar_t *)local_78;
      FSoftObjectPath::SetPath(&local_58,&local_68);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                (&local_88,&local_58);
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
      if (((local_98.Data <= pFVar9) &&
          (pFVar9 < (FDS_TableDefineData *)(local_98.Data + (longlong)local_90._4_4_ * 4))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_98,(int *)((longlong)&local_90 + 4));
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
      *(EDS_TableType *)(local_98.Data + (longlong)iVar6 * 4) = pFVar9->TableType;
    }
    pFVar14 = pFVar14 + 4;
  }
  uVar16 = uVar15;
  if (0 < local_88.ArrayNum) {
    do {
      uVar13 = (uint)uVar15;
      uVar7 = 0;
      if ((int)uVar13 < local_88.ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (FSoftObjectPath *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20);
      uVar7 = 0;
      if ((int)uVar13 < (int)local_90) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar1 = *(EDS_TableType *)(local_98.Data + uVar16);
      if (*(int *)&(this->LoadedTableMap).field_0x8 != *(int *)&(this->LoadedTableMap).field_0x34) {
        puVar2 = *(undefined1 **)&(this->LoadedTableMap).field_0x40;
        puVar11 = &(this->LoadedTableMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        iVar8 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(this->LoadedTableMap).field_0x48 - AccelWaitComplete & EVar1) * 4
                        );
        if (iVar8 != -1) {
          do {
            if (*(EDS_TableType *)(*(longlong *)&this->LoadedTableMap + (longlong)iVar8 * 0x18) ==
                EVar1) {
              pUVar10 = UAssetManager::Get();
              FStreamableManager::Unload(&pUVar10->StreamableManager,pFVar12);
              local_res18[0] = EVar1;
              if (*(int *)&(this->LoadedTableMap).field_0x8 !=
                  *(int *)&(this->LoadedTableMap).field_0x34) {
                TSet<TTuple<enum_EDS_TableType,UDataTable_*>,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>,FDefaultSetAllocator>
                ::RemoveImpl<enum_EDS_TableType>(&this->LoadedTableMap,EVar1,local_res18);
              }
              break;
            }
            iVar8 = *(int *)(*(longlong *)&this->LoadedTableMap + 0x10 + (longlong)iVar8 * 0x18);
          } while (iVar8 != -1);
        }
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < local_88.ArrayNum);
  }
  if ((FDS_TableDefineData *)local_98.Data != (FDS_TableDefineData *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FSoftObjectPath *)local_88.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// UpdateStringTableInfosByLanguage @ 14bb98030

void __thiscall
UDS_TableManager::UpdateStringTableInfosByLanguage(UDS_TableManager *this,EDS_Language param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  UEnum *pUVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  EDS_Language local_res10;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  
  pFVar13 = (this->StringTableTypeList).AllocatorInstance.Data;
  iVar2 = (this->StringTableTypeList).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar2 * 4;
  local_res10 = param_1;
  while( true ) {
    if ((this->StringTableTypeList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EDS_TableType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar1) break;
    uVar3 = *(uint *)pFVar13;
    pUVar10 = StaticEnum<enum_EDS_TableType>();
    if (pUVar10 == (UEnum *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UEnum::GetNameByValue(pUVar10,(long64)&local_res18);
    ::FName::ToString(&local_res18,&local_98);
    ::FString::Replace(&local_98,&local_b8,L"EDS_TableType::",L"",IgnoreCase);
    pUVar10 = StaticEnum<enum_EDS_Language>();
    if (pUVar10 == (UEnum *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UEnum::GetNameByValue(pUVar10,(long64)&local_res20);
    ::FName::ToString(&local_res20,&local_a8);
    ::FString::Replace(&local_a8,&local_c8,L"EDS_Language::",L"",IgnoreCase);
    FVar7.Data = local_c8.Data.AllocatorInstance.Data;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = local_c8.Data.ArrayNum;
    local_f8.Data.ArrayNum = iVar11;
    if (iVar11 == 0) {
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar11,0,(ForAnyElementType *)&local_f8,iVar11,&local_f8.Data.ArrayMax);
      memcpy(local_f8.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar11 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_88,&local_f8);
    FVar7.Data = local_b8.Data.AllocatorInstance.Data;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = local_b8.Data.ArrayNum;
    local_e8.Data.ArrayNum = iVar11;
    if (iVar11 == 0) {
      local_e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar11,0,(ForAnyElementType *)&local_e8,iVar11,&local_e8.Data.ArrayMax);
      memcpy(local_e8.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar11 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_68,&local_e8);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_88,2);
    ::FString::FormatImpl(&local_d8,L"/Game/Datas/String/{0}/{1}_{0}.{1}_{0}",&local_108);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    if (0x150 < (int)uVar3) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32)InTableType < (int32)EDS_TableType::Max",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TableManager.cpp"
                         ,0xda,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = 0;
    if ((int)uVar3 < (this->TableDefineDatas).ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    pFVar4 = (this->TableDefineDatas).AllocatorInstance.Data;
    *(uint *)(pFVar4 + (longlong)(int)uVar3 * 0x18) = uVar3;
    pFVar4 = pFVar4 + (longlong)(int)uVar3 * 0x18 + 8;
    if (pFVar4 != (FScriptContainerElement *)&local_d8) {
      pFVar6 = pFVar4 + 0xc;
      iVar11 = *(int *)pFVar6;
      iVar12 = local_d8.Data.ArrayNum;
      *(int *)&pFVar4[8].field_0x0 = iVar12;
      if ((iVar12 == 0) && (iVar11 == 0)) {
        *(int *)pFVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar12,iVar11,(ForAnyElementType *)pFVar4,iVar12,(int *)pFVar6);
        if (iVar12 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,FVar7.Data,(longlong)iVar12 * 2);
        }
      }
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 4;
  }
  return;
}

