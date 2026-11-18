// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// Call @ 14a7448c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MVVM::Private::GetAvailableBindings'::__l5::<lambda_1>,bool,UE::FieldNotification::FFieldId>
::Call(void *param_1,FFieldId *param_2)

{
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_2->FieldName;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)param_1,&local_res8,
             (bool *)&local_res10);
  return true;
}

