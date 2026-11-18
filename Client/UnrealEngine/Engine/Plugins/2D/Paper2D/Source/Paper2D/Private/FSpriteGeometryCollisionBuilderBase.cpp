// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 8

// FSpriteGeometryCollisionBuilderBase @ 14ace9b60

FSpriteGeometryCollisionBuilderBase * __thiscall
FSpriteGeometryCollisionBuilderBase::FSpriteGeometryCollisionBuilderBase
          (FSpriteGeometryCollisionBuilderBase *this,UBodySetup *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpriteGeometryCollisionBuilderBase *pFVar3;
  
  this->MyBodySetup = param_1;
  this->_padding_ = (longlong)&___7FSpriteGeometryCollisionBuilderBase__6B_;
  this->UnrealUnitsPerPixel = 1.0;
  this->CollisionThickness = 64.0;
  this->ZOffsetAmount = 0.0;
  this->CollisionDomain = Use3DPhysics;
  if (param_1 == (UBodySetup *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyBodySetup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSprite.cpp"
                       ,0x84c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSpriteGeometryCollisionBuilderBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// AddBoxCollisionShapesToBodySetup @ 14aced560

void __thiscall
FSpriteGeometryCollisionBuilderBase::AddBoxCollisionShapesToBodySetup
          (FSpriteGeometryCollisionBuilderBase *this,FSpriteGeometryCollection *param_1)

{
  int *piVar1;
  int iVar2;
  UBodySetup *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_res10 [8];
  double local_res18;
  double local_res20;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  iVar2 = (param_1->Shapes).ArrayNum;
  pFVar15 = (param_1->Shapes).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar2 * 0x40;
  do {
    if ((param_1->Shapes).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSpriteGeometryShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar15 == pFVar16) {
      return;
    }
    if (*pFVar15 == (FScriptContainerElement)0x0) {
      local_e8 = *(undefined4 *)(pFVar15 + 0x28);
      uStack_e4 = *(undefined4 *)(pFVar15 + 0x2c);
      uStack_e0 = *(undefined4 *)(pFVar15 + 0x30);
      uStack_dc = *(undefined4 *)(pFVar15 + 0x34);
      (**(code **)(this->_padding_ + 0x10))(this,&local_f8,&local_e8);
      (**(code **)(this->_padding_ + 0x18))(this,&local_108,pFVar15 + 0x18);
      dVar20 = (double)this->UnrealUnitsPerPixel;
      dVar8 = dVar20 * local_108;
      dVar5 = dVar20 * local_100;
      dVar6 = dVar20 * local_f8;
      dVar20 = dVar20 * local_f0;
      if (this->CollisionDomain == Use3DPhysics) {
        pUVar3 = this->MyBodySetup;
        piVar1 = &(pUVar3->AggGeom).BoxElems.ArrayMax;
        uVar11 = (pUVar3->AggGeom).BoxElems.ArrayNum;
        dVar17 = (double)this->ZOffsetAmount;
        local_res18 = dVar6 * PaperAxisX.field0_0x0._s_0.X + dVar20 * PaperAxisY.field0_0x0._s_0.X +
                      dVar17 * PaperAxisZ.field0_0x0._s_0.X;
        dVar18 = dVar17 * PaperAxisZ.field0_0x0._s_0.Z;
        dVar21 = dVar20 * PaperAxisY.field0_0x0._s_0.Z;
        dVar7 = dVar6 * PaperAxisX.field0_0x0._s_0.Z;
        dVar19 = (double)this->CollisionThickness;
        local_res20 = dVar6 * PaperAxisX.field0_0x0._s_0.Y + dVar20 * PaperAxisY.field0_0x0._s_0.Y +
                      dVar17 * PaperAxisZ.field0_0x0._s_0.Y;
        dVar20 = dVar5 * PaperAxisY.field0_0x0._s_0.X + dVar8 * PaperAxisX.field0_0x0._s_0.X +
                 dVar19 * PaperAxisZ.field0_0x0._s_0.X;
        dVar6 = dVar5 * PaperAxisY.field0_0x0._s_0.Y + dVar8 * PaperAxisX.field0_0x0._s_0.Y +
                dVar19 * PaperAxisZ.field0_0x0._s_0.Y;
        dVar5 = dVar5 * PaperAxisY.field0_0x0._s_0.Z + dVar8 * PaperAxisX.field0_0x0._s_0.Z +
                dVar19 * PaperAxisZ.field0_0x0._s_0.Z;
        if (uVar11 == *piVar1) {
          uVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&(pUVar3->AggGeom).BoxElems.AllocatorInstance,piVar1);
        }
        (pUVar3->AggGeom).BoxElems.ArrayNum = uVar11 + 1;
        uVar12 = 0;
        if ((int)uVar11 < (int)(uVar11 + 1)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (pUVar3->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70;
        pFVar14 = (FScriptContainerElement *)0x0;
        if (pFVar13 != (FScriptContainerElement *)0x0) {
          pFVar13[0x18] = (FScriptContainerElement)((byte)pFVar13[0x18] | 1);
          uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          *(undefined4 *)(pFVar13 + 0x10) = 0;
          pFVar13[0x19] = (FScriptContainerElement)0x3;
          *(undefined4 *)(pFVar13 + 0x20) = 6;
          *(FScriptContainerElement **)(pFVar13 + 0x28) = pFVar13;
          *(undefined ***)pFVar13 = &___7FKBoxElem__6B_;
          *(undefined8 *)(pFVar13 + 8) = 0;
          *(undefined4 *)(pFVar13 + 0x14) = 1;
          uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar13 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar13 + 0x38) = uVar9;
          *(double *)(pFVar13 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          *(double *)(pFVar13 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          *(double *)(pFVar13 + 0x50) = dVar8;
          *(double *)(pFVar13 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
          *(float *)(pFVar13 + 0x60) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar12,
                                       SUB84(dVar20,0) & uVar11);
          *(float *)(pFVar13 + 100) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,
                                       SUB84(dVar6,0) & uVar11);
          *(float *)(pFVar13 + 0x68) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar12,
                                       SUB84(dVar5,0) & uVar11);
          pFVar14 = pFVar13;
        }
        *(double *)(pFVar14 + 0x30) = local_res18;
        *(double *)(pFVar14 + 0x38) = local_res20;
        *(double *)(pFVar14 + 0x40) = dVar7 + dVar21 + dVar18;
        *(double *)(pFVar14 + 0x48) = (double)*(float *)(pFVar15 + 0x38);
        *(undefined8 *)(pFVar14 + 0x50) = 0;
        *(undefined8 *)(pFVar14 + 0x58) = 0;
      }
      else {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSprite.cpp"
                            ,0x87e,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar15 = pFVar15 + 0x40;
  } while( true );
}

// AddCircleCollisionShapesToBodySetup @ 14aced980

void __thiscall
FSpriteGeometryCollisionBuilderBase::AddCircleCollisionShapesToBodySetup
          (FSpriteGeometryCollisionBuilderBase *this,FSpriteGeometryCollection *param_1)

{
  int *piVar1;
  int iVar2;
  UBodySetup *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 local_res10 [8];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  
  fVar11 = __real_3f000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3fe0000000000000;
  iVar2 = (param_1->Shapes).ArrayNum;
  pFVar19 = (param_1->Shapes).AllocatorInstance.Data;
  pFVar18 = pFVar19 + (longlong)iVar2 * 0x40;
  do {
    if ((param_1->Shapes).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSpriteGeometryShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar19 == pFVar18) {
      return;
    }
    if (*pFVar19 == (FScriptContainerElement)0x1) {
      (**(code **)(this->_padding_ + 0x10))(this,&local_a8,pFVar19 + 0x28);
      (**(code **)(this->_padding_ + 0x18))(this,&local_98,pFVar19 + 0x18);
      dVar20 = (double)this->UnrealUnitsPerPixel;
      dVar5 = dVar20 * local_98;
      dVar21 = dVar20 * local_90;
      dVar7 = dVar20 * local_a8;
      dVar20 = dVar20 * local_a0;
      if (this->CollisionDomain == Use3DPhysics) {
        pUVar3 = this->MyBodySetup;
        piVar1 = &(pUVar3->AggGeom).SphereElems.ArrayMax;
        uVar14 = (pUVar3->AggGeom).SphereElems.ArrayNum;
        if (uVar14 == *piVar1) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,(ForAnyElementType *)&pUVar3->AggGeom,piVar1);
        }
        (pUVar3->AggGeom).SphereElems.ArrayNum = uVar14 + 1;
        uVar15 = 0;
        if ((int)uVar14 < (int)(uVar14 + 1)) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (pUVar3->AggGeom).SphereElems.AllocatorInstance.Data +
                  (longlong)(int)uVar14 * 0x50;
        pFVar17 = (FScriptContainerElement *)0x0;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          pFVar16[0x18] = (FScriptContainerElement)((byte)pFVar16[0x18] | 1);
          *(undefined8 *)(pFVar16 + 0x10) = 0;
          pFVar16[0x19] = (FScriptContainerElement)0x3;
          *(undefined4 *)(pFVar16 + 0x20) = 6;
          *(FScriptContainerElement **)(pFVar16 + 0x28) = pFVar16;
          *(undefined ***)pFVar16 = &___7FKSphereElem__6B_;
          *(undefined8 *)(pFVar16 + 8) = 0;
          uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar16 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar16 + 0x38) = uVar12;
          *(double *)(pFVar16 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          *(float *)(pFVar16 + 0x48) =
               (float)(((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,
                                         SUB84(dVar5,0) & uVar9) +
                       (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar10,
                                        SUB84(dVar21,0) & uVar9)) * dVar8) * fVar11;
          pFVar17 = pFVar16;
        }
        dVar25 = dVar20 * PaperAxisY.field0_0x0._s_0.Y;
        dVar5 = dVar7 * PaperAxisX.field0_0x0._s_0.Y;
        dVar24 = dVar20 * PaperAxisY.field0_0x0._s_0.Z;
        dVar22 = (double)this->ZOffsetAmount;
        dVar21 = dVar7 * PaperAxisX.field0_0x0._s_0.Z;
        dVar23 = dVar22 * PaperAxisZ.field0_0x0._s_0.Z;
        dVar6 = dVar22 * PaperAxisZ.field0_0x0._s_0.Y;
        *(double *)(pFVar17 + 0x30) =
             dVar20 * PaperAxisY.field0_0x0._s_0.X + dVar7 * PaperAxisX.field0_0x0._s_0.X +
             dVar22 * PaperAxisZ.field0_0x0._s_0.X;
        *(double *)(pFVar17 + 0x38) = dVar6 + dVar25 + dVar5;
        *(double *)(pFVar17 + 0x40) = dVar23 + dVar24 + dVar21;
      }
      else {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSprite.cpp"
                            ,0x8d5,L"");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar19 = pFVar19 + 0x40;
  } while( true );
}

// AddPolygonCollisionShapesToBodySetup @ 14acee530

void __thiscall
FSpriteGeometryCollisionBuilderBase::AddPolygonCollisionShapesToBodySetup
          (FSpriteGeometryCollisionBuilderBase *this,FSpriteGeometryCollection *param_1)

{
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  UBodySetup *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  uint uVar18;
  FKConvexElem *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  undefined1 local_res8 [8];
  int local_res18;
  longlong local_res20;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [120];
  
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  FSpriteGeometryCollection::Triangulate(param_1,&local_c0,false);
  iVar13 = local_c0.ArrayNum;
  pFVar22 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x10;
  FVar20.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if (local_c0.ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar20.Data == pFVar22) break;
    pdVar16 = (double *)(**(code **)(this->_padding_ + 0x10))(this,local_b0,FVar20.Data);
    dVar9 = pdVar16[1] * (double)this->UnrealUnitsPerPixel;
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = *pdVar16 * (double)this->UnrealUnitsPerPixel;
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])FVar20.Data = auVar8;
    FVar20.Data = FVar20.Data + 0x10;
  }
  if (this->CollisionDomain == Use3DPhysics) {
    dVar24 = (double)this->CollisionThickness;
    pUVar6 = this->MyBodySetup;
    uVar21 = 0;
    local_res18 = 0;
    dVar9 = PaperAxisZ.field0_0x0._s_0.X * __real_3fe0000000000000 * dVar24;
    dVar12 = PaperAxisZ.field0_0x0._s_0.Y * __real_3fe0000000000000 * dVar24;
    dVar24 = PaperAxisZ.field0_0x0._s_0.Z * __real_3fe0000000000000 * dVar24;
    if (0 < local_c0.ArrayNum / 3 + (local_c0.ArrayNum >> 0x1f) +
            (int)(((longlong)local_c0.ArrayNum / 3 + ((longlong)local_c0.ArrayNum >> 0x3f) &
                  0xffffffffU) >> 0x1f)) {
      pTVar1 = &(pUVar6->AggGeom).ConvexElems;
      piVar2 = &(pUVar6->AggGeom).ConvexElems.ArrayMax;
      local_res20 = 0;
      do {
        uVar15 = (pUVar6->AggGeom).ConvexElems.ArrayNum;
        if (uVar15 == *piVar2) {
          uVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x100,0x10,&pTVar1->AllocatorInstance,piVar2);
        }
        (pUVar6->AggGeom).ConvexElems.ArrayNum = uVar15 + 1;
        uVar18 = 0;
        if ((int)uVar15 < (int)(uVar15 + 1)) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = (FKConvexElem *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x100)
        ;
        if (pFVar19 == (FKConvexElem *)0x0) {
          pFVar19 = (FKConvexElem *)0x0;
        }
        else {
          pFVar19 = FKConvexElem::FKConvexElem(pFVar19);
        }
        piVar3 = &(pFVar19->VertexData).ArrayMax;
        (pFVar19->VertexData).ArrayNum = 0;
        if ((pFVar19->VertexData).ArrayMax != 6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,6,&(pFVar19->VertexData).AllocatorInstance,0,piVar3);
        }
        lVar23 = 3;
        lVar17 = local_res20 + 0x30;
        do {
          uVar15 = 0;
          if ((int)uVar21 < local_c0.ArrayNum) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = uVar21 + 1;
          pFVar22 = local_c0.AllocatorInstance.Data + local_res20;
          uVar15 = (pFVar19->VertexData).ArrayNum;
          local_res20 = local_res20 + 0x10;
          dVar25 = (double)this->ZOffsetAmount;
          dVar4 = *(double *)pFVar22;
          dVar5 = *(double *)(pFVar22 + 8);
          dVar10 = dVar5 * PaperAxisY.field0_0x0._s_0.X + dVar4 * PaperAxisX.field0_0x0._s_0.X +
                   dVar25 * PaperAxisZ.field0_0x0._s_0.X;
          dVar11 = dVar5 * PaperAxisY.field0_0x0._s_0.Y + dVar4 * PaperAxisX.field0_0x0._s_0.Y +
                   dVar25 * PaperAxisZ.field0_0x0._s_0.Y;
          dVar4 = dVar5 * PaperAxisY.field0_0x0._s_0.Z + dVar4 * PaperAxisX.field0_0x0._s_0.Z +
                  dVar25 * PaperAxisZ.field0_0x0._s_0.Z;
          if (uVar15 == *piVar3) {
            uVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pFVar19->VertexData).AllocatorInstance,piVar3);
          }
          (pFVar19->VertexData).ArrayNum = uVar15 + 1;
          uVar18 = 0;
          if ((int)uVar15 < (int)(uVar15 + 1)) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar22 = (pFVar19->VertexData).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
          if (pFVar22 != (FScriptContainerElement *)0x0) {
            *(double *)pFVar22 = dVar10 - dVar9;
            *(double *)(pFVar22 + 8) = dVar11 - dVar12;
            *(double *)(pFVar22 + 0x10) = dVar4 - dVar24;
          }
          uVar15 = (pFVar19->VertexData).ArrayNum;
          if (uVar15 == *piVar3) {
            uVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pFVar19->VertexData).AllocatorInstance,piVar3);
          }
          (pFVar19->VertexData).ArrayNum = uVar15 + 1;
          uVar18 = 0;
          if ((int)uVar15 < (int)(uVar15 + 1)) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar22 = (pFVar19->VertexData).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
          if (pFVar22 != (FScriptContainerElement *)0x0) {
            *(double *)pFVar22 = dVar10 + dVar9;
            *(double *)(pFVar22 + 8) = dVar11 + dVar12;
            *(double *)(pFVar22 + 0x10) = dVar4 + dVar24;
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        FKConvexElem::UpdateElemBox(pFVar19);
        local_res18 = local_res18 + 1;
        local_res20 = lVar17;
      } while (local_res18 <
               local_c0.ArrayNum / 3 + (local_c0.ArrayNum >> 0x1f) +
               (int)(((longlong)local_c0.ArrayNum / 3 + ((longlong)local_c0.ArrayNum >> 0x3f) &
                     0xffffffffU) >> 0x1f));
    }
  }
  else {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSprite.cpp"
                        ,0x8b0,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// ConvertTextureSpaceToPivotSpace @ 14acf2630

TVector2<double> * __thiscall
FSpriteGeometryCollisionBuilderBase::ConvertTextureSpaceToPivotSpace
          (FSpriteGeometryCollisionBuilderBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// ConvertTextureSpaceToPivotSpaceNoTranslation @ 14acf2840

TVector2<double> * __thiscall
FSpriteGeometryCollisionBuilderBase::ConvertTextureSpaceToPivotSpaceNoTranslation
          (FSpriteGeometryCollisionBuilderBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Finalize @ 14acf78a0

void __thiscall
FSpriteGeometryCollisionBuilderBase::Finalize(FSpriteGeometryCollisionBuilderBase *this)

{
  (**(code **)(this->MyBodySetup->_padding_ + 0x2d0))();
                    /* WARNING: Could not recover jumptable at 0x00014acf78c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->MyBodySetup->_padding_ + 0x2b0))();
  return;
}

// ProcessGeometry @ 14ad06020

void __thiscall
FSpriteGeometryCollisionBuilderBase::ProcessGeometry
          (FSpriteGeometryCollisionBuilderBase *this,FSpriteGeometryCollection *param_1)

{
  AddBoxCollisionShapesToBodySetup(this,param_1);
  AddPolygonCollisionShapesToBodySetup(this,param_1);
  AddCircleCollisionShapesToBodySetup(this,param_1);
  return;
}

