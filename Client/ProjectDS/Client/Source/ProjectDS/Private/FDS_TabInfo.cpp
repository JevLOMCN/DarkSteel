// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_TabInfo @ 14be72e60

FDS_TabInfo * __thiscall FDS_TabInfo::FDS_TabInfo(FDS_TabInfo *this,FDS_Text *param_1)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDS_TextFormatArg *pFVar4;
  
  this->TabIndex = -1;
  this->TabValue = -1;
  (this->TabText).StringTableType = param_1->StringTableType;
  (this->TabText).StringTableID = param_1->StringTableID;
  (this->TabText).StringEnumTableNameID = param_1->StringEnumTableNameID;
  (this->TabText).DateTime.Ticks = (param_1->DateTime).Ticks;
  (this->TabText).TimeSpan.Ticks = (param_1->TimeSpan).Ticks;
  (this->TabText).TimeExpressionType = param_1->TimeExpressionType;
  (this->TabText).IsExpression = param_1->IsExpression;
  ::FString::FString(&(this->TabText).UniqueString,&param_1->UniqueString);
  pTVar1 = &(this->TabText).FormatArgs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TabText).FormatArgs.ArrayMax;
  iVar3 = (param_1->FormatArgs).ArrayNum;
  pFVar4 = (FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data;
  (this->TabText).FormatArgs.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->IsSelected = false;
  this->IsDisabled = false;
  this->IsReddot = false;
  return this;
}

