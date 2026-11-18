// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ODSCLogMissedMaterials @ 1480b9900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FODSCManagerAccess::ODSCLogMissedMaterials(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UGameViewportClient *pUVar1;
  int iVar2;
  ulonglong uVar3;
  UConsole *pUVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FOutputDevice local_38;
  FString local_28;
  UConsole *local_18;
  
  if ((GODSCManager != (FODSCManager *)0x0) && (GODSCManager->Thread != (FODSCThread *)0x0)) {
    pUVar4 = (UConsole *)0x0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FODSCThread::RetrieveMissedMaterials(GODSCManager->Thread,&local_48);
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if ((pUVar1 != (UGameViewportClient *)0x0) &&
       ((pUVar4 = (pUVar1->ViewportConsole).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false && (pUVar4 != (UConsole *)0x0)))) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    ::FString::FString(&local_28,L"");
    FOutputDevice::FOutputDevice(&local_38);
    local_38._padding_ = (longlong)&___7FConsoleOutputDevice__6B_;
    iVar2 = local_48.ArrayNum;
    uVar3 = (ulonglong)local_48.ArrayNum;
    local_38.bAutoEmitLineTerminator = false;
    pFVar6 = local_48.AllocatorInstance.Data + uVar3 * 0x10;
    FVar5.Data = local_48.AllocatorInstance.Data;
    local_18 = pUVar4;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar5.Data == pFVar6) break;
      FOutputDevice::CategorizedLogfImpl
                (&local_38,(FName *)&LogODSC.field_0x4,Error,L"ODSC missed material: %s");
      uVar3 = local_48._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 0x10;
    }
    FOutputDevice::~FOutputDevice(&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

