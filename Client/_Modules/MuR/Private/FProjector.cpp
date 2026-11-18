// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// GetDirectionSideUp @ 14ab27e70

void __thiscall
UE::Mutable::Private::FProjector::GetDirectionSideUp
          (FProjector *this,TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined8 *)&param_1->field0_0x0 = *(undefined8 *)&(this->direction).field0_0x0;
  (param_1->field0_0x0)._s_0.Z = (this->direction).field0_0x0._s_0.Z;
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)&(this->up).field0_0x0;
  (param_3->field0_0x0)._s_0.Z = (this->up).field0_0x0._s_0.Z;
  fVar3 = (this->up).field0_0x0._s_0.Z;
  fVar6 = (this->direction).field0_0x0._s_0.X;
  fVar4 = (this->up).field0_0x0._s_0.Y;
  fVar1 = (this->up).field0_0x0._s_0.X;
  fVar5 = fVar4 * (this->direction).field0_0x0._s_0.Z - fVar3 * (this->direction).field0_0x0._s_0.Y;
  fVar2 = (this->direction).field0_0x0._s_0.Z;
  fVar4 = fVar1 * (this->direction).field0_0x0._s_0.Y - fVar6 * fVar4;
  (param_2->field0_0x0)._s_0.X = fVar5;
  fVar6 = fVar6 * fVar3 - fVar1 * fVar2;
  (param_2->field0_0x0)._s_0.Y = fVar6;
  (param_2->field0_0x0)._s_0.Z = fVar4;
  fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if (__real_322bcc77 < fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    (param_2->field0_0x0)._s_0.X = fVar3 * fVar5;
    (param_2->field0_0x0)._s_0.Y = fVar3 * fVar6;
    (param_2->field0_0x0)._s_0.Z = fVar3 * fVar4;
  }
  return;
}

// Serialise @ 14ab858f0

void __thiscall
UE::Mutable::Private::FProjector::Serialise(FProjector *this,FOutputArchive *param_1)

{
  EProjectorType local_res8 [2];
  
  local_res8[0] = this->type;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->position).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->direction,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->direction).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->direction).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->up,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->up).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->up).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->scale,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->scale).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->scale).field0_0x0 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab85a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->projectionAngle,4);
  return;
}

// Unserialise @ 14ab8d4f0

void __thiscall
UE::Mutable::Private::FProjector::Unserialise(FProjector *this,FInputArchive *param_1)

{
  EProjectorType local_res8 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  this->type = local_res8[0];
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->position).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->direction,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->direction).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->direction).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->up,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->up).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->up).field0_0x0 + 8),4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->scale,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->scale).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->scale).field0_0x0 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab8d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->projectionAngle,4);
  return;
}

