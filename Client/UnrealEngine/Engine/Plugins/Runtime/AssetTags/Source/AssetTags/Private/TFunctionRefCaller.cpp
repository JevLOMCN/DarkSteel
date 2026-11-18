// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetTags
// Functions: 1

// Call @ 14f010600

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetTagsSubsystem::GetCollections'::__l3::<lambda_1>,bool,FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>_>
::Call(void *param_1,FName *param_2,
      TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)> *param_3)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)> local_18;
  
  bVar1 = `UAssetTagsSubsystem::GetCollections'::__l3::<lambda_1>::operator()
                    (param_1,*param_2,&local_18);
  return bVar1;
}

