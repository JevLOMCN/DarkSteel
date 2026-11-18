// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 15

// StaticClass @ 148bed070

UClass * __cdecl UAutomationTestExcludelistConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistConfig",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelistConfig,0xa0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistConfig>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton;
}

// UAutomationTestExcludelistConfig @ 148bf1970

UAutomationTestExcludelistConfig * __thiscall
UAutomationTestExcludelistConfig::UAutomationTestExcludelistConfig
          (UAutomationTestExcludelistConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistConfig__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TaskTrackerURLHashtag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskTrackerURLHashtag).Data.ArrayNum = 0;
  (this->TaskTrackerURLHashtag).Data.ArrayMax = 0;
  (this->TaskTrackerURLBase).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskTrackerURLBase).Data.ArrayNum = 0;
  (this->TaskTrackerURLBase).Data.ArrayMax = 0;
  (this->ExcludeTest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeTest).ArrayNum = 0;
  (this->ExcludeTest).ArrayMax = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->EntriesHash).Hash[0] = '\0';
  (this->EntriesHash).Hash[1] = '\0';
  (this->EntriesHash).Hash[2] = '\0';
  (this->EntriesHash).Hash[3] = '\0';
  (this->EntriesHash).Hash[4] = '\0';
  (this->EntriesHash).Hash[5] = '\0';
  (this->EntriesHash).Hash[6] = '\0';
  (this->EntriesHash).Hash[7] = '\0';
  (this->EntriesHash).Hash[8] = '\0';
  (this->EntriesHash).Hash[9] = '\0';
  (this->EntriesHash).Hash[10] = '\0';
  (this->EntriesHash).Hash[0xb] = '\0';
  (this->EntriesHash).Hash[0xc] = '\0';
  (this->EntriesHash).Hash[0xd] = '\0';
  (this->EntriesHash).Hash[0xe] = '\0';
  (this->EntriesHash).Hash[0xf] = '\0';
  (this->EntriesHash).Hash[0x10] = '\0';
  (this->EntriesHash).Hash[0x11] = '\0';
  (this->EntriesHash).Hash[0x12] = '\0';
  (this->EntriesHash).Hash[0x13] = '\0';
  (this->SavedEntriesHash).Hash[0] = '\0';
  (this->SavedEntriesHash).Hash[1] = '\0';
  (this->SavedEntriesHash).Hash[2] = '\0';
  (this->SavedEntriesHash).Hash[3] = '\0';
  (this->SavedEntriesHash).Hash[4] = '\0';
  (this->SavedEntriesHash).Hash[5] = '\0';
  (this->SavedEntriesHash).Hash[6] = '\0';
  (this->SavedEntriesHash).Hash[7] = '\0';
  (this->SavedEntriesHash).Hash[8] = '\0';
  (this->SavedEntriesHash).Hash[9] = '\0';
  (this->SavedEntriesHash).Hash[10] = '\0';
  (this->SavedEntriesHash).Hash[0xb] = '\0';
  (this->SavedEntriesHash).Hash[0xc] = '\0';
  (this->SavedEntriesHash).Hash[0xd] = '\0';
  (this->SavedEntriesHash).Hash[0xe] = '\0';
  (this->SavedEntriesHash).Hash[0xf] = '\0';
  (this->SavedEntriesHash).Hash[0x10] = '\0';
  (this->SavedEntriesHash).Hash[0x11] = '\0';
  (this->SavedEntriesHash).Hash[0x12] = '\0';
  (this->SavedEntriesHash).Hash[0x13] = '\0';
  return this;
}

// UAutomationTestExcludelistConfig @ 148bf19e0

