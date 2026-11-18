// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FRDGEventName @ 145f02890

FRDGEventName * __thiscall FRDGEventName::FRDGEventName(FRDGEventName *this,FRDGEventName *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->FormattedEventName;
  this->EventFormat = param_1->EventFormat;
  piVar2 = &(this->FormattedEventName).Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->FormattedEventName).Data.ArrayNum;
  _Src = (param_1->FormattedEventName).Data.AllocatorInstance.Data;
  (this->FormattedEventName).Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

