// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetBaseName @ 147e67070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl FActorSpawnUtils::GetBaseName(FName param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  FName in_RDX;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  FName local_res10;
  FString local_18;
  
  bVar2 = IsGloballyUniqueName(in_RDX);
  if (bVar2) {
    pFVar3 = ::FName::GetPlainNameString(&local_res10,&local_18);
    iVar4 = (pFVar3->Data).ArrayNum;
    iVar7 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    if (iVar7 + -0x18 < iVar7) {
      iVar7 = iVar7 + -0x18;
    }
    iVar4 = 0;
    if (0 < iVar7) {
      iVar4 = iVar7;
    }
    ::FString::RemoveAt(pFVar3,iVar4,0x18,No);
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    pFVar5 = (FScriptContainerElement *)L"";
    if (iVar4 != 0) {
      pFVar5 = pFVar1;
    }
    ::FName::FName((FName *)param_1,(wchar_t *)pFVar5);
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pFVar3 = ::FName::GetPlainNameString(&local_res10,&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)param_1,pwVar6);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// IsGloballyUniqueName @ 147e6dec0

bool __cdecl FActorSpawnUtils::IsGloballyUniqueName(FName param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  FName local_res8;
  FString local_18;
  
  if ((param_1.Number >> 0x1e & 1) != 0) {
    local_res8 = param_1;
    ::FName::GetPlainNameString(&local_res8,&local_18);
    iVar5 = local_18.Data.ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if (0x17 < iVar7) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (iVar5 != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(FVar6.Data + (longlong)iVar7 * 2 + -0x30),L"_UAID_",6);
      if (iVar5 == 0) {
        uVar8 = 0;
        uVar9 = local_18.Data._8_8_;
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 < 0) {
code_r0x000147e6df6f:
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              );
            uVar9 = local_18.Data._8_8_;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          else {
            iVar5 = (int)uVar9 + -1;
            if ((int)uVar9 == 0) {
              iVar5 = 0;
            }
            if (iVar5 <= iVar7) goto code_r0x000147e6df6f;
          }
          uVar1 = *(ushort *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar7 * 2);
          if ((((uVar1 < 0x30) || (0x39 < uVar1)) && (5 < (ushort)(uVar1 - 0x41))) &&
             (5 < (ushort)(uVar1 - 0x61))) {
            bVar3 = false;
            goto LAB_147e6dfcf;
          }
          uVar8 = uVar8 + 1;
          if (0x11 < uVar8) {
            bVar3 = true;
LAB_147e6dfcf:
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
            return bVar3;
          }
        } while( true );
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// MakeUniqueActorName @ 147e70770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FName __cdecl
FActorSpawnUtils::MakeUniqueActorName(ULevel *param_1,UClass *param_2,FName param_3,bool param_4)

{
  ForAnyElementType FVar1;
  uint uVar2;
  DWORD DVar3;
  FName FVar4;
  UObject *pUVar5;
  FDateTime FVar6;
  int iVar7;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  char in_stack_00000028;
  FString local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  param_1->_padding_ = 0;
  if (in_stack_00000028 == '\0') {
    FVar4 = MakeUniqueObjectName
                      ((UObject *)local_res8,param_2,param_3,
                       (EUniqueObjectNameOptions)CONCAT71(in_register_00000089,param_4));
    param_1->_padding_ = *(longlong *)FVar4;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FDateTime::FDateTime(&ActorGUIDGenerator.Origin,0x7e4,1,1,0,0,0,0);
      ActorGUIDGenerator.Counter = 0;
      FWindowsPlatformMisc::GetMacAddress(&local_28);
      if (local_28.ArrayNum == 6) {
        ActorGUIDGenerator.UniqueID._4_2_ = *(undefined2 *)(local_28.AllocatorInstance.Data + 4);
        ActorGUIDGenerator.UniqueID._0_4_ = *(undefined4 *)local_28.AllocatorInstance.Data;
      }
      else if (PRIVATE_GIsRunningCommandlet == false) {
        FGenericPlatformMisc::GetEpicAccountId(&local_38);
        iVar7 = local_38.Data.ArrayNum + -1;
        FVar1.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar7 = 0;
          FVar1.Data = (FScriptContainerElement *)L"";
        }
        uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar1.Data);
        DVar3 = FWindowsPlatformProcess::GetCurrentProcessId();
        FVar6 = FDateTime::Now();
        ActorGUIDGenerator.UniqueID._4_2_ = SUB82(*(undefined8 *)FVar6.Ticks,0);
        ActorGUIDGenerator.UniqueID._0_4_ = DVar3 ^ uVar2;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        ActorGUIDGenerator.UniqueID[0] = '\0';
        ActorGUIDGenerator.UniqueID[1] = '\0';
        ActorGUIDGenerator.UniqueID[2] = '\0';
        ActorGUIDGenerator.UniqueID[3] = '\0';
        ActorGUIDGenerator.UniqueID[4] = '\0';
        ActorGUIDGenerator.UniqueID[5] = '\0';
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      _Init_thread_footer(&::_TSS0);
    }
    do {
      FVar4 = FActorGUIDGenerator::NewActorGUID(&ActorGUIDGenerator,(FName)local_res8);
      FVar4 = *(FName *)FVar4;
      param_1->_padding_ = (longlong)FVar4;
      pUVar5 = StaticFindObjectFast((UClass *)0x0,(UObject *)param_2,FVar4,None,RF_NoFlags,Borrowed)
      ;
    } while (pUVar5 != (UObject *)0x0);
  }
  return (FName)param_1;
}

