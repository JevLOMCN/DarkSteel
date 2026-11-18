// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FCameraShakeState @ 1476e7500

FCameraShakeState * __thiscall FCameraShakeState::FCameraShakeState(FCameraShakeState *this)

{
  undefined1 *puVar1;
  
  this->bIsBlendingIn = false;
  this->bHasBlendOut = false;
  this->bHasBlendIn = false;
  this->bIsPlaying = false;
  this->bIsBlendingOut = false;
  (this->ShakeInfo).Duration.Duration = 0.0;
  (this->ShakeInfo).Duration.Type = Fixed;
  (this->ShakeInfo).BlendIn = 0.0;
  (this->ShakeInfo).BlendOut = 0.0;
  this->ElapsedTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  return this;
}

// InitializePlaying @ 147714590

void __thiscall FCameraShakeState::InitializePlaying(FCameraShakeState *this)

{
  this->ElapsedTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  this->field_0x1c = (this->bHasBlendIn ^ this->field_0x1c & 0xfe) & 0xfd | 4;
  return;
}

// Scrub @ 147725e70

float __thiscall FCameraShakeState::Scrub(FCameraShakeState *this,float param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = __real_3f800000;
  uVar2 = this->field_0x1c;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  this->ElapsedTime = param_1;
  bVar5 = this->bHasBlendIn ^ uVar2 & 0xfe;
  bVar6 = bVar5 & 0xfd | 4;
  this->field_0x1c = bVar6;
  fVar8 = 0.0;
  if (this->bHasBlendIn) {
    this->CurrentBlendInTime = param_1;
    fVar8 = param_1;
  }
  if ((this->ShakeInfo).Duration.Type == Fixed) {
    if ((param_1 < 0.0) || (fVar7 = (this->ShakeInfo).Duration.Duration, fVar7 <= param_1)) {
      this->field_0x1c = bVar5 & 0xf9;
      return 0.0;
    }
    fVar7 = fVar7 - param_1;
    if (((bVar5 & 0x10) == 0x10) && (fVar1 = (this->ShakeInfo).BlendOut, fVar7 < fVar1)) {
      bVar6 = bVar5 & 0xfd | 6;
      this->field_0x1c = bVar6;
      this->CurrentBlendOutTime = fVar1 - fVar7;
    }
  }
  fVar7 = fVar4;
  if ((bVar6 & 9) == 9) {
    fVar1 = (this->ShakeInfo).BlendIn;
    if (fVar1 <= fVar8) {
      bVar6 = bVar6 & 0xfe;
      this->CurrentBlendInTime = fVar1;
      this->field_0x1c = bVar6;
    }
    else {
      fVar7 = fVar8 / fVar1;
    }
  }
  if ((bVar6 & 0x12) == 0x12) {
    fVar8 = (this->ShakeInfo).BlendOut;
    if (this->CurrentBlendOutTime < fVar8) {
      return fVar7 * (fVar4 - this->CurrentBlendOutTime / fVar8);
    }
    this->CurrentBlendOutTime = fVar8;
    this->field_0x1c = bVar6 & 0xf9;
    fVar7 = 0.0;
  }
  return fVar7;
}

// Start @ 14772a710

void __thiscall FCameraShakeState::Start(FCameraShakeState *this,FCameraShakeInfo *param_1)

{
  undefined1 local_res18 [4];
  undefined1 local_res1c;
  
  local_res1c = 0;
  Start(this,param_1,(TOptional<float>)local_res18);
  return;
}

// Start @ 14772a730

