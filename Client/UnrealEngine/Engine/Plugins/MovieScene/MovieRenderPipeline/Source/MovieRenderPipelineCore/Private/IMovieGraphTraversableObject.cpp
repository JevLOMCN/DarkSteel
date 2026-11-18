// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// ~IMovieGraphTraversableObject @ 14dd0d710

void __thiscall
IMovieGraphTraversableObject::~IMovieGraphTraversableObject(IMovieGraphTraversableObject *this)

{
  *this = (IMovieGraphTraversableObject)&___7IMovieGraphTraversableObject__6B_;
  return;
}

// GetMergedProperties @ 14dd28190

TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> * __thiscall
IMovieGraphTraversableObject::GetMergedProperties
          (IMovieGraphTraversableObject *this,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Merge @ 14dd36290

void __thiscall
IMovieGraphTraversableObject::Merge
          (IMovieGraphTraversableObject *this,IMovieGraphTraversableObject *param_1)

{
  return;
}

// _getUObject @ 14dd4de70

UObject * __thiscall IMovieGraphTraversableObject::_getUObject(IMovieGraphTraversableObject *this)

{
  return (UObject *)0x0;
}

