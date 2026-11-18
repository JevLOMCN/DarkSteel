// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetActiveGPUMask @ 1454b94a0

void __thiscall
FTextureRenderTargetResource::SetActiveGPUMask
          (FTextureRenderTargetResource *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                       ,0x19c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->GPUMask).GPUMask & param_1.GPUMask) != param_1.GPUMask) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUMask.ContainsAll(InGPUMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                       ,0x19d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ActiveGPUMask).GPUMask = param_1.GPUMask;
  return;
}

