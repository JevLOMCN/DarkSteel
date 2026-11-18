// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GetBounds @ 143606780

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TPolyline<double,3>::GetBounds
          (TPolyline<double,3> *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TAxisAlignedBox3<double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  lVar8 = (longlong)(this->Vertices).ArrayNum;
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Vertices).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TAxisAlignedBox3<double> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Vertices).AllocatorInstance.Data;
      dVar2 = *(double *)(pFVar3 + lVar10);
      if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
      }
      if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar2 &&
          dVar2 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
      }
      dVar2 = *(double *)(pFVar3 + lVar10 + 8);
      if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
      }
      dVar2 = *(double *)(pFVar3 + lVar10 + 0x10);
      if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return __return_storage_ptr__;
}

// GetSegmentPoint @ 143607320

TVector<double> * __thiscall
UE::Geometry::TPolyline<double,3>::GetSegmentPoint
          (TPolyline<double,3> *this,TVector<double> *__return_storage_ptr__,int param_1,
          double param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_70;
  undefined8 local_58;
  
  lVar8 = (longlong)param_1;
  uVar9 = param_1 + 1;
  uVar7 = 0;
  if ((int)uVar9 < (this->Vertices).ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  lVar6 = (longlong)(int)uVar9;
  uVar7 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  local_70._s_0.X = *(double *)(pFVar1 + lVar6 * 0x18) - *(double *)(pFVar2 + lVar8 * 0x18);
  local_58 = 0;
  local_70._s_0.Z =
       *(double *)(pFVar1 + lVar6 * 0x18 + 0x10) - *(double *)(pFVar2 + lVar8 * 0x18 + 0x10);
  dVar10 = (*(double *)(pFVar2 + lVar8 * 0x18) + *(double *)(pFVar1 + lVar6 * 0x18)) *
           __real_3fe0000000000000;
  dVar12 = (*(double *)(pFVar2 + lVar8 * 0x18 + 0x10) + *(double *)(pFVar1 + lVar6 * 0x18 + 0x10)) *
           __real_3fe0000000000000;
  local_70._s_0.Y = *(double *)(pFVar1 + lVar6 * 0x18 + 8) - *(double *)(pFVar2 + lVar8 * 0x18 + 8);
  dVar11 = (*(double *)(pFVar2 + lVar8 * 0x18 + 8) + *(double *)(pFVar1 + lVar6 * 0x18 + 8)) *
           __real_3fe0000000000000;
  Normalize<double>((TVector<double> *)&local_70._s_0,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_70._s_0.X * param_2 + dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_70._s_0.Y * param_2 + dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_70._s_0.Z * param_2 + dVar12;
  return __return_storage_ptr__;
}

