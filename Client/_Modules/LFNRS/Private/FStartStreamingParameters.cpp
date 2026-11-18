// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 1

// FStartStreamingParameters @ 146c90f00

FStartStreamingParameters * __thiscall
FStartStreamingParameters::FStartStreamingParameters
          (FStartStreamingParameters *this,FStartStreamingParameters *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString(&this->CustomName,&param_1->CustomName);
  ::FString::FString(&this->FriendlyName,&param_1->FriendlyName);
  ::FString::FString(&this->DemoURL,&param_1->DemoURL);
  pTVar1 = &this->UserIndices;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UserIndices).ArrayMax;
  iVar3 = (param_1->UserIndices).ArrayNum;
  _Src = (param_1->UserIndices).AllocatorInstance.Data;
  (this->UserIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  ::FString::FString(&(this->ReplayVersion).AppString,&(param_1->ReplayVersion).AppString);
  (this->ReplayVersion).NetworkVersion = (param_1->ReplayVersion).NetworkVersion;
  (this->ReplayVersion).Changelist = (param_1->ReplayVersion).Changelist;
  this->bRecord = param_1->bRecord;
  return this;
}

