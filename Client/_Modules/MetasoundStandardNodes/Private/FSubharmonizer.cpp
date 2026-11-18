// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// Process @ 14b1e91d0

void __thiscall
Metasound::SubharmonizerNodePrivate::FSubharmonizer::Process
          (FSubharmonizer *this,float *param_1,int param_2,float *param_3)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  
  fVar5 = __real_bf800000;
  fVar4 = __real_3f800000;
  lVar11 = 0;
  lVar9 = (longlong)param_2;
  if (this->bOctaverMode == false) {
    if (3 < lVar9) {
      lVar8 = (longlong)param_1 - (longlong)param_3;
      lVar10 = (lVar9 - 4U >> 2) + 1;
      pfVar7 = param_3 + 1;
      lVar11 = lVar10 * 4;
      do {
        bVar2 = 0.0 < *(float *)((longlong)pfVar7 + lVar8 + -4);
        if ((this->bLastSign != bVar2) &&
           (bVar6 = (byte)(this->CurrentSignState + 1) % this->SubharmonicBase,
           this->CurrentSignState = bVar6, bVar6 == 0)) {
          this->bPolarity = this->bPolarity == false;
        }
        fVar12 = fVar5;
        if (this->bPolarity != false) {
          fVar12 = fVar4;
        }
        pfVar7[-1] = fVar12;
        this->bLastSign = bVar2;
        bVar3 = 0.0 < *(float *)((longlong)pfVar7 + lVar8);
        if ((bVar2 != bVar3) &&
           (bVar6 = (byte)(this->CurrentSignState + 1) % this->SubharmonicBase,
           this->CurrentSignState = bVar6, bVar6 == 0)) {
          this->bPolarity = this->bPolarity == false;
        }
        fVar12 = fVar5;
        if (this->bPolarity != false) {
          fVar12 = fVar4;
        }
        *pfVar7 = fVar12;
        this->bLastSign = bVar3;
        bVar2 = 0.0 < *(float *)(lVar8 + 4 + (longlong)pfVar7);
        if ((bVar3 != bVar2) &&
           (bVar6 = (byte)(this->CurrentSignState + 1) % this->SubharmonicBase,
           this->CurrentSignState = bVar6, bVar6 == 0)) {
          this->bPolarity = this->bPolarity == false;
        }
        fVar12 = fVar5;
        if (this->bPolarity != false) {
          fVar12 = fVar4;
        }
        pfVar7[1] = fVar12;
        this->bLastSign = bVar2;
        bVar3 = 0.0 < *(float *)(lVar8 + 8 + (longlong)pfVar7);
        if ((bVar2 != bVar3) &&
           (bVar6 = (byte)(this->CurrentSignState + 1) % this->SubharmonicBase,
           this->CurrentSignState = bVar6, bVar6 == 0)) {
          this->bPolarity = this->bPolarity == false;
        }
        fVar12 = fVar5;
        if (this->bPolarity != false) {
          fVar12 = fVar4;
        }
        pfVar7[2] = fVar12;
        pfVar7 = pfVar7 + 4;
        this->bLastSign = bVar3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar11 < lVar9) {
      pfVar7 = param_3 + lVar11;
      lVar9 = lVar9 - lVar11;
      do {
        bVar2 = 0.0 < *(float *)((longlong)pfVar7 + ((longlong)param_1 - (longlong)param_3));
        if ((this->bLastSign != bVar2) &&
           (bVar6 = (byte)(this->CurrentSignState + 1) % this->SubharmonicBase,
           this->CurrentSignState = bVar6, bVar6 == 0)) {
          this->bPolarity = this->bPolarity == false;
        }
        fVar12 = fVar5;
        if (this->bPolarity != false) {
          fVar12 = fVar4;
        }
        *pfVar7 = fVar12;
        pfVar7 = pfVar7 + 1;
        this->bLastSign = bVar2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  else {
    uVar1 = this->SubharmonicBase;
    if (3 < lVar9) {
      lVar8 = (longlong)param_1 - (longlong)param_3;
      lVar10 = (lVar9 - 4U >> 2) + 1;
      pfVar7 = param_3 + 1;
      lVar11 = lVar10 * 4;
      do {
        bVar2 = 0.0 < *(float *)((longlong)pfVar7 + lVar8 + -4);
        if (this->bLastSign != bVar2) {
          this->CurrentSignState = this->CurrentSignState + 1 & uVar1 - 1;
        }
        fVar12 = fVar5;
        if ((this->SubharmonicBitmask & this->CurrentSignState) != 0) {
          fVar12 = fVar4;
        }
        pfVar7[-1] = fVar12;
        this->bLastSign = bVar2;
        bVar3 = 0.0 < *(float *)((longlong)pfVar7 + lVar8);
        if (bVar2 != bVar3) {
          this->CurrentSignState = this->CurrentSignState + 1 & uVar1 - 1;
        }
        fVar12 = fVar5;
        if ((this->SubharmonicBitmask & this->CurrentSignState) != 0) {
          fVar12 = fVar4;
        }
        *pfVar7 = fVar12;
        this->bLastSign = bVar3;
        bVar2 = 0.0 < *(float *)(lVar8 + 4 + (longlong)pfVar7);
        if (bVar3 != bVar2) {
          this->CurrentSignState = this->CurrentSignState + 1 & uVar1 - 1;
        }
        fVar12 = fVar5;
        if ((this->SubharmonicBitmask & this->CurrentSignState) != 0) {
          fVar12 = fVar4;
        }
        pfVar7[1] = fVar12;
        this->bLastSign = bVar2;
        bVar3 = 0.0 < *(float *)(lVar8 + 8 + (longlong)pfVar7);
        if (bVar2 != bVar3) {
          this->CurrentSignState = this->CurrentSignState + 1 & uVar1 - 1;
        }
        fVar12 = fVar5;
        if ((this->SubharmonicBitmask & this->CurrentSignState) != 0) {
          fVar12 = fVar4;
        }
        pfVar7[2] = fVar12;
        pfVar7 = pfVar7 + 4;
        this->bLastSign = bVar3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar11 < lVar9) {
      pfVar7 = param_3 + lVar11;
      lVar9 = lVar9 - lVar11;
      do {
        bVar2 = 0.0 < *(float *)((longlong)pfVar7 + ((longlong)param_1 - (longlong)param_3));
        if (this->bLastSign != bVar2) {
          this->CurrentSignState = this->CurrentSignState + 1 & uVar1 - 1;
        }
        fVar12 = fVar5;
        if ((this->SubharmonicBitmask & this->CurrentSignState) != 0) {
          fVar12 = fVar4;
        }
        *pfVar7 = fVar12;
        pfVar7 = pfVar7 + 1;
        this->bLastSign = bVar2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

// Reset @ 14b1ea110

void __thiscall Metasound::SubharmonizerNodePrivate::FSubharmonizer::Reset(FSubharmonizer *this)

{
  this->Subharmonic = '\x02';
  this->CurrentSignState = '\0';
  this->bLastSign = false;
  this->bOctaverMode = false;
  return;
}

// Update @ 14b1eb9a0

void __thiscall
Metasound::SubharmonizerNodePrivate::FSubharmonizer::Update
          (FSubharmonizer *this,int param_1,bool param_2)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Subharmonic = (byte)param_1;
  this->bOctaverMode = param_2;
  uVar3 = (param_1 & 0xffU) + 1;
  this->SubharmonicBitmask = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2) {
    uVar2 = 7;
    if (uVar3 < 7) {
      uVar2 = uVar3;
    }
    this->SubharmonicBase = '\x01' << ((byte)uVar2 & 0x1f);
    return;
  }
  uVar1 = '\a';
  if (uVar3 < 7) {
    uVar1 = (uchar)uVar3;
  }
  this->SubharmonicBase = uVar1;
  return;
}