void __thiscall
FCameraShakeState::Start(FCameraShakeState *this,FCameraShakeInfo *param_1,TOptional<float> param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ECameraShakeDurationType EVar11;
  undefined3 uVar12;
  byte bVar13;
  byte bVar14;
  undefined4 uStackX_c;
  
  fVar2 = (param_1->Duration).Duration;
  EVar11 = (param_1->Duration).Type;
  uVar12 = *(undefined3 *)&(param_1->Duration).field_0x5;
  fVar3 = param_1->BlendIn;
  fVar4 = param_1->BlendOut;
  fVar5 = (this->ShakeInfo).BlendOut;
  bVar14 = 0;
  fVar6 = this->CurrentBlendOutTime;
  this->bHasBlendIn = false;
  (this->ShakeInfo).Duration.Duration = fVar2;
  (this->ShakeInfo).Duration.Type = EVar11;
  *(undefined3 *)&(this->ShakeInfo).Duration.field_0x5 = uVar12;
  (this->ShakeInfo).BlendIn = fVar3;
  (this->ShakeInfo).BlendOut = fVar4;
  bVar13 = bVar14;
  if (0.0 < fVar3) {
    bVar13 = 8;
  }
  bVar1 = this->field_0x1c;
  if (0.0 < fVar4) {
    bVar14 = 0x10;
  }
  this->field_0x1c = bVar13 | bVar1 & 0xef | bVar14;
  if (*(char *)((longlong)param_2 + 4) != '\0') {
    (this->ShakeInfo).Duration =
         (FCameraShakeDuration)(CONCAT44(uStackX_c,*(undefined4 *)param_2) & 0xffffff00ffffffff);
  }
  this->ElapsedTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  bVar13 = (bVar13 | bVar1 & 8) >> 3 ^ (bVar13 | bVar1 & 0xee | bVar14);
  this->field_0x1c = bVar13 & 0xfd | 4;
  if ((this->bIsPlaying) && ((bVar13 & 8) != 0)) {
    if (this->bHasBlendOut) {
      if (this->bIsBlendingOut) {
        this->CurrentBlendInTime = (__real_3f800000 - fVar6 / fVar5) * fVar3;
        return;
      }
    }
    else {
      this->field_0x1c = bVar13 & 0xfc | 4;
    }
  }
  return;
}

// Start @ 14772a810

