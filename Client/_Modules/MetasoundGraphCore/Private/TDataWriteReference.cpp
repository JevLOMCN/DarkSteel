// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// Clone @ 14ad4a650

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FAudioBuffer>::Clone
          (TDataWriteReference<Metasound::FAudioBuffer> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