UAutomationTestExcludelistConfig * __thiscall
UAutomationTestExcludelistConfig::UAutomationTestExcludelistConfig
          (UAutomationTestExcludelistConfig *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistConfig__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TaskTrackerURLHashtag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskTrackerURLHashtag).Data.ArrayNum = 0;
  (this->TaskTrackerURLHashtag).Data.ArrayMax = 0;
  (this->TaskTrackerURLBase).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskTrackerURLBase).Data.ArrayNum = 0;
  (this->TaskTrackerURLBase).Data.ArrayMax = 0;
  (this->ExcludeTest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeTest).ArrayNum = 0;
  (this->ExcludeTest).ArrayMax = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->EntriesHash).Hash[0] = '\0';
  (this->EntriesHash).Hash[1] = '\0';
  (this->EntriesHash).Hash[2] = '\0';
  (this->EntriesHash).Hash[3] = '\0';
  (this->EntriesHash).Hash[4] = '\0';
  (this->EntriesHash).Hash[5] = '\0';
  (this->EntriesHash).Hash[6] = '\0';
  (this->EntriesHash).Hash[7] = '\0';
  (this->EntriesHash).Hash[8] = '\0';
  (this->EntriesHash).Hash[9] = '\0';
  (this->EntriesHash).Hash[10] = '\0';
  (this->EntriesHash).Hash[0xb] = '\0';
  (this->EntriesHash).Hash[0xc] = '\0';
  (this->EntriesHash).Hash[0xd] = '\0';
  (this->EntriesHash).Hash[0xe] = '\0';
  (this->EntriesHash).Hash[0xf] = '\0';
  (this->EntriesHash).Hash[0x10] = '\0';
  (this->EntriesHash).Hash[0x11] = '\0';
  (this->EntriesHash).Hash[0x12] = '\0';
  (this->EntriesHash).Hash[0x13] = '\0';
  (this->SavedEntriesHash).Hash[0] = '\0';
  (this->SavedEntriesHash).Hash[1] = '\0';
  (this->SavedEntriesHash).Hash[2] = '\0';
  (this->SavedEntriesHash).Hash[3] = '\0';
  (this->SavedEntriesHash).Hash[4] = '\0';
  (this->SavedEntriesHash).Hash[5] = '\0';
  (this->SavedEntriesHash).Hash[6] = '\0';
  (this->SavedEntriesHash).Hash[7] = '\0';
  (this->SavedEntriesHash).Hash[8] = '\0';
  (this->SavedEntriesHash).Hash[9] = '\0';
  (this->SavedEntriesHash).Hash[10] = '\0';
  (this->SavedEntriesHash).Hash[0xb] = '\0';
  (this->SavedEntriesHash).Hash[0xc] = '\0';
  (this->SavedEntriesHash).Hash[0xd] = '\0';
  (this->SavedEntriesHash).Hash[0xe] = '\0';
  (this->SavedEntriesHash).Hash[0xf] = '\0';
  (this->SavedEntriesHash).Hash[0x10] = '\0';
  (this->SavedEntriesHash).Hash[0x11] = '\0';
  (this->SavedEntriesHash).Hash[0x12] = '\0';
  (this->SavedEntriesHash).Hash[0x13] = '\0';
  return this;
}

// ~UAutomationTestExcludelistConfig @ 148bf1de0

void __thiscall
UAutomationTestExcludelistConfig::~UAutomationTestExcludelistConfig
          (UAutomationTestExcludelistConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistConfig__6B_;
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomationTestExcludelistEntry,int>
            ((FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data,
             (this->ExcludeTest).ArrayNum);
  pFVar1 = (this->ExcludeTest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskTrackerURLBase).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskTrackerURLHashtag).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddEntry @ 148bf2210

void __thiscall
UAutomationTestExcludelistConfig::AddEntry
          (UAutomationTestExcludelistConfig *this,FAutomationTestExcludelistEntry *param_1)

{
  int *piVar1;
  FAutomationTestExcludelistEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = (FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->ExcludeTest).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExcludeTest).ArrayNum;
  piVar1 = &(this->ExcludeTest).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8d8,&(this->ExcludeTest).AllocatorInstance,piVar1);
  }
  (this->ExcludeTest).ArrayNum = iVar5 + 1;
  FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
            ((FAutomationTestExcludelistEntry *)
             ((this->ExcludeTest).AllocatorInstance.Data + (longlong)iVar5 * 0xd8),param_1);
  UpdateHash(this,param_1);
  return;
}

// GetEntries @ 148bf4180

TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_> * __thiscall
UAutomationTestExcludelistConfig::GetEntries(UAutomationTestExcludelistConfig *this)

{
  return &this->ExcludeTest;
}

// GetPrivateStaticClass @ 148bf4c50

UClass * __cdecl UAutomationTestExcludelistConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistConfig",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelistConfig,0xa0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistConfig>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton;
}

// GetSectionName @ 148bf4e80

FString * __thiscall
UAutomationTestExcludelistConfig::GetSectionName
          (UAutomationTestExcludelistConfig *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AutomationTestExcludelist");
  return __return_storage_ptr__;
}

// InitializeSettingsDefault @ 148bf5310

void __thiscall
UAutomationTestExcludelistConfig::InitializeSettingsDefault(UAutomationTestExcludelistConfig *this)

