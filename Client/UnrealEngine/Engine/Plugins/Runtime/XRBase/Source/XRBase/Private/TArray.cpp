// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// Reset @ 14cf9a230

void __thiscall
TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FStereoLayerToRender *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FStereoLayerToRender *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

