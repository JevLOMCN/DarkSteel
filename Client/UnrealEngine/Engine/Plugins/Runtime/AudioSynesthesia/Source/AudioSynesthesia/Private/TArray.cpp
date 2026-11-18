// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 1

// TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_><FLKFSNRTResults_const_,int> @ 14d814d40

TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_>::
TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_><FLKFSNRTResults_const_,int>
          (TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FLKFSNRTResults_const_,int> *param_1)

{
  int iVar1;
  FLKFSNRTResults *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
  return this;
}

