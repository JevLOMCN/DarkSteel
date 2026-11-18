// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// VisitRaycast @ 143ed7af0

bool __thiscall
Chaos::FTriangleMeshRaycastVisitor<unsigned_short>::VisitRaycast
          (FTriangleMeshRaycastVisitor<unsigned_short> *this,TSpatialVisitorData<int> *param_1,
          float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  TParticles<float,3> *pTVar5;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  TVector<double,3> *pTVar7;
  TVector<double,3> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 uVar23;
  TVector<float,3> *pTVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  uint uVar32;
  double dVar30;
  double dVar31;
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  double dStack_130;
  double dVar29;
  
  uVar4 = param_1->Payload;
  lVar25 = (longlong)(int)uVar4;
  pTVar5 = this->Particles;
  pTVar6 = this->Elements;
  uVar26 = ~uVar4 >> 0x1f;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,(uint)*(ushort *)((pTVar6->AllocatorInstance).Data + lVar25 * 6));
  pTVar6 = this->Elements;
  pTVar5 = this->Particles;
  dVar37 = (double)*(float *)pTVar24;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  dVar30 = (double)*(float *)&pTVar24->field_0x8;
  dVar36 = (double)*(float *)&pTVar24->field_0x4;
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,(uint)*(ushort *)((pTVar6->AllocatorInstance).Data + lVar25 * 6 + 2));
  pTVar6 = this->Elements;
  pTVar5 = this->Particles;
  fVar1 = *(float *)pTVar24;
  fVar2 = *(float *)&pTVar24->field_0x4;
  fVar3 = *(float *)&pTVar24->field_0x8;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,(uint)*(ushort *)((pTVar6->AllocatorInstance).Data + lVar25 * 6 + 4));
  dVar15 = (double)fVar1 - dVar37;
  dVar18 = (double)fVar3 - dVar30;
  dVar16 = (double)fVar2 - dVar36;
  dVar35 = (double)*(float *)&pTVar24->field_0x8 - dVar30;
  dVar38 = (double)*(float *)&pTVar24->field_0x4 - dVar36;
  dVar28 = (double)*(float *)pTVar24 - dVar37;
  dVar14 = dVar16 * dVar35 - dVar18 * dVar38;
  dVar39 = dVar18 * dVar28 - dVar35 * dVar15;
  dVar41 = dVar38 * dVar15 - dVar16 * dVar28;
  if ((this->bCullsBackFaceRaycast == false) ||
     (pTVar7 = this->Dir,
     dVar39 * *(double *)&pTVar7->field_0x8 + dVar14 * *(double *)pTVar7 +
     dVar41 * *(double *)&pTVar7->field_0x10 <= 0.0)) {
    uVar45 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    pTVar7 = this->Dir;
    pTVar8 = this->StartPoint;
    uVar27 = (uint)*(undefined8 *)&pTVar7->field_0x8 ^ uVar45;
    uVar32 = (uint)((ulonglong)*(undefined8 *)&pTVar7->field_0x8 >> 0x20) ^ uVar26;
    dVar29 = (double)CONCAT44(uVar32,uVar27);
    uVar33 = (uint)*(undefined8 *)&pTVar7->field_0x10 ^ uVar45;
    uVar34 = (uint)((ulonglong)*(undefined8 *)&pTVar7->field_0x10 >> 0x20) ^ uVar26;
    uVar45 = SUB84(*(double *)pTVar7,0) ^ uVar45;
    uVar26 = (uint)((ulonglong)*(double *)pTVar7 >> 0x20) ^ uVar26;
    dVar11 = (double)CONCAT44(uVar34,uVar33);
    dVar19 = dVar14 * (double)CONCAT44(uVar26,uVar45) + (double)CONCAT44(uVar32,uVar27) * dVar39 +
             dVar41 * (double)CONCAT44(uVar34,uVar33);
    if (__real_3e45798ee0000000 <=
        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar43 = SUB84(__real_3ff0000000000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar36 = *(double *)&pTVar8->field_0x8 - dVar36;
      dVar37 = *(double *)pTVar8 - dVar37;
      dVar30 = *(double *)&pTVar8->field_0x10 - dVar30;
      dVar31 = __real_3ff0000000000000 / dVar19;
      dVar17 = (dVar37 * dVar14 + dVar36 * dVar39 + dVar30 * dVar41) * dVar31;
      auVar10._8_4_ = SUB84(dVar17,0);
      auVar10._0_8_ = dVar17;
      auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      if ((0.0 <= dVar17) && (dVar17 <= (double)*param_2)) {
        dVar20 = dVar30 * dVar29 - dVar36 * dVar11;
        dVar30 = dVar37 * dVar11 - dVar30 * (double)CONCAT44(uVar26,uVar45);
        dVar36 = dVar36 * (double)CONCAT44(uVar26,uVar45) - dVar37 * dVar29;
        dVar37 = (dVar30 * dVar38 + dVar28 * dVar20 + dVar36 * dVar35) * dVar31;
        if ((__real_be45798ee0000000 <= dVar37) &&
           (((dVar37 <= __real_3ff0000002af31dc &&
             (dVar31 = (dVar30 * dVar16 + dVar20 * dVar15 + dVar36 * dVar18) * dVar31,
             dVar31 <= __real_3e45798ee0000000)) && (dVar37 - dVar31 <= __real_3ff0000002af31dc))))
        {
          dVar37 = dVar14 * dVar14 + dVar39 * dVar39 + dVar41 * dVar41;
          uVar40 = dVar39;
          uVar42 = dVar41;
          uVar21 = dVar14;
          if ((dVar37 != __real_3ff0000000000000) &&
             (uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             __real_3e45798ee0000000 <= dVar37)) {
            dVar37 = __real_3ff0000000000000 / SQRT(dVar37);
            uVar40 = dVar39 * dVar37;
            uVar42 = dVar41 * dVar37;
            uVar21 = dVar14 * dVar37;
          }
          if (dVar19 <= 0.0) {
            if (0.0 <= dVar19) {
              uVar43 = 0;
              uVar44 = 0;
            }
            else {
              uVar43 = (undefined4)__real_bff0000000000000;
              uVar44 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            }
          }
          dVar30 = *(double *)&pTVar7->field_0x8;
          dVar36 = *(double *)&pTVar8->field_0x8;
          dStack_130 = auVar10._8_8_;
          dVar38 = (double)uVar40 * (double)CONCAT44(uVar44,uVar43);
          dVar37 = *(double *)&pTVar7->field_0x10 * dStack_130 + *(double *)&pTVar8->field_0x10;
          *(double *)&this->OutPosition = dVar17 * *(double *)pTVar7 + *(double *)pTVar8;
          auVar12._8_4_ = SUB84(dVar37,0);
          auVar12._0_8_ = dVar30 * dVar17 + dVar36;
          auVar12._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          *(undefined1 (*) [16])&(this->OutPosition).field_0x8 = auVar12;
          this->OutFaceIndex = uVar4;
          auVar13._8_4_ = SUB84(dVar38,0);
          auVar13._0_8_ = (double)uVar21 * (double)CONCAT44(uVar44,uVar43);
          auVar13._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          *(undefined1 (*) [16])&this->OutNormal = auVar13;
          *(double *)&(this->OutNormal).field_0x10 =
               (double)CONCAT44(uVar44,uVar43) * (double)uVar42;
          this->OutTime = dVar17;
          *param_2 = (float)dVar17;
        }
      }
    }
  }
  return true;
}

