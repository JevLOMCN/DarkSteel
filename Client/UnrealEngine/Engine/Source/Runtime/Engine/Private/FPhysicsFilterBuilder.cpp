// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPhysicsFilterBuilder @ 1477edc50

FPhysicsFilterBuilder * __thiscall
FPhysicsFilterBuilder::FPhysicsFilterBuilder
          (FPhysicsFilterBuilder *this,TEnumAsByte<ECollisionChannel> param_1,uchar param_2,
          FCollisionResponseContainer *param_3)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 1;
  this->BlockingBits = 0;
  this->TouchingBits = 0;
  puVar1 = &(param_3->field0_0x0)._s_0.Pawn;
  this->Word3 = 0;
  do {
    if (((FCollisionResponseContainer_u_0_s_0 *)(puVar1 + -2))->WorldStatic == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2;
    }
    else if (((FCollisionResponseContainer_u_0_s_0 *)(puVar1 + -2))->WorldStatic == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2;
    }
    if (puVar1[-1] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 1;
    }
    else if (puVar1[-1] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 1;
    }
    if (*puVar1 == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 2;
    }
    else if (*puVar1 == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 2;
    }
    if (puVar1[1] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 3;
    }
    else if (puVar1[1] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 3;
    }
    if (puVar1[2] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 4;
    }
    else if (puVar1[2] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 4;
    }
    if (puVar1[3] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 5;
    }
    else if (puVar1[3] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 5;
    }
    if (puVar1[4] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 6;
    }
    else if (puVar1[4] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 6;
    }
    if (puVar1[5] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 7;
    }
    else if (puVar1[5] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 7;
    }
    if (puVar1[6] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 8;
    }
    else if (puVar1[6] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 8;
    }
    if (puVar1[7] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 9;
    }
    else if (puVar1[7] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 9;
    }
    if (puVar1[8] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 10;
    }
    else if (puVar1[8] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 10;
    }
    if (puVar1[9] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 0xb;
    }
    else if (puVar1[9] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 0xb;
    }
    if (puVar1[10] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 0xc;
    }
    else if (puVar1[10] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 0xc;
    }
    if (puVar1[0xb] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 0xd;
    }
    else if (puVar1[0xb] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 0xd;
    }
    if (puVar1[0xc] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 0xe;
    }
    else if (puVar1[0xc] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 0xe;
    }
    if (puVar1[0xd] == '\x02') {
      this->BlockingBits = this->BlockingBits | uVar2 << 0xf;
    }
    else if (puVar1[0xd] == '\x01') {
      this->TouchingBits = this->TouchingBits | uVar2 << 0xf;
    }
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
    puVar1 = puVar1 + 0x10;
  } while (uVar3 < 0x20);
  this->Word3 = ((uint)param_2 << 5 | (uint)param_1.Value) << 0x15;
  return this;
}