{
  int *piVar1;
  
  DestructItems<FAutomationTestExcludelistEntry,int>
            ((FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data,
             (this->ExcludeTest).ArrayNum);
  piVar1 = &(this->ExcludeTest).ArrayMax;
  (this->ExcludeTest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->ExcludeTest).AllocatorInstance,0,piVar1);
  }
  (this->EntriesHash).Hash[0] = '\0';
  (this->EntriesHash).Hash[1] = '\0';
  (this->EntriesHash).Hash[2] = '\0';
  (this->EntriesHash).Hash[3] = '\0';
  (this->EntriesHash).Hash[4] = '\0';
  (this->EntriesHash).Hash[5] = '\0';
  (this->EntriesHash).Hash[6] = '\0';
  (this->EntriesHash).Hash[7] = '\0';
  (this->EntriesHash).Hash[8] = '\0';
  (this->EntriesHash).Hash[9] = '\0';
  (this->EntriesHash).Hash[10] = '\0';
  (this->EntriesHash).Hash[0xb] = '\0';
  (this->EntriesHash).Hash[0xc] = '\0';
  (this->EntriesHash).Hash[0xd] = '\0';
  (this->EntriesHash).Hash[0xe] = '\0';
  (this->EntriesHash).Hash[0xf] = '\0';
  (this->EntriesHash).Hash[0x10] = '\0';
  (this->EntriesHash).Hash[0x11] = '\0';
  (this->EntriesHash).Hash[0x12] = '\0';
  (this->EntriesHash).Hash[0x13] = '\0';
  return;
}

// LoadTaskTrackerProperties @ 148bf5ef0

void __thiscall
UAutomationTestExcludelistConfig::LoadTaskTrackerProperties(UAutomationTestExcludelistConfig *this)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  void *local_18 [2];
  
  pwVar3 = L"";
  pwVar4 = L"";
  if (TicketTrackerURLHashtagPropertyName.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data;
  }
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)*puVar1;
  }
  FConfigCacheIni::GetString(GConfig,pwVar2,pwVar4,&this->TaskTrackerURLHashtag,&GEngineIni);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pwVar4 = L"";
  if (TicketTrackerURLBasePropertyName.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data;
  }
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    pwVar3 = (wchar_t *)*puVar1;
  }
  FConfigCacheIni::GetString(GConfig,pwVar3,pwVar4,&this->TaskTrackerURLBase,&GEngineIni);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// PostInitProperties @ 148bf6ab0

