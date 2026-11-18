// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FGpuAttributeHelper @ 148ea3160

FGpuAttributeHelper * __thiscall
NDIDataTableLocal::FGpuAttributeHelper::FGpuAttributeHelper
          (FGpuAttributeHelper *this,
          TArrayView<FNiagaraDataInterfaceGeneratedFunction_const_,int> *param_1)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  int *piVar5;
  FNiagaraDataInterfaceGeneratedFunction *pFVar6;
  FNiagaraDataInterfaceGeneratedFunction *pFVar7;
  undefined1 local_res8 [8];
  FNiagaraVariableBase local_58;
  FNiagaraTypeDefinition local_48;
  
  pFVar7 = param_1->DataPtr;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  pFVar6 = pFVar7 + param_1->ArrayNum;
  if (pFVar7 != pFVar6) {
    piVar5 = &(pFVar7->VariadicOutputs).ArrayNum;
    do {
      iVar1 = *piVar5;
      pFVar3 = (FName *)(((TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *)
                         (piVar5 + -2))->AllocatorInstance).Data;
      pFVar4 = pFVar3 + (longlong)iVar1 * 2;
      while( true ) {
        if (*piVar5 != iVar1) {
          `TCheckedPointerIterator<FNiagaraVariableCommonReference_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar3 == pFVar4) break;
        local_58.Name = *pFVar3;
        pFVar2 = FNiagaraTypeDefinition::FNiagaraTypeDefinition(&local_48,(UObject *)pFVar3[1]);
        local_58.TypeDefHandle.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(&local_58.TypeDefHandle,pFVar2);
        TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FNiagaraVariableBase>(&this->Attributes,&local_58);
        pFVar3 = pFVar3 + 2;
      }
      pFVar7 = pFVar7 + 1;
      piVar5 = piVar5 + 0x14;
    } while (pFVar7 != pFVar6);
  }
  return this;
}