// VisitRaycast @ 143ed80d0

bool __thiscall
Chaos::FTriangleMeshRaycastVisitor<int>::VisitRaycast
          (FTriangleMeshRaycastVisitor<int> *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  TParticles<float,3> *pTVar5;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  TVector<double,3> *pTVar7;
  TVector<double,3> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 uVar23;
  TVector<float,3> *pTVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  uint uVar32;
  double dVar30;
  double dVar31;
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  double dStack_130;
  double dVar29;
  
  uVar4 = param_1->Payload;
  lVar25 = (longlong)(int)uVar4;
  pTVar5 = this->Particles;
  pTVar6 = this->Elements;
  uVar26 = ~uVar4 >> 0x1f;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,*(int *)((pTVar6->AllocatorInstance).Data + lVar25 * 0xc));
  pTVar6 = this->Elements;
  pTVar5 = this->Particles;
  dVar37 = (double)*(float *)pTVar24;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  dVar30 = (double)*(float *)&pTVar24->field_0x8;
  dVar36 = (double)*(float *)&pTVar24->field_0x4;
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,*(int *)((pTVar6->AllocatorInstance).Data + lVar25 * 0xc + 4));
  pTVar6 = this->Elements;
  pTVar5 = this->Particles;
  fVar1 = *(float *)pTVar24;
  fVar2 = *(float *)&pTVar24->field_0x4;
  fVar3 = *(float *)&pTVar24->field_0x8;
  uVar45 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar45 = uVar26;
  }
  if ((uVar45 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    uVar23 = (*pcVar9)();
    return (bool)uVar23;
  }
  pTVar24 = TParticles<float,3>::GetX
                      (pTVar5,*(int *)((pTVar6->AllocatorInstance).Data + lVar25 * 0xc + 8));
  dVar15 = (double)fVar1 - dVar37;
  dVar18 = (double)fVar3 - dVar30;
  dVar16 = (double)fVar2 - dVar36;
  dVar35 = (double)*(float *)&pTVar24->field_0x8 - dVar30;
  dVar38 = (double)*(float *)&pTVar24->field_0x4 - dVar36;
  dVar28 = (double)*(float *)pTVar24 - dVar37;
  dVar14 = dVar16 * dVar35 - dVar18 * dVar38;
  dVar39 = dVar18 * dVar28 - dVar35 * dVar15;
  dVar41 = dVar38 * dVar15 - dVar16 * dVar28;
  if ((this->bCullsBackFaceRaycast == false) ||
     (pTVar7 = this->Dir,
     dVar39 * *(double *)&pTVar7->field_0x8 + dVar14 * *(double *)pTVar7 +
     dVar41 * *(double *)&pTVar7->field_0x10 <= 0.0)) {
    uVar45 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    pTVar7 = this->Dir;
    pTVar8 = this->StartPoint;
    uVar27 = (uint)*(undefined8 *)&pTVar7->field_0x8 ^ uVar45;
    uVar32 = (uint)((ulonglong)*(undefined8 *)&pTVar7->field_0x8 >> 0x20) ^ uVar26;
    dVar29 = (double)CONCAT44(uVar32,uVar27);
    uVar33 = (uint)*(undefined8 *)&pTVar7->field_0x10 ^ uVar45;
    uVar34 = (uint)((ulonglong)*(undefined8 *)&pTVar7->field_0x10 >> 0x20) ^ uVar26;
    uVar45 = SUB84(*(double *)pTVar7,0) ^ uVar45;
    uVar26 = (uint)((ulonglong)*(double *)pTVar7 >> 0x20) ^ uVar26;
    dVar11 = (double)CONCAT44(uVar34,uVar33);
    dVar19 = dVar14 * (double)CONCAT44(uVar26,uVar45) + (double)CONCAT44(uVar32,uVar27) * dVar39 +
             dVar41 * (double)CONCAT44(uVar34,uVar33);
    if (__real_3e45798ee0000000 <=
        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar43 = SUB84(__real_3ff0000000000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar36 = *(double *)&pTVar8->field_0x8 - dVar36;
      dVar37 = *(double *)pTVar8 - dVar37;
      dVar30 = *(double *)&pTVar8->field_0x10 - dVar30;
      dVar31 = __real_3ff0000000000000 / dVar19;
      dVar17 = (dVar37 * dVar14 + dVar36 * dVar39 + dVar30 * dVar41) * dVar31;
      auVar10._8_4_ = SUB84(dVar17,0);
      auVar10._0_8_ = dVar17;
      auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      if ((0.0 <= dVar17) && (dVar17 <= (double)*param_2)) {
        dVar20 = dVar30 * dVar29 - dVar36 * dVar11;
        dVar30 = dVar37 * dVar11 - dVar30 * (double)CONCAT44(uVar26,uVar45);
        dVar36 = dVar36 * (double)CONCAT44(uVar26,uVar45) - dVar37 * dVar29;
        dVar37 = (dVar30 * dVar38 + dVar28 * dVar20 + dVar36 * dVar35) * dVar31;
        if ((__real_be45798ee0000000 <= dVar37) &&
           (((dVar37 <= __real_3ff0000002af31dc &&
             (dVar31 = (dVar30 * dVar16 + dVar20 * dVar15 + dVar36 * dVar18) * dVar31,
             dVar31 <= __real_3e45798ee0000000)) && (dVar37 - dVar31 <= __real_3ff0000002af31dc))))
        {
          dVar37 = dVar14 * dVar14 + dVar39 * dVar39 + dVar41 * dVar41;
          uVar40 = dVar39;
          uVar42 = dVar41;
          uVar21 = dVar14;
          if ((dVar37 != __real_3ff0000000000000) &&
             (uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             __real_3e45798ee0000000 <= dVar37)) {
            dVar37 = __real_3ff0000000000000 / SQRT(dVar37);
            uVar40 = dVar39 * dVar37;
            uVar42 = dVar41 * dVar37;
            uVar21 = dVar14 * dVar37;
          }
          if (dVar19 <= 0.0) {
            if (0.0 <= dVar19) {
              uVar43 = 0;
              uVar44 = 0;
            }
            else {
              uVar43 = (undefined4)__real_bff0000000000000;
              uVar44 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            }
          }
          dVar30 = *(double *)&pTVar7->field_0x8;
          dVar36 = *(double *)&pTVar8->field_0x8;
          dStack_130 = auVar10._8_8_;
          dVar38 = (double)uVar40 * (double)CONCAT44(uVar44,uVar43);
          dVar37 = *(double *)&pTVar7->field_0x10 * dStack_130 + *(double *)&pTVar8->field_0x10;
          *(double *)&this->OutPosition = dVar17 * *(double *)pTVar7 + *(double *)pTVar8;
          auVar12._8_4_ = SUB84(dVar37,0);
          auVar12._0_8_ = dVar30 * dVar17 + dVar36;
          auVar12._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          *(undefined1 (*) [16])&(this->OutPosition).field_0x8 = auVar12;
          this->OutFaceIndex = uVar4;
          auVar13._8_4_ = SUB84(dVar38,0);
          auVar13._0_8_ = (double)uVar21 * (double)CONCAT44(uVar44,uVar43);
          auVar13._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          *(undefined1 (*) [16])&this->OutNormal = auVar13;
          *(double *)&(this->OutNormal).field_0x10 =
               (double)CONCAT44(uVar44,uVar43) * (double)uVar42;
          this->OutTime = dVar17;
          *param_2 = (float)dVar17;
        }
      }
    }
  }
  return true;
}

// VisitSweep @ 143ed86b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FTriangleMeshRaycastVisitor<unsigned_short>::VisitSweep
          (FTriangleMeshRaycastVisitor<unsigned_short> *this,TSpatialVisitorData<int> *param_1,
          float *param_2)

{
  uint uVar1;
  TParticles<float,3> *pTVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TVector<double,3> *pTVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  TVector<float,3> *pTVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined8 uVar25;
  undefined1 auVar24 [16];
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined1 auStackY_338 [32];
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  int local_288 [2];
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [24];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198 [16];
  double local_188;
  undefined8 local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [2];
  undefined1 local_148 [16];
  double dStack_138;
  TVector<double,3> local_130;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  double dStack_e8;
  TVector<double,3> local_e0;
  TVector<double,3> local_c8;
  ulonglong local_a8;
  
  dVar6 = __real_3e45798ee0000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pTVar2 = this->Particles;
  uVar1 = param_1->Payload;
  lVar20 = (longlong)(int)uVar1;
  pTVar3 = this->Elements;
  uVar21 = ~uVar1 >> 0x1f;
  dVar27 = this->Thickness + __real_3e45798ee0000000;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar20 * 6));
  pTVar3 = this->Elements;
  pTVar2 = this->Particles;
  local_2c0 = (double)*(float *)&pTVar18->field_0x8;
  dStack_2c8 = (double)*(float *)&pTVar18->field_0x4;
  local_2d0 = (double)*(float *)pTVar18;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar20 * 6 + 2));
  pTVar3 = this->Elements;
  pTVar2 = this->Particles;
  local_2a8 = (double)*(float *)&pTVar18->field_0x8;
  local_2b0 = (double)*(float *)&pTVar18->field_0x4;
  local_2b8 = (double)*(float *)pTVar18;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar20 * 6 + 4));
  local_298 = (double)*(float *)&pTVar18->field_0x4;
  local_290 = (double)*(float *)&pTVar18->field_0x8;
  local_2a0 = (double)*(float *)pTVar18;
  dVar11 = (local_290 - local_2c0) * (local_2b0 - dStack_2c8) -
           (local_298 - dStack_2c8) * (local_2a8 - local_2c0);
  dVar10 = (local_2a8 - local_2c0) * (local_2a0 - local_2d0) -
           (local_290 - local_2c0) * (local_2b8 - local_2d0);
  dVar9 = (local_298 - dStack_2c8) * (local_2b8 - local_2d0) -
          (local_2b0 - dStack_2c8) * (local_2a0 - local_2d0);
  auVar23._0_8_ = dVar9 * dVar9;
  auVar23._8_8_ = 0;
  dVar8 = dVar10 * dVar10 + dVar11 * dVar11 + auVar23._0_8_;
  if (dVar8 < dVar6) {
    return true;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar8;
  auVar23 = sqrtpd(auVar23,auVar7);
  dVar8 = __real_3ff0000000000000 / auVar23._0_8_;
  if (auVar23._0_8_ <= dVar6) {
    return true;
  }
  if ((this->bCullsBackFaceRaycast != false) &&
     (pTVar4 = this->Dir,
     0.0 < dVar10 * dVar8 * *(double *)&pTVar4->field_0x8 + dVar11 * dVar8 * *(double *)pTVar4 +
           dVar9 * dVar8 * *(double *)&pTVar4->field_0x10)) {
    return true;
  }
  FImplicitObject::FImplicitObject((FImplicitObject *)local_1b8,0,'\x02');
  uVar25 = 0;
  local_198._0_8_ = local_2d0;
  local_198._8_8_ = dStack_2c8;
  local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  local_188 = local_2c0;
  local_180 = dVar11 * dVar8;
  dStack_178 = dVar10 * dVar8;
  local_170 = dVar9 * dVar8;
  bVar13 = TCorePlane<double,3>::Raycast
                     ((TCorePlane<double,3> *)local_198,this->StartPoint,this->Dir,(double)*param_2,
                      this->Thickness,&local_280,(TVector<double,3> *)local_248,
                      (TVector<double,3> *)local_1e8,local_288);
  if (!bVar13) goto LAB_143ed8f35;
  dVar6 = local_248._0_8_;
  dVar8 = local_248._8_8_;
  bVar13 = false;
  uVar26 = SUB84(local_280,0);
  uVar28 = (undefined4)((ulonglong)local_280 >> 0x20);
  local_278 = local_248;
  if (local_280 == 0.0) {
    FindClosestPointOnTriangle<double,3>
              ((TVector<double,3> *)&local_1d0,(TPlane<double,3> *)local_1b8,
               (TVector<double,3> *)&local_2d0,(TVector<double,3> *)&local_2b8,
               (TVector<double,3> *)&local_2a0,this->StartPoint);
    pTVar4 = this->StartPoint;
    local_1c8 = *(double *)&pTVar4->field_0x8 - local_1c8;
    local_1c0 = *(double *)&pTVar4->field_0x10 - local_1c0;
    if ((*(double *)pTVar4 - local_1d0) * (*(double *)pTVar4 - local_1d0) + local_1c8 * local_1c8 +
        local_1c0 * local_1c0 <= dVar27 * dVar27) {
      this->OutTime = 0.0;
      this->OutFaceIndex = uVar1;
      local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)local_1b8);
      return false;
    }
