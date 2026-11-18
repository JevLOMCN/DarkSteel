// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// CopyGpuToCpuMemory @ 148e5ee10

void __cdecl
FNDIArrayImplHelperBase<FNiagaraMeshRendererMeshPropertiesBase>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 * 0x58);
  return;
}

// CopyGpuToCpuMemory @ 1490d8840

void __cdecl
FNDIArrayImplHelperBase<unsigned_char>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3);
  return;
}

// CopyGpuToCpuMemory @ 1490d8850

void __cdecl
FNDIArrayImplHelperBase<int>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 2);
  return;
}

// CopyGpuToCpuMemory @ 1490d8870

void __cdecl
FNDIArrayImplHelperBase<float>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 2);
  return;
}

// CopyGpuToCpuMemory @ 1490d8890

void __cdecl
FNDIArrayImplHelperBase<UE::Math::TMatrix<float>_>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 6);
  return;
}

// CopyGpuToCpuMemory @ 1490d88b0

void __cdecl
FNDIArrayImplHelperBase<UE::Math::TQuat<float>_>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 4);
  return;
}

// CopyGpuToCpuMemory @ 1490d88d0

void __cdecl
FNDIArrayImplHelperBase<UE::Math::TVector2<float>_>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 3);
  return;
}

// CopyGpuToCpuMemory @ 1490d88f0

void __cdecl
FNDIArrayImplHelperBase<UE::Math::TVector4<float>_>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 4);
  return;
}

// CopyGpuToCpuMemory @ 1490d8910

void __cdecl
FNDIArrayImplHelperBase<UE::Math::TVector<float>_>::CopyGpuToCpuMemory
          (void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 * 0xc);
  return;
}

// CopyGpuToCpuMemory @ 1490d8930

void __cdecl
FNDIArrayImplHelperBase<FLinearColor>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 4);
  return;
}

// CopyGpuToCpuMemory @ 1490d8950

void __cdecl
FNDIArrayImplHelperBase<FNiagaraID>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(longlong)param_3 << 3);
  return;
}

