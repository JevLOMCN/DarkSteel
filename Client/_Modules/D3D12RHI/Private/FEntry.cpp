// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetPrimaryExportNameChars @ 145a1a820

wchar_t * __thiscall FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(FEntry *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((this->ExportNames).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportNames.Num()!=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x3d7,L"This ray tracing shader collection does not export any symbols.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  if ((this->ExportNames).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  if (*(int *)((this->ExportNames).AllocatorInstance.InlineData[0].Pad + 8) != 0) {
    return *(wchar_t **)(this->ExportNames).AllocatorInstance.InlineData[0].Pad;
  }
  return L"";
}

