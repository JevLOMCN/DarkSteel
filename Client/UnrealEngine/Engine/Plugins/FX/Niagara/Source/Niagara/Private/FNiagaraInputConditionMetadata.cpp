// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FNiagaraInputConditionMetadata @ 149022590

FNiagaraInputConditionMetadata * __thiscall
FNiagaraInputConditionMetadata::FNiagaraInputConditionMetadata
          (FNiagaraInputConditionMetadata *this,FNiagaraInputConditionMetadata *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->TargetValues;
  this->InputName = param_1->InputName;
  piVar2 = &(this->TargetValues).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TargetValues).ArrayNum;
  pFVar4 = (param_1->TargetValues).AllocatorInstance.Data;
  (this->TargetValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  return this;
}

// StaticStruct @ 1494103a0

UScriptStruct * __cdecl FNiagaraInputConditionMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata,(UObject *)pUVar1,
                         L"NiagaraInputConditionMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.OuterSingleton;
}

// operator= @ 14942d0e0

FNiagaraInputConditionMetadata * __thiscall
FNiagaraInputConditionMetadata::operator=
          (FNiagaraInputConditionMetadata *this,FNiagaraInputConditionMetadata *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->TargetValues;
  this->InputName = param_1->InputName;
  if (pTVar1 != &param_1->TargetValues) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->TargetValues).ArrayNum);
    iVar3 = (param_1->TargetValues).ArrayNum;
    piVar2 = &(this->TargetValues).ArrayMax;
    pFVar4 = (param_1->TargetValues).AllocatorInstance.Data;
    (this->TargetValues).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
    }
  }
  return this;
}

