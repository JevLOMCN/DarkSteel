// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// GetAuxData @ 14d39c6c0

FAuxData * __thiscall UE::Trace::FEventDataInfo::GetAuxData(FEventDataInfo *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FDispatch *pFVar3;
  undefined1 *puVar4;
  FAuxDataCollector *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = this->AuxCollector;
  if (pFVar5 == (FAuxDataCollector *)0x0) {
LAB_14d39c76f:
    pFVar5 = (FAuxDataCollector *)0x0;
  }
  else {
    puVar1 = &pFVar5->field_0x88;
    iVar2 = *(int *)puVar1;
    if (*(FAuxDataCollector **)&pFVar5->field_0x80 != (FAuxDataCollector *)0x0) {
      pFVar5 = *(FAuxDataCollector **)&pFVar5->field_0x80;
    }
    puVar4 = &pFVar5->field_0x0;
    while( true ) {
      if (*(int *)puVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == (FAuxDataCollector *)(puVar4 + (longlong)iVar2 * 0x10)) goto LAB_14d39c76f;
      if (*(ushort *)&pFVar5->field_0xc == param_1) break;
      pFVar5 = (FAuxDataCollector *)&pFVar5->field_0x10;
    }
    if ((pFVar5->field_0xf & 2) != 0) {
      FAuxDataCollector::Defragment(this->AuxCollector,(FAuxData *)pFVar5);
    }
    pFVar3 = this->Dispatch;
    pFVar5->field_0xe = (char)pFVar3[(ulonglong)param_1 + 1].LoggerNameOffset;
    pFVar5->field_0xf =
         pFVar5->field_0xf ^
         (*(byte *)((longlong)&pFVar3[(ulonglong)param_1 + 1].LoggerNameOffset + 1) >> 4 ^
         pFVar5->field_0xf) & 1;
  }
  return (FAuxData *)pFVar5;
}

