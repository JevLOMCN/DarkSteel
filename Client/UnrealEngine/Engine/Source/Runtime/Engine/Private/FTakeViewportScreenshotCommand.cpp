// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885fdc0

bool __thiscall FTakeViewportScreenshotCommand::Update(FTakeViewportScreenshotCommand *this)

{
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FScreenshotRequest::RequestScreenshot
            (&this->ScreenshotFileName,false,false,false,(TIntRect<int> *)&local_18._s_0);
  return true;
}

