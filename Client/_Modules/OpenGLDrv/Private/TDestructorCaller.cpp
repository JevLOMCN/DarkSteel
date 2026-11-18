// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// Destruct @ 145bfb720

void __cdecl
UE::Core::Private::TDestructorCaller<FOpenGLLinkedProgram::FComputeProgram>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(param_1);
  return;
}

// Destruct @ 145bfb780

void __cdecl
UE::Core::Private::TDestructorCaller<FOpenGLLinkedProgram::FGraphicsProgram>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x1b0) != '\0') {
    if (*(void **)((longlong)param_1 + 0x1a0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x1a0));
    }
    DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> **)
                ((longlong)param_1 + 400),*(int *)((longlong)param_1 + 0x198));
    if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 400));
    }
    if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x180));
    }
    FOpenGLShaderBindings::~FOpenGLShaderBindings
              ((FOpenGLShaderBindings *)((longlong)param_1 + 0x120));
  }
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x100),*(int *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)((longlong)param_1 + 0x90))
  ;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(param_1);
  return;
}

