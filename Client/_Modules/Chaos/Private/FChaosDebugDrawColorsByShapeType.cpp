// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosDebugDrawColorsByShapeType @ 14373cb70

FChaosDebugDrawColorsByShapeType * __thiscall
Chaos::DebugDraw::FChaosDebugDrawColorsByShapeType::FChaosDebugDrawColorsByShapeType
          (FChaosDebugDrawColorsByShapeType *this,FColor param_1,FColor param_2,FColor param_3,
          FColor param_4,FColor param_5)

{
  (this->TriangleMeshColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_4.field0_0x0;
  (this->LevelSetColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_5.field0_0x0;
  (this->SimpleTypeColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
  (this->ConvexColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_2.field0_0x0;
  (this->HeightFieldColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_3.field0_0x0;
  return this;
}

// GetColorFromShapeType @ 14378fd00

FColor __thiscall
Chaos::DebugDraw::FChaosDebugDrawColorsByShapeType::GetColorFromShapeType
          (FChaosDebugDrawColorsByShapeType *this,uchar param_1)

{
  undefined7 in_register_00000011;
  undefined1 in_R8B;
  
  switch(in_R8B) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 9:
  case 10:
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->SimpleTypeColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  default:
    ((FColor_u_0 *)CONCAT71(in_register_00000011,param_1))->_s_0 =
         (FColor_u_0_s_0)FColor::Purple.field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  case 6:
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->LevelSetColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  case 8:
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->ConvexColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  case 0xb:
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->TriangleMeshColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  case 0xc:
    *(FColor_u_0 *)CONCAT71(in_register_00000011,param_1) = (this->HeightFieldColor).field0_0x0;
    return (FColor)SUB84(CONCAT71(in_register_00000011,param_1),0);
  }
}