LAB_143ed8b7d:
    dVar9 = __real_3f1a36e2e0000000;
    local_228 = local_2b0 - dStack_2c8;
    local_230 = local_2b8 - local_2d0;
    local_220 = local_2a8 - local_2c0;
    dVar27 = TVector<double,3>::SafeNormalize
                       ((TVector<double,3> *)&local_230,__real_3f1a36e2e0000000);
    bVar15 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_230,(TVector<double,3> *)&local_2d0,
                        (TVector<double,3> *)&local_2b8,&local_168,(TVector<double,3> *)local_148,
                        (TVector<double,3> *)local_f8);
    local_210 = local_298 - local_2b0;
    local_218 = local_2a0 - local_2b8;
    local_208 = local_290 - local_2a8;
    dVar27 = TVector<double,3>::SafeNormalize((TVector<double,3> *)&local_218,dVar9);
    bVar16 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_218,(TVector<double,3> *)&local_2b8,
                        (TVector<double,3> *)&local_2a0,&local_160,&local_130,&local_e0);
    local_200 = local_2a0 - local_2d0;
    local_1f8 = local_298 - dStack_2c8;
    local_1f0 = local_290 - local_2c0;
    dVar27 = TVector<double,3>::SafeNormalize((TVector<double,3> *)&local_200,dVar9);
    bVar17 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_200,(TVector<double,3> *)&local_2d0,
                        (TVector<double,3> *)&local_2a0,local_158,&local_118,&local_c8);
    dVar27 = 0.0;
    if (bVar15) {
      bVar13 = true;
      dVar27 = local_168;
    }
    iVar19 = bVar15 - 1;
    if ((bVar16) && ((!bVar13 || (local_160 < dVar27)))) {
      iVar19 = 1;
      bVar13 = true;
      dVar27 = local_160;
    }
    if ((!bVar17) || ((bVar13 && (dVar27 <= local_158[0])))) {
      if (iVar19 != -1) goto LAB_143ed8de2;
    }
    else {
      iVar19 = 2;
      bVar13 = true;
      dVar27 = local_158[0];
LAB_143ed8de2:
      lVar20 = (longlong)iVar19;
      dVar9 = this->Thickness;
      dVar6 = *(double *)(local_148 + lVar20 * 0x18) - *(double *)(local_f8 + lVar20 * 0x18) * dVar9
      ;
      dVar8 = *(double *)(local_148 + lVar20 * 0x18 + 8) -
              *(double *)(local_f8 + lVar20 * 0x18 + 8) * dVar9;
      local_278._8_8_ = dVar8;
      local_278._0_8_ = dVar6;
      local_268 = (&dStack_138)[lVar20 * 3] - (&dStack_e8)[lVar20 * 3] * dVar9;
      if (local_280 == 0.0) {
        pTVar4 = this->StartPoint;
        local_1e8._12_4_ = (undefined4)((ulonglong)dStack_178 >> 0x20);
        local_1e8._0_4_ = (uint)local_180;
        local_1e8._4_4_ = local_180._4_4_;
        local_1e8._8_4_ = dStack_178._0_4_;
        local_1e8._16_8_ = local_170;
        if ((*(double *)&pTVar4->field_0x8 - (double)local_198._8_8_) * dStack_178 +
            (*(double *)pTVar4 - (double)local_198._0_8_) * local_180 +
            (*(double *)&pTVar4->field_0x10 - local_188) * local_170 < 0.0) {
          uVar22 = (uint)__xmm_80000000000000008000000000000000;
          uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          local_1e8._0_4_ = (uint)local_180 ^ uVar22;
          local_1e8._4_4_ = local_180._4_4_ ^ uVar21;
          local_1e8._8_4_ = dStack_178._0_4_ ^ uVar22;
          local_1e8._12_4_ = local_1e8._12_4_ ^ uVar21;
          local_1e8._16_8_ =
               CONCAT44((uint)((ulonglong)local_170 >> 0x20) ^ uVar21,SUB84(local_170,0) ^ uVar22);
        }
      }
      uVar26 = SUB84(dVar27,0);
      uVar28 = (undefined4)((ulonglong)dVar27 >> 0x20);
      local_238 = local_268;
    }
    if (!bVar13) goto LAB_143ed8f35;
  }
  else {
    FindClosestPointOnTriangle<double,3>
              ((TVector<double,3> *)&local_260,(TVector<double,3> *)local_248,
               (TVector<double,3> *)&local_2d0,(TVector<double,3> *)&local_2b8,
               (TVector<double,3> *)&local_2a0,(TVector<double,3> *)local_248);
    auVar12._4_8_ = uVar25;
    auVar12._0_4_ = local_248._4_4_;
    auVar24._0_8_ = auVar12._0_8_ << 0x20;
    auVar24._8_4_ = local_248._8_4_;
    auVar24._12_4_ = local_248._12_4_;
    local_258 = auVar24._8_8_ - local_258;
    bVar13 = (dVar6 - local_260) * (dVar6 - local_260) + local_258 * local_258 +
             (local_238 - local_250) * (local_238 - local_250) <= __real_3c9cd2b291f7d440;
    if (!bVar13) goto LAB_143ed8b7d;
  }
  if ((double)CONCAT44(uVar28,uVar26) < this->OutTime) {
    *(ulonglong *)&this->OutNormal = CONCAT44(local_1e8._4_4_,local_1e8._0_4_);
    *(ulonglong *)&(this->OutNormal).field_0x8 = CONCAT44(local_1e8._12_4_,local_1e8._8_4_);
    *(double *)&this->OutPosition = dVar6;
    *(double *)&(this->OutPosition).field_0x8 = dVar8;
    this->OutTime = (double)CONCAT44(uVar28,uVar26);
    *(double *)&(this->OutPosition).field_0x10 = local_238;
    *(undefined8 *)&(this->OutNormal).field_0x10 = local_1e8._16_8_;
    *param_2 = (float)(double)CONCAT44(uVar28,uVar26);
    this->OutFaceIndex = uVar1;
  }
