// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Compute @ 147a391b0

TVector<double> * __cdecl
UE::Geometry::Spline::Math::TBezierDerivativeCalculator<UE::Math::TVector<double>,1>::Compute
          (TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_*_const,int> *param_1,float param_2,
          float param_3)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  TVector<double> **ppTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  ForAnyElementType local_98;
  int local_90 [2];
  TVector<double> **local_88;
  undefined8 uStack_80;
  
  local_88 = param_1->DataPtr;
  uStack_80 = *(undefined8 *)&param_1->ArrayNum;
  iVar9 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (3 < iVar9) {
    for (ppTVar14 = local_88; ppTVar14 != local_88 + iVar9; ppTVar14 = ppTVar14 + 1) {
      if (*ppTVar14 == (TVector<double> *)0x0) goto LAB_147a395a4;
    }
    iVar9 = _isnan((double)param_2);
    if ((iVar9 == 0) && (iVar9 = _finite((double)param_2), iVar9 != 0)) {
      uVar12 = 0;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90[0] = 0;
      local_90[1] = 0;
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,&local_98,local_90,local_90 + 1);
      fVar7 = __real_3f800000;
      fVar20 = __real_3f800000 - param_2;
      *(undefined8 *)(local_98.Data + (longlong)iVar9 * 4) = 0;
      *(undefined8 *)(local_98.Data + (longlong)iVar9 * 4 + 8) = 0;
      if ((local_90[0] < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar2)();
        return pTVar11;
      }
      *(float *)local_98.Data = fVar20 * __real_c0400000 * fVar20;
      if ((local_90[0] < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar2)();
        return pTVar11;
      }
      fVar19 = param_2 * __real_40400000;
      *(float *)(local_98.Data + 4) = (fVar7 - fVar19) * fVar20 * __real_40400000;
      if ((local_90[0] < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar2)();
        return pTVar11;
      }
      *(float *)(local_98.Data + 8) = (__real_40000000 - fVar19) * fVar19;
      if ((local_90[0] < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar2)();
        return pTVar11;
      }
      dVar3 = 0.0;
      iVar9 = param_1->ArrayNum;
      dVar4 = 0.0;
      *(float *)(local_98.Data + 0xc) = fVar19 * param_2;
      dVar18 = 0.0;
      uVar15 = uVar12;
      uVar16 = uVar12;
      dVar17 = 0.0;
      dVar5 = 0.0;
      dVar6 = 0.0;
      if (0 < iVar9) {
        do {
          uVar13 = (uint)uVar12;
          uVar10 = 0;
          if ((int)uVar13 < iVar9) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar2)();
            return pTVar11;
          }
          pdVar1 = *(double **)(uVar16 + (longlong)param_1->DataPtr);
          uVar10 = 0;
          if ((int)uVar13 < local_90[0]) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TVector<double> *)(*pcVar2)();
            return pTVar11;
          }
          uVar12 = (ulonglong)(uVar13 + 1);
          iVar9 = param_1->ArrayNum;
          dVar17 = (double)*(float *)(local_98.Data + uVar15);
          dVar18 = dVar18 + dVar17 * *pdVar1;
          dVar3 = dVar3 + dVar17 * pdVar1[1];
          dVar4 = dVar4 + dVar17 * pdVar1[2];
          uVar15 = uVar15 + 4;
          uVar16 = uVar16 + 8;
          dVar17 = dVar18;
          dVar5 = dVar3;
          dVar6 = dVar4;
        } while ((int)(uVar13 + 1) < iVar9);
      }
      dVar18 = (double)(fVar7 / param_3);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar18 * dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar18 * dVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar18 * dVar6;
      if (local_98.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_98.Data);
      return __return_storage_ptr__;
    }
  }
LAB_147a395a4:
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

