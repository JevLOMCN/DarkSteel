// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 19

// ~FMeshRefinerBase @ 14c6e17f0

void __thiscall UE::Geometry::FMeshRefinerBase::~FMeshRefinerBase(FMeshRefinerBase *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FMeshRefinerBase_Geometry_UE__6B_;
  pFVar1 = (this->DebugEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->VertexControlF != 0) {
    plVar2 = *(longlong **)&(this->VertexControlF).field_0x28;
    plVar3 = (longlong *)&(this->VertexControlF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((this->Constraints).bIsSet != false) {
    FMeshConstraints::~FMeshConstraints(&(this->Constraints).TypedValue);
    return;
  }
  return;
}

// CanCollapseEdge @ 14c71ac80

bool __thiscall
UE::Geometry::FMeshRefinerBase::CanCollapseEdge
          (FMeshRefinerBase *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int *param_8)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FEdgeConstraint *pFVar7;
  FEdgeConstraint local_88;
  FEdgeConstraint local_70;
  FEdgeConstraint local_58;
  FEdgeConstraint local_40;
  
  *param_8 = -1;
  if ((this->Constraints).bIsSet == false) {
    return true;
  }
  bVar2 = CanCollapseVertex(this,param_1,param_2,param_3,param_8);
  if (!bVar2) {
    return false;
  }
  bVar2 = false;
  bVar3 = false;
  if (param_4 != -1) {
    iVar5 = FDynamicMesh3::FindEdgeFromTri(this->Mesh,param_2,param_4,param_6);
    iVar6 = FDynamicMesh3::FindEdgeFromTri(this->Mesh,param_3,param_4,param_6);
    if (((this->Constraints).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar7 = FMeshConstraints::GetEdgeConstraint(&(this->Constraints).TypedValue,&local_88,iVar5);
    if ((pFVar7->RefineFlags != NoConstraint) || (pFVar7->Target != (IProjectionTarget *)0x0)) {
      bVar2 = true;
    }
    if (((this->Constraints).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar7 = FMeshConstraints::GetEdgeConstraint(&(this->Constraints).TypedValue,&local_70,iVar6);
    if ((pFVar7->RefineFlags == NoConstraint) && (pFVar7->Target == (IProjectionTarget *)0x0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  if (param_5 == -1) goto LAB_14c71aeef;
  iVar5 = FDynamicMesh3::FindEdgeFromTri(this->Mesh,param_2,param_5,param_7);
  iVar6 = FDynamicMesh3::FindEdgeFromTri(this->Mesh,param_3,param_5,param_7);
  if (bVar2) {
LAB_14c71ae94:
    bVar2 = true;
  }
  else {
    if (((this->Constraints).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar7 = FMeshConstraints::GetEdgeConstraint(&(this->Constraints).TypedValue,&local_58,iVar5);
    if ((pFVar7->RefineFlags != NoConstraint) || (pFVar7->Target != (IProjectionTarget *)0x0))
    goto LAB_14c71ae94;
    bVar2 = false;
  }
  if (!bVar3) {
    if (((this->Constraints).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar7 = FMeshConstraints::GetEdgeConstraint(&(this->Constraints).TypedValue,&local_40,iVar6);
    if ((pFVar7->RefineFlags == NoConstraint) && (pFVar7->Target == (IProjectionTarget *)0x0)) {
      bVar3 = false;
      goto LAB_14c71aeef;
    }
  }
  bVar3 = true;
LAB_14c71aeef:
  if ((!bVar2) || (!bVar3)) {
    iVar5 = *param_8;
    if (iVar5 == -1) {
      if (!bVar2) {
        if (!bVar3) {
          return true;
        }
        *param_8 = param_3;
        return true;
      }
      if (bVar3) {
        return true;
      }
      *param_8 = param_2;
      return true;
    }
    if ((iVar5 != param_2) || (!bVar3)) {
      if (iVar5 != param_3) {
        return true;
      }
      if (!bVar2) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// CanCollapseVertex @ 14c71af70

bool __thiscall
UE::Geometry::FMeshRefinerBase::CanCollapseVertex
          (FMeshRefinerBase *this,int param_1,int param_2,int param_3,int *param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  IProjectionTarget IVar6;
  IProjectionTarget IVar7;
  FEdgeConstraint *pFVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  char cVar12;
  IProjectionTarget IVar13;
  char cVar14;
  FEdgeConstraint local_38;
  
  *param_4 = -1;
  if ((this->Constraints).bIsSet == false) {
    return true;
  }
  IVar13 = (IProjectionTarget)0x0;
  if (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x8 !=
      *(int *)&(this->Constraints).TypedValue.Vertices.field_0x34) {
    puVar10 = *(undefined1 **)&(this->Constraints).TypedValue.Vertices.field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Constraints).TypedValue.Vertices.field_0x38;
    }
    iVar11 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x48 - 1U & param_2) *
                     4);
    if (iVar11 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar11 * 0x20 +
                        *(longlong *)&(this->Constraints).TypedValue.Vertices);
        if (*piVar9 == param_2) {
          IVar6 = (IProjectionTarget)(piVar9 + 2);
          if (piVar9 == (int *)0x0) {
            IVar6 = IVar13;
          }
          if (IVar6 != (IProjectionTarget)0x0) {
            auVar1 = *(undefined1 (*) [16])IVar6;
            IVar6 = *(IProjectionTarget *)((longlong)IVar6 + 8);
            cVar12 = auVar1[0];
            iVar11 = auVar1._4_4_;
            cVar14 = auVar1[1];
            goto LAB_14c71b018;
          }
          break;
        }
        iVar11 = piVar9[6];
      } while (iVar11 != -1);
    }
  }
  cVar12 = '\0';
  cVar14 = '\x01';
  iVar11 = -1;
  IVar6 = IVar13;
LAB_14c71b018:
  if (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x8 !=
      *(int *)&(this->Constraints).TypedValue.Vertices.field_0x34) {
    puVar10 = *(undefined1 **)&(this->Constraints).TypedValue.Vertices.field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Constraints).TypedValue.Vertices.field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x48 - 1U & param_3) * 4
                    );
    if (iVar5 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar5 * 0x20 +
                        *(longlong *)&(this->Constraints).TypedValue.Vertices);
        if (*piVar9 == param_3) {
          IVar7 = (IProjectionTarget)(piVar9 + 2);
          if (piVar9 == (int *)0x0) {
            IVar7 = IVar13;
          }
          if (IVar7 != (IProjectionTarget)0x0) {
            local_38.RefineFlags._0_1_ = *(undefined1 *)IVar7;
            local_38.RefineFlags._1_1_ = *(char *)((longlong)IVar7 + 1);
            local_38.RefineFlags._2_1_ = *(undefined1 *)((longlong)IVar7 + 2);
            local_38.RefineFlags._3_1_ = *(undefined1 *)((longlong)IVar7 + 3);
            local_38._4_1_ = *(undefined1 *)((longlong)IVar7 + 4);
            local_38._5_1_ = *(undefined1 *)((longlong)IVar7 + 5);
            local_38._6_1_ = *(undefined1 *)((longlong)IVar7 + 6);
            local_38._7_1_ = *(undefined1 *)((longlong)IVar7 + 7);
            local_38.Target._0_1_ = *(undefined1 *)((longlong)IVar7 + 8);
            local_38.Target._1_1_ = *(undefined1 *)((longlong)IVar7 + 9);
            local_38.Target._2_1_ = *(undefined1 *)((longlong)IVar7 + 10);
            local_38.Target._3_1_ = *(undefined1 *)((longlong)IVar7 + 0xb);
            local_38.Target._4_1_ = *(undefined1 *)((longlong)IVar7 + 0xc);
            local_38.Target._5_1_ = *(undefined1 *)((longlong)IVar7 + 0xd);
            local_38.Target._6_1_ = *(undefined1 *)((longlong)IVar7 + 0xe);
            local_38.Target._7_1_ = *(undefined1 *)((longlong)IVar7 + 0xf);
            IVar13 = *(IProjectionTarget *)((longlong)IVar7 + 8);
            goto LAB_14c71b07e;
          }
          break;
        }
        iVar5 = piVar9[6];
      } while (iVar5 != -1);
    }
  }
  local_38.RefineFlags._0_1_ = NoConstraint;
  local_38.RefineFlags._1_1_ = 1;
  local_38._4_1_ = 0xff;
  local_38._5_1_ = 0xff;
  local_38._6_1_ = 0xff;
  local_38._7_1_ = 0xff;
LAB_14c71b07e:
  if ((cVar14 == '\0') && (local_38.RefineFlags._1_1_ == NoConstraint >> 8)) {
    return false;
  }
  if (cVar12 == '\0') {
    if ((((undefined1)local_38.RefineFlags == NoConstraint) && (IVar6 == (IProjectionTarget)0x0)) &&
       (IVar13 == (IProjectionTarget)0x0)) {
      return true;
    }
    if ((undefined1)local_38.RefineFlags != NoConstraint) goto LAB_14c71b140;
  }
  else {
    if ((undefined1)local_38.RefineFlags == NoConstraint) {
      if ((IVar13 != (IProjectionTarget)0x0) && (IVar13 != IVar6)) {
        return false;
      }
      goto LAB_14c71b180;
    }
LAB_14c71b140:
    if (cVar12 == '\0') {
      if (IVar6 != (IProjectionTarget)0x0) {
        if (IVar6 == IVar13) {
          *param_4 = param_3;
          return true;
        }
        return false;
      }
      goto LAB_14c71b1fc;
    }
  }
  if (((this->AllowCollapseFixedVertsWithSameSetID != false) && (-1 < iVar11)) &&
     (iVar11 == CONCAT13(local_38._7_1_,
                         CONCAT12(local_38._6_1_,CONCAT11(local_38._5_1_,local_38._4_1_))))) {
    return true;
  }
  if (IVar6 != (IProjectionTarget)0x0) {
    if (IVar13 != (IProjectionTarget)0x0) {
      if (IVar6 != IVar13) {
        return false;
      }
      if (((this->Constraints).bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar8 = FMeshConstraints::GetEdgeConstraint
                         (&(this->Constraints).TypedValue,&local_38,param_1);
      return (IProjectionTarget)pFVar8->Target == IVar6;
    }
LAB_14c71b180:
    *param_4 = param_2;
    return true;
  }
  if (IVar13 == (IProjectionTarget)0x0) {
    return false;
  }
LAB_14c71b1fc:
  *param_4 = param_3;
  return true;
}

// Cancelled @ 14c71b210

bool __thiscall UE::Geometry::FMeshRefinerBase::Cancelled(FMeshRefinerBase *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// CheckIfCollapseCreatesFlipOrInvalid @ 14c71b300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
          (FMeshRefinerBase *this,int param_1,int param_2,TVector<double> *param_3,int param_4,
          int param_5)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  TVector<double>_u_0 *pTVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_328 [32];
  double local_308;
  undefined8 local_300;
  uint local_2f8;
  TVector<double>_u_0 local_2f0;
  double local_2d8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  undefined1 local_288 [48];
  ValueIterator local_258;
  ValueIterator local_230;
  undefined1 local_208 [144];
  undefined1 local_178 [144];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_328;
  FDynamicMesh3::VtxTrianglesItr
            (this->Mesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_288,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_208,&local_258
             ,&local_230,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_288);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_178,&local_230
             ,&local_230,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_288);
  do {
    if ((((local_208._0_8_ == local_178._0_8_) && (local_208._8_4_ == local_178._8_4_)) &&
        (local_208._24_4_ == local_178._24_4_)) && (local_208._28_4_ == local_178._28_4_)) {
      if (local_178._96_8_ != 0) {
        plVar14 = (longlong *)(local_178 + 0x70);
        if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_178._136_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_208._96_8_ != 0) {
        plVar14 = (longlong *)(local_208 + 0x70);
        if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_208._136_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_288._0_8_ != 0) {
        plVar14 = (longlong *)(local_288 + 0x10);
        if ((longlong *)local_288._40_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_288._40_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      return false;
    }
    uVar15 = (uint)local_208._88_8_;
    if ((uVar15 != param_4) && (uVar15 != param_5)) {
      uVar13 = (ulonglong)(uVar15 & 0x1ff);
      lVar3 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
               ((local_208._88_8_ & 0xffffffff) >> 9) * 8);
      local_300 = *(undefined8 *)(lVar3 + uVar13 * 0xc);
      local_2f8 = *(uint *)(lVar3 + 8 + uVar13 * 0xc);
      if (((int)local_300 == param_2) ||
         ((iVar18 = (int)((ulonglong)local_300 >> 0x20), iVar18 == param_2 || (local_2f8 == param_2)
          ))) {
LAB_14c71b7d2:
        if (local_178._96_8_ != 0) {
          plVar14 = (longlong *)(local_178 + 0x70);
          if ((longlong *)local_178._136_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_178._136_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (local_208._96_8_ != 0) {
          plVar14 = (longlong *)(local_208 + 0x70);
          if ((longlong *)local_208._136_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_208._136_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (local_288._0_8_ != 0) {
          plVar14 = (longlong *)(local_288 + 0x10);
          if ((longlong *)local_288._40_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_288._40_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        return true;
      }
      uVar15 = *(uint *)(lVar3 + uVar13 * 0xc);
      uVar2 = *(uint *)(lVar3 + 4 + uVar13 * 0xc);
      pFVar4 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      uVar13 = (ulonglong)(uVar15 & 0x1ff);
      lVar3 = *(longlong *)(pFVar4 + (ulonglong)(uVar15 >> 9) * 8);
      uVar16 = (ulonglong)(uVar2 & 0x1ff);
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      dVar24 = *pdVar1;
      dVar22 = pdVar1[1];
      dVar23 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      pdVar1 = (double *)(*(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8) + uVar16 * 0x18);
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      dVar20 = *(double *)
                (*(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar16 * 0x18);
      local_308 = dVar20 - dVar23;
      dVar6 = dVar8 - dVar24;
      local_2d8 = dVar9 - dVar22;
      local_2f0._s_0.Z =
           *(double *)
            (*(longlong *)(pFVar4 + (ulonglong)(local_2f8 >> 9) * 8) + 0x10 +
            (ulonglong)(local_2f8 & 0x1ff) * 0x18);
      dVar23 = local_2f0._s_0.Z - dVar23;
      pdVar1 = (double *)
               (*(longlong *)(pFVar4 + (ulonglong)(local_2f8 >> 9) * 8) +
               (ulonglong)(local_2f8 & 0x1ff) * 0x18);
      dVar21 = *pdVar1;
      dVar19 = pdVar1[1];
      dVar10 = dVar19 - dVar22;
      dVar7 = dVar21 - dVar24;
      local_2d0._s_0.X = dVar23 * local_2d8 - dVar10 * local_308;
      local_2d0._s_0.Y = dVar7 * local_308 - dVar23 * dVar6;
      uVar25 = 0;
      uVar26 = 0;
      local_2d0._s_0.Z = dVar10 * dVar6 - dVar7 * local_2d8;
      if ((int)local_300 == param_1) {
        dVar19 = dVar19 - (param_3->field0_0x0)._s_0.Y;
        dVar21 = dVar21 - (param_3->field0_0x0)._s_0.X;
        dVar23 = local_2f0._s_0.Z - (param_3->field0_0x0)._s_0.Z;
        dVar8 = dVar8 - (param_3->field0_0x0)._s_0.X;
        dVar9 = dVar9 - (param_3->field0_0x0)._s_0.Y;
        dVar20 = dVar20 - (param_3->field0_0x0)._s_0.Z;
        pTVar17 = &local_2b8;
        local_2b8._s_0.X = dVar23 * dVar9 - dVar19 * dVar20;
        local_2b8._s_0.Y = dVar21 * dVar20 - dVar23 * dVar8;
        local_2b8._s_0.Z = dVar19 * dVar8 - dVar21 * dVar9;
LAB_14c71b716:
        dVar23 = ComputeEdgeFlipMetric
                           (this,(TVector<double> *)&local_2d0._s_0,
                            (TVector<double> *)&pTVar17->_s_0);
        uVar25 = SUB84(dVar23,0);
        uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      else {
        if (iVar18 == param_1) {
          pTVar17 = &local_2a0;
          dVar24 = (param_3->field0_0x0)._s_0.X - dVar24;
          dVar22 = (param_3->field0_0x0)._s_0.Y - dVar22;
          dVar20 = (param_3->field0_0x0)._s_0.Z - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
          local_2a0._s_0.X = dVar23 * dVar22 - dVar10 * dVar20;
          local_2a0._s_0.Y = dVar7 * dVar20 - dVar24 * dVar23;
          local_2a0._s_0.Z = dVar24 * dVar10 - dVar7 * dVar22;
          goto LAB_14c71b716;
        }
        if (local_2f8 == param_1) {
          pTVar17 = &local_2f0;
          dVar22 = (param_3->field0_0x0)._s_0.Y - dVar22;
          dVar24 = (param_3->field0_0x0)._s_0.X - dVar24;
          dVar23 = (param_3->field0_0x0)._s_0.Z - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
          local_2f0._s_0.X = local_2d8 * dVar23 - dVar22 * local_308;
          local_2f0._s_0.Y = dVar24 * local_308 - dVar6 * dVar23;
          local_2f0._s_0.Z = dVar6 * dVar22 - dVar24 * local_2d8;
          goto LAB_14c71b716;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                            ,0x32,L"");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
      }
      if ((double)CONCAT44(uVar26,uVar25) < this->EdgeFlipTolerance ||
          (double)CONCAT44(uVar26,uVar25) == this->EdgeFlipTolerance) goto LAB_14c71b7d2;
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_208);
  } while( true );
}

// CheckIfCollapseCreatesTinyTriangle @ 14c71b8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
          (FMeshRefinerBase *this,int param_1,int param_2,TVector<double> *param_3,int param_4,
          int param_5)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStackY_2c8 [32];
  double dStack_2a0;
  int local_298 [2];
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TVector<double> *local_238;
  undefined1 local_228 [48];
  ValueIterator local_1f8;
  ValueIterator local_1d0;
  undefined1 local_1a8 [144];
  undefined1 local_118 [144];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_238 = param_3;
  FDynamicMesh3::VtxTrianglesItr
            (this->Mesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_228,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1a8,&local_1f8
             ,&local_1d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_228);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_118,&local_1d0
             ,&local_1d0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_228);
  do {
    if ((((local_1a8._0_8_ == local_118._0_8_) && (local_1a8._8_4_ == local_118._8_4_)) &&
        (local_1a8._24_4_ == local_118._24_4_)) && (local_1a8._28_4_ == local_118._28_4_)) {
      if (local_118._96_8_ != 0) {
        plVar7 = (longlong *)(local_118 + 0x70);
        if ((longlong *)local_118._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_118._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_1a8._96_8_ != 0) {
        plVar7 = (longlong *)(local_1a8 + 0x70);
        if ((longlong *)local_1a8._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_1a8._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_228._0_8_ != 0) {
        plVar7 = (longlong *)(local_228 + 0x10);
        if ((longlong *)local_228._40_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_228._40_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      return false;
    }
    uVar8 = (uint)local_1a8._88_8_;
    if ((uVar8 != param_4) && (uVar8 != param_5)) {
      lVar6 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
               ((local_1a8._88_8_ & 0xffffffff) >> 9) * 8);
      uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      iVar3 = *(int *)(lVar6 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      local_298[0] = (int)uVar1;
      if ((local_298[0] == param_2) ||
         ((iVar5 = (int)((ulonglong)uVar1 >> 0x20), iVar5 == param_2 || (iVar3 == param_2)))) {
LAB_14c71bc38:
        if (local_118._96_8_ != 0) {
          plVar7 = (longlong *)(local_118 + 0x70);
          if ((longlong *)local_118._136_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_118._136_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_1a8._96_8_ != 0) {
          plVar7 = (longlong *)(local_1a8 + 0x70);
          if ((longlong *)local_1a8._136_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_1a8._136_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_228._0_8_ != 0) {
          plVar7 = (longlong *)(local_228 + 0x10);
          if ((longlong *)local_228._40_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_228._40_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        return true;
      }
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this->Mesh,uVar8,(TVector<double> *)local_288,(TVector<double> *)&local_270._s_0,
                 (TVector<double> *)&local_258._s_0);
      dVar2 = this->TinyTriangleThreshold;
      dVar4 = (local_270._s_0.Z - local_278) * (local_258._s_0.X - (double)local_288._0_8_) -
              (local_258._s_0.Z - local_278) * (local_270._s_0.X - (double)local_288._0_8_);
      dVar10 = (local_258._s_0.Y - (double)local_288._8_8_) *
               (local_270._s_0.X - (double)local_288._0_8_) -
               (local_270._s_0.Y - (double)local_288._8_8_) *
               (local_258._s_0.X - (double)local_288._0_8_);
      dVar9 = (local_270._s_0.Y - (double)local_288._8_8_) * (local_258._s_0.Z - local_278) -
              (local_258._s_0.Y - (double)local_288._8_8_) * (local_270._s_0.Z - local_278);
      if (dVar2 <= dVar9 * dVar9 + dVar4 * dVar4 + dVar10 * dVar10) {
        if (local_298[0] == param_1) {
          iVar5 = 0;
        }
        else if (iVar5 == param_1) {
          iVar5 = 1;
        }
        else {
          iVar5 = -1;
          if (iVar3 == param_1) {
            iVar5 = 2;
          }
        }
        lVar6 = (longlong)iVar5;
        dVar9 = (local_238->field0_0x0)._s_0.Y;
        dVar4 = (local_238->field0_0x0)._s_0.Z;
        *(double *)(local_288 + lVar6 * 0x18) = (local_238->field0_0x0)._s_0.X;
        *(double *)(local_288 + lVar6 * 0x18 + 8) = dVar9;
        *(double *)(local_288 + lVar6 * 0x18 + 0x10) = dVar4;
        dVar10 = (local_270._s_0.Y - (double)local_288._8_8_) * (local_258._s_0.Z - local_278) -
                 (local_258._s_0.Y - (double)local_288._8_8_) * (local_270._s_0.Z - local_278);
        dVar9 = (local_270._s_0.Z - local_278) * (local_258._s_0.X - (double)local_288._0_8_) -
                (local_258._s_0.Z - local_278) * (local_270._s_0.X - (double)local_288._0_8_);
        dVar4 = (local_258._s_0.Y - (double)local_288._8_8_) *
                (local_270._s_0.X - (double)local_288._0_8_) -
                (local_270._s_0.Y - (double)local_288._8_8_) *
                (local_258._s_0.X - (double)local_288._0_8_);
        if (dVar10 * dVar10 + dVar9 * dVar9 + dVar4 * dVar4 < dVar2) goto LAB_14c71bc38;
      }
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1a8);
  } while( true );
}

// CheckIfFlipCreatesTinyTriangle @ 14c71c180

bool __thiscall
UE::Geometry::FMeshRefinerBase::CheckIfFlipCreatesTinyTriangle
          (FMeshRefinerBase *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar2 = this->TinyTriangleThreshold;
  pFVar6 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  uVar17 = (ulonglong)(param_3 & 0x1ff);
  lVar7 = *(longlong *)(pFVar6 + (ulonglong)((uint)param_3 >> 9) * 8);
  auVar5 = *(undefined1 (*) [16])(lVar7 + uVar17 * 0x18);
  dVar11 = auVar5._8_8_;
  dVar3 = *(double *)
           (*(longlong *)(pFVar6 + (ulonglong)((uint)param_4 >> 9) * 8) + 0x10 +
           (ulonglong)(param_4 & 0x1ff) * 0x18);
  pdVar1 = (double *)
           (*(longlong *)(pFVar6 + (ulonglong)((uint)param_4 >> 9) * 8) +
           (ulonglong)(param_4 & 0x1ff) * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  pdVar1 = (double *)
           (*(longlong *)(pFVar6 + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  dVar4 = *(double *)
           (*(longlong *)(pFVar6 + (ulonglong)((uint)param_1 >> 9) * 8) + 0x10 +
           (ulonglong)(param_1 & 0x1ff) * 0x18);
  uVar18 = (ulonglong)(param_2 & 0x1ff);
  dVar21 = auVar5._0_8_;
  dVar23 = dVar14 - dVar21;
  dVar19 = dVar4 - *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
  lVar8 = *(longlong *)(pFVar6 + (ulonglong)((uint)param_2 >> 9) * 8);
  auVar5 = *(undefined1 (*) [16])(lVar8 + uVar18 * 0x18);
  dVar21 = auVar5._0_8_ - dVar21;
  dVar9 = auVar5._8_8_;
  dVar10 = *(double *)(lVar8 + 0x10 + uVar18 * 0x18) - *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
  dVar22 = (dVar9 - dVar11) * dVar23 - dVar21 * (dVar15 - dVar11);
  dVar20 = dVar10 * (dVar15 - dVar11) - (dVar9 - dVar11) * dVar19;
  dVar21 = dVar21 * dVar19 - dVar10 * dVar23;
  if ((dVar20 * dVar20 + dVar21 * dVar21 + dVar22 * dVar22 < dVar2) ||
     (dVar10 = *(double *)(lVar8 + uVar18 * 0x18) - dVar12,
     dVar21 = *(double *)(lVar8 + 0x10 + uVar18 * 0x18) - dVar3,
     dVar22 = dVar21 * (dVar15 - dVar13) - (dVar9 - dVar13) * (dVar4 - dVar3),
     dVar20 = dVar10 * (dVar4 - dVar3) - dVar21 * (dVar14 - dVar12),
     dVar21 = (dVar9 - dVar13) * (dVar14 - dVar12) - dVar10 * (dVar15 - dVar13),
     dVar20 * dVar20 + dVar22 * dVar22 + dVar21 * dVar21 < dVar2)) {
    bVar16 = false;
  }
  else {
    dVar21 = dVar3 - *(double *)(lVar8 + 0x10 + uVar18 * 0x18);
    dVar20 = dVar12 - *(double *)(lVar7 + uVar17 * 0x18);
    dVar11 = dVar13 - dVar11;
    dVar23 = dVar12 - *(double *)(lVar8 + uVar18 * 0x18);
    dVar22 = dVar3 - *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
    dVar10 = (dVar13 - dVar9) * dVar20 - dVar23 * dVar11;
    dVar23 = dVar23 * dVar22 - dVar21 * dVar20;
    dVar21 = dVar21 * dVar11 - (dVar13 - dVar9) * dVar22;
    if (dVar23 * dVar23 + dVar21 * dVar21 + dVar10 * dVar10 < dVar2) {
      bVar16 = true;
    }
    else {
      dVar21 = (dVar3 - dVar4) * dVar11 - (dVar13 - dVar15) * dVar22;
      dVar3 = (dVar12 - dVar14) * dVar22 - (dVar3 - dVar4) * dVar20;
      dVar4 = (dVar13 - dVar15) * dVar20 - (dVar12 - dVar14) * dVar11;
      bVar16 = dVar3 * dVar3 + dVar21 * dVar21 + dVar4 * dVar4 < dVar2;
    }
  }
  return bVar16;
}

// CheckIfFlipInvertsNormals @ 14c71c500

bool __thiscall
UE::Geometry::FMeshRefinerBase::CheckIfFlipInvertsNormals
          (FMeshRefinerBase *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined1 local_108 [16];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  double local_b8;
  
  pFVar9 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  dVar2 = *(double *)
           (*(longlong *)(pFVar9 + (ulonglong)((uint)param_3 >> 9) * 8) + 0x10 +
           (ulonglong)(param_3 & 0x1ff) * 0x18);
  pdVar1 = (double *)
           (*(longlong *)(pFVar9 + (ulonglong)((uint)param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 0x18);
  dVar15 = *pdVar1;
  dVar16 = pdVar1[1];
  uVar21 = (ulonglong)(param_4 & 0x1ff);
  lVar10 = *(longlong *)(pFVar9 + (ulonglong)((uint)param_4 >> 9) * 8);
  local_b8 = *(double *)(lVar10 + 0x10 + uVar21 * 0x18);
  lVar11 = *(longlong *)
            ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_5 >> 9) * 8);
  uVar3 = *(undefined8 *)(lVar11 + (ulonglong)(param_5 & 0x1ff) * 0xc);
  iVar8 = *(int *)(lVar11 + 8 + (ulonglong)(param_5 & 0x1ff) * 0xc);
  local_108._0_4_ = (undefined4)uVar3;
  uVar22 = param_2;
  if (param_1 == local_108._0_4_) {
    bVar23 = iVar8 == param_2;
  }
  else {
    iVar20 = (int)((ulonglong)uVar3 >> 0x20);
    if (param_1 == iVar20) {
      bVar23 = local_108._0_4_ == param_2;
    }
    else {
      if (param_1 != iVar8) goto LAB_14c71c611;
      bVar23 = iVar20 == param_2;
    }
  }
  if (bVar23) {
    uVar22 = param_1;
    param_1 = param_2;
  }
LAB_14c71c611:
  auVar7 = *(undefined1 (*) [16])
            (*(longlong *)(pFVar9 + (ulonglong)((uint)param_1 >> 9) * 8) +
            (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar4 = *(double *)
           (*(longlong *)(pFVar9 + (ulonglong)((uint)param_1 >> 9) * 8) + 0x10 +
           (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar14 = auVar7._0_8_;
  dVar6 = auVar7._8_8_;
  local_108._8_4_ = auVar7._8_4_;
  local_108._0_8_ = dVar6;
  local_108._12_4_ = auVar7._12_4_;
  pdVar1 = (double *)
           (*(longlong *)(pFVar9 + (ulonglong)(uVar22 >> 9) * 8) +
           (ulonglong)(uVar22 & 0x1ff) * 0x18);
  dVar17 = *pdVar1;
  dVar18 = pdVar1[1];
  dVar5 = *(double *)
           (*(longlong *)(pFVar9 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 +
           (ulonglong)(uVar22 & 0x1ff) * 0x18);
  local_e0._s_0.Y = (dVar17 - dVar14) * (dVar2 - dVar4) - (dVar5 - dVar4) * (dVar15 - dVar14);
  local_e0._s_0.X = (dVar5 - dVar4) * (dVar16 - dVar6) - (dVar18 - dVar6) * (dVar2 - dVar4);
  auVar7 = *(undefined1 (*) [16])(lVar10 + uVar21 * 0x18);
  local_e0._s_0.Z = (dVar18 - dVar6) * (dVar15 - dVar14) - (dVar17 - dVar14) * (dVar16 - dVar6);
  dVar13 = auVar7._0_8_ - dVar17;
  dVar12 = auVar7._8_8_;
  local_f8._s_0.X = (dVar4 - dVar5) * (dVar12 - dVar18) - (dVar6 - dVar18) * (local_b8 - dVar5);
  local_f8._s_0.Y = (dVar14 - dVar17) * (local_b8 - dVar5) - (dVar4 - dVar5) * dVar13;
  dVar19 = *(double *)(lVar10 + uVar21 * 0x18);
  local_f8._s_0.Z = (dVar6 - dVar18) * dVar13 - (dVar14 - dVar17) * (dVar12 - dVar18);
  dVar6 = this->EdgeFlipTolerance;
  local_128 = (local_b8 - dVar2) * (dVar18 - dVar16) - (dVar12 - dVar16) * (dVar5 - dVar2);
  local_118 = (dVar12 - dVar16) * (dVar17 - dVar15) - (dVar19 - dVar15) * (dVar18 - dVar16);
  dStack_120 = (dVar19 - dVar15) * (dVar5 - dVar2) - (local_b8 - dVar2) * (dVar17 - dVar15);
  dVar5 = ComputeEdgeFlipMetric
                    (this,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_128);
  if ((dVar6 < dVar5) &&
     (dVar5 = ComputeEdgeFlipMetric
                        (this,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_128),
     dVar6 < dVar5)) {
    local_118 = (dVar16 - dVar12) * (dVar14 - dVar19) -
                (dVar15 - dVar19) * ((double)local_108._0_8_ - dVar12);
    dStack_120 = (dVar15 - dVar19) * (dVar4 - local_b8) - (dVar2 - local_b8) * (dVar14 - dVar19);
    local_128 = (dVar2 - local_b8) * ((double)local_108._0_8_ - dVar12) -
                (dVar16 - dVar12) * (dVar4 - local_b8);
    dVar2 = ComputeEdgeFlipMetric
                      (this,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_128);
    if ((dVar6 < dVar2) &&
       (dVar2 = ComputeEdgeFlipMetric
                          (this,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_128),
       dVar6 < dVar2)) {
      return false;
    }
  }
  return true;
}

// ComputeEdgeFlipMetric @ 14c720200

double __thiscall
UE::Geometry::FMeshRefinerBase::ComputeEdgeFlipMetric
          (FMeshRefinerBase *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (this->EdgeFlipTolerance == 0.0) {
    return (param_2->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.Y +
           (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.Z;
  }
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  auVar5._0_8_ = dVar2 * dVar2;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar11 * dVar11 + auVar5._0_8_ + dVar1 * dVar1;
  auVar6 = sqrtpd(auVar5,auVar6);
  if (auVar6._0_8_ <= __real_3e45798ee2308c3a) {
    dVar11 = 0.0;
    dVar1 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / auVar6._0_8_;
    dVar11 = dVar10 * dVar11;
    dVar1 = dVar10 * dVar1;
    dVar10 = dVar10 * dVar2;
  }
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  auVar7._0_8_ = dVar2 * dVar2;
  auVar7._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4 * dVar4 + auVar7._0_8_ + dVar8 * dVar8;
  auVar6 = sqrtpd(auVar7,auVar3);
  if (auVar6._0_8_ <= __real_3e45798ee2308c3a) {
    dVar4 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar9 = __real_3ff0000000000000 / auVar6._0_8_;
    dVar4 = dVar9 * (param_2->field0_0x0)._s_0.Y;
    dVar8 = dVar9 * dVar8;
    dVar9 = dVar9 * dVar2;
  }
  return dVar4 * dVar11 + dVar9 * dVar10 + dVar8 * dVar1;
}

// DebugCheckUVSeamConstraints @ 14c729d00

void __thiscall UE::Geometry::FMeshRefinerBase::DebugCheckUVSeamConstraints(FMeshRefinerBase *this)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  FDynamicMeshAttributeSet *pFVar15;
  uint uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  
  pFVar2 = this->Mesh;
  pFVar15 = (pFVar2->AttributeSet).Ptr;
  if (pFVar15 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  if ((pFVar15->UVLayers).Array.ArrayNum < 1) {
    return;
  }
  if (*(longlong *)(pFVar15->UVLayers).Array.AllocatorInstance.Data == 0) {
    return;
  }
  if ((this->Constraints).bIsSet == false) {
    return;
  }
  pFVar17 = (FDynamicMeshAttributeSet *)0x0;
  uVar16 = (pFVar2->EdgeRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  pFVar15 = pFVar17;
  if ((uVar16 != 0) &&
     (pFVar3 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar15 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    pFVar15 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar13 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014c729dd3;
    do {
      lVar1 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
      lVar4 = *(longlong *)(pFVar3 + ((ulonglong)pFVar15 >> 9) * 8);
      if ((*(short *)(lVar1 + lVar4) != 0) && (*(short *)(lVar1 + lVar4) != -1)) break;
      uVar13 = (uint)pFVar15 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar16);
  }
  uVar13 = (uint)pFVar15;
joined_r0x00014c729dd3:
  if (uVar13 != uVar16) {
    do {
      pFVar10 = (this->Mesh->AttributeSet).Ptr;
      pFVar9 = pFVar17;
      if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar10;
      }
      pFVar10 = pFVar17;
      if (0 < (pFVar9->UVLayers).Array.ArrayNum) {
        pFVar10 = *(FDynamicMeshAttributeSet **)(pFVar9->UVLayers).Array.AllocatorInstance.Data;
      }
      iVar14 = (int)pFVar15;
      bVar7 = TDynamicMeshOverlay<float,2>::IsSeamEdge
                        ((TDynamicMeshOverlay<float,2> *)pFVar10,iVar14,(bool *)0x0);
      if (bVar7) {
        if (((this->Constraints).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)&(this->Constraints).TypedValue.Edges.field_0x8 !=
            *(int *)&(this->Constraints).TypedValue.Edges.field_0x34) {
          puVar5 = *(undefined1 **)&(this->Constraints).TypedValue.Edges.field_0x40;
          puVar12 = &(this->Constraints).TypedValue.Edges.field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar12 = puVar5;
          }
          iVar8 = *(int *)(puVar12 +
                          ((ulonglong)(*(int *)&(this->Constraints).TypedValue.Edges.field_0x48 - 1)
                          & (ulonglong)pFVar15) * 4);
          if (iVar8 != -1) {
            lVar4 = *(longlong *)&(this->Constraints).TypedValue.Edges;
            do {
              lVar1 = lVar4 + (longlong)iVar8 * 0x28;
              if (*(int *)(lVar4 + (longlong)iVar8 * 0x28) == iVar14) {
                pFVar15 = (FDynamicMeshAttributeSet *)(lVar1 + 8);
                if (lVar1 == 0) {
                  pFVar15 = pFVar17;
                }
                if ((pFVar15 != (FDynamicMeshAttributeSet *)0x0) &&
                   (((int)pFVar15->_padding_ != 0 || (pFVar15->_padding_ != 0))))
                goto LAB_14c729ef4;
                break;
              }
              iVar8 = *(int *)(lVar1 + 0x20);
            } while (iVar8 != -1);
          }
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("cons.IsUnconstrained() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                           ,0x1ac,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
LAB_14c729ef4:
      uVar13 = iVar14 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014c729dd3;
      pFVar3 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar4 = ((ulonglong)pFVar15 >> 9) * 8;
        lVar1 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
        if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + lVar4)) != 0) &&
           (*(short *)(lVar1 + *(longlong *)(pFVar3 + lVar4)) != -1)) break;
        uVar13 = (uint)pFVar15 + 1;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014c729dd3;
      }
    } while( true );
  }
  pFVar2 = this->Mesh;
  uVar16 = (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  pFVar15 = pFVar17;
  if (((uVar16 != 0) &&
      (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      pFVar15 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar3 - 1U))) &&
     (pFVar15 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar16)) {
    do {
      lVar1 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
      lVar4 = *(longlong *)(pFVar3 + ((ulonglong)pFVar15 >> 9) * 8);
      if ((*(short *)(lVar1 + lVar4) != 0) && (*(short *)(lVar1 + lVar4) != -1)) break;
      uVar13 = (uint)pFVar15 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar16);
  }
  uVar13 = (uint)pFVar15;
joined_r0x00014c729fb8:
  if (uVar13 == uVar16) {
    return;
  }
  do {
    pFVar10 = (this->Mesh->AttributeSet).Ptr;
    pFVar9 = pFVar17;
    if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = pFVar10;
    }
    pFVar10 = pFVar17;
    if (0 < (pFVar9->UVLayers).Array.ArrayNum) {
      pFVar10 = *(FDynamicMeshAttributeSet **)(pFVar9->UVLayers).Array.AllocatorInstance.Data;
    }
    iVar14 = (int)pFVar15;
    bVar7 = TDynamicMeshOverlay<float,2>::IsSeamVertex
                      ((TDynamicMeshOverlay<float,2> *)pFVar10,iVar14,true);
    if (bVar7) {
      if (((this->Constraints).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x8 !=
          *(int *)&(this->Constraints).TypedValue.Vertices.field_0x34) {
        puVar5 = *(undefined1 **)&(this->Constraints).TypedValue.Vertices.field_0x40;
        puVar12 = &(this->Constraints).TypedValue.Vertices.field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar12 = puVar5;
        }
        iVar8 = *(int *)(puVar12 +
                        ((ulonglong)
                         (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x48 - 1) &
                        (ulonglong)pFVar15) * 4);
        if (iVar8 != -1) {
          do {
            piVar11 = (int *)((longlong)iVar8 * 0x20 +
                             *(longlong *)&(this->Constraints).TypedValue.Vertices);
            if (*piVar11 == iVar14) {
              pFVar15 = (FDynamicMeshAttributeSet *)(piVar11 + 2);
              if (piVar11 == (int *)0x0) {
                pFVar15 = pFVar17;
              }
              if ((pFVar15 != (FDynamicMeshAttributeSet *)0x0) &&
                 ((char)(int)pFVar15->_padding_ == '\x01')) goto LAB_14c72a0b4;
              break;
            }
            iVar8 = piVar11[6];
          } while (iVar8 != -1);
        }
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("cons.bCannotDelete == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                         ,0x1b4,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
LAB_14c72a0b4:
    uVar13 = iVar14 + 1;
    pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
    if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014c729fb8;
    while( true ) {
      lVar1 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
      lVar4 = *(longlong *)
               ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
               ((ulonglong)pFVar15 >> 9) * 8);
      if ((*(short *)(lVar1 + lVar4) != 0) && (*(short *)(lVar1 + lVar4) != -1)) break;
      uVar13 = (uint)pFVar15 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014c729fb8;
    }
  } while( true );
}

// DebugCheckVertexConstraints @ 14c72a120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FMeshRefinerBase::DebugCheckVertexConstraints(FMeshRefinerBase *this)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->Constraints).bIsSet != false) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar13 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                 *)local_98,
                (TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                 *)&(this->Constraints).TypedValue.Vertices);
    uVar14 = local_70;
    uStack_124 = 1;
    uStack_114 = uVar13;
    iStack_128 = 0;
    if (local_70 != 0) {
      puVar12 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar12 = local_78;
      }
      uVar11 = *puVar12;
      uVar13 = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)iStack_128;
        uVar13 = uVar13 + 0x20;
        iStack_128 = iStack_128 + 1;
        uStack_114 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
        goto LAB_14c72a221;
        uVar11 = (puVar12 + 1)[lVar9];
      }
      uStack_124 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_124 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_100 = (int)lVar9;
      uStack_114 = local_100 + -1 + uVar13;
      if ((int)local_70 < (int)uStack_114) {
        uStack_114 = local_70;
      }
    }
LAB_14c72a221:
    local_130 = (longlong *)local_98;
    local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar11 = local_70 & 0xffffffe0;
    iStack_108 = local_98._8_4_ - local_64;
    uStack_118 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_114;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_124,iStack_128);
    iVar10 = (int)local_70 >> 5;
    TStack_d8._28_4_ = uStack_114;
    TStack_d8.BaseBitIndex = uVar13;
    uStack_b8 = CONCAT44(uStack_104,iStack_108);
    bVar8 = (byte)local_70;
    local_110 = uVar13;
    uStack_10c = uStack_114;
    local_e0 = local_130;
    TStack_d8.Array = local_120;
    if (((int)local_70 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar5 = __real_3f1a36e2e0000000;
    if (uVar14 != local_70) {
      puVar12 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar12 = local_78;
      }
      uVar13 = -1 << (bVar8 & 0x1f) & puVar12[iVar10];
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        uVar11 = uVar11 + 0x20;
        iVar10 = iVar10 + 1;
        uVar14 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14c72a331;
        uVar13 = (puVar12 + 1)[lVar9];
      }
      uVar7 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uVar14 = local_fc + -1 + uVar11;
      if ((int)local_70 < (int)uVar14) {
        uVar14 = local_70;
      }
    }
LAB_14c72a331:
    while( true ) {
      plVar2 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        local_138[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (((TStack_d8.CurrentBitIndex == uVar14) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar2 == (longlong *)local_98)) break;
      lVar9 = *plVar2;
      uVar13 = *(uint *)((longlong)TStack_d8.CurrentBitIndex * 0x20 + lVar9);
      plVar2 = *(longlong **)((longlong)TStack_d8.CurrentBitIndex * 0x20 + 0x10 + lVar9);
      if (plVar2 != (longlong *)0x0) {
        uVar7 = (ulonglong)(uVar13 & 0x1ff);
        lVar9 = *(longlong *)
                 ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar13 >> 9) * 8);
        puVar1 = (undefined4 *)(lVar9 + uVar7 * 0x18);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        uStack_ec = puVar1[3];
        local_e8 = *(double *)(lVar9 + 0x10 + uVar7 * 0x18);
        (**(code **)(*plVar2 + 8))();
        dVar15 = (double)CONCAT44(uStack_ec,uStack_f0) - local_a8;
        dVar4 = (double)CONCAT44(uStack_f4,local_f8) - local_b0;
        if ((dVar5 <= dVar15 * dVar15 + dVar4 * dVar4 +
                      (local_e8 - local_a0) * (local_e8 - local_a0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(curpos - projected).SquaredLength() < 0.0001f",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                               ,0x1c9,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar10 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (uint *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return;
}

// DoDebugChecks @ 14c72d750

void __thiscall UE::Geometry::FMeshRefinerBase::DoDebugChecks(FMeshRefinerBase *this,bool param_1)

{
  if (this->DEBUG_CHECK_LEVEL != 0) {
    DebugCheckVertexConstraints(this);
    if ((2 < this->DEBUG_CHECK_LEVEL) || ((param_1 && (1 < this->DEBUG_CHECK_LEVEL)))) {
      (**(code **)(this->Mesh->_padding_ + 0xd8))(this->Mesh,0x101,1);
      DebugCheckUVSeamConstraints(this);
    }
  }
  return;
}

// IsVertexPositionConstrained @ 14c7513a0

bool __thiscall
UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained(FMeshRefinerBase *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  char cStack_17;
  
  if ((this->Constraints).bIsSet != false) {
    piVar5 = (int *)0x0;
    if (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x8 !=
        *(int *)&(this->Constraints).TypedValue.Vertices.field_0x34) {
      puVar4 = *(undefined1 **)&(this->Constraints).TypedValue.Vertices.field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->Constraints).TypedValue.Vertices.field_0x38;
      }
      iVar1 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->Constraints).TypedValue.Vertices.field_0x48 - 1U &
                                param_1) * 4);
      if (iVar1 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar1 * 0x20 +
                          *(longlong *)&(this->Constraints).TypedValue.Vertices);
          if (*piVar3 == param_1) {
            piVar2 = piVar3 + 2;
            if (piVar3 == (int *)0x0) {
              piVar2 = piVar5;
            }
            if (piVar2 != (int *)0x0) {
              cStack_17 = (char)((ulonglong)*(undefined8 *)piVar2 >> 8);
              piVar5 = *(int **)(piVar2 + 2);
              goto LAB_14c75140d;
            }
            break;
          }
          iVar1 = piVar3[6];
        } while (iVar1 != -1);
      }
    }
    cStack_17 = '\x01';
LAB_14c75140d:
    if ((cStack_17 == '\0') || (piVar5 != (int *)0x0)) {
      return true;
    }
  }
  return false;
}

// RuntimeDebugCheck @ 14c75fb80

void __thiscall
UE::Geometry::FMeshRefinerBase::RuntimeDebugCheck(FMeshRefinerBase *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->DebugEdges).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->DebugEdges).ArrayNum * 4;
  if (pFVar4 != pFVar1) {
    while (*(int *)pFVar4 != param_1) {
      pFVar4 = pFVar4 + 4;
      if (pFVar4 == pFVar1) {
        return;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6822847689076506224>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshRefinerBase.cpp"
                       ,400,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SaveEdgeBeforeModify @ 14c75fbf0

void __thiscall
UE::Geometry::FMeshRefinerBase::SaveEdgeBeforeModify(FMeshRefinerBase *this,int param_1)

{
  undefined8 uVar1;
  undefined4 uStackX_c;
  
  if (this->ActiveChangeTracker != (FDynamicMeshChangeTracker *)0x0) {
    uVar1 = *(undefined8 *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(this->_padding_ + 0x20))();
    uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014c75fc45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,uStackX_c);
    return;
  }
  return;
}

// SaveTriangleBeforeModify @ 14c75fff0

void __thiscall
UE::Geometry::FMeshRefinerBase::SaveTriangleBeforeModify(FMeshRefinerBase *this,int param_1)

{
  if (this->ActiveChangeTracker != (FDynamicMeshChangeTracker *)0x0) {
    FDynamicMeshChangeTracker::SaveTriangle(this->ActiveChangeTracker,param_1,true);
    return;
  }
  return;
}

// SaveVertexTrianglesBeforeModify @ 14c760010

void __thiscall
UE::Geometry::FMeshRefinerBase::SaveVertexTrianglesBeforeModify(FMeshRefinerBase *this,int param_1)

{
  FMeshRefinerBase *local_res8 [4];
  code *local_18;
  FMeshRefinerBase **local_10;
  
  if (this->ActiveChangeTracker != (FDynamicMeshChangeTracker *)0x0) {
    local_10 = local_res8;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshRefinerBase::SaveVertexTrianglesBeforeModify'::__l5::<lambda_1>,void,int>
               ::Call;
    local_res8[0] = this;
    FDynamicMesh3::EnumerateVertexTriangles
              (this->Mesh,param_1,(TFunctionRef<void___cdecl(int)> *)&local_18);
  }
  return;
}

// SetMeshChangeTracker @ 14c762480

void __thiscall
UE::Geometry::FMeshRefinerBase::SetMeshChangeTracker
          (FMeshRefinerBase *this,FDynamicMeshChangeTracker *param_1)

{
  this->ActiveChangeTracker = param_1;
  return;
}

// SetExternalConstraints @ 14c8286a0

void __thiscall
UE::Geometry::FMeshRefinerBase::SetExternalConstraints
          (FMeshRefinerBase *this,TOptional<UE::Geometry::FMeshConstraints> *param_1)

{
  TOptional<UE::Geometry::FMeshConstraints> *this_00;
  
  this_00 = &this->Constraints;
  if (param_1 != this_00) {
    if (param_1->bIsSet == false) {
      if ((this->Constraints).bIsSet != false) {
        FMeshConstraints::~FMeshConstraints(&this_00->TypedValue);
        (this->Constraints).bIsSet = false;
      }
    }
    else {
      if ((this->Constraints).bIsSet != false) {
        FMeshConstraints::~FMeshConstraints(&this_00->TypedValue);
      }
      FMeshConstraints::FMeshConstraints(&this_00->TypedValue,&param_1->TypedValue);
      (this->Constraints).bIsSet = true;
    }
  }
  if (param_1->bIsSet != false) {
    FMeshConstraints::~FMeshConstraints(&param_1->TypedValue);
  }
  return;
}