void __thiscall
UAutomationTestExcludelistConfig::PostInitProperties(UAutomationTestExcludelistConfig *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FAutomationTestExcludelistEntry *pFVar4;
  FAutomationTestExcludelistEntry *pFVar5;
  FIdentityFunctor local_res8 [8];
  
  UObject::PostInitProperties((UObject *)this);
  iVar1 = (this->ExcludeTest).ArrayNum;
  pFVar5 = (FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data;
  pFVar4 = pFVar5 + iVar1;
  while( true ) {
    if ((this->ExcludeTest).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAutomationTestExcludelistEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    FAutomationTestExcludelistEntry::Finalize(pFVar5);
    pFVar5 = pFVar5 + 1;
  }
  AlgoImpl::
  IntroSortInternal<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
            ((FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data,
             (this->ExcludeTest).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  iVar1 = (this->ExcludeTest).ArrayNum;
  pFVar5 = (FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data;
  pFVar4 = pFVar5 + iVar1;
  while( true ) {
    if ((this->ExcludeTest).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAutomationTestExcludelistEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    UpdateHash(this,pFVar5);
    pFVar5 = pFVar5 + 1;
  }
  uVar3 = *(undefined8 *)((this->EntriesHash).Hash + 8);
  uVar2 = *(undefined4 *)((this->EntriesHash).Hash + 0x10);
  *(undefined8 *)(this->SavedEntriesHash).Hash = *(undefined8 *)(this->EntriesHash).Hash;
  *(undefined8 *)((this->SavedEntriesHash).Hash + 8) = uVar3;
  *(undefined4 *)((this->SavedEntriesHash).Hash + 0x10) = uVar2;
  return;
}

// Reset @ 148bf72a0

void __thiscall UAutomationTestExcludelistConfig::Reset(UAutomationTestExcludelistConfig *this)

{
  int *piVar1;
  
  DestructItems<FAutomationTestExcludelistEntry,int>
            ((FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data,
             (this->ExcludeTest).ArrayNum);
  piVar1 = &(this->ExcludeTest).ArrayMax;
  (this->ExcludeTest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->ExcludeTest).AllocatorInstance,0,piVar1);
  }
  (this->EntriesHash).Hash[0] = '\0';
  (this->EntriesHash).Hash[1] = '\0';
  (this->EntriesHash).Hash[2] = '\0';
  (this->EntriesHash).Hash[3] = '\0';
  (this->EntriesHash).Hash[4] = '\0';
  (this->EntriesHash).Hash[5] = '\0';
  (this->EntriesHash).Hash[6] = '\0';
  (this->EntriesHash).Hash[7] = '\0';
  (this->EntriesHash).Hash[8] = '\0';
  (this->EntriesHash).Hash[9] = '\0';
  (this->EntriesHash).Hash[10] = '\0';
  (this->EntriesHash).Hash[0xb] = '\0';
  (this->EntriesHash).Hash[0xc] = '\0';
  (this->EntriesHash).Hash[0xd] = '\0';
  (this->EntriesHash).Hash[0xe] = '\0';
  (this->EntriesHash).Hash[0xf] = '\0';
  (this->EntriesHash).Hash[0x10] = '\0';
  (this->EntriesHash).Hash[0x11] = '\0';
  (this->EntriesHash).Hash[0x12] = '\0';
  (this->EntriesHash).Hash[0x13] = '\0';
  return;
}

// SaveConfig @ 148bf7310

void __thiscall UAutomationTestExcludelistConfig::SaveConfig(UAutomationTestExcludelistConfig *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  FString local_18;
  
  if (((*(longlong *)(this->SavedEntriesHash).Hash != *(longlong *)(this->EntriesHash).Hash) ||
      (*(longlong *)((this->SavedEntriesHash).Hash + 8) !=
       *(longlong *)((this->EntriesHash).Hash + 8))) ||
     (*(int *)((this->SavedEntriesHash).Hash + 0x10) != *(int *)((this->EntriesHash).Hash + 0x10)))
  {
    ::FString::FString(&local_18,"");
    bVar3 = UObject::TryUpdateDefaultConfigFile((UObject *)this,&local_18,true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      uVar2 = *(undefined8 *)((this->EntriesHash).Hash + 8);
      uVar1 = *(undefined4 *)((this->EntriesHash).Hash + 0x10);
      *(undefined8 *)(this->SavedEntriesHash).Hash = *(undefined8 *)(this->EntriesHash).Hash;
      *(undefined8 *)((this->SavedEntriesHash).Hash + 8) = uVar2;
      *(undefined4 *)((this->SavedEntriesHash).Hash + 0x10) = uVar1;
    }
  }
  return;
}

// StaticRegisterNativesUAutomationTestExcludelistConfig @ 148bf8670

void __cdecl
UAutomationTestExcludelistConfig::StaticRegisterNativesUAutomationTestExcludelistConfig(void)

{
  return;
}

// UpdateHash @ 148bf8ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAutomationTestExcludelistConfig::UpdateHash
          (UAutomationTestExcludelistConfig *this,FAutomationTestExcludelistEntry *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined1 auStack_158 [32];
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((param_1->FullTestName).Data.ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Entry.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationTest\\Private\\AutomationTestExcludelist.cpp"
                         ,0x1b4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FSHA1::FSHA1(&local_c8);
  FSHA1::Update(&local_c8,(this->EntriesHash).Hash,0x14);
  bVar3 = param_1->Warn;
  pFVar4 = SetToString(&local_f8,&param_1->RHIs);
  pFVar5 = ::FName::ToString(&param_1->Reason,&local_108);
  ::FString::ConcatFF(&local_118,&param_1->FullTestName,pFVar5);
  ::FString::ConcatFF(&local_128,&local_118,pFVar4);
  pwVar7 = L"0";
  if (bVar3 != false) {
    pwVar7 = L"1";
  }
  ::FString::ConcatFC(&local_138,&local_128,pwVar7);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  uVar6 = local_138.Data.ArrayNum - 1;
  FVar2.Data = local_138.Data.AllocatorInstance.Data;
  if (local_138.Data.ArrayNum == 0) {
    uVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&local_c8,(wchar_t *)FVar2.Data,uVar6);
  FSHA1::Final(&local_c8);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  FSHA1::GetHash(&local_c8,(uchar *)&local_e8);
  *(undefined8 *)(this->EntriesHash).Hash = local_e8;
  *(undefined8 *)((this->EntriesHash).Hash + 8) = uStack_e0;
  *(undefined4 *)((this->EntriesHash).Hash + 0x10) = local_d8;
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  FSHA1::~FSHA1(&local_c8);
  return;
}

