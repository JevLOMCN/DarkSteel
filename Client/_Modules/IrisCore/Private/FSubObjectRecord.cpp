// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FSubObjectRecord @ 1442f6ed0

FSubObjectRecord * __thiscall
UE::Net::Private::FReplicationRecord::FSubObjectRecord::FSubObjectRecord
          (FSubObjectRecord *this,FSubObjectRecord *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->SubObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SubObjectInfos).ArrayMax;
  iVar2 = (param_1->SubObjectInfos).ArrayNum;
  _Src = (param_1->SubObjectInfos).AllocatorInstance.Data;
  (this->SubObjectInfos).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->SubObjectInfos).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  return this;
}

