// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// PutBits @ 14841b3b0

void __thiscall
UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
          (FDwordViewBitWriter *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (((ulonglong)(1L << ((byte)param_2 & 0x3f)) <= (ulonglong)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<uint64>(Bits) < (1ull << NumBits)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexCodec.cpp"
                         ,0x4f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (ulonglong)param_1 << ((byte)this->NumPendingBits & 0x3f) | this->PendingBits;
  this->PendingBits = uVar6;
  iVar2 = this->NumPendingBits + param_2;
  this->NumPendingBits = iVar2;
  while( true ) {
    if (iVar2 < 0x20) {
      return;
    }
    uVar1 = this->NumElements;
    this->NumElements = uVar1 + 1;
    uVar5 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) break;
    (this->Buffer).DataPtr[(int)uVar1] = (uint)uVar6;
    this->PendingBits = this->PendingBits >> 0x20;
    this->NumPendingBits = this->NumPendingBits + -0x20;
    iVar2 = this->NumPendingBits;
    uVar6 = (ulonglong)(uint)this->PendingBits;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

