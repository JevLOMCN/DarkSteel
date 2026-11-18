// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 2

// StartupModule @ 14452bc30

void __thiscall FAudioExtensionsModule::StartupModule(FAudioExtensionsModule *this)

{
  FString *pFVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  FDataDrivenPlatformInfoRegistry::GetSortedPlatformNames(&local_48,TruePlatformsOnly);
  iVar5 = local_48.ArrayNum;
  pFVar4 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8);
  FVar7.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res10)
      ;
    }
    if ((FName *)FVar7.Data == pFVar4) break;
    local_res10 = *(FName *)FVar7.Data;
    pFVar1 = ::FName::ToString(&local_res10,&local_28);
    ::FString::ConcatFC(&local_38,pFVar1,L"AudioFeatures");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar2 = FModuleManager::Get();
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(local_res18,(wchar_t *)FVar6.Data);
    FModuleManager::LoadModule(pFVar2,*pFVar3,None);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar7.Data = FVar7.Data + 8;
  }
  pFVar2 = FModuleManager::Get();
  pFVar4 = ::FName::FName(&local_res10,L"SignalProcessing");
  FModuleManager::LoadModuleChecked(pFVar2,*pFVar4);
  pFVar2 = FModuleManager::Get();
  pFVar4 = ::FName::FName(&local_res10,L"AudioMixerCore");
  FModuleManager::LoadModuleChecked(pFVar2,*pFVar4);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// Get @ 144533350

FAudioExtensionsModule * __cdecl FAudioExtensionsModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,L"AudioExtensions");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModule(this,FVar1,None);
  return (FAudioExtensionsModule *)pIVar3;
}

