// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// Poll @ 1446c6290

bool __thiscall FRHIGPUFence::Poll(FRHIGPUFence *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1.GPUMask != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUMask == FRHIGPUMask::GPU0()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x977,
                       L"The current platform RHI does not implement MGPU support for RHI GPU fences."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001446c62cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x20))(this);
  return (bool)uVar3;
}

