// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 1

// operator() @ 14a8407d0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
`UWN_ISKM_CharacterCore::ISKM_UpdateAnimation_AnyThread'::__l2::<lambda_1>::operator()
          (void *this,__FWN_SkeletalMeshInstanceInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  code *pcVar5;
  __m128 _Var6;
  __m128 _Var7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulong64 uVar18;
  bool bVar19;
  int iVar20;
  FWN_ISKM_InstanceData *pFVar21;
  UObject *pUVar22;
  __m128 *p_Var23;
  int iVar24;
  EWN_ISKM_InstanceFlags EVar25;
  float fVar26;
  __m128 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  
  if ((param_1->InstKey).Value != 0xffffffff) {
    pFVar21 = UWN_ISKM_Subsystem::GetInstanceData
                        (*(UWN_ISKM_Subsystem **)(*(longlong *)this + 0x128),&param_1->InstKey);
    if (**(char **)((longlong)this + 8) != '\0') {
      fVar26 = **(float **)((longlong)this + 0x20);
      uVar1 = **(uint **)((longlong)this + 0x18);
      uVar2 = **(uint **)((longlong)this + 0x10);
      if ((0xfffe < (int)uVar2) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5386124812953321589>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                              ,0x75,"InGlobalFrameIndex_A < 0xffffui16"), bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0xfffe < (int)uVar1) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5386124812953321590>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                              ,0x76,"InGlobalFrameIndex_B < 0xffffui16"), bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0.0 <= fVar26) {
        if ((__real_3f800000 < fVar26) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5386124812953321592>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                                ,0x78,"InAnimBlendingWeight <= 1.0f"), bVar19))
        goto code_r0x00014a840922;
      }
      else {
        bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5386124812953321591>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                            ,0x77,"InAnimBlendingWeight >= 0.0f");
        if (bVar19) {
code_r0x00014a840922:
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar26 = fVar26 * __real_477fff00;
      uVar3 = uVar2;
      if ((pFVar21->GlobalFrameIndices_A & 0xffff) != 0xffff) {
        uVar3 = pFVar21->GlobalFrameIndices_A;
      }
      pFVar21->GlobalFrameIndices_A = uVar3 << 0x10 | uVar2 & 0xffff;
      uVar2 = uVar1;
      if ((pFVar21->GlobalFrameIndices_B & 0xffff) != 0xffff) {
        uVar2 = pFVar21->GlobalFrameIndices_B;
      }
      pFVar21->GlobalFrameIndices_B = uVar2 << 0x10 | uVar1 & 0xffff;
      pFVar21->AnimBlendingWeights =
           (uint)(longlong)fVar26 & 0xffff | pFVar21->AnimBlendingWeights << 0x10;
    }
    pUVar22 = FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
    iVar20 = (**(code **)(*(longlong *)pUVar22 + 0x3d0))(pUVar22);
    iVar24 = iVar20 + -1;
    if (iVar20 + -1 < 0) {
      iVar24 = 0;
    }
    iVar20 = *(int *)(**(longlong **)((longlong)this + 0x28) + 8);
    if (iVar24 < iVar20) {
      iVar20 = iVar24;
    }
    EVar25 = Invalid;
    if (**(char **)((longlong)this + 0x30) == '\0') {
      if (iVar20 < 4) {
        EVar25 = VisibleWithShadow;
      }
      else {
        EVar25 = Invalid;
        if (3 < iVar20) {
          EVar25 = VisibleWithoutShadow;
        }
      }
    }
    pFVar21->Flags = 0x100 << ((byte)iVar20 & 0x1f) | EVar25;
    iVar24 = *(int *)(*(longlong *)(*(longlong *)this + 0x138) + 0x7c);
    pdVar4 = *(double **)((longlong)this + 0x38);
    dVar8 = *pdVar4;
    dVar9 = pdVar4[1];
    dVar10 = pdVar4[2];
    dVar11 = pdVar4[3];
    dVar12 = pdVar4[4];
    dVar13 = pdVar4[5];
    dVar14 = pdVar4[8];
    dVar15 = pdVar4[9];
    dVar16 = pdVar4[10];
    dVar17 = pdVar4[6];
    fVar26 = *(float *)(**(longlong **)((longlong)this + 0x40) + 4);
    local_c8.m128_f32[0] = (float)dVar8;
    local_c8.m128_f32[1] = (float)dVar9;
    local_c8.m128_f32[2] = (float)dVar10;
    local_c8.m128_f32[3] = (float)dVar11;
    local_b8._4_4_ = (float)dVar13;
    local_b8._0_4_ = (float)dVar12;
    local_b8._8_4_ = (float)dVar17;
    local_b8._12_4_ = 0;
    local_a8._4_4_ = (float)dVar15;
    local_a8._0_4_ = (float)dVar14;
    local_a8._8_4_ = (float)dVar16;
    local_a8._12_4_ = 0;
    if (pFVar21->bFirstTransform == false) {
      p_Var23 = &(pFVar21->Transform).Rotation;
    }
    else {
      p_Var23 = &local_c8;
    }
    uVar18 = *(undefined8 *)((longlong)p_Var23 + 8);
    (pFVar21->PrevTransform).Rotation.m128_u64[0] = p_Var23->m128_u64[0];
    (pFVar21->PrevTransform).Rotation.m128_u64[1] = uVar18;
    uVar18 = p_Var23->m128_u64[3];
    (pFVar21->PrevTransform).Translation.m128_u64[0] =
         ((__m128 *)(p_Var23->m128_u64 + 2))->m128_u64[0];
    (pFVar21->PrevTransform).Translation.m128_u64[1] = uVar18;
    uVar18 = p_Var23->m128_u64[5];
    (pFVar21->PrevTransform).Scale3D.m128_u64[0] = ((__m128 *)(p_Var23->m128_u64 + 4))->m128_u64[0];
    (pFVar21->PrevTransform).Scale3D.m128_u64[1] = uVar18;
    pFVar21->bFirstTransform = false;
    (pFVar21->Transform).Rotation.m128_u64[0] = CONCAT44((float)dVar9,(float)dVar8);
    (pFVar21->Transform).Rotation.m128_u64[1] = CONCAT44((float)dVar11,(float)dVar10);
    _Var7.m128_f32[1] = (float)dVar13;
    _Var7.m128_f32[0] = (float)dVar12;
    _Var7.m128_f32[2] = (float)dVar17;
    _Var7.m128_f32[3] = 0.0;
    (pFVar21->Transform).Translation = _Var7;
    pFVar21->DistanceFromCamera = fVar26;
    pFVar21->Radius = (float)iVar24;
    _Var6.m128_f32[1] = (float)dVar15;
    _Var6.m128_f32[0] = (float)dVar14;
    _Var6.m128_f32[2] = (float)dVar16;
    _Var6.m128_f32[3] = 0.0;
    (pFVar21->Transform).Scale3D = _Var6;
  }
  return;
}

