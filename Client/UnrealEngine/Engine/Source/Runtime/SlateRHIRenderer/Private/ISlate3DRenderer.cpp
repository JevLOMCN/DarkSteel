// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// ~ISlate3DRenderer @ 145feb410

void __thiscall ISlate3DRenderer::~ISlate3DRenderer(ISlate3DRenderer *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145feb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DrawWindowToTarget_RenderThread @ 146000f90

void __thiscall
ISlate3DRenderer::DrawWindowToTarget_RenderThread
          (ISlate3DRenderer *this,FRHICommandListImmediate *param_1,
          FRenderThreadUpdateContext *param_2)

{
  return;
}

// GetDrawBuffer @ 14600c710

FSlateDrawBuffer * __thiscall ISlate3DRenderer::GetDrawBuffer(ISlate3DRenderer *this)

{
  FSlateDrawBuffer *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014600c713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FSlateDrawBuffer *)(**(code **)(*(longlong *)this + 0x20))();
  return pFVar1;
}

