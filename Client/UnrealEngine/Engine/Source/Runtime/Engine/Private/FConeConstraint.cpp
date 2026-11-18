// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822e5a0

UScriptStruct * __cdecl FConeConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConeConstraint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConeConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConeConstraint,(UObject *)pUVar1,
                         L"ConeConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FConeConstraint.OuterSingleton;
}

// FConeConstraint @ 14824e630

FConeConstraint * __thiscall FConeConstraint::FConeConstraint(FConeConstraint *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)&this->_padding_ = 0x42480000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x40a00000;
  this->Swing1LimitDegrees = 45.0;
  this->Swing2LimitDegrees = 45.0;
  this->Swing1Motion = '\0';
  this->Swing2Motion = '\0';
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  return this;
}

// UpdateConeLimit_AssumesLocked @ 1482b76a0

void __thiscall
FConeConstraint::UpdateConeLimit_AssumesLocked
          (FConeConstraint *this,FPhysicsConstraintReference_Chaos *param_1,float param_2)

{
  bool bVar1;
  EAngularConstraintMotion EVar2;
  
  if (((this->Swing1Motion).Value == '\x01') || ((this->Swing2Motion).Value == '\x01')) {
    FPhysInterface_Chaos::UpdateConeLimitParams_AssumesLocked(param_1,param_2,this);
  }
  if ((((this->_padding_ & 1) == 0) || (param_2 * *(float *)&this->_padding_ != 0.0)) ||
     (param_2 * *(float *)((longlong)&this->_padding_ + 4) != 0.0)) {
    bVar1 = false;
LAB_1482b7711:
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked
              (param_1,Swing1,(uint)(this->Swing1Motion).Value);
    if (bVar1) goto LAB_1482b7725;
  }
  else {
    bVar1 = true;
    if ((this->Swing1Motion).Value != '\x01') goto LAB_1482b7711;
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing1,ACM_Free);
LAB_1482b7725:
    if ((this->Swing2Motion).Value == '\x01') {
      EVar2 = ACM_Free;
      goto LAB_1482b7735;
    }
  }
  EVar2 = (EAngularConstraintMotion)(this->Swing2Motion).Value;
LAB_1482b7735:
  FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing2,EVar2);
  return;
}

