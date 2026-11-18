// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// UpdateCapsuleConvexConstraint<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> @ 14394f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Collisions::TCapsuleConvexUpdater<1>::
UpdateCapsuleConvexConstraint<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
          (FCapsule *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectInstanced<Chaos::FConvex> *param_3,TRigidTransform<double,3> *param_4,
          double param_5,FPBDCollisionConstraint *param_6)

{
  double *pdVar1;
  ForElementType<Chaos::FManifoldPoint> FVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TContactPoint<double> *pTVar10;
  uint uVar11;
  double *pdVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  double dVar15;
  undefined1 auStackY_2b8 [32];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  int local_258;
  EContactPointType local_254;
  undefined1 local_248 [8];
  double local_240 [9];
  double local_1f8;
  int local_1f0;
  EContactPointType local_1ec;
  double local_1a0;
  int local_198;
  EContactPointType local_194;
  double local_148;
  int local_140;
  EContactPointType local_13c;
  double local_f0;
  int local_e8;
  EContactPointType local_e4;
  TContactPoint<double> local_d8;
  ulonglong local_78;
  
  dVar4 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((*(byte *)&param_6->Flags >> 2 & 1) == 0) {
    pTVar10 = CapsuleConvexContactPoint
                        (&local_d8,param_1,param_2,(FImplicitObject *)param_3,param_4);
    UpdateContactPoint(param_6,pTVar10,param_5);
  }
  else {
    local_248._0_4_ = 0;
    local_1f0 = -1;
    local_1ec = Unknown;
    local_198 = -1;
    local_1f8 = __real_7fefffffffffffff;
    local_1a0 = __real_7fefffffffffffff;
    local_148 = __real_7fefffffffffffff;
    local_f0 = __real_7fefffffffffffff;
    local_194 = Unknown;
    local_140 = -1;
    local_13c = Unknown;
    local_e8 = -1;
    local_e4 = Unknown;
    ConstructCapsuleConvexOneShotManifold<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
              (param_1,param_2,param_3,param_4,(double)param_6->CullDistance,
               (TCArray<Chaos::TContactPoint<double>,4> *)local_248);
    FPBDCollisionConstraint::ResetActiveManifoldContacts(param_6);
    fVar5 = __real_7f7fffff;
    lVar9 = (longlong)(int)local_248._0_4_;
    if (local_240 != local_240 + lVar9 * 0xb) {
      pdVar12 = local_240 + 2;
      do {
        local_258 = *(int *)(pdVar12 + 8);
        local_27c = (float)pdVar12[-1];
        local_254 = *(EContactPointType *)((longlong)pdVar12 + 0x44);
        local_280 = (float)pdVar12[-2];
        local_274 = (float)pdVar12[1];
        local_278 = (float)*pdVar12;
        local_26c = (float)pdVar12[3];
        local_270 = (float)pdVar12[2];
        local_264 = (float)pdVar12[5];
        local_268 = (float)pdVar12[4];
        local_25c = (float)pdVar12[7];
        local_260 = (float)pdVar12[6];
        if (local_25c != fVar5) {
          uVar7 = FPBDCollisionConstraint::AddManifoldPoint
                            (param_6,(TContactPoint<float> *)&local_280);
          uVar11 = 0;
          if ((int)uVar7 < (param_6->ManifoldPoints).ArrayNum) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
          uVar11 = param_6->ClosestManifoldPointIndex;
          FVar14 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
          if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar14 = FVar2;
          }
          dVar15 = dVar4;
          if (uVar11 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar11 < (param_6->ManifoldPoints).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
            if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar13 = FVar2;
            }
            dVar15 = (double)*(float *)((longlong)(int)uVar11 * 0x6c + 0x24 + (longlong)FVar13);
          }
          if ((double)*(float *)((uchar *)((longlong)FVar14 + 0x24) + (longlong)(int)uVar7 * 0x6c) <
              dVar15) {
            param_6->ClosestManifoldPointIndex = uVar7;
          }
        }
        pdVar1 = pdVar12 + 9;
        pdVar12 = pdVar12 + 0xb;
      } while (pdVar1 != local_240 + lVar9 * 0xb);
    }
  }
  return;
}