void __thiscall FCameraShakeState::Start(FCameraShakeState *this,UCameraShakePattern *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  float local_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if (param_1 == (UCameraShakePattern *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShakePattern",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraShakeBase.cpp"
                       ,0x65,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = 0.0;
  uStack_24 = uStack_24 & 0xffffff00;
  uStack_20 = 0;
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_28);
  fVar3 = this->CurrentBlendOutTime;
  bVar10 = 0;
  fVar2 = (this->ShakeInfo).BlendOut;
  this->ElapsedTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  (this->ShakeInfo).Duration.Duration = local_28;
  *(uint *)&(this->ShakeInfo).Duration.Type = uStack_24;
  (this->ShakeInfo).BlendIn = (float)uStack_20;
  (this->ShakeInfo).BlendOut = uStack_20._4_4_;
  bVar9 = bVar10;
  if (0.0 < (float)uStack_20) {
    bVar9 = 8;
  }
  if (0.0 < uStack_20._4_4_) {
    bVar10 = 0x10;
  }
  bVar9 = bVar9 >> 3 ^ (bVar9 | this->field_0x1c & 0xe6 | bVar10);
  this->field_0x1c = bVar9 & 0xfd | 4;
  if ((this->bIsPlaying) && ((bVar9 & 8) != 0)) {
    if (this->bHasBlendOut) {
      if (this->bIsBlendingOut) {
        this->CurrentBlendInTime = (__real_3f800000 - fVar3 / fVar2) * (float)uStack_20;
        return;
      }
    }
    else {
      this->field_0x1c = bVar9 & 0xfc | 4;
    }
  }
  return;
}

// Start @ 14772a950

void __thiscall
FCameraShakeState::Start
          (FCameraShakeState *this,UCameraShakePattern *param_1,
          FCameraShakePatternStartParams *param_2)

{
  byte bVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  float local_res8;
  undefined4 uStackX_c;
  undefined4 local_38 [2];
  float local_30;
  uint uStack_2c;
  undefined8 uStack_28;
  
  if ((param_1 == (UCameraShakePattern *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InShakePattern",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraShakeBase.cpp"
                         ,0x6d,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_30 = 0.0;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_28 = 0;
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  bVar9 = false;
  if ((param_2->bOverrideDuration != false) && (&param_2->DurationOverride != (float *)local_38)) {
    local_res8 = param_2->DurationOverride;
    bVar9 = true;
  }
  fVar3 = (this->ShakeInfo).BlendOut;
  bVar11 = 0;
  fVar4 = this->CurrentBlendOutTime;
  (this->ShakeInfo).Duration.Duration = local_30;
  *(uint *)&(this->ShakeInfo).Duration.Type = uStack_2c;
  (this->ShakeInfo).BlendIn = (float)uStack_28;
  (this->ShakeInfo).BlendOut = uStack_28._4_4_;
  bVar10 = bVar11;
  if (0.0 < (float)uStack_28) {
    bVar10 = 8;
  }
  bVar1 = this->field_0x1c;
  if (0.0 < uStack_28._4_4_) {
    bVar11 = 0x10;
  }
  if (bVar9) {
    (this->ShakeInfo).Duration =
         (FCameraShakeDuration)(CONCAT44(uStackX_c,local_res8) & 0xffffff00ffffffff);
  }
  this->ElapsedTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->CurrentBlendOutTime = 0.0;
  bVar10 = bVar10 >> 3 ^ (bVar10 | bVar1 & 0xe6 | bVar11);
  this->field_0x1c = bVar10 & 0xfd | 4;
  if ((this->bIsPlaying) && ((bVar10 & 8) != 0)) {
    if (this->bHasBlendOut) {
      if (this->bIsBlendingOut) {
        this->CurrentBlendInTime = (__real_3f800000 - fVar4 / fVar3) * (float)uStack_28;
      }
    }
    else {
      this->field_0x1c = bVar10 & 0xfc | 4;
    }
  }
  return;
}

// Stop @ 14772c930

void __thiscall FCameraShakeState::Stop(FCameraShakeState *this,bool param_1)

{
  undefined1 *puVar1;
  
  if ((param_1) || (puVar1 = &this->field_0x1c, !this->bHasBlendOut)) {
    this->bIsPlaying = false;
  }
  else if (!this->bIsBlendingOut && this->bHasBlendOut == true) {
    this->CurrentBlendOutTime = 0.0;
    this->field_0x1c = *puVar1 | 2;
    return;
  }
  return;
}

// Update @ 147731290

float __thiscall FCameraShakeState::Update(FCameraShakeState *this,float param_1)

{
  undefined1 *puVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_3f800000;
  puVar1 = &this->field_0x1c;
  bVar3 = *puVar1;
  fVar5 = param_1 + this->ElapsedTime;
  this->ElapsedTime = fVar5;
  if (this->bIsBlendingIn) {
    this->CurrentBlendInTime = param_1 + this->CurrentBlendInTime;
  }
  if (this->bIsBlendingOut) {
    this->CurrentBlendOutTime = param_1 + this->CurrentBlendOutTime;
  }
  if ((this->ShakeInfo).Duration.Type == Fixed) {
    if ((fVar5 < 0.0) || (fVar4 = (this->ShakeInfo).Duration.Duration, fVar4 <= fVar5)) {
      this->field_0x1c = bVar3 & 0xfb;
      return 0.0;
    }
    fVar4 = fVar4 - fVar5;
    if ((!this->bIsBlendingOut && this->bHasBlendOut == true) &&
       (fVar5 = (this->ShakeInfo).BlendOut, fVar4 < fVar5)) {
      bVar3 = bVar3 | 2;
      this->field_0x1c = bVar3;
      this->CurrentBlendOutTime = fVar5 - fVar4;
    }
  }
  fVar5 = fVar2;
  if ((bVar3 & 9) == 9) {
    fVar4 = (this->ShakeInfo).BlendIn;
    if (fVar4 <= this->CurrentBlendInTime) {
      bVar3 = bVar3 & 0xfe;
      this->CurrentBlendInTime = fVar4;
      this->field_0x1c = bVar3;
    }
    else {
      fVar5 = this->CurrentBlendInTime / fVar4;
    }
  }
  if ((bVar3 & 0x12) == 0x12) {
    fVar4 = (this->ShakeInfo).BlendOut;
    if (fVar4 <= this->CurrentBlendOutTime) {
      this->CurrentBlendOutTime = fVar4;
      this->field_0x1c = bVar3 & 0xf9;
      return 0.0;
    }
    fVar5 = fVar5 * (fVar2 - this->CurrentBlendOutTime / fVar4);
  }
  return fVar5;
}

