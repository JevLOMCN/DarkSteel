// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 2

// OnChanged @ 148c4adb0

FChangedEvent * __thiscall FAutomationGroupFilter::OnChanged(FAutomationGroupFilter *this)

{
  return &this->ChangedEvent;
}

// PassesFilter @ 148c4adc0

bool __thiscall
FAutomationGroupFilter::PassesFilter
          (FAutomationGroupFilter *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Filters).ArrayNum;
  pFVar3 = (this->Filters).AllocatorInstance.Data;
  bVar5 = iVar1 == 0;
  bVar6 = (this->TagFilters).ArrayNum == 0;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Filters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAutomatedTestFilter_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) goto LAB_148c4ae2d;
    cVar2 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,param_1);
    if (cVar2 != '\0') break;
    pFVar3 = pFVar3 + 0x40;
  }
  bVar5 = true;
LAB_148c4ae2d:
  iVar1 = (this->TagFilters).ArrayNum;
  pFVar4 = (this->TagFilters).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->TagFilters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAutomatedTestTagFilter_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) goto LAB_148c4ae6d;
    cVar2 = (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,param_1);
    if (cVar2 != '\0') break;
    pFVar4 = pFVar4 + 0x18;
  }
  bVar6 = true;
LAB_148c4ae6d:
  if ((bVar5) && (bVar6)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

