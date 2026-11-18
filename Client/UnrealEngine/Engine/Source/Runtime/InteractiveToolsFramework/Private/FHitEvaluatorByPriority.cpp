// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// UpdateHit @ 1496c3e10

void __cdecl
`UGizmoElementGroupBase::LineTrace'::__l5::FHitEvaluatorByPriority::UpdateHit
          (EGizmoElementHitSortType param_1,FInputRayHit *param_2,FLineTraceOutput *param_3,
          FInputRayHit *param_4,FLineTraceOutput *param_5)

{
  int iVar1;
  double dVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  undefined7 uVar5;
  undefined3 uVar6;
  bool bVar7;
  
  if (param_4->bHit == false) {
    return;
  }
  bVar7 = param_2->bHit == false;
  if (param_2->bHit == false) goto LAB_1496c3ee3;
  iVar1 = param_3->HitPriority;
  bVar7 = param_3->bIsSurfaceHit;
  if ((param_5->bIsSurfaceHit == false) && ((param_1 & Surface) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((param_1 & Priority) == 0) || (-1 < param_5->HitPriority)) || (iVar1 < 0)) {
    if ((param_1 & Surface) != 0) {
      if (bVar4) {
        if (bVar7 == false) {
          bVar7 = true;
          goto LAB_1496c3ee3;
        }
      }
      else if (bVar7 != false) goto LAB_1496c3ed6;
    }
    if (((param_1 & Priority) == 0) || (param_5->HitPriority <= iVar1)) {
      if (((param_1 & Closest) != 0) &&
         (((param_1 & Priority) == 0 || (param_5->HitPriority == iVar1)))) {
        bVar7 = param_4->HitDepth <= param_2->HitDepth && param_2->HitDepth != param_4->HitDepth;
        goto LAB_1496c3ee3;
      }
    }
    else if (((param_1 & Surface) == 0) || (bVar7 == false)) {
      bVar7 = true;
      goto LAB_1496c3ee3;
    }
  }
LAB_1496c3ed6:
  bVar7 = false;
LAB_1496c3ee3:
  if (bVar7) {
    uVar5 = *(undefined7 *)&param_4->field_0x1;
    dVar2 = param_4->HitDepth;
    param_2->bHit = param_4->bHit;
    *(undefined7 *)&param_2->field_0x1 = uVar5;
    param_2->HitDepth = dVar2;
    dVar2 = (param_4->HitNormal).field0_0x0._s_0.Y;
    (param_2->HitNormal).field0_0x0._s_0.X = (param_4->HitNormal).field0_0x0._s_0.X;
    (param_2->HitNormal).field0_0x0._s_0.Y = dVar2;
    bVar7 = param_4->bHasHitNormal;
    uVar6 = *(undefined3 *)&param_4->field_0x29;
    iVar1 = param_4->HitIdentifier;
    (param_2->HitNormal).field0_0x0._s_0.Z = (param_4->HitNormal).field0_0x0._s_0.Z;
    param_2->bHasHitNormal = bVar7;
    *(undefined3 *)&param_2->field_0x29 = uVar6;
    param_2->HitIdentifier = iVar1;
    FVar3 = (param_4->HitObject).WeakPtr;
    param_2->HitOwner = param_4->HitOwner;
    (param_2->HitObject).WeakPtr = FVar3;
    *param_3 = *param_5;
  }
  return;
}

