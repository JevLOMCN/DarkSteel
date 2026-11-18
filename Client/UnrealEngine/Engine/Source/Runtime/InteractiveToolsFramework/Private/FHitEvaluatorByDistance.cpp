// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// UpdateHit @ 1496c3db0

void __cdecl
`UGizmoElementGroupBase::LineTrace'::__l5::FHitEvaluatorByDistance::UpdateHit
          (EGizmoElementHitSortType param_1,FInputRayHit *param_2,FLineTraceOutput *param_3,
          FInputRayHit *param_4,FLineTraceOutput *param_5)

{
  double dVar1;
  FWeakObjectPtr FVar2;
  undefined7 uVar3;
  undefined3 uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_4->bHit != false) {
    bVar6 = param_2->bHit == false;
    if (param_2->bHit != false) {
      bVar6 = param_4->HitDepth < param_2->HitDepth;
    }
    if (bVar6) {
      uVar3 = *(undefined7 *)&param_4->field_0x1;
      dVar1 = param_4->HitDepth;
      param_2->bHit = param_4->bHit;
      *(undefined7 *)&param_2->field_0x1 = uVar3;
      param_2->HitDepth = dVar1;
      dVar1 = (param_4->HitNormal).field0_0x0._s_0.Y;
      (param_2->HitNormal).field0_0x0._s_0.X = (param_4->HitNormal).field0_0x0._s_0.X;
      (param_2->HitNormal).field0_0x0._s_0.Y = dVar1;
      bVar6 = param_4->bHasHitNormal;
      uVar4 = *(undefined3 *)&param_4->field_0x29;
      iVar5 = param_4->HitIdentifier;
      (param_2->HitNormal).field0_0x0._s_0.Z = (param_4->HitNormal).field0_0x0._s_0.Z;
      param_2->bHasHitNormal = bVar6;
      *(undefined3 *)&param_2->field_0x29 = uVar4;
      param_2->HitIdentifier = iVar5;
      FVar2 = (param_4->HitObject).WeakPtr;
      param_2->HitOwner = param_4->HitOwner;
      (param_2->HitObject).WeakPtr = FVar2;
      *param_3 = *param_5;
    }
  }
  return;
}

