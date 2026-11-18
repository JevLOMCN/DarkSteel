// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14758d190

UScriptStruct * __cdecl FTransformTrajectory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectory.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTransformTrajectory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformTrajectory,(UObject *)pUVar1,
                         L"TransformTrajectory");
  }
  return Z_Registration_Info_UScriptStruct_FTransformTrajectory.OuterSingleton;
}

// GetSampleAtTime @ 1475dd750

FTransformTrajectorySample * __thiscall
FTransformTrajectory::GetSampleAtTime
          (FTransformTrajectory *this,FTransformTrajectorySample *__return_storage_ptr__,
          float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FTransformTrajectorySample *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  
  uVar8 = (this->Samples).ArrayNum;
  if ((int)uVar8 < 2) {
    if ((int)uVar8 < 1) {
      (__return_storage_ptr__->Facing).X = 0.0;
      (__return_storage_ptr__->Facing).Y = 0.0;
      (__return_storage_ptr__->Facing).Z = 0.0;
      (__return_storage_ptr__->Facing).W = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
      *(undefined8 *)&__return_storage_ptr__->TimeInSeconds = 0;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (__return_storage_ptr__->Facing).X = UE::Math::TQuat<double>::Identity.X;
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (__return_storage_ptr__->Facing).Z = UE::Math::TQuat<double>::Identity.Z;
      (__return_storage_ptr__->Facing).W = dVar4;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (__return_storage_ptr__->Position).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      __return_storage_ptr__->TimeInSeconds = 0.0;
    }
    else {
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      dVar4 = *(double *)(pFVar1 + 8);
      (__return_storage_ptr__->Facing).X = *(double *)pFVar1;
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = *(double *)(pFVar1 + 0x18);
      (__return_storage_ptr__->Facing).Z = *(double *)(pFVar1 + 0x10);
      (__return_storage_ptr__->Facing).W = dVar4;
      dVar4 = *(double *)(pFVar1 + 0x28);
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)(pFVar1 + 0x20);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
      uVar5 = *(undefined8 *)(pFVar1 + 0x38);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = *(double *)(pFVar1 + 0x30);
      *(undefined8 *)&__return_storage_ptr__->TimeInSeconds = uVar5;
    }
  }
  else {
    uVar11 = 0;
    uVar10 = uVar8;
    do {
      iVar2 = (uVar10 >> 1) + uVar11;
      pFVar1 = (this->Samples).AllocatorInstance.Data + (longlong)iVar2 * 0x40 + 0x38;
      if (*(float *)pFVar1 <= param_1 && param_1 != *(float *)pFVar1) {
        uVar11 = iVar2 + (uVar10 & 1);
      }
      uVar7 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar7 != 0);
    uVar10 = uVar8 - 1;
    if ((int)uVar11 < (int)(uVar8 - 1)) {
      uVar10 = uVar11;
    }
    uVar11 = 1;
    if (1 < (int)uVar10) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11 - 1;
    uVar13 = ~uVar10 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar10 < (int)uVar8) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
      return pFVar9;
    }
    pFVar1 = (this->Samples).AllocatorInstance.Data;
    lVar12 = (longlong)(int)uVar10 * 0x40;
    uVar8 = 0;
    if ((int)uVar11 < (this->Samples).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
      return pFVar9;
    }
    iVar2 = (this->Samples).ArrayNum;
    fVar14 = *(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40 + 0x38
                       ) - *(float *)(pFVar1 + lVar12 + 0x38);
    if ((float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      uVar8 = 0;
      if ((int)uVar10 < iVar2) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      dVar4 = *(double *)(pFVar1 + lVar12 + 8);
      (__return_storage_ptr__->Facing).X = *(double *)(pFVar1 + lVar12);
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = *(double *)(pFVar1 + lVar12 + 0x10 + 8);
      (__return_storage_ptr__->Facing).Z = *(double *)(pFVar1 + lVar12 + 0x10);
      (__return_storage_ptr__->Facing).W = dVar4;
      dVar4 = *(double *)(pFVar1 + lVar12 + 0x20 + 8);
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)(pFVar1 + lVar12 + 0x20);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
      uVar5 = *(undefined8 *)(pFVar1 + lVar12 + 0x30 + 8);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = *(double *)(pFVar1 + lVar12 + 0x30);
      *(undefined8 *)&__return_storage_ptr__->TimeInSeconds = uVar5;
    }
    else {
      uVar8 = 0;
      if ((int)uVar10 < iVar2) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      fVar14 = (param_1 - *(float *)((this->Samples).AllocatorInstance.Data + lVar12 + 0x38)) /
               fVar14;
      if (!param_2) {
        if (__real_3f800000 <= fVar14) {
          fVar14 = __real_3f800000;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Samples).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FTransformTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      FTransformTrajectorySample::Lerp
                ((FTransformTrajectorySample *)(pFVar1 + lVar12),__return_storage_ptr__,
                 (FTransformTrajectorySample *)
                 ((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40),fVar14);
    }
  }
  return __return_storage_ptr__;
}

