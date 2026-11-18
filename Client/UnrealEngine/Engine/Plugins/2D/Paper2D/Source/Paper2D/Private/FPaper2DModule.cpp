// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// StartupModule @ 14acde8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPaper2DModule::StartupModule(FPaper2DModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\Paper2DModule.cpp"
                         ,0x13,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FConfigCacheIni::GetVector(GConfig,L"Paper2D",L"PaperAxisX",&PaperAxisX,&GEngineIni);
  if (!bVar2) {
    PaperAxisX.field0_0x0._s_0.X = ___xmm_00000000000000003ff0000000000000;
    PaperAxisX.field0_0x0._s_0.Y = _UNK_150689518;
    PaperAxisX.field0_0x0._s_0.Z = 0.0;
  }
  bVar2 = FConfigCacheIni::GetVector(GConfig,L"Paper2D",L"PaperAxisY",&PaperAxisY,&GEngineIni);
  if (!bVar2) {
    PaperAxisY.field0_0x0._s_0.Z = __real_3ff0000000000000;
    PaperAxisY.field0_0x0._s_0.X = 0.0;
    PaperAxisY.field0_0x0._s_0.Y = 0.0;
  }
  PaperAxisZ.field0_0x0._s_0.X =
       PaperAxisY.field0_0x0._s_0.Z * PaperAxisX.field0_0x0._s_0.Y -
       PaperAxisX.field0_0x0._s_0.Z * PaperAxisY.field0_0x0._s_0.Y;
  PaperAxisZ.field0_0x0._s_0.Y =
       PaperAxisX.field0_0x0._s_0.Z * PaperAxisY.field0_0x0._s_0.X -
       PaperAxisY.field0_0x0._s_0.Z * PaperAxisX.field0_0x0._s_0.X;
  PaperAxisZ.field0_0x0._s_0.Z =
       PaperAxisX.field0_0x0._s_0.X * PaperAxisY.field0_0x0._s_0.Y -
       PaperAxisX.field0_0x0._s_0.Y * PaperAxisY.field0_0x0._s_0.X;
  FPaperSpriteTangents::SetTangentsFromPaperAxes();
  return;
}

// ShutdownModule @ 14acdea20

void __thiscall FPaper2DModule::ShutdownModule(FPaper2DModule *this)

{
  return;
}

