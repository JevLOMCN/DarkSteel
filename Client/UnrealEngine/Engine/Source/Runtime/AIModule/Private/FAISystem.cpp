// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// CheckIsTargetInSightCone @ 146e86070

bool __cdecl
FAISystem::CheckIsTargetInSightCone
          (TVector<double> *param_1,TVector<double> *param_2,float param_3,float param_4,
          float param_5,float param_6,TVector<double> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (__real_322bcc77 < (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar1 = (double)param_4;
    dVar4 = (param_1->field0_0x0)._s_0.X - dVar1 * (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y - dVar1 * (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z - dVar1 * (param_2->field0_0x0)._s_0.Z;
  }
  else {
    dVar4 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
  }
  dVar4 = (param_7->field0_0x0)._s_0.X - dVar4;
  dVar1 = (param_7->field0_0x0)._s_0.Z - dVar1;
  dVar3 = (param_7->field0_0x0)._s_0.Y - dVar3;
  dVar2 = dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1;
  if ((dVar2 <= (double)param_6) && ((double)param_5 <= dVar2)) {
    if (dVar2 < __real_3e45798ee0000000) {
      return true;
    }
    dVar2 = __real_3ff0000000000000 / SQRT(dVar2);
    return (double)param_3 <
           dVar3 * dVar2 * (param_2->field0_0x0)._s_0.Y +
           dVar4 * dVar2 * (param_2->field0_0x0)._s_0.X +
           dVar1 * dVar2 * (param_2->field0_0x0)._s_0.Z;
  }
  return false;
}

// FindClosestLocation @ 146e8b6e0

TVector<double> * __cdecl
FAISystem::FindClosestLocation
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_res8 [8];
  
  uVar4 = InvalidLocation.field0_0x0._s_0.Y;
  iVar3 = param_2->ArrayNum;
  pFVar5 = (param_2->AllocatorInstance).Data;
  (__return_storage_ptr__->field0_0x0)._s_0.X = InvalidLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = InvalidLocation.field0_0x0._s_0.Z;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x18;
  dVar2 = __real_7fefffffffffffff;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    dVar7 = *(double *)(pFVar5 + 8) - (param_1->field0_0x0)._s_0.Y;
    dVar6 = *(double *)pFVar5 - (param_1->field0_0x0)._s_0.X;
    dVar8 = *(double *)(pFVar5 + 0x10) - (param_1->field0_0x0)._s_0.Z;
    dVar8 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
    if (dVar8 < dVar2) {
      dVar6 = *(double *)(pFVar5 + 8);
      dVar2 = *(double *)(pFVar5 + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      dVar2 = dVar8;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  return __return_storage_ptr__;
}

// IsValidLocation @ 146fba350

bool __cdecl FAISystem::IsValidLocation(TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((__real_c7efffffe0000000 < dVar1) && (dVar1 < __real_47efffffe0000000)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y, __real_c7efffffe0000000 < dVar1)) &&
     (((dVar1 < __real_47efffffe0000000 &&
       (dVar1 = (param_1->field0_0x0)._s_0.Z, __real_c7efffffe0000000 < dVar1)) &&
      (dVar1 < __real_47efffffe0000000)))) {
    return true;
  }
  return false;
}

