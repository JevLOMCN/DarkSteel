// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1492626d0

UScriptStruct * __cdecl FNiagaraEventGeneratorProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties,
                         (UObject *)pUVar1,L"NiagaraEventGeneratorProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.OuterSingleton;
}

// FNiagaraEventGeneratorProperties @ 1492764a0

FNiagaraEventGeneratorProperties * __thiscall
FNiagaraEventGeneratorProperties::FNiagaraEventGeneratorProperties
          (FNiagaraEventGeneratorProperties *this,FNiagaraEventGeneratorProperties *param_1)

{
  FNiagaraDataSetCompiledData *pFVar1;
  int *piVar2;
  TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  FScriptContainerElement *_Src;
  FNiagaraVariableLayoutInfo *pFVar7;
  undefined3 uVar8;
  
  pFVar1 = &this->DataSetCompiledData;
  this->MaxEventsPerFrame = param_1->MaxEventsPerFrame;
  this->ID = param_1->ID;
  (pFVar1->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DataSetCompiledData).Variables.ArrayMax;
  iVar5 = (param_1->DataSetCompiledData).Variables.ArrayNum;
  _Src = (param_1->DataSetCompiledData).Variables.AllocatorInstance.Data;
  (this->DataSetCompiledData).Variables.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,piVar2);
    memcpy((pFVar1->Variables).AllocatorInstance.Data,_Src,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &(this->DataSetCompiledData).VariableLayouts;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DataSetCompiledData).VariableLayouts.ArrayMax;
  iVar5 = (param_1->DataSetCompiledData).VariableLayouts.ArrayNum;
  pFVar7 = (FNiagaraVariableLayoutInfo *)
           (param_1->DataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  (this->DataSetCompiledData).VariableLayouts.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  (this->DataSetCompiledData).ID.Name = (param_1->DataSetCompiledData).ID.Name;
  uVar8 = *(undefined3 *)&(param_1->DataSetCompiledData).ID.field_0x9;
  (this->DataSetCompiledData).ID.Type = (param_1->DataSetCompiledData).ID.Type;
  *(undefined3 *)&(this->DataSetCompiledData).ID.field_0x9 = uVar8;
  (this->DataSetCompiledData).TotalFloatComponents =
       (param_1->DataSetCompiledData).TotalFloatComponents;
  (this->DataSetCompiledData).TotalInt32Components =
       (param_1->DataSetCompiledData).TotalInt32Components;
  (this->DataSetCompiledData).TotalHalfComponents =
       (param_1->DataSetCompiledData).TotalHalfComponents;
  puVar4 = &(this->DataSetCompiledData).field_0x38;
  *(uint *)puVar4 =
       *(uint *)puVar4 ^
       ((this->DataSetCompiledData).bRequiresPersistentIDs ^
       (param_1->DataSetCompiledData).bRequiresPersistentIDs) & 1;
  (this->DataSetCompiledData).SimTarget = (param_1->DataSetCompiledData).SimTarget;
  (this->DataSetCompiledData).CachedLayoutHash = (param_1->DataSetCompiledData).CachedLayoutHash;
  return this;
}

