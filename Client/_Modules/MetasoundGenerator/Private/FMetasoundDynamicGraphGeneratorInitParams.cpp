// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// Reset @ 14b2b74f0

void __cdecl
Metasound::FMetasoundDynamicGraphGeneratorInitParams::Reset
          (FMetasoundDynamicGraphGeneratorInitParams *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FGeneratorInitParams::Reset((FGeneratorInitParams *)param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->TransformQueue !=
      (TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
       *)&local_18) {
    (param_1->TransformQueue).Object =
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->TransformQueue).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

