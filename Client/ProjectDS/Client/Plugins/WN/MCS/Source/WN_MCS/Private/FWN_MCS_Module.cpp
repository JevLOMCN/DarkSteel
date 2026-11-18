// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 5

// StartupModule @ 14acca960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWN_MCS_Module::StartupModule(FWN_MCS_Module *this)

{
  FTextLocalizationManager *this_00;
  undefined1 auStackY_148 [32];
  ELocalizedTextSourceCategory local_118 [8];
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [136];
  void *local_40;
  undefined4 local_38;
  TRefCountPtr<ITextData> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  ::FString::FString(&local_100,L"en");
  ::FString::FString(&local_110,L"Material");
  ::FString::FString(&local_e0,L"Material_Asset_Pin_Category");
  ::FString::FString(&local_f0,L"CustomizableObjectSchema");
  local_118[0] = Engine;
  FPolyglotTextData::FPolyglotTextData
            ((FPolyglotTextData *)local_c8,local_118,&local_f0,&local_e0,&local_110,&local_100);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_110,L"Material");
  ::FString::FString(&local_100,L"ko");
  FPolyglotTextData::AddLocalizedString((FPolyglotTextData *)local_c8,&local_100,&local_110);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  this_00 = FTextLocalizationManager::Get();
  FTextLocalizationManager::RegisterPolyglotTextData(this_00,(FPolyglotTextData *)local_c8,true);
  if (local_28.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Reference + 0x10))();
  }
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x48));
  if ((FScriptContainerElement *)local_c8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._56_8_);
  }
  if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  if ((FScriptContainerElement *)local_c8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._24_8_);
  }
  if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  return;
}

// PreUnloadCallback @ 14accab20

void __thiscall FWN_MCS_Module::PreUnloadCallback(FWN_MCS_Module *this)

{
  return;
}

// PostLoadCallback @ 14accab30

void __thiscall FWN_MCS_Module::PostLoadCallback(FWN_MCS_Module *this)

{
  return;
}

// ShutdownModule @ 14accab40

void __thiscall FWN_MCS_Module::ShutdownModule(FWN_MCS_Module *this)

{
  return;
}

// RegisterTextDataOverride @ 14accdb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWN_MCS_Module::RegisterTextDataOverride(FWN_MCS_Module *this)

{
  FTextLocalizationManager *this_00;
  undefined1 auStackY_148 [32];
  ELocalizedTextSourceCategory local_118 [8];
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [136];
  void *local_40;
  undefined4 local_38;
  TRefCountPtr<ITextData> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  ::FString::FString(&local_100,L"en");
  ::FString::FString(&local_110,L"Material");
  ::FString::FString(&local_e0,L"Material_Asset_Pin_Category");
  ::FString::FString(&local_f0,L"CustomizableObjectSchema");
  local_118[0] = Engine;
  FPolyglotTextData::FPolyglotTextData
            ((FPolyglotTextData *)local_c8,local_118,&local_f0,&local_e0,&local_110,&local_100);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_110,L"Material");
  ::FString::FString(&local_100,L"ko");
  FPolyglotTextData::AddLocalizedString((FPolyglotTextData *)local_c8,&local_100,&local_110);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  this_00 = FTextLocalizationManager::Get();
  FTextLocalizationManager::RegisterPolyglotTextData(this_00,(FPolyglotTextData *)local_c8,true);
  if (local_28.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Reference + 0x10))();
  }
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x48));
  if ((FScriptContainerElement *)local_c8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._56_8_);
  }
  if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  if ((FScriptContainerElement *)local_c8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._24_8_);
  }
  if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  return;
}

