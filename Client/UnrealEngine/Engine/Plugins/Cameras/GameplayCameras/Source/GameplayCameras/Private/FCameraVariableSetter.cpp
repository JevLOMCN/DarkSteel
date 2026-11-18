// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// GetBlendFactor @ 14d5a6710

float __thiscall UE::Cameras::FCameraVariableSetter::GetBlendFactor(FCameraVariableSetter *this)

{
  ECameraVariableSetterBlendType EVar1;
  EState EVar2;
  float fVar3;
  float fVar4;
  
  EVar2 = this->State;
  fVar4 = __real_3f800000;
  if (EVar2 == BlendIn) {
    if (0.0 < this->BlendInTime) {
      fVar4 = this->CurrentTime / this->BlendInTime;
    }
  }
  else if ((EVar2 != Full) && (fVar4 = 0.0, EVar2 == BlendOut)) {
    if (this->BlendOutTime <= 0.0) {
      fVar4 = __real_3f800000 - __real_3f800000;
    }
    else {
      fVar4 = __real_3f800000 - this->CurrentTime / this->BlendOutTime;
    }
  }
  EVar1 = this->BlendType;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = __real_3f800000;
  if (EVar1 == None) {
    if (fVar4 < __real_3f800000) {
      fVar3 = 0.0;
    }
  }
  else {
    if (EVar1 == Linear) {
      return fVar4;
    }
    if (EVar1 == SmoothStep) {
      return (__real_40400000 - (fVar4 + fVar4)) * fVar4 * fVar4;
    }
    if (EVar1 == SmootherStep) {
      return ((fVar4 * __real_40c00000 - __real_41700000) * fVar4 + __real_41200000) * fVar4 *
             fVar4 * fVar4;
    }
  }
  return fVar3;
}

// Stop @ 14d5d0fb0

void __thiscall UE::Cameras::FCameraVariableSetter::Stop(FCameraVariableSetter *this,bool param_1)

{
  EState EVar1;
  float fVar2;
  
  EVar1 = this->State;
  if (EVar1 != Inactive) {
    if (param_1) {
      this->State = Inactive;
    }
    else {
      this->State = BlendOut;
      if (EVar1 == Full) {
        this->CurrentTime = 0.0;
        return;
      }
      if (EVar1 == BlendIn) {
        if (0.0 < this->BlendInTime) {
          fVar2 = this->CurrentTime / this->BlendInTime;
          if (__real_3f800000 <= fVar2) {
            fVar2 = __real_3f800000;
          }
          if (fVar2 <= 0.0) {
            fVar2 = 0.0;
          }
          this->CurrentTime = (__real_3f800000 - fVar2) * this->BlendOutTime;
          return;
        }
        this->CurrentTime = (__real_3f800000 - __real_3f800000) * this->BlendOutTime;
        return;
      }
    }
  }
  return;
}

// Update @ 14d5d2ce0

void __thiscall
UE::Cameras::FCameraVariableSetter::Update(FCameraVariableSetter *this,float param_1)

{
  EState EVar1;
  float fVar2;
  
  EVar1 = this->State;
  if ((EVar1 == BlendIn) || (EVar1 == BlendOut)) {
    fVar2 = param_1 + this->CurrentTime;
    if (EVar1 == BlendIn) {
      if (this->BlendInTime <= fVar2) {
        this->State = Full;
        fVar2 = this->BlendInTime;
      }
LAB_14d5d2d0b:
      this->CurrentTime = fVar2;
      return;
    }
    if (EVar1 == BlendOut) {
      if (fVar2 < this->BlendOutTime) goto LAB_14d5d2d0b;
      this->CurrentTime = this->BlendOutTime;
      this->State = Inactive;
    }
  }
  return;
}

// UpdateState @ 14d5d43c0

void __thiscall
UE::Cameras::FCameraVariableSetter::UpdateState(FCameraVariableSetter *this,float param_1)

{
  EState EVar1;
  float fVar2;
  
  EVar1 = this->State;
  if ((EVar1 == BlendIn) || (EVar1 == BlendOut)) {
    fVar2 = param_1 + this->CurrentTime;
    if (EVar1 == BlendIn) {
      if (this->BlendInTime <= fVar2) {
        this->State = Full;
        fVar2 = this->BlendInTime;
      }
LAB_14d5d43eb:
      this->CurrentTime = fVar2;
      return;
    }
    if (EVar1 == BlendOut) {
      if (fVar2 < this->BlendOutTime) goto LAB_14d5d43eb;
      this->CurrentTime = this->BlendOutTime;
      this->State = Inactive;
    }
  }
  return;
}

// ~FCameraVariableSetter @ 14d600210

void __thiscall
UE::Cameras::FCameraVariableSetter::~FCameraVariableSetter(FCameraVariableSetter *this)

{
  this->_padding_ = (longlong)&___7FCameraVariableSetter_Cameras_UE__6B_;
  return;
}

// Apply @ 14d6089b0

void __thiscall
UE::Cameras::FCameraVariableSetter::Apply(FCameraVariableSetter *this,FCameraVariableTable *param_1)

{
  return;
}

