// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822e630

UScriptStruct * __cdecl FTwistConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTwistConstraint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTwistConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTwistConstraint,(UObject *)pUVar1,
                         L"TwistConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FTwistConstraint.OuterSingleton;
}

// FTwistConstraint @ 148250c20

FTwistConstraint * __thiscall FTwistConstraint::FTwistConstraint(FTwistConstraint *this)

{
  this->field_0x10 = this->field_0x10 | 1;
  *(undefined4 *)this = 0x42480000;
  *(undefined8 *)&this->field_0x4 = 0x40a00000;
  this->TwistLimitDegrees = 45.0;
  (this->TwistMotion).Value = '\0';
  *(undefined4 *)&this->field_0xc = 0x3f800000;
  return this;
}

// UpdateTwistLimit_AssumesLocked @ 1482bdf40

void __thiscall
FTwistConstraint::UpdateTwistLimit_AssumesLocked
          (FTwistConstraint *this,FPhysicsConstraintReference_Chaos *param_1,float param_2)

{
  EAngularConstraintMotion EVar1;
  
  if ((this->TwistMotion).Value == '\x01') {
    FPhysInterface_Chaos::UpdateTwistLimitParams_AssumesLocked(param_1,param_2,this);
  }
  if (((((this->field_0x10 & 1) == 0) || (param_2 * *(float *)this != 0.0)) ||
      (param_2 * *(float *)&this->field_0x4 != 0.0)) || ((this->TwistMotion).Value != '\x01')) {
    EVar1 = (EAngularConstraintMotion)(this->TwistMotion).Value;
  }
  else {
    EVar1 = ACM_Free;
  }
  FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Twist,EVar1);
  return;
}

