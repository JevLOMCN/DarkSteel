// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Init @ 148b5d070

bool __thiscall FScreenSaverInhibitor::Init(FScreenSaverInhibitor *this)

{
  return true;
}

// Run @ 148b740e0

uint __thiscall FScreenSaverInhibitor::Run(FScreenSaverInhibitor *this)

{
  atomic<bool> aVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = __real_3f800000;
  aVar1 = this->bEnabled;
  do {
    if (aVar1 == (atomic<bool>)0x0) {
      return 0;
    }
    iVar3 = 0;
    do {
      if (this->bEnabled == (atomic<bool>)0x0) break;
      FWindowsPlatformProcess::Sleep(fVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x32);
    FWindowsPlatformApplicationMisc::PreventScreenSaver();
    aVar1 = this->bEnabled;
  } while( true );
}

// Stop @ 148b78fa0

void __thiscall FScreenSaverInhibitor::Stop(FScreenSaverInhibitor *this)

{
  this->bEnabled = (atomic<bool>)0x0;
  return;
}

