// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// ApplyConstraint @ 14df77490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FBIKConstraintLib::ApplyConstraint
          (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  TTransform<double> *pTVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_138;
  longlong local_128;
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *local_120;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_118;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  if (param_2 !=
      (TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    local_a8 = __security_cookie.value ^ (ulonglong)auStack_168;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_138,param_1->ArrayNum,Default);
    iVar14 = param_1->ArrayNum;
    uVar16 = 0;
    if (0 < iVar14) {
      lVar18 = 0;
      local_128 = 0;
      do {
        lVar19 = local_128;
        uVar17 = ~uVar16 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar16 < iVar14) {
          uVar11 = uVar17;
        }
        if (uVar11 == 0) {
          local_140 = (longlong)iVar14;
          local_148 = (longlong)(int)uVar16;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar14 = param_1->ArrayNum;
        uVar11 = *(uint *)((param_1->AllocatorInstance).Data + lVar18);
        if (uVar11 == 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar16 < iVar14) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_148 = (longlong)(int)uVar16;
            local_140 = (longlong)iVar14;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar2 + lVar18 + 0x10;
          uVar31 = *(undefined4 *)pFVar1;
          uVar32 = *(undefined4 *)(pFVar1 + 4);
          uVar33 = *(undefined4 *)(pFVar1 + 8);
          uVar34 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + lVar18 + 0x20;
          uVar35 = *(undefined4 *)pFVar1;
          uVar36 = *(undefined4 *)(pFVar1 + 4);
          uVar37 = *(undefined4 *)(pFVar1 + 8);
          uVar38 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + lVar18 + 0x30;
          uVar39 = *(undefined4 *)pFVar1;
          uVar40 = *(undefined4 *)(pFVar1 + 4);
          uVar41 = *(undefined4 *)(pFVar1 + 8);
          uVar42 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + lVar18 + 0x40;
          uVar43 = *(undefined4 *)pFVar1;
          uVar44 = *(undefined4 *)(pFVar1 + 4);
          uVar45 = *(undefined4 *)(pFVar1 + 8);
          uVar46 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + lVar18 + 0x50;
          uVar47 = *(undefined4 *)pFVar1;
          uVar48 = *(undefined4 *)(pFVar1 + 4);
          uVar49 = *(undefined4 *)(pFVar1 + 8);
          uVar50 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar2 = pFVar2 + lVar18 + 0x60;
          uVar51 = *(undefined4 *)pFVar2;
          uVar52 = *(undefined4 *)(pFVar2 + 4);
          uVar53 = *(undefined4 *)(pFVar2 + 8);
          uVar54 = *(undefined4 *)(pFVar2 + 0xc);
          uVar11 = 0;
          if ((int)uVar16 < local_138.ArrayNum) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_148 = (longlong)(int)uVar16;
            local_140 = (longlong)local_138.ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        else {
          uVar12 = 0;
          if ((int)uVar16 < iVar14) {
            uVar12 = uVar17;
          }
          if (uVar12 == 0) {
            local_148 = (longlong)(int)uVar16;
            local_140 = (longlong)iVar14;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (local_148 = (longlong)(int)uVar11, local_140 = (longlong)param_1->ArrayNum,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar13 = UE::Math::TTransform<double>::GetRelativeTransform
                              ((TTransform<double> *)(pFVar1 + (longlong)(int)uVar16 * 0x130 + 0x10)
                               ,&local_108,
                               (TTransform<double> *)
                               ((param_1->AllocatorInstance).Data +
                               (longlong)(int)uVar11 * 0x130 + 0x10));
          uVar31 = *(undefined4 *)(pTVar13->Rotation).XY.m128d_f64;
          uVar32 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 4);
          uVar33 = *(undefined4 *)((pTVar13->Rotation).XY.m128d_f64 + 1);
          uVar34 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 0xc);
          uVar35 = *(undefined4 *)(pTVar13->Rotation).ZW.m128d_f64;
          uVar36 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 4);
          uVar37 = *(undefined4 *)((pTVar13->Rotation).ZW.m128d_f64 + 1);
          uVar38 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 0xc);
          uVar39 = *(undefined4 *)(pTVar13->Translation).XY.m128d_f64;
          uVar40 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 4);
          uVar41 = *(undefined4 *)((pTVar13->Translation).XY.m128d_f64 + 1);
          uVar42 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 0xc);
          uVar43 = *(undefined4 *)(pTVar13->Translation).ZW.m128d_f64;
          uVar44 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 4);
          uVar45 = *(undefined4 *)((pTVar13->Translation).ZW.m128d_f64 + 1);
          uVar46 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 0xc);
          uVar47 = *(undefined4 *)(pTVar13->Scale3D).XY.m128d_f64;
          uVar48 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 4);
          uVar49 = *(undefined4 *)((pTVar13->Scale3D).XY.m128d_f64 + 1);
          uVar50 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 0xc);
          uVar51 = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
          uVar52 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
          uVar53 = *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
          uVar54 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
          uVar11 = 0;
          if ((int)uVar16 < local_138.ArrayNum) {
            uVar11 = uVar17;
          }
          lVar19 = local_128;
          if ((uVar11 == 0) &&
             (local_148 = (longlong)(int)uVar16, local_140 = (longlong)local_138.ArrayNum,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             lVar19 = local_128, bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar15 = (longlong)(int)uVar16;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19;
        *(undefined4 *)pFVar1 = uVar31;
        *(undefined4 *)(pFVar1 + 4) = uVar32;
        *(undefined4 *)(pFVar1 + 8) = uVar33;
        *(undefined4 *)(pFVar1 + 0xc) = uVar34;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19 + 0x10;
        *(undefined4 *)pFVar1 = uVar35;
        *(undefined4 *)(pFVar1 + 4) = uVar36;
        *(undefined4 *)(pFVar1 + 8) = uVar37;
        *(undefined4 *)(pFVar1 + 0xc) = uVar38;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19 + 0x20;
        *(undefined4 *)pFVar1 = uVar39;
        *(undefined4 *)(pFVar1 + 4) = uVar40;
        *(undefined4 *)(pFVar1 + 8) = uVar41;
        *(undefined4 *)(pFVar1 + 0xc) = uVar42;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19 + 0x30;
        *(undefined4 *)pFVar1 = uVar43;
        *(undefined4 *)(pFVar1 + 4) = uVar44;
        *(undefined4 *)(pFVar1 + 8) = uVar45;
        *(undefined4 *)(pFVar1 + 0xc) = uVar46;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19 + 0x40;
        *(undefined4 *)pFVar1 = uVar47;
        *(undefined4 *)(pFVar1 + 4) = uVar48;
        *(undefined4 *)(pFVar1 + 8) = uVar49;
        *(undefined4 *)(pFVar1 + 0xc) = uVar50;
        pFVar1 = local_138.AllocatorInstance.Data + lVar19 + 0x50;
        *(undefined4 *)pFVar1 = uVar51;
        *(undefined4 *)(pFVar1 + 4) = uVar52;
        *(undefined4 *)(pFVar1 + 8) = uVar53;
        *(undefined4 *)(pFVar1 + 0xc) = uVar54;
        uVar11 = 0;
        if ((int)uVar16 < local_138.ArrayNum) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (local_148 = lVar15, local_140 = (longlong)local_138.ArrayNum,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_128 = lVar19 + 0x60;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0x130;
        lVar15 = lVar15 * 0x60;
        dVar6 = *(double *)(local_138.AllocatorInstance.Data + lVar15);
        dVar7 = *(double *)(local_138.AllocatorInstance.Data + lVar15 + 8);
        dVar8 = *(double *)(local_138.AllocatorInstance.Data + lVar15 + 0x10);
        dVar9 = *(double *)(local_138.AllocatorInstance.Data + lVar15 + 0x10 + 8);
        auVar28._0_8_ = dVar8 * dVar8 + dVar6 * dVar6;
        auVar28._8_8_ = dVar9 * dVar9 + dVar7 * dVar7;
        auVar24._8_4_ = SUB84(auVar28._8_8_,0);
        auVar24._0_8_ = auVar28._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
        auVar25._0_8_ = auVar24._8_8_ + auVar28._0_8_;
        auVar25._8_8_ = auVar28._0_8_ + auVar28._8_8_;
        auVar29 = sqrtpd(auVar28,auVar25);
        uVar20 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar25._0_8_);
        uVar22 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar25._8_8_);
        uVar21 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar25._0_8_);
        uVar23 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar25._8_8_);
        auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
        auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
        auVar27._0_8_ = uVar21 & (ulonglong)(auVar26._0_8_ * dVar6);
        uVar5 = uVar23 & (ulonglong)(auVar26._8_8_ * dVar7);
        auVar27._8_4_ = (undefined4)uVar5;
        auVar27._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar30._0_8_ = uVar20 & (ulonglong)(auVar29._0_8_ * dVar8);
        uVar5 = uVar22 & (ulonglong)(auVar29._8_8_ * dVar9);
        auVar30._8_4_ = (undefined4)uVar5;
        auVar30._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar29._4_4_ =
             ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar29._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar29._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar29._12_4_ =
             ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar11 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar17 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar12 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(local_138.AllocatorInstance.Data + lVar15) = auVar27 | auVar29;
        auVar26._4_4_ = ~(uint)(uVar20 >> 0x20) & uVar17;
        auVar26._0_4_ = ~(uint)uVar20 & uVar11;
        auVar26._8_4_ = ~(uint)uVar22 & uVar12;
        auVar26._12_4_ = ~(uint)(uVar22 >> 0x20) & uVar4;
        *(undefined1 (*) [16])(local_138.AllocatorInstance.Data + lVar15 + 0x10) = auVar30 | auVar26
        ;
        iVar14 = param_1->ArrayNum;
      } while ((int)uVar16 < iVar14);
    }
    iVar14 = param_2->ArrayNum;
    uVar16 = 0;
    if (0 < iVar14) {
      lVar18 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar16 < iVar14) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_140 = (longlong)iVar14;
          local_148 = (longlong)(int)uVar16;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_118 = &local_138;
        local_120 = param_1;
        (*(code *)(&
                  PTR_VisitApplyEncoded<0,0,_FBIKConstraintLib::ApplyConstraint_::__l14::<lambda_1>,TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>_&>_152da0178
                  )[(byte)(param_2->AllocatorInstance).Data[lVar18 + 0xb0]])(&local_120);
        iVar14 = param_2->ArrayNum;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0xc0;
      } while ((int)uVar16 < iVar14);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildConstraints @ 14df79690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FBIKConstraintLib::BuildConstraints
          (TArrayView<FFBIKConstraintOption_const_,int> *param_1,
          TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
          *param_2,URigHierarchy *param_3,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_4
          ,TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
           *param_5,
          TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
          *param_6)

