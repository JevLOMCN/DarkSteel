// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Exec_Runtime @ 1421f29b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FScriptAuditExec::Exec_Runtime
          (FScriptAuditExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  wchar_t *local_res18 [2];
  FString local_c8;
  TFieldIterator<UFunction> local_b8;
  TObjectIterator<UClass> local_a0;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"ScriptAudit",true);
  if (!bVar2) {
    return false;
  }
  FParse::Token(&local_c8,local_res18,false);
  ::FString::FString(&local_88,L"LongestFunctions");
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (local_c8.Data.ArrayNum < 2) {
      bVar2 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar2 = iVar4 == 0;
    }
  }
  else {
    bVar2 = local_c8.Data.ArrayNum + local_88.Data.ArrayNum == 1;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    iVar4 = 0x14;
    FParse::Token(&local_78,local_res18,false);
    if (1 < local_78.Data.ArrayNum) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar8.Data = local_78.Data.AllocatorInstance.Data;
      }
      iVar4 = _wtoi((wchar_t *)FVar8.Data);
    }
    OutputLongestFunctions(param_3,iVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::FString(&local_68,L"FrequentFunctionsCalled");
    if (local_c8.Data.ArrayNum == local_68.Data.ArrayNum) {
      if (local_c8.Data.ArrayNum < 2) {
        bVar2 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_68.Data.AllocatorInstance.Data);
        bVar2 = iVar4 == 0;
      }
    }
    else {
      bVar2 = local_c8.Data.ArrayNum + local_68.Data.ArrayNum == 1;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      iVar4 = 0x14;
      FParse::Token(&local_58,local_res18,false);
      if (1 < local_58.Data.ArrayNum) {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar8.Data = local_58.Data.AllocatorInstance.Data;
        }
        iVar4 = _wtoi((wchar_t *)FVar8.Data);
      }
      OutputMostFrequentlyCalledFunctions(param_3,iVar4);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::FString(&local_48,L"FrequentInstructions");
      if (local_c8.Data.ArrayNum == local_48.Data.ArrayNum) {
        if (local_c8.Data.ArrayNum < 2) {
          bVar2 = true;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                             (wchar_t *)local_48.Data.AllocatorInstance.Data);
          bVar2 = iVar4 == 0;
        }
      }
      else {
        bVar2 = local_c8.Data.ArrayNum + local_48.Data.ArrayNum == 1;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        iVar4 = 0x14;
        FParse::Token(&local_38,local_res18,false);
        if (1 < local_38.Data.ArrayNum) {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar8.Data = local_38.Data.AllocatorInstance.Data;
          }
          iVar4 = _wtoi((wchar_t *)FVar8.Data);
        }
        OutputMostFrequentlyUsedInstructions(param_3,iVar4);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::FString(&local_28,L"TotalBytecodeSize");
        if (local_c8.Data.ArrayNum == local_28.Data.ArrayNum) {
          if (local_c8.Data.ArrayNum < 2) {
            bVar2 = true;
          }
          else {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                               (wchar_t *)local_28.Data.AllocatorInstance.Data);
            bVar2 = iVar4 == 0;
          }
        }
        else {
          bVar2 = local_c8.Data.ArrayNum + local_28.Data.ArrayNum == 1;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (!bVar2) {
          if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          return false;
        }
        local_a0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ObjectArray.ArrayNum = 0;
        local_a0.ObjectArray.ArrayMax = 0;
        local_a0.Index = 0xffffffff;
        EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        GetObjectsOfClass(pUVar7,&local_a0.ObjectArray,true,RF_ClassDefaultObject,
                          EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<UClass>::Advance(&local_a0);
          lVar9 = (longlong)local_a0.Index;
          if ((local_a0.Index < 0) || (local_a0.ObjectArray.ArrayNum <= local_a0.Index)) break;
          uVar6 = 0;
          if (local_a0.Index < local_a0.ObjectArray.ArrayNum) {
            uVar6 = (uint)~local_a0.Index >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_b8.Struct = *(UStruct **)(local_a0.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
          if (local_b8.Struct == (UStruct *)0x0) {
            local_b8.Field = (UField *)0x0;
          }
          else {
            local_b8.Field = ((local_b8.Struct)->Children).field0_0x0.DebugPtr;
          }
          local_b8.InterfaceIndex = -1;
          local_b8.bIncludeSuper = false;
          local_b8.bIncludeDeprecated = true;
          local_b8.bIncludeInterface = false;
          TFieldIterator<UFunction>::IterateToNext(&local_b8);
          while (local_b8.Field != (UField *)0x0) {
            local_b8.Field = ((local_b8.Field)->Next).field0_0x0.DebugPtr;
            TFieldIterator<UFunction>::IterateToNext(&local_b8);
          }
        }
        if (local_a0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.ObjectArray.AllocatorInstance.Data);
        }
        FOutputDevice::LogfImpl(param_3,L"Total bytecode size: %d");
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return true;
}

