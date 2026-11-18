// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 6

// IsDynamicReleaseEnabled @ 1423ea7d0

bool __thiscall FDynamicReleaseDeadZone::IsDynamicReleaseEnabled(FDynamicReleaseDeadZone *this)

{
  return this->DeadZone <= __real_3f800000 && __real_3f800000 != this->DeadZone;
}

// IsPressed @ 1423eae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDynamicReleaseDeadZone::IsPressed(FDynamicReleaseDeadZone *this,uchar param_1,uchar param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  bVar6 = this->TriggerThreshold;
  fVar9 = this->DeadZone;
  bVar4 = 0;
  if (param_2 != '\0') {
    bVar4 = 2;
  }
  bVar5 = bVar4 | this->field_0x5 & 0xf9;
  bVar2 = -(bVar6 < param_2) & 4;
  bVar8 = param_1 != '\0';
  this->field_0x5 = bVar5 | bVar2;
  if (fVar9 < __real_3f800000) {
    bVar1 = bVar6 < param_1;
    if (((param_1 != '\0') != (bool)(bVar4 >> 1)) || (bVar8 = bVar1, bVar1 != (bool)(bVar2 >> 2))) {
      bVar6 = 0xff;
      if (bVar8 != false) {
        bVar6 = 0;
      }
      this->TriggerThreshold = bVar6;
    }
    if (bVar8 == false) {
      fVar10 = fVar9 * DynamicTriggerReleaseCVars::RePressFactor;
      if (fVar9 * DynamicTriggerReleaseCVars::RePressFactor <=
          DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar10 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar3 = (uint)param_1 - (int)(fVar10 * ___real_c37f0000);
      bVar4 = 0xfe;
      if (iVar3 < 0xfe) {
        bVar4 = (byte)iVar3;
      }
      bVar7 = bVar6 < bVar4;
    }
    else {
      if (fVar9 <= DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar9 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar3 = ((uint)param_1 - (int)(fVar9 * __real_437f0000)) + -1;
      bVar4 = 0;
      if (0 < iVar3) {
        bVar4 = (byte)iVar3;
      }
      bVar7 = bVar4 < bVar6;
    }
    if (bVar7) {
      bVar4 = bVar6;
    }
    bVar5 = bVar5 | bVar1 << 2;
    this->TriggerThreshold = bVar4;
  }
  bVar6 = 0;
  if (param_1 != '\0') {
    bVar6 = 2;
  }
  this->field_0x5 = bVar6 | bVar5 & 0xfd;
  return bVar8;
}

// IsPressed @ 1423eafe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDynamicReleaseDeadZone::IsPressed
          (FDynamicReleaseDeadZone *this,uchar param_1,uchar param_2,bool param_3,bool param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  bVar6 = this->TriggerThreshold;
  fVar8 = this->DeadZone;
  bVar5 = this->field_0x5 & 0xf9 | param_4 * '\x02';
  bVar2 = -(bVar6 < param_2) & 4;
  bVar1 = fVar8 < __real_3f800000;
  this->field_0x5 = bVar5 | bVar2;
  bVar3 = param_3;
  if (bVar1) {
    bVar1 = bVar6 < param_1;
    if ((param_3 != param_4) || (bVar3 = bVar1, bVar1 != (bool)(bVar2 >> 2))) {
      bVar6 = 0xff;
      if (bVar3 != false) {
        bVar6 = 0;
      }
      this->TriggerThreshold = bVar6;
    }
    if (bVar3 == false) {
      fVar9 = fVar8 * DynamicTriggerReleaseCVars::RePressFactor;
      if (fVar8 * DynamicTriggerReleaseCVars::RePressFactor <=
          DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar9 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar4 = (uint)param_1 - (int)(fVar9 * ___real_c37f0000);
      bVar2 = 0xfe;
      if (iVar4 < 0xfe) {
        bVar2 = (byte)iVar4;
      }
      bVar7 = bVar6 < bVar2;
    }
    else {
      if (fVar8 <= DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar8 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar4 = ((uint)param_1 - (int)(fVar8 * __real_437f0000)) + -1;
      bVar2 = 0;
      if (0 < iVar4) {
        bVar2 = (byte)iVar4;
      }
      bVar7 = bVar2 < bVar6;
    }
    if (bVar7) {
      bVar2 = bVar6;
    }
    this->TriggerThreshold = bVar2;
    bVar5 = bVar5 | bVar1 << 2;
  }
  this->field_0x5 = bVar5 & 0xfd | param_3 * '\x02';
  return bVar3;
}

// IsPressed @ 1423eb120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDynamicReleaseDeadZone::IsPressed(FDynamicReleaseDeadZone *this,uchar param_1,bool param_2)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = this->DeadZone;
  uVar1 = this->field_0x5;
  if (fVar8 < __real_3f800000) {
    bVar6 = this->TriggerThreshold;
    bVar2 = bVar6 < param_1;
    bVar4 = param_2;
    if ((param_2 != this->bWasSimplePressed) || (bVar4 = bVar2, bVar2 != this->bWasDynamicPressed))
    {
      bVar6 = 0xff;
      if (bVar4 != false) {
        bVar6 = 0;
      }
      this->TriggerThreshold = bVar6;
    }
    if (bVar4 == false) {
      fVar9 = fVar8 * DynamicTriggerReleaseCVars::RePressFactor;
      if (fVar8 * DynamicTriggerReleaseCVars::RePressFactor <=
          DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar9 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar5 = (uint)param_1 - (int)(fVar9 * ___real_c37f0000);
      bVar3 = 0xfe;
      if (iVar5 < 0xfe) {
        bVar3 = (byte)iVar5;
      }
      bVar7 = bVar6 < bVar3;
    }
    else {
      if (fVar8 <= DynamicTriggerReleaseCVars::MinimumRePress) {
        fVar8 = DynamicTriggerReleaseCVars::MinimumRePress;
      }
      iVar5 = ((uint)param_1 - (int)(fVar8 * __real_437f0000)) + -1;
      bVar3 = 0;
      if (0 < iVar5) {
        bVar3 = (byte)iVar5;
      }
      bVar7 = bVar3 < bVar6;
    }
    if (bVar7) {
      bVar3 = bVar6;
    }
    this->TriggerThreshold = bVar3;
    this->field_0x5 = uVar1 & 0xf9 | bVar2 << 2 | param_2 * '\x02';
    return bVar4;
  }
  this->field_0x5 = uVar1 & 0xf9 | param_2 * '\x02';
  return param_2;
}

// OverrideDeadZone @ 1423f1fe0

void __thiscall
FDynamicReleaseDeadZone::OverrideDeadZone(FDynamicReleaseDeadZone *this,float param_1)

{
  undefined1 uVar1;
  float fVar2;
  
  uVar1 = this->field_0x5;
  if (DynamicTriggerReleaseCVars::bAllowOverride) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    this->field_0x5 = uVar1 | 1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->DeadZone = param_1;
    return;
  }
  if (this->bHasOverride != 0) {
    this->field_0x5 = uVar1 & 0xfe;
    fVar2 = DynamicTriggerReleaseCVars::DefaultDeadZone;
    if (__real_3f800000 <= DynamicTriggerReleaseCVars::DefaultDeadZone) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->DeadZone = fVar2;
  }
  return;
}

// RefreshSettings @ 1423fe000

void __thiscall FDynamicReleaseDeadZone::RefreshSettings(FDynamicReleaseDeadZone *this)

{
  float fVar1;
  
  if (!DynamicTriggerReleaseCVars::bAllowOverride) {
    this->bHasOverride = '\0';
  }
  if (this->bHasOverride == 0) {
    fVar1 = DynamicTriggerReleaseCVars::DefaultDeadZone;
    if (__real_3f800000 <= DynamicTriggerReleaseCVars::DefaultDeadZone) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    this->DeadZone = fVar1;
  }
  return;
}

