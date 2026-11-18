// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149376540

UScriptStruct * __cdecl FNiagaraCompilerTag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompilerTag,(UObject *)pUVar1,
                         L"NiagaraCompilerTag");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.OuterSingleton;
}

// FindTag @ 1493a17e0

FNiagaraCompilerTag * __cdecl
FNiagaraCompilerTag::FindTag
          (TArray<FNiagaraCompilerTag,TSizedDefaultAllocator<32>_> *param_1,
          FNiagaraVariableBase *param_2)

{
  int iVar1;
  FNiagaraCompilerTag *pFVar2;
  FNiagaraCompilerTag *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FNiagaraCompilerTag *)(param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraCompilerTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((FName)(pFVar2->Variable)._padding_ == param_2->Name) &&
       ((int)(pFVar2->Variable)._padding_ == (param_2->TypeDefHandle).RegisteredTypeIndex)) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FNiagaraCompilerTag *)0x0;
}

// FindTag @ 1493a1860

FNiagaraCompilerTag * __cdecl
FNiagaraCompilerTag::FindTag
          (TArray<FNiagaraCompilerTag,TSizedDefaultAllocator<32>_> *param_1,
          FNiagaraVariableBase *param_2)

{
  int iVar1;
  FNiagaraCompilerTag *pFVar2;
  FNiagaraCompilerTag *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FNiagaraCompilerTag *)(param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraCompilerTag_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((FName)(pFVar2->Variable)._padding_ == param_2->Name) &&
       ((int)(pFVar2->Variable)._padding_ == (param_2->TypeDefHandle).RegisteredTypeIndex)) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FNiagaraCompilerTag *)0x0;
}

