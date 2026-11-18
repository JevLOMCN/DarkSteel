// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 1

// FTrackedView @ 14de70980

FTrackedView * __thiscall FTrackedView::FTrackedView(FTrackedView *this,FTrackedView *param_1)

{
  FRHITexture *this_00;
  
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->Texture).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->Texture).Reference;
  (this->Texture).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->ViewKey = param_1->ViewKey;
  return this;
}

