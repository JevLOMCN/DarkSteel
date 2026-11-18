// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 3

// FGlobalConfigurationConsoleCommandRouter @ 14e9b7430

FGlobalConfigurationConsoleCommandRouter * __thiscall
FGlobalConfigurationConsoleCommandRouter::FGlobalConfigurationConsoleCommandRouter
          (FGlobalConfigurationConsoleCommandRouter *this)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ConsoleCommand");
  IGlobalConfigurationRouter::IGlobalConfigurationRouter
            ((IGlobalConfigurationRouter *)this,&local_18,0x7fffffff);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7FGlobalConfigurationConsoleCommandRouter__6B_;
  return this;
}

// GetAllDataFromRouter @ 14e9b8540

void __thiscall
FGlobalConfigurationConsoleCommandRouter::GetAllDataFromRouter
          (FGlobalConfigurationConsoleCommandRouter *this,
          TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
          *param_1)

{
  TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
  ::operator=(param_1,&GlobalConfigurationConfigRouter_Private::StoredData);
  return;
}

// TryGetDataFromRouter @ 14e9b9ea0

TSharedPtr<FJsonValue,1> * __thiscall
FGlobalConfigurationConsoleCommandRouter::TryGetDataFromRouter
          (FGlobalConfigurationConsoleCommandRouter *this,
          TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar4 = TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                      *)&GlobalConfigurationConfigRouter_Private::StoredData,uVar3,param_1);
  if (iVar4 != -1) {
    lVar1 = GlobalConfigurationConfigRouter_Private::StoredData._0_8_ + (longlong)iVar4 * 0x28;
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FJsonValue *)*puVar6;
      pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FJsonValue *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

