// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// ~ILiveLinkFramePreProcessorWorker @ 14d016b20

void __thiscall
ILiveLinkFramePreProcessorWorker::~ILiveLinkFramePreProcessorWorker
          (ILiveLinkFramePreProcessorWorker *this)

{
  return;
}

// PreProcessFrame @ 14d06d0c0

bool __thiscall
ILiveLinkFramePreProcessorWorker::PreProcessFrame
          (ILiveLinkFramePreProcessorWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d06d0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x18))(this,param_2);
  return (bool)uVar1;
}

// PreProcessFrame @ 14d06d0d0

bool __thiscall
ILiveLinkFramePreProcessorWorker::PreProcessFrame
          (ILiveLinkFramePreProcessorWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  return true;
}

