// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Dev @ 148997c00

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

bool __thiscall
FLogVisualizerExec::Exec_Dev
          (FLogVisualizerExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FVisualLogger *pFVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  TSharedRef<FGlobalTabmanager,1> *pTVar8;
  UWorldProxy UVar9;
  ForAnyElementType FVar10;
  FName FVar11;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  FString local_80;
  FString local_70;
  FName local_60;
  FName local_58;
  TReferenceControllerBase<1> *local_50;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  bVar3 = FParse::Command(&local_88,L"VISLOG",true);
  if (!bVar3) {
    bVar3 = FParse::Command(&local_88,L"LogNavOctree",true);
    if (bVar3) {
      local_48.IsValid = '\0';
      if ((GEngine == (UEngine *)0x0) ||
         ((UVar9.World = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull),
          UVar9.World == (UWorld *)0x0 &&
          ((GEngine == (UEngine *)0x0 ||
           (UVar9.World = (UWorld *)(**(code **)(GEngine->_padding_ + 0x180))(),
           UVar9.World == (UWorld *)0x0)))))) {
        UVar9.World = GWorld.World;
      }
      FVisualLogger::NavigationDataDump
                ((UObject *)UVar9.World,(FName *)&LogNavigation.field_0x4,Log,&local_48);
    }
    return false;
  }
  FParse::Token(&local_80,&local_88,false);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar10.Data = local_80.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"record");
  if (iVar4 == 0) {
    pFVar5 = FVisualLogger::Get();
    FVisualLogger::SetIsRecordingToFile(pFVar5,true);
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar10.Data = local_80.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"stop");
    if (iVar4 == 0) {
      pFVar5 = FVisualLogger::Get();
      FVisualLogger::SetIsRecordingToFile(pFVar5,false);
    }
    else {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar10.Data = local_80.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"disableallbut");
      if (iVar4 != 0) {
        if (local_80.Data.ArrayNum < 2) {
          FModuleManager::Get();
          pFVar6 = ::FName::FName(&local_60,"LogVisualizer");
          FVar11 = *pFVar6;
          this_00 = FModuleManager::Get();
          pIVar7 = FModuleManager::LoadModule(this_00,FVar11,None);
          if (pIVar7 != (IModuleInterface *)0x0) {
            pTVar8 = FGlobalTabmanager::Get();
            pFVar1 = pTVar8->Object;
            pcVar2 = *(code **)(pFVar1->_padding_ + 8);
            pFVar6 = ::FName::FName(&local_60,L"VisualLogger");
            local_70.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
            local_70.Data.ArrayNum = -1;
            local_70.Data.ArrayMax._0_1_ = 1;
            (*pcVar2)(pFVar1,&local_58,&local_70,0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50);
            goto LAB_148997dcb;
          }
        }
        if (local_80.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
        return false;
      }
      FParse::Token(&local_70,&local_88,true);
      pFVar5 = FVisualLogger::Get();
      pFVar5->bBlockedAllCategories = true;
      pFVar5 = FVisualLogger::Get();
      FVar11 = (FName)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar11 = (FName)local_70.Data.AllocatorInstance;
      }
      pFVar6 = ::FName::FName(&local_60,(wchar_t *)FVar11);
      local_58 = *pFVar6;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (&pFVar5->CategoryAllowList,&local_58);
      if ((FName)local_70.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_148997dcb:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return true;
}

