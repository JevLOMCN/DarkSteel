// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// GetTimecode @ 146c01160

/* WARNING: Enum "Type": Some values do not have unique names */

FTimespan __thiscall FAppMediaTimeSource::GetTimecode(FAppMediaTimeSource *this)

{
  FTimespan *in_RDX;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  FString local_28 [2];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (double)FApp::GameTime * __real_416312d000000000 + __real_3fe0000000000000;
  auVar1 = roundpd(in_XMM0,auVar1,1);
  in_RDX->Ticks = (longlong)auVar1._0_8_;
  if (6 < (byte)LogMediaTimeSource._0_1_) {
    FTimespan::ToString(in_RDX,local_28,L"%h:%m:%s.%t");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaTimeSource);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return (FTimespan)(long64)in_RDX;
}

