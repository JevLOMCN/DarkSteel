// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 2

// StartupModule @ 14cd86a40

void __thiscall FGeometryCacheTracksModule::StartupModule(FGeometryCacheTracksModule *this)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_GeometryCache.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_GeometryCache.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14cd86ab0

void __thiscall FGeometryCacheTracksModule::ShutdownModule(FGeometryCacheTracksModule *this)

{
  return;
}

