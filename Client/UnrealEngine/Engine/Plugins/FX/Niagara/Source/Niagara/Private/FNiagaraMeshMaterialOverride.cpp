// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 1492c2280

UScriptStruct * __cdecl FNiagaraMeshMaterialOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride,(UObject *)pUVar1,
                         L"NiagaraMeshMaterialOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraMeshMaterialOverride.OuterSingleton;
}

// FNiagaraMeshMaterialOverride @ 1492d12b0

FNiagaraMeshMaterialOverride * __thiscall
FNiagaraMeshMaterialOverride::FNiagaraMeshMaterialOverride(FNiagaraMeshMaterialOverride *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  FString local_38;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  uint local_14;
  
  (this->ExplicitMat).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  if (((UClass *)local_28.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_28.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_28.DebugPtr,&local_38,(UObject *)0x0,None);
  }
  iVar2 = local_38.Data.ArrayNum + -1;
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  local_14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar1.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->UserParamBinding,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  return this;
}

// SerializeFromMismatchedTag @ 149305740

bool __thiscall
FNiagaraMeshMaterialOverride::SerializeFromMismatchedTag
          (FNiagaraMeshMaterialOverride *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),this);
    return true;
  }
  return false;
}

