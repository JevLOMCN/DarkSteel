// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// GetUnitVector @ 146019680

TVector<double> * __thiscall
FRandomStream::GetUnitVector(FRandomStream *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = __real_3ff0000000000000;
  uVar4 = this->Seed;
  do {
    do {
      uVar4 = uVar4 * 0xbb38435 + 0x3619636b;
      uVar3 = uVar4 * 0xbb38435 + 0x3619636b;
      fVar5 = (float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000;
      uVar4 = uVar3 * 0xbb38435 + 0x3619636b;
      dVar8 = (double)((fVar5 + fVar5) - __real_3f800000);
      fVar5 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
      dVar1 = (double)((fVar5 + fVar5) - __real_3f800000);
      fVar5 = (float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000;
      dVar2 = (double)((fVar5 + fVar5) - __real_3f800000);
      dVar6 = dVar1 * dVar1 + dVar8 * dVar8 + dVar2 * dVar2;
    } while (__real_3ff0000000000000 < dVar6);
  } while (dVar6 < __real_3f1a36e2e0000000);
  this->Seed = uVar4;
  dVar7 = dVar7 / SQRT(dVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8 * dVar7;
  return __return_storage_ptr__;
}

