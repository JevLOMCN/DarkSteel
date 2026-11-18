// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosDebugDrawColorsByState @ 14373cba0

FChaosDebugDrawColorsByState * __thiscall
Chaos::DebugDraw::FChaosDebugDrawColorsByState::FChaosDebugDrawColorsByState
          (FChaosDebugDrawColorsByState *this,FColor param_1,FColor param_2,FColor param_3,
          FColor param_4,FColor param_5)

{
  (this->StaticColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_4.field0_0x0;
  (this->DebrisColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_5.field0_0x0;
  (this->DynamicColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
  (this->SleepingColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_2.field0_0x0;
  (this->KinematicColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_3.field0_0x0;
  return this;
}

// GetColorFromState @ 14378fda0

/* WARNING: Removing unreachable block (ram,0x00014378fde4) */
/* WARNING: Removing unreachable block (ram,0x00014378fddb) */
/* WARNING: Removing unreachable block (ram,0x00014378fdee) */

FColor __thiscall
Chaos::DebugDraw::FChaosDebugDrawColorsByState::GetColorFromState
          (FChaosDebugDrawColorsByState *this,EObjectStateType param_1,bool param_2)

{
  undefined7 in_register_00000011;
  char in_R9B;
  
  if ((in_R9B != '\0') && (!param_2)) {
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->DebrisColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  }
  if (!param_2) {
    ((FColor_u_0 *)CONCAT71(in_register_00000011,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Purple.field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  }
  *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->SleepingColor).field0_0x0;
  return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
}

