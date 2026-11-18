// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 14809b1a0

void __thiscall FNetFieldExportGroup::CountBytes(FNetFieldExportGroup *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->PathName).Data.ArrayNum * 2,
             (longlong)(this->PathName).Data.ArrayMax * 2);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->NetFieldExports).ArrayNum * 0x28,
             (longlong)(this->NetFieldExports).ArrayMax * 0x28);
  iVar2 = (this->NetFieldExports).ArrayNum;
  pFVar3 = (this->NetFieldExports).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->NetFieldExports).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNetFieldExport_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

