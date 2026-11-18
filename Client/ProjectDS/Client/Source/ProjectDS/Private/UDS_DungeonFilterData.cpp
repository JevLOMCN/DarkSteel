// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b486f60

UClass * __cdecl UDS_DungeonFilterData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonFilterData",
               &Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton,
               StaticRegisterNativesUDS_DungeonFilterData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonFilterData>,
               InternalVTableHelperCtorCaller<UDS_DungeonFilterData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton;
}

// UDS_DungeonFilterData @ 14b48ade0

UDS_DungeonFilterData * __thiscall
UDS_DungeonFilterData::UDS_DungeonFilterData(UDS_DungeonFilterData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonFilterData__6B_;
  (this->FilteredDungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredDungeonList).ArrayNum = 0;
  (this->FilteredDungeonList).ArrayMax = 0;
  this->bIsInitialized = false;
  return this;
}

// ~UDS_DungeonFilterData @ 14b48bb70

void __thiscall UDS_DungeonFilterData::~UDS_DungeonFilterData(UDS_DungeonFilterData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_DungeonFilterData__6B_;
  pFVar1 = (this->FilteredDungeonList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b48cf60

UClass * __cdecl UDS_DungeonFilterData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonFilterData",
               &Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton,
               StaticRegisterNativesUDS_DungeonFilterData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonFilterData>,
               InternalVTableHelperCtorCaller<UDS_DungeonFilterData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonFilterData.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonFilterData @ 14b48d7b0

void __cdecl UDS_DungeonFilterData::StaticRegisterNativesUDS_DungeonFilterData(void)

{
  return;
}

// UDS_DungeonFilterData @ 14ba32b80

UDS_DungeonFilterData * __thiscall
UDS_DungeonFilterData::UDS_DungeonFilterData
          (UDS_DungeonFilterData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UDS_DungeonFilterData__6B_;
  (this->FilteredDungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredDungeonList).ArrayNum = 0;
  (this->FilteredDungeonList).ArrayMax = 0;
  this->bIsInitialized = false;
  return this;
}

// InitFilterData @ 14ba54520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonFilterData::InitFilterData(UDS_DungeonFilterData *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->ShowPlayableDungeonOnly = true;
  this->bIsInitialized = true;
  this->DungeonOpenLevel = 1;
  UDS_PlayerData::GetData((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DungeonFilterData::InitFilterData",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x22,L"playerData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    FWeakObjectPtr::Get(local_148);
  }
  return;
}

// IsFilteredDungeon @ 14ba5b2d0

bool __thiscall UDS_DungeonFilterData::IsFilteredDungeon(UDS_DungeonFilterData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FilteredDungeonList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FilteredDungeonList).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// SetFilteredDungeonList @ 14ba711d0

void __thiscall
UDS_DungeonFilterData::SetFilteredDungeonList
          (UDS_DungeonFilterData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->FilteredDungeonList,param_1);
  this->DungeonOpenLevel = param_2;
  return;
}

