// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 2

// Call @ 14deb3090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEDatabaseStreamer::stream_in'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  `UEDatabaseStreamer::stream_in'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14deb30b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::__l78::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker
                    (*(UAnimationCompressionLibraryDatabase **)param_1,*param_2);
  return bVar1;
}

