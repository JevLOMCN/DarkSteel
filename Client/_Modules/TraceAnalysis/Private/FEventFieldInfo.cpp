// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// GetName @ 14d39ce80

char * __thiscall UE::Trace::IAnalyzer::FEventFieldInfo::GetName(FEventFieldInfo *this)

{
  return (char *)(this + *(ushort *)(this + 8));
}

// GetSize @ 14d39e460

uchar __thiscall UE::Trace::IAnalyzer::FEventFieldInfo::GetSize(FEventFieldInfo *this)

{
  return (uchar)this[6];
}

// GetType @ 14d39ff90

EType __thiscall UE::Trace::IAnalyzer::FEventFieldInfo::GetType(FEventFieldInfo *this)

{
  FEventFieldInfo FVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  EType EVar5;
  
  if (*(int *)(this + 0xc) != 0) {
    sVar2 = *(short *)(this + 6);
    if (sVar2 == 1) {
      return Reference8;
    }
    if (sVar2 == 2) {
      return Reference16;
    }
    if (sVar2 == 4) {
      return Reference32;
    }
    if (sVar2 == 8) {
      return Reference64;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                       ,0x2af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  FVar1 = this[10];
  if (((byte)this[0xb] & 0x7f) == 8) {
    return (FVar1 != (FEventFieldInfo)0x1) + AnsiString;
  }
  if ('\0' < (char)FVar1) {
    return Integer;
  }
  EVar5 = None;
  if ((char)FVar1 < '\0') {
    EVar5 = Float;
  }
  return EVar5;
}

// IsArray @ 14d3a05c0

bool __thiscall UE::Trace::IAnalyzer::FEventFieldInfo::IsArray(FEventFieldInfo *this)

{
  return (bool)((byte)this[0xb] >> 7);
}

// IsSigned @ 14d3a06f0

bool __thiscall UE::Trace::IAnalyzer::FEventFieldInfo::IsSigned(FEventFieldInfo *this)

{
  return (bool)((byte)this[0xb] >> 4 & 1);
}

