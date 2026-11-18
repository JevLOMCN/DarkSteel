// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 1476e9da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
CollisionResponseConsoleCommands::FSortComponentsWithResponseToProfile::operator()
          (FSortComponentsWithResponseToProfile *this,UPrimitiveComponent *param_1,
          UPrimitiveComponent *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  lVar1 = *(longlong *)&param_1->field_0x20;
  if ((lVar1 == 0) || (*(longlong *)&param_2->field_0x20 == 0)) {
    bVar2 = false;
  }
  else if ((this->RequiredResponse != ECR_Overlap) ||
          (bVar2 = param_1->bGenerateOverlapEvents, bVar2 == param_2->bGenerateOverlapEvents)) {
    local_res10[0] = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
    ::FName::ToString(local_res10,&local_18);
    local_res10[0] = *(FName *)(lVar1 + 0x18);
    ::FName::ToString(local_res10,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return SUB41((uint)iVar3 >> 0x1f,0);
  }
  return bVar2;
}

