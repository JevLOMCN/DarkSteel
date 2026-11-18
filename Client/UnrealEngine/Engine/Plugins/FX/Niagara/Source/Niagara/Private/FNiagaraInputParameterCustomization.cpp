// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraInputParameterCustomization @ 149025f90

void __thiscall
FNiagaraInputParameterCustomization::~FNiagaraInputParameterCustomization
          (FNiagaraInputParameterCustomization *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FWidgetSegmentValueOverride,int>
            ((FWidgetSegmentValueOverride *)(this->SegmentValueOverrides).AllocatorInstance.Data,
             (this->SegmentValueOverrides).ArrayNum);
  pFVar1 = (this->SegmentValueOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraWidgetNamedIntegerInputValue,int>
            ((FNiagaraWidgetNamedIntegerInputValue *)
             (this->EnumStyleDropdownValues).AllocatorInstance.Data,
             (this->EnumStyleDropdownValues).ArrayNum);
  pFVar1 = (this->EnumStyleDropdownValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWidgetNamedInputValue,int>
            ((FWidgetNamedInputValue *)(this->InputDropdownValues).AllocatorInstance.Data,
             (this->InputDropdownValues).ArrayNum);
  pFVar1 = (this->InputDropdownValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 149410660

UScriptStruct * __cdecl FNiagaraInputParameterCustomization::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization,
                         (UObject *)pUVar1,L"NiagaraInputParameterCustomization");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.OuterSingleton;
}

// operator= @ 14942d180

FNiagaraInputParameterCustomization * __thiscall
FNiagaraInputParameterCustomization::operator=
          (FNiagaraInputParameterCustomization *this,FNiagaraInputParameterCustomization *param_1)

{
  TArray<FWidgetNamedInputValue,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNiagaraWidgetNamedIntegerInputValue,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FWidgetSegmentValueOverride,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FWidgetNamedInputValue *pFVar6;
  FNiagaraWidgetNamedIntegerInputValue *pFVar7;
  FWidgetSegmentValueOverride *pFVar8;
  
  this->WidgetType = param_1->WidgetType;
  pTVar1 = &this->InputDropdownValues;
  this->bHasMinValue = param_1->bHasMinValue;
  this->MinValue = param_1->MinValue;
  this->bHasMaxValue = param_1->bHasMaxValue;
  this->MaxValue = param_1->MaxValue;
  this->bHasStepWidth = param_1->bHasStepWidth;
  this->StepWidth = param_1->StepWidth;
  if (pTVar1 != &param_1->InputDropdownValues) {
    DestructItems<FWidgetNamedInputValue,int>
              ((FWidgetNamedInputValue *)(pTVar1->AllocatorInstance).Data,
               (this->InputDropdownValues).ArrayNum);
    iVar5 = (param_1->InputDropdownValues).ArrayNum;
    piVar2 = &(this->InputDropdownValues).ArrayMax;
    pFVar6 = (FWidgetNamedInputValue *)(param_1->InputDropdownValues).AllocatorInstance.Data;
    (this->InputDropdownValues).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FWidgetNamedInputValue,FWidgetNamedInputValue,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar3 = &this->EnumStyleDropdownValues;
  if (pTVar3 != &param_1->EnumStyleDropdownValues) {
    DestructItems<FNiagaraWidgetNamedIntegerInputValue,int>
              ((FNiagaraWidgetNamedIntegerInputValue *)(pTVar3->AllocatorInstance).Data,
               (this->EnumStyleDropdownValues).ArrayNum);
    iVar5 = (param_1->EnumStyleDropdownValues).ArrayNum;
    piVar2 = &(this->EnumStyleDropdownValues).ArrayMax;
    pFVar7 = (FNiagaraWidgetNamedIntegerInputValue *)
             (param_1->EnumStyleDropdownValues).AllocatorInstance.Data;
    (this->EnumStyleDropdownValues).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FNiagaraWidgetNamedIntegerInputValue,FNiagaraWidgetNamedIntegerInputValue,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  pTVar4 = &this->SegmentValueOverrides;
  this->MaxSegmentsPerRow = param_1->MaxSegmentsPerRow;
  if (pTVar4 != &param_1->SegmentValueOverrides) {
    DestructItems<FWidgetSegmentValueOverride,int>
              ((FWidgetSegmentValueOverride *)(pTVar4->AllocatorInstance).Data,
               (this->SegmentValueOverrides).ArrayNum);
    iVar5 = (param_1->SegmentValueOverrides).ArrayNum;
    piVar2 = &(this->SegmentValueOverrides).ArrayMax;
    pFVar8 = (FWidgetSegmentValueOverride *)(param_1->SegmentValueOverrides).AllocatorInstance.Data;
    (this->SegmentValueOverrides).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FWidgetSegmentValueOverride,FWidgetSegmentValueOverride,int>
                ((pTVar4->AllocatorInstance).Data,pFVar8,iVar5);
    }
  }
  this->bBroadcastValueChangesOnCommitOnly = param_1->bBroadcastValueChangesOnCommitOnly;
  return this;
}

