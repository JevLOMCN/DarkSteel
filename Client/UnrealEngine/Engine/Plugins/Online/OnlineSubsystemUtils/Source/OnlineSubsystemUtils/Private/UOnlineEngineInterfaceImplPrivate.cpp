// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ConvertToCompatibilityOnlineIdentifier @ 14ec644b0

FName __cdecl
UOnlineEngineInterfaceImplPrivate::ConvertToCompatibilityOnlineIdentifier(FName param_1)

{
  FName *pFVar1;
  int iVar2;
  FName in_RDX;
  ForAnyElementType FVar3;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  *(undefined8 *)param_1 = 0;
  local_res10 = in_RDX;
  ::FName::ToString(&local_res10,&local_28);
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  do {
    if (FVar3.Data == local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 2) {
LAB_14ec64500:
      *(FName *)param_1 = local_res10;
LAB_14ec64508:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return param_1;
    }
    if (*(short *)FVar3.Data == 0x3a) {
      iVar2 = (int)((longlong)FVar3.Data - (longlong)local_28.Data.AllocatorInstance.Data >> 1);
      if (iVar2 != -1) {
        ::FString::RightChop(&local_28,&local_18,iVar2 + 1);
        iVar2 = local_18.Data.ArrayNum + -1;
        if (local_18.Data.ArrayNum == 0) {
          iVar2 = 0;
        }
        pFVar1 = ::FName::FName(&local_res8,iVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                                FNAME_Add);
        *(FName *)param_1 = *pFVar1;
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        goto LAB_14ec64508;
      }
      goto LAB_14ec64500;
    }
    FVar3.Data = FVar3.Data + 2;
  } while( true );
}

