// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Append @ 144022010

void __thiscall
UE::Geometry::FSphereCovering::Append(FSphereCovering *this,FSphereCovering *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->Position).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,(ForAnyElementType *)this,&(this->Position).ArrayNum,
                       &(this->Position).ArrayMax);
    memcpy((this->Position).AllocatorInstance.Data + (longlong)iVar4 * 0x18,
           (param_1->Position).AllocatorInstance.Data,(longlong)iVar1 * 0x18);
  }
  pTVar5 = &this->Radius;
  if (pTVar5 == &param_1->Radius) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->Radius).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&pTVar5->AllocatorInstance,&(this->Radius).ArrayNum,
                       &(this->Radius).ArrayMax);
    memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8,
           (param_1->Radius).AllocatorInstance.Data,(longlong)iVar1 << 3);
  }
  return;
}

// TransformRange @ 144052630

void __thiscall
UE::Geometry::FSphereCovering::TransformRange
          (FSphereCovering *this,int param_1,int param_2,TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  undefined4 uVar34;
  
  uVar14 = (ulonglong)param_1;
  if (param_1 < param_2) {
    lVar15 = uVar14 * 0x18;
    uVar16 = param_1;
    do {
      uVar33 = 0;
      if ((int)uVar16 < (this->Position).ArrayNum) {
        uVar33 = ~uVar16 >> 0x1f;
      }
      if (uVar33 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      auVar29 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
      pFVar3 = (this->Position).AllocatorInstance.Data;
      auVar24 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      dVar12 = (param_3->Rotation).ZW.m128d_f64[1];
      pFVar1 = pFVar3 + lVar15;
      dVar7 = *(double *)(pFVar3 + lVar15 + 0x10) * (param_3->Scale3D).ZW.m128d_f64[0];
      dVar8 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
      uVar33 = 0;
      if ((int)uVar16 < (this->Position).ArrayNum) {
        uVar33 = ~uVar16 >> 0x1f;
      }
      dVar5 = (param_3->Scale3D).XY.m128d_f64[0] * *(double *)pFVar1;
      dVar6 = (param_3->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar1 + 8);
      uVar34 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar17 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar30._8_4_ = SUB84(dVar6,0);
      auVar30._0_8_ = dVar5;
      auVar30._12_4_ = uVar34;
      dVar2 = auVar29._0_8_;
      auVar22 = blendpd(auVar17,auVar29,2);
      auVar31._0_8_ = auVar30._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar5;
      auVar31._8_8_ = dVar7 * auVar17._8_8_ - dVar2 * dVar6;
      auVar26._8_4_ = SUB84(dVar6,0);
      auVar26._0_8_ = dVar5;
      auVar26._12_4_ = uVar34;
      auVar17._8_4_ = SUB84(dVar8,0);
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar17 = blendpd(auVar26,auVar17,2);
      auVar18._0_8_ = auVar17._0_8_ * dVar2 - auVar22._0_8_ * dVar7;
      auVar18._8_8_ = auVar17._8_8_ * auVar29._8_8_ - auVar22._8_8_ * dVar8;
      auVar17 = blendpd(auVar31,auVar18,2);
      dVar10 = auVar31._8_8_ + auVar31._8_8_;
      dVar11 = auVar18._0_8_ + auVar18._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar32._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar32._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      auVar27._8_4_ = SUB84(dVar11,0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar34;
      auVar23._8_4_ = SUB84(dVar11,0);
      auVar23._0_8_ = dVar10;
      auVar23._12_4_ = uVar34;
      auVar17 = blendpd(auVar23,auVar32,2);
      auVar28._0_8_ = auVar27._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar10;
      auVar28._8_8_ = auVar32._0_8_ * auVar24._8_8_ - dVar2 * dVar11;
      auVar22._8_4_ = SUB84(auVar28._8_8_,0);
      auVar22._0_8_ = auVar28._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      auVar26 = blendpd(auVar24,auVar29,2);
      auVar24._0_8_ = auVar17._0_8_ * dVar2 - auVar26._0_8_ * auVar32._0_8_;
      auVar24._8_8_ = auVar17._8_8_ * auVar29._8_8_ - auVar26._8_8_ * auVar32._8_8_;
      auVar29 = blendpd(auVar28,auVar24,2);
      dVar8 = (param_3->Translation).XY.m128d_f64[0];
      dVar6 = dVar11 * dVar12 + dVar6 + auVar24._0_8_ + (param_3->Translation).XY.m128d_f64[1];
      dVar2 = (param_3->Translation).ZW.m128d_f64[0];
      if (uVar33 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar1 = (this->Position).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar10 * dVar12 + dVar5 + auVar22._8_8_ + dVar8;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar15) = auVar9;
      *(double *)(pFVar1 + lVar15 + 0x10) = auVar32._0_8_ * dVar12 + dVar7 + auVar29._0_8_ + dVar2;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar16 < param_2);
    uVar14 = (ulonglong)(uint)param_1;
  }
  uVar16 = *(uint *)(param_3->Scale3D).XY.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar33 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = *(uint *)(param_3->Scale3D).ZW.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = *(uint *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1) &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar20 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar20,uVar19) <= (double)CONCAT44(uVar33,uVar16)) {
    uVar16 = uVar19;
    uVar33 = uVar20;
  }
  if ((double)CONCAT44(uVar25,uVar21) <= (double)CONCAT44(uVar33,uVar16)) {
    uVar16 = uVar21;
    uVar33 = uVar25;
  }
  if ((int)uVar14 < param_2) {
    lVar15 = (longlong)(int)uVar14 * 8;
    do {
      uVar20 = (uint)uVar14;
      uVar19 = 0;
      if ((int)uVar20 < (this->Radius).ArrayNum) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar1 = (this->Radius).AllocatorInstance.Data;
      uVar14 = (ulonglong)(uVar20 + 1);
      *(double *)(pFVar1 + lVar15) = (double)CONCAT44(uVar33,uVar16) * *(double *)(pFVar1 + lVar15);
      lVar15 = lVar15 + 8;
    } while ((int)(uVar20 + 1) < param_2);
  }
  return;
}

