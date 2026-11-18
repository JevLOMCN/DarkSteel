// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FCriticalDamper @ 14d5fb800

FCriticalDamper * __thiscall
UE::Cameras::FCriticalDamper::FCriticalDamper(FCriticalDamper *this,float param_1)

{
  this->W0 = param_1;
  this->X0 = 0.0;
  this->X0Derivative = 0.0;
  return this;
}

// FCriticalDamper @ 14d5fb820

FCriticalDamper * __thiscall UE::Cameras::FCriticalDamper::FCriticalDamper(FCriticalDamper *this)

{
  this->W0 = -1.0;
  this->X0 = 0.0;
  this->X0Derivative = 0.0;
  return this;
}

// InternalUpdate @ 14d6209e0

void __thiscall
UE::Cameras::FCriticalDamper::InternalUpdate(FCriticalDamper *this,float param_1,float param_2)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = 0.0;
  if ((param_2 == 0.0) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7958263130323156929>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Math\\CriticalDamper.cpp"
                         ,0x3f,"DeltaTime != 0.f"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = this->W0;
  if (0.0 < fVar1) {
    if (param_1 != 0.0) {
      fVar9 = param_1 / param_2;
    }
    fVar10 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
    fVar8 = (fVar9 + fVar9) / fVar1;
    fVar9 = expf((float)((uint)(fVar1 * param_2) ^ __xmm_80000000800000008000000080000000));
    uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar5 = this->X0 - fVar8;
    fVar6 = fVar5 * fVar1;
    fVar7 = (fVar6 + this->X0Derivative) - fVar10;
    fVar5 = (fVar7 * param_2 + fVar5) * fVar9 + fVar8 + fVar10 * param_2 + param_1;
    this->X0 = fVar5;
    fVar10 = ((fVar7 - fVar6) - fVar7 * fVar1 * param_2) * fVar9 + fVar10;
    this->X0Derivative = fVar10;
    if (GGameplayCamerasCriticalDamperStabilizationThreshold < (float)((uint)fVar5 & uVar3)) {
      return;
    }
    if (GGameplayCamerasCriticalDamperStabilizationThreshold < (float)((uint)fVar10 & uVar3)) {
      return;
    }
  }
  this->X0 = 0.0;
  this->X0Derivative = 0.0;
  return;
}

// Reset @ 14d632680

void __thiscall
UE::Cameras::FCriticalDamper::Reset(FCriticalDamper *this,float param_1,float param_2)

{
  this->X0 = param_1;
  this->X0Derivative = param_2;
  return;
}

// Serialize @ 14d635540

void __thiscall UE::Cameras::FCriticalDamper::Serialize(FCriticalDamper *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->W0 = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->X0;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->X0Derivative;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d635639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

// Update @ 14d63b060

float __thiscall UE::Cameras::FCriticalDamper::Update(FCriticalDamper *this,float param_1)

{
  float fVar1;
  
  fVar1 = Update(this,this->X0,param_1);
  return fVar1;
}

// Update @ 14d63b080

float __thiscall
UE::Cameras::FCriticalDamper::Update(FCriticalDamper *this,float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = 0.0;
  if (param_2 == 0.0) {
    fVar6 = this->X0;
  }
  else {
    fVar1 = this->W0;
    fVar9 = this->X0;
    fVar8 = param_1 - fVar9;
    if (fVar1 <= 0.0) {
      this->X0 = 0.0;
      this->X0Derivative = 0.0;
      fVar6 = this->X0;
    }
    else {
      if (fVar8 != 0.0) {
        fVar6 = fVar8 / param_2;
      }
      fVar7 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
      fVar5 = (fVar6 + fVar6) / fVar1;
      fVar6 = expf((float)((uint)(fVar1 * param_2) ^ __xmm_80000000800000008000000080000000));
      uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar9 = fVar9 - fVar5;
      fVar3 = fVar9 * fVar1;
      fVar4 = (fVar3 + this->X0Derivative) - fVar7;
      fVar8 = (fVar4 * param_2 + fVar9) * fVar6 + fVar5 + fVar7 * param_2 + fVar8;
      this->X0 = fVar8;
      fVar7 = ((fVar4 - fVar3) - fVar4 * fVar1 * param_2) * fVar6 + fVar7;
      this->X0Derivative = fVar7;
      if (((float)((uint)fVar8 & uVar2) <= GGameplayCamerasCriticalDamperStabilizationThreshold) &&
         ((float)((uint)fVar7 & uVar2) <= GGameplayCamerasCriticalDamperStabilizationThreshold)) {
        this->X0 = 0.0;
        this->X0Derivative = 0.0;
      }
      fVar6 = this->X0;
    }
  }
  return fVar6;
}

// Update @ 14d63b1f0

float __thiscall
UE::Cameras::FCriticalDamper::Update
          (FCriticalDamper *this,float param_1,float param_2,float param_3)

{
  Update(this,param_2 - param_1,param_3);
  return param_2 - this->X0;
}