LAB_143ed8f35:
  local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_1b8);
  return true;
}

// VisitSweep @ 143ed8fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::FTriangleMeshRaycastVisitor<int>::VisitSweep
          (FTriangleMeshRaycastVisitor<int> *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  uint uVar1;
  TParticles<float,3> *pTVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TVector<double,3> *pTVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  TVector<float,3> *pTVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined8 uVar25;
  undefined1 auVar24 [16];
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined1 auStackY_338 [32];
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  int local_288 [2];
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [24];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198 [16];
  double local_188;
  undefined8 local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [2];
  undefined1 local_148 [16];
  double dStack_138;
  TVector<double,3> local_130;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  double dStack_e8;
  TVector<double,3> local_e0;
  TVector<double,3> local_c8;
  ulonglong local_a8;
  
  dVar6 = __real_3e45798ee0000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pTVar2 = this->Particles;
  uVar1 = param_1->Payload;
  lVar20 = (longlong)(int)uVar1;
  pTVar3 = this->Elements;
  uVar21 = ~uVar1 >> 0x1f;
  dVar27 = this->Thickness + __real_3e45798ee0000000;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,*(int *)((pTVar3->AllocatorInstance).Data + lVar20 * 0xc));
  pTVar3 = this->Elements;
  pTVar2 = this->Particles;
  local_2c0 = (double)*(float *)&pTVar18->field_0x8;
  dStack_2c8 = (double)*(float *)&pTVar18->field_0x4;
  local_2d0 = (double)*(float *)pTVar18;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,*(int *)((pTVar3->AllocatorInstance).Data + lVar20 * 0xc + 4));
  pTVar3 = this->Elements;
  pTVar2 = this->Particles;
  local_2a8 = (double)*(float *)&pTVar18->field_0x8;
  local_2b0 = (double)*(float *)&pTVar18->field_0x4;
  local_2b8 = (double)*(float *)pTVar18;
  uVar22 = 0;
  if ((int)uVar1 < pTVar3->ArrayNum) {
    uVar22 = uVar21;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  pTVar18 = TParticles<float,3>::GetX
                      (pTVar2,*(int *)((pTVar3->AllocatorInstance).Data + lVar20 * 0xc + 8));
  local_298 = (double)*(float *)&pTVar18->field_0x4;
  local_290 = (double)*(float *)&pTVar18->field_0x8;
  local_2a0 = (double)*(float *)pTVar18;
  dVar11 = (local_290 - local_2c0) * (local_2b0 - dStack_2c8) -
           (local_298 - dStack_2c8) * (local_2a8 - local_2c0);
  dVar10 = (local_2a8 - local_2c0) * (local_2a0 - local_2d0) -
           (local_290 - local_2c0) * (local_2b8 - local_2d0);
  dVar9 = (local_298 - dStack_2c8) * (local_2b8 - local_2d0) -
          (local_2b0 - dStack_2c8) * (local_2a0 - local_2d0);
  auVar23._0_8_ = dVar9 * dVar9;
  auVar23._8_8_ = 0;
  dVar8 = dVar10 * dVar10 + dVar11 * dVar11 + auVar23._0_8_;
  if (dVar8 < dVar6) {
    return true;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar8;
  auVar23 = sqrtpd(auVar23,auVar7);
  dVar8 = __real_3ff0000000000000 / auVar23._0_8_;
  if (auVar23._0_8_ <= dVar6) {
    return true;
  }
  if ((this->bCullsBackFaceRaycast != false) &&
     (pTVar4 = this->Dir,
     0.0 < dVar10 * dVar8 * *(double *)&pTVar4->field_0x8 + dVar11 * dVar8 * *(double *)pTVar4 +
           dVar9 * dVar8 * *(double *)&pTVar4->field_0x10)) {
    return true;
  }
  FImplicitObject::FImplicitObject((FImplicitObject *)local_1b8,0,'\x02');
  uVar25 = 0;
  local_198._0_8_ = local_2d0;
  local_198._8_8_ = dStack_2c8;
  local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  local_188 = local_2c0;
  local_180 = dVar11 * dVar8;
  dStack_178 = dVar10 * dVar8;
  local_170 = dVar9 * dVar8;
  bVar13 = TCorePlane<double,3>::Raycast
                     ((TCorePlane<double,3> *)local_198,this->StartPoint,this->Dir,(double)*param_2,
                      this->Thickness,&local_280,(TVector<double,3> *)local_248,
                      (TVector<double,3> *)local_1e8,local_288);
  if (!bVar13) goto LAB_143ed9822;
  dVar6 = local_248._0_8_;
  dVar8 = local_248._8_8_;
  bVar13 = false;
  uVar26 = SUB84(local_280,0);
  uVar28 = (undefined4)((ulonglong)local_280 >> 0x20);
  local_278 = local_248;
  if (local_280 == 0.0) {
    FindClosestPointOnTriangle<double,3>
              ((TVector<double,3> *)&local_1d0,(TPlane<double,3> *)local_1b8,
               (TVector<double,3> *)&local_2d0,(TVector<double,3> *)&local_2b8,
               (TVector<double,3> *)&local_2a0,this->StartPoint);
    pTVar4 = this->StartPoint;
    local_1c8 = *(double *)&pTVar4->field_0x8 - local_1c8;
    local_1c0 = *(double *)&pTVar4->field_0x10 - local_1c0;
    if ((*(double *)pTVar4 - local_1d0) * (*(double *)pTVar4 - local_1d0) + local_1c8 * local_1c8 +
        local_1c0 * local_1c0 <= dVar27 * dVar27) {
      this->OutTime = 0.0;
      this->OutFaceIndex = uVar1;
      local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)local_1b8);
      return false;
    }
LAB_143ed946a:
    dVar9 = __real_3f1a36e2e0000000;
    local_228 = local_2b0 - dStack_2c8;
    local_230 = local_2b8 - local_2d0;
    local_220 = local_2a8 - local_2c0;
    dVar27 = TVector<double,3>::SafeNormalize
                       ((TVector<double,3> *)&local_230,__real_3f1a36e2e0000000);
    bVar15 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_230,(TVector<double,3> *)&local_2d0,
                        (TVector<double,3> *)&local_2b8,&local_168,(TVector<double,3> *)local_148,
                        (TVector<double,3> *)local_f8);
    local_210 = local_298 - local_2b0;
    local_218 = local_2a0 - local_2b8;
    local_208 = local_290 - local_2a8;
    dVar27 = TVector<double,3>::SafeNormalize((TVector<double,3> *)&local_218,dVar9);
    bVar16 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_218,(TVector<double,3> *)&local_2b8,
                        (TVector<double,3> *)&local_2a0,&local_160,&local_130,&local_e0);
    local_200 = local_2a0 - local_2d0;
    local_1f8 = local_298 - dStack_2c8;
    local_1f0 = local_290 - local_2c0;
    dVar27 = TVector<double,3>::SafeNormalize((TVector<double,3> *)&local_200,dVar9);
    bVar17 = Raycasts::RayCapsule
                       (this->StartPoint,this->Dir,(double)*param_2,0.0,this->Thickness,dVar27,
                        (TVector<double,3> *)&local_200,(TVector<double,3> *)&local_2d0,
                        (TVector<double,3> *)&local_2a0,local_158,&local_118,&local_c8);
    dVar27 = 0.0;
    if (bVar15) {
      bVar13 = true;
      dVar27 = local_168;
    }
    iVar19 = bVar15 - 1;
    if ((bVar16) && ((!bVar13 || (local_160 < dVar27)))) {
      iVar19 = 1;
      bVar13 = true;
      dVar27 = local_160;
    }
    if ((!bVar17) || ((bVar13 && (dVar27 <= local_158[0])))) {
      if (iVar19 != -1) goto LAB_143ed96cf;
    }
    else {
      iVar19 = 2;
      bVar13 = true;
      dVar27 = local_158[0];
LAB_143ed96cf:
      lVar20 = (longlong)iVar19;
      dVar9 = this->Thickness;
      dVar6 = *(double *)(local_148 + lVar20 * 0x18) - *(double *)(local_f8 + lVar20 * 0x18) * dVar9
      ;
      dVar8 = *(double *)(local_148 + lVar20 * 0x18 + 8) -
              *(double *)(local_f8 + lVar20 * 0x18 + 8) * dVar9;
      local_278._8_8_ = dVar8;
      local_278._0_8_ = dVar6;
      local_268 = (&dStack_138)[lVar20 * 3] - (&dStack_e8)[lVar20 * 3] * dVar9;
      if (local_280 == 0.0) {
        pTVar4 = this->StartPoint;
        local_1e8._12_4_ = (undefined4)((ulonglong)dStack_178 >> 0x20);
        local_1e8._0_4_ = (uint)local_180;
        local_1e8._4_4_ = local_180._4_4_;
        local_1e8._8_4_ = dStack_178._0_4_;
        local_1e8._16_8_ = local_170;
        if ((*(double *)&pTVar4->field_0x8 - (double)local_198._8_8_) * dStack_178 +
            (*(double *)pTVar4 - (double)local_198._0_8_) * local_180 +
            (*(double *)&pTVar4->field_0x10 - local_188) * local_170 < 0.0) {
          uVar22 = (uint)__xmm_80000000000000008000000000000000;
          uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          local_1e8._0_4_ = (uint)local_180 ^ uVar22;
          local_1e8._4_4_ = local_180._4_4_ ^ uVar21;
          local_1e8._8_4_ = dStack_178._0_4_ ^ uVar22;
          local_1e8._12_4_ = local_1e8._12_4_ ^ uVar21;
          local_1e8._16_8_ =
               CONCAT44((uint)((ulonglong)local_170 >> 0x20) ^ uVar21,SUB84(local_170,0) ^ uVar22);
        }
      }
      uVar26 = SUB84(dVar27,0);
      uVar28 = (undefined4)((ulonglong)dVar27 >> 0x20);
      local_238 = local_268;
    }
    if (!bVar13) goto LAB_143ed9822;
  }
  else {
    FindClosestPointOnTriangle<double,3>
              ((TVector<double,3> *)&local_260,(TVector<double,3> *)local_248,
               (TVector<double,3> *)&local_2d0,(TVector<double,3> *)&local_2b8,
               (TVector<double,3> *)&local_2a0,(TVector<double,3> *)local_248);
    auVar12._4_8_ = uVar25;
    auVar12._0_4_ = local_248._4_4_;
    auVar24._0_8_ = auVar12._0_8_ << 0x20;
    auVar24._8_4_ = local_248._8_4_;
    auVar24._12_4_ = local_248._12_4_;
    local_258 = auVar24._8_8_ - local_258;
    bVar13 = (dVar6 - local_260) * (dVar6 - local_260) + local_258 * local_258 +
             (local_238 - local_250) * (local_238 - local_250) <= __real_3c9cd2b291f7d440;
    if (!bVar13) goto LAB_143ed946a;
  }
  if ((double)CONCAT44(uVar28,uVar26) < this->OutTime) {
    *(ulonglong *)&this->OutNormal = CONCAT44(local_1e8._4_4_,local_1e8._0_4_);
    *(ulonglong *)&(this->OutNormal).field_0x8 = CONCAT44(local_1e8._12_4_,local_1e8._8_4_);
    *(double *)&this->OutPosition = dVar6;
    *(double *)&(this->OutPosition).field_0x8 = dVar8;
    this->OutTime = (double)CONCAT44(uVar28,uVar26);
    *(double *)&(this->OutPosition).field_0x10 = local_238;
    *(undefined8 *)&(this->OutNormal).field_0x10 = local_1e8._16_8_;
    *param_2 = (float)(double)CONCAT44(uVar28,uVar26);
    this->OutFaceIndex = uVar1;
  }
LAB_143ed9822:
  local_1b8._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)local_1b8);
  return true;
}

