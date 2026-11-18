// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetBits @ 1484052a0

uint __thiscall
UE::MorphTargetVertexCodec::FDwordBitReader::GetBits(FDwordBitReader *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  sbyte sVar6;
  uint uVar7;
  
  if (0x20 < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexCodec.cpp"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((uint)((this->Buffer).ArrayNum << 5) < this->Offset + param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + NumBits <= (Buffer.Num() * 32u)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexCodec.cpp"
                       ,0x79,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = this->Offset;
  uVar7 = uVar1 >> 5;
  this->Offset = uVar1 + param_1;
  uVar4 = (uVar1 & 0x1f) + param_1;
  sVar6 = (sbyte)(uVar1 & 0x1f);
  if (uVar4 < 0x21) {
    puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Buffer,uVar7);
    uVar4 = *puVar5 >> sVar6 & (int)(1L << ((byte)param_1 & 0x3f)) - 1U;
  }
  else {
    puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Buffer,uVar7);
    uVar1 = *puVar5;
    puVar5 = TArrayView<unsigned_int_const_,int>::operator[](&this->Buffer,uVar7 + 1);
    uVar4 = ((1 << ((char)uVar4 - 0x20U & 0x1f)) - 1U & *puVar5) << (0x20U - sVar6 & 0x1f) |
            (1 << (0x20U - sVar6 & 0x1f)) - 1U & uVar1 >> sVar6;
  }
  return uVar4;
}

