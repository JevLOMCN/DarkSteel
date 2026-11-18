// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14822e550

UScriptStruct * __cdecl FLinearConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLinearConstraint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLinearConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLinearConstraint,(UObject *)pUVar1,
                         L"LinearConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FLinearConstraint.OuterSingleton;
}

// FLinearConstraint @ 14824f470

FLinearConstraint * __thiscall FLinearConstraint::FLinearConstraint(FLinearConstraint *this)

{
  this->field_0x10 = this->field_0x10 & 0xfe;
  *(undefined4 *)&this->field_0x8 = 0;
  this->Limit = 0.0;
  *(undefined8 *)this = 0;
  this->XMotion = '\x02';
  this->YMotion = '\x02';
  (this->ZMotion).Value = '\x02';
  *(undefined4 *)&this->field_0xc = 0x40a00000;
  return this;
}

// UpdateLinearLimit_AssumesLocked @ 1482bcff0

void __thiscall
FLinearConstraint::UpdateLinearLimit_AssumesLocked
          (FLinearConstraint *this,FPhysicsConstraintReference_Chaos *param_1,float param_2,
          float param_3)

{
  byte bVar1;
  ELimitAxis EVar2;
  bool bVar3;
  bool bVar4;
  ELinearConstraintMotion EVar5;
  ELinearConstraintMotion EVar6;
  float fVar7;
  
  fVar7 = param_3 * this->Limit;
  if (fVar7 <= __real_38d1b717) {
    fVar7 = __real_38d1b717;
  }
  bVar3 = (double)fVar7 < __real_3fb999999999999a;
  if ((((this->field_0x10 & 1) == 0) || (param_2 * *(float *)this != 0.0)) ||
     (param_2 * *(float *)&this->field_0x4 != 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar1 = (this->XMotion).Value;
  EVar5 = (ELinearConstraintMotion)bVar1;
  if ((bVar1 == 2) || ((EVar6 = EVar5, bVar1 == 1 && (bVar3)))) {
    EVar6 = LCM_Locked;
  }
  FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,X,EVar6);
  if ((bVar4) && (EVar5 == LCM_Limited)) {
    FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,X,LCM_Free);
  }
  EVar2 = (this->YMotion).Value;
  EVar5 = (ELinearConstraintMotion)EVar2;
  if ((EVar2 == Z) || ((EVar6 = EVar5, EVar2 == Y && (bVar3)))) {
    EVar6 = LCM_Locked;
  }
  FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,Y,EVar6);
  if ((bVar4) && (EVar5 == LCM_Limited)) {
    FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,EVar2,LCM_Free);
  }
  bVar1 = (this->ZMotion).Value;
  EVar5 = LCM_Locked;
  if ((bVar1 != 2) && ((bVar1 != 1 || (!bVar3)))) {
    EVar5 = (uint)bVar1;
  }
  FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,Z,EVar5);
  if ((bVar4) && (bVar1 == LCM_Limited)) {
    FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked(param_1,Z,LCM_Free);
  }
  if ((((this->XMotion).Value != '\0') || ((this->YMotion).Value != '\0')) ||
     ((this->ZMotion).Value != '\0')) {
    FPhysInterface_Chaos::UpdateLinearLimitParams_AssumesLocked(param_1,fVar7,param_2,this);
  }
  return;
}

