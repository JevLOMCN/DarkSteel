// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 1

// ExecuteTask @ 14235bf30

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FImage::FreeData'::__l7::<lambda_1>,bool,void>::ExecuteTask
          (void *this)

{
  bool bVar1;
  
  bVar1 = `FImage::FreeData'::__l7::<lambda_1>::operator()((void *)((longlong)this + 0xe0));
  *(bool *)((longlong)this + 0xd8) = bVar1;
  return;
}

