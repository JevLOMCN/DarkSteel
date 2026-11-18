// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// Reserve @ 145a2e6f0

void __thiscall
FD3D12RayTracingShaderLibrary::Reserve(FD3D12RayTracingShaderLibrary *this,uint param_1)

{
  if (-1 < (int)param_1) {
    if ((this->Shaders).ArrayMax < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,(this->Shaders).ArrayNum,
                 &(this->Shaders).ArrayMax);
    }
    if ((this->Identifiers).ArrayMax < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&(this->Identifiers).AllocatorInstance,(this->Identifiers).ArrayNum,
                 &(this->Identifiers).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