// UpdateCapsuleConvexConstraint<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 14394f6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Collisions::TCapsuleConvexUpdater<1>::
UpdateCapsuleConvexConstraint<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FCapsule *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_3,TRigidTransform<double,3> *param_4,
          double param_5,FPBDCollisionConstraint *param_6)

{
  double *pdVar1;
  ForElementType<Chaos::FManifoldPoint> FVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TContactPoint<double> *pTVar10;
  uint uVar11;
  double *pdVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  double dVar15;
  undefined1 auStackY_2b8 [32];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  int local_258;
  EContactPointType local_254;
  undefined1 local_248 [8];
  double local_240 [9];
  double local_1f8;
  int local_1f0;
  EContactPointType local_1ec;
  double local_1a0;
  int local_198;
  EContactPointType local_194;
  double local_148;
  int local_140;
  EContactPointType local_13c;
  double local_f0;
  int local_e8;
  EContactPointType local_e4;
  TContactPoint<double> local_d8;
  ulonglong local_78;
  
  dVar4 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((*(byte *)&param_6->Flags >> 2 & 1) == 0) {
    pTVar10 = CapsuleConvexContactPoint
                        (&local_d8,param_1,param_2,(FImplicitObject *)param_3,param_4);
    UpdateContactPoint(param_6,pTVar10,param_5);
  }
  else {
    local_248._0_4_ = 0;
    local_1f0 = -1;
    local_1ec = Unknown;
    local_198 = -1;
    local_1f8 = __real_7fefffffffffffff;
    local_1a0 = __real_7fefffffffffffff;
    local_148 = __real_7fefffffffffffff;
    local_f0 = __real_7fefffffffffffff;
    local_194 = Unknown;
    local_140 = -1;
    local_13c = Unknown;
    local_e8 = -1;
    local_e4 = Unknown;
    ConstructCapsuleConvexOneShotManifold<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
              (param_1,param_2,param_3,param_4,(double)param_6->CullDistance,
               (TCArray<Chaos::TContactPoint<double>,4> *)local_248);
    FPBDCollisionConstraint::ResetActiveManifoldContacts(param_6);
    fVar5 = __real_7f7fffff;
    lVar9 = (longlong)(int)local_248._0_4_;
    if (local_240 != local_240 + lVar9 * 0xb) {
      pdVar12 = local_240 + 2;
      do {
        local_258 = *(int *)(pdVar12 + 8);
        local_27c = (float)pdVar12[-1];
        local_254 = *(EContactPointType *)((longlong)pdVar12 + 0x44);
        local_280 = (float)pdVar12[-2];
        local_274 = (float)pdVar12[1];
        local_278 = (float)*pdVar12;
        local_26c = (float)pdVar12[3];
        local_270 = (float)pdVar12[2];
        local_264 = (float)pdVar12[5];
        local_268 = (float)pdVar12[4];
        local_25c = (float)pdVar12[7];
        local_260 = (float)pdVar12[6];
        if (local_25c != fVar5) {
          uVar7 = FPBDCollisionConstraint::AddManifoldPoint
                            (param_6,(TContactPoint<float> *)&local_280);
          uVar11 = 0;
          if ((int)uVar7 < (param_6->ManifoldPoints).ArrayNum) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
          uVar11 = param_6->ClosestManifoldPointIndex;
          FVar14 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
          if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar14 = FVar2;
          }
          dVar15 = dVar4;
          if (uVar11 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar11 < (param_6->ManifoldPoints).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
            if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar13 = FVar2;
            }
            dVar15 = (double)*(float *)((longlong)(int)uVar11 * 0x6c + 0x24 + (longlong)FVar13);
          }
          if ((double)*(float *)((uchar *)((longlong)FVar14 + 0x24) + (longlong)(int)uVar7 * 0x6c) <
              dVar15) {
            param_6->ClosestManifoldPointIndex = uVar7;
          }
        }
        pdVar1 = pdVar12 + 9;
        pdVar12 = pdVar12 + 0xb;
      } while (pdVar1 != local_240 + lVar9 * 0xb);
    }
  }
  return;
}