{
  double dVar1;
  EFBIKBoneLimitType EVar2;
  EFBIKBoneLimitType EVar3;
  EFBIKBoneLimitType EVar4;
  EPoleVectorOption EVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *this;
  URigHierarchy *this_00;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  FFBIKConstraintOption *pFVar30;
  TQuat<double> *pTVar31;
  int *piVar32;
  FFBIKConstraintOption *pFVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM5 [16];
  double dVar53;
  undefined1 auVar52 [16];
  uint uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_648 [32];
  longlong local_5e8;
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [8];
  undefined8 uStack_5c8;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *local_5c0;
  TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
  *local_5b8;
  URigHierarchy *local_5b0;
  longlong local_5a8;
  TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32>_>
  *local_5a0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_598;
  FRigElementKey *local_588;
  FRigElementKey local_578;
  FRigElementKey local_568;
  FRigElementKey local_558;
  uint local_548;
  undefined4 uStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  double local_528;
  double local_520;
  double dStack_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  double local_500;
  double dStack_4f8;
  undefined1 local_4f0 [16];
  double local_4e0;
  double local_4d8;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined4 local_4a8;
  uint uStack_4a4;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  byte local_418;
  undefined7 uStack_417;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3e8;
  TQuat<double> local_3d8;
  TQuat<double> local_3b8;
  TTransform<double> local_398;
  undefined1 local_338 [32];
  double local_318;
  uchar local_288;
  undefined1 local_278 [24];
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  uchar local_1c8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_648;
  local_5b8 = param_5;
  local_5c0 = param_6;
  param_2->ArrayNum = 0;
  local_5b0 = param_3;
  local_5a0 = param_2;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  dVar24 = __real_3f91df46a2529d39;
  fVar23 = __real_3f800000;
  dVar22 = __real_3e45798ee0000000;
  iVar28 = param_1->ArrayNum;
  uVar38 = 0;
  if (0 < iVar28) {
    uVar55 = (undefined4)__real_3ff0000000000000;
    uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_5e8 = 0;
    do {
      uVar34 = ~uVar38 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar38 < iVar28) {
        uVar27 = uVar34;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_5a8 = local_5e8 * 0xa0;
      if (param_1->DataPtr[local_5e8].bEnabled != false) {
        uVar27 = 0;
        if ((int)uVar38 < param_1->ArrayNum) {
          uVar27 = uVar34;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar33 = param_1->DataPtr + local_5e8;
        bVar25 = ::FName::IsWithinBounds((FNameEntryId)(pFVar33->Item).Name.ComparisonIndex.Value);
        if ((((bVar25) && ((pFVar33->Item).Name != (FName)0x0)) && ((pFVar33->Item).Type != None))
           && (puVar29 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                                 ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                                         *)param_6,&pFVar33->Item), puVar29 != (uint *)0x0)) {
          uVar27 = *puVar29;
          lVar40 = (longlong)(int)uVar27;
          pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
          if ((pFVar30->bUseAngularLimit != false) &&
             ((((pFVar30->AngularLimit).LimitType_X != Free ||
               ((pFVar30->AngularLimit).LimitType_Y != Free)) ||
              ((pFVar30->AngularLimit).LimitType_Z != Free)))) {
            uVar36 = ~uVar27 >> 0x1f;
            uVar37 = 0;
            if ((int)uVar27 < param_4->ArrayNum) {
              uVar37 = uVar36;
            }
            if ((uVar37 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar35 = lVar40 * 0x130;
            if (*(int *)((param_4->AllocatorInstance).Data + lVar35) != -1) {
              uVar37 = 0;
              if ((int)uVar27 < param_4->ArrayNum) {
                uVar37 = uVar36;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_588 = TMapBase<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
                          ::FindChecked((TMapBase<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
                                         *)local_5b8,
                                        *(int *)((param_4->AllocatorInstance).Data + lVar35));
              bVar26 = local_418 & 0xf8;
              uVar37 = 0;
              if ((int)uVar27 < param_4->ArrayNum) {
                uVar37 = uVar36;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_4a8 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar35);
              uStack_4a4 = uVar27;
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              dVar1 = (pFVar30->AngularLimit).Limit.field0_0x0._s_0.X;
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              EVar2 = (pFVar30->AngularLimit).LimitType_X;
              dStack_410 = dVar1 * dVar24;
              if (EVar2 == Locked) {
                dStack_410 = 0.0;
              }
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              dVar1 = (pFVar30->AngularLimit).Limit.field0_0x0._s_0.Y;
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              EVar3 = (pFVar30->AngularLimit).LimitType_Y;
              local_408 = dVar1 * dVar24;
              if (EVar3 == Locked) {
                local_408 = 0.0;
              }
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              dVar1 = (pFVar30->AngularLimit).Limit.field0_0x0._s_0.Z;
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              this_00 = local_5b0;
              EVar4 = (pFVar30->AngularLimit).LimitType_Z;
              dStack_400 = dVar1 * dVar24;
              if (EVar4 == Locked) {
                dStack_400 = 0.0;
              }
              local_578.Type = (pFVar33->Item).Type;
              local_578._1_3_ = *(undefined3 *)&(pFVar33->Item).field_0x1;
              local_578.Name.ComparisonIndex.Value = (pFVar33->Item).Name.ComparisonIndex.Value;
              local_418 = -(EVar4 != Free) & 4U | -(EVar3 != Free) & 2U | EVar2 != Free | bVar26;
              local_578.Name.Number = (pFVar33->Item).Name.Number;
              iVar28 = URigHierarchy::GetIndex(local_5b0,&local_578,true);
              URigHierarchy::GetGlobalTransformByIndex(this_00,&local_158,iVar28,true);
              local_568.Type = local_588->Type;
              local_568._1_3_ = *(undefined3 *)&local_588->field_0x1;
              local_568.Name.ComparisonIndex.Value = (local_588->Name).ComparisonIndex.Value;
              local_568.Name.Number = (local_588->Name).Number;
              iVar28 = URigHierarchy::GetIndex(this_00,&local_568,true);
              URigHierarchy::GetGlobalTransformByIndex(this_00,&local_1b8,iVar28,true);
              UE::Math::TTransform<double>::GetRelativeTransform(&local_158,&local_398,&local_1b8);
              pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
              pTVar31 = UE::Math::TRotator<double>::Quaternion(&pFVar30->OffsetRotation,&local_3d8);
              local_498 = pTVar31->X;
              dStack_490 = pTVar31->Y;
              local_488 = pTVar31->Z;
              dStack_480 = pTVar31->W;
              local_478 = local_398.Rotation.XY.m128d_f64[0];
              dStack_470 = local_398.Rotation.XY.m128d_f64[1];
              local_468 = local_398.Rotation.ZW.m128d_f64[0];
              dStack_460 = local_398.Rotation.ZW.m128d_f64[1];
              local_458 = local_398.Translation.XY.m128d_f64[0];
              dStack_450 = local_398.Translation.XY.m128d_f64[1];
              local_448 = local_398.Translation.ZW.m128d_f64[0];
              dStack_440 = local_398.Translation.ZW.m128d_f64[1];
              local_438 = local_398.Scale3D.XY.m128d_f64[0];
              dStack_430 = local_398.Scale3D.XY.m128d_f64[1];
              local_428 = local_398.Scale3D.ZW.m128d_f64[0];
              dStack_420 = local_398.Scale3D.ZW.m128d_f64[1];
              local_278._4_4_ = uStack_4a4;
              local_278._0_4_ = local_4a8;
              local_278._8_8_ = uStack_4a0;
              local_248 = local_398.Rotation.XY.m128d_f64[0];
              dStack_240 = local_398.Rotation.XY.m128d_f64[1];
              local_238 = local_398.Rotation.ZW.m128d_f64[0];
              dStack_230 = local_398.Rotation.ZW.m128d_f64[1];
              local_228 = local_398.Translation.XY.m128d_f64[0];
              dStack_220 = local_398.Translation.XY.m128d_f64[1];
              local_218 = local_398.Translation.ZW.m128d_f64[0];
              dStack_210 = local_398.Translation.ZW.m128d_f64[1];
              local_208 = local_398.Scale3D.XY.m128d_f64[0];
              dStack_200 = local_398.Scale3D.XY.m128d_f64[1];
              local_1e8._1_7_ = uStack_417;
              local_1e8[0] = local_418;
              local_1e8._8_8_ = dStack_410;
              local_1f8 = local_398.Scale3D.ZW.m128d_f64[0];
              dStack_1f0 = local_398.Scale3D.ZW.m128d_f64[1];
              pFVar39 = (param_2->AllocatorInstance).Data;
              local_1d8 = local_408;
              dStack_1d0 = dStack_400;
              local_1c8 = '\0';
              local_278._16_8_ = local_498;
              dStack_260 = dStack_490;
              local_258 = local_488;
              dStack_250 = dStack_480;
              if (((pFVar39 <= (FScriptContainerElement *)local_278) &&
                  ((FScriptContainerElement *)local_278 <
                   pFVar39 + (longlong)param_2->ArrayMax * 0xc0)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar28 = param_2->ArrayNum;
              if (iVar28 == param_2->ArrayMax) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10c0,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar28 + 1;
              TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>::
              TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                        ((TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                          *)((param_2->AllocatorInstance).Data + (longlong)iVar28 * 0xc0),
                         (TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                          *)local_278);
            }
          }
          pFVar30 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
          if (pFVar30->bUsePoleVector != false) {
            uVar36 = ~uVar27 >> 0x1f;
            uVar37 = 0;
            if ((int)uVar27 < param_4->ArrayNum) {
              uVar37 = uVar36;
            }
            if ((uVar37 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar35 = lVar40 * 0x130;
            if (*(int *)((param_4->AllocatorInstance).Data + lVar35) != -1) {
              uVar37 = 0;
              if ((int)uVar27 < param_4->ArrayNum) {
                uVar37 = uVar36;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              TMapBase<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
              ::FindChecked((TMapBase<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0>_>
                             *)local_5b8,*(int *)((param_4->AllocatorInstance).Data + lVar35));
              uStack_53c = CONCAT31(uStack_53c._1_3_,1);
              uVar37 = 0;
              if ((int)uVar27 < param_4->ArrayNum) {
                uVar37 = uVar36;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_558.Type = (pFVar33->Item).Type;
              local_558._1_3_ = *(undefined3 *)&(pFVar33->Item).field_0x1;
              local_558.Name.ComparisonIndex.Value = (pFVar33->Item).Name.ComparisonIndex.Value;
              uStack_544 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar35);
              local_558.Name.Number = (pFVar33->Item).Name.Number;
              local_548 = uVar27;
              URigHierarchy::GetChildren(local_5b0,&local_598,&local_558,false);
              this = local_5c0;
              uVar37 = 0;
              if (0 < local_598.ArrayNum) {
                do {
                  uVar36 = 0;
                  if ((int)uVar37 < local_598.ArrayNum) {
                    uVar36 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  piVar32 = TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                            ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                                    *)this,(FRigElementKey *)
                                           (local_598.AllocatorInstance.Data +
                                           (longlong)(int)uVar37 * 0xc));
                  if (piVar32 != (int *)0x0) {
                    iStack_540 = *piVar32;
                    pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[]
                                        (param_1,uVar38);
                    EVar5 = pFVar33->PoleVectorOption;
                    uStack_53c = CONCAT31(uStack_53c._1_3_,EVar5 == Direction);
                    pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[]
                                        (param_1,uVar38);
                    local_528 = (pFVar33->PoleVector).field0_0x0._s_0.Z;
                    local_338._16_16_ = *(undefined1 (*) [16])&(pFVar33->PoleVector).field0_0x0;
                    local_318 = local_528;
                    if (EVar5 == Direction) {
                      auVar17._4_8_ = in_XMM5._8_8_;
                      auVar17._0_4_ = local_338._20_4_;
                      auVar51._0_8_ = auVar17._0_8_ << 0x20;
                      auVar51._8_4_ = local_338._24_4_;
                      auVar51._12_4_ = local_338._28_4_;
                      dVar53 = auVar51._8_8_;
                      dVar1 = local_338._16_8_;
                      dVar44 = dVar53 * dVar53 + dVar1 * dVar1 + local_528 * local_528;
                      if (dVar44 == (double)CONCAT44(uVar56,uVar55)) {
                        local_318 = (pFVar33->PoleVector).field0_0x0._s_0.Z;
                      }
                      else {
                        local_338._16_16_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
                        local_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        if (dVar22 <= dVar44) {
                          local_4e0 = (double)CONCAT44(uVar56,uVar55) / SQRT(dVar44);
                          local_3e8 = local_528 * local_4e0;
                          local_338._16_8_ = dVar1 * local_4e0;
                          local_338._24_8_ = dVar53 * local_4e0;
                          local_318 = local_3e8;
                        }
                      }
                    }
                    local_338._4_4_ = uStack_544;
                    local_338._0_4_ = local_548;
                    local_338._12_4_ = uStack_53c;
                    local_338._8_4_ = iStack_540;
                    pFVar39 = (param_2->AllocatorInstance).Data;
                    local_288 = '\x02';
                    if (((pFVar39 <= (FScriptContainerElement *)local_338) &&
                        ((FScriptContainerElement *)local_338 <
                         pFVar39 + (longlong)param_2->ArrayMax * 0xc0)) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar25)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar28 = param_2->ArrayNum;
                    if (iVar28 == param_2->ArrayMax) {
                      iVar28 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x10c0,&param_2->AllocatorInstance,&param_2->ArrayMax);
                    }
                    param_2->ArrayNum = iVar28 + 1;
                    TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                    ::
                    TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                              ((TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                                *)((param_2->AllocatorInstance).Data + (longlong)iVar28 * 0xc0),
                               (TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>
                                *)local_338);
                    break;
                  }
                  uVar37 = uVar37 + 1;
                } while ((int)uVar37 < local_598.ArrayNum);
              }
              if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_598.AllocatorInstance.Data);
              }
            }
          }
          uVar37 = 0;
          if ((int)uVar38 < param_1->ArrayNum) {
            uVar37 = uVar34;
          }
          if ((uVar37 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar31 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)
                               ((longlong)&(param_1->DataPtr->OffsetRotation).Pitch + local_5a8),
                               &local_3b8);
          uVar36 = ~uVar27 >> 0x1f;
          dVar1 = pTVar31->X;
          dVar44 = pTVar31->Y;
          dVar53 = pTVar31->Z;
          dVar19 = pTVar31->W;
          uVar37 = 0;
          if ((int)uVar27 < param_4->ArrayNum) {
            uVar37 = uVar36;
          }
          local_4c8 = dVar1;
          dStack_4c0 = dVar44;
          local_4b8 = dVar53;
          dStack_4b0 = dVar19;
          if ((uVar37 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar39 = (param_4->AllocatorInstance).Data;
          lVar40 = lVar40 * 0x130;
          auVar50._8_8_ = dVar53;
          auVar50._0_8_ = dVar19;
          auVar51 = *(undefined1 (*) [16])(pFVar39 + lVar40 + 0x110);
          dVar20 = *(double *)(pFVar39 + lVar40 + 0x120);
          dVar21 = *(double *)(pFVar39 + lVar40 + 0x120 + 8);
          dVar15 = auVar51._0_8_;
          dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar16 = auVar51._8_8_;
          auVar45._8_4_ = auVar51._8_4_;
          auVar45._0_8_ = dVar16;
          auVar45._12_4_ = auVar51._12_4_;
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar14 = dVar15 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar21 * dVar44 +
                   auVar45._8_8_ * dVar19 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   dVar20 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar52._8_4_ = SUB84(dVar14,0);
          auVar52._0_8_ =
               dVar15 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar21 * dVar1 +
               dVar16 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar20 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar52._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(pFVar39 + lVar40 + 0x110) = auVar52;
          *(double *)(pFVar39 + lVar40 + 0x120) =
               dVar15 * dVar44 * dVar8 + dVar21 * dVar53 + dVar16 * dVar1 * dVar9 +
               dVar20 * dVar19 * dVar48;
          *(double *)(pFVar39 + lVar40 + 0x120 + 8) =
               dVar15 * dVar1 * dVar10 + dVar21 * dVar19 + dVar16 * dVar44 * dVar11 +
               dVar20 * dVar53 * dVar12;
          uVar37 = 0;
          if ((int)uVar27 < param_4->ArrayNum) {
            uVar37 = uVar36;
          }
          if ((uVar37 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar39 = (param_4->AllocatorInstance).Data;
          local_4d8 = dVar22;
          dVar53 = *(double *)(pFVar39 + lVar40 + 0x110);
          dVar19 = *(double *)(pFVar39 + lVar40 + 0x110 + 8);
          dVar8 = *(double *)(pFVar39 + lVar40 + 0x120);
          dVar9 = *(double *)(pFVar39 + lVar40 + 0x120 + 8);
          dVar44 = dVar8 * dVar8 + dVar53 * dVar53;
          dVar48 = dVar9 * dVar9 + dVar19 * dVar19;
          dVar1 = dVar48 + dVar44;
          dVar44 = dVar44 + dVar48;
          auVar13._8_4_ = SUB84(dVar44,0);
          auVar13._0_8_ = dVar1;
          auVar13._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          auVar51 = sqrtpd(auVar50,auVar13);
          uVar41 = -(ulonglong)(dVar22 <= dVar1);
          uVar42 = -(ulonglong)(dVar22 <= dVar44);
          uVar37 = (uint)(uVar41 >> 0x20);
          uVar54 = (uint)(uVar42 >> 0x20);
          auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar51);
          fVar43 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
          in_XMM5._0_8_ = uVar41 & (ulonglong)(auVar52._0_8_ * dVar53);
          uVar18 = uVar42 & (ulonglong)(auVar52._8_8_ * dVar19);
          in_XMM5._8_4_ = (undefined4)uVar18;
          in_XMM5._12_4_ = (undefined4)(uVar18 >> 0x20);
          auVar46._0_4_ =
               ~(uint)uVar41 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar46._4_4_ =
               ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar46._8_4_ =
               ~(uint)uVar42 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar46._12_4_ =
               ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          in_XMM5 = in_XMM5 | auVar46;
          auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51);
          *(undefined1 (*) [16])(pFVar39 + lVar40 + 0x110) = in_XMM5;
          auVar47._0_8_ = (ulonglong)(auVar51._0_8_ * dVar8) & uVar41;
          uVar18 = (ulonglong)(auVar51._8_8_ * dVar9) & uVar42;
          auVar47._8_4_ = (undefined4)uVar18;
          auVar47._12_4_ = (undefined4)(uVar18 >> 0x20);
          auVar49._0_4_ = ~(uint)uVar41 & SUB84((double)fVar43,0);
          auVar49._4_4_ = ~uVar37 & (uint)((ulonglong)(double)fVar43 >> 0x20);
          auVar49._8_4_ = ~(uint)uVar42 & SUB84((double)fVar7,0);
          auVar49._12_4_ = ~uVar54 & (uint)((ulonglong)(double)fVar7 >> 0x20);
          *(undefined1 (*) [16])(pFVar39 + lVar40 + 0x120) = auVar49 | auVar47;
          uVar37 = 0;
          if ((int)uVar27 < param_4->ArrayNum) {
            uVar37 = uVar36;
          }
          if ((uVar37 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar39 = (param_4->AllocatorInstance).Data + lVar40 + 0xf8;
          iVar28 = *(int *)(pFVar39 + 0xc);
          *(undefined4 *)&pFVar39[8].field_0x0 = 0;
          if (iVar28 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)pFVar39,0,(int *)(pFVar39 + 0xc));
          }
          uVar37 = 0;
          if ((int)uVar38 < param_1->ArrayNum) {
            uVar37 = uVar34;
          }
          if ((uVar37 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((&param_1->DataPtr->bUseStiffness)[local_5a8] != false) {
            local_5e0._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
            local_5e0._8_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
            uStack_5c8 = 0x3f800000;
            local_5d0 = (undefined1  [8])UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->AngularStiffness).field0_0x0._s_0.X;
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._4_4_ = fVar43;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->LinearStiffness).field0_0x0._s_0.X;
            uVar34 = 0;
            if ((int)uVar27 < param_4->ArrayNum) {
              uVar34 = uVar36;
            }
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._0_4_ = fVar43;
            if ((uVar34 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FFBIKLinkData::AddMotionBase
                      ((FFBIKLinkData *)((param_4->AllocatorInstance).Data + lVar40),
                       (FMotionBase *)local_5e0);
            local_520 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
            dStack_518 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
            local_5e0._0_8_ = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
            local_5e0._8_8_ = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
            local_510 = UE::Math::TVector<double>::RightVector.field0_0x0._16_4_;
            uStack_50c = UE::Math::TVector<double>::RightVector.field0_0x0._20_4_;
            uStack_508 = 0x3f800000;
            local_5d0._4_4_ = UE::Math::TVector<double>::RightVector.field0_0x0._20_4_;
            local_5d0._0_4_ = UE::Math::TVector<double>::RightVector.field0_0x0._16_4_;
            uStack_5c8._0_4_ = 0x3f800000;
            uStack_5c8._4_4_ = 0.0;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->AngularStiffness).field0_0x0._s_0.Y;
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._4_4_ = fVar43;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->LinearStiffness).field0_0x0._s_0.Y;
            uVar34 = 0;
            if ((int)uVar27 < param_4->ArrayNum) {
              uVar34 = uVar36;
            }
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._0_4_ = fVar43;
            if ((uVar34 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FFBIKLinkData::AddMotionBase
                      ((FFBIKLinkData *)((param_4->AllocatorInstance).Data + lVar40),
                       (FMotionBase *)local_5e0);
            local_500 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            dStack_4f8 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
            local_5e0._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            local_5e0._8_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
            local_4f0._8_4_ = 0x3f800000;
            local_4f0._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            local_4f0._12_4_ = 0;
            uStack_5c8._0_4_ = 0x3f800000;
            local_5d0 = (undefined1  [8])UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            uStack_5c8._4_4_ = 0.0;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->AngularStiffness).field0_0x0._s_0.Z;
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._4_4_ = fVar43;
            pFVar33 = TArrayView<FFBIKConstraintOption_const_,int>::operator[](param_1,uVar38);
            fVar43 = (float)(pFVar33->LinearStiffness).field0_0x0._s_0.Z;
            uVar34 = 0;
            if ((int)uVar27 < param_4->ArrayNum) {
              uVar34 = uVar36;
            }
            if (fVar23 <= fVar43) {
              fVar43 = fVar23;
            }
            if (fVar43 <= 0.0) {
              fVar43 = 0.0;
            }
            uStack_5c8._0_4_ = fVar43;
            if ((uVar34 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FFBIKLinkData::AddMotionBase
                      ((FFBIKLinkData *)((param_4->AllocatorInstance).Data + lVar40),
                       (FMotionBase *)local_5e0);
          }
          uVar55 = (undefined4)__real_3ff0000000000000;
          uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          param_2 = local_5a0;
          param_6 = local_5c0;
        }
      }
      uVar38 = uVar38 + 1;
      iVar28 = param_1->ArrayNum;
      local_5e8 = local_5e8 + 1;
    } while ((int)uVar38 < iVar28);
  }
  return;
}

