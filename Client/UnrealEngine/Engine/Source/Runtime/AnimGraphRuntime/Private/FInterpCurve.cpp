// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// Reset @ 146464320

void __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::Reset(FInterpCurve<UE::Math::TQuat<double>_> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Points).ArrayMax;
  (this->Points).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Reset @ 146464360

void __thiscall
FInterpCurve<UE::Math::TVector<double>_>::Reset(FInterpCurve<UE::Math::TVector<double>_> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Points).ArrayMax;
  (this->Points).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