// UpdateCapsuleConvexConstraint<Chaos::FConvex> @ 14394fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Collisions::TCapsuleConvexUpdater<1>::UpdateCapsuleConvexConstraint<Chaos::FConvex>
          (FCapsule *param_1,TRigidTransform<double,3> *param_2,FConvex *param_3,
          TRigidTransform<double,3> *param_4,double param_5,FPBDCollisionConstraint *param_6)

{
  double *pdVar1;
  ForElementType<Chaos::FManifoldPoint> FVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TContactPoint<double> *pTVar10;
  uint uVar11;
  double *pdVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  double dVar15;
  undefined1 auStackY_2b8 [32];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  int local_258;
  EContactPointType local_254;
  undefined1 local_248 [8];
  double local_240 [9];
  double local_1f8;
  int local_1f0;
  EContactPointType local_1ec;
  double local_1a0;
  int local_198;
  EContactPointType local_194;
  double local_148;
  int local_140;
  EContactPointType local_13c;
  double local_f0;
  int local_e8;
  EContactPointType local_e4;
  TContactPoint<double> local_d8;
  ulonglong local_78;
  
  dVar4 = __real_7fefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((*(byte *)&param_6->Flags >> 2 & 1) == 0) {
    pTVar10 = CapsuleConvexContactPoint
                        (&local_d8,param_1,param_2,(FImplicitObject *)param_3,param_4);
    UpdateContactPoint(param_6,pTVar10,param_5);
  }
  else {
    local_248._0_4_ = 0;
    local_1f0 = -1;
    local_1ec = Unknown;
    local_198 = -1;
    local_1f8 = __real_7fefffffffffffff;
    local_1a0 = __real_7fefffffffffffff;
    local_148 = __real_7fefffffffffffff;
    local_f0 = __real_7fefffffffffffff;
    local_194 = Unknown;
    local_140 = -1;
    local_13c = Unknown;
    local_e8 = -1;
    local_e4 = Unknown;
    ConstructCapsuleConvexOneShotManifold<Chaos::FConvex>
              (param_1,param_2,param_3,param_4,(double)param_6->CullDistance,
               (TCArray<Chaos::TContactPoint<double>,4> *)local_248);
    FPBDCollisionConstraint::ResetActiveManifoldContacts(param_6);
    fVar5 = __real_7f7fffff;
    lVar9 = (longlong)(int)local_248._0_4_;
    if (local_240 != local_240 + lVar9 * 0xb) {
      pdVar12 = local_240 + 2;
      do {
        local_258 = *(int *)(pdVar12 + 8);
        local_27c = (float)pdVar12[-1];
        local_254 = *(EContactPointType *)((longlong)pdVar12 + 0x44);
        local_280 = (float)pdVar12[-2];
        local_274 = (float)pdVar12[1];
        local_278 = (float)*pdVar12;
        local_26c = (float)pdVar12[3];
        local_270 = (float)pdVar12[2];
        local_264 = (float)pdVar12[5];
        local_268 = (float)pdVar12[4];
        local_25c = (float)pdVar12[7];
        local_260 = (float)pdVar12[6];
        if (local_25c != fVar5) {
          uVar7 = FPBDCollisionConstraint::AddManifoldPoint
                            (param_6,(TContactPoint<float> *)&local_280);
          uVar11 = 0;
          if ((int)uVar7 < (param_6->ManifoldPoints).ArrayNum) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
          uVar11 = param_6->ClosestManifoldPointIndex;
          FVar14 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
          if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar14 = FVar2;
          }
          dVar15 = dVar4;
          if (uVar11 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar11 < (param_6->ManifoldPoints).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (param_6->ManifoldPoints).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<Chaos::FManifoldPoint>)&param_6->ManifoldPoints;
            if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar13 = FVar2;
            }
            dVar15 = (double)*(float *)((longlong)(int)uVar11 * 0x6c + 0x24 + (longlong)FVar13);
          }
          if ((double)*(float *)((uchar *)((longlong)FVar14 + 0x24) + (longlong)(int)uVar7 * 0x6c) <
              dVar15) {
            param_6->ClosestManifoldPointIndex = uVar7;
          }
        }
        pdVar1 = pdVar12 + 9;
        pdVar12 = pdVar12 + 0xb;
      } while (pdVar1 != local_240 + lVar9 * 0xb);
    }
  }
  return;
}

