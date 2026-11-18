// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~FAudioAnalyzerNodeTemplateTransform @ 14af42310

void __thiscall
Metasound::Frontend::AudioAnalyzerNodeTemplatePrivate::FAudioAnalyzerNodeTemplateTransform::
~FAudioAnalyzerNodeTemplateTransform(FAudioAnalyzerNodeTemplateTransform *this)

{
  return;
}

// Transform @ 14afbfbb0

bool __thiscall
Metasound::Frontend::AudioAnalyzerNodeTemplatePrivate::FAudioAnalyzerNodeTemplateTransform::
Transform(FAudioAnalyzerNodeTemplateTransform *this,FGuid *param_1,FGuid *param_2,
         FMetaSoundFrontendDocumentBuilder *param_3)

{
  bool bVar1;
  
  bVar1 = FMetaSoundFrontendDocumentBuilder::RemoveNode(param_3,param_2,param_1);
  return bVar1;
}

